// . Write a C program to swap two consecutive nodes in a single linked list without
// using any additional pointers

// Language: c
// Path: Lab 5/5_2_swapconsecutive.c

#include<stdio.h>
#include<stdlib.h>

struct node{
    int n;
    struct node* next;
};

struct node* head = NULL, * temp, * newnode;


