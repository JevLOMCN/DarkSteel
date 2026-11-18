// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 6

// StaticStruct @ 14debe5d0

UScriptStruct * __cdecl FRigUnit_TangentFromControlRigSpline::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_TangentFromControlRigSpline.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_TangentFromControlRigSpline.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline,
                         (UObject *)pUVar1,L"RigUnit_TangentFromControlRigSpline");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_TangentFromControlRigSpline.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_TangentFromControlRigSpline.OuterSingleton;
}

// GetExecuteContextStruct @ 14debe650

UScriptStruct * __thiscall
FRigUnit_TangentFromControlRigSpline::GetExecuteContextStruct
          (FRigUnit_TangentFromControlRigSpline *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14debe670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_TangentFromControlRigSpline::Execute(FRigUnit_TangentFromControlRigSpline *this)

{
  undefined1 auStack_288 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Spline,this->U,&this->Tangent);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14dec4310

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_TangentFromControlRigSpline::Execute
          (FRigUnit_TangentFromControlRigSpline *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Spline,this->U,&this->Tangent);
  return;
}

// RigVMExecute @ 14dec7890

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_TangentFromControlRigSpline::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  TVector<double> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FControlRigSpline *pFVar7;
  float *pfVar8;
  FControlRigExecuteContext *pFVar9;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FControlRigSpline *)pFVar3->Ptr;
  }
  else {
    pFVar7 = (FControlRigSpline *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  if (iVar2 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar8 = (float *)pFVar3[1].Ptr;
  }
  else {
    pfVar8 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  fVar1 = *pfVar8;
  if (iVar2 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar4 = (TVector<double> *)param_2->DataPtr[2].Ptr;
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar9,pFVar7,fVar1,pTVar4);
  return;
}

// StaticExecute @ 14ded1b80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRigUnit_TangentFromControlRigSpline::StaticExecute
          (FControlRigExecuteContext *param_1,FControlRigSpline *param_2,float param_3,
          TVector<double> *param_4)

{
  FControlRigSplineImpl *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  TVector<double>_u_0 local_38 [2];
  
  pFVar1 = (param_2->SplineData).Object;
  if (pFVar1 != (FControlRigSplineImpl *)0x0) {
    if (pFVar1->Spline == (ControlRigBaseSpline *)0x0) {
      if (1 < (byte)LogControlRig._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        return;
      }
    }
    else {
      if (__real_3f800000 <= param_3) {
        param_3 = __real_3f800000;
      }
      if (param_3 <= 0.0) {
        param_3 = 0.0;
      }
      FControlRigSpline::TangentAtParam(param_2,(TVector<double> *)&local_38[0]._s_0,param_3);
      dVar3 = (double)local_38[0]._8_8_ * (double)local_38[0]._8_8_ +
              (double)local_38[0]._0_8_ * (double)local_38[0]._0_8_ +
              (double)local_38[0]._16_8_ * (double)local_38[0]._16_8_;
      if (__real_3e45798ee0000000 < dVar3) {
        dVar3 = __real_3ff0000000000000 / SQRT(dVar3);
        auVar2._8_4_ = SUB84((double)local_38[0]._8_8_ * dVar3,0);
        auVar2._0_8_ = (double)local_38[0]._0_8_ * dVar3;
        auVar2._12_4_ = (int)((ulonglong)((double)local_38[0]._8_8_ * dVar3) >> 0x20);
        *(undefined1 (*) [16])&param_4->field0_0x0 = auVar2;
        (param_4->field0_0x0)._s_0.Z = (double)local_38[0]._16_8_ * dVar3;
      }
    }
  }
  return;
}

