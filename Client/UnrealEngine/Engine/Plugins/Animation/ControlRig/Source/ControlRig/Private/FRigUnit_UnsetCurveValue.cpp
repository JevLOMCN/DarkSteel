// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4a5b50

UScriptStruct * __cdecl FRigUnit_UnsetCurveValue::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_UnsetCurveValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_UnsetCurveValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue,(UObject *)pUVar1,
                         L"RigUnit_UnsetCurveValue");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_UnsetCurveValue.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_UnsetCurveValue.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4a5bd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_UnsetCurveValue::GetExecuteContextStruct(FRigUnit_UnsetCurveValue *this)

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

// Execute @ 14a4a5d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_UnsetCurveValue::Execute(FRigUnit_UnsetCurveValue *this)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  undefined1 auStack_298 [32];
  FRigElementKey local_278;
  undefined1 local_268 [456];
  URigHierarchy *local_a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
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
  if (local_a0 != (URigHierarchy *)0x0) {
    local_278.Name = this->Curve;
    local_278.Type = Curve;
    bVar2 = FCachedRigElement::UpdateCache(&this->CachedCurveIndex,&local_278,local_a0);
    if (bVar2) {
      uVar1 = (this->CachedCurveIndex).Index;
      uVar3 = 0xffffffff;
      if (uVar1 != 0xffff) {
        uVar3 = (uint)uVar1;
      }
      URigHierarchy::UnsetCurveValueByIndex(local_a0,uVar3,false);
    }
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52f850

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_UnsetCurveValue::Execute(FRigUnit_UnsetCurveValue *this,FControlRigExecuteContext *param_1)

{
  ushort uVar1;
  URigHierarchy *this_00;
  bool bVar2;
  uint uVar3;
  FRigElementKey local_18;
  
  this_00 = param_1->Hierarchy;
  if (this_00 != (URigHierarchy *)0x0) {
    local_18.Name = this->Curve;
    local_18.Type = Curve;
    bVar2 = FCachedRigElement::UpdateCache(&this->CachedCurveIndex,&local_18,this_00);
    if (bVar2) {
      uVar1 = (this->CachedCurveIndex).Index;
      uVar3 = 0xffffffff;
      if (uVar1 != 0xffff) {
        uVar3 = (uint)uVar1;
      }
      URigHierarchy::UnsetCurveValueByIndex(this_00,uVar3,false);
    }
  }
  return;
}

// RigVMExecute @ 14a55bbd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_UnsetCurveValue::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  URigHierarchy *this;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *this_00;
  FControlRigExecuteContext *pFVar8;
  FRigElementKey local_18;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar2->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  this_00 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal
                      (param_2->DataPtr + 1,false,pFVar7->Offset + pFVar7->Index);
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  this = pFVar8->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_18.Name = *pFVar6;
    local_18.Type = Curve;
    bVar4 = FCachedRigElement::UpdateCache(this_00,&local_18,this);
    if (bVar4) {
      uVar5 = 0xffffffff;
      if (this_00->Index != 0xffff) {
        uVar5 = (uint)this_00->Index;
      }
      URigHierarchy::UnsetCurveValueByIndex(this,uVar5,false);
    }
  }
  return;
}

// StaticExecute @ 14a5a2710

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_UnsetCurveValue::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FCachedRigElement *param_3)

{
  URigHierarchy *this;
  bool bVar1;
  uint uVar2;
  FRigElementKey local_18;
  
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_18.Name = *param_2;
    local_18.Type = Curve;
    bVar1 = FCachedRigElement::UpdateCache(param_3,&local_18,this);
    if (bVar1) {
      uVar2 = 0xffffffff;
      if (param_3->Index != 0xffff) {
        uVar2 = (uint)param_3->Index;
      }
      URigHierarchy::UnsetCurveValueByIndex(this,uVar2,false);
    }
  }
  return;
}

