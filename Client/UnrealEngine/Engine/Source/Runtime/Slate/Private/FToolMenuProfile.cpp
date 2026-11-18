// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 16

// StaticStruct @ 14269be90

UScriptStruct * __cdecl FToolMenuProfile::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuProfile.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UScriptStruct_FToolMenuProfile.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuProfile,(UObject *)pUVar1,
                         L"ToolMenuProfile");
  }
  return Z_Registration_Info_UScriptStruct_FToolMenuProfile.OuterSingleton;
}

// FToolMenuProfile @ 1426a9710

FToolMenuProfile * __thiscall FToolMenuProfile::FToolMenuProfile(FToolMenuProfile *this)

{
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  *(undefined8 *)&this->Entries = 0;
  *(undefined8 *)&(this->Entries).field_0x8 = 0;
  *(undefined8 *)&(this->Entries).field_0x20 = 0;
  *(undefined4 *)&(this->Entries).field_0x28 = 0;
  *(undefined4 *)&(this->Entries).field_0x2c = 0x80;
  *(undefined4 *)&(this->Entries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Entries).field_0x34 = 0;
  *(undefined8 *)&(this->Entries).field_0x40 = 0;
  *(undefined4 *)&(this->Entries).field_0x48 = 0;
  *(undefined8 *)&this->Sections = 0;
  *(undefined8 *)&(this->Sections).field_0x8 = 0;
  *(undefined8 *)&(this->Sections).field_0x20 = 0;
  *(undefined4 *)&(this->Sections).field_0x28 = 0;
  *(undefined4 *)&(this->Sections).field_0x2c = 0x80;
  *(undefined4 *)&(this->Sections).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Sections).field_0x34 = 0;
  *(undefined8 *)&(this->Sections).field_0x40 = 0;
  *(undefined4 *)&(this->Sections).field_0x48 = 0;
  (this->SuppressExtenders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SuppressExtenders).ArrayNum = 0;
  (this->SuppressExtenders).ArrayMax = 0;
  (this->MenuPermissions)._padding_ = 0;
  (this->MenuPermissions)._padding_ = 0;
  (this->MenuPermissions)._padding_ = (longlong)&___7FNamePermissionList__6B_;
  *(undefined8 *)&(this->MenuPermissions).DenyList = 0;
  *(undefined8 *)&(this->MenuPermissions).DenyList.field_0x8 = 0;
  *(undefined8 *)&(this->MenuPermissions).DenyList.field_0x20 = 0;
  *(undefined4 *)&(this->MenuPermissions).DenyList.field_0x28 = 0;
  *(undefined4 *)&(this->MenuPermissions).DenyList.field_0x2c = 0x80;
  *(undefined4 *)&(this->MenuPermissions).DenyList.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MenuPermissions).DenyList.field_0x34 = 0;
  *(undefined8 *)&(this->MenuPermissions).DenyList.field_0x40 = 0;
  *(undefined4 *)&(this->MenuPermissions).DenyList.field_0x48 = 0;
  *(undefined8 *)&(this->MenuPermissions).AllowList = 0;
  *(undefined8 *)&(this->MenuPermissions).AllowList.field_0x8 = 0;
  *(undefined8 *)&(this->MenuPermissions).AllowList.field_0x20 = 0;
  *(undefined4 *)&(this->MenuPermissions).AllowList.field_0x28 = 0;
  *(undefined4 *)&(this->MenuPermissions).AllowList.field_0x2c = 0x80;
  *(undefined4 *)&(this->MenuPermissions).AllowList.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MenuPermissions).AllowList.field_0x34 = 0;
  *(undefined8 *)&(this->MenuPermissions).AllowList.field_0x40 = 0;
  *(undefined4 *)&(this->MenuPermissions).AllowList.field_0x48 = 0;
  (this->MenuPermissions).DenyListAll.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuPermissions).DenyListAll.ArrayNum = 0;
  (this->MenuPermissions).DenyListAll.ArrayMax = 0;
  *(undefined8 *)&(this->MenuPermissions).OnFilterChangedDelegate = 0;
  *(undefined8 *)&(this->MenuPermissions).OnFilterChangedDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->MenuPermissions).OnFilterChangedDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->MenuPermissions).OnFilterChangedDelegate.field_0x18 = 2;
  (this->MenuPermissions).bSuppressOnFilterChanged = false;
  return this;
}

// ~FToolMenuProfile @ 1426ab850

void __thiscall FToolMenuProfile::~FToolMenuProfile(FToolMenuProfile *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  FNamePermissionList::~FNamePermissionList(&this->MenuPermissions);
  pFVar1 = (this->SuppressExtenders).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Sections).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Sections).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Sections);
  *(undefined4 *)&(this->Entries).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Entries).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Entries);
  return;
}

// operator= @ 1426ac3e0

FToolMenuProfile * __thiscall
FToolMenuProfile::operator=(FToolMenuProfile *this,FToolMenuProfile *param_1)

{
  TMap<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
  *this_01;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar3;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar4;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar5;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_02;
  int iVar6;
  
  this_00 = &this->Entries;
  this->Name = param_1->Name;
  if (this_00 != &param_1->Entries) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->Entries).field_0x38,
               (int *)&(this->Entries).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->Entries).field_0x38,
               *(int *)&(param_1->Entries).field_0x48);
    iVar6 = *(int *)&(param_1->Entries).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar6);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar6,(ForAnyElementType *)this_00,(int *)&(this->Entries).field_0x8,
               (int *)&(this->Entries).field_0xc);
    puVar1 = &(param_1->Entries).field_0x10;
    puVar2 = &(this->Entries).field_0x10;
    *(undefined4 *)&(this->Entries).field_0x30 = *(undefined4 *)&(param_1->Entries).field_0x30;
    *(undefined4 *)&(this->Entries).field_0x34 = *(undefined4 *)&(param_1->Entries).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar6 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->Entries,(longlong)iVar6 * 0x14);
    }
  }
  this_01 = &this->Sections;
  if (this_01 != &param_1->Sections) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->Sections).field_0x38,
               (int *)&(this->Sections).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->Sections).field_0x38,
               *(int *)&(param_1->Sections).field_0x48);
    iVar6 = *(int *)&(param_1->Sections).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,iVar6);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar6,(ForAnyElementType *)this_01,(int *)&(this->Sections).field_0x8,
               (int *)&(this->Sections).field_0xc);
    puVar1 = &(param_1->Sections).field_0x10;
    puVar2 = &(this->Sections).field_0x10;
    *(undefined4 *)&(this->Sections).field_0x30 = *(undefined4 *)&(param_1->Sections).field_0x30;
    *(undefined4 *)&(this->Sections).field_0x34 = *(undefined4 *)&(param_1->Sections).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar6 != 0) {
      memcpy(*(void **)this_01,*(void **)&param_1->Sections,(longlong)iVar6 * 0x14);
    }
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->SuppressExtenders,&param_1->SuppressExtenders);
  pTVar3 = &(param_1->MenuPermissions).DenyList;
  pTVar4 = &(this->MenuPermissions).DenyList;
  if (pTVar4 != pTVar3) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->MenuPermissions).DenyList.field_0x38,
               (int *)&(this->MenuPermissions).DenyList.field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->MenuPermissions).DenyList.field_0x38,
               *(int *)&(param_1->MenuPermissions).DenyList.field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar4,
                (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar3);
  }
  pTVar3 = &(param_1->MenuPermissions).AllowList;
  pTVar4 = &(this->MenuPermissions).AllowList;
  if (pTVar4 != pTVar3) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->MenuPermissions).AllowList.field_0x38,
               (int *)&(this->MenuPermissions).AllowList.field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->MenuPermissions).AllowList.field_0x38,
               *(int *)&(param_1->MenuPermissions).AllowList.field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar4,
                (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar3);
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->MenuPermissions).DenyListAll,&(param_1->MenuPermissions).DenyListAll);
  pTVar5 = &(param_1->MenuPermissions).OnFilterChangedDelegate;
  this_02 = &(this->MenuPermissions).OnFilterChangedDelegate;
  if (pTVar5 != this_02) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_02,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar5);
  }
  (this->MenuPermissions).bSuppressOnFilterChanged =
       (param_1->MenuPermissions).bSuppressOnFilterChanged;
  return this;
}

// AddEntry @ 1427c78b0

FCustomizedToolMenuEntry * __thiscall
FToolMenuProfile::AddEntry(FToolMenuProfile *this,FName param_1)

{
  uint uVar1;
  FCustomizedToolMenuEntry *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  pFVar2 = TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
                       *)&this->Entries,uVar1 + param_1.Number,local_res10);
  return pFVar2;
}

// AddSection @ 1427c9790

FCustomizedToolMenuSection * __thiscall
FToolMenuProfile::AddSection(FToolMenuProfile *this,FName param_1)

{
  uint uVar1;
  FCustomizedToolMenuSection *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  pFVar2 = TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
                       *)&this->Sections,uVar1 + param_1.Number,local_res10);
  return pFVar2;
}

// FindEntry @ 1428097a0

FCustomizedToolMenuEntry * __thiscall
FToolMenuProfile::FindEntry(FToolMenuProfile *this,FName param_1)

{
  FCustomizedToolMenuEntry *pFVar1;
  
  pFVar1 = TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
           ::Find((TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
                   *)&this->Entries,param_1);
  return pFVar1;
}

// FindEntry @ 1428097b0

FCustomizedToolMenuEntry * __thiscall
FToolMenuProfile::FindEntry(FToolMenuProfile *this,FName param_1)

{
  FCustomizedToolMenuEntry *pFVar1;
  
  pFVar1 = TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
           ::Find((TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
                   *)&this->Entries,param_1);
  return pFVar1;
}

// FindSection @ 1428097c0

FCustomizedToolMenuSection * __thiscall
FToolMenuProfile::FindSection(FToolMenuProfile *this,FName param_1)

{
  FCustomizedToolMenuSection *pFVar1;
  
  pFVar1 = TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
           ::Find((TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
                   *)&this->Sections,param_1);
  return pFVar1;
}

// FindSection @ 1428097d0

FCustomizedToolMenuSection * __thiscall
FToolMenuProfile::FindSection(FToolMenuProfile *this,FName param_1)

{
  FCustomizedToolMenuSection *pFVar1;
  
  pFVar1 = TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
           ::Find((TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
                   *)&this->Sections,param_1);
  return pFVar1;
}

// GetEntryVisiblity @ 14280fe10

ECustomizedToolMenuVisibility __thiscall
FToolMenuProfile::GetEntryVisiblity(FToolMenuProfile *this,FName param_1)

{
  FCustomizedToolMenuEntry *pFVar1;
  
  pFVar1 = TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
           ::Find((TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
                   *)&this->Entries,param_1);
  if (pFVar1 != (FCustomizedToolMenuEntry *)0x0) {
    return pFVar1->Visibility;
  }
  return None;
}

// GetSectionVisiblity @ 142814970

ECustomizedToolMenuVisibility __thiscall
FToolMenuProfile::GetSectionVisiblity(FToolMenuProfile *this,FName param_1)

{
  FCustomizedToolMenuSection *pFVar1;
  
  pFVar1 = TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
           ::Find((TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
                   *)&this->Sections,param_1);
  if (pFVar1 != (FCustomizedToolMenuSection *)0x0) {
    return pFVar1->Visibility;
  }
  return None;
}

// IsEntryHidden @ 14281e0b0

bool __thiscall FToolMenuProfile::IsEntryHidden(FToolMenuProfile *this,FName param_1)

{
  FCustomizedToolMenuEntry *pFVar1;
  
  pFVar1 = TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
           ::Find((TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
                   *)&this->Entries,param_1);
  if (pFVar1 != (FCustomizedToolMenuEntry *)0x0) {
    return pFVar1->Visibility == Hidden;
  }
  return false;
}

// IsSectionHidden @ 14281f6b0

bool __thiscall FToolMenuProfile::IsSectionHidden(FToolMenuProfile *this,FName param_1)

{
  FCustomizedToolMenuSection *pFVar1;
  
  pFVar1 = TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
           ::Find((TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
                   *)&this->Sections,param_1);
  if (pFVar1 != (FCustomizedToolMenuSection *)0x0) {
    return pFVar1->Visibility == Hidden;
  }
  return false;
}

// IsSuppressExtenders @ 14281f910

bool __thiscall FToolMenuProfile::IsSuppressExtenders(FToolMenuProfile *this)

{
  return (this->SuppressExtenders).ArrayNum != 0;
}

// SetSuppressExtenders @ 142835a60

void __thiscall
FToolMenuProfile::SetSuppressExtenders(FToolMenuProfile *this,FName param_1,bool param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  FName FVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FName local_res10;
  
  this_00 = &this->SuppressExtenders;
  local_res10 = param_1;
  if (param_2) {
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,&local_res10);
    return;
  }
  pFVar2 = (FName *)(this_00->AllocatorInstance).Data;
  if (((pFVar2 <= &local_res10) && (&local_res10 < pFVar2 + (this->SuppressExtenders).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->SuppressExtenders).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (FName *)(this_00->AllocatorInstance).Data;
    bVar4 = *pFVar2 != local_res10;
    lVar6 = 0;
    FVar5 = local_res10;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (pFVar2[lVar6] != FVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + iVar9,pFVar2 + iVar7,(longlong)(iVar8 - iVar7) << 3);
          FVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->SuppressExtenders).ArrayNum = iVar9;
  }
  return;
}

