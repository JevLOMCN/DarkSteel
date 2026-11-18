// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 20

// Emplace<FName_const_&,FInstallBundleProgress_const_&> @ 148bbdef0

FInstallBundleProgress * __thiscall
TMapBase<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
::Emplace<FName_const_&,FInstallBundleProgress_const_&>
          (TMapBase<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
           *this,FName *param_1,FInstallBundleProgress *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x48);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,FInstallBundleProgress>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    FInstallBundleProgress::FInstallBundleProgress
              ((FInstallBundleProgress *)((longlong)local_28.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x40) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,FInstallBundleProgress>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,FInstallBundleProgress>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FInstallBundleProgress *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x48 + 8);
}

// Emplace<FString_const_&,InstallBundleUtil::PersistentStats::FPersistentTimerData_const_&> @ 148bbe020

FPersistentTimerData * __thiscall
TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
::Emplace<FString_const_&,InstallBundleUtil::PersistentStats::FPersistentTimerData_const_&>
          (TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
           *this,FString *param_1,FPersistentTimerData *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>
  *pTVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar8 + 4 + (longlong)iVar3 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar8 + (longlong)iVar1 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar7 = (TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>
            *)0x0;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>
       *)0x0) {
    ::FString::FString(local_28.Pointer,param_1);
    *(undefined ***)((longlong)local_28.Pointer + 0x10) =
         &___7FPersistentTimerData_PersistentStats_InstallBundleUtil__6B_;
    *(double *)((longlong)local_28.Pointer + 0x18) = param_2->LastUpdateTime;
    *(double *)((longlong)local_28.Pointer + 0x20) = param_2->CurrentValue;
    *(undefined4 *)((longlong)local_28.Pointer + 0x28) = 0xffffffff;
    pTVar7 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar5 = *(int *)&pTVar7->field_0x8 + -1;
  if (*(int *)&pTVar7->field_0x8 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)pTVar7;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar7,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar7,local_res8[0]);
  }
  return (FPersistentTimerData *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar8 * 0x30);
}

// EmplaceByHash<FName_const_&> @ 148bbe3e0

FInstallBundleProgress * __thiscall
TMapBase<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<FName,FInstallBundleProgress>_> *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_68;
  undefined8 local_58;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar4 * 0x48);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_68,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<FName,FInstallBundleProgress>_> *)0x0;
  if (local_68.Pointer != (TSparseSetElement<TTuple<FName,FInstallBundleProgress>_> *)0x0) {
    *(FName *)local_68.Pointer = *param_2;
    *(undefined8 *)((longlong)local_68.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_68.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_68.Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_68.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_68.Pointer + 0x20) = 0;
    *(undefined8 *)((longlong)local_68.Pointer + 0x30) = 0;
    *(undefined4 *)((longlong)local_68.Pointer + 0x38) = 0;
    local_58 = 0;
    DestructItems<FBuildInstallerStat,int>((FBuildInstallerStat *)0x0,0);
    *(undefined4 *)((longlong)local_68.Pointer + 0x40) = 0xffffffff;
    pTVar5 = local_68.Pointer;
  }
  local_res8[0] = local_68.Index;
  bVar3 = TSet<TTuple<FName,FInstallBundleProgress>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,FInstallBundleProgress>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (FInstallBundleProgress *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x48 + 8);
}

// EmplaceByHash<FName_const_&,InstallBundleUtil::PersistentStats::FBundlePersistentStats> @ 148bbe530

FBundlePersistentStats * __thiscall
TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
::EmplaceByHash<FName_const_&,InstallBundleUtil::PersistentStats::FBundlePersistentStats>
          (TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
           *this,uint param_1,FName *param_2,FBundlePersistentStats *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0xe0 + 4 + lVar5);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xe0 + lVar5) = 0xffffffff;
    }
  }
  TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>_>
       *)0x0) {
    *(FName *)local_28.Pointer = *param_2;
    InstallBundleUtil::PersistentStats::FPersistentStatsBase::FPersistentStatsBase
              ((FPersistentStatsBase *)((longlong)local_28.Pointer + 8),
               (FPersistentStatsBase *)param_3);
    *(undefined ***)((longlong)local_28.Pointer + 8) =
         &___7FBundlePersistentStats_PersistentStats_InstallBundleUtil__6B_;
    ::FString::FString((FString *)((longlong)local_28.Pointer + 200),&param_3->BundleName);
    *(undefined4 *)((longlong)local_28.Pointer + 0xd8) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  bVar3 = TSet<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_28.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats>,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_28.Pointer,local_res8[0]);
  }
  return (FBundlePersistentStats *)(*(longlong *)&(this->Pairs).Elements + lVar5 * 0xe0 + 8);
}

// EmplaceByHash<FString_const_&> @ 148bbe690

FPersistentTimerData * __thiscall
TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
::EmplaceByHash<FString_const_&>
          (TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_48;
  FJsonSerializable local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar5 + 4 + (longlong)iVar4 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer !=
      (TSparseSetElement<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>_>
       *)0x0) {
    local_38 = (FJsonSerializable)&___7FPersistentTimerData_PersistentStats_InstallBundleUtil__6B_;
    local_30 = 0;
    uStack_28 = 0;
    ::FString::FString(local_48.Pointer,param_2);
    *(undefined ***)((longlong)local_48.Pointer + 0x10) =
         &___7FPersistentTimerData_PersistentStats_InstallBundleUtil__6B_;
    *(undefined8 *)((longlong)local_48.Pointer + 0x18) = local_30;
    *(undefined8 *)((longlong)local_48.Pointer + 0x20) = uStack_28;
    FJsonSerializable::~FJsonSerializable(&local_38);
    *(undefined4 *)((longlong)local_48.Pointer + 0x28) = 0xffffffff;
  }
  local_res8[0] = local_48.Index;
  bVar3 = TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_48.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_48.Pointer,local_res8[0]);
  }
  return (FPersistentTimerData *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar5 * 0x30);
}

// FindOrAddImpl<InstallBundleUtil::FContentRequestStatsKey_const_&> @ 148bbf790

FContentRequestStats * __thiscall
TMapBase<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,0>_>
::FindOrAddImpl<InstallBundleUtil::FContentRequestStatsKey_const_&>
          (TMapBase<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,0>_>
           *this,uint param_1,FContentRequestStatsKey *param_2)

{
  FName *pFVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FContentRequestStatsKey *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar2 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar1 = (FName *)((longlong)(int)uVar2 * 0x80 + *(longlong *)&(this->Pairs).Elements);
        if ((*pFVar1 == param_2->BundleName) && (pFVar1[1] == (FName)param_2->Cookie)) {
          if ((uVar2 != 0xffffffff) && (pFVar1 != (FName *)0x0)) {
            return (FContentRequestStats *)(pFVar1 + 2);
          }
          break;
        }
        uVar2 = pFVar1[0xf].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats>,TDefaultMapHashableKeyFuncs<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<InstallBundleUtil::FContentRequestStatsKey_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<InstallBundleUtil::FContentRequestStatsKey_const_&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (FContentRequestStats *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x80 + 0x10);
}

// FindOrAddImpl<FInstallBundleSourceType_const_&> @ 148bbf850

FPerSourceBundleCacheInfo * __thiscall
TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
::FindOrAddImpl<FInstallBundleSourceType_const_&>
          (TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
           *this,uint param_1,FInstallBundleSourceType *param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FInstallBundleSourceType *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if ((wchar_t *)*plVar2 == (param_2->NameStr).DataPtr) {
          if (plVar2 != (longlong *)0x0) {
            return (FPerSourceBundleCacheInfo *)(plVar2 + 2);
          }
          break;
        }
        iVar1 = (int)plVar2[7];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FInstallBundleSourceType_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FInstallBundleSourceType_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FPerSourceBundleCacheInfo *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 0x10);
}

// FindOrAddImpl<FName_const_&> @ 148bbf900

FBundleCacheInfo * __thiscall
TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FBundleCacheInfo *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[7].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FBundleCacheInfo *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 8);
}

// FindOrAddImpl<FName_const_&> @ 148bbf9b0

FInstallBundleProgress * __thiscall
TMapBase<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FInstallBundleProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleProgress,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FInstallBundleProgress *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x48;
        if (*(FName *)(lVar2 + (longlong)iVar3 * 0x48) == *param_2) {
          if (lVar1 != 0) {
            return (FInstallBundleProgress *)(lVar1 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x40);
      } while (iVar3 != -1);
    }
  }
  pFVar4 = EmplaceByHash<FName_const_&>(this,param_1,param_2);
  return pFVar4;
}

// FindOrAddImpl<FName_const_&> @ 148bbfa30

TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
* __thiscall
TMapBase<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
                    *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FString_const_&,InstallBundleUtil::PersistentStats::FSessionPersistentStats> @ 148bbfae0

FSessionPersistentStats * __thiscall
TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
::FindOrAddImpl<FString_const_&,InstallBundleUtil::PersistentStats::FSessionPersistentStats>
          (TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
           *this,uint param_1,FString *param_2,FSessionPersistentStats *param_3)

{
  int iVar1;
  longlong lVar2;
  FSessionPersistentStats *pFVar3;
  int local_res8 [2];
  FString *local_18;
  FSessionPersistentStats *local_10;
  
  iVar1 = TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = (longlong)iVar1 * 0xf8 + *(longlong *)&(this->Pairs).Elements, lVar2 == 0)) {
    local_18 = param_2;
    local_10 = param_3;
    TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>,FDefaultSetAllocator>
    ::
    EmplaceByHash<TPairInitializer<FString_const_&,InstallBundleUtil::PersistentStats::FSessionPersistentStats_&&>_>
              (&this->Pairs,(uint)local_res8,
               (TPairInitializer<FString_const_&,InstallBundleUtil::PersistentStats::FSessionPersistentStats_&&>
                *)(ulonglong)param_1,(bool *)&local_18);
    pFVar3 = (FSessionPersistentStats *)
             (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xf8 + 0x10);
  }
  else {
    pFVar3 = (FSessionPersistentStats *)(lVar2 + 0x10);
  }
  return pFVar3;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 148bbfb80

void __thiscall
TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
           *this,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar12 = 1;
  iVar13 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar14;
    while (uVar4 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148bbfc62;
      uVar4 = puVar14[lVar9 + 1];
    }
    uVar12 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar12 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar13;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_148bbfc62:
  TStack_40._padding_ = CONCAT44(uVar12,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x40 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      uVar7 = *(undefined8 *)(pFVar11 + 8);
      pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar11;
      *(undefined8 *)(pFVar5 + 8) = uVar7;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 148bbff20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint *puVar19;
  longlong lVar20;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar9 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar12 == 0) goto LAB_148bc01d6;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar12);
  uVar13 = 1;
  if (3 < uVar12) {
    uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_120 = (undefined4)lVar10;
    uVar13 = 1 << ((byte)lVar10 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar13 <= (int)local_50)) goto LAB_148bc01d6;
  local_50 = uVar13;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_148bc0035;
      }
    }
    else {
LAB_148bc0035:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4);
    }
    if (0 < (int)uVar13) {
      uVar16 = (ulonglong)uVar13;
      uVar11 = uVar9;
      do {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = uVar11 & (longlong)(int)uVar13 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    if (local_70 != 0) {
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_78;
      }
      uVar12 = *(uint *)FVar18;
      uVar11 = uVar9;
      while (uVar12 == 0) {
        uStack_150 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_150;
        iVar17 = (int)uVar9;
        local_168 = iVar17 + 1;
        uVar9 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_148bc0132;
        uVar12 = ((uint *)((longlong)FVar18 + 4))[iVar17];
      }
      uStack_164 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_164 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_11c = (int)lVar10;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar9 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_148bc0132:
        uVar9 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar9 < (int)local_70) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)uVar9 * 0x10 + *(longlong *)local_114._4_8_);
        uVar3 = *puVar15;
        uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar12 = local_50 - 1 & uVar12 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar15 + 0xc) = uVar12;
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar11 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar8.Data + uVar11 * 4);
        *(int *)(FVar8.Data + uVar11 * 4) = (int)uVar9;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar9 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_148bc01d6:
  iVar17 = 0;
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (*piVar1 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar12,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  local_c8 = iVar17;
  iStack_cc = 0;
  uStack_dc = 1;
  if (iVar2 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar19;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar17;
      local_c8 = local_c8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_cc = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_148bc027e;
      uVar12 = puVar19[lVar10 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar9 = (ulonglong)uStack_dc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_118 = (int)lVar10;
    iStack_cc = local_c8 + -1 + local_118;
    if (iVar2 < iStack_cc) {
      iStack_cc = iVar2;
    }
  }
LAB_148bc027e:
  uStack_d0 = 0xffffffff;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,iVar17);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  iStack_e0 = iVar17;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = iStack_cc;
  if (iStack_cc < iVar2) {
    do {
      lVar20 = (longlong)TStack_140.CurrentBitIndex;
      lVar10 = *(longlong *)
                ((longlong)TStack_140.CurrentBitIndex * 0xe0 + *(longlong *)&(this->Pairs).Elements)
      ;
      uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar10);
      if (local_98._8_4_ != local_64) {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        for (iVar17 = *(int *)(FVar8.Data +
                              (ulonglong)(local_50 - 1 & (int)((ulonglong)lVar10 >> 0x20) + uVar12)
                              * 4); iVar17 != -1;
            iVar17 = *(int *)(local_98._0_8_ + (longlong)iVar17 * 0x10 + 8)) {
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar10) goto LAB_148bc03fc;
        }
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar14 = (FScriptContainerElement *)(lVar20 * 0xe0 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar4 <= pFVar14) && (pFVar14 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar17 = (*pcVar5)();
        return iVar17;
      }
      iVar17 = param_1->ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar17 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar17 * 8) =
           *(undefined8 *)pFVar14;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                 (FName *)local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0xe0 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_148bc03fc:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar17 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar17;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 148bc0490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FString *pFVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStackY_198 [32];
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  FString local_f4;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  piVar1 = &param_1->ArrayMax;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar18 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar20 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_148bc0789;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_100 = (undefined4)lVar9;
    uVar14 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_148bc0789;
  local_50 = uVar14;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar13 = 0;
        goto LAB_148bc05d0;
      }
    }
    else {
LAB_148bc05d0:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar17 = (ulonglong)uVar14;
      uVar10 = uVar18;
      do {
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = (longlong)(int)uVar14 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (local_50 != 0) {
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_148 = 0;
    uStack_144 = 1;
    uStack_134 = 0;
    uStack_130 = 0;
    uVar10 = uVar18;
    if (local_70 != 0) {
      puVar19 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar19 = local_78;
      }
      uVar13 = *puVar19;
      uVar17 = uVar18;
      while (uVar13 == 0) {
        uStack_130 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_130;
        iVar6 = (int)uVar10;
        local_148 = iVar6 + 1;
        uVar10 = (ulonglong)local_148;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
        goto LAB_148bc06d0;
        uVar13 = puVar19[(longlong)iVar6 + 1];
      }
      uStack_144 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_144 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_fc = (int)lVar9;
      uStack_134 = local_fc + -1 + uStack_130;
      uVar10 = (ulonglong)uStack_134;
      if ((int)local_70 < (int)uStack_134) {
LAB_148bc06d0:
        uVar10 = (ulonglong)local_70;
        uStack_134 = local_70;
      }
    }
    local_b8._padding_ = CONCAT44(uStack_144,local_148);
    local_b8.CurrentBitIndex = uStack_134;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_12c;
    local_b8.BaseBitIndex = uStack_130;
    local_c0 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar12 = (int)uVar10;
        puVar2 = (undefined8 *)(*(longlong *)&local_c0->Elements + (longlong)iVar12 * 0x18);
        iVar6 = *(int *)(*(longlong *)&local_c0->Elements + 8 + (longlong)iVar12 * 0x18);
        if (iVar6 == 0) {
          pwVar11 = L"";
          uVar13 = uVar20;
        }
        else {
          pwVar11 = (wchar_t *)*puVar2;
          uVar13 = iVar6 - 1;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
        uVar13 = local_50 - 1 & uVar13;
        *(uint *)((longlong)puVar2 + 0x14) = uVar13;
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar8.Data + uVar10 * 4);
        *(int *)((longlong)FVar8.Data + uVar10 * 4) = iVar12;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar10 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_148bc0789:
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar13 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar18;
  local_f4.Data.ArrayMax = uVar20;
  local_d0 = uVar20;
  uStack_e4 = 1;
  if (uVar13 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar13;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_120.Array;
    }
    uVar14 = *puVar19;
    uVar17 = uVar18;
    while( true ) {
      local_f4.Data.ArrayMax = (int)uVar18;
      local_d0 = (uint)uVar17;
      if (uVar14 != 0) break;
      lVar9 = (longlong)local_f4.Data.ArrayMax;
      local_d0 = local_d0 + 0x20;
      uVar17 = (ulonglong)local_d0;
      local_f4.Data.ArrayMax = local_f4.Data.ArrayMax + 1;
      uVar18 = (ulonglong)(uint)local_f4.Data.ArrayMax;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < local_f4.Data.ArrayMax)
      goto LAB_148bc082f;
      uVar14 = puVar19[lVar9 + 1];
    }
    uStack_e4 = -uVar14 & uVar14;
    uVar18 = (ulonglong)uStack_e4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f8 = (int)lVar9;
    uVar14 = (local_d0 - 1) + local_f8;
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
    uVar10 = (ulonglong)uVar14;
  }
LAB_148bc082f:
  uStack_d4 = (uint)uVar10;
  uStack_d8 = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_e4,local_f4.Data.ArrayMax);
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._28_4_ = uStack_d4;
  TStack_120.BaseBitIndex = local_d0;
  local_f4.Data._4_8_ = this;
  local_e0 = (undefined1 *)TStack_120.Array;
  uStack_cc = uStack_d4;
  TStack_120.CurrentBitIndex = uStack_d4;
  if ((int)uStack_d4 < (int)uVar13) {
    do {
      lVar9 = (longlong)(int)uVar10 * 0xf8;
      pFVar15 = (FString *)(*(longlong *)&(this->Pairs).Elements + lVar9);
      iVar6 = (pFVar15->Data).ArrayNum;
      if (iVar6 == 0) {
        pwVar11 = L"";
        uVar13 = uVar20;
      }
      else {
        pwVar11 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        uVar13 = iVar6 - 1;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
      iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>
                        ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                         uVar13,pFVar15);
      if (iVar6 == -1) {
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar16 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar9);
        if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar6 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                           (FString *)pFVar16);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                   &local_f4,
                   (bool *)((longlong)TStack_120.CurrentBitIndex * 0xf8 +
                           *(longlong *)&(this->Pairs).Elements));
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      uVar10 = (ulonglong)(uint)TStack_120.CurrentBitIndex;
    } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
  }
  iVar6 = param_1->ArrayNum;
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar6;
}

// Find @ 148bc8be0

FPerSourceBundleCacheInfo * __thiscall
TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
::Find(TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
       *this,FInstallBundleSourceType *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  FPerSourceBundleCacheInfo *pFVar6;
  
  pwVar1 = (param_1->NameStr).DataPtr;
  uVar4 = ((uint)((ulonglong)pwVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pwVar1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar2 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if ((wchar_t *)*plVar3 == (param_1->NameStr).DataPtr) {
          pFVar6 = (FPerSourceBundleCacheInfo *)0x0;
          if (plVar3 != (longlong *)0x0) {
            pFVar6 = (FPerSourceBundleCacheInfo *)(plVar3 + 2);
          }
          return pFVar6;
        }
        iVar2 = (int)plVar3[7];
      } while (iVar2 != -1);
    }
  }
  return (FPerSourceBundleCacheInfo *)0x0;
}

// Find @ 148bc8c80

FBundleCacheInfo * __thiscall
TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
::Find(TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FBundleCacheInfo *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FBundleCacheInfo *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FBundleCacheInfo *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[7].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FBundleCacheInfo *)0x0;
}

// Find @ 148bc8d20

FInstallBundleContentState * __thiscall
TMapBase<FName,FInstallBundleContentState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleContentState,0>_>
::Find(TMapBase<FName,FInstallBundleContentState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleContentState,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FInstallBundleContentState *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FInstallBundleContentState *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FInstallBundleContentState *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0xc].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FInstallBundleContentState *)0x0;
}

// Find @ 148bc8dc0

FBundlePersistentStats * __thiscall
TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
::Find(TMapBase<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,InstallBundleUtil::PersistentStats::FBundlePersistentStats,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FBundlePersistentStats *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0xe0 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FBundlePersistentStats *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FBundlePersistentStats *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x1b].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FBundlePersistentStats *)0x0;
}

// Find @ 148bc8e60

FPersistentTimerData * __thiscall
TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
::Find(TMapBase<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FPersistentTimerData *pFVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FPersistentTimerData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x30 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FPersistentTimerData *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FPersistentTimerData *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FPersistentTimerData *)0x0;
}

// Find @ 148bc8ef0

FSessionPersistentStats * __thiscall
TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
::Find(TMapBase<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FSessionPersistentStats *pFVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::PersistentStats::FSessionPersistentStats,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0xf8 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FSessionPersistentStats *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FSessionPersistentStats *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FSessionPersistentStats *)0x0;
}

