/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

 #include "calculate.h"
 #include <math.h>

 float * add_1_svc(inputs *argp, struct svc_req *rqstp)
 {
  static float result;

  result = argp->num1+argp->num2;
  printf("Got Request : Adding %f and %f\n",argp->num1,argp->num2);
  printf("Sent Response : %f\n",result);

  return &result;
 }

 float * sub_1_svc(inputs *argp, struct svc_req *rqstp)
 {
  static float result;

  result = argp->num1-argp->num2;
  printf("Got Request : subtracting %f from %f\n",argp->num2,argp->num1);
  printf("Sent Response : %f\n",result);

  return &result;
 }

 float * mul_1_svc(inputs *argp, struct svc_req *rqstp)
 {
  static float result;

  result = argp->num1*argp->num2;
  printf("Got Request : Multiplying %f by %f\n",argp->num1,argp->num2);
  printf("Sent Response : %f\n",result);

  return &result;
 }

 float * div_1_svc(inputs *argp, struct svc_req *rqstp)
 {
  static float result;

  result = argp->num1/argp->num2;
  printf("Got Request : Dividing %f by %f\n",argp->num1,argp->num2);
  printf("Sent Response : %f\n",result);

  return &result;
 }

float * sqr_1_svc(inputs *argp, struct svc_req *rqstp)
{
	static float result;
	result = argp->num1*argp->num1;

  printf("Got Request : Square of  %f\n",argp->num1);
  printf("Sent Response : %f\n",result);

  return &result;
}

float * sqt_1_svc(inputs *argp, struct svc_req *rqstp)
{
	static float result;

	result = sqrt(argp->num1);

  printf("Got Request : Square root  of  %f\n",argp->num1);
  printf("Sent Response : %f\n",result);

  return &result;
}

float * sin_1_svc(inputs *argp, struct svc_req *rqstp)
{
	static float result;
	result = sin(argp->num1);

  printf("Got Request : Sine of  %f\n",argp->num1);
  printf("Sent Response : %f\n",result);

  return &result;
}

float * cos_1_svc(inputs *argp, struct svc_req *rqstp)
{
	static float result;
	result = sin(argp->num1);

  printf("Got Request : Cosine of  %f\n",argp->num1);
  printf("Sent Response : %f\n",result);

  return &result;
}

float * tan_1_svc(inputs *argp, struct svc_req *rqstp)
{
	static float result;
	result = tan(argp->num1);

  printf("Got Request : Tangent of  %f\n",argp->num1);
  printf("Sent Response : %f\n",result);

  return &result;
}

float * log_1_svc(inputs *argp, struct svc_req *rqstp)
{
	static float result;
	result = log(argp->num1);

  printf("Got Request : Logarithm of  %f\n",argp->num1);
  printf("Sent Response : %f\n",result);

  return &result;
}
