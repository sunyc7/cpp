/***************************************************************************************************
 *  Project  :
 *  Function : 
 *--------------------------------------------------------------------------------------------------
 *  Author   : Yao-Chong SUN
 *  Company  : SUSTECH, CHINA.
 *--------------------------------------------------------------------------------------------------
 *  Copyright 2020-2021. You should have received a copy of the GNU
 *  General Public License v3.0 along with ndg2d.
 *  If not, see <http://www.gnu.org/licenses/>.
***************************************************************************************************/
#include<iostream>
#include"tool_memory.h"
#include"struct_array.h"
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
void ARRAY3DFLOAT:: errorMessage(std::string str)
{
  std::cout<<"ERROR in ARRAY3DFLOAT"<<std::endl;
  if(str=="index01") std::cout<<"  the input n1 or n2 or n3 <=0 in index"<<std::endl;
  if(str=="space01") std::cout<<"  the n1 or n2 or n3 <=0 in space"<<std::endl;
  exit(0);
}
//--------------------------------------------------------------------------------------------------
void ARRAY3DFLOAT:: index(int n1,int n2,int n3)
{
  if(n1<=0 or n2<=0 or n3<=0) errorMessage("index01");

  this->n1=n1;
  this->n2=n2;
  this->n3=n3;

  n1b=0;
  n1e=n1b+n1-1;

  n2b=0;
  n2e=n2b+n2-1;

  n3b=0;
  n3e=n3b+n3-1;
}
//--------------------------------------------------------------------------------------------------
void ARRAY3DFLOAT:: space()
{
  if(n3<=0 or n2<=0 or n1<=0) errorMessage("space01");
  if(buffer!=NULL) delete3Dfloat(buffer,n1,n2);
  buffer=new3Dfloat(n1,n2,n3);
}
//--------------------------------------------------------------------------------------------------
void ARRAY3DFLOAT:: clear()
{
  if(buffer!=NULL) delete3Dfloat(buffer,n1,n2);
  buffer=NULL;
  n1 =-1;
  n2 =-1;
  n3 =-1;
  n1b=-1;
  n2b=-1;
  n3b=-1;
  n1e=-1;
  n2e=-1;
  n3e=-1;
}
//--------------------------------------------------------------------------------------------------
ARRAY3DFLOAT:: ARRAY3DFLOAT(){clear();}
ARRAY3DFLOAT:: ARRAY3DFLOAT(int n1,int n2, int n3){clear();index(n1,n2,n3);space();}
//--------------------------------------------------------------------------------------------------
ARRAY3DFLOAT::~ARRAY3DFLOAT(){clear();}
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
void ARRAY2DFLOAT:: errorMessage(std::string str)
{
  std::cout<<"ERROR in ARRAY2DFLOAT"<<std::endl;
  if(str=="index01") std::cout<<"  the input n1 or n2 <=0 in index"<<std::endl;
  if(str=="space01") std::cout<<"  the n1 or n2 <=0 in space"<<std::endl;
  exit(0); 
}
//--------------------------------------------------------------------------------------------------
void ARRAY2DFLOAT:: index(int n1,int n2)
{
  if(n1<=0 or n2<=0) errorMessage("index01");
  this->n1=n1;
  this->n2=n2;
  n1b=0;
  n1e=n1b+n1-1;
  n2b=0;
  n2e=n2b+n2-1;
}
//--------------------------------------------------------------------------------------------------
void ARRAY2DFLOAT:: space()
{
  if(n1<=0 or n2<=0) errorMessage("space01");
  if(buffer!=NULL) delete2Dfloat(buffer,n1);
  buffer=new2Dfloat(n1,n2);
}
//--------------------------------------------------------------------------------------------------
void ARRAY2DFLOAT:: clear()
{
  if(buffer!=NULL) delete2Dfloat(buffer,n1);
  buffer=NULL;
  n1 =-1;
  n2 =-1;
  n1b=-1;
  n2b=-1;
  n1e=-1;
  n2e=-1;
}
//--------------------------------------------------------------------------------------------------
ARRAY2DFLOAT:: ARRAY2DFLOAT(){clear();}
ARRAY2DFLOAT:: ARRAY2DFLOAT(int n1,int n2){clear();index(n1,n2);space();}
//--------------------------------------------------------------------------------------------------
ARRAY2DFLOAT::~ARRAY2DFLOAT(){clear();}
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
void ARRAY1DFLOAT:: errorMessage(std::string str)
{
  std::cout<<"ERROR in ARRAY1DFLOAT"<<std::endl;
  if(str=="index01") std::cout<<"  the input n1 <=0 in index"<<std::endl;
  if(str=="space01") std::cout<<"  the n1 <=0 in space"<<std::endl;
  exit(0); 
}
//--------------------------------------------------------------------------------------------------
void ARRAY1DFLOAT:: index(int n1)
{
  if(n1<=0) errorMessage("index01");
  this->n1=n1;
  n1b=0;
  n1e=n1b+n1-1;
}
//--------------------------------------------------------------------------------------------------
void ARRAY1DFLOAT:: space()
{
  if(n1<=0) errorMessage("space01");
  if(buffer!=NULL) delete1Dfloat(buffer);
  buffer=new1Dfloat(n1);
}
//--------------------------------------------------------------------------------------------------
void ARRAY1DFLOAT:: clear()
{
  if(buffer!=NULL) delete1Dfloat(buffer);
  buffer=NULL;
  n1 =-1;
  n1b=-1;
  n1e=-1;
}
//--------------------------------------------------------------------------------------------------
ARRAY1DFLOAT:: ARRAY1DFLOAT(){clear();}
ARRAY1DFLOAT:: ARRAY1DFLOAT(int n1){clear();index(n1);space();}
//--------------------------------------------------------------------------------------------------
ARRAY1DFLOAT::~ARRAY1DFLOAT(){clear();}
//--------------------------------------------------------------------------------------------------

//**************************************************************************************************
// vim: ft=cpp:nu:nowrap
