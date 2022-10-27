/**
  ******************************************************************************
  * @file    main.c
  * @author  Hoyem Zaidi
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
//#define SOM
#define SOM
//#define MUL
#define MUL
//#define OTHERS
#define OTHERS


/* Private function prototypes -----------------------------------------------*/
static int Som(int var1, int var2);
static int Mul(int var1, int var2);
static int Max(int var1, int var2);
static int Min(int var1, int var2);
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */

int main(void)
{
#ifdef SOM
  int Resultsom = Som(10,2);
#endif
  
#ifdef OTHERS
  int Resultmin = Min(10,2);
  int Resultmax = Max(100,20);
#endif
  
#ifdef MUL
 int Resultmul = Mul(100,20);
#endif


  while (1)
  {
   
  }
    
}
#ifdef SOM
static int Som(int var1, int var2)
  {
    return(var1 + var2);
  }
#endif

#ifdef MUL
static int Mul(int var1, int var2)
  {
    return(var1 * var2);
  }
#endif

#ifdef OTHERS
static int Max(int var1, int var2)
  { int resultmax;
     resultmax = ( var1 > var2) ? var1 : var2;
     return resultmax;
  } 
static int Min(int var1, int var2)
  {  int resultmin;
      resultmin = ( var1 < var2) ? var1 : var2;
      return resultmin;  
  }   
#endif



/**************************************END OF FILE**************************************/
