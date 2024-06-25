#pragma once
#define _CRT_SECURE_NO_WARNINGS

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TEL 13

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

//联系人信息
typedef struct PeoIfm
{
	int age;
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tel[MAX_TEL];
}PeoIfm;

//电话本信息
typedef struct Contact
{
	PeoIfm* pp;
	int count;
}Contact;

//初始化
void InitContact(Contact* pc);

//销毁
void Distroy(Contact* pc);

//添加
void Add_Peo(Contact* pc);

//删除
void Del_Peo(Contact* pc);

//更改
void Crc_Peo(Contact* pc);

//查找
void Srh_Peo(const Contact* pc);

//显示
void Pre_Peo(const Contact* pc);

//排序
void Sort_Peo(const Contact* pc);

//保存
void Save_Peo(const Contact* pc);


