// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4a5f00

UScriptStruct * __cdecl FRigUnit_GetCurveValue::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetCurveValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetCurveValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetCurveValue,(UObject *)pUVar1,
                         L"RigUnit_GetCurveValue");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetCurveValue.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetCurveValue.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4a5fd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetCurveValue::GetExecuteContextStruct(FRigUnit_GetCurveValue *this)

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

// Execute @ 14a4a60e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetCurveValue::Execute(FRigUnit_GetCurveValue *this)

{
  undefined1 auStackY_298 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Curve,&this->Valid,&this->Value,
                &this->CachedCurveIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a5281c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetCurveValue::Execute(FRigUnit_GetCurveValue *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Curve,&this->Valid,&this->Value,&this->CachedCurveIndex);
  return;
}

// RigVMExecute @ 14a541a20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetCurveValue::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  bool *pbVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigVMSlice *pFVar8;
  FCachedRigElement *pFVar9;
  FControlRigExecuteContext *pFVar10;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar7->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property);
  }
  if (iVar1 < 2) {
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
  pbVar2 = (bool *)param_2->DataPtr[1].Ptr;
  if (iVar1 < 3) {
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
  pfVar3 = (float *)param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar9 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar8->Offset + pFVar8->Index);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar10,pFVar6,pbVar2,pfVar3,pFVar9);
  return;
}

// StaticExecute @ 14a577190

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetCurveValue::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,bool *param_3,float *param_4,
          FCachedRigElement *param_5)

{
  URigHierarchy *this;
  bool bVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  FRigElementKey local_28;
  
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_28.Name = *param_2;
    local_28.Type = Curve;
    bVar1 = FCachedRigElement::UpdateCache(param_5,&local_28,this);
    if (bVar1) {
      uVar3 = 0xffffffff;
      uVar2 = 0xffffffff;
      if (param_5->Index != 0xffff) {
        uVar2 = (uint)param_5->Index;
      }
      bVar1 = URigHierarchy::IsCurveValueSetByIndex(this,uVar2);
      *param_3 = bVar1;
      if (param_5->Index != 0xffff) {
        uVar3 = (uint)param_5->Index;
      }
      fVar4 = URigHierarchy::GetCurveValueByIndex(this,uVar3);
      *param_4 = fVar4;
      return;
    }
  }
  *param_3 = false;
  *param_4 = 0.0;
  return;
}

