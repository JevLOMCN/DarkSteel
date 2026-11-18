// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a480b70

UScriptStruct * __cdecl FRigUnit_GetControlBool::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetControlBool.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetControlBool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlBool,(UObject *)pUVar1,
                         L"RigUnit_GetControlBool");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetControlBool_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetControlBool.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetControlBool.OuterSingleton;
}

// GetExecuteContextStruct @ 14a480bf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetControlBool::GetExecuteContextStruct(FRigUnit_GetControlBool *this)

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

// Execute @ 14a480e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetControlBool::Execute(FRigUnit_GetControlBool *this)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  undefined1 auStack_318 [32];
  FRigElementKey local_2f8;
  bool local_2ec [132];
  undefined1 local_268 [456];
  URigHierarchy *local_a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_318;
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
    local_2f8.Name = this->Control;
    local_2f8.Type = Control;
    bVar2 = FCachedRigElement::UpdateCache(&this->CachedControlIndex,&local_2f8,local_a0);
    if (bVar2) {
      uVar1 = (this->CachedControlIndex).Index;
      uVar3 = 0xffffffff;
      if (uVar1 != 0xffff) {
        uVar3 = (uint)uVar1;
      }
      URigHierarchy::GetControlValueByIndex(local_a0,(FRigControlValue *)local_2ec,uVar3,Current);
      this->BoolValue = local_2ec[0];
    }
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a527e90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetControlBool::Execute(FRigUnit_GetControlBool *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Control,&this->BoolValue,&this->CachedControlIndex);
  return;
}

// RigVMExecute @ 14a5405c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlBool::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  bool *pbVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FControlRigExecuteContext *pFVar9;
  
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar2->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
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
  pbVar3 = (bool *)param_2->DataPtr[1].Ptr;
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
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal
                     (param_2->DataPtr + 2,false,pFVar7->Offset + pFVar7->Index);
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar9,pFVar6,pbVar3,pFVar8);
  return;
}

// StaticExecute @ 14a576180

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlBool::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,bool *param_3,
          FCachedRigElement *param_4)

{
  URigHierarchy *this;
  bool bVar1;
  uint uVar2;
  FRigElementKey local_98;
  bool local_8c [132];
  
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_98.Name = *param_2;
    local_98.Type = Control;
    bVar1 = FCachedRigElement::UpdateCache(param_4,&local_98,this);
    if (bVar1) {
      uVar2 = 0xffffffff;
      if (param_4->Index != 0xffff) {
        uVar2 = (uint)param_4->Index;
      }
      URigHierarchy::GetControlValueByIndex(this,(FRigControlValue *)local_8c,uVar2,Current);
      *param_3 = local_8c[0];
    }
  }
  return;
}

