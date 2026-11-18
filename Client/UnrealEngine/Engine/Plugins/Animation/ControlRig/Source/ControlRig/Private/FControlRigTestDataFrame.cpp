// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticStruct @ 14a2028f0

UScriptStruct * __cdecl FControlRigTestDataFrame::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigTestDataFrame.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigTestDataFrame.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigTestDataFrame,(UObject *)pUVar1,
                         L"ControlRigTestDataFrame");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigTestDataFrame.OuterSingleton;
}

// FControlRigTestDataFrame @ 14a21edc0

FControlRigTestDataFrame * __thiscall
FControlRigTestDataFrame::FControlRigTestDataFrame
          (FControlRigTestDataFrame *this,FControlRigTestDataFrame *param_1)

{
  double dVar1;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *pTVar2;
  
  this->AbsoluteTime = param_1->AbsoluteTime;
  dVar1 = param_1->DeltaTime;
  (this->Variables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DeltaTime = dVar1;
  (this->Variables).AllocatorInstance.Data = (param_1->Variables).AllocatorInstance.Data;
  (param_1->Variables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Variables).ArrayNum = (param_1->Variables).ArrayNum;
  (this->Variables).ArrayMax = (param_1->Variables).ArrayMax;
  (param_1->Variables).ArrayNum = 0;
  (param_1->Variables).ArrayMax = 0;
  (this->Pose).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pose).Elements.AllocatorInstance.Data = (param_1->Pose).Elements.AllocatorInstance.Data;
  (param_1->Pose).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pose).Elements.ArrayNum = (param_1->Pose).Elements.ArrayNum;
  (this->Pose).Elements.ArrayMax = (param_1->Pose).Elements.ArrayMax;
  (param_1->Pose).Elements.ArrayNum = 0;
  (param_1->Pose).Elements.ArrayMax = 0;
  (this->Pose).HierarchyTopologyVersion = (param_1->Pose).HierarchyTopologyVersion;
  (this->Pose).PoseHash = (param_1->Pose).PoseHash;
  (this->Pose).CachedPoseHash = (param_1->Pose).CachedPoseHash;
  pTVar2 = &(this->Pose).KeyToIndex;
  *(undefined8 *)&pTVar2->field_0x0 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = 0;
  TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
              *)pTVar2,
             (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
              *)&(param_1->Pose).KeyToIndex);
  (this->Metadata).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Metadata).AllocatorInstance.Data = (param_1->Metadata).AllocatorInstance.Data;
  (param_1->Metadata).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Metadata).ArrayNum = (param_1->Metadata).ArrayNum;
  (this->Metadata).ArrayMax = (param_1->Metadata).ArrayMax;
  (param_1->Metadata).ArrayNum = 0;
  (param_1->Metadata).ArrayMax = 0;
  (this->ArchiveCustomVersions).Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArchiveCustomVersions).Versions.AllocatorInstance.Data =
       (param_1->ArchiveCustomVersions).Versions.AllocatorInstance.Data;
  (param_1->ArchiveCustomVersions).Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArchiveCustomVersions).Versions.ArrayNum =
       (param_1->ArchiveCustomVersions).Versions.ArrayNum;
  (this->ArchiveCustomVersions).Versions.ArrayMax =
       (param_1->ArchiveCustomVersions).Versions.ArrayMax;
  (param_1->ArchiveCustomVersions).Versions.ArrayNum = 0;
  (param_1->ArchiveCustomVersions).Versions.ArrayMax = 0;
  *(undefined8 *)&(this->MetadataMap).field_0x0 = 0;
  *(undefined8 *)&(this->MetadataMap).field_0x8 = 0;
  *(undefined8 *)&(this->MetadataMap).field_0x20 = 0;
  *(undefined4 *)&(this->MetadataMap).field_0x28 = 0;
  *(undefined4 *)&(this->MetadataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetadataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetadataMap).field_0x34 = 0;
  *(undefined8 *)&(this->MetadataMap).field_0x40 = 0;
  *(undefined4 *)&(this->MetadataMap).field_0x48 = 0;
  TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
              *)&this->MetadataMap,
             (TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
              *)&param_1->MetadataMap);
  this->bTestMetadata = param_1->bTestMetadata;
  return this;
}

// FControlRigTestDataFrame @ 14a21ef40

FControlRigTestDataFrame * __thiscall
FControlRigTestDataFrame::FControlRigTestDataFrame
          (FControlRigTestDataFrame *this,FControlRigTestDataFrame *param_1)

{
  TArray<FControlRigReplayVariable,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FRigPose *pFVar3;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *this_00;
  undefined1 *puVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar5;
  FCustomVersionContainer *pFVar6;
  TMap<FRigElementKey,URigHierarchy::FMetadataStorage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>_>
  *this_01;
  int iVar7;
  FControlRigReplayVariable *pFVar8;
  FScriptContainerElement *pFVar9;
  
  pTVar1 = &this->Variables;
  this->AbsoluteTime = param_1->AbsoluteTime;
  this->DeltaTime = param_1->DeltaTime;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Variables).ArrayMax;
  iVar7 = (param_1->Variables).ArrayNum;
  pFVar8 = (FControlRigReplayVariable *)(param_1->Variables).AllocatorInstance.Data;
  (this->Variables).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar7,0,&pTVar1->AllocatorInstance,iVar7,piVar2);
    ConstructItems<FControlRigReplayVariable,FControlRigReplayVariable,int>
              ((pTVar1->AllocatorInstance).Data,pFVar8,iVar7);
  }
  pFVar3 = &this->Pose;
  (pFVar3->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Pose).Elements.ArrayMax;
  iVar7 = (param_1->Pose).Elements.ArrayNum;
  pFVar9 = (param_1->Pose).Elements.AllocatorInstance.Data;
  (this->Pose).Elements.ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x110,0x10,iVar7,0,(ForAnyElementType *)pFVar3,iVar7,piVar2);
    memcpy((pFVar3->Elements).AllocatorInstance.Data,pFVar9,(longlong)iVar7 * 0x110);
  }
  this_00 = &(this->Pose).KeyToIndex;
  (this->Pose).HierarchyTopologyVersion = (param_1->Pose).HierarchyTopologyVersion;
  (this->Pose).PoseHash = (param_1->Pose).PoseHash;
  (this->Pose).CachedPoseHash = (param_1->Pose).CachedPoseHash;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = 0;
  TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)this_00,
              (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)&(param_1->Pose).KeyToIndex);
  pTVar5 = &this->Metadata;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Metadata).ArrayMax;
  iVar7 = (param_1->Metadata).ArrayNum;
  pFVar9 = (param_1->Metadata).AllocatorInstance.Data;
  (this->Metadata).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar7,0,&pTVar5->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar9,(longlong)iVar7);
  }
  pFVar6 = &this->ArchiveCustomVersions;
  (pFVar6->Versions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ArchiveCustomVersions).Versions.ArrayMax;
  iVar7 = (param_1->ArchiveCustomVersions).Versions.ArrayNum;
  pFVar9 = (param_1->ArchiveCustomVersions).Versions.AllocatorInstance.Data;
  (this->ArchiveCustomVersions).Versions.ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar7,0,(ForAnyElementType *)pFVar6,iVar7,piVar2);
    memcpy((pFVar6->Versions).AllocatorInstance.Data,pFVar9,(longlong)iVar7 * 0x28);
  }
  this_01 = &this->MetadataMap;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->MetadataMap).field_0x8 = 0;
  *(undefined8 *)&(this->MetadataMap).field_0x20 = 0;
  puVar4 = &(this->MetadataMap).field_0x48;
  *(undefined4 *)&(this->MetadataMap).field_0x28 = 0;
  *(undefined4 *)&(this->MetadataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetadataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetadataMap).field_0x34 = 0;
  *(undefined8 *)&(this->MetadataMap).field_0x40 = 0;
  *(undefined4 *)puVar4 = 0;
  if (this_01 != &param_1->MetadataMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->MetadataMap).field_0x38,(int *)puVar4,
               (ForElementType<FSetElementId> *)&(param_1->MetadataMap).field_0x38,
               *(int *)&(param_1->MetadataMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_01,
                (TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->MetadataMap);
  }
  this->bTestMetadata = param_1->bTestMetadata;
  return this;
}

// FControlRigTestDataFrame @ 14a21f1a0

FControlRigTestDataFrame * __thiscall
FControlRigTestDataFrame::FControlRigTestDataFrame(FControlRigTestDataFrame *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FControlRigReplayVariable *pFVar4;
  
  (this->Pose).HierarchyTopologyVersion = -1;
  (this->Pose).PoseHash = -1;
  (this->Variables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Variables).ArrayMax;
  (this->Variables).ArrayNum = 0;
  piVar2 = &(this->Pose).Elements.ArrayMax;
  *piVar1 = 0;
  (this->Pose).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pose).Elements.ArrayNum = 0;
  *piVar2 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x20 = 0;
  (this->Pose).CachedPoseHash = -1;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = 0;
  (this->Metadata).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Metadata).ArrayNum = 0;
  (this->Metadata).ArrayMax = 0;
  (this->ArchiveCustomVersions).Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArchiveCustomVersions).Versions.ArrayNum = 0;
  (this->ArchiveCustomVersions).Versions.ArrayMax = 0;
  *(undefined8 *)&this->MetadataMap = 0;
  *(undefined8 *)&(this->MetadataMap).field_0x8 = 0;
  *(undefined8 *)&(this->MetadataMap).field_0x20 = 0;
  *(undefined4 *)&(this->MetadataMap).field_0x28 = 0;
  *(undefined4 *)&(this->MetadataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetadataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetadataMap).field_0x34 = 0;
  *(undefined8 *)&(this->MetadataMap).field_0x40 = 0;
  *(undefined4 *)&(this->MetadataMap).field_0x48 = 0;
  this->AbsoluteTime = 0.0;
  this->DeltaTime = 0.0;
  pFVar4 = (FControlRigReplayVariable *)(this->Variables).AllocatorInstance.Data;
  iVar3 = (this->Variables).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FControlRigReplayVariable,int>(pFVar4,iVar3);
    (this->Variables).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->Variables).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FControlRigReplayVariable,int>(pFVar4,iVar3);
    (this->Variables).ArrayNum = 0;
  }
  iVar3 = *piVar2;
  (this->Pose).Elements.ArrayNum = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x110,0x10,0,(ForAnyElementType *)&this->Pose,0,piVar2);
  }
  this->bTestMetadata = true;
  return this;
}

// ~FControlRigTestDataFrame @ 14a2259b0

void __thiscall FControlRigTestDataFrame::~FControlRigTestDataFrame(FControlRigTestDataFrame *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->MetadataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetadataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetadataMap);
  pFVar2 = (this->ArchiveCustomVersions).Versions.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Metadata).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Pose).KeyToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Pose).KeyToIndex);
  pFVar2 = (this->Pose).Elements.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FControlRigReplayVariable,int>
            ((FControlRigReplayVariable *)(this->Variables).AllocatorInstance.Data,
             (this->Variables).ArrayNum);
  pFVar2 = (this->Variables).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Restore @ 14a289f70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FControlRigTestDataFrame::Restore(FControlRigTestDataFrame *this,UControlRig *param_1,bool param_2)

{
  int iVar1;
  URigHierarchy *this_00;
  bool bVar2;
  bool bVar3;
  int iVar4;
  FRigElementKey *this_01;
  FRigElementKey *pFVar5;
  undefined1 local_res10 [8];
  byte local_res18;
  FString local_f8;
  FArchiveState local_e8;
  undefined8 local_58;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_50;
  undefined8 local_48;
  
  if (param_1 != (UControlRig *)0x0) {
    iVar1 = (this->Pose).Elements.ArrayNum;
    this_01 = (FRigElementKey *)(this->Pose).Elements.AllocatorInstance.Data;
    this_00 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr;
    pFVar5 = (FRigElementKey *)((longlong)this_01 + (longlong)iVar1 * 0x110);
    local_res18 = param_2;
    while( true ) {
      if ((this->Pose).Elements.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FRigPoseElement_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (this_01 == pFVar5) {
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.Data.ArrayNum = 0;
        local_f8.Data.ArrayMax = 0;
        URigHierarchy::SetPose
                  (this_00,&this->Pose,local_res18 ^ CurrentLocal,All,
                   (FRigElementKeyCollection *)&local_f8,__real_3f800000);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        bVar2 = RestoreVariables(this,param_1);
        bVar3 = true;
        if (*(int *)&(this->MetadataMap).field_0x8 == *(int *)&(this->MetadataMap).field_0x34) {
          if ((this->Metadata).ArrayNum == 0) {
            this->bTestMetadata = false;
          }
          else {
            local_e8._padding_ = 0;
            local_e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
            local_e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
            local_e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
            local_e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
            local_e8._40_8_ = 0;
            local_e8.ArSerializingDefaults = 0;
            local_e8.ArPortFlags = 0;
            local_e8.ArMaxSerializeSize = 0;
            local_e8.ArUEVer.FileVersionUE4 = 0;
            local_e8.ArUEVer.FileVersionUE5 = 0;
            local_e8.ArLicenseeUEVer = 0;
            local_e8.ArEngineVer.Major = 0;
            local_e8.ArEngineVer.Minor = 0;
            local_e8.ArEngineVer.Patch = 0;
            local_e8.ArEngineVer._6_2_ = 0;
            local_e8.ArEngineVer.Changelist = 0;
            local_e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
            local_e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
            local_e8.SavePackageData = (FArchiveSavePackageData *)0x0;
            local_e8.SerializedProperty = (FProperty *)0x0;
            local_e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
            local_e8.bCustomVersionsAreReset = false;
            local_e8._129_7_ = 0;
            local_e8.NextProxy = (FArchiveState *)0x0;
            FArchiveState::FArchiveState(&local_e8);
            local_58 = 0;
            local_e8._padding_ = (longlong)&___7FMemoryReader__6B_;
            local_48 = 0x7fffffffffffffff;
            local_50 = &this->Metadata;
            FArchiveState::SetIsLoading(&local_e8,true);
            (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
            (**(code **)(local_e8._padding_ + 0x68))(&local_e8,&this->ArchiveCustomVersions);
            TSetPrivateFriend::
            Serialize<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
                      ((FArchive *)&local_e8,
                       (TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
                        *)&this->MetadataMap);
            FArchive::~FArchive((FArchive *)&local_e8);
          }
        }
        if (this->bTestMetadata != false) {
          bVar3 = URigHierarchy::SetMetadata
                            ((param_1->DynamicHierarchy).field0_0x0.DebugPtr,&this->MetadataMap);
        }
        return (bool)(bVar3 & bVar2);
      }
      iVar4 = URigHierarchy::GetIndex(this_00,this_01,true);
      if (iVar4 == -1) break;
      this_01 = (FRigElementKey *)&this_01[0x16].Name.Number;
    }
    if (1 < (byte)LogControlRig._0_1_) {
      FRigElementKey::ToString(this_01,&local_f8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// RestoreMetadata @ 14a28c190

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FControlRigTestDataFrame::RestoreMetadata(FControlRigTestDataFrame *this,UControlRig *param_1)

{
  bool bVar1;
  FArchiveState local_b8;
  undefined8 local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_20;
  undefined8 local_18;
  
  if (*(int *)&(this->MetadataMap).field_0x8 == *(int *)&(this->MetadataMap).field_0x34) {
    if ((this->Metadata).ArrayNum == 0) {
      this->bTestMetadata = false;
    }
    else {
      local_b8._padding_ = 0;
      local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_b8._40_8_ = 0;
      local_b8.ArSerializingDefaults = 0;
      local_b8.ArPortFlags = 0;
      local_b8.ArMaxSerializeSize = 0;
      local_b8.ArUEVer.FileVersionUE4 = 0;
      local_b8.ArUEVer.FileVersionUE5 = 0;
      local_b8.ArLicenseeUEVer = 0;
      local_b8.ArEngineVer.Major = 0;
      local_b8.ArEngineVer.Minor = 0;
      local_b8.ArEngineVer.Patch = 0;
      local_b8.ArEngineVer._6_2_ = 0;
      local_b8.ArEngineVer.Changelist = 0;
      local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_b8.SerializedProperty = (FProperty *)0x0;
      local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_b8.bCustomVersionsAreReset = false;
      local_b8._129_7_ = 0;
      local_b8.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_b8);
      local_28 = 0;
      local_b8._padding_ = (longlong)&___7FMemoryReader__6B_;
      local_18 = 0x7fffffffffffffff;
      local_20 = &this->Metadata;
      FArchiveState::SetIsLoading(&local_b8,true);
      (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
      (**(code **)(local_b8._padding_ + 0x68))(&local_b8,&this->ArchiveCustomVersions);
      TSetPrivateFriend::
      Serialize<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
                ((FArchive *)&local_b8,
                 (TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
                  *)&this->MetadataMap);
      FArchive::~FArchive((FArchive *)&local_b8);
    }
  }
  if (this->bTestMetadata == false) {
    return true;
  }
  bVar1 = URigHierarchy::SetMetadata
                    ((param_1->DynamicHierarchy).field0_0x0.DebugPtr,&this->MetadataMap);
  return bVar1;
}

// RestoreVariables @ 14a28cb20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FControlRigTestDataFrame::RestoreVariables(FControlRigTestDataFrame *this,UControlRig *param_1)

{
  FNameEntryId FVar1;
  bool bVar2;
  FName *pFVar3;
  FStaticBasicLogRecord *pFVar4;
  int iVar5;
  FName *pFVar6;
  wchar_t *pwVar7;
  FName FVar8;
  ForAnyElementType this_00;
  FName FVar9;
  FName *pFVar10;
  FControlRigTestDataFrame *local_res8;
  undefined1 local_res18 [16];
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  undefined1 local_68 [16];
  FName local_58;
  FName FStack_50;
  FName local_48;
  FName FStack_40;
  
  local_res8 = this;
  URigVMHost::GetExternalVariables((URigVMHost *)param_1,&local_88);
  iVar5 = local_88.ArrayNum;
  if (iVar5 == (this->Variables).ArrayNum) {
    pFVar10 = (FName *)(local_88.AllocatorInstance.Data + (longlong)iVar5 * 0x30);
    this_00.Data = local_88.AllocatorInstance.Data;
    do {
      if (local_88.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FRigVMExternalVariable_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if ((FName *)this_00.Data == pFVar10) {
        bVar2 = true;
        goto LAB_14a28cdfc;
      }
      if ((*(FName *)((longlong)this_00.Data + 0x28) == (FName)0x0) ||
         (*(FName *)((longlong)this_00.Data + 8) == (FName)0x0)) {
        if (1 < (byte)LogControlRig._0_1_) {
          ::FName::ToString((FName *)this_00.Data,&local_78);
          pFVar4 = &::LOG_Static;
LAB_14a28cc4a:
          UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogControlRig);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14a28cc67;
      }
      local_68._0_8_ = *(undefined8 *)this_00.Data;
      local_68._8_8_ = *(FName *)((longlong)this_00.Data + 8);
      pFVar6 = (FName *)(this->Variables).AllocatorInstance.Data;
      local_58 = *(FName *)((longlong)this_00.Data + 0x10);
      FStack_50 = *(FName *)((longlong)this_00.Data + 0x18);
      pFVar3 = pFVar6 + (longlong)(this->Variables).ArrayNum * 4;
      local_48 = *(FName *)((longlong)this_00.Data + 0x20);
      FStack_40 = *(FName *)((longlong)this_00.Data + 0x28);
      while( true ) {
        if (pFVar6 == pFVar3) {
          if ((byte)LogControlRig._0_1_ < 2) goto LAB_14a28cc67;
          ::FName::ToString((FName *)this_00.Data,&local_78);
          pFVar4 = &::LOG_Static;
          goto LAB_14a28cc4a;
        }
        if ((*pFVar6 == (FName)local_68._0_8_) && (pFVar6[1] == local_58)) break;
        pFVar6 = pFVar6 + 4;
      }
      FOutputDevice::FOutputDevice((FOutputDevice *)local_68);
      FVar8 = *(FName *)((longlong)this_00.Data + 8);
      local_58.ComparisonIndex.Value = 0;
      local_58.Number = 0;
      FVar9 = *(FName *)((longlong)this_00.Data + 0x28);
      local_68._0_8_ =
           &`FControlRigTestDataFrame::RestoreVariables'::`2'::FControlRigTestDataFrame_ErrorPipe::
            _vftable_;
      FStack_50.ComparisonIndex.Value = 0;
      FStack_50.Number = 0;
      if (pFVar6[3].ComparisonIndex.Value == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)(pFVar6 + 2);
      }
      bVar2 = FProperty::ValidateImportFlags((FProperty *)FVar8,0,(FOutputDevice *)local_68);
      if ((bVar2) && ((FName)pwVar7 != (FName)0x0)) {
        (**(code **)(*(longlong *)FVar8 + 0xe8))(FVar8,pwVar7,FVar9,0,0,0x8000000,local_68);
      }
      FVar1.Value = FStack_50.ComparisonIndex.Value;
      if (FStack_50.ComparisonIndex.Value != 0) goto LAB_14a28cd24;
      DestructItems<FString,int>((FString *)local_58,0);
      if (local_58 != (FName)0x0) {
        FMemory::Free((void *)local_58);
      }
      FOutputDevice::~FOutputDevice((FOutputDevice *)local_68);
      this_00.Data = this_00.Data + 0x30;
      this = local_res8;
    } while( true );
  }
  if ((byte)LogControlRig._0_1_ < 2) {
LAB_14a28cc67:
    bVar2 = false;
  }
  else {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    bVar2 = false;
  }
LAB_14a28cdfc:
  if ((FName *)local_88.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return bVar2;
LAB_14a28cd24:
  FVar9 = (FName)((longlong)(int)FStack_50.ComparisonIndex.Value * 0x10 + (longlong)local_58);
  FVar8 = local_58;
  while( true ) {
    if (FStack_50.ComparisonIndex.Value != FVar1.Value) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (FVar8 == FVar9) break;
    if (1 < (byte)LogControlRig._0_1_) {
      ::FName::ToString((FName *)this_00.Data,&local_78);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    FVar8 = (FName)((longlong)FVar8 + 0x10);
  }
  DestructItems<FString,int>((FString *)local_58,FStack_50.ComparisonIndex.Value);
  if (local_58 != (FName)0x0) {
    FMemory::Free((void *)local_58);
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)local_68);
  bVar2 = false;
  goto LAB_14a28cdfc;
}

// Store @ 14a298550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FControlRigTestDataFrame::Store(FControlRigTestDataFrame *this,UControlRig *param_1,bool param_2)

{
  FRigPose *pFVar1;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *pTVar2;
  TArray<FControlRigReplayVariable,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  TMap<FRigElementKey,URigHierarchy::FMetadataStorage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>_>
  *pTVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar6;
  FControlRigReplayVariable *pFVar7;
  void *pvVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  ForAnyElementType FVar11;
  FControlRigTestDataFrame *pFVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
  *pTVar16;
  ulonglong uVar17;
  longlong lVar18;
  size_t _Size;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStackY_288 [32];
  undefined1 local_238 [4];
  uint local_234;
  ForAnyElementType local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  FString local_210;
  undefined8 local_200;
  FRigElementKeyCollection local_1f8;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> local_1e8;
  UControlRig *local_1d8;
  FControlRigTestDataFrame *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  FArchiveState local_1b8;
  undefined8 local_128;
  ForAnyElementType *local_120;
  undefined8 local_118;
  undefined1 local_108 [32];
  TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
  local_e8;
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  if (param_1 == (UControlRig *)0x0) {
    bVar13 = false;
  }
  else {
    local_1f8.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.Keys.ArrayNum = 0;
    local_1f8.Keys.ArrayMax = 0;
    this->AbsoluteTime = (double)*(float *)((longlong)&param_1->_padding_ + 4);
    this->DeltaTime = (double)*(float *)&param_1->_padding_;
    local_1d8 = param_1;
    local_1d0 = this;
    URigHierarchy::GetPose
              ((param_1->DynamicHierarchy).field0_0x0.DebugPtr,(FRigPose *)local_108,param_2,All,
               &local_1f8,true);
    if (local_1f8.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Keys.AllocatorInstance.Data);
    }
    pFVar1 = &this->Pose;
    if (pFVar1 != (FRigPose *)local_108) {
      pFVar20 = (pFVar1->Elements).AllocatorInstance.Data;
      if (pFVar20 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar20);
      }
      (pFVar1->Elements).AllocatorInstance.Data = (FScriptContainerElement *)local_108._0_8_;
      (this->Pose).Elements.ArrayNum = local_108._8_4_;
      (this->Pose).Elements.ArrayMax = local_108._12_4_;
      local_108._8_4_ = 0;
      local_108._12_4_ = 0;
      local_108._0_8_ = (FScriptContainerElement *)0x0;
    }
    pTVar2 = &(this->Pose).KeyToIndex;
    (this->Pose).HierarchyTopologyVersion = local_108._16_4_;
    (this->Pose).PoseHash = local_108._20_4_;
    (this->Pose).CachedPoseHash = local_108._24_4_;
    if (pTVar2 != (TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                   *)(local_108 + 0x20)) {
      TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                  *)pTVar2,
                 (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                  *)(local_108 + 0x20));
    }
    local_e8.HashSize = 0;
    if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_108 + 0x20));
    if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
    }
    pFVar7 = (FControlRigReplayVariable *)(this->Variables).AllocatorInstance.Data;
    pTVar3 = &this->Variables;
    piVar4 = &(this->Variables).ArrayMax;
    iVar15 = (this->Variables).ArrayNum;
    if (*piVar4 < 0) {
      DestructItems<FControlRigReplayVariable,int>(pFVar7,iVar15);
      (this->Variables).ArrayNum = 0;
      if (*piVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&pTVar3->AllocatorInstance,0,piVar4);
      }
    }
    else {
      DestructItems<FControlRigReplayVariable,int>(pFVar7,iVar15);
      (this->Variables).ArrayNum = 0;
    }
    URigVMHost::GetExternalVariables((URigVMHost *)param_1,&local_1e8);
    local_234 = local_1e8.ArrayNum;
    uVar17 = (ulonglong)(int)local_234;
    pFVar20 = local_1e8.AllocatorInstance.Data + 8;
    pFVar21 = local_1e8.AllocatorInstance.Data + uVar17 * 0x30;
    while( true ) {
      if (local_1e8.ArrayNum != (int)uVar17) {
        local_238[0] = 0;
        `TCheckedPointerIterator<FRigVMExternalVariable_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_238);
      }
      if (pFVar20 + -8 == pFVar21) break;
      local_220 = *(undefined8 *)(pFVar20 + -8);
      local_218 = *(undefined8 *)(pFVar20 + 8);
      local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8 = 0;
      local_210.Data.ArrayNum = 0;
      local_210.Data.ArrayMax = 0;
      local_1c0 = 0;
      if ((*(FProperty **)pFVar20 != (FProperty *)0x0) &&
         (pvVar8 = *(void **)(pFVar20 + 0x20), pvVar8 != (void *)0x0)) {
        FProperty::ExportText_Direct
                  (*(FProperty **)pFVar20,&local_210,pvVar8,pvVar8,(UObject *)0x0,0,(UObject *)0x0);
      }
      pFVar9 = (pTVar3->AllocatorInstance).Data;
      if ((pFVar9 <= (FScriptContainerElement *)&local_220) &&
         ((FScriptContainerElement *)&local_220 < pFVar9 + (longlong)*piVar4 * 0x20)) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          uVar14 = (*pcVar10)();
          return (bool)uVar14;
        }
      }
      iVar15 = (this->Variables).ArrayNum;
      if (iVar15 == *piVar4) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&pTVar3->AllocatorInstance,piVar4);
      }
      FVar11.Data = local_210.Data.AllocatorInstance.Data;
      (this->Variables).ArrayNum = iVar15 + 1;
      pFVar9 = (pTVar3->AllocatorInstance).Data;
      lVar18 = (longlong)iVar15 * 0x20;
      *(undefined8 *)(pFVar9 + lVar18) = local_220;
      pFVar22 = pFVar9 + lVar18 + 0x10;
      *(undefined8 *)(pFVar9 + lVar18 + 8) = local_218;
      *(undefined8 *)pFVar22 = 0;
      lVar19 = (longlong)local_210.Data.ArrayNum;
      *(int *)(pFVar22 + 8) = local_210.Data.ArrayNum;
      if (local_210.Data.ArrayNum == 0) {
        *(int *)(pFVar9 + lVar18 + 0x1c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_210.Data.ArrayNum,0,(ForAnyElementType *)pFVar22,
                   local_210.Data.ArrayNum,(int *)(pFVar9 + lVar18 + 0x1c));
        memcpy(*(void **)pFVar22,FVar11.Data,lVar19 * 2);
      }
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
      pFVar20 = pFVar20 + 0x30;
      uVar17 = (ulonglong)local_234;
    }
    pTVar16 = (TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
               *)URigHierarchy::CopyMetadata
                           ((local_1d8->DynamicHierarchy).field0_0x0.DebugPtr,
                            (TMap<FRigElementKey,URigHierarchy::FMetadataStorage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>_>
                             *)local_98);
    pFVar12 = local_1d0;
    pTVar5 = &local_1d0->MetadataMap;
    if ((TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
         *)pTVar5 != pTVar16) {
      TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
                  *)pTVar5,pTVar16);
    }
    local_50 = 0;
    if ((void *)local_98._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    local_230.Data = (FScriptContainerElement *)0x0;
    local_228 = 0;
    local_1b8._padding_ = 0;
    local_1b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_200 = 0;
    local_1b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_1b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_1b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_1b8._40_8_ = 0;
    local_1b8.ArSerializingDefaults = 0;
    local_1b8.ArPortFlags = 0;
    local_1b8.ArMaxSerializeSize = 0;
    local_1b8.ArUEVer.FileVersionUE4 = 0;
    local_1b8.ArUEVer.FileVersionUE5 = 0;
    local_1b8.ArLicenseeUEVer = 0;
    local_1b8.ArEngineVer.Major = 0;
    local_1b8.ArEngineVer.Minor = 0;
    local_1b8.ArEngineVer.Patch = 0;
    local_1b8.ArEngineVer._6_2_ = 0;
    local_1b8.ArEngineVer.Changelist = 0;
    local_1b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_1b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_1b8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_1b8.SerializedProperty = (FProperty *)0x0;
    local_1b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_1b8.bCustomVersionsAreReset = false;
    local_1b8._129_7_ = 0;
    local_1b8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_1b8);
    local_128 = 0;
    local_1b8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_120 = &local_230;
    local_118 = local_200;
    FArchiveState::SetIsSaving(&local_1b8,true);
    (**(code **)(local_1b8._padding_ + 0x108))(&local_1b8,0);
    local_1b8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FArchive::UsingCustomVersion((FArchive *)&local_1b8,&FControlRigObjectVersion::GUID);
    TSetPrivateFriend::
    Serialize<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
              ((FArchive *)&local_1b8,
               (TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
                *)pTVar5);
    FVar11.Data = local_230.Data;
    pTVar6 = &pFVar12->Metadata;
    if (pTVar6 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_230) {
      iVar15 = (int)local_228;
      _Size = (size_t)(int)local_228;
      piVar4 = &(pFVar12->Metadata).ArrayMax;
      (pFVar12->Metadata).ArrayNum = (int)local_228;
      if (((int)local_228 == 0) && (*piVar4 == 0)) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(int)local_228,*piVar4,&pTVar6->AllocatorInstance,(int)local_228,piVar4);
        if (iVar15 != 0) {
          memcpy((pTVar6->AllocatorInstance).Data,FVar11.Data,_Size);
        }
      }
    }
    FArchive::~FArchive((FArchive *)&local_1b8);
    if (local_230.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data);
    }
    if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.AllocatorInstance.Data);
    }
    bVar13 = true;
  }
  return bVar13;
}

