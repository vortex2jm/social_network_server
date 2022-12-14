#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/package.h"

struct package{
  char * like;
  char * unlike;
  char * hobbieChange;
  char * post;
};

Package * PackageConstructor(char * like, char * unlike, char * hobbieChange, char * post){

  Package * package = malloc(sizeof(Package));
  package->like = strdup(like);
  package->unlike = strdup(unlike);
  package->hobbieChange = strdup(hobbieChange);
  package->post = strdup(post);

  return package;
}

char * GetLike(Package * package){
  return package->like;
}

char * GetUnlike(Package * package){
  return package->unlike;
}

char * GetHobbieChange(Package* package){
  return package->hobbieChange;
}

char * GetPost(Package * package){
  return package->post;
}

void FreePackage(Package * package){
  if(package){
    if(package->like)free(package->like);
    if(package->unlike)free(package->unlike);
    if(package->hobbieChange)free(package->hobbieChange);
    if(package->post)free(package->post);
    free(package);
  }
}

void FreePackages(Package ** packages, int packagesAmount){
  if(packages){
    for(int x=0;x<packagesAmount;x++){
      FreePackage(packages[x]);
    }
    free(packages);
  }
}

void PrintPackage(Package * package){
  if(!package){
    printf("Ainda nao há um pacote!\n");
    return;
  }
  printf("%s\n",package->like);
  printf("%s\n",package->unlike);
  printf("%s\n",package->hobbieChange);
  printf("%s\n",package->post);
}
