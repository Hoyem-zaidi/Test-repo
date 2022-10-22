/**
  ******************************************************************************
  * @file    main.c
  * @author  Mouadh Dahech
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define SOM
//#define MUL
#define MUL
//#define OTHERS


/* Private function prototypes -----------------------------------------------*/
static int Som(int var1, int var2);
static int Mul(int var1, int var2);
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */

int main(void)
{
#ifdef SOM
  int Resultsom = Som(3,4);
#endif
#ifdef MUL
 int Resultmul = Mul(3.4);
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


/**************************************END OF FILE**************************************/
