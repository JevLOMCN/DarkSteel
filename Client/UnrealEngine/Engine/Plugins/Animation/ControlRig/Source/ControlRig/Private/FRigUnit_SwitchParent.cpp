// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4f4f80

UScriptStruct * __cdecl FRigUnit_SwitchParent::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SwitchParent.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SwitchParent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SwitchParent,(UObject *)pUVar1,
                         L"RigUnit_SwitchParent");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SwitchParent.OuterSingleton,&local_18
              );
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SwitchParent.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f5000

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SwitchParent::GetExecuteContextStruct(FRigUnit_SwitchParent *this)

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

// Execute @ 14a4f5580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SwitchParent::Execute(FRigUnit_SwitchParent *this)

{
  undefined1 auStack_298 [32];
  undefined1 local_268 [592];
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
  StaticExecute((FControlRigExecuteContext *)local_268,this->Mode,&this->Child,&this->Parent,
                this->bMaintainGlobal);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52e940

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SwitchParent::Execute(FRigUnit_SwitchParent *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,this->Mode,&this->Child,&this->Parent,this->bMaintainGlobal);
  return;
}

// RigVMExecute @ 14a5590a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SwitchParent::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigSwitchParentMode EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ERigSwitchParentMode *pEVar5;
  FRigElementKey *pFVar6;
  FRigElementKey *pFVar7;
  FRigVMMemoryHandle *pFVar8;
  uchar *puVar9;
  FControlRigExecuteContext *pFVar10;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar5 = pFVar8->Ptr;
  }
  else {
    pEVar5 = FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  EVar1 = *pEVar5;
  if (iVar2 < 2) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar8[1].Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  if (iVar2 < 3) {
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar8[2].Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar4 = (bool)*puVar9;
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar10,EVar1,pFVar6,pFVar7,bVar4);
  return;
}

// StaticExecute @ 14a59d420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SwitchParent::StaticExecute
          (FControlRigExecuteContext *param_1,ERigSwitchParentMode param_2,FRigElementKey *param_3,
          FRigElementKey *param_4,bool param_5)

{
  int iVar1;
  URigHierarchy *this;
  bool bVar2;
  FRigTransformElement *pFVar3;
  longlong lVar4;
  UScriptStruct *pUVar5;
  FRigTransformElement *this_00;
  Type TVar6;
  undefined1 auStackY_e8 [32];
  FString local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  this = param_1->Hierarchy;
  if (this == (URigHierarchy *)0x0) {
    return;
  }
  if ((param_1->UnitContext).HierarchySettings.ProceduralElementLimit <= (this->Elements).ArrayNum)
  {
    return;
  }
  pFVar3 = URigHierarchy::Find<FRigTransformElement>(this,param_3);
  if (pFVar3 == (FRigTransformElement *)0x0) {
    return;
  }
  lVar4 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
  pUVar5 = FRigMultiParentElement::StaticStruct();
  if (pUVar5 == (UScriptStruct *)0x0) {
    return;
  }
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  this_00 = (FRigTransformElement *)0x0;
  if (param_2 == ParentItem) {
    this_00 = URigHierarchy::Find<FRigTransformElement>(param_1->Hierarchy,param_4);
    if (this_00 == (FRigTransformElement *)0x0) {
      return;
    }
    bVar2 = FRigBaseElement::IsA<FRigTransformElement>((FRigBaseElement *)this_00);
    if (!bVar2) {
      return;
    }
  }
  TVar6 = (uint)param_5 * 2 + CurrentLocal;
  URigHierarchy::GetTransform(param_1->Hierarchy,&local_98,pFVar3,TVar6);
  if (param_2 == World) {
    bVar2 = URigHierarchy::SwitchToWorldSpace
                      (param_1->Hierarchy,(FRigBaseElement *)pFVar3,false,true);
  }
  else {
    if (param_2 != DefaultParent) {
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`FRigUnit_SwitchParent::StaticExecute'::__l31::
               _dynamic_atexit_destructor_for__NoDependencyProvider__);
        _Init_thread_footer(&::_TSS0);
      }
      bVar2 = URigHierarchy::SwitchToParent
                        (param_1->Hierarchy,(FRigBaseElement *)pFVar3,(FRigBaseElement *)this_00,
                         false,true,(IRigDependenciesProvider *)&NoDependencyProvider,&local_a8);
      if ((!bVar2) ||
         ((bVar2 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1), bVar2 &&
          (bVar2 = URigHierarchy::SwitchToParent
                             (param_1->Hierarchy,(FRigBaseElement *)pFVar3,
                              (FRigBaseElement *)this_00,true,true,
                              (IRigDependenciesProvider *)&NoDependencyProvider,&local_a8), !bVar2))
         )) {
        if (local_a8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        return;
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      goto LAB_14a59d637;
    }
    bVar2 = URigHierarchy::SwitchToDefaultParent
                      (param_1->Hierarchy,(FRigBaseElement *)pFVar3,false,true);
  }
  if (bVar2 == false) {
    return;
  }
LAB_14a59d637:
  URigHierarchy::SetTransform(param_1->Hierarchy,pFVar3,&local_98,TVar6,true,false,false,false);
  return;
}

