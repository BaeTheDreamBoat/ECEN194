#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "rss.h"

Rss * createEmptyRss() {
    return createEmptyRss("","","","");
}

Rss * createRss(const char * title, const char * link, const char * date, const char * description) {
    Rss *rss = (Rss *)malloc(sizeof(Rss)*1);

    rss->title = (char *)malloc(sizeof(char) * (strlen(title) + 1));
    strcpy(rss->title, title);

    rss->link = (char *)malloc(sizeof(char) * (strlen(link) + 1));
    strcpy(rss->link, link);

    rss->date = (char *)malloc(sizeof(char) * (strlen(date) + 1));
    strcpy(rss->date, date);

    rss->description = (char *)malloc(sizeof(char) * (strlen(description) + 1));
    strcpy(rss->description, description);

    return rss;
}

void initRss(Rss *feed, const char* title, const char* link, const char* date,
               const char* description) {
    feed->title = (char *)malloc(sizeof(char) * (strlen(title) + 1));
    strcpy(feed->title, title);

    feed->link = (char *)malloc(sizeof(char) * (strlen(link) + 1));
    strcpy(feed->link, link);

    feed->date = (char *)malloc(sizeof(char) * (strlen(date) + 1));
    strcpy(feed->date, date);

    feed->description = (char *)malloc(sizeof(char) * (strlen(description) + 1));
    strcpy(feed->description, description);

    return;
}

char *rssToString(const Rss*rss) {
  if (rss == NULL) {
    char *result = (char *)malloc(sizeof(char) * 7);
    strcpy(result, "(null)");
    return result;
  }

  // compute the number of characters we'll need:
  int n = strlen(rss->link) + strlen(rss->title) + strlen(rss->date) + strlen(rss->description) +1;

  // create a result string
  char *str = (char *)malloc(sizeof(char) * n);

  // format the rss into the temporary string
  sprintf(str, "%s, %s, %s, %s", rss->link,
          rss->title, rss->date,
          rss->description);

  // return the result
  return str;
}


void printRss(const Rss * item) {
    char *str = rssToString(item);
    printf("%s\n", str);
    free(str);
    return;
}
