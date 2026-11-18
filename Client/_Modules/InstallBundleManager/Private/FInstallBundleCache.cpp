// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 23

// ~FInstallBundleCache @ 148bc3c00

void __thiscall FInstallBundleCache::~FInstallBundleCache(FInstallBundleCache *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  *(undefined4 *)&(this->CacheInfo).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FInstallBundleCache__6B_;
  pvVar3 = *(void **)&(this->CacheInfo).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CacheInfo);
  *(undefined4 *)&(this->PerSourceCacheInfo).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerSourceCacheInfo).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerSourceCacheInfo);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// operator() @ 148bc4c10

void __thiscall
`FInstallBundleCache::GetStats'::__l2::<lambda_1>::operator()
          (void *this,FName param_1,FBundleCacheInfo *param_2)

{
  FName *pFVar1;
  ulong64 *puVar2;
  long64 *plVar3;
  double dVar4;
  ECacheState EVar5;
  ulong64 uVar6;
  long64 lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  ulong64 uVar13;
  undefined7 uStack_17;
  
  puVar2 = &param_2->CurrentInstallSize;
  if (param_2->State == Released) {
    uVar13 = *puVar2;
  }
  else if (param_2->State == PendingEvict) {
    uVar13 = 0;
  }
  else if (param_2->FullInstallSize < *puVar2) {
    uVar13 = *puVar2 + param_2->InstallOverheadSize;
  }
  else {
    uVar13 = param_2->InstallOverheadSize + param_2->FullInstallSize;
  }
  *(longlong *)(*(longlong *)this + 0x10) = *(longlong *)(*(longlong *)this + 0x10) + uVar13;
  if (param_2->State == Reserved) {
    *(longlong *)(*(longlong *)this + 0x18) = *(longlong *)(*(longlong *)this + 0x18) + *puVar2;
  }
  if (*(char *)((longlong)this + 8) != '\0') {
    uVar9 = *(undefined4 *)&param_2->FullInstallSize;
    uVar10 = *(undefined4 *)((longlong)&param_2->FullInstallSize + 4);
    EVar5 = param_2->State;
    dVar4 = param_2->AgeScalar;
    uVar13 = param_2->InstallOverheadSize;
    uVar6 = *puVar2;
    lVar7 = (param_2->TimeStamp).Ticks;
    lVar8 = *(longlong *)this;
    iVar11 = *(int *)(lVar8 + 0x30);
    if (iVar11 == *(int *)(lVar8 + 0x34)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,(ForAnyElementType *)(lVar8 + 0x28),(int *)(lVar8 + 0x34));
    }
    *(int *)(lVar8 + 0x30) = iVar11 + 1;
    lVar12 = (longlong)iVar11 * 0x38;
    lVar8 = *(longlong *)(lVar8 + 0x28);
    pFVar1 = (FName *)(lVar12 + lVar8);
    *pFVar1 = param_1;
    pFVar1[1].ComparisonIndex = (FNameEntryId)uVar9;
    pFVar1[1].Number = uVar10;
    puVar2 = (ulong64 *)(lVar12 + 0x10 + lVar8);
    *puVar2 = uVar13;
    puVar2[1] = uVar6;
    plVar3 = (long64 *)(lVar12 + 0x20 + lVar8);
    *plVar3 = lVar7;
    plVar3[1] = (long64)dVar4;
    *(ulonglong *)(lVar12 + 0x30 + lVar8) = CONCAT71(uStack_17,EVar5 == Reserved);
  }
  return;
}

// AddOrUpdateBundle @ 148bc5df0

void __thiscall
FInstallBundleCache::AddOrUpdateBundle
          (FInstallBundleCache *this,FInstallBundleSourceType *param_1,
          FInstallBundleCacheBundleInfo *param_2)

{
  FName FVar1;
  wchar_t *pwVar2;
  uint uVar3;
  uint uVar4;
  TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
  *this_00;
  FPerSourceBundleCacheInfo *pFVar5;
  double dVar6;
  
  if (!__CsvProfilerStat21) {
    FCsvProfilerTrace::OutputInlineStat
              ("FInstallBundleCache_AddOrUpdateBundle",_GCsvCategory_InstallBundleManager.Index);
    __CsvProfilerStat21 = true;
  }
  uVar3 = _GCsvCategory_InstallBundleManager.Index;
  FCsvProfiler::BeginStat
            ("FInstallBundleCache_AddOrUpdateBundle",_GCsvCategory_InstallBundleManager.Index,
             "CSV_FInstallBundleCache_AddOrUpdateBundle");
  FVar1 = param_2->BundleName;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  this_00 = TMapBase<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>_>
                        *)&this->PerSourceCacheInfo,uVar4 + FVar1.Number,&param_2->BundleName);
  pwVar2 = (param_1->NameStr).DataPtr;
  uVar4 = ((uint)((ulonglong)pwVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pwVar2 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  pFVar5 = TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
           ::FindOrAddImpl<FInstallBundleSourceType_const_&>
                     ((TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
                       *)this_00,uVar4 >> 0x10 ^ uVar4,param_1);
  pFVar5->FullInstallSize = param_2->FullInstallSize;
  pFVar5->InstallOverheadSize = param_2->InstallOverheadSize;
  pFVar5->CurrentInstallSize = param_2->CurrentInstallSize;
  (pFVar5->TimeStamp).Ticks = (param_2->TimeStamp).Ticks;
  dVar6 = param_2->AgeScalar;
  if (__real_3ff0000000000000 <= param_2->AgeScalar) {
    dVar6 = __real_3ff0000000000000;
  }
  if (dVar6 <= __real_3fb999999999999a) {
    dVar6 = __real_3fb999999999999a;
  }
  pFVar5->AgeScalar = dVar6;
  UpdateCacheInfoFromSourceInfo(this,param_2->BundleName);
  FCsvProfiler::EndStat("FInstallBundleCache_AddOrUpdateBundle",uVar3);
  return;
}

// CheckInvariants @ 148bc62b0

void __thiscall FInstallBundleCache::CheckInvariants(FInstallBundleCache *this)

{
  return;
}

// ClearPendingEvict @ 148bc6a80

bool __thiscall FInstallBundleCache::ClearPendingEvict(FInstallBundleCache *this,FName param_1)

{
  uint uVar1;
  FBundleCacheInfo *pFVar2;
  bool bVar3;
  
  if (!__CsvProfilerStat328) {
    FCsvProfilerTrace::OutputInlineStat
              ("FInstallBundleCache_ClearPendingEvict",_GCsvCategory_InstallBundleManager.Index);
    __CsvProfilerStat328 = true;
  }
  uVar1 = _GCsvCategory_InstallBundleManager.Index;
  FCsvProfiler::BeginStat
            ("FInstallBundleCache_ClearPendingEvict",_GCsvCategory_InstallBundleManager.Index,
             "CSV_FInstallBundleCache_ClearPendingEvict");
  pFVar2 = TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
           ::Find((TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
                   *)&this->CacheInfo,param_1);
  if ((pFVar2 != (FBundleCacheInfo *)0x0) && (pFVar2->State != Released)) {
    if (pFVar2->State != PendingEvict) {
      bVar3 = false;
      goto LAB_148bc6af6;
    }
    pFVar2->State = Released;
  }
  bVar3 = true;
LAB_148bc6af6:
  FCsvProfiler::EndStat("FInstallBundleCache_ClearPendingEvict",uVar1);
  return bVar3;
}

// Contains @ 148bc6c80

bool __thiscall
FInstallBundleCache::Contains
          (FInstallBundleCache *this,FInstallBundleSourceType *param_1,FName param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>
  *pTVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  pTVar3 = TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
                   *)&this->PerSourceCacheInfo,param_2);
  plVar6 = (longlong *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>
                 *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 == (longlong *)0x0) {
    return false;
  }
  pwVar1 = (param_1->NameStr).DataPtr;
  uVar4 = ((uint)((ulonglong)pwVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pwVar1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
    plVar5 = (longlong *)plVar6[8];
    if ((longlong *)plVar6[8] == (longlong *)0x0) {
      plVar5 = plVar6 + 7;
    }
    iVar2 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)plVar6[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar2 != -1) {
      do {
        if (*(wchar_t **)((longlong)iVar2 * 0x40 + *plVar6) == (param_1->NameStr).DataPtr)
        goto LAB_148bc6d2c;
        iVar2 = *(int *)((longlong)iVar2 * 0x40 + 0x38 + *plVar6);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_148bc6d2c:
  return iVar2 != -1;
}

// Contains @ 148bc6d50

bool __thiscall FInstallBundleCache::Contains(FInstallBundleCache *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->CacheInfo).field_0x8 != *(int *)&(this->CacheInfo).field_0x34) {
    puVar3 = *(undefined1 **)&(this->CacheInfo).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->CacheInfo).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->CacheInfo).field_0x48 - 1U & param_1.Number + uVar1)
                              * 4);
    if (iVar2 != -1) {
      do {
        if (*(FName *)((longlong)iVar2 * 0x40 + *(longlong *)&this->CacheInfo) == param_1)
        goto LAB_148bc6dcb;
        iVar2 = *(int *)((longlong)iVar2 * 0x40 + 0x38 + *(longlong *)&this->CacheInfo);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_148bc6dcb:
  return iVar2 != -1;
}

// Flush @ 148bc9640

FInstallBundleCacheFlushResult * __thiscall
FInstallBundleCache::Flush
          (FInstallBundleCache *this,FInstallBundleCacheFlushResult *__return_storage_ptr__,
          FInstallBundleSourceType *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  undefined8 uVar7;
  TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  FInstallBundleCacheFlushResult *pFVar11;
  TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>
  *pTVar12;
  longlong lVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  FName *pFVar19;
  uint *puVar20;
  undefined1 local_res10 [8];
  TKeyInitializer<FName_const_&> local_res20;
  TKeyInitializer<FName_const_&> local_c8;
  TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
  *local_88;
  FName *local_80;
  FName *local_78;
  TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if (!__CsvProfilerStat217) {
    FCsvProfilerTrace::OutputInlineStat
              ("FInstallBundleCache_Flush",_GCsvCategory_InstallBundleManager.Index);
    __CsvProfilerStat217 = true;
  }
  local_c8.Key._4_4_ = _GCsvCategory_InstallBundleManager.Index;
  FCsvProfiler::BeginStat
            ("FInstallBundleCache_Flush",_GCsvCategory_InstallBundleManager.Index,
             "CSV_FInstallBundleCache_Flush");
  puVar1 = &(this->CacheInfo).field_0x10;
  *(undefined8 *)&__return_storage_ptr__->BundlesToEvict = 0;
  local_c0 = &this->CacheInfo;
  *(undefined8 *)&(__return_storage_ptr__->BundlesToEvict).field_0x8 = 0;
  uStack_b4 = 1;
  *(undefined8 *)&(__return_storage_ptr__->BundlesToEvict).field_0x20 = 0;
  iStack_b8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->BundlesToEvict).field_0x28 = 0;
  local_a0 = 0;
  *(undefined4 *)&(__return_storage_ptr__->BundlesToEvict).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->BundlesToEvict).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->BundlesToEvict).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->BundlesToEvict).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->BundlesToEvict).field_0x48 = 0;
  iVar10 = *(int *)&(this->CacheInfo).field_0x28;
  iStack_a4 = iStack_b8;
  if (iVar10 != 0) {
    puVar20 = *(uint **)&(this->CacheInfo).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar18 = *puVar20;
    local_a0 = 0;
    iStack_b8 = 0;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_148bc975d;
      uVar18 = puVar20[lVar13 + 1];
    }
    uStack_b4 = -uVar18 & uVar18;
    uVar3 = (ulonglong)uStack_b4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_90 = (int)lVar13;
    iStack_a4 = local_a0 + -1 + local_90;
    if (iVar10 < iStack_a4) {
      iStack_a4 = iVar10;
    }
  }
LAB_148bc975d:
  iStack_98 = *(int *)&(this->CacheInfo).field_0x8 - *(int *)&(this->CacheInfo).field_0x34;
  uVar18 = *(uint *)&(this->CacheInfo).field_0x28;
  uStack_a8 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_b4,iStack_b8);
  uVar16 = uVar18 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iStack_a4;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_68._28_4_ = iStack_a4;
  TStack_68.BaseBitIndex = local_a0;
  uStack_48 = CONCAT44(uStack_94,iStack_98);
  local_b0 = puVar1;
  iStack_9c = iStack_a4;
  local_88 = local_c0;
  local_70 = local_c0;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar10 < (int)uVar18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FInstallBundleCacheFlushResult *)(*pcVar6)();
    return pFVar11;
  }
  uVar4 = *(uint *)&(this->CacheInfo).field_0x28;
  if (uVar18 != uVar4) {
    puVar14 = *(undefined1 **)&(this->CacheInfo).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_148bc9860;
      uVar18 = *(uint *)(puVar14 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_8c = (int)lVar13;
    uVar18 = local_8c + -1 + uVar16;
    if ((int)uVar4 < (int)uVar18) {
      uVar18 = uVar4;
    }
  }
LAB_148bc9860:
  do {
    pTVar8 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_68.CurrentBitIndex == uVar18) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == local_88)
       ) {
      FCsvProfiler::EndStat("FInstallBundleCache_Flush",local_c8.Key._4_4_);
      return __return_storage_ptr__;
    }
    pFVar19 = (FName *)((longlong)TStack_68.CurrentBitIndex * 0x40 + *(longlong *)pTVar8);
    if (((char)pFVar19[6].ComparisonIndex.Value != '\x01') && (pFVar19[3] != (FName)0x0)) {
      if (param_1 == (FInstallBundleSourceType *)0x0) {
        local_78 = pFVar19;
        TSet<TTuple<FName,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<FName_const_&>_>
                  ((TSet<TTuple<FName,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)__return_storage_ptr__,&local_c8,(bool *)&local_78);
        lVar17 = (longlong)(int)local_c8.Key;
        lVar13 = *(longlong *)&__return_storage_ptr__->BundlesToEvict;
        pTVar12 = TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
                          *)&this->PerSourceCacheInfo,*pFVar19);
        if ((pTVar12 ==
             (TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>
              *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          pFVar11 = (FInstallBundleCacheFlushResult *)(*pcVar6)();
          return pFVar11;
        }
        TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
        ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
                  ((TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
                    *)&pTVar12->field_0x8,
                   (TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_> *)
                   (lVar17 * 0x20 + lVar13 + 8));
      }
      else {
        pTVar12 = TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
                          *)&this->PerSourceCacheInfo,*pFVar19);
        if ((pTVar12 ==
             (TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>
              *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          pFVar11 = (FInstallBundleCacheFlushResult *)(*pcVar6)();
          return pFVar11;
        }
        pwVar5 = (param_1->NameStr).DataPtr;
        uVar16 = ((uint)((ulonglong)pwVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pwVar5 >> 4)) *
                 -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        if (*(int *)&pTVar12->field_0x10 != *(int *)&pTVar12->field_0x3c) {
          puVar14 = &pTVar12->field_0x40;
          if (*(undefined1 **)&pTVar12->field_0x48 != (undefined1 *)0x0) {
            puVar14 = *(undefined1 **)&pTVar12->field_0x48;
          }
          iVar10 = *(int *)(puVar14 +
                           (ulonglong)
                           (*(int *)&pTVar12->field_0x50 - 1U & (uVar16 >> 0x10 ^ uVar16)) * 4);
          if (iVar10 != -1) {
            do {
              if (*(wchar_t **)((longlong)iVar10 * 0x40 + *(longlong *)&pTVar12->field_0x8) ==
                  (param_1->NameStr).DataPtr) {
                local_80 = pFVar19;
                TSet<TTuple<FName,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::Emplace<TKeyInitializer<FName_const_&>_>
                          ((TSet<TTuple<FName,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)__return_storage_ptr__,&local_res20,(bool *)&local_80);
                lVar13 = (longlong)(int)local_res20.Key * 0x20 +
                         *(longlong *)&__return_storage_ptr__->BundlesToEvict;
                if (((*(FInstallBundleSourceType **)(lVar13 + 8) <= param_1) &&
                    (param_1 < *(FInstallBundleSourceType **)(lVar13 + 8) + *(int *)(lVar13 + 0x14))
                    ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  pFVar11 = (FInstallBundleCacheFlushResult *)(*pcVar6)();
                  return pFVar11;
                }
                iVar10 = *(int *)(lVar13 + 0x10);
                if (iVar10 == *(int *)(lVar13 + 0x14)) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,(ForAnyElementType *)(lVar13 + 8),(int *)(lVar13 + 0x14)
                                     );
                }
                *(int *)(lVar13 + 0x10) = iVar10 + 1;
                uVar7 = *(undefined8 *)&(param_1->NameStr).Size;
                puVar2 = (undefined8 *)(*(longlong *)(lVar13 + 8) + (longlong)iVar10 * 0x10);
                *puVar2 = (param_1->NameStr).DataPtr;
                puVar2[1] = uVar7;
                break;
              }
              iVar10 = *(int *)((longlong)iVar10 * 0x40 + 0x38 + *(longlong *)&pTVar12->field_0x8);
            } while (iVar10 != -1);
          }
        }
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// GetBundleInfo @ 148bca800

TOptional<FInstallBundleCacheBundleInfo> * __thiscall
FInstallBundleCache::GetBundleInfo
          (FInstallBundleCache *this,
          TOptional<FInstallBundleCacheBundleInfo> *__return_storage_ptr__,
          FInstallBundleSourceType *param_1,FName param_2)

{
  TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>
  *pTVar1;
  FPerSourceBundleCacheInfo *pFVar2;
  TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
  *this_00;
  
  __return_storage_ptr__->bIsSet = false;
  pTVar1 = TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
                   *)&this->PerSourceCacheInfo,param_2);
  this_00 = (TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
             *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>
                 *)0x0) {
    this_00 = (TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
               *)0x0;
  }
  if (this_00 !=
      (TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
       *)0x0) {
    pFVar2 = TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
             ::Find(this_00,param_1);
    if (pFVar2 != (FPerSourceBundleCacheInfo *)0x0) {
      (__return_storage_ptr__->TypedValue).FullInstallSize = 0;
      (__return_storage_ptr__->TypedValue).AgeScalar = 1.0;
      (__return_storage_ptr__->TypedValue).InstallOverheadSize = 0;
      (__return_storage_ptr__->TypedValue).CurrentInstallSize = 0;
      (__return_storage_ptr__->TypedValue).TimeStamp.Ticks = 0;
      __return_storage_ptr__->bIsSet = true;
      (__return_storage_ptr__->TypedValue).BundleName = param_2;
      (__return_storage_ptr__->TypedValue).FullInstallSize = pFVar2->FullInstallSize;
      (__return_storage_ptr__->TypedValue).InstallOverheadSize = pFVar2->InstallOverheadSize;
      (__return_storage_ptr__->TypedValue).CurrentInstallSize = pFVar2->CurrentInstallSize;
      (__return_storage_ptr__->TypedValue).TimeStamp.Ticks = (pFVar2->TimeStamp).Ticks;
      (__return_storage_ptr__->TypedValue).AgeScalar = pFVar2->AgeScalar;
    }
  }
  return __return_storage_ptr__;
}

// GetBundleInfo @ 148bca8c0

TOptional<FInstallBundleCacheBundleInfo> * __thiscall
FInstallBundleCache::GetBundleInfo
          (FInstallBundleCache *this,
          TOptional<FInstallBundleCacheBundleInfo> *__return_storage_ptr__,FName param_1)

{
  FBundleCacheInfo *pFVar1;
  
  __return_storage_ptr__->bIsSet = false;
  pFVar1 = TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
           ::Find((TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
                   *)&this->CacheInfo,param_1);
  if (pFVar1 != (FBundleCacheInfo *)0x0) {
    (__return_storage_ptr__->TypedValue).FullInstallSize = 0;
    (__return_storage_ptr__->TypedValue).InstallOverheadSize = 0;
    (__return_storage_ptr__->TypedValue).CurrentInstallSize = 0;
    (__return_storage_ptr__->TypedValue).TimeStamp.Ticks = 0;
    (__return_storage_ptr__->TypedValue).AgeScalar = 1.0;
    __return_storage_ptr__->bIsSet = true;
    (__return_storage_ptr__->TypedValue).BundleName = param_1;
    (__return_storage_ptr__->TypedValue).FullInstallSize = pFVar1->FullInstallSize;
    (__return_storage_ptr__->TypedValue).InstallOverheadSize = pFVar1->InstallOverheadSize;
    (__return_storage_ptr__->TypedValue).CurrentInstallSize = pFVar1->CurrentInstallSize;
    (__return_storage_ptr__->TypedValue).TimeStamp.Ticks = (pFVar1->TimeStamp).Ticks;
    (__return_storage_ptr__->TypedValue).AgeScalar = pFVar1->AgeScalar;
  }
  return __return_storage_ptr__;
}

// GetFreeSpace @ 148bcb1e0

ulong64 __thiscall FInstallBundleCache::GetFreeSpace(FInstallBundleCache *this)

{
  uint uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  
  if (!__CsvProfilerStat119) {
    FCsvProfilerTrace::OutputInlineStat
              ("FInstallBundleCache_GetFreeSpace",_GCsvCategory_InstallBundleManager.Index);
    __CsvProfilerStat119 = true;
  }
  uVar1 = _GCsvCategory_InstallBundleManager.Index;
  FCsvProfiler::BeginStat
            ("FInstallBundleCache_GetFreeSpace",_GCsvCategory_InstallBundleManager.Index,
             "CSV_FInstallBundleCache_GetFreeSpace");
  uVar2 = GetUsedSize(this);
  uVar3 = 0;
  if (uVar2 <= this->TotalSize) {
    uVar3 = this->TotalSize - uVar2;
  }
  FCsvProfiler::EndStat("FInstallBundleCache_GetFreeSpace",uVar1);
  return uVar3;
}

// GetFreeSpaceInternal @ 148bcb270

ulong64 __thiscall
FInstallBundleCache::GetFreeSpaceInternal(FInstallBundleCache *this,ulong64 param_1)

{
  ulong64 uVar1;
  
  uVar1 = this->TotalSize - param_1;
  if (this->TotalSize < param_1) {
    uVar1 = 0;
  }
  return uVar1;
}

// GetSize @ 148bcca80

ulong64 __thiscall FInstallBundleCache::GetSize(FInstallBundleCache *this)

{
  return this->TotalSize;
}

// GetStats @ 148bccc00

/* WARNING: Enum "Type": Some values do not have unique names */

FInstallBundleCacheStats * __thiscall
FInstallBundleCache::GetStats
          (FInstallBundleCache *this,FInstallBundleCacheStats *__return_storage_ptr__,
          EInstallBundleCacheStatsFlags param_1,bool param_2)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
  *pTVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  EInstallBundleCacheStatsFlags EVar10;
  bool bVar11;
  FInstallBundleCacheStats *pFVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulong64 uVar18;
  longlong lVar19;
  int iVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  int iVar23;
  uint *puVar24;
  TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
  *pTVar25;
  byte bVar26;
  uint uVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  undefined1 local_328;
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324 [4];
  TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
  *local_320;
  TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
  *local_318;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_310;
  undefined8 uStack_2f0;
  undefined1 local_2e8;
  undefined7 uStack_2e7;
  TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
  *local_2e0;
  int iStack_2d8;
  uint uStack_2d4;
  undefined1 *local_2d0;
  undefined4 uStack_2c8;
  int iStack_2c4;
  int local_2c0;
  int iStack_2bc;
  int iStack_2b8;
  undefined4 uStack_2b4;
  FInstallBundleCacheStats *local_2b0;
  byte local_2a8;
  int local_2a0;
  uint uStack_29c;
  undefined1 *puStack_298;
  undefined4 local_290;
  int iStack_28c;
  int iStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  TBitArray<FDefaultBitArrayAllocator> *local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_270;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  FValueComparisonClass<FInstallBundleCache::FCacheSortPredicate> local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
  *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
  *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
  *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [2];
  int local_4c;
  
  iVar16 = 0;
  (__return_storage_ptr__->CacheName).ComparisonIndex = 0;
  (__return_storage_ptr__->CacheName).Number = 0;
  __return_storage_ptr__->MaxSize = 0;
  __return_storage_ptr__->UsedSize = 0;
  __return_storage_ptr__->ReservedSize = 0;
  __return_storage_ptr__->FreeSize = 0;
  (__return_storage_ptr__->BundleStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->BundleStats).ArrayNum = 0;
  (__return_storage_ptr__->BundleStats).ArrayMax = 0;
  __return_storage_ptr__->CacheName = this->CacheName;
  __return_storage_ptr__->MaxSize = this->TotalSize;
  EVar10 = param_1 & DumpToLog;
  bVar26 = param_1 >> 2 & 1;
  iVar20 = 0;
  if (EVar10 == None) {
    local_320 = &this->CacheInfo;
  }
  else {
    if ((3 < (byte)LogInstallBundleManager._0_1_) &&
       (UE::Logging::Private::BasicLog<4>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInstallBundleManager),
       3 < (byte)LogInstallBundleManager._0_1_)) {
      ::FName::ToString(&this->CacheName,&local_f8);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInstallBundleManager);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    local_280 = 0;
    FDateTime::UtcNow();
    local_320 = &this->CacheInfo;
    local_1e0.Predicate.Predicate =
         (TDereferenceWrapper<FInstallBundleCache::FBundleCacheInfo,FInstallBundleCache::FCacheSortPredicate>
          )&local_280;
    TSet<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>::FValueComparisonClass<FInstallBundleCache::FCacheSortPredicate>_>
              ((TSet<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>,FDefaultSetAllocator>
                *)local_320,&local_1e0);
  }
  pTVar25 = &this->CacheInfo;
  iVar23 = 0;
  local_2b0 = __return_storage_ptr__;
  local_2a8 = bVar26;
  if (EVar10 == None) {
    local_2d0 = &(this->CacheInfo).field_0x10;
    iVar4 = *(int *)&(this->CacheInfo).field_0x28;
    uStack_2d4 = 1;
    iStack_2c4 = iVar23;
    if (iVar4 != 0) {
      puVar24 = *(uint **)&(this->CacheInfo).field_0x20;
      if (puVar24 == (uint *)0x0) {
        puVar24 = (uint *)local_2d0;
      }
      uVar15 = *puVar24;
      iVar23 = iVar16;
      iVar20 = iVar16;
      while (uVar15 == 0) {
        lVar13 = (longlong)iVar20;
        iVar23 = iVar23 + 0x20;
        iVar20 = iVar20 + 1;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_148bccdf5;
        uVar15 = puVar24[lVar13 + 1];
      }
      uStack_2d4 = -uVar15 & uVar15;
      uVar2 = (ulonglong)uStack_2d4 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1f0 = (int)lVar13;
      iStack_2c4 = local_1f0 + -1 + iVar23;
      if (iVar4 < iStack_2c4) {
LAB_148bccdf5:
        iStack_2c4 = iVar4;
      }
    }
    puVar21 = &(this->CacheInfo).field_0x10;
    iStack_2bc = local_4c;
    iStack_2b8 = *(int *)&(this->CacheInfo).field_0x8 - *(int *)&(this->CacheInfo).field_0x34;
    uVar15 = *(uint *)&(this->CacheInfo).field_0x28;
    uStack_2c8 = 0xffffffff;
    TStack_1b0.CurrentBitIndex = iStack_2c4;
    TStack_1b0.UnvisitedBitMask = 0xffffffff;
    TStack_1b0._padding_ = CONCAT44(uStack_2d4,iVar20);
    uVar27 = uVar15 & 0xffffffe0;
    iVar16 = (int)uVar15 >> 5;
    TStack_1b0._28_4_ = local_4c;
    TStack_1b0.BaseBitIndex = iVar23;
    uStack_190 = CONCAT44(uStack_2b4,iStack_2b8);
    iStack_2d8 = iVar20;
    local_2c0 = iVar23;
    local_1b8 = pTVar25;
    TStack_1b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2d0;
    if ((((int)uVar15 < 0) || (local_2e0 = pTVar25, iVar4 < (int)uVar15)) &&
       (local_2e0 = pTVar25,
       bVar11 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pFVar12 = (FInstallBundleCacheStats *)(*pcVar9)();
      return pFVar12;
    }
    pTVar25 = local_320;
    uVar17 = *(uint *)&(this->CacheInfo).field_0x28;
    if (uVar15 != uVar17) {
      puVar5 = *(undefined1 **)&(this->CacheInfo).field_0x20;
      puVar22 = puVar21;
      if (puVar5 != (undefined1 *)0x0) {
        puVar22 = puVar5;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar16 * 4);
      while (uVar15 == 0) {
        lVar13 = (longlong)iVar16;
        uVar27 = uVar27 + 0x20;
        iVar16 = iVar16 + 1;
        uVar15 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_148bccf0b;
        uVar15 = *(uint *)(puVar22 + lVar13 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar15 = (int)lVar13 + -1 + uVar27;
      if ((int)uVar17 < (int)uVar15) {
        uVar15 = uVar17;
      }
    }
LAB_148bccf0b:
    while( true ) {
      pTVar6 = local_1b8;
      if (*(int *)(&local_1b8->field_0x0 + 8) - *(int *)(&local_1b8->field_0x0 + 0x34) !=
          (int)uStack_190) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_328);
      }
      if (((TStack_1b0.CurrentBitIndex == uVar15) &&
          (TStack_1b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar21)) &&
         (pTVar6 == pTVar25)) break;
      lVar13 = *(longlong *)&pTVar6->field_0x0;
      lVar14 = (longlong)TStack_1b0.CurrentBitIndex * 0x40;
      cVar3 = *(char *)(lVar14 + 0x30 + lVar13);
      pTVar6 = *(TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
                 **)(lVar14 + lVar13);
      if (cVar3 == '\0') {
        lVar19 = *(longlong *)(lVar14 + 0x18 + lVar13);
      }
      else {
        lVar19 = 0;
        if (cVar3 != '\x02') {
          uVar2 = *(ulonglong *)(lVar14 + 8 + lVar13);
          uVar7 = *(ulonglong *)(lVar14 + 0x18 + lVar13);
          lVar19 = *(longlong *)(lVar14 + 0x10 + lVar13);
          if (uVar2 < uVar7) {
            lVar19 = lVar19 + uVar7;
          }
          else {
            lVar19 = lVar19 + uVar2;
          }
        }
      }
      __return_storage_ptr__->UsedSize = __return_storage_ptr__->UsedSize + lVar19;
      if (*(char *)(lVar14 + 0x30 + lVar13) == '\x01') {
        __return_storage_ptr__->ReservedSize =
             __return_storage_ptr__->ReservedSize + *(longlong *)(lVar14 + 0x18 + lVar13);
      }
      if (bVar26 != 0) {
        local_2e8 = *(char *)(lVar14 + 0x30 + lVar13) == '\x01';
        uStack_2f0 = *(undefined8 *)(lVar14 + 0x28 + lVar13);
        TStack_310._padding_ = *(longlong *)(lVar14 + 8 + lVar13);
        TStack_310.Array = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x10 + lVar13);
        TStack_310._16_8_ = *(longlong *)(lVar14 + 0x18 + lVar13);
        TStack_310._24_8_ = *(undefined8 *)(lVar14 + 0x20 + lVar13);
        piVar1 = &(__return_storage_ptr__->BundleStats).ArrayMax;
        iVar20 = (__return_storage_ptr__->BundleStats).ArrayNum;
        local_318 = pTVar6;
        if (iVar20 == *piVar1) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&(__return_storage_ptr__->BundleStats).AllocatorInstance,piVar1)
          ;
        }
        (__return_storage_ptr__->BundleStats).ArrayNum = iVar20 + 1;
        lVar13 = (longlong)iVar20 * 0x38;
        pFVar8 = (__return_storage_ptr__->BundleStats).AllocatorInstance.Data;
        *(TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
          **)(pFVar8 + lVar13) = local_318;
        *(longlong *)(pFVar8 + lVar13 + 8) = TStack_310._padding_;
        *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar8 + lVar13 + 0x10) = TStack_310.Array;
        *(undefined8 *)(pFVar8 + lVar13 + 0x10 + 8) = TStack_310._16_8_;
        *(undefined8 *)(pFVar8 + lVar13 + 0x20) = TStack_310._24_8_;
        *(undefined8 *)(pFVar8 + lVar13 + 0x20 + 8) = uStack_2f0;
        *(ulonglong *)(pFVar8 + lVar13 + 0x30) = CONCAT71(uStack_2e7,local_2e8);
      }
      TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
    }
  }
  else {
    local_318 = pTVar25;
    if ((param_1 & CSVFormat) == None) {
      TStack_310.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->CacheInfo).field_0x10;
      uVar15 = 1;
      iVar20 = *(int *)&(this->CacheInfo).field_0x28;
      if (param_2) {
        uStack_29c = 1;
        local_2a0 = 0;
        iStack_28c = 0;
        iStack_288 = 0;
        if (iVar20 != 0) {
          puVar24 = *(uint **)&(this->CacheInfo).field_0x20;
          if (puVar24 == (uint *)0x0) {
            puVar24 = (uint *)TStack_310.Array;
          }
          uVar15 = *puVar24;
          iStack_288 = iVar16;
          local_2a0 = iVar16;
          while (uVar15 == 0) {
            iStack_288 = iStack_288 + 0x20;
            lVar13 = (longlong)local_2a0;
            local_2a0 = local_2a0 + 1;
            iStack_28c = iVar20;
            if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < local_2a0)
            goto LAB_148bcd6ec;
            uVar15 = puVar24[lVar13 + 1];
          }
          uStack_29c = -uVar15 & uVar15;
          uVar2 = (ulonglong)uStack_29c * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_1ec = (int)lVar13;
          iStack_28c = local_1ec + -1 + iStack_288;
          if (iVar20 < iStack_28c) {
            iStack_28c = iVar20;
          }
        }
LAB_148bcd6ec:
        local_290 = 0xffffffff;
        pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->CacheInfo).field_0x10;
        uVar15 = *(uint *)&(this->CacheInfo).field_0x28;
        TStack_310._padding_ = CONCAT44(uStack_29c,local_2a0);
        bVar26 = (byte)uVar15 & 0x1f;
        TStack_310._16_8_ = CONCAT44(iStack_28c,0xffffffff);
        TStack_310._28_4_ = uStack_284;
        TStack_310.BaseBitIndex = iStack_288;
        uStack_2f0 = CONCAT44(uStack_2f0._4_4_,
                              *(int *)&(this->CacheInfo).field_0x8 -
                              *(int *)&(this->CacheInfo).field_0x34);
        local_270._padding_._0_4_ = (int)uVar15 >> 5;
        local_270.BaseBitIndex = uVar15 & 0xffffffe0;
        local_270._padding_._4_4_ = 1 << bVar26;
        local_270.UnvisitedBitMask = -1 << bVar26;
        uStack_100 = uStack_2f0;
        puStack_298 = (undefined1 *)TStack_310.Array;
        local_270.Array = pTVar28;
        local_270.CurrentBitIndex = uVar15;
        local_128 = pTVar25;
        TStack_120._padding_ = TStack_310._padding_;
        TStack_120.Array = TStack_310.Array;
        TStack_120._16_8_ = TStack_310._16_8_;
        TStack_120._24_8_ = TStack_310._24_8_;
        if (((int)uVar15 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar12 = (FInstallBundleCacheStats *)(*pcVar9)();
          return pFVar12;
        }
        if (uVar15 != *(uint *)&(this->CacheInfo).field_0x28) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_270);
          uVar15 = local_270.CurrentBitIndex;
          pTVar28 = local_270.Array;
        }
        while( true ) {
          pTVar25 = local_128;
          if (*(int *)(&local_128->field_0x0 + 8) - *(int *)(&local_128->field_0x0 + 0x34) !=
              (int)uStack_100) {
            `TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_325);
          }
          if (((TStack_120.CurrentBitIndex == uVar15) && (TStack_120.Array == pTVar28)) &&
             (pTVar25 == local_320)) break;
          lVar14 = *(longlong *)&pTVar25->field_0x0;
          lVar19 = (longlong)TStack_120.CurrentBitIndex * 0x40;
          lVar13 = lVar19 + lVar14;
          `FInstallBundleCache::GetStats'::__l2::<lambda_1>::operator()
                    (&local_2b0,*(FName *)(lVar19 + lVar14),(FBundleCacheInfo *)(lVar13 + 8));
          local_1c8 = *(FName *)(lVar19 + lVar14);
          if (((*(longlong *)(lVar13 + 0x18) != 0) || (*(char *)(lVar13 + 0x30) != '\0')) &&
             (3 < (byte)LogInstallBundleManager._0_1_)) {
            ::FName::ToString(&local_1c8,&local_b8);
            UE::Logging::Private::BasicLog<4>
                      ((FStaticBasicLogRecord *)&PTR_u____bundle__s_151c7b540,
                       (FLogCategoryBase *)&LogInstallBundleManager);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            if (((3 < (byte)LogInstallBundleManager._0_1_) &&
                (UE::Logging::Private::BasicLog<4>
                           ((FStaticBasicLogRecord *)&PTR_u_____full_size___151c7b560,
                            (FLogCategoryBase *)&LogInstallBundleManager),
                3 < (byte)LogInstallBundleManager._0_1_)) &&
               ((UE::Logging::Private::BasicLog<4>
                           ((FStaticBasicLogRecord *)&PTR_u_____overhead_si_151c7b580,
                            (FLogCategoryBase *)&LogInstallBundleManager),
                3 < (byte)LogInstallBundleManager._0_1_ &&
                ((UE::Logging::Private::BasicLog<4>
                            ((FStaticBasicLogRecord *)&PTR_u_____current_siz_151c7b5a0,
                             (FLogCategoryBase *)&LogInstallBundleManager),
                 3 < (byte)LogInstallBundleManager._0_1_ &&
                 (UE::Logging::Private::BasicLog<4>
                            ((FStaticBasicLogRecord *)&PTR_u_____reserved____151c7b5c0,
                             (FLogCategoryBase *)&LogInstallBundleManager),
                 3 < (byte)LogInstallBundleManager._0_1_)))))) {
              FDateTime::ToString((FDateTime *)(lVar13 + 0x20),&local_a8);
              UE::Logging::Private::BasicLog<4>
                        ((FStaticBasicLogRecord *)&PTR_u_____timestamp___151c7b5e0,
                         (FLogCategoryBase *)&LogInstallBundleManager);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
              if (3 < (byte)LogInstallBundleManager._0_1_) {
                UE::Logging::Private::BasicLog<4>
                          ((FStaticBasicLogRecord *)&PTR_u_____age_scale___151c7b600,
                           (FLogCategoryBase *)&LogInstallBundleManager);
              }
            }
          }
          TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
        }
      }
      else {
        local_2c0 = 0;
        iStack_2c4 = local_2c0;
        if (iVar20 != 0) {
          puVar24 = *(uint **)&(this->CacheInfo).field_0x20;
          if (puVar24 == (uint *)0x0) {
            puVar24 = (uint *)TStack_310.Array;
          }
          uVar27 = *puVar24;
          local_2c0 = iVar16;
          iVar23 = iVar16;
          while (uVar27 == 0) {
            lVar13 = (longlong)iVar23;
            local_2c0 = local_2c0 + 0x20;
            iVar23 = iVar23 + 1;
            iStack_2c4 = iVar20;
            if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar23)
            goto LAB_148bcda5d;
            uVar27 = puVar24[lVar13 + 1];
          }
          uVar15 = -uVar27 & uVar27;
          uVar2 = (ulonglong)uVar15 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_1e8 = (int)lVar13;
          iStack_2c4 = local_2c0 + -1 + local_1e8;
          if (iVar20 < iStack_2c4) {
            iStack_2c4 = iVar20;
          }
        }
LAB_148bcda5d:
        puVar21 = &(this->CacheInfo).field_0x10;
        iStack_2b8 = *(int *)&(this->CacheInfo).field_0x8 - *(int *)&(this->CacheInfo).field_0x34;
        uVar27 = *(uint *)&(this->CacheInfo).field_0x28;
        uStack_2c8 = 0xffffffff;
        TStack_310._16_8_ = CONCAT44(iStack_2c4,0xffffffff);
        uVar17 = uVar27 & 0xffffffe0;
        TStack_310._padding_ = CONCAT44(uVar15,iVar23);
        iVar20 = (int)uVar27 >> 5;
        TStack_310._28_4_ = iStack_2c4;
        TStack_310.BaseBitIndex = local_2c0;
        uStack_2f0 = CONCAT44(uStack_2b4,iStack_2b8);
        local_2e0 = pTVar25;
        iStack_2d8 = iVar23;
        uStack_2d4 = uVar15;
        local_2d0 = (undefined1 *)TStack_310.Array;
        iStack_2bc = iStack_2c4;
        if (((int)uVar27 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar12 = (FInstallBundleCacheStats *)(*pcVar9)();
          return pFVar12;
        }
        uVar15 = *(uint *)&(this->CacheInfo).field_0x28;
        if (uVar27 != uVar15) {
          puVar5 = *(undefined1 **)&(this->CacheInfo).field_0x20;
          puVar22 = puVar21;
          if (puVar5 != (undefined1 *)0x0) {
            puVar22 = puVar5;
          }
          uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar20 * 4);
          while (uVar27 == 0) {
            lVar13 = (longlong)iVar20;
            uVar17 = uVar17 + 0x20;
            iVar20 = iVar20 + 1;
            uVar27 = uVar15;
            if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
            goto LAB_148bcdb60;
            uVar27 = *(uint *)(puVar22 + lVar13 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar27 = (int)lVar13 + -1 + uVar17;
          if ((int)uVar15 < (int)uVar27) {
            uVar27 = uVar15;
          }
        }
LAB_148bcdb60:
        while( true ) {
          pTVar25 = local_318;
          if (*(int *)(&local_318->field_0x0 + 8) - *(int *)(&local_318->field_0x0 + 0x34) !=
              (int)uStack_2f0) {
            `TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_324);
          }
          if (((TStack_310.CurrentBitIndex == uVar27) &&
              (TStack_310.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar21)) &&
             (pTVar25 == local_320)) break;
          lVar14 = *(longlong *)&pTVar25->field_0x0;
          lVar19 = (longlong)TStack_310.CurrentBitIndex * 0x40;
          lVar13 = lVar19 + lVar14;
          `FInstallBundleCache::GetStats'::__l2::<lambda_1>::operator()
                    (&local_2b0,*(FName *)(lVar19 + lVar14),(FBundleCacheInfo *)(lVar13 + 8));
          local_1c0 = *(FName *)(lVar19 + lVar14);
          if (((*(longlong *)(lVar13 + 0x18) != 0) || (*(char *)(lVar13 + 0x30) != '\0')) &&
             (5 < (byte)LogInstallBundleManager._0_1_)) {
            ::FName::ToString(&local_1c0,&local_98);
            UE::Logging::Private::BasicLog<6>
                      ((FStaticBasicLogRecord *)&PTR_u____bundle__s_151c7b340,
                       (FLogCategoryBase *)&LogInstallBundleManager);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            if (((5 < (byte)LogInstallBundleManager._0_1_) &&
                (UE::Logging::Private::BasicLog<6>
                           ((FStaticBasicLogRecord *)&PTR_u_____full_size___151c7b380,
                            (FLogCategoryBase *)&LogInstallBundleManager),
                5 < (byte)LogInstallBundleManager._0_1_)) &&
               ((UE::Logging::Private::BasicLog<6>
                           ((FStaticBasicLogRecord *)&PTR_u_____overhead_si_151c7b3c8,
                            (FLogCategoryBase *)&LogInstallBundleManager),
                5 < (byte)LogInstallBundleManager._0_1_ &&
                ((UE::Logging::Private::BasicLog<6>
                            ((FStaticBasicLogRecord *)&PTR_u_____current_siz_151c7b418,
                             (FLogCategoryBase *)&LogInstallBundleManager),
                 5 < (byte)LogInstallBundleManager._0_1_ &&
                 (UE::Logging::Private::BasicLog<6>
                            ((FStaticBasicLogRecord *)&PTR_u_____reserved____151c7b468,
                             (FLogCategoryBase *)&LogInstallBundleManager),
                 5 < (byte)LogInstallBundleManager._0_1_)))))) {
              FDateTime::ToString((FDateTime *)(lVar13 + 0x20),&local_88);
              UE::Logging::Private::BasicLog<6>
                        ((FStaticBasicLogRecord *)&PTR_u_____timestamp___151c7b4b0,
                         (FLogCategoryBase *)&LogInstallBundleManager);
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
              if (5 < (byte)LogInstallBundleManager._0_1_) {
                UE::Logging::Private::BasicLog<6>
                          ((FStaticBasicLogRecord *)&PTR_u_____age_scale___151c7b4f8,
                           (FLogCategoryBase *)&LogInstallBundleManager);
              }
            }
          }
          TStack_310.UnvisitedBitMask = TStack_310.UnvisitedBitMask & ~TStack_310._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_310);
        }
      }
    }
    else if (param_2) {
      if (3 < (byte)LogInstallBundleManager._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInstallBundleManager);
      }
      pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->CacheInfo).field_0x10;
      local_230._padding_._4_4_ = 1;
      local_230.UnvisitedBitMask = 0xffffffff;
      local_230._padding_._0_4_ = 0;
      local_230.CurrentBitIndex = 0;
      local_230.BaseBitIndex = 0;
      local_230.Array = pTVar28;
      if (*(int *)&(this->CacheInfo).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_230);
      }
      uVar15 = *(uint *)&(this->CacheInfo).field_0x28;
      TStack_310._padding_ = CONCAT44(local_230._padding_._4_4_,(undefined4)local_230._padding_);
      bVar26 = (byte)uVar15 & 0x1f;
      TStack_310._16_8_ = CONCAT44(local_230.CurrentBitIndex,local_230.UnvisitedBitMask);
      TStack_310._28_4_ = local_230._28_4_;
      TStack_310.BaseBitIndex = local_230.BaseBitIndex;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,
                            *(int *)&(this->CacheInfo).field_0x8 -
                            *(int *)&(this->CacheInfo).field_0x34);
      local_250._padding_._0_4_ = (int)uVar15 >> 5;
      TStack_310.Array = local_230.Array;
      local_250.BaseBitIndex = uVar15 & 0xffffffe0;
      local_250._padding_._4_4_ = 1 << bVar26;
      local_250.UnvisitedBitMask = -1 << bVar26;
      TStack_180.Array = local_230.Array;
      uStack_160 = uStack_2f0;
      local_250.Array = pTVar28;
      local_250.CurrentBitIndex = uVar15;
      local_188 = pTVar25;
      TStack_180._padding_ = TStack_310._padding_;
      TStack_180._16_8_ = TStack_310._16_8_;
      TStack_180._24_8_ = TStack_310._24_8_;
      if (((int)uVar15 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar12 = (FInstallBundleCacheStats *)(*pcVar9)();
        return pFVar12;
      }
      if (uVar15 != *(uint *)&(this->CacheInfo).field_0x28) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_250);
        pTVar28 = local_250.Array;
      }
      while( true ) {
        pTVar6 = local_188;
        if (*(int *)(&local_188->field_0x0 + 8) - *(int *)(&local_188->field_0x0 + 0x34) !=
            (int)uStack_160) {
          `TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_327);
        }
        if (((TStack_180.CurrentBitIndex == local_250.CurrentBitIndex) &&
            (TStack_180.Array == pTVar28)) && (pTVar6 == pTVar25)) break;
        lVar14 = *(longlong *)&pTVar6->field_0x0;
        lVar19 = (longlong)TStack_180.CurrentBitIndex * 0x40;
        lVar13 = lVar19 + lVar14;
        `FInstallBundleCache::GetStats'::__l2::<lambda_1>::operator()
                  (&local_2b0,*(FName *)(lVar19 + lVar14),(FBundleCacheInfo *)(lVar13 + 8));
        local_1d8 = *(FName *)(lVar19 + lVar14);
        if (((*(longlong *)(lVar13 + 0x18) != 0) || (*(char *)(lVar13 + 0x30) != '\0')) &&
           (3 < (byte)LogInstallBundleManager._0_1_)) {
          FDateTime::ToString((FDateTime *)(lVar13 + 0x20),local_78);
          ::FName::ToString(&local_1d8,&local_e8);
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)&PTR_u_____s___llu___l_151c7b690,
                     (FLogCategoryBase *)&LogInstallBundleManager);
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          pTVar25 = local_320;
          if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
            pTVar25 = local_320;
          }
        }
        TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
      }
    }
    else {
      if (5 < (byte)LogInstallBundleManager._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInstallBundleManager);
      }
      pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->CacheInfo).field_0x10;
      local_210._padding_._0_4_ = 0;
      local_210._padding_._4_4_ = 1;
      local_210.UnvisitedBitMask = 0xffffffff;
      local_210.CurrentBitIndex = 0;
      local_210.BaseBitIndex = 0;
      local_278 = pTVar28;
      local_210.Array = pTVar28;
      if (*(int *)&(this->CacheInfo).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_210);
      }
      uVar15 = *(uint *)&(this->CacheInfo).field_0x28;
      uVar27 = uVar15 & 0xffffffe0;
      TStack_310._padding_ = CONCAT44(local_210._padding_._4_4_,(undefined4)local_210._padding_);
      TStack_310._16_8_ = CONCAT44(local_210.CurrentBitIndex,local_210.UnvisitedBitMask);
      TStack_310._28_4_ = local_210._28_4_;
      TStack_310.BaseBitIndex = local_210.BaseBitIndex;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,
                            *(int *)&(this->CacheInfo).field_0x8 -
                            *(int *)&(this->CacheInfo).field_0x34);
      TStack_310.Array = local_210.Array;
      iVar20 = (int)uVar15 >> 5;
      TStack_150.Array = local_210.Array;
      uStack_130 = uStack_2f0;
      local_158 = pTVar25;
      TStack_150._padding_ = TStack_310._padding_;
      TStack_150._16_8_ = TStack_310._16_8_;
      TStack_150._24_8_ = TStack_310._24_8_;
      if (((int)uVar15 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar12 = (FInstallBundleCacheStats *)(*pcVar9)();
        return pFVar12;
      }
      uVar17 = *(uint *)&(this->CacheInfo).field_0x28;
      if (uVar15 != uVar17) {
        puVar21 = *(undefined1 **)&(this->CacheInfo).field_0x20;
        if (puVar21 == (undefined1 *)0x0) {
          puVar21 = (undefined1 *)pTVar28;
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
        while (uVar15 == 0) {
          lVar13 = (longlong)iVar20;
          uVar27 = uVar27 + 0x20;
          iVar20 = iVar20 + 1;
          uVar15 = uVar17;
          if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_148bcd480;
          uVar15 = *(uint *)(puVar21 + lVar13 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar15 = (int)lVar13 + -1 + uVar27;
        if ((int)uVar17 < (int)uVar15) {
          uVar15 = uVar17;
        }
      }
LAB_148bcd480:
      while( true ) {
        pTVar25 = local_158;
        if (*(int *)(&local_158->field_0x0 + 8) - *(int *)(&local_158->field_0x0 + 0x34) !=
            (int)uStack_130) {
          `TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_326);
        }
        if (((TStack_150.CurrentBitIndex == uVar15) && (TStack_150.Array == pTVar28)) &&
           (pTVar25 == local_320)) break;
        lVar14 = *(longlong *)&pTVar25->field_0x0;
        lVar19 = (longlong)TStack_150.CurrentBitIndex * 0x40;
        lVar13 = lVar19 + lVar14;
        `FInstallBundleCache::GetStats'::__l2::<lambda_1>::operator()
                  (&local_2b0,*(FName *)(lVar19 + lVar14),(FBundleCacheInfo *)(lVar13 + 8));
        local_1d0 = *(FName *)(lVar19 + lVar14);
        if (((*(longlong *)(lVar13 + 0x18) != 0) || (*(char *)(lVar13 + 0x30) != '\0')) &&
           (5 < (byte)LogInstallBundleManager._0_1_)) {
          FDateTime::ToString((FDateTime *)(lVar13 + 0x20),&local_c8);
          ::FName::ToString(&local_1d0,&local_d8);
          UE::Logging::Private::BasicLog<6>
                    ((FStaticBasicLogRecord *)&PTR_u_____s___llu___l_151c7b620,
                     (FLogCategoryBase *)&LogInstallBundleManager);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          pTVar28 = local_278;
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            pTVar28 = local_278;
          }
        }
        TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
      }
    }
  }
  uVar18 = 0;
  if (__return_storage_ptr__->UsedSize <= this->TotalSize) {
    uVar18 = this->TotalSize - __return_storage_ptr__->UsedSize;
  }
  __return_storage_ptr__->FreeSize = uVar18;
  if (((EVar10 != None) && (3 < (byte)LogInstallBundleManager._0_1_)) &&
     (((UE::Logging::Private::BasicLog<4>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInstallBundleManager),
       3 < (byte)LogInstallBundleManager._0_1_ &&
       ((UE::Logging::Private::BasicLog<4>
                   ((FStaticBasicLogRecord *)&PTR_u____used___llu_151c7b7e0,
                    (FLogCategoryBase *)&LogInstallBundleManager),
        3 < (byte)LogInstallBundleManager._0_1_ &&
        (UE::Logging::Private::BasicLog<4>
                   (&::LOG_Static,(FLogCategoryBase *)&LogInstallBundleManager),
        3 < (byte)LogInstallBundleManager._0_1_)))) &&
      (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInstallBundleManager)
      , 3 < (byte)LogInstallBundleManager._0_1_)))) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInstallBundleManager);
  }
  return __return_storage_ptr__;
}

// GetUsedSize @ 148bcdf70

ulong64 __thiscall FInstallBundleCache::GetUsedSize(FInstallBundleCache *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulong64 uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (!__CsvProfilerStat98) {
    FCsvProfilerTrace::OutputInlineStat
              ("FInstallBundleCache_GetUsedSize",_GCsvCategory_InstallBundleManager.Index);
    __CsvProfilerStat98 = true;
  }
  local_res10 = _GCsvCategory_InstallBundleManager.Index;
  FCsvProfiler::BeginStat
            ("FInstallBundleCache_GetUsedSize",_GCsvCategory_InstallBundleManager.Index,
             "CSV_FInstallBundleCache_GetUsedSize");
  puVar1 = &(this->CacheInfo).field_0x10;
  iVar16 = 0;
  iVar4 = *(int *)&(this->CacheInfo).field_0x28;
  iVar17 = 0;
  uVar11 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->CacheInfo).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar15 = *puVar18;
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar16;
      iVar17 = iVar17 + 0x20;
      iVar16 = iVar16 + 1;
      iVar9 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iVar16) goto LAB_148bce04d;
      uVar15 = puVar18[lVar10 + 1];
    }
    uVar8 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iVar9 = iVar17 + -1 + local_res18;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_148bce04d:
  uVar15 = *(uint *)&(this->CacheInfo).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar16);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar17;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->CacheInfo).field_0x8 - *(int *)&(this->CacheInfo).field_0x34)
  ;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return uVar11;
  }
  uVar8 = *(uint *)&(this->CacheInfo).field_0x28;
  if (uVar15 != uVar8) {
    puVar12 = *(undefined1 **)&(this->CacheInfo).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar16;
      uVar14 = uVar14 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar8;
      if ((int)(((int)(uVar8 - 1) >> 0x1f & 0x1fU) + (uVar8 - 1)) >> 5 < iVar16) goto LAB_148bce150;
      uVar15 = *(uint *)(puVar12 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar14;
    if ((int)uVar8 < (int)uVar15) {
      uVar15 = uVar8;
    }
  }
LAB_148bce150:
  while( true ) {
    if (*(int *)&(this->CacheInfo).field_0x8 - *(int *)&(this->CacheInfo).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar10 = *(longlong *)&this->CacheInfo;
    lVar13 = (longlong)TStack_60.CurrentBitIndex * 0x40;
    cVar3 = *(char *)(lVar13 + 0x30 + lVar10);
    if (cVar3 == '\0') {
      lVar10 = *(longlong *)(lVar13 + 0x18 + lVar10);
    }
    else if (cVar3 == '\x02') {
      lVar10 = 0;
    }
    else {
      uVar2 = *(ulonglong *)(lVar13 + 8 + lVar10);
      uVar5 = *(ulonglong *)(lVar13 + 0x18 + lVar10);
      lVar10 = *(longlong *)(lVar13 + 0x10 + lVar10);
      if (uVar2 < uVar5) {
        lVar10 = lVar10 + uVar5;
      }
      else {
        lVar10 = lVar10 + uVar2;
      }
    }
    uVar11 = uVar11 + lVar10;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  FCsvProfiler::EndStat("FInstallBundleCache_GetUsedSize",local_res10);
  return uVar11;
}

// HintRequested @ 148bce4b0

void __thiscall
FInstallBundleCache::HintRequested(FInstallBundleCache *this,FName param_1,bool param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  FBundleCacheInfo *pFVar5;
  
  if (!__CsvProfilerStat352) {
    FCsvProfilerTrace::OutputInlineStat
              ("FInstallBundleCache_HintRequested",_GCsvCategory_InstallBundleManager.Index);
    __CsvProfilerStat352 = true;
  }
  uVar2 = _GCsvCategory_InstallBundleManager.Index;
  FCsvProfiler::BeginStat
            ("FInstallBundleCache_HintRequested",_GCsvCategory_InstallBundleManager.Index,
             "CSV_FInstallBundleCache_HintRequested");
  pFVar5 = TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
           ::Find((TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
                   *)&this->CacheInfo,param_1);
  if (pFVar5 != (FBundleCacheInfo *)0x0) {
    if (param_2) {
      pFVar5->HintReqeustedCount = pFVar5->HintReqeustedCount + 1;
    }
    else {
      iVar4 = pFVar5->HintReqeustedCount + -1;
      pFVar5->HintReqeustedCount = iVar4;
      if (iVar4 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BundleInfo->HintReqeustedCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleCache.cpp"
                           ,0x16c,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  FCsvProfiler::EndStat("FInstallBundleCache_HintRequested",uVar2);
  return;
}

// Init @ 148bcec90

void __thiscall
FInstallBundleCache::Init(FInstallBundleCache *this,FInstallBundleCacheInitInfo *param_1)

{
  this->CacheName = param_1->CacheName;
  this->TotalSize = param_1->Size;
  return;
}

// IsReserved @ 148bcf370

bool __thiscall FInstallBundleCache::IsReserved(FInstallBundleCache *this,FName param_1)

{
  FBundleCacheInfo *pFVar1;
  
  pFVar1 = TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
           ::Find((TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
                   *)&this->CacheInfo,param_1);
  if (pFVar1 != (FBundleCacheInfo *)0x0) {
    return pFVar1->State == Reserved;
  }
  return false;
}

// Release @ 148bd33a0

bool __thiscall FInstallBundleCache::Release(FInstallBundleCache *this,FName param_1)

{
  uint uVar1;
  FBundleCacheInfo *pFVar2;
  bool bVar3;
  
  if (!__CsvProfilerStat280) {
    FCsvProfilerTrace::OutputInlineStat
              ("FInstallBundleCache_Release",_GCsvCategory_InstallBundleManager.Index);
    __CsvProfilerStat280 = true;
  }
  uVar1 = _GCsvCategory_InstallBundleManager.Index;
  FCsvProfiler::BeginStat
            ("FInstallBundleCache_Release",_GCsvCategory_InstallBundleManager.Index,
             "CSV_FInstallBundleCache_Release");
  pFVar2 = TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
           ::Find((TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
                   *)&this->CacheInfo,param_1);
  if ((pFVar2 != (FBundleCacheInfo *)0x0) && (pFVar2->State != Released)) {
    if (pFVar2->State != Reserved) {
      bVar3 = false;
      goto LAB_148bd3416;
    }
    pFVar2->State = Released;
  }
  bVar3 = true;
LAB_148bd3416:
  FCsvProfiler::EndStat("FInstallBundleCache_Release",uVar1);
  return bVar3;
}

// RemoveBundle @ 148bd39b0

void __thiscall
FInstallBundleCache::RemoveBundle
          (FInstallBundleCache *this,FInstallBundleSourceType *param_1,FName param_2)

{
  uint uVar1;
  TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>
  *pTVar2;
  TSet<TTuple<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>,FDefaultSetAllocator>
  *this_00;
  
  if (!__CsvProfilerStat37) {
    FCsvProfilerTrace::OutputInlineStat
              ("FInstallBundleCache_RemoveBundle",_GCsvCategory_InstallBundleManager.Index);
    __CsvProfilerStat37 = true;
  }
  uVar1 = _GCsvCategory_InstallBundleManager.Index;
  FCsvProfiler::BeginStat
            ("FInstallBundleCache_RemoveBundle",_GCsvCategory_InstallBundleManager.Index,
             "CSV_FInstallBundleCache_RemoveBundle");
  pTVar2 = TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
                   *)&this->PerSourceCacheInfo,param_2);
  this_00 = (TSet<TTuple<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>,FDefaultSetAllocator>
             *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>
                 *)0x0) {
    this_00 = (TSet<TTuple<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>,FDefaultSetAllocator>
               *)0x0;
  }
  if (this_00 !=
      (TSet<TTuple<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>,FDefaultSetAllocator>
       *)0x0) {
    TSet<TTuple<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>,FDefaultSetAllocator>
    ::Remove(this_00,param_1);
    UpdateCacheInfoFromSourceInfo(this,param_2);
  }
  FCsvProfiler::EndStat("FInstallBundleCache_RemoveBundle",uVar1);
  return;
}

// Reserve @ 148bd3c90

FInstallBundleCacheReserveResult * __thiscall
FInstallBundleCache::Reserve
          (FInstallBundleCache *this,FInstallBundleCacheReserveResult *__return_storage_ptr__,
          FName param_1)

{
  char cVar1;
  code *pcVar2;
  TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
  *pTVar3;
  bool bVar4;
  FBundleCacheInfo *pFVar5;
  ulong64 uVar6;
  FInstallBundleCacheReserveResult *pFVar7;
  TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>
  *pTVar8;
  longlong lVar9;
  int iVar10;
  FName *pFVar11;
  uint uVar12;
  ForElementType<unsigned_int> FVar14;
  ulonglong uVar15;
  uint *puVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  uint uVar19;
  FName FVar20;
  ulonglong uVar21;
  undefined1 local_res10 [8];
  uint local_res20;
  undefined1 local_e8 [8];
  uint local_e0;
  ulong64 local_d8;
  undefined8 local_d0;
  TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
  *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  FValueComparisonClass<FInstallBundleCache::FCacheSortPredicate> local_90;
  ForElementType<unsigned_int> local_88;
  FName *local_80;
  FName *local_78;
  TMap<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  ulonglong uVar13;
  
  uVar21 = 0;
  if (!__CsvProfilerStat127) {
    FCsvProfilerTrace::OutputInlineStat
              ("FInstallBundleCache_Reserve",_GCsvCategory_InstallBundleManager.Index);
    __CsvProfilerStat127 = true;
  }
  uVar19 = _GCsvCategory_InstallBundleManager.Index;
  local_e0 = _GCsvCategory_InstallBundleManager.Index;
  FCsvProfiler::BeginStat
            ("FInstallBundleCache_Reserve",_GCsvCategory_InstallBundleManager.Index,
             "CSV_FInstallBundleCache_Reserve");
  *(undefined8 *)&__return_storage_ptr__->BundlesToEvict = 0;
  *(undefined8 *)&(__return_storage_ptr__->BundlesToEvict).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->BundlesToEvict).field_0x20 = 0;
  uVar12 = 0;
  *(undefined4 *)&(__return_storage_ptr__->BundlesToEvict).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->BundlesToEvict).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->BundlesToEvict).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->BundlesToEvict).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->BundlesToEvict).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->BundlesToEvict).field_0x48 = 0;
  __return_storage_ptr__->Result = Success;
  pFVar5 = TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
           ::Find((TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
                   *)&this->CacheInfo,param_1);
  if (pFVar5 != (FBundleCacheInfo *)0x0) {
    if (pFVar5->State == PendingEvict) {
      __return_storage_ptr__->Result = Fail_PendingEvict;
      FCsvProfiler::EndStat("FInstallBundleCache_Reserve",uVar19);
      return __return_storage_ptr__;
    }
    if (pFVar5->State != Reserved) {
      local_d8 = (pFVar5->FullInstallSize - pFVar5->CurrentInstallSize) +
                 pFVar5->InstallOverheadSize;
      if (pFVar5->FullInstallSize <= pFVar5->CurrentInstallSize) {
        local_d8 = pFVar5->InstallOverheadSize;
      }
      uVar6 = GetUsedSize(this);
      if (this->TotalSize < local_d8 + uVar6) {
        __return_storage_ptr__->Result = Fail_NeedsEvict;
        local_d0 = 0;
        FDateTime::UtcNow();
        local_90.Predicate.Predicate =
             (TDereferenceWrapper<FInstallBundleCache::FBundleCacheInfo,FInstallBundleCache::FCacheSortPredicate>
              )&local_d0;
        TSet<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>,FDefaultSetAllocator>
        ::
        Sort<TSortableMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>::FValueComparisonClass<FInstallBundleCache::FCacheSortPredicate>_>
                  ((TSet<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>,FDefaultSetAllocator>
                    *)&this->CacheInfo,&local_90);
        local_88 = (ForElementType<unsigned_int>)&(this->CacheInfo).field_0x10;
        uVar19 = *(uint *)&(this->CacheInfo).field_0x28;
        uStack_bc = 1;
        uStack_ac = uVar12;
        local_a8 = uVar12;
        if (uVar19 != 0) {
          puVar16 = *(uint **)&(this->CacheInfo).field_0x20;
          if (puVar16 == (uint *)0x0) {
            puVar16 = (uint *)local_88;
          }
          uVar18 = *puVar16;
          uVar13 = uVar21;
          uVar15 = uVar21;
          local_a8 = 0;
          uVar12 = 0;
          while (uVar18 == 0) {
            iVar10 = (int)uVar13;
            local_a8 = (int)uVar15 + 0x20;
            uVar15 = (ulonglong)local_a8;
            uVar12 = iVar10 + 1;
            uVar13 = (ulonglong)uVar12;
            uStack_ac = uVar19;
            if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
            goto LAB_148bd3e74;
            uVar18 = (puVar16 + 1)[iVar10];
          }
          uStack_bc = -uVar18 & uVar18;
          uVar13 = (ulonglong)uStack_bc * 2 + 1;
          lVar9 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          local_98 = (int)lVar9;
          uStack_ac = (local_a8 - 1) + local_98;
          if ((int)uVar19 < (int)uStack_ac) {
            uStack_ac = uVar19;
          }
        }
LAB_148bd3e74:
        local_b8 = &(this->CacheInfo).field_0x10;
        local_res20 = *(uint *)&(this->CacheInfo).field_0x28;
        local_c8 = &this->CacheInfo;
        iStack_a0 = *(int *)&(this->CacheInfo).field_0x8 - *(int *)&(this->CacheInfo).field_0x34;
        uVar18 = local_res20 & 0xffffffe0;
        uStack_b0 = 0xffffffff;
        TStack_68.CurrentBitIndex = uStack_ac;
        TStack_68.UnvisitedBitMask = 0xffffffff;
        TStack_68._padding_ = CONCAT44(uStack_bc,uVar12);
        iVar10 = (int)local_res20 >> 5;
        TStack_68._28_4_ = uStack_ac;
        TStack_68.BaseBitIndex = local_a8;
        uStack_48 = CONCAT44(uStack_9c,iStack_a0);
        uStack_c0 = uVar12;
        uStack_a4 = uStack_ac;
        local_70 = local_c8;
        TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
        if ((((int)local_res20 < 0) || ((int)uVar19 < (int)local_res20)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FInstallBundleCacheReserveResult *)(*pcVar2)();
          return pFVar7;
        }
        uVar12 = *(int *)((longlong)local_88 + 0x18);
        FVar17 = local_88;
        if (local_res20 != uVar12) {
          FVar14 = *(ForElementType<unsigned_int> *)((longlong)local_88 + 0x10);
          if (*(ForElementType<unsigned_int> *)((longlong)local_88 + 0x10) ==
              (ForElementType<unsigned_int>)0x0) {
            FVar14 = local_88;
          }
          uVar19 = -1 << ((byte)local_res20 & 0x1f) &
                   *(uint *)((longlong)FVar14 + (longlong)iVar10 * 4);
          while (uVar19 == 0) {
            lVar9 = (longlong)iVar10;
            uVar18 = uVar18 + 0x20;
            iVar10 = iVar10 + 1;
            local_res20 = uVar12;
            if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
            goto LAB_148bd3fa0;
            uVar19 = *(uint *)((undefined1 *)((longlong)FVar14 + 4) + lVar9 * 4);
          }
          uVar13 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
          lVar9 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          local_94 = (int)lVar9;
          local_res20 = local_94 + -1 + uVar18;
          if ((int)uVar12 < (int)local_res20) {
            local_res20 = uVar12;
          }
        }
LAB_148bd3fa0:
        do {
          pTVar3 = local_70;
          if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
            local_res10[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
            FVar17 = (ForElementType<unsigned_int>)&(this->CacheInfo).field_0x10;
          }
          if (((TStack_68.CurrentBitIndex == local_res20) &&
              ((ForElementType<unsigned_int>)TStack_68.Array == FVar17)) &&
             (pTVar3 == &this->CacheInfo)) goto LAB_148bd4120;
          pFVar11 = (FName *)(*(longlong *)pTVar3 + (longlong)TStack_68.CurrentBitIndex * 0x40);
          if ((*pFVar11 == param_1) ||
             (cVar1 = (char)pFVar11[6].ComparisonIndex.Value, cVar1 == '\x01')) goto LAB_148bd4105;
          if (cVar1 == '\0') {
            FVar20 = pFVar11[3];
LAB_148bd402b:
            if (FVar20 == (FName)0x0) {
              if (cVar1 == '\x02') goto LAB_148bd4099;
            }
            else {
              if ((uVar6 < uVar21) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("UsedSize >= CanFreeSpace",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleCache.cpp"
                                     ,0xb4,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                pFVar7 = (FInstallBundleCacheReserveResult *)(*pcVar2)();
                return pFVar7;
              }
              if (this->TotalSize < (uVar6 - uVar21) + local_d8) {
                uVar21 = uVar21 + (longlong)FVar20;
                local_80 = pFVar11;
                TSet<TTuple<FName,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::Emplace<TKeyInitializer<FName_const_&>_>
                          ((TSet<TTuple<FName,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)__return_storage_ptr__,(TKeyInitializer<FName_const_&> *)local_e8,
                           (bool *)&local_80);
                iVar10 = local_e8._0_4_;
                goto LAB_148bd40b6;
              }
            }
          }
          else {
            if (cVar1 != '\x02') {
              FVar20 = (FName)((longlong)pFVar11[3] + (longlong)pFVar11[2]);
              if ((ulonglong)pFVar11[3] <= (ulonglong)pFVar11[1]) {
                FVar20 = (FName)((longlong)pFVar11[1] + (longlong)pFVar11[2]);
              }
              goto LAB_148bd402b;
            }
LAB_148bd4099:
            local_78 = pFVar11;
            TSet<TTuple<FName,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::Emplace<TKeyInitializer<FName_const_&>_>
                      ((TSet<TTuple<FName,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)__return_storage_ptr__,(TKeyInitializer<FName_const_&> *)(local_e8 + 4),
                       (bool *)&local_78);
            iVar10 = local_e8._4_4_;
LAB_148bd40b6:
            lVar9 = *(longlong *)&__return_storage_ptr__->BundlesToEvict;
            pTVar8 = TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
                     ::Find((TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
                             *)&this->PerSourceCacheInfo,*pFVar11);
            if ((pTVar8 == (TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>
                            *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              pFVar7 = (FInstallBundleCacheReserveResult *)(*pcVar2)();
              return pFVar7;
            }
            TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
            ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
                      ((TMapBase<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>
                        *)&pTVar8->field_0x8,
                       (TArray<FInstallBundleSourceType,TSizedDefaultAllocator<32>_> *)
                       ((longlong)iVar10 * 0x20 + lVar9 + 8));
          }
LAB_148bd4105:
          TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
          FVar17 = (ForElementType<unsigned_int>)&(this->CacheInfo).field_0x10;
        } while( true );
      }
      pFVar5->State = Reserved;
      __return_storage_ptr__->Result = Success;
      goto LAB_148bd4196;
    }
  }
  __return_storage_ptr__->Result = Success;
  FCsvProfiler::EndStat("FInstallBundleCache_Reserve",uVar19);
  return __return_storage_ptr__;
LAB_148bd4120:
  if ((uVar6 < uVar21) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("UsedSize >= CanFreeSpace",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleCache.cpp"
                         ,0xc6,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FInstallBundleCacheReserveResult *)(*pcVar2)();
    return pFVar7;
  }
  uVar19 = local_e0;
  if (this->TotalSize < (uVar6 - uVar21) + local_d8) {
    __return_storage_ptr__->Result = Fail_CacheFull;
  }
  else if ((*(int *)&(__return_storage_ptr__->BundlesToEvict).field_0x8 -
            *(int *)&(__return_storage_ptr__->BundlesToEvict).field_0x34 < 1) &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Result.BundlesToEvict.Num() > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleCache.cpp"
                              ,0xcd,L""), uVar19 = local_e0, bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FInstallBundleCacheReserveResult *)(*pcVar2)();
    return pFVar7;
  }
LAB_148bd4196:
  FCsvProfiler::EndStat("FInstallBundleCache_Reserve",uVar19);
  return __return_storage_ptr__;
}

// SetPendingEvict @ 148bd7c80

bool __thiscall FInstallBundleCache::SetPendingEvict(FInstallBundleCache *this,FName param_1)

{
  uint uVar1;
  FBundleCacheInfo *pFVar2;
  bool bVar3;
  
  if (!__CsvProfilerStat304) {
    FCsvProfilerTrace::OutputInlineStat
              ("FInstallBundleCache_SetPendingEvict",_GCsvCategory_InstallBundleManager.Index);
    __CsvProfilerStat304 = true;
  }
  uVar1 = _GCsvCategory_InstallBundleManager.Index;
  FCsvProfiler::BeginStat
            ("FInstallBundleCache_SetPendingEvict",_GCsvCategory_InstallBundleManager.Index,
             "CSV_FInstallBundleCache_SetPendingEvict");
  pFVar2 = TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
           ::Find((TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
                   *)&this->CacheInfo,param_1);
  if ((pFVar2 != (FBundleCacheInfo *)0x0) && (pFVar2->State != PendingEvict)) {
    if (pFVar2->State != Released) {
      bVar3 = false;
      goto LAB_148bd7cf6;
    }
    pFVar2->State = PendingEvict;
  }
  bVar3 = true;
LAB_148bd7cf6:
  FCsvProfiler::EndStat("FInstallBundleCache_SetPendingEvict",uVar1);
  return bVar3;
}

// UpdateCacheInfoFromSourceInfo @ 148bdd500

void __thiscall
FInstallBundleCache::UpdateCacheInfoFromSourceInfo(FInstallBundleCache *this,FName param_1)

{
  ulonglong uVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>
  *pTVar12;
  FBundleCacheInfo *pFVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  int iVar24;
  uint uVar25;
  longlong *plVar26;
  longlong *plVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  FName local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_bc;
  FName local_b0 [3];
  longlong *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68 [2];
  longlong *plVar22;
  
  local_res10 = param_1;
  if (!__CsvProfilerStat558) {
    FCsvProfilerTrace::OutputInlineStat
              ("FInstallBundleCache_UpdateCacheInfoFromSourceInfo",
               _GCsvCategory_InstallBundleManager.Index);
    __CsvProfilerStat558 = true;
  }
  local_res20 = _GCsvCategory_InstallBundleManager.Index;
  FCsvProfiler::BeginStat
            ("FInstallBundleCache_UpdateCacheInfoFromSourceInfo",
             _GCsvCategory_InstallBundleManager.Index,
             "CSV_FInstallBundleCache_UpdateCacheInfoFromSourceInfo");
  pTVar12 = TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
                    *)&this->PerSourceCacheInfo,local_res10);
  FVar7 = local_res10;
  plVar16 = (longlong *)0x0;
  plVar27 = (longlong *)&pTVar12->field_0x8;
  if (pTVar12 ==
      (TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>
       *)0x0) {
    plVar27 = plVar16;
  }
  if (plVar27 == (longlong *)0x0) {
    TSet<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>,FDefaultSetAllocator>
              *)&this->CacheInfo,local_res10);
  }
  else {
    iVar24 = (int)plVar27[1] - *(int *)((longlong)plVar27 + 0x34);
    if (iVar24 == 0) {
      local_b0[0] = local_res10;
      if (*(int *)&(this->PerSourceCacheInfo).field_0x8 !=
          *(int *)&(this->PerSourceCacheInfo).field_0x34) {
        uVar9 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
        TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo,0>_>,0>,FDefaultSetAllocator>
                             *)&this->PerSourceCacheInfo,FVar7.Number + uVar9,local_b0);
      }
      TSet<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>,FDefaultSetAllocator>
      ::Remove((TSet<TTuple<FName,FInstallBundleCache::FBundleCacheInfo>,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>,FDefaultSetAllocator>
                *)&this->CacheInfo,local_res10);
    }
    else {
      uVar9 = *(uint *)(plVar27 + 5);
      TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar27 + 2);
      uVar20 = 0;
      uVar10 = 1;
      uVar30 = (undefined4)__real_3ff0000000000000;
      uVar31 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      uVar21 = 0;
      iVar19 = 0;
      uVar11 = uVar20;
      if (uVar9 != 0) {
        pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)plVar27[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar27[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar23 = TStack_90.Array;
        }
        uVar11 = *(uint *)(pTVar23->AllocatorInstance).InlineData;
        plVar18 = plVar16;
        plVar22 = plVar16;
        uVar21 = 0;
        uVar20 = 0;
        while (uVar11 == 0) {
          iVar19 = (int)plVar18;
          uVar21 = (int)plVar22 + 0x20;
          plVar22 = (longlong *)(ulonglong)uVar21;
          uVar20 = iVar19 + 1;
          plVar18 = (longlong *)(ulonglong)uVar20;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20) {
            iVar19 = (int)plVar27[5];
            uVar11 = uVar9;
            goto LAB_148bdd684;
          }
          uVar11 = *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar19 * 4 + 4);
        }
        iVar19 = (int)plVar27[5];
        uVar10 = -uVar11 & uVar11;
        uVar1 = (ulonglong)uVar10 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar11 = (uVar21 - 1) + (int)lVar14;
        if (iVar19 < (int)uVar11) {
          uVar11 = uVar9;
        }
      }
LAB_148bdd684:
      uVar9 = *(uint *)(plVar27 + 5);
      uVar25 = uVar9 & 0xffffffe0;
      TStack_90._padding_ = CONCAT44(uVar10,uVar20);
      TStack_90.CurrentBitIndex = uVar11;
      TStack_90.UnvisitedBitMask = 0xffffffff;
      TStack_90._28_4_ = uVar11;
      TStack_90.BaseBitIndex = uVar21;
      uStack_70 = CONCAT44(uStack_bc,iVar24);
      iVar24 = (int)uVar9 >> 5;
      local_98 = plVar27;
      if ((((int)uVar9 < 0) || (iVar19 < (int)uVar9)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar21 = *(uint *)(plVar27 + 5);
      plVar18 = plVar16;
      plVar22 = plVar16;
      plVar26 = plVar16;
      if (uVar9 != uVar21) {
        plVar17 = (longlong *)plVar27[4];
        if ((longlong *)plVar27[4] == (longlong *)0x0) {
          plVar17 = plVar27 + 2;
        }
        uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)((longlong)plVar17 + (longlong)iVar24 * 4);
        while (uVar9 == 0) {
          lVar14 = (longlong)iVar24;
          uVar25 = uVar25 + 0x20;
          iVar24 = iVar24 + 1;
          uVar9 = uVar21;
          if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
          goto LAB_148bdd790;
          uVar9 = *(uint *)((longlong)plVar17 + lVar14 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar9 = (int)lVar14 + -1 + uVar25;
        if ((int)uVar21 < (int)uVar9) {
          uVar9 = uVar21;
        }
      }
LAB_148bdd790:
      while( true ) {
        plVar17 = local_98;
        if ((int)local_98[1] - *(int *)((longlong)local_98 + 0x34) != (int)uStack_70) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FInstallBundleSourceType,FInstallBundleCache::FPerSourceBundleCacheInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        FVar7 = local_res10;
        if (((TStack_90.CurrentBitIndex == uVar9) &&
            (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar27 + 2))) &&
           (plVar17 == plVar27)) break;
        lVar14 = *plVar17;
        lVar15 = (longlong)TStack_90.CurrentBitIndex * 0x40;
        lVar3 = *(longlong *)(lVar15 + 0x20 + lVar14);
        lVar4 = *(longlong *)(lVar15 + 0x10 + lVar14);
        lVar5 = *(longlong *)(lVar15 + 0x18 + lVar14);
        plVar17 = plVar16;
        uVar28 = uVar30;
        uVar29 = uVar31;
        if (lVar3 != 0) {
          dVar2 = *(double *)(lVar15 + 0x30 + lVar14);
          plVar17 = *(longlong **)(lVar15 + 0x28 + lVar14);
          uVar28 = SUB84(dVar2,0);
          uVar29 = (int)((ulonglong)dVar2 >> 0x20);
          if ((double)CONCAT44(uVar31,uVar30) <= dVar2) {
            uVar28 = uVar30;
            uVar29 = uVar31;
          }
          if ((longlong)plVar17 <= (longlong)plVar16) {
            plVar17 = plVar16;
          }
        }
        TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
        plVar16 = plVar17;
        plVar18 = (longlong *)((longlong)plVar18 + lVar5);
        plVar22 = (longlong *)((longlong)plVar22 + lVar4);
        plVar26 = (longlong *)((longlong)plVar26 + lVar3);
        uVar30 = uVar28;
        uVar31 = uVar29;
      }
      uVar9 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
      pFVar13 = TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
                ::FindOrAddImpl<FName_const_&>
                          ((TMapBase<FName,FInstallBundleCache::FBundleCacheInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInstallBundleCache::FBundleCacheInfo,0>_>
                            *)&this->CacheInfo,uVar9 + FVar7.Number,&local_res10);
      if (((longlong *)pFVar13->FullInstallSize != plVar22) && (pFVar13->State == Reserved)) {
        ::FName::ToString(&local_res10,local_68);
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("BundleCacheInfo.FullInstallSize == FullInstallSize || BundleCacheInfo.State != ECacheState::Reserved"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleCache.cpp"
                           ,600,
                           L"Bundle %s: FullInstallSize should not be updated while a bundle is Reserved!"
                          );
        if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar13->AgeScalar = (double)CONCAT44(uVar31,uVar30);
      pFVar13->FullInstallSize = (ulong64)plVar22;
      pFVar13->InstallOverheadSize = (ulong64)plVar18;
      pFVar13->CurrentInstallSize = (ulong64)plVar26;
      (pFVar13->TimeStamp).Ticks = (long64)plVar16;
    }
  }
  FCsvProfiler::EndStat("FInstallBundleCache_UpdateCacheInfoFromSourceInfo",local_res20);
  return;
}

