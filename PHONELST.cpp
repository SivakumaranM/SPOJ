#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<string>
using namespace std;

int flag;

//Fast input
#define gc getchar_unlocked
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57); c = gc());
    for(;c>47 && c<58; c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

struct trienode
{
	int value;
	struct trienode *children[10];
};

typedef struct trienode t_node;

struct trie
{
	int count;
	t_node *root;
};

typedef struct trie t;

t_node* getNode()
{
	t_node *temp;
	temp=(t_node*)malloc(sizeof(t_node));
	temp->value=0;
	for(int i=0; i<10; i++)
		temp->children[i]=NULL;
	return temp;
}

void insert(t *h, char key[])
{
	t_node *pCrawl;
	pCrawl=h->root;
	int index;
	for(int i=0; i<strlen(key); i++)
	{
		index=(int)key[i]-48;
		if(pCrawl->value>0)
			flag=1;
		if(pCrawl->children[index]==NULL)
			pCrawl->children[index]=getNode();
		pCrawl=pCrawl->children[index];
	}
	h->count++;
	pCrawl->value=h->count;
	if(flag==0)
	{
		for(i=0; i<10; i++)
		{
			if(pCrawl->children[i]!=NULL)
			{
				flag=1;
				break;
			}
		}
	}
}

void initialise(t *h)
{
	h->root=getNode();
	h->count=0;
}

int main()
{
	int n, num, i;
	char str[11];
	scanint(n);
	while(n--)
	{
		t head;
		initialise(&head);
		scanint(num);
		flag=0;
		for(i=0; i<num; i++)
		{
			scanf("%s", str);
			insert(&head, str);
		}
		if(flag==1)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}

