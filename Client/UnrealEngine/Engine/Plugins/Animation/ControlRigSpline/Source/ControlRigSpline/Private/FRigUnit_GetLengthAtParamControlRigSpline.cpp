// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 6

// StaticStruct @ 14debeb30

UScriptStruct * __cdecl FRigUnit_GetLengthAtParamControlRigSpline::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline,
                         (UObject *)pUVar1,L"RigUnit_GetLengthAtParamControlRigSpline");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline.OuterSingleton;
}

// GetExecuteContextStruct @ 14debebb0

UScriptStruct * __thiscall
FRigUnit_GetLengthAtParamControlRigSpline::GetExecuteContextStruct
          (FRigUnit_GetLengthAtParamControlRigSpline *this)

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

// Execute @ 14debebc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigUnit_GetLengthAtParamControlRigSpline::Execute(FRigUnit_GetLengthAtParamControlRigSpline *this)

{
  FControlRigSplineImpl *pFVar1;
  float fVar2;
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
  pFVar1 = (this->Spline).SplineData.Object;
  if (pFVar1 != (FControlRigSplineImpl *)0x0) {
    if (pFVar1->Spline == (ControlRigBaseSpline *)0x0) {
      if (1 < (byte)LogControlRig._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      }
    }
    else {
      fVar2 = FControlRigSpline::LengthAtParam(&this->Spline,this->U);
      this->Length = fVar2;
    }
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14dec4040

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigUnit_GetLengthAtParamControlRigSpline::Execute
          (FRigUnit_GetLengthAtParamControlRigSpline *this,FControlRigExecuteContext *param_1)

{
  FControlRigSplineImpl *pFVar1;
  float fVar2;
  
  pFVar1 = (this->Spline).SplineData.Object;
  if (pFVar1 != (FControlRigSplineImpl *)0x0) {
    if (pFVar1->Spline == (ControlRigBaseSpline *)0x0) {
      if (1 < (byte)LogControlRig._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        return;
      }
    }
    else {
      fVar2 = FControlRigSpline::LengthAtParam(&this->Spline,this->U);
      this->Length = fVar2;
    }
  }
  return;
}

// RigVMExecute @ 14dec6e10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetLengthAtParamControlRigSpline::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  code *pcVar4;
  bool bVar5;
  FControlRigSpline *pFVar6;
  float *pfVar7;
  FControlRigExecuteContext *pFVar8;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FControlRigSpline *)pFVar3->Ptr;
  }
  else {
    pFVar6 = (FControlRigSpline *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  if (iVar2 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar3[1].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  fVar1 = *pfVar7;
  if (iVar2 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pfVar7 = (float *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,pFVar6,fVar1,pfVar7);
  return;
}

// StaticExecute @ 14ded0100

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRigUnit_GetLengthAtParamControlRigSpline::StaticExecute
          (FControlRigExecuteContext *param_1,FControlRigSpline *param_2,float param_3,
          float *param_4)

{
  FControlRigSplineImpl *pFVar1;
  float fVar2;
  
  pFVar1 = (param_2->SplineData).Object;
  if (pFVar1 != (FControlRigSplineImpl *)0x0) {
    if (pFVar1->Spline == (ControlRigBaseSpline *)0x0) {
      if (1 < (byte)LogControlRig._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        return;
      }
    }
    else {
      fVar2 = FControlRigSpline::LengthAtParam(param_2,param_3);
      *param_4 = fVar2;
    }
  }
  return;
}

