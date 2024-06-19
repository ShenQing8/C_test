#pragma once
#define _CRT_SECURE_NO_WARNINGS

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TEL 13
#define MAX_COUNT 100

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

//��ϵ����Ϣ
typedef struct PeoIfm
{
	int age;
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tel[MAX_TEL];
}PeoIfm;

//�绰����Ϣ
typedef struct Contact
{
	int count;
	PeoIfm pp[MAX_COUNT];
}Contact;

//��ʼ��
void InitContact(Contact* pc);

//����
void Add_Peo(Contact* pc);

//ɾ��
void Del_Peo(Contact* pc);

//����
void Clc_Peo(Contact* pc);

//����
void Srh_Peo(const Contact* pc);

//��ʾ
void Pre_Peo(const Contact* pc);

//����
void Sort_Peo(const Contact* pc);
