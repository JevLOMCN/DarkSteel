// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4bda60

UScriptStruct * __cdecl FRigUnit_CollectionNameSearch::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CollectionNameSearch.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CollectionNameSearch.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch,(UObject *)pUVar1,
                         L"RigUnit_CollectionNameSearch");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_CollectionNameSearch.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CollectionNameSearch.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4bdae0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_CollectionNameSearch::GetExecuteContextStruct(FRigUnit_CollectionNameSearch *this)

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

// Execute @ 14a4bdbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CollectionNameSearch::Execute(FRigUnit_CollectionNameSearch *this)

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
  FRigUnit_CollectionNameSearchArray::StaticExecute
            ((FControlRigExecuteContext *)local_268,&this->PartialName,this->TypeToSearch,
             &(this->Collection).Keys);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4bdcc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_CollectionNameSearch::GetUpgradeInfo
          (FRigUnit_CollectionNameSearch *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_48;
  FRigVMStruct local_38;
  FName local_30;
  ERigElementType local_28;
  void *local_20;
  undefined8 local_18;
  
  local_38 = (FRigVMStruct)&___7FRigUnit_CollectionNameSearchArray__6B_;
  local_30 = this->PartialName;
  local_28 = this->TypeToSearch;
  (__return_storage_ptr__->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NodePath).Data.ArrayNum = 0;
  (__return_storage_ptr__->NodePath).Data.ArrayMax = 0;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  *(undefined8 *)&__return_storage_ptr__->InputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->OutputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DefaultValues = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x48 = 0;
  (__return_storage_ptr__->AggregatePins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggregatePins).ArrayNum = 0;
  (__return_storage_ptr__->AggregatePins).ArrayMax = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CollectionNameSearch.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CollectionNameSearch.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch,(UObject *)pUVar1,
                         L"RigUnit_CollectionNameSearch");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_48.ArrayNum = 1;
    local_48.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_CollectionNameSearch.
                       OuterSingleton,&local_48);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_CollectionNameSearch.OuterSingleton;
  pUVar2 = FRigUnit_CollectionNameSearchArray::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_38);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a5258e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CollectionNameSearch::Execute
          (FRigUnit_CollectionNameSearch *this,FControlRigExecuteContext *param_1)

{
  FRigUnit_CollectionNameSearchArray::StaticExecute
            (param_1,&this->PartialName,this->TypeToSearch,&(this->Collection).Keys);
  return;
}

// RigVMExecute @ 14a538860

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionNameSearch::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigElementType EVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  ERigElementType *pEVar8;
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
    pFVar7 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
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
    pEVar8 = pFVar3[1].Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  EVar1 = *pEVar8;
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
  pTVar4 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)param_2->DataPtr[2].Ptr;
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  FRigUnit_CollectionNameSearchArray::StaticExecute(pFVar9,pFVar7,EVar1,pTVar4);
  return;
}

// StaticExecute @ 14a5692d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionNameSearch::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,ERigElementType param_3,
          FRigElementKeyCollection *param_4)

{
  int *piVar1;
  FName FVar2;
  URigHierarchy *this;
  ForAnyElementType _Src;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  UScriptStruct *pUVar6;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  longlong lVar9;
  uint auStackX_8 [2];
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> TStack_48;
  FRigElementKeyCollection FStack_38;
  
  if (param_1->Hierarchy == (URigHierarchy *)0x0) {
    (param_4->Keys).ArrayNum = 0;
    if ((param_4->Keys).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)param_4,0,&(param_4->Keys).ArrayMax);
      return;
    }
  }
  else {
    pUVar6 = FRigUnit_CollectionNameSearchArray::StaticStruct();
    FVar2 = *param_2;
    uVar3 = ((uint)((ulonglong)pUVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar6 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = param_1->Hierarchy->TopologyVersion;
    uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    uVar5 = uVar5 + FVar2.Number;
    uVar4 = ((uVar4 >> 0x10 ^ uVar4) + uVar3 * 0x11) - uVar5 ^ uVar5 >> 0xd;
    uVar3 = (-0x61c88647 - uVar5) - uVar4 ^ uVar4 << 8;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xd;
    uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
    uVar3 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf;
    iVar8 = uVar3 + (uint)param_3 * -8;
    uVar4 = iVar8 * 0x100 ^ 0x9e3779b9 - uVar3;
    uVar5 = ((uint)param_3 * 8 - uVar4) - iVar8 ^ uVar4 >> 0xd;
    this = param_1->Hierarchy;
    uVar3 = (iVar8 - uVar5) - uVar4 ^ uVar5 >> 0xc;
    TStack_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_48.ArrayNum = 0;
    TStack_48.ArrayMax = 0;
    uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 0x10;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar4 >> 5;
    uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 >> 3;
    uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 10;
    uVar3 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xf;
    pTVar7 = &URigHierarchy::FindCachedCollection(this,uVar3)->Keys;
    if (pTVar7 == (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar7 = &FRigElementKeyCollection::MakeFromName(&FStack_38,this,param_2,param_3)->Keys;
      if (&TStack_48 != pTVar7) {
        if (TStack_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_48.AllocatorInstance.Data);
        }
        TStack_48.AllocatorInstance.Data =
             (((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)&pTVar7->AllocatorInstance)->
             AllocatorInstance).Data;
        (((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)&pTVar7->AllocatorInstance)->
        AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        TStack_48.ArrayNum = pTVar7->ArrayNum;
        TStack_48.ArrayMax = pTVar7->ArrayMax;
        pTVar7->ArrayNum = 0;
        pTVar7->ArrayMax = 0;
      }
      if (FStack_38.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_38.Keys.AllocatorInstance.Data);
      }
      auStackX_8[0] = uVar3;
      TMapBase<unsigned_int,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>_>
      ::Emplace<unsigned_int_const_&,FRigElementKeyCollection_const_&>
                ((TMapBase<unsigned_int,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>_>
                  *)&param_1->Hierarchy->KeyCollectionCache,auStackX_8,
                 (FRigElementKeyCollection *)&TStack_48);
    }
    else {
      TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=(&TStack_48,pTVar7);
    }
    _Src.Data = TStack_48.AllocatorInstance.Data;
    if (&param_4->Keys != &TStack_48) {
      iVar8 = TStack_48.ArrayNum;
      lVar9 = (longlong)TStack_48.ArrayNum;
      piVar1 = &(param_4->Keys).ArrayMax;
      (param_4->Keys).ArrayNum = TStack_48.ArrayNum;
      if ((TStack_48.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,TStack_48.ArrayNum,*piVar1,(ForAnyElementType *)param_4,TStack_48.ArrayNum,
                   piVar1);
        if (iVar8 != 0) {
          memcpy((param_4->Keys).AllocatorInstance.Data,_Src.Data,lVar9 * 0xc);
        }
      }
    }
    if (TStack_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_48.AllocatorInstance.Data);
    }
  }
  return;
}

