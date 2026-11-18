// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 21

// <lambda_invoker_cdecl> @ 14e11f190

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l12::<lambda_10>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  
  pfVar2 = param_1->DataPtr;
  if (param_1->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  fVar4 = tanf(*pfVar2);
  return fVar4;
}

// <lambda_invoker_cdecl> @ 14e11f200

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l13::<lambda_11>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  float _X;
  
  pfVar2 = param_1->DataPtr;
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    fVar4 = (float)(*pcVar1)();
    return fVar4;
  }
  fVar4 = *pfVar2;
  _X = __real_bf800000;
  if ((__real_bf800000 <= fVar4) && (_X = fVar4, __real_3f800000 <= fVar4)) {
    _X = __real_3f800000;
  }
  fVar4 = asinf(_X);
  return fVar4;
}

// <lambda_invoker_cdecl> @ 14e11f280

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l14::<lambda_12>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  float _X;
  
  pfVar2 = param_1->DataPtr;
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    fVar4 = (float)(*pcVar1)();
    return fVar4;
  }
  fVar4 = *pfVar2;
  _X = __real_bf800000;
  if ((__real_bf800000 <= fVar4) && (_X = fVar4, __real_3f800000 <= fVar4)) {
    _X = __real_3f800000;
  }
  fVar4 = acosf(_X);
  return fVar4;
}

// <lambda_invoker_cdecl> @ 14e11f300

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l15::<lambda_13>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  
  pfVar2 = param_1->DataPtr;
  if (param_1->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  fVar4 = atanf(*pfVar2);
  return fVar4;
}

// <lambda_invoker_cdecl> @ 14e11f370

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l16::<lambda_14>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  
  pfVar2 = param_1->DataPtr;
  if (param_1->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return SQRT(*pfVar2);
}

// <lambda_invoker_cdecl> @ 14e11f3e0

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l17::<lambda_15>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  
  pfVar2 = param_1->DataPtr;
  if (param_1->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return __real_3f800000 / SQRT(*pfVar2);
}

// <lambda_invoker_cdecl> @ 14e11f450

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l18::<lambda_16>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  
  pfVar2 = param_1->DataPtr;
  if (param_1->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  fVar4 = logf(*pfVar2);
  return fVar4;
}

// <lambda_invoker_cdecl> @ 14e11f4c0

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l19::<lambda_17>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  
  pfVar2 = param_1->DataPtr;
  if (param_1->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  fVar4 = expf(*pfVar2);
  return fVar4;
}

// <lambda_invoker_cdecl> @ 14e11f530

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l20::<lambda_18>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  return __real_40490fdb;
}

// <lambda_invoker_cdecl> @ 14e11f540

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l21::<lambda_19>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  return __real_402df854;
}

// <lambda_invoker_cdecl> @ 14e11f620

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l3::<lambda_1>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  float *pfVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  iVar2 = param_1->ArrayNum;
  pfVar4 = param_1->DataPtr;
  if (iVar2 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return fVar6;
    }
  }
  fVar6 = pfVar4[2];
  if (iVar2 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return fVar6;
    }
  }
  fVar1 = pfVar4[1];
  if (iVar2 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return fVar6;
    }
  }
  fVar7 = *pfVar4;
  if (fVar6 <= *pfVar4) {
    fVar7 = fVar6;
  }
  if (fVar7 <= fVar1) {
    fVar7 = fVar1;
  }
  return fVar7;
}

// <lambda_invoker_cdecl> @ 14e11f7e0

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l4::<lambda_2>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  float *pfVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = param_1->ArrayNum;
  pfVar3 = param_1->DataPtr;
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  fVar5 = pfVar3[1];
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  fVar6 = *pfVar3;
  if (fVar5 <= fVar6) {
    fVar6 = fVar5;
  }
  return fVar6;
}

// <lambda_invoker_cdecl> @ 14e11f940

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l5::<lambda_3>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  float *pfVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = param_1->ArrayNum;
  pfVar3 = param_1->DataPtr;
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  fVar5 = pfVar3[1];
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  fVar6 = *pfVar3;
  if (fVar6 <= fVar5) {
    fVar6 = fVar5;
  }
  return fVar6;
}

// <lambda_invoker_cdecl> @ 14e11faa0

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l6::<lambda_4>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  
  pfVar2 = param_1->DataPtr;
  if (param_1->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return (float)((uint)*pfVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff);
}

// <lambda_invoker_cdecl> @ 14e11fbc0

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l7::<lambda_5>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  undefined1 in_XMM0 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar5 [16];
  
  pfVar2 = param_1->DataPtr;
  if (param_1->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    in_XMM0 = extraout_XMM0;
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  auVar5 = roundps(in_XMM0,ZEXT416((uint)(*pfVar2 + __real_3f000000)),1);
  return auVar5._0_4_;
}

// <lambda_invoker_cdecl> @ 14e11fde0

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l8::<lambda_6>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  pfVar2 = param_1->DataPtr;
  if (param_1->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  auVar5 = roundps(ZEXT416((uint)*pfVar2),ZEXT416((uint)*pfVar2),2);
  return auVar5._0_4_;
}

// <lambda_invoker_cdecl> @ 14e11ff00

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l9::<lambda_7>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  pfVar2 = param_1->DataPtr;
  if (param_1->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  auVar5 = roundps(ZEXT416((uint)*pfVar2),ZEXT416((uint)*pfVar2),1);
  return auVar5._0_4_;
}

// <lambda_invoker_cdecl> @ 14e11ff70

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l10::<lambda_8>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  
  pfVar2 = param_1->DataPtr;
  if (param_1->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  fVar4 = sinf(*pfVar2);
  return fVar4;
}

// <lambda_invoker_cdecl> @ 14e11ffe0

float __cdecl
`Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l11::<lambda_9>::
<lambda_invoker_cdecl>(TArrayView<float_const_,int> *param_1)

{
  code *pcVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  
  pfVar2 = param_1->DataPtr;
  if (param_1->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  fVar4 = cosf(*pfVar2);
  return fVar4;
}

// FBuiltinFunctions @ 14e14db00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e14f644) */
/* WARNING: Removing unreachable block (ram,0x00014e14f357) */
/* WARNING: Removing unreachable block (ram,0x00014e14f067) */
/* WARNING: Removing unreachable block (ram,0x00014e14ed77) */
/* WARNING: Removing unreachable block (ram,0x00014e14ea83) */
/* WARNING: Removing unreachable block (ram,0x00014e14e77d) */
/* WARNING: Removing unreachable block (ram,0x00014e14e477) */
/* WARNING: Removing unreachable block (ram,0x00014e14e171) */
/* WARNING: Removing unreachable block (ram,0x00014e14de6b) */
/* WARNING: Removing unreachable block (ram,0x00014e14dcee) */
/* WARNING: Removing unreachable block (ram,0x00014e14dfee) */
/* WARNING: Removing unreachable block (ram,0x00014e14e2f4) */
/* WARNING: Removing unreachable block (ram,0x00014e14e5fa) */
/* WARNING: Removing unreachable block (ram,0x00014e14e900) */
/* WARNING: Removing unreachable block (ram,0x00014e14ebfd) */
/* WARNING: Removing unreachable block (ram,0x00014e14eeef) */
/* WARNING: Removing unreachable block (ram,0x00014e14f1df) */
/* WARNING: Removing unreachable block (ram,0x00014e14f4cf) */
/* WARNING: Removing unreachable block (ram,0x00014e14f7b0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffb28 : 0x00014e14dcf2 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FBuiltinFunctions * __thiscall
Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions(FBuiltinFunctions *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FBuiltinFunctions *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStack_7a8 [32];
  undefined4 *local_788;
  FScriptContainerElement *local_780;
  longlong local_778;
  longlong local_770;
  undefined8 local_768;
  undefined4 local_758;
  int local_754;
  int local_750;
  int local_74c;
  int local_748;
  int local_744;
  int local_740;
  int local_73c;
  int local_738;
  int local_734;
  int local_730;
  int local_72c;
  int local_728;
  int local_724;
  int local_720;
  int local_71c;
  int local_718;
  int local_714;
  int local_710;
  undefined1 local_70c [8];
  undefined1 local_704 [8];
  undefined1 local_6fc [8];
  undefined1 local_6f4 [8];
  undefined1 local_6ec [8];
  undefined1 local_6e4 [8];
  undefined1 local_6dc [8];
  undefined1 local_6d4 [8];
  undefined1 local_6cc [8];
  undefined1 local_6c4 [4];
  FName *local_6c0;
  int *local_6b8;
  FName *local_6b0;
  int *local_6a8;
  FName *local_6a0;
  int *local_698;
  FName *local_690;
  int *local_688;
  FName *local_680;
  int *local_678;
  FName *local_670;
  int *local_668;
  FName *local_660;
  int *local_658;
  FName *local_650;
  int *local_648;
  FName *local_640;
  int *local_638;
  FName *local_630;
  int *local_628;
  FName *local_620;
  undefined4 *local_618;
  FName *local_610;
  int *local_608;
  FName *local_600;
  int *local_5f8;
  FName *local_5f0;
  int *local_5e8;
  FName *local_5e0;
  int *local_5d8;
  FName *local_5d0;
  int *local_5c8;
  FName *local_5c0;
  int *local_5b8;
  FName *local_5b0;
  int *local_5a8;
  FName *local_5a0;
  int *local_598;
  FName local_590;
  FName local_588;
  FName local_580;
  FName local_578;
  FName local_570;
  FName local_568;
  FName local_560;
  FName local_558;
  FName local_550;
  FName local_548;
  FName local_540;
  FName local_538;
  FName local_530;
  FName local_528;
  FName local_520;
  FName local_518;
  FName local_510;
  FName local_508;
  FName local_500;
  undefined4 local_4f8 [4];
  code *local_4e8;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined4 local_4b8 [4];
  code *local_4a8;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined4 local_478 [4];
  code *local_468;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined4 local_438 [4];
  code *local_428;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined4 local_3f8 [4];
  code *local_3e8;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8 [4];
  code *local_3a8;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined4 local_378 [4];
  code *local_368;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined4 local_338 [4];
  code *local_328;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f8 [4];
  code *local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8 [4];
  code *local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined4 local_278 [4];
  code *local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined4 local_238 [4];
  code *local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8 [4];
  code *local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8 [4];
  code *local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178 [4];
  code *local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138 [4];
  code *local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8 [4];
  code *local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8 [4];
  code *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78 [4];
  code *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_7a8;
  *(undefined8 *)&this->FunctionNameIndex = 0;
  *(undefined8 *)&(this->FunctionNameIndex).field_0x8 = 0;
  *(undefined8 *)&(this->FunctionNameIndex).field_0x20 = 0;
  *(undefined4 *)&(this->FunctionNameIndex).field_0x28 = 0;
  *(undefined4 *)&(this->FunctionNameIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->FunctionNameIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FunctionNameIndex).field_0x34 = 0;
  *(undefined8 *)&(this->FunctionNameIndex).field_0x40 = 0;
  *(undefined4 *)&(this->FunctionNameIndex).field_0x48 = 0;
  (this->Functions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Functions).ArrayNum = 0;
  (this->Functions).ArrayMax = 0;
  local_758 = 0;
  local_620 = ::FName::FName(&local_590,"clamp");
  local_618 = &local_758;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)local_70c,(bool *)&local_620);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_4d0 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l3::<lambda_1>::
               <lambda_invoker_cdecl>;
  local_4f8[0] = 3;
  local_4c0 = 0;
  local_4d8 = &
              ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_4e8 = UE::Core::Private::Function::
              TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
              ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_4f8) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_4f8 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_4f8;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_4f8[0];
  *(code **)(pFVar6 + 0x10) = local_4e8;
  *(undefined8 *)(pFVar6 + 0x38) = local_4c0;
  local_4c0 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_4d8;
  *(undefined4 *)(pFVar6 + 0x24) = local_4d8._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_4d0;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_4d0._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_4c8;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_4e8 != (code *)0x0) {
      (*(code *)local_4d8[2])();
    }
  }
  else {
    local_4e8 = (code *)0x0;
  }
  local_754 = (this->Functions).ArrayNum;
  local_630 = ::FName::FName(&local_588,"min");
  local_628 = &local_754;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)(local_70c + 4),(bool *)&local_630);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_490 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l4::<lambda_2>::
               <lambda_invoker_cdecl>;
  local_4b8[0] = 2;
  local_480 = 0;
  local_498 = &
              ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_4a8 = UE::Core::Private::Function::
              TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
              ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_4b8) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_4b8 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_4b8;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_4b8[0];
  *(code **)(pFVar6 + 0x10) = local_4a8;
  *(undefined8 *)(pFVar6 + 0x38) = local_480;
  local_480 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_498;
  *(undefined4 *)(pFVar6 + 0x24) = local_498._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_490;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_490._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_488;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_4a8 != (code *)0x0) {
      (*(code *)local_498[2])();
    }
  }
  else {
    local_4a8 = (code *)0x0;
  }
  local_750 = (this->Functions).ArrayNum;
  local_610 = ::FName::FName(&local_580,"max");
  local_608 = &local_750;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)local_704,(bool *)&local_610);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_450 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l5::<lambda_3>::
               <lambda_invoker_cdecl>;
  local_478[0] = 2;
  local_440 = 0;
  local_458 = &
              ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_468 = UE::Core::Private::Function::
              TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
              ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_478) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_478 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_478;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_478[0];
  *(code **)(pFVar6 + 0x10) = local_468;
  *(undefined8 *)(pFVar6 + 0x38) = local_440;
  local_440 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_458;
  *(undefined4 *)(pFVar6 + 0x24) = local_458._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_450;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_450._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_448;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_468 != (code *)0x0) {
      (*(code *)local_458[2])();
    }
  }
  else {
    local_468 = (code *)0x0;
  }
  local_74c = (this->Functions).ArrayNum;
  local_600 = ::FName::FName(&local_578,"abs");
  local_5f8 = &local_74c;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)(local_704 + 4),(bool *)&local_600);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_410 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l6::<lambda_4>::
               <lambda_invoker_cdecl>;
  local_438[0] = 1;
  local_400 = 0;
  local_418 = &
              ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_428 = UE::Core::Private::Function::
              TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
              ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_438) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_438 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_438;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_438[0];
  *(code **)(pFVar6 + 0x10) = local_428;
  *(undefined8 *)(pFVar6 + 0x38) = local_400;
  local_400 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_418;
  *(undefined4 *)(pFVar6 + 0x24) = local_418._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_410;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_410._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_408;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_428 != (code *)0x0) {
      (*(code *)local_418[2])();
    }
  }
  else {
    local_428 = (code *)0x0;
  }
  local_748 = (this->Functions).ArrayNum;
  local_5f0 = ::FName::FName(&local_570,"round");
  local_5e8 = &local_748;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)local_6fc,(bool *)&local_5f0);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_3d0 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l7::<lambda_5>::
               <lambda_invoker_cdecl>;
  local_3f8[0] = 1;
  local_3c0 = 0;
  local_3d8 = &
              ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_3e8 = UE::Core::Private::Function::
              TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
              ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_3f8) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_3f8 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_3f8;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_3f8[0];
  *(code **)(pFVar6 + 0x10) = local_3e8;
  *(undefined8 *)(pFVar6 + 0x38) = local_3c0;
  local_3c0 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_3d8;
  *(undefined4 *)(pFVar6 + 0x24) = local_3d8._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_3d0;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_3d0._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_3c8;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_3e8 != (code *)0x0) {
      (*(code *)local_3d8[2])();
    }
  }
  else {
    local_3e8 = (code *)0x0;
  }
  local_744 = (this->Functions).ArrayNum;
  local_5e0 = ::FName::FName(&local_568,"ceil");
  local_5d8 = &local_744;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)(local_6fc + 4),(bool *)&local_5e0);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_390 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l8::<lambda_6>::
               <lambda_invoker_cdecl>;
  local_3b8[0] = 1;
  local_380 = 0;
  local_398 = &
              ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_3a8 = UE::Core::Private::Function::
              TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
              ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_3b8) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_3b8 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_3b8;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_3b8[0];
  *(code **)(pFVar6 + 0x10) = local_3a8;
  *(undefined8 *)(pFVar6 + 0x38) = local_380;
  local_380 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_398;
  *(undefined4 *)(pFVar6 + 0x24) = local_398._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_390;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_390._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_388;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_3a8 != (code *)0x0) {
      (*(code *)local_398[2])();
    }
  }
  else {
    local_3a8 = (code *)0x0;
  }
  local_740 = (this->Functions).ArrayNum;
  local_5d0 = ::FName::FName(&local_560,"floor");
  local_5c8 = &local_740;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)local_6f4,(bool *)&local_5d0);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_350 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l9::<lambda_7>::
               <lambda_invoker_cdecl>;
  local_378[0] = 1;
  local_340 = 0;
  local_358 = &
              ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_368 = UE::Core::Private::Function::
              TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
              ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_378) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_378 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_378;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_378[0];
  *(code **)(pFVar6 + 0x10) = local_368;
  *(undefined8 *)(pFVar6 + 0x38) = local_340;
  local_340 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_358;
  *(undefined4 *)(pFVar6 + 0x24) = local_358._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_350;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_350._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_348;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_368 != (code *)0x0) {
      (*(code *)local_358[2])();
    }
  }
  else {
    local_368 = (code *)0x0;
  }
  local_73c = (this->Functions).ArrayNum;
  local_5c0 = ::FName::FName(&local_558,"sin");
  local_5b8 = &local_73c;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)(local_6f4 + 4),(bool *)&local_5c0);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_310 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l10::<lambda_8>::
               <lambda_invoker_cdecl>;
  local_338[0] = 1;
  local_300 = 0;
  local_318 = &
              ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_328 = UE::Core::Private::Function::
              TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
              ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_338) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_338 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_338;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_338[0];
  *(code **)(pFVar6 + 0x10) = local_328;
  *(undefined8 *)(pFVar6 + 0x38) = local_300;
  local_300 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_318;
  *(undefined4 *)(pFVar6 + 0x24) = local_318._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_310;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_310._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_308;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_328 != (code *)0x0) {
      (*(code *)local_318[2])();
    }
  }
  else {
    local_328 = (code *)0x0;
  }
  local_738 = (this->Functions).ArrayNum;
  local_5b0 = ::FName::FName(&local_550,"cos");
  local_5a8 = &local_738;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)local_6ec,(bool *)&local_5b0);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_2d0 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l11::<lambda_9>::
               <lambda_invoker_cdecl>;
  local_2f8[0] = 1;
  local_2c0 = 0;
  local_2d8 = &
              ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_2e8 = UE::Core::Private::Function::
              TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
              ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_2f8) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_2f8 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_2f8;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_2f8[0];
  *(code **)(pFVar6 + 0x10) = local_2e8;
  *(undefined8 *)(pFVar6 + 0x38) = local_2c0;
  local_2c0 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_2d8;
  *(undefined4 *)(pFVar6 + 0x24) = local_2d8._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_2d0;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_2d0._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_2c8;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_2e8 != (code *)0x0) {
      (*(code *)local_2d8[2])();
    }
  }
  else {
    local_2e8 = (code *)0x0;
  }
  local_734 = (this->Functions).ArrayNum;
  local_5a0 = ::FName::FName(&local_538,"tan");
  local_598 = &local_734;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)(local_6ec + 4),(bool *)&local_5a0);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_290 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l12::<lambda_10>::
               <lambda_invoker_cdecl>;
  local_2b8[0] = 1;
  local_280 = 0;
  local_298 = &
              ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_2a8 = UE::Core::Private::Function::
              TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
              ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_2b8) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_2b8 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_2b8;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_2b8[0];
  *(code **)(pFVar6 + 0x10) = local_2a8;
  *(undefined8 *)(pFVar6 + 0x38) = local_280;
  local_280 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_298;
  *(undefined4 *)(pFVar6 + 0x24) = local_298._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_290;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_290._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_288;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_2a8 != (code *)0x0) {
      (*(code *)local_298[2])();
    }
  }
  else {
    local_2a8 = (code *)0x0;
  }
  local_730 = (this->Functions).ArrayNum;
  local_6c0 = ::FName::FName(&local_540,"asin");
  local_6b8 = &local_730;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)local_6e4,(bool *)(local_6c4 + 4));
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_250 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l13::<lambda_11>::
               <lambda_invoker_cdecl>;
  local_278[0] = 1;
  local_240 = 0;
  local_258 = &
              ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_268 = UE::Core::Private::Function::
              TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
              ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_278) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_278 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_278;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_278[0];
  *(code **)(pFVar6 + 0x10) = local_268;
  *(undefined8 *)(pFVar6 + 0x38) = local_240;
  local_240 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_258;
  *(undefined4 *)(pFVar6 + 0x24) = local_258._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_250;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_250._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_248;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_268 != (code *)0x0) {
      (*(code *)local_258[2])();
    }
  }
  else {
    local_268 = (code *)0x0;
  }
  local_72c = (this->Functions).ArrayNum;
  local_6b0 = ::FName::FName(&local_530,"acos");
  local_6a8 = &local_72c;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)(local_6e4 + 4),(bool *)&local_6b0);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_210 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l14::<lambda_12>::
               <lambda_invoker_cdecl>;
  local_238[0] = 1;
  local_200 = 0;
  local_218 = &
              ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_228 = UE::Core::Private::Function::
              TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
              ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_238) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_238 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_238;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_238[0];
  *(code **)(pFVar6 + 0x10) = local_228;
  *(undefined8 *)(pFVar6 + 0x38) = local_200;
  local_200 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_218;
  *(undefined4 *)(pFVar6 + 0x24) = local_218._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_210;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_210._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_208;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_228 != (code *)0x0) {
      (*(code *)local_218[2])();
    }
  }
  else {
    local_228 = (code *)0x0;
  }
  local_728 = (this->Functions).ArrayNum;
  local_6a0 = ::FName::FName(&local_528,"atan");
  local_698 = &local_728;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)local_6dc,(bool *)&local_6a0);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_1d0 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l15::<lambda_13>::
               <lambda_invoker_cdecl>;
  local_1f8[0] = 1;
  local_1c0 = 0;
  local_1d8 = &
              ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_1e8 = UE::Core::Private::Function::
              TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
              ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_1f8) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_1f8 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_1f8;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_1f8[0];
  *(code **)(pFVar6 + 0x10) = local_1e8;
  *(undefined8 *)(pFVar6 + 0x38) = local_1c0;
  local_1c0 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_1d8;
  *(undefined4 *)(pFVar6 + 0x24) = local_1d8._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_1d0;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_1d0._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_1c8;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_1e8 != (code *)0x0) {
      (*(code *)local_1d8[2])();
    }
  }
  else {
    local_1e8 = (code *)0x0;
  }
  local_724 = (this->Functions).ArrayNum;
  local_690 = ::FName::FName(&local_520,"sqrt");
  local_688 = &local_724;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)(local_6dc + 4),(bool *)&local_690);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_190 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l16::<lambda_14>::
               <lambda_invoker_cdecl>;
  local_1b8[0] = 1;
  local_180 = 0;
  local_198 = &
              ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_1a8 = UE::Core::Private::Function::
              TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
              ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_1b8) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_1b8 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_1b8;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_1b8[0];
  *(code **)(pFVar6 + 0x10) = local_1a8;
  *(undefined8 *)(pFVar6 + 0x38) = local_180;
  local_180 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_198;
  *(undefined4 *)(pFVar6 + 0x24) = local_198._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_190;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_190._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_188;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_1a8 != (code *)0x0) {
      (*(code *)local_198[2])();
    }
  }
  else {
    local_1a8 = (code *)0x0;
  }
  local_720 = (this->Functions).ArrayNum;
  local_680 = ::FName::FName(&local_518,"isqrt");
  local_678 = &local_720;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)local_6d4,(bool *)&local_680);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_150 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l17::<lambda_15>::
               <lambda_invoker_cdecl>;
  local_178[0] = 1;
  local_140 = 0;
  local_158 = &
              ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_168 = UE::Core::Private::Function::
              TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
              ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_178) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_178 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_178;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_178[0];
  *(code **)(pFVar6 + 0x10) = local_168;
  *(undefined8 *)(pFVar6 + 0x38) = local_140;
  local_140 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_158;
  *(undefined4 *)(pFVar6 + 0x24) = local_158._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_150;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_150._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_148;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_168 != (code *)0x0) {
      (*(code *)local_158[2])();
    }
  }
  else {
    local_168 = (code *)0x0;
  }
  local_71c = (this->Functions).ArrayNum;
  local_670 = ::FName::FName(&local_510,"log");
  local_668 = &local_71c;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)(local_6d4 + 4),(bool *)&local_670);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_110 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l18::<lambda_16>::
               <lambda_invoker_cdecl>;
  local_138[0] = 1;
  local_100 = 0;
  local_118 = &
              ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_128 = UE::Core::Private::Function::
              TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
              ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_138) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_138 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_138;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_138[0];
  *(code **)(pFVar6 + 0x10) = local_128;
  *(undefined8 *)(pFVar6 + 0x38) = local_100;
  local_100 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_118;
  *(undefined4 *)(pFVar6 + 0x24) = local_118._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_110;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_110._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_108;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_128 != (code *)0x0) {
      (*(code *)local_118[2])();
    }
  }
  else {
    local_128 = (code *)0x0;
  }
  local_718 = (this->Functions).ArrayNum;
  local_660 = ::FName::FName(&local_508,"exp");
  local_658 = &local_718;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)local_6cc,(bool *)&local_660);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_d0 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l19::<lambda_17>::
              <lambda_invoker_cdecl>;
  local_f8[0] = 1;
  local_c0 = 0;
  local_d8 = &
             ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_e8 = UE::Core::Private::Function::
             TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
             ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_f8) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_f8 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_f8;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_f8[0];
  *(code **)(pFVar6 + 0x10) = local_e8;
  *(undefined8 *)(pFVar6 + 0x38) = local_c0;
  local_c0 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_d8;
  *(undefined4 *)(pFVar6 + 0x24) = local_d8._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_d0;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_d0._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_c8;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_e8 != (code *)0x0) {
      (*(code *)local_d8[2])();
    }
  }
  else {
    local_e8 = (code *)0x0;
  }
  local_714 = (this->Functions).ArrayNum;
  local_650 = ::FName::FName(&local_500,"pi");
  local_648 = &local_714;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)(local_6cc + 4),(bool *)&local_650);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_90 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l20::<lambda_18>::
              <lambda_invoker_cdecl>;
  local_b8[0] = 0;
  local_80 = 0;
  local_98 = &
             ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
             ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_b8) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_b8 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_b8;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_b8[0];
  *(code **)(pFVar6 + 0x10) = local_a8;
  *(undefined8 *)(pFVar6 + 0x38) = local_80;
  local_80 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_98;
  *(undefined4 *)(pFVar6 + 0x24) = local_98._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_90;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_90._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_88;
  if (*(longlong *)(pFVar6 + 0x10) == 0) {
    if (local_a8 != (code *)0x0) {
      (*(code *)local_98[2])();
    }
  }
  else {
    local_a8 = (code *)0x0;
  }
  local_710 = (this->Functions).ArrayNum;
  local_640 = ::FName::FName(&local_548,"e");
  local_638 = &local_710;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,int_&&> *)local_6c4,(bool *)&local_640);
  pFVar6 = (this->Functions).AllocatorInstance.Data;
  uStack_50 = `Optimus::Expression::FBuiltinFunctions::FBuiltinFunctions'::__l21::<lambda_19>::
              <lambda_invoker_cdecl>;
  local_78[0] = 0;
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
             ::Call;
  if ((pFVar6 <= (FScriptContainerElement *)local_78) &&
     (lVar5 = (longlong)(this->Functions).ArrayMax,
     (FScriptContainerElement *)local_78 < pFVar6 + lVar5 * 0x40)) {
    local_770 = (longlong)(this->Functions).ArrayNum;
    local_768 = 0x40;
    local_788 = local_78;
    local_780 = pFVar6;
    local_778 = lVar5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBuiltinFunctions *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->Functions).ArrayNum;
  if (iVar3 == (this->Functions).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->Functions).AllocatorInstance,&(this->Functions).ArrayMax);
  }
  (this->Functions).ArrayNum = iVar3 + 1;
  pFVar6 = (this->Functions).AllocatorInstance.Data + (longlong)iVar3 * 0x40;
  *(undefined4 *)pFVar6 = local_78[0];
  *(code **)(pFVar6 + 0x10) = local_68;
  *(undefined8 *)(pFVar6 + 0x38) = local_40;
  local_40 = 0;
  *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_58;
  *(undefined4 *)(pFVar6 + 0x24) = local_58._4_4_;
  *(undefined4 *)(pFVar6 + 0x28) = (undefined4)uStack_50;
  *(undefined4 *)(pFVar6 + 0x2c) = uStack_50._4_4_;
  *(undefined8 *)(pFVar6 + 0x30) = local_48;
  if ((*(longlong *)(pFVar6 + 0x10) == 0) && (local_68 != (code *)0x0)) {
    (*(code *)local_58[2])();
  }
  return this;
}

// GetInfoByIndex @ 14e1c8c50

FFunctionInfo * __thiscall
Optimus::Expression::FBuiltinFunctions::GetInfoByIndex(FBuiltinFunctions *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FFunctionInfo *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Functions).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFunctionInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FFunctionInfo *)((this->Functions).AllocatorInstance.Data + (longlong)param_1 * 0x40);
}

