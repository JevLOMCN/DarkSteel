// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 2

// FSessionSettingsChanges @ 14ee0eaf0

FSessionSettingsChanges * __thiscall
UE::Online::FSessionSettingsChanges::FSessionSettingsChanges
          (FSessionSettingsChanges *this,FSessionSettingsChanges *param_1)

{
  TMap<FName,UE::Online::FCustomSessionSettingUpdate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSettingUpdate,0>_>
  *this_00;
  undefined1 *puVar1;
  int *piVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  
  (this->SchemaName).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->SchemaName).field0_0x0.TypedValue.Number = 0;
  if ((param_1->SchemaName).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    (this->SchemaName).field0_0x0 = (param_1->SchemaName).field0_0x0;
  }
  (this->NumMaxConnections).bIsSet = false;
  bVar4 = (param_1->NumMaxConnections).bIsSet;
  (this->NumMaxConnections).bIsSet = bVar4;
  if (bVar4 != false) {
    (this->NumMaxConnections).TypedValue = (param_1->NumMaxConnections).TypedValue;
  }
  (this->JoinPolicy).bIsSet = false;
  bVar4 = (param_1->JoinPolicy).bIsSet;
  (this->JoinPolicy).bIsSet = bVar4;
  if (bVar4 != false) {
    (this->JoinPolicy).TypedValue = (param_1->JoinPolicy).TypedValue;
  }
  (this->bAllowNewMembers).bIsSet = false;
  bVar4 = (param_1->bAllowNewMembers).bIsSet;
  (this->bAllowNewMembers).bIsSet = bVar4;
  if (bVar4 != false) {
    (this->bAllowNewMembers).TypedValue = (param_1->bAllowNewMembers).TypedValue;
  }
  *(undefined8 *)&(this->AddedCustomSettings).field_0x0 = 0;
  *(undefined8 *)&(this->AddedCustomSettings).field_0x8 = 0;
  *(undefined8 *)&(this->AddedCustomSettings).field_0x20 = 0;
  *(undefined4 *)&(this->AddedCustomSettings).field_0x28 = 0;
  *(undefined4 *)&(this->AddedCustomSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->AddedCustomSettings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AddedCustomSettings).field_0x34 = 0;
  *(undefined8 *)&(this->AddedCustomSettings).field_0x40 = 0;
  *(undefined4 *)&(this->AddedCustomSettings).field_0x48 = 0;
  TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
               *)&this->AddedCustomSettings,
              (TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
               *)&param_1->AddedCustomSettings);
  this_00 = &this->ChangedCustomSettings;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ChangedCustomSettings).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedCustomSettings).field_0x20 = 0;
  puVar1 = &(this->ChangedCustomSettings).field_0x48;
  *(undefined4 *)&(this->ChangedCustomSettings).field_0x28 = 0;
  *(undefined4 *)&(this->ChangedCustomSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChangedCustomSettings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChangedCustomSettings).field_0x34 = 0;
  *(undefined8 *)&(this->ChangedCustomSettings).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_00 != &param_1->ChangedCustomSettings) {
    Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ChangedCustomSettings).field_0x38,
               (int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->ChangedCustomSettings).field_0x38,
               *(int *)&(param_1->ChangedCustomSettings).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSettingUpdate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSettingUpdate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSettingUpdate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->ChangedCustomSettings);
  }
  pTVar3 = &this->RemovedCustomSettings;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->RemovedCustomSettings).ArrayMax;
  iVar5 = (param_1->RemovedCustomSettings).ArrayNum;
  _Src = (param_1->RemovedCustomSettings).AllocatorInstance.Data;
  (this->RemovedCustomSettings).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar5 << 3);
  }
  return this;
}

// ~FSessionSettingsChanges @ 14ee25250

void __thiscall
UE::Online::FSessionSettingsChanges::~FSessionSettingsChanges(FSessionSettingsChanges *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->RemovedCustomSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ChangedCustomSettings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChangedCustomSettings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSettingUpdate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSettingUpdate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSettingUpdate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChangedCustomSettings);
  *(undefined4 *)&(this->AddedCustomSettings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AddedCustomSettings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AddedCustomSettings);
  return;
}

