// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4cff10

UScriptStruct * __cdecl FRigUnit_CollectionItemAtIndex::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CollectionItemAtIndex.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CollectionItemAtIndex.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex,(UObject *)pUVar1,
                         L"RigUnit_CollectionItemAtIndex");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_CollectionItemAtIndex.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CollectionItemAtIndex.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4cff90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_CollectionItemAtIndex::GetExecuteContextStruct(FRigUnit_CollectionItemAtIndex *this)

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

// Execute @ 14a4d0150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CollectionItemAtIndex::Execute(FRigUnit_CollectionItemAtIndex *this)

{
  int iVar1;
  ulonglong uVar2;
  undefined3 uVar3;
  FNameEntryId FVar4;
  uint uVar5;
  FRigElementKey *pFVar6;
  undefined1 auStack_298 [32];
  uint local_278;
  undefined4 uStack_274;
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
  iVar1 = this->Index;
  if ((iVar1 < 0) || ((this->Collection).Keys.ArrayNum <= iVar1)) {
    uVar5 = 0;
    local_278 = local_278 & 0xffffff00;
    uStack_274 = 0;
    uVar2 = (ulonglong)local_278;
    (this->Item).Type = (char)uVar2;
    *(int3 *)&(this->Item).field_0x1 = (int3)(uVar2 >> 8);
    (this->Item).Name.ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
  }
  else {
    pFVar6 = FRigElementKeyCollection::operator[](&this->Collection,iVar1);
    uVar3 = *(undefined3 *)&pFVar6->field_0x1;
    FVar4.Value = (pFVar6->Name).ComparisonIndex.Value;
    (this->Item).Type = pFVar6->Type;
    *(undefined3 *)&(this->Item).field_0x1 = uVar3;
    (this->Item).Name.ComparisonIndex = (FNameEntryId)FVar4.Value;
    uVar5 = (pFVar6->Name).Number;
  }
  (this->Item).Name.Number = uVar5;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4d03d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_CollectionItemAtIndex::GetUpgradeInfo
          (FRigUnit_CollectionItemAtIndex *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FRigUnit_CollectionItemAtIndex @ 14a50d3b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_CollectionItemAtIndex * __thiscall
FRigUnit_CollectionItemAtIndex::FRigUnit_CollectionItemAtIndex(FRigUnit_CollectionItemAtIndex *this)

{
  FRigElementKeyCollection *pFVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint local_28;
  undefined8 local_18 [2];
  
  pFVar1 = &this->Collection;
  (pFVar1->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FRigUnit_CollectionItemAtIndex__6B_;
  (this->Collection).Keys.ArrayNum = 0;
  (this->Collection).Keys.ArrayMax = 0;
  (this->Item).Type = None;
  (this->Item).Name.ComparisonIndex = 0;
  (this->Item).Name.Number = 0;
  if (pFVar1 != (FRigElementKeyCollection *)local_18) {
    pFVar2 = (pFVar1->Keys).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Collection).Keys.ArrayNum = 0;
    (this->Collection).Keys.ArrayMax = 0;
  }
  local_28 = local_28 & 0xffffff00;
  uVar3 = (ulonglong)local_28;
  (this->Item).Type = (char)uVar3;
  *(int3 *)&(this->Item).field_0x1 = (int3)(uVar3 >> 8);
  (this->Item).Name.ComparisonIndex = (FNameEntryId)(int)(uVar3 >> 0x20);
  (this->Item).Name.Number = 0;
  this->Index = 0;
  return this;
}

// Execute @ 14a5257b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CollectionItemAtIndex::Execute
          (FRigUnit_CollectionItemAtIndex *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined3 uVar3;
  FNameEntryId FVar4;
  FRigElementKey *pFVar5;
  uint local_18;
  
  iVar1 = this->Index;
  if ((-1 < iVar1) && (iVar1 < (this->Collection).Keys.ArrayNum)) {
    pFVar5 = FRigElementKeyCollection::operator[](&this->Collection,iVar1);
    uVar3 = *(undefined3 *)&pFVar5->field_0x1;
    FVar4.Value = (pFVar5->Name).ComparisonIndex.Value;
    (this->Item).Type = pFVar5->Type;
    *(undefined3 *)&(this->Item).field_0x1 = uVar3;
    (this->Item).Name.ComparisonIndex = (FNameEntryId)FVar4.Value;
    (this->Item).Name.Number = (pFVar5->Name).Number;
    return;
  }
  local_18 = local_18 & 0xffffff00;
  uVar2 = (ulonglong)local_18;
  (this->Item).Type = (char)uVar2;
  *(int3 *)&(this->Item).field_0x1 = (int3)(uVar2 >> 8);
  (this->Item).Name.ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
  (this->Item).Name.Number = 0;
  return;
}

// RigVMExecute @ 14a538380

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionItemAtIndex::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  FRigElementKey *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRigElementKeyCollection *pFVar7;
  int *piVar8;
  FControlRigExecuteContext *pFVar9;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
    pFVar7 = (FRigElementKeyCollection *)pFVar3->Ptr;
  }
  else {
    pFVar7 = (FRigElementKeyCollection *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  if (iVar1 < 2) {
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
    piVar8 = (int *)pFVar3[1].Ptr;
  }
  else {
    piVar8 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  iVar2 = *piVar8;
  if (iVar1 < 3) {
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
  pFVar4 = (FRigElementKey *)param_2->DataPtr[2].Ptr;
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar9,pFVar7,iVar2,pFVar4);
  return;
}

// StaticExecute @ 14a569010

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionItemAtIndex::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKeyCollection *param_2,int param_3,
          FRigElementKey *param_4)

{
  ulonglong uVar1;
  undefined3 uVar2;
  FNameEntryId FVar3;
  FRigElementKey *pFVar4;
  uint local_18;
  
  if ((-1 < param_3) && (param_3 < (param_2->Keys).ArrayNum)) {
    pFVar4 = FRigElementKeyCollection::operator[](param_2,param_3);
    uVar2 = *(undefined3 *)&pFVar4->field_0x1;
    FVar3.Value = (pFVar4->Name).ComparisonIndex.Value;
    param_4->Type = pFVar4->Type;
    *(undefined3 *)&param_4->field_0x1 = uVar2;
    (param_4->Name).ComparisonIndex = (FNameEntryId)FVar3.Value;
    (param_4->Name).Number = (pFVar4->Name).Number;
    return;
  }
  local_18 = local_18 & 0xffffff00;
  uVar1 = (ulonglong)local_18;
  param_4->Type = (char)uVar1;
  *(int3 *)&param_4->field_0x1 = (int3)(uVar1 >> 8);
  (param_4->Name).ComparisonIndex = (FNameEntryId)(int)(uVar1 >> 0x20);
  (param_4->Name).Number = 0;
  return;
}

