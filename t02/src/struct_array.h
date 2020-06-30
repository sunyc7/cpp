/********************************************************************************
 *  Project  :
 *  Function : 
 *-------------------------------------------------------------------------------
 *  Author   : Yao-Chong SUN
 *  Company  : SUSTECH, CHINA.
 *-------------------------------------------------------------------------------
 *  Copyright 2020-2021. You should have received a copy of the GNU
 *  General Public License v3.0 along with ndg2d.
 *  If not, see <http://www.gnu.org/licenses/>.
********************************************************************************/
#ifndef __STRUCT_ARRAY_H__
#define __STRUCT_ARRAY_H__
//-------------------------------------------------------------------------------
struct ARRAY3DFLOAT
{
  private:
    void errorMessage(std::string);
    void clear();
    int n1 =-1;
    int n2 =-1;
    int n3 =-1;
  public:
    int n1b=-1;
    int n1e=-1;
    int n2b=-1;
    int n2e=-1;
    int n3b=-1;
    int n3e=-1;
    float*** buffer=NULL;
    void index(int,int,int);
    void space();

    ARRAY3DFLOAT();
    ARRAY3DFLOAT(int,int,int);
   ~ARRAY3DFLOAT();
};
//-------------------------------------------------------------------------------

//-------------------------------------------------------------------------------
struct ARRAY2DFLOAT
{
  private:
    void errorMessage(std::string);
    void clear();
    int n1 =-1;
    int n2 =-1;
  public:
    int n1b=-1;
    int n1e=-1;
    int n2b=-1;
    int n2e=-1;
    float** buffer=NULL;
    void index(int,int);
    void space();

    ARRAY2DFLOAT();
    ARRAY2DFLOAT(int,int);
   ~ARRAY2DFLOAT();
};
//-------------------------------------------------------------------------------

//-------------------------------------------------------------------------------
struct ARRAY1DFLOAT
{
  private:
    void errorMessage(std::string);
    void clear();
    int n1 =-1;
  public:
    int n1b=-1;
    int n1e=-1;
    float* buffer=NULL;
    void index(int);
    void space();

    ARRAY1DFLOAT();
    ARRAY1DFLOAT(int);
   ~ARRAY1DFLOAT();
};
//-------------------------------------------------------------------------------

//-------------------------------------------------------------------------------
#endif
//*******************************************************************************
// vim: ft=cpp:nu:nowrap
