// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4d9030

UScriptStruct * __cdecl FRigUnit_GetControlVisibility::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetControlVisibility.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetControlVisibility.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility,(UObject *)pUVar1,
                         L"RigUnit_GetControlVisibility");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetControlVisibility.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetControlVisibility.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4d90b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetControlVisibility::GetExecuteContextStruct(FRigUnit_GetControlVisibility *this)

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

// Execute @ 14a4d91f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetControlVisibility::Execute(FRigUnit_GetControlVisibility *this)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  FRigControlElement *pFVar4;
  undefined1 auStack_288 [32];
  undefined1 local_268 [456];
  URigHierarchy *local_a0;
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
  this->bVisible = false;
  if (local_a0 != (URigHierarchy *)0x0) {
    bVar2 = FCachedRigElement::UpdateCache(&this->CachedControlIndex,&this->Item,local_a0);
    if (bVar2) {
      uVar1 = (this->CachedControlIndex).Index;
      uVar3 = 0xffffffff;
      if (uVar1 != 0xffff) {
        uVar3 = (uint)uVar1;
      }
      pFVar4 = URigHierarchy::Get<FRigControlElement>(local_a0,uVar3);
      if (pFVar4 != (FRigControlElement *)0x0) {
        this->bVisible = (pFVar4->Settings).bShapeVisible;
      }
    }
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a528120

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetControlVisibility::Execute
          (FRigUnit_GetControlVisibility *this,FControlRigExecuteContext *param_1)

{
  ushort uVar1;
  URigHierarchy *this_00;
  bool bVar2;
  uint uVar3;
  FRigControlElement *pFVar4;
  
  this->bVisible = false;
  this_00 = param_1->Hierarchy;
  if (this_00 != (URigHierarchy *)0x0) {
    bVar2 = FCachedRigElement::UpdateCache(&this->CachedControlIndex,&this->Item,this_00);
    if (bVar2) {
      uVar1 = (this->CachedControlIndex).Index;
      uVar3 = 0xffffffff;
      if (uVar1 != 0xffff) {
        uVar3 = (uint)uVar1;
      }
      pFVar4 = URigHierarchy::Get<FRigControlElement>(this_00,uVar3);
      if (pFVar4 != (FRigControlElement *)0x0) {
        this->bVisible = (pFVar4->Settings).bShapeVisible;
      }
    }
  }
  return;
}

// RigVMExecute @ 14a541800

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlVisibility::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  uchar *puVar3;
  URigHierarchy *this;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FRigElementKey *pFVar7;
  FRigVMSlice *pFVar8;
  FCachedRigElement *this_00;
  FControlRigExecuteContext *pFVar9;
  FRigControlElement *pFVar10;
  
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
    pFVar7 = (FRigElementKey *)pFVar2->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
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
  puVar3 = param_2->DataPtr[1].Ptr;
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
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  this_00 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal
                      (param_2->DataPtr + 2,false,pFVar8->Offset + pFVar8->Index);
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  *puVar3 = '\0';
  this = pFVar9->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    bVar5 = FCachedRigElement::UpdateCache(this_00,pFVar7,this);
    if (bVar5) {
      uVar6 = 0xffffffff;
      if (this_00->Index != 0xffff) {
        uVar6 = (uint)this_00->Index;
      }
      pFVar10 = URigHierarchy::Get<FRigControlElement>(this,uVar6);
      if (pFVar10 != (FRigControlElement *)0x0) {
        *puVar3 = (pFVar10->Settings).bShapeVisible;
      }
    }
  }
  return;
}

// StaticExecute @ 14a577100

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetControlVisibility::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool *param_3,
          FCachedRigElement *param_4)

{
  URigHierarchy *this;
  bool bVar1;
  uint uVar2;
  FRigControlElement *pFVar3;
  
  *param_3 = false;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    bVar1 = FCachedRigElement::UpdateCache(param_4,param_2,this);
    if (bVar1) {
      uVar2 = 0xffffffff;
      if (param_4->Index != 0xffff) {
        uVar2 = (uint)param_4->Index;
      }
      pFVar3 = URigHierarchy::Get<FRigControlElement>(this,uVar2);
      if (pFVar3 != (FRigControlElement *)0x0) {
        *param_3 = (pFVar3->Settings).bShapeVisible;
      }
    }
  }
  return;
}

