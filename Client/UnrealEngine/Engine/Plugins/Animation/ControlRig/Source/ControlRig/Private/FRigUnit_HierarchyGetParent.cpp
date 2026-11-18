// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4dc280

UScriptStruct * __cdecl FRigUnit_HierarchyGetParent::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParent.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent,(UObject *)pUVar1,
                         L"RigUnit_HierarchyGetParent");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParent.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParent.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4dc300

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_HierarchyGetParent::GetExecuteContextStruct(FRigUnit_HierarchyGetParent *this)

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

// Execute @ 14a4dc580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_HierarchyGetParent::Execute(FRigUnit_HierarchyGetParent *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Child,this->bDefaultParent,
                &this->Parent,&this->CachedChild,&this->CachedParent);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a529880

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetParent::Execute
          (FRigUnit_HierarchyGetParent *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Child,this->bDefaultParent,&this->Parent,&this->CachedChild,
                &this->CachedParent);
  return;
}

// RigVMExecute @ 14a547bb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetParent::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigElementKey *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  uchar *puVar7;
  FRigVMMemoryHandle *pFVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  FCachedRigElement *pFVar11;
  FControlRigExecuteContext *pFVar12;
  
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar8->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar8[1].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  bVar4 = (bool)*puVar7;
  if (iVar1 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (FRigElementKey *)param_2->DataPtr[2].Ptr;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,pFVar6,bVar4,pFVar2,pFVar10,pFVar11);
  return;
}

// StaticExecute @ 14a580940

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetParent::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,
          FRigElementKey *param_4,FCachedRigElement *param_5,FCachedRigElement *param_6)

{
  URigHierarchy *this;
  undefined3 uVar1;
  FNameEntryId FVar2;
  bool bVar3;
  FRigElementKey *pFVar4;
  FRigElementKey local_28;
  FRigElementKey local_18;
  
  if (!param_3) {
    FCachedRigElement::UpdateCache(param_5,param_2,param_1->Hierarchy);
    pFVar4 = FCachedRigElement::GetResolvedKey(param_5);
    pFVar4 = URigHierarchy::GetActiveParent(param_1->Hierarchy,&local_18,pFVar4,false);
    uVar1 = *(undefined3 *)&pFVar4->field_0x1;
    FVar2.Value = (pFVar4->Name).ComparisonIndex.Value;
    param_4->Type = pFVar4->Type;
    *(undefined3 *)&param_4->field_0x1 = uVar1;
    (param_4->Name).ComparisonIndex = (FNameEntryId)FVar2.Value;
    (param_4->Name).Number = (pFVar4->Name).Number;
    return;
  }
  bVar3 = FCachedRigElement::IsIdentical(param_5,param_2,param_1->Hierarchy);
  if (bVar3) {
    uVar1 = *(undefined3 *)&(param_6->Key).field_0x1;
    FVar2.Value = (param_6->Key).Name.ComparisonIndex.Value;
    param_4->Type = (param_6->Key).Type;
    *(undefined3 *)&param_4->field_0x1 = uVar1;
    (param_4->Name).ComparisonIndex = (FNameEntryId)FVar2.Value;
    (param_4->Name).Number = (param_6->Key).Name.Number;
    return;
  }
  param_4->Type = Curve;
  (param_4->Name).ComparisonIndex = 0;
  (param_4->Name).Number = 0;
  local_28.Type = None;
  local_28._1_3_ = 0;
  local_28.Name.ComparisonIndex.Value = 0;
  (param_6->Key).Type = None;
  *(undefined3 *)&(param_6->Key).field_0x1 = 0;
  (param_6->Key).Name.ComparisonIndex = 0;
  (param_6->Key).Name.Number = 0;
  param_6->Element = (FRigBaseElement *)0x0;
  param_6->Index = 0xffff;
  param_6->ContainerVersion = -1;
  bVar3 = FCachedRigElement::UpdateCache(param_5,param_2,param_1->Hierarchy);
  if (bVar3) {
    this = param_1->Hierarchy;
    pFVar4 = FCachedRigElement::GetResolvedKey(param_5);
    local_28.Type = pFVar4->Type;
    local_28._1_3_ = *(undefined3 *)&pFVar4->field_0x1;
    local_28.Name.ComparisonIndex.Value = (pFVar4->Name).ComparisonIndex.Value;
    local_28.Name.Number = (pFVar4->Name).Number;
    pFVar4 = URigHierarchy::GetFirstParent(this,&local_18,&local_28);
    uVar1 = *(undefined3 *)&pFVar4->field_0x1;
    FVar2.Value = (pFVar4->Name).ComparisonIndex.Value;
    param_4->Type = pFVar4->Type;
    *(undefined3 *)&param_4->field_0x1 = uVar1;
    (param_4->Name).ComparisonIndex = (FNameEntryId)FVar2.Value;
    (param_4->Name).Number = (pFVar4->Name).Number;
    bVar3 = ::FName::IsWithinBounds((FNameEntryId)(param_4->Name).ComparisonIndex.Value);
    if (((bVar3) && (param_4->Name != (FName)0x0)) && (param_4->Type != None)) {
      FCachedRigElement::UpdateCache(param_6,param_4,param_1->Hierarchy);
    }
  }
  return;
}

