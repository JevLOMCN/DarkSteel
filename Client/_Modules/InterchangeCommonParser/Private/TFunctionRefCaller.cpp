// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCommonParser
// Functions: 5

// Call @ 14e66ec60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInterchangeStepCurve::RemoveRedundantKeys'::__l8::<lambda_1>,bool,float_const_&,float_const_&>
::Call(void *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)((uint)(*param_2 - *param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  return fVar1 < *(float *)param_1 || fVar1 == *(float *)param_1;
}

// Call @ 14e66ec80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInterchangeStepCurve::RemoveRedundantKeys'::__l12::<lambda_2>,bool,int_const_&,int_const_&>
::Call(void *param_1,int *param_2,int *param_3)

{
  return *param_2 == *param_3;
}

// Call @ 14e66ec90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInterchangeStepCurve::RemoveRedundantKeys'::__l16::<lambda_3>,bool,FString_const_&,FString_const_&>
::Call(void *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_2->Data).ArrayNum;
  iVar1 = (param_3->Data).ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 == 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_3->Data).AllocatorInstance.Data);
    return iVar2 == 0;
  }
  return true;
}

// Call @ 14e66ece0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInterchangeStepCurve::RemoveRedundantKeys'::__l20::<lambda_4>,bool,bool_const_&,bool_const_&>
::Call(void *param_1,bool *param_2,bool *param_3)

{
  return *param_2 == *param_3;
}

// Call @ 14e66ecf0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInterchangeStepCurve::RemoveRedundantKeys'::__l24::<lambda_5>,bool,unsigned_char_const_&,unsigned_char_const_&>
::Call(void *param_1,uchar *param_2,uchar *param_3)

{
  return *param_2 == *param_3;
}

