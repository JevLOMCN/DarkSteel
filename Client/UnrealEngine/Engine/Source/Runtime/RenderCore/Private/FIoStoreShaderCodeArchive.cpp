// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 44

// FIoStoreShaderCodeArchive @ 145ded450

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FIoStoreShaderCodeArchive * __thiscall
FIoStoreShaderCodeArchive::FIoStoreShaderCodeArchive
          (FIoStoreShaderCodeArchive *this,EShaderPlatform param_1,FString *param_2,
          FIoDispatcher *param_3)

{
  FRHIShaderLibrary::FRHIShaderLibrary((FRHIShaderLibrary *)this,param_1,param_2);
  this->IoDispatcher = param_3;
  this->_padding_ = (longlong)&___7FIoStoreShaderCodeArchive__6B_;
  (this->Header).ShaderMapHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).ShaderMapHashes.ArrayNum = 0;
  (this->Header).ShaderMapHashes.ArrayMax = 0;
  (this->Header).ShaderHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).ShaderHashes.ArrayNum = 0;
  (this->Header).ShaderHashes.ArrayMax = 0;
  (this->Header).ShaderGroupIoHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).ShaderGroupIoHashes.ArrayNum = 0;
  (this->Header).ShaderGroupIoHashes.ArrayMax = 0;
  (this->Header).ShaderMapEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).ShaderMapEntries.ArrayNum = 0;
  (this->Header).ShaderMapEntries.ArrayMax = 0;
  (this->Header).ShaderEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).ShaderEntries.ArrayNum = 0;
  (this->Header).ShaderEntries.ArrayMax = 0;
  (this->Header).ShaderGroupEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).ShaderGroupEntries.ArrayNum = 0;
  (this->Header).ShaderGroupEntries.ArrayMax = 0;
  (this->Header).ShaderIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Header).ShaderIndices.ArrayNum = 0;
  (this->Header).ShaderIndices.ArrayMax = 0;
  FHashTable::FHashTable(&this->ShaderMapHashTable,0x400,0);
  FHashTable::FHashTable(&this->ShaderHashTable,0x400,0);
  *(undefined8 *)&this->PreloadedShaderGroups = 0;
  *(undefined8 *)&(this->PreloadedShaderGroups).field_0x8 = 0;
  *(undefined8 *)&(this->PreloadedShaderGroups).field_0x20 = 0;
  *(undefined4 *)&(this->PreloadedShaderGroups).field_0x28 = 0;
  *(undefined4 *)&(this->PreloadedShaderGroups).field_0x2c = 0x80;
  *(undefined4 *)&(this->PreloadedShaderGroups).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreloadedShaderGroups).field_0x34 = 0;
  *(undefined8 *)&(this->PreloadedShaderGroups).field_0x40 = 0;
  *(undefined4 *)&(this->PreloadedShaderGroups).field_0x48 = 0;
  (this->PreloadedShaderGroupsLock).Mutex.Mutex.Ptr = (void *)0x0;
  FShaderUsageVisualizer::FShaderUsageVisualizer(&this->DebugVisualizer);
  return this;
}

// ~FIoStoreShaderCodeArchive @ 145df0ac0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FIoStoreShaderCodeArchive::~FIoStoreShaderCodeArchive(FIoStoreShaderCodeArchive *this)

{
  uint uVar1;
  FName FVar2;
  void *pvVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar10 [8];
  FName local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  this->_padding_ = (longlong)&___7FIoStoreShaderCodeArchive__6B_;
  uVar1 = *(uint *)&(this->PreloadedShaderGroups).field_0x48;
  iVar7 = uVar1 * 4;
  if (uVar1 < 2) {
    iVar7 = 0;
  }
  uVar1 = iVar7 + (((this->Header).ShaderGroupIoHashes.ArrayMax +
                   *(int *)&(this->PreloadedShaderGroups).field_0xc * 2) * 3 + 0xca +
                   ((this->Header).ShaderEntries.ArrayMax +
                    (this->Header).ShaderGroupEntries.ArrayMax * 2 +
                   (this->Header).ShaderMapEntries.ArrayMax) * 2 +
                   ((this->Header).ShaderHashes.ArrayMax + (this->Header).ShaderMapHashes.ArrayMax)
                   * 5 + (*(int *)&(this->PreloadedShaderGroups).field_0x2c + 0x1fU >> 5) +
                  (this->Header).ShaderIndices.ArrayMax) * 4;
  auVar10[4] = '\0';
  auVar10[5] = '\0';
  auVar10[6] = '\0';
  auVar10[7] = '\0';
  auVar10._0_4_ = uVar1;
  if (uVar1 != 0) {
    FVar9 = StatPtr_STAT_Shaders_ShaderResourceMemory;
    if (StatPtr_STAT_Shaders_ShaderResourceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_res10,"STAT_Shaders_ShaderResourceMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderResourceMemory,
                         *pFVar8,L"Shader Resource Mem","STATGROUP_Shaders","STATCAT_Advanced",
                         L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar9;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_38.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_38.StatData.Pad = auVar10;
      local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar10);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  Teardown(this);
  FShaderUsageVisualizer::~FShaderUsageVisualizer(&this->DebugVisualizer);
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  if (BVar5 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  }
  *(undefined4 *)&(this->PreloadedShaderGroups).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PreloadedShaderGroups).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PreloadedShaderGroups);
  if ((this->ShaderHashTable).IndexSize != 0) {
    (this->ShaderHashTable).HashMask = 0;
    (this->ShaderHashTable).IndexSize = 0;
    operator_delete__((this->ShaderHashTable).Hash);
    (this->ShaderHashTable).Hash = FHashTable::EmptyHash;
    operator_delete__((this->ShaderHashTable).NextIndex);
    (this->ShaderHashTable).NextIndex = (uint *)0x0;
  }
  if ((this->ShaderMapHashTable).IndexSize != 0) {
    (this->ShaderMapHashTable).HashMask = 0;
    (this->ShaderMapHashTable).IndexSize = 0;
    operator_delete__((this->ShaderMapHashTable).Hash);
    (this->ShaderMapHashTable).Hash = FHashTable::EmptyHash;
    operator_delete__((this->ShaderMapHashTable).NextIndex);
    (this->ShaderMapHashTable).NextIndex = (uint *)0x0;
  }
  FIoStoreShaderCodeArchiveHeader::~FIoStoreShaderCodeArchiveHeader(&this->Header);
  this->_padding_ = (longlong)&___7FRHIShaderLibrary__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// operator() @ 145df38b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FIoStoreShaderCodeArchive::PreloadShaderGroup'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FIoRequest FVar8;
  uint uVar9;
  undefined8 *local_res8;
  FIoRequest local_res10;
  undefined1 local_res18 [16];
  FIoBatch local_88;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FIoStoreShaderCodeArchive::SetupPreloadEntryForLoading
            (*(FIoStoreShaderCodeArchive **)this,*(int *)((longlong)this + 0x18),
             *(FShaderGroupPreloadEntry **)((longlong)this + 0x10));
  puVar4 = *(undefined8 **)((longlong)this + 8);
  if (puVar4 == (undefined8 *)0x0) {
    FIoDispatcher::NewBatch(*(FIoDispatcher **)(*(longlong *)this + 0x38),&local_88);
    uVar3 = *(uint *)((longlong)this + 0x18);
    lVar5 = *(longlong *)this;
    uStack_68 = 0xffffffffffffffff;
    uStack_58 = 0;
    local_70 = 0;
    local_60 = 0;
    uVar9 = 0;
    if ((int)uVar3 < *(int *)(lVar5 + 0x68)) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0xffffffff;
    uStack_3c = 0xffffffff;
    local_38 = 0;
    uStack_30 = 0;
    FVar8 = FIoBatch::Read(&local_88,(FIoChunkId *)local_res18,
                           (FIoReadOptions *)
                           (*(longlong *)(lVar5 + 0x60) + (longlong)(int)uVar3 * 0xc),(int)&local_48
                          );
    FIoRequest::operator=
              ((FIoRequest *)(*(longlong *)((longlong)this + 0x10) + 8),(FIoRequest *)FVar8.Impl);
    FIoRequest::~FIoRequest((FIoRequest *)local_res18);
    local_res18._8_8_ = **(longlong **)((longlong)this + 0x10);
    if (local_res18._8_8_ != 0) {
      LOCK();
      *(int *)(local_res18._8_8_ + 0x30) = *(int *)(local_res18._8_8_ + 0x30) + 1;
      UNLOCK();
    }
    FIoBatch::IssueAndDispatchSubsequents(&local_88,(FBaseGraphTask *)(local_res18 + 8));
    FIoBatch::~FIoBatch(&local_88);
    return;
  }
  local_res8 = (undefined8 *)**(longlong **)((longlong)this + 0x10);
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_res8 + 6) = *(int *)(local_res8 + 6) + 1;
    UNLOCK();
  }
  uVar3 = *(uint *)((longlong)this + 0x18);
  lVar5 = *(longlong *)this;
  uVar9 = 0;
  if ((int)uVar3 < *(int *)(lVar5 + 0x68)) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (*(code *)*puVar4)(&local_res10,puVar4[1],*(longlong *)(lVar5 + 0x60) + (longlong)(int)uVar3 * 0xc
                     ,&local_res8);
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  FIoRequest::operator=((FIoRequest *)(*(longlong *)((longlong)this + 0x10) + 8),&local_res10);
  FIoRequest::~FIoRequest(&local_res10);
  return;
}

// operator() @ 145df4460

void __thiscall
`FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l12::<lambda_1>::operator()
          (void *this,int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int local_res10 [2];
  
  lVar3 = *(longlong *)((longlong)this + 8);
  uVar11 = 0;
  if (param_1 < *(int *)(lVar3 + 0x38)) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  local_res10[0] = param_1;
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x30);
  iVar1 = *(int *)(lVar3 + (longlong)param_1 * 8);
  uVar13 = (ulonglong)iVar1;
  iVar2 = *(int *)(lVar3 + 4 + (longlong)param_1 * 8);
  uVar14 = uVar13;
  while( true ) {
    if ((longlong)(iVar2 + iVar1) <= (longlong)uVar13) {
      return;
    }
    lVar3 = *(longlong *)((longlong)this + 8);
    uVar12 = (uint)uVar14;
    uVar11 = 0;
    if ((int)uVar12 < *(int *)(lVar3 + 0x68)) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar11 = *(uint *)(*(longlong *)(lVar3 + 0x60) + uVar13 * 4);
    lpCriticalSection =
         (LPCRITICAL_SECTION)
         (*(longlong *)((longlong)this + 0x10) + (ulonglong)(uVar11 & 0x3ff) * 0x28);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    plVar4 = *(longlong **)this;
    uVar9 = 0;
    if ((int)uVar11 < (int)plVar4[1]) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    lVar5 = *plVar4;
    lVar3 = lVar5 + (longlong)(int)uVar11 * 0x18;
    piVar6 = *(int **)(lVar5 + 8 + (longlong)(int)uVar11 * 0x18);
    if (((piVar6 <= local_res10) && (local_res10 < piVar6 + *(int *)(lVar3 + 0x14))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = *(int *)(lVar3 + 0x10);
    if (iVar10 == *(int *)(lVar3 + 0x14)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)(lVar3 + 8),(int *)(lVar3 + 0x14));
      *(int *)(lVar3 + 0x10) = iVar10 + 1;
    }
    else {
      *(int *)(lVar3 + 0x10) = iVar10 + 1;
    }
    *(int *)(*(longlong *)(lVar3 + 8) + (longlong)iVar10 * 4) = local_res10[0];
    LeaveCriticalSection(lpCriticalSection);
    uVar14 = (ulonglong)(uVar12 + 1);
    uVar13 = uVar13 + 1;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// operator() @ 145df4cb0

void __thiscall
`FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l13::<lambda_2>::operator()
          (void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  FIdentityFunctor local_res10 [8];
  
  uVar9 = *(int *)((longlong)this + 8) * param_1;
  iVar1 = uVar9 + *(int *)((longlong)this + 8);
  lVar10 = (longlong)(int)uVar9;
  iVar7 = *(int *)(*(longlong *)this + 8);
  if (iVar1 < *(int *)(*(longlong *)this + 8)) {
    iVar7 = iVar1;
  }
  if (lVar10 < iVar7) {
    lVar8 = lVar10 * 0x18;
    lVar10 = iVar7 - lVar10;
    do {
      plVar2 = *(longlong **)this;
      uVar6 = 0;
      if ((int)uVar9 < (int)plVar2[1]) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *plVar2;
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                (*(int **)(lVar8 + 8 + lVar3),*(int *)(lVar8 + 0x10 + lVar3),local_res10[0],
                 (TLess<void> *)local_res10);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x18;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// operator() @ 145df4da0

bool __thiscall
`FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l2::<lambda_3>::operator()
          (void *this,TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *param_1,
          TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar1 = *(int *)&param_1->field_0x10;
  if (iVar1 != *(int *)&param_2->field_0x10) {
    return iVar1 < *(int *)&param_2->field_0x10;
  }
  uVar7 = 0;
  if (0 < iVar1) {
    lVar8 = 0;
    do {
      uVar9 = ~uVar7 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar7 < *(int *)&param_1->field_0x10) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar2 = *(longlong *)&param_1->field_0x8;
      uVar6 = 0;
      if ((int)uVar7 < *(int *)&param_2->field_0x10) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(int *)(lVar2 + lVar8 * 4) != *(int *)(*(longlong *)&param_2->field_0x8 + lVar8 * 4)) {
        uVar6 = 0;
        if ((int)uVar7 < *(int *)&param_1->field_0x10) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar1 = *(int *)(*(longlong *)&param_1->field_0x8 + (longlong)(int)uVar7 * 4);
        uVar6 = 0;
        if ((int)uVar7 < *(int *)&param_2->field_0x10) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        return iVar1 < *(int *)(*(longlong *)&param_2->field_0x8 + (longlong)(int)uVar7 * 4);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar1);
  }
  return *(uint *)param_1 < *(uint *)param_2;
}

// operator() @ 145df4f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l2::<lambda_4>::operator()
          (void *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FString *pFVar11;
  uchar *puVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStackY_268 [32];
  FIdentityFunctor local_218;
  uint local_210;
  undefined4 local_200;
  longlong local_1f0;
  undefined8 local_1d8;
  ulonglong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  FString local_1b8;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  FScriptContainerElement local_178 [128];
  ForAnyElementType local_f8;
  FScriptContainerElement *local_f0;
  int local_e8;
  FSHA1 local_d8;
  ulonglong local_48;
  ulonglong uVar21;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1d8 = *(undefined8 *)((longlong)this + 0x10);
  AlgoImpl::
  IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,__FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader_::__l2::<lambda_4>::operator()_::__l2::<lambda_1>_>_>
            ((uint *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_218,
             (<lambda_1> *)&local_1d8);
  lVar2 = *(longlong *)((longlong)this + 8);
  iVar8 = *(int *)(lVar2 + 0x58);
  lVar19 = (longlong)iVar8;
  if (iVar8 == *(int *)(lVar2 + 0x5c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)(lVar2 + 0x50),(int *)(lVar2 + 0x5c));
    *(int *)(lVar2 + 0x58) = iVar8;
  }
  *(int *)(lVar2 + 0x58) = iVar8 + 1;
  pFVar10 = ((ForAnyElementType *)(lVar2 + 0x50))->Data + (longlong)iVar8 * 0x10;
  DefaultConstructItems<FIoStoreShaderGroupEntry,int>(pFVar10,1);
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x18);
  if ((((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)pFVar3->Data <= param_1) &&
      (param_1 < (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)pFVar3->Data +
                 *(int *)((longlong)&pFVar3[1].Data + 4))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar3,piVar1);
  }
  uVar17 = 0;
  *(int *)&pFVar3[1].Data = iVar8 + 1;
  pFVar14 = pFVar3->Data + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar14 = 0;
  iVar8 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  *(int *)(pFVar14 + 8) = iVar8;
  uVar16 = 0;
  if (iVar8 == 0) {
    *(int *)(pFVar14 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,(ForAnyElementType *)pFVar14,iVar8,(int *)(pFVar14 + 0xc));
    memcpy(*(void **)pFVar14,pFVar4,(longlong)iVar8 << 2);
  }
  *(int *)(pFVar10 + 4) = param_1->ArrayNum;
  local_1c8 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x10);
  iVar8 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x18);
  if ((iVar8 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar13 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x38);
  lVar2 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x30);
  if ((iVar13 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FSHA1::FSHA1(&local_d8);
  local_1c0 = (longlong)param_1->ArrayNum;
  local_210 = 0;
  uVar20 = uVar16;
  if (0 < local_1c0) {
    local_1d0 = lVar19 << 4;
    local_1f0 = 0;
    uVar21 = uVar17;
    do {
      uVar20 = uVar16;
      if ((int)(uint)uVar17 < param_1->ArrayNum) {
        uVar20 = ~(uint)uVar17 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar20 = *(uint *)((param_1->AllocatorInstance).Data + local_1f0 * 4);
      lVar18 = (longlong)(int)uVar20;
      uVar15 = ~uVar20 >> 0x1f;
      lVar19 = *(longlong *)((longlong)this + 8);
      uVar9 = uVar16;
      if ((int)uVar20 < *(int *)(lVar19 + 0x48)) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar19 = *(longlong *)(lVar19 + 0x40);
      *(ulonglong *)(lVar19 + lVar18 * 8) =
           (*(uint *)(lVar19 + lVar18 * 8) & 0xf ^ local_1d0) & 0x3ffffffff | uVar21 << 0x22;
      uVar9 = uVar16;
      if ((int)uVar20 < iVar8) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FSHA1::Update(&local_d8,(uchar *)(local_1c8 + lVar18 * 0x14),0x14);
      uVar15 = (int)uVar20 < iVar13 & uVar15;
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      piVar1 = (int *)(lVar2 + 0xc + lVar18 * 0x18);
      FSHA1::Update(&local_d8,(uchar *)piVar1,4);
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_210 = local_210 + 1;
      uVar17 = (ulonglong)local_210;
      uVar20 = (int)uVar21 + *piVar1;
      uVar21 = (ulonglong)uVar20;
      local_1f0 = local_1f0 + 1;
    } while (local_1f0 < local_1c0);
  }
  pFVar11 = ::FName::ToString(*(FName **)this,&local_1b8);
  iVar8 = (pFVar11->Data).ArrayNum;
  pFVar4 = (pFVar11->Data).AllocatorInstance.Data;
  local_f8.Data = (FScriptContainerElement *)0x0;
  iVar13 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar13 = 0;
  }
  if (pFVar4 == (FScriptContainerElement *)0x0) {
    local_f0 = (FScriptContainerElement *)0x0;
    local_e8 = 0;
    goto LAB_145df54d1;
  }
  if ((0 < iVar13) && (*(short *)(pFVar4 + ((longlong)iVar13 + -1) * 2) == 0)) {
    uVar16 = 1;
    iVar13 = iVar13 + -1;
  }
  local_e8 = UE::Core::Private::GetConvertedLength((uchar *)0x0,(wchar_t *)pFVar4,iVar13);
  uVar15 = local_e8 + uVar16;
  uVar9 = uVar15;
  if (uVar15 < 0x81) {
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      uVar9 = 0;
      goto LAB_145df5467;
    }
  }
  else {
LAB_145df5467:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,uVar9,1);
  }
  local_f0 = local_178;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    local_f0 = local_f8.Data;
  }
  puVar12 = UE::Core::Private::Convert((uchar *)local_f0,uVar15,(wchar_t *)pFVar4,uVar16 + iVar13);
  if ((puVar12 == (uchar *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_145df54d1:
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  FSHA1::Update(&local_d8,(uchar *)local_f0,(longlong)local_e8);
  *(uint *)(pFVar10 + 8) = uVar20;
  lVar2 = *(longlong *)((longlong)this + 8);
  FSHA1::Final(&local_d8);
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  FSHA1::GetHash(&local_d8,(uchar *)&local_198);
  local_200 = CONCAT13(9,(int3)uStack_190);
  local_1a0 = local_200;
  local_1a8 = local_198;
  if (((*(undefined8 **)(lVar2 + 0x20) <= &local_1a8) &&
      (&local_1a8 <
       (undefined8 *)
       ((longlong)*(undefined8 **)(lVar2 + 0x20) + (longlong)*(int *)(lVar2 + 0x2c) * 0xc))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = *(int *)(lVar2 + 0x28);
  if (iVar8 == *(int *)(lVar2 + 0x2c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c,(ForAnyElementType *)(lVar2 + 0x20),(int *)(lVar2 + 0x2c));
  }
  *(int *)(lVar2 + 0x28) = iVar8 + 1;
  lVar2 = *(longlong *)(lVar2 + 0x20);
  *(undefined8 *)(lVar2 + (longlong)iVar8 * 0xc) = local_1a8;
  *(undefined4 *)(lVar2 + (longlong)iVar8 * 0xc + 8) = local_1a0;
  **(longlong **)((longlong)this + 0x20) =
       **(longlong **)((longlong)this + 0x20) + (ulonglong)uVar20;
  puVar5 = *(uint **)((longlong)this + 0x28);
  uVar16 = uVar20;
  if (*puVar5 < uVar20) {
    uVar16 = *puVar5;
  }
  *puVar5 = uVar16;
  puVar5 = *(uint **)((longlong)this + 0x30);
  if (uVar20 < *puVar5) {
    uVar20 = *puVar5;
  }
  *puVar5 = uVar20;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  FSHA1::~FSHA1(&local_d8);
  return;
}

// operator() @ 145df5680

void __thiscall
`FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l2::<lambda_5>::operator()
          (void *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b8 [4];
  uint local_b4;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [4];
  int local_9c;
  ForAnyElementType local_98;
  int local_90 [3];
  uint local_84;
  int local_80;
  uint local_7c;
  longlong local_78;
  FScriptContainerElement *local_70;
  undefined8 local_68;
  ulonglong local_60;
  FScriptContainerElement *local_58;
  
  uVar13 = 0;
  iVar6 = *(int *)(*(longlong *)((longlong)this + 8) + 0x38);
  local_78 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x30);
  local_80 = iVar6;
  if ((iVar6 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar12 = (param_1->AllocatorInstance).Data;
  iVar5 = param_1->ArrayNum;
  pFVar17 = pFVar12 + (longlong)iVar5 * 4;
  uVar8 = uVar13;
  while( true ) {
    if (param_1->ArrayNum != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    uVar15 = (uint)uVar8;
    uVar4 = 0;
    if (pFVar12 == pFVar17) break;
    uVar7 = *(uint *)pFVar12;
    if ((int)uVar7 < iVar6) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar8 = (ulonglong)(uVar15 + *(int *)(local_78 + 0xc + (longlong)(int)uVar7 * 0x18));
    pFVar12 = pFVar12 + 4;
  }
  local_90[2] = uVar15;
  if ((**(uint **)((longlong)this + 0x18) < uVar15) && (iVar6 = param_1->ArrayNum, iVar6 != 1)) {
    iVar5 = (int)(uVar8 / **(uint **)((longlong)this + 0x18)) + 1;
    if (iVar5 < iVar6) {
      iVar6 = iVar5;
    }
    local_9c = iVar6;
    if ((iVar6 < 2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumNewGroups > 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                           ,0x6b1,
                           L"Off by one error in group count calculation? NumNewGroups=%d, GroupSize=%u, MaxUncompressedShaderGroupSize=%u, CurrentShaderGroup.Num()=%d"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90[0] = 0;
    local_90[1] = 0;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar6,&local_98,local_90,local_90 + 1);
    memset(local_98.Data + (longlong)iVar5 * 0x10,0,(longlong)iVar6 << 4);
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar6,&local_b0,(int *)&local_a8,(int *)((longlong)&local_a8 + 4));
    memset(local_b0.Data + (longlong)iVar5 * 4,0,(longlong)iVar6 * 4);
    local_68 = *(undefined8 *)((longlong)this + 8);
    local_res8 = SUB81(this,0);
    AlgoImpl::
    IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,__FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader_::__l2::<lambda_5>::operator()_::__l11::<lambda_1>_>_>
              ((uint *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res8,
               (<lambda_1> *)&local_68);
    local_7c = param_1->ArrayNum;
    uVar8 = (ulonglong)(int)local_7c;
    pFVar17 = (param_1->AllocatorInstance).Data;
    local_58 = pFVar17 + uVar8 * 4;
    while( true ) {
      pFVar12 = local_58;
      local_70 = pFVar17;
      if (param_1->ArrayNum != (int)uVar8) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar17 == pFVar12) break;
      uVar11 = 1;
      local_84 = *(uint *)pFVar17;
      uVar19 = 1;
      uVar7 = 0;
      uVar8 = uVar13;
      uVar16 = uVar13;
      uVar18 = uVar13;
      uVar15 = uVar4;
      if (1 < local_9c) {
        do {
          uVar15 = uVar7;
          if ((int)uVar11 < (int)local_a8) {
            uVar15 = ~uVar11 >> 0x1f;
          }
          local_60 = uVar18;
          if ((uVar15 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar10.Data = local_b0.Data;
          uVar1 = uVar19 * 4;
          uVar9 = (uint)uVar8;
          uVar15 = uVar7;
          if ((int)uVar9 < (int)local_a8) {
            uVar15 = ~uVar9 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar17 = FVar10.Data + uVar1;
          uVar15 = uVar11;
          if (*(uint *)(local_b0.Data + uVar16) <= *(uint *)pFVar17) {
            uVar15 = uVar9;
            uVar1 = uVar16;
          }
          uVar18 = uVar19;
          if (*(uint *)(local_b0.Data + uVar16) <= *(uint *)pFVar17) {
            uVar18 = local_60;
          }
          uVar11 = uVar11 + 1;
          uVar19 = uVar19 + 1;
          uVar8 = (ulonglong)uVar15;
          uVar16 = uVar1;
          pFVar17 = local_70;
        } while ((longlong)uVar19 < (longlong)local_9c);
      }
      uVar11 = local_84;
      uVar9 = uVar7;
      if ((int)uVar15 < local_90[0]) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = local_98.Data + uVar18 * 0x10;
      local_b4 = uVar11;
      if (((*(FScriptContainerElement **)&pFVar12->field_0x0 <= (FScriptContainerElement *)&local_b4
           ) && ((FScriptContainerElement *)&local_b4 <
                 *(FScriptContainerElement **)&pFVar12->field_0x0 +
                 (longlong)*(int *)(pFVar12 + 0xc) * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = *(int *)(pFVar12 + 8);
      if (iVar6 == *(int *)(pFVar12 + 0xc)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar12,(int *)(pFVar12 + 0xc));
      }
      *(int *)(pFVar12 + 8) = iVar6 + 1;
      *(uint *)(*(FScriptContainerElement **)&pFVar12->field_0x0 + (longlong)iVar6 * 4) = local_b4;
      if ((int)uVar11 < local_80) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = *(int *)(local_78 + 0xc + (longlong)(int)uVar11 * 0x18);
      uVar7 = uVar4;
      if ((int)uVar15 < (int)local_a8) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = (ulonglong)local_7c;
      *(int *)(local_b0.Data + uVar18 * 4) = *(int *)(local_b0.Data + uVar18 * 4) + iVar6;
      pFVar17 = pFVar17 + 4;
    }
    iVar6 = (int)local_a8;
    uVar8 = (ulonglong)(int)local_a8;
    pFVar17 = local_b0.Data + uVar8 * 4;
    FVar10.Data = local_b0.Data;
    while( true ) {
      if ((int)uVar8 != iVar6) {
        local_b8[0] = 0;
        `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_b8);
        uVar8 = local_a8 & 0xffffffff;
      }
      if (FVar10.Data == pFVar17) break;
      uVar13 = (ulonglong)((uint)uVar13 + *(int *)FVar10.Data);
      FVar10.Data = FVar10.Data + 4;
    }
    if (((uint)uVar13 != local_90[2]) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewGroupTotalSize == GroupSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                           ,0x6ea,
                           L"Original shader group was of size %u bytes, which was larger than limit %u, but it was split into %d group of total size %u, which is not %u - sizes must agree"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = local_90[0];
    pTVar14 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
              (local_98.Data + (longlong)local_90[0] * 0x10);
    FVar10.Data = local_98.Data;
    while( true ) {
      if (local_90[0] != iVar6) {
        `TCheckedPointerIterator<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_a0);
      }
      if ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)FVar10.Data == pTVar14) break;
      if (((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)FVar10.Data)->ArrayNum != 0) {
        __l2::<lambda_4>::operator()
                  (*(void **)((longlong)this + 0x10),
                   (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)FVar10.Data);
      }
      FVar10.Data = FVar10.Data + 0x10;
    }
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)local_98.Data,local_90[0]);
    if ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)local_98.Data !=
        (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_98.Data);
    }
  }
  else {
    __l2::<lambda_4>::operator()(*(void **)((longlong)this + 0x10),param_1);
  }
  return;
}

// operator() @ 145df5c90

void __thiscall
`FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l2::<lambda_6>::operator()
          (void *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  uint local_58;
  uint local_54;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_50;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_40;
  
  if (**(char **)this == '\0') {
    __l2::<lambda_5>::operator()(*(void **)((longlong)this + 0x10),param_1);
    return;
  }
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = pFVar8 + (longlong)iVar2 * 4;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar1) {
      if ((param_1->ArrayNum != local_40.ArrayNum + local_50.ArrayNum) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentShaderGroup.Num() == NonraytracingShaders.Num() + RaytracingShaders.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                             ,0x710,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_50.ArrayNum != 0) {
        __l2::<lambda_5>::operator()(*(void **)((longlong)this + 0x10),&local_50);
      }
      if (local_40.ArrayNum != 0) {
        __l2::<lambda_5>::operator()(*(void **)((longlong)this + 0x10),&local_40);
      }
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.AllocatorInstance.Data);
      }
      return;
    }
    uVar3 = *(uint *)pFVar8;
    lVar7 = *(longlong *)((longlong)this + 8);
    uVar6 = 0;
    if ((int)uVar3 < *(int *)(lVar7 + 0x48)) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    switch(*(byte *)(*(longlong *)(lVar7 + 0x40) + (longlong)(int)uVar3 * 8) & 0xf) {
    default:
      local_54 = uVar3;
      if (((local_50.AllocatorInstance.Data <= (FScriptContainerElement *)&local_54) &&
          ((FScriptContainerElement *)&local_54 <
           local_50.AllocatorInstance.Data + (longlong)local_50.ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_50.ArrayNum == local_50.ArrayMax) {
        local_50.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_50.AllocatorInstance,&local_50.ArrayMax);
      }
      lVar7 = (longlong)local_50.ArrayNum;
      pFVar8 = pFVar8 + 4;
      local_50.ArrayNum = local_50.ArrayNum + 1;
      *(uint *)(local_50.AllocatorInstance.Data + lVar7 * 4) = local_54;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      local_58 = uVar3;
      if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_40.ArrayNum == local_40.ArrayMax) {
        local_40.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_40.AllocatorInstance,&local_40.ArrayMax);
      }
      lVar7 = (longlong)local_40.ArrayNum;
      pFVar8 = pFVar8 + 4;
      local_40.ArrayNum = local_40.ArrayNum + 1;
      *(uint *)(local_40.AllocatorInstance.Data + lVar7 * 4) = local_58;
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// operator() @ 145df5ff0

int __thiscall
`FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l2::<lambda_7>::operator()
          (void *this,TArrayView<unsigned_int_const_,int> *param_1,
          TArrayView<unsigned_int_const_,int> *param_2)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong local_48;
  
  if ((param_2->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewIndices.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                         ,0x740,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if ((param_2->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = param_2->ArrayNum;
  uVar11 = 0;
  iVar8 = param_1->ArrayNum;
  uVar1 = *param_2->DataPtr;
  iVar6 = (iVar8 - iVar5) + 1;
  if (0 < iVar6) {
    local_48 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar11 < iVar8) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      if (*(uint *)(local_48 + (longlong)param_1->DataPtr) == uVar1) {
        uVar10 = 1;
        lVar9 = 1;
        if ((longlong)iVar5 < 2) {
          return uVar11;
        }
        while( true ) {
          uVar7 = 0;
          if ((int)(uVar10 + uVar11) < iVar8) {
            uVar7 = ~(uVar10 + uVar11) >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
          puVar2 = param_1->DataPtr;
          uVar7 = 0;
          if ((int)uVar10 < param_2->ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
          if (*(uint *)(local_48 + lVar9 * 4 + (longlong)puVar2) != param_2->DataPtr[lVar9]) break;
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 1;
          if (iVar5 <= lVar9) {
            return uVar11;
          }
        }
        iVar8 = param_1->ArrayNum;
      }
      local_48 = local_48 + 4;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar6);
  }
  return -1;
}

// operator() @ 145df6280

void __thiscall
`FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l2::<lambda_8>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  void *this_00;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  TArrayView<unsigned_int_const_,int> local_38;
  TArrayView<unsigned_int_const_,int> local_28;
  
  plVar1 = *(longlong **)((longlong)this + 0x10);
  lVar11 = (longlong)param_1;
  uVar8 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar2 = *(longlong *)this;
  lVar3 = *plVar1;
  uVar8 = 0;
  if (param_1 < *(int *)(lVar2 + 0x58)) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  puVar4 = *(uint **)(lVar3 + lVar11 * 0x10);
  iVar10 = *(int *)(lVar3 + 8 + lVar11 * 0x10);
  lVar2 = *(longlong *)(lVar2 + 0x50);
  this_00 = *(void **)((longlong)this + 0x18);
  if (iVar10 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  puVar5 = *(uint **)(*(longlong *)((longlong)this + 8) + 0x50);
  iVar9 = *(int *)(*(longlong *)((longlong)this + 8) + 0x58);
  if (iVar9 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_38._12_4_ = uStack_4c;
  local_38.ArrayNum = iVar10;
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar9;
  local_38.DataPtr = puVar4;
  local_28.DataPtr = puVar5;
  iVar9 = __l2::<lambda_7>::operator()(this_00,&local_28,&local_38);
  iVar10 = -1;
  if (iVar9 != -1) {
    iVar10 = iVar9;
  }
  *(int *)(lVar2 + lVar11 * 0x10) = iVar10;
  return;
}

// AddRefPreloadedShaderGroup @ 145df7cb0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FIoStoreShaderCodeArchive::AddRefPreloadedShaderGroup(FIoStoreShaderCodeArchive *this,int param_1)

{
  undefined4 uVar1;
  FShaderGroupPreloadEntry **ppFVar2;
  FShaderGroupPreloadEntry *pFVar3;
  FShaderGroupPreloadEntry *pFVar4;
  int local_res10 [2];
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  local_res10[0] = param_1;
  ppFVar2 = TMapBase<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>_>
            ::FindOrAddImpl<int_const_&>
                      ((TMapBase<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>_>
                        *)&this->PreloadedShaderGroups,param_1,local_res10);
  pFVar4 = *ppFVar2;
  if (pFVar4 == (FShaderGroupPreloadEntry *)0x0) {
    pFVar3 = ::operator_new(0x18);
    pFVar4 = (FShaderGroupPreloadEntry *)0x0;
    if (pFVar3 != (FShaderGroupPreloadEntry *)0x0) {
      (pFVar3->PreloadEvent).Reference = (FBaseGraphTask *)0x0;
      (pFVar3->IoRequest).Impl = (FIoRequestImpl *)0x0;
      pFVar3->FramePreloadStarted = 0xffffffff;
      pFVar3->NumRefs = 0;
      pFVar3->bNeverToBePreloaded = 0;
      pFVar4 = pFVar3;
    }
    *ppFVar2 = pFVar4;
  }
  uVar1 = *(undefined4 *)&pFVar4->field_0x14;
  *(uint *)&pFVar4->field_0x14 = (ZPULL(uVar1,0,0x1f) + 1 ^ pFVar4->NumRefs) & 0x7fffffff ^ uVar1;
                    /* WARNING: Could not recover jumptable at 0x000145df7d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  return;
}

// Create @ 145dff090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FIoStoreShaderCodeArchive * __cdecl
FIoStoreShaderCodeArchive::Create(EShaderPlatform param_1,FString *param_2,FIoDispatcher *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  BufCore *pBVar2;
  uchar *puVar3;
  longlong lVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  FIoStoreShaderCodeArchive *pFVar9;
  FString *pFVar10;
  FString *pFVar11;
  FName *pFVar12;
  FEvent *pFVar13;
  FIoBuffer *pFVar14;
  FName FVar15;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory> FVar16;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  FName FVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uchar auVar26 [8];
  undefined1 auStackY_2a8 [32];
  uint local_248 [2];
  FName local_240;
  undefined1 local_238 [8];
  FString local_230;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  FName local_210;
  FName local_208;
  FName local_200 [2];
  FString *local_1f0;
  FName local_1e8;
  FString local_1e0;
  FStatMessage local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  FIoBatch local_1a0;
  FString local_188;
  FMemoryReaderView local_178;
  FName local_c8;
  FName local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  FIoReadOptions local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_1f0 = param_2;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x9d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FIoStoreShaderCodeArchive *)(*pcVar5)();
    return pFVar9;
  }
  local_210 = FGenericDataDrivenShaderPlatformInfo::Infos[param_1].Name;
  pFVar10 = ::FName::ToString(&local_210,&local_a8);
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xa9,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FIoStoreShaderCodeArchive *)(*pcVar5)();
    return pFVar9;
  }
  local_208 = FGenericDataDrivenShaderPlatformInfo::Infos[param_1].ShaderFormat;
  pFVar11 = ::FName::ToString(&local_208,&local_b8);
  ::FString::ConcatFC(&local_188,pFVar11,L"-");
  ::FString::ConcatFF(&local_1e0,&local_188,pFVar10);
  iVar18 = local_1e0.Data.ArrayNum + -1;
  if (local_1e0.Data.ArrayNum == 0) {
    iVar18 = 0;
  }
  pFVar12 = ::FName::FName(&local_c8,iVar18,(wchar_t *)local_1e0.Data.AllocatorInstance.Data,
                           FNAME_Add);
  FVar15 = *pFVar12;
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  local_200[0] = FVar15;
  ::FName::ToString(local_200,&local_98);
  ::FString::PrintfImpl(&local_230,L"%s-%s");
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::ToLowerInline(&local_230);
  local_68.Flags = 0x8000000;
  iVar18 = local_230.Data.ArrayNum + -1;
  FVar6.Data = local_230.Data.AllocatorInstance.Data;
  if (local_230.Data.ArrayNum == 0) {
    iVar18 = 0;
    FVar6.Data = (FScriptContainerElement *)L"";
  }
  local_68.RequestedOffset = CityHash64((char *)FVar6.Data,iVar18 * 2);
  local_68.RequestedSize._0_4_ = local_68.Flags;
  local_68.TargetVa = (void *)local_68.RequestedOffset;
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  bVar7 = FIoDispatcher::DoesChunkExist(param_3,(FIoChunkId *)&local_68);
  if (bVar7) {
    FIoDispatcher::NewBatch(param_3,&local_1a0);
    uStack_1a8 = 0;
    local_1c0 = 0;
    uStack_1b8 = 0xffffffffffffffff;
    local_1b0 = 0;
    local_88 = 0;
    uStack_80 = 0xffffffffffffffff;
    local_78 = 0;
    uStack_70 = 0;
    FIoBatch::Read(&local_1a0,(FIoChunkId *)local_238,&local_68,(int)&local_88);
    pFVar13 = FGenericPlatformProcess::GetSynchEventFromPool(false);
    FIoBatch::IssueAndTriggerEvent(&local_1a0,pFVar13);
    (**(code **)(pFVar13->_padding_ + 0x20))(pFVar13,0xffffffff,0);
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar13);
    pFVar14 = FIoRequest::GetResultOrDie((FIoRequest *)local_238);
    pBVar2 = (pFVar14->CorePtr).Reference;
    uVar8 = pBVar2->DataSizeLow;
    puVar3 = pBVar2->DataPtr;
    if (((int)uVar8 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FIoStoreShaderCodeArchive *)(*pcVar5)();
      return pFVar9;
    }
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    local_178._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_178);
    local_178._padding_ = 0;
    local_178.LimitSize = 0x7fffffffffffffff;
    local_178._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_178.Bytes.Data = puVar3;
    local_178.Bytes.Size = (longlong)(int)uVar8;
    FArchiveState::SetIsLoading((FArchiveState *)&local_178,true);
    (**(code **)(local_178._padding_ + 0x108))(&local_178,0);
    local_178._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_248[0] = 0;
    if (*(uint **)(local_178._padding_ + 8) < *(uint **)local_178._padding_ + 1) {
      if ((local_178._padding_ & 0x10000U) == 0) {
        FMemoryReaderView::Serialize(&local_178,local_248,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_178,local_248);
      }
    }
    else {
      local_248[0] = **(uint **)local_178._padding_;
      *(longlong *)local_178._padding_ = *(longlong *)local_178._padding_ + 4;
    }
    if (local_248[0] == 1) {
      FVar15 = (FName)::operator_new(0x2b8);
      if (FVar15 == (FName)0x0) {
        FVar15.ComparisonIndex.Value = 0;
        FVar15.Number = 0;
        local_240.ComparisonIndex.Value = 0;
        local_240.Number = 0;
      }
      else {
        local_240 = FVar15;
        FRHIShaderLibrary::FRHIShaderLibrary((FRHIShaderLibrary *)FVar15,param_1,param_2);
        ((FRHIShaderLibrary *)((longlong)FVar15 + 0x38))->_padding_ = (longlong)param_3;
        *(undefined ***)FVar15 = &___7FIoStoreShaderCodeArchive__6B_;
        (((FIoStoreShaderCodeArchiveHeader *)((longlong)FVar15 + 0x40))->ShaderMapHashes).
        AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(longlong *)((longlong)FVar15 + 0x48) = 0;
        (((TArray<FSHAHash,TSizedDefaultAllocator<32>_> *)((longlong)FVar15 + 0x50))->
        AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (((FString *)((longlong)FVar15 + 0x58))->Data).AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (((TArray<FIoChunkId,TSizedDefaultAllocator<32>_> *)((longlong)FVar15 + 0x60))->
        AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        *(undefined8 *)((longlong)FVar15 + 0x68) = 0;
        ((FRHIShaderLibrary *)((longlong)FVar15 + 0x70))->_padding_ = 0;
        *(longlong *)((longlong)FVar15 + 0x78) = 0;
        (((TArray<FIoStoreShaderCodeEntry,TSizedDefaultAllocator<32>_> *)((longlong)FVar15 + 0x80))
        ->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        *(undefined8 *)((longlong)FVar15 + 0x88) = 0;
        (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
         &((TArray<FIoStoreShaderGroupEntry,TSizedDefaultAllocator<32>_> *)((longlong)FVar15 + 0x90)
          )->AllocatorInstance)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        *(undefined8 *)((longlong)FVar15 + 0x98) = 0;
        (((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)FVar15 + 0xa0))->
        AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        ((FRHIShaderLibrary *)((longlong)FVar15 + 0xa8))->_padding_ = 0;
        FHashTable::FHashTable((FHashTable *)((longlong)FVar15 + 0xb0),0x400,0);
        FHashTable::FHashTable((FHashTable *)((longlong)FVar15 + 0xd0),0x400,0);
        *(longlong *)((longlong)FVar15 + 0xf0) = 0;
        *(undefined8 *)((longlong)FVar15 + 0xf8) = 0;
        *(undefined8 *)((longlong)FVar15 + 0x110) = 0;
        *(undefined4 *)&((FRHIShaderLibrary *)((longlong)FVar15 + 0x118))->_padding_ = 0;
        *(undefined4 *)((longlong)FVar15 + 0x11c) = 0x80;
        *(undefined4 *)((longlong)FVar15 + 0x120) = 0xffffffff;
        *(undefined4 *)((longlong)FVar15 + 0x124) = 0;
        *(undefined8 *)((longlong)FVar15 + 0x130) = 0;
        *(undefined4 *)&(((FString *)((longlong)FVar15 + 0x138))->Data).AllocatorInstance.Data = 0;
        (((FPlatformRWLock *)((longlong)FVar15 + 0x140))->Mutex).Mutex.Ptr = (void *)0x0;
        FShaderUsageVisualizer::FShaderUsageVisualizer
                  ((FShaderUsageVisualizer *)((longlong)FVar15 + 0x148));
      }
      uVar21 = 0;
      ::operator<<((FArchive *)&local_178,
                   (FIoStoreShaderCodeArchiveHeader *)((longlong)FVar15 + 0x40));
      uVar8 = *(uint *)((longlong)FVar15 + 0x48);
      uVar19 = 1;
      if (uVar8 != 0) {
        uVar19 = uVar8;
      }
      uVar24 = (ulonglong)(uVar19 - 1) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      uVar19 = 1 << ((byte)lVar23 & 0x1f);
      local_220 = (undefined4)lVar23;
      if (0x10000 < uVar19) {
        uVar19 = 0x10000;
      }
      FHashTable::Clear((FHashTable *)((longlong)FVar15 + 0xb0),uVar19,uVar8);
      iVar18 = *(int *)((longlong)FVar15 + 0x48);
      FVar22 = FVar15;
      uVar24 = uVar21;
      uVar25 = uVar21;
      if (0 < (longlong)iVar18) {
        do {
          uVar19 = (uint)uVar21;
          uVar8 = 0;
          if ((int)uVar19 < *(int *)((longlong)FVar15 + 0x48)) {
            uVar8 = ~uVar19 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FIoStoreShaderCodeArchive *)(*pcVar5)();
            return pFVar9;
          }
          uVar8 = *(uint *)((((FIoStoreShaderCodeArchiveHeader *)((longlong)FVar15 + 0x40))->
                            ShaderMapHashes).AllocatorInstance.Data + uVar25);
          if (*(uint *)((longlong)FVar15 + 0xb8) <= uVar19) {
            iVar17 = 1;
            if (uVar19 + 1 != 0) {
              iVar17 = uVar19 + 1;
            }
            uVar21 = (ulonglong)(iVar17 - 1) * 2 + 1;
            lVar23 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            uVar20 = 1 << ((byte)lVar23 & 0x1f);
            local_21c = (undefined4)lVar23;
            if (uVar20 < 0x20) {
              uVar20 = 0x20;
            }
            FHashTable::Resize((FHashTable *)((longlong)FVar15 + 0xb0),uVar20);
          }
          uVar8 = uVar8 & *(uint *)((longlong)FVar15 + 0xb4);
          *(uint *)((((FString *)((longlong)FVar15 + 200))->Data).AllocatorInstance.Data +
                   uVar24 * 4) = (*(uint **)((longlong)FVar15 + 0xc0))[uVar8];
          uVar24 = uVar24 + 1;
          (*(uint **)((longlong)FVar15 + 0xc0))[uVar8] = uVar19;
          uVar21 = (ulonglong)(uVar19 + 1);
          FVar22 = local_240;
          uVar25 = uVar25 + 0x14;
        } while ((longlong)uVar24 < (longlong)iVar18);
      }
      uVar21 = 0;
      uVar8 = *(uint *)&(((FString *)((longlong)FVar22 + 0x58))->Data).AllocatorInstance.Data;
      uVar19 = 1;
      if (uVar8 != 0) {
        uVar19 = uVar8;
      }
      uVar24 = (ulonglong)(uVar19 - 1) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      uVar19 = 1 << ((byte)lVar23 & 0x1f);
      local_218 = (undefined4)lVar23;
      if (0x10000 < uVar19) {
        uVar19 = 0x10000;
      }
      FHashTable::Clear((FHashTable *)((longlong)FVar22 + 0xd0),uVar19,uVar8);
      lVar23 = (longlong)
               *(int *)&(((FString *)((longlong)FVar22 + 0x58))->Data).AllocatorInstance.Data;
      uVar24 = uVar21;
      uVar25 = uVar21;
      if (0 < lVar23) {
        do {
          uVar19 = (uint)uVar21;
          uVar8 = 0;
          if ((int)uVar19 <
              *(int *)&(((FString *)((longlong)FVar22 + 0x58))->Data).AllocatorInstance.Data) {
            uVar8 = ~uVar19 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FIoStoreShaderCodeArchive *)(*pcVar5)();
            return pFVar9;
          }
          uVar8 = *(uint *)((((TArray<FSHAHash,TSizedDefaultAllocator<32>_> *)
                             ((longlong)FVar22 + 0x50))->AllocatorInstance).Data + uVar25);
          if (*(uint *)((longlong)FVar22 + 0xd8) <= uVar19) {
            iVar18 = 1;
            if (uVar19 + 1 != 0) {
              iVar18 = uVar19 + 1;
            }
            uVar21 = (ulonglong)(iVar18 - 1) * 2 + 1;
            lVar4 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            uVar20 = 1 << ((byte)lVar4 & 0x1f);
            local_214 = (undefined4)lVar4;
            if (uVar20 < 0x20) {
              uVar20 = 0x20;
            }
            FHashTable::Resize((FHashTable *)((longlong)FVar22 + 0xd0),uVar20);
          }
          lVar4 = (ulonglong)(*(uint *)((longlong)FVar22 + 0xd4) & uVar8) * 4;
          (*(uint **)((longlong)FVar22 + 0xe8))[uVar24] =
               *(uint *)(lVar4 + ((FRHIShaderLibrary *)((longlong)FVar22 + 0xe0))->_padding_);
          uVar24 = uVar24 + 1;
          *(uint *)(lVar4 + ((FRHIShaderLibrary *)((longlong)FVar22 + 0xe0))->_padding_) = uVar19;
          uVar21 = (ulonglong)(uVar19 + 1);
          uVar25 = uVar25 + 0x14;
        } while ((longlong)uVar24 < lVar23);
      }
      uVar1 = *(undefined4 *)((longlong)FVar22 + 0x88);
      lpCriticalSection = (LPCRITICAL_SECTION)((longlong)FVar22 + 0x148);
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        EnterCriticalSection(lpCriticalSection);
        *(undefined4 *)&(((FString *)((longlong)FVar22 + 0x170))->Data).AllocatorInstance.Data =
             uVar1;
        LeaveCriticalSection(lpCriticalSection);
        if (3 < (byte)LogShaderLibrary._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
        }
        uVar8 = (**(code **)(*(longlong *)FVar22 + 0x40))(FVar22);
        auVar26[4] = '\0';
        auVar26[5] = '\0';
        auVar26[6] = '\0';
        auVar26[7] = '\0';
        auVar26[0] = (char)uVar8;
        auVar26[1] = (char)(uVar8 >> 8);
        auVar26[2] = (char)(uVar8 >> 0x10);
        auVar26[3] = (char)(uVar8 >> 0x18);
        if (uVar8 != 0) {
          FVar16 = StatPtr_STAT_Shaders_ShaderResourceMemory;
          if (StatPtr_STAT_Shaders_ShaderResourceMemory ==
              (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)0x0) {
            pFVar12 = ::FName::FName(&local_c0,"STAT_Shaders_ShaderResourceMemory");
            FVar16 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_Shaders_ShaderResourceMemory,*pFVar12,
                                L"Shader Resource Mem","STATGROUP_Shaders","STATCAT_Advanced",
                                L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
          }
          FVar15 = *(FName *)FVar16;
          local_240 = FVar15;
          if (((FVar15 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this = TlsGetValue(FThreadStats::TlsSlot);
            if (this == (FThreadStats *)0x0) {
              this_00 = FThreadStatsPool::Get();
              this = FThreadStatsPool::GetFromPool(this_00);
            }
            local_1d0.NameAndInfo.Number = FVar15.Number & 0xffffafff | 0xa000;
            local_1e8 = FVar15;
            local_1d0.StatData.Pad = auVar26;
            local_1d0.NameAndInfo.Index.Value = FVar15.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(this,&local_1d0);
            FStatsTrace::Add(&local_1e8,(long64)auVar26);
            if (this->ScopeCount == 0) {
              FThreadStats::Flush(this,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this,false,false);
            }
          }
        }
        FArchive::~FArchive((FArchive *)&local_178);
        FIoRequest::~FIoRequest((FIoRequest *)local_238);
        FIoBatch::~FIoBatch(&local_1a0);
        return (FIoStoreShaderCodeArchive *)FVar22;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    FArchive::~FArchive((FArchive *)&local_178);
    FIoRequest::~FIoRequest((FIoRequest *)local_238);
    FIoBatch::~FIoBatch(&local_1a0);
  }
  return (FIoStoreShaderCodeArchive *)0x0;
}

// CreateIoStoreShaderCodeArchiveHeader @ 145e00000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader
          (FName *param_1,FSerializedShaderArchive *param_2,FIoStoreShaderCodeArchiveHeader *param_3
          )

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  undefined4 uVar5;
  code *pcVar6;
  FSerializedShaderArchive *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FName *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  LPCRITICAL_SECTION p_Var16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  undefined8 *puVar21;
  longlong lVar22;
  ForAnyElementType FVar23;
  void *_Src;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  undefined1 auStackY_a248 [32];
  FIdentityFunctor local_a1f8 [8];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_a1f0;
  undefined1 local_a1e0;
  <lambda_1> local_a1df [7];
  ForAnyElementType local_a1d8;
  undefined8 local_a1d0;
  ForAnyElementType local_a1c8;
  undefined8 local_a1c0;
  int local_a1b8 [4];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_a1a8;
  undefined8 local_a1a0;
  FIoStoreShaderCodeArchiveHeader *local_a198;
  int *local_a190;
  int *local_a188;
  FSerializedShaderArchive *local_a180;
  longlong local_a178;
  undefined8 local_a170;
  undefined1 *local_a168;
  FIoStoreShaderCodeArchiveHeader *local_a160;
  FIoStoreShaderCodeArchiveHeader **local_a158;
  TArrayView<FSHAHash_const_,int> local_a150;
  TArrayView<std::nullptr_t,int> local_a140;
  code *local_a130;
  ForAnyElementType **local_a128;
  ForAnyElementType *local_a120;
  undefined4 local_a118;
  TArrayView<std::nullptr_t,int> local_a110;
  code *local_a100;
  ForAnyElementType **local_a0f8;
  TArrayView<std::nullptr_t,int> local_a0f0;
  code *local_a0e0;
  FIoStoreShaderCodeArchiveHeader **local_a0d8;
  ForAnyElementType *local_a0d0;
  FIoStoreShaderCodeArchiveHeader *local_a0c8;
  _RTL_CRITICAL_SECTION *local_a0c0;
  FIoStoreShaderCodeArchiveHeader *local_a0b8;
  FSerializedShaderArchive *local_a0b0;
  FName **local_a0a8;
  int *local_a0a0;
  FIoStoreShaderCodeArchiveHeader *local_a098;
  FSerializedShaderArchive *local_a090;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> **local_a088;
  <lambda_1> *local_a080;
  FName *local_a078;
  FIoStoreShaderCodeArchiveHeader *local_a070;
  FSerializedShaderArchive *local_a068;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> **local_a060;
  undefined8 *local_a058;
  int *local_a050;
  int *local_a048;
  FName local_a040;
  _RTL_CRITICAL_SECTION local_a038 [1024];
  PRTL_CRITICAL_SECTION_DEBUG local_38;
  undefined8 uStack_30;
  
  uStack_30._0_4_ = 0x45e0001f;
  uStack_30._4_4_ = 1;
  local_38 = (PRTL_CRITICAL_SECTION_DEBUG)(__security_cookie.value ^ (ulonglong)auStackY_a248);
  local_a150.DataPtr = (FSHAHash *)(param_2->ShaderMapHashes).AllocatorInstance.Data;
  iVar9 = (param_2->ShaderMapHashes).ArrayNum;
  local_a198 = param_3;
  local_a180 = param_2;
  if ((iVar9 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_a150.ArrayNum = iVar9;
  TArray<FSHAHash,TSizedDefaultAllocator<32>_>::operator=<FSHAHash_const_,int>
            (&param_3->ShaderMapHashes,&local_a150);
  iVar9 = (param_2->ShaderHashes).ArrayNum;
  pFVar18 = (param_2->ShaderHashes).AllocatorInstance.Data;
  if ((iVar9 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (param_3->ShaderHashes).ArrayNum = iVar9;
  iVar10 = (param_3->ShaderHashes).ArrayMax;
  piVar1 = &(param_3->ShaderHashes).ArrayMax;
  if ((iVar9 == 0) && (iVar10 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar9,iVar10,&(param_3->ShaderHashes).AllocatorInstance,iVar9,piVar1);
    if (iVar9 != 0) {
      memcpy((param_3->ShaderHashes).AllocatorInstance.Data,pFVar18,(longlong)iVar9 * 0x14);
    }
  }
  uVar11 = (param_2->ShaderMapEntries).ArrayNum;
  if ((int)uVar11 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &(param_3->ShaderMapEntries).ArrayMax;
  (param_3->ShaderMapEntries).ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&(param_3->ShaderMapEntries).AllocatorInstance,0,piVar1);
  }
  iVar9 = (param_2->ShaderMapEntries).ArrayNum;
  pFVar18 = (param_2->ShaderMapEntries).AllocatorInstance.Data;
  if ((iVar9 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar24 = pFVar18 + (longlong)iVar9 * 0x10;
  pFVar7 = local_a180;
  for (; local_a180 = pFVar7, pFVar18 != pFVar24; pFVar18 = pFVar18 + 0x10) {
    iVar9 = (param_3->ShaderMapEntries).ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(param_3->ShaderMapEntries).AllocatorInstance,piVar1);
    }
    (param_3->ShaderMapEntries).ArrayNum = iVar9 + 1;
    pFVar3 = (param_3->ShaderMapEntries).AllocatorInstance.Data + (longlong)iVar9 * 8;
    DefaultConstructItems<FIoStoreShaderMapEntry,int>(pFVar3,1);
    *(undefined4 *)pFVar3 = *(undefined4 *)pFVar18;
    *(undefined4 *)(pFVar3 + 4) = *(undefined4 *)(pFVar18 + 4);
    pFVar7 = local_a180;
  }
  iVar9 = (pFVar7->ShaderIndices).ArrayNum;
  pFVar18 = (pFVar7->ShaderIndices).AllocatorInstance.Data;
  if ((iVar9 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = (param_3->ShaderIndices).ArrayMax;
  piVar1 = &(param_3->ShaderIndices).ArrayMax;
  local_a188 = &(param_3->ShaderIndices).ArrayNum;
  *local_a188 = iVar9;
  local_a190 = piVar1;
  if ((iVar9 == 0) && (iVar10 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar9,iVar10,&(param_3->ShaderIndices).AllocatorInstance,iVar9,piVar1);
    local_a188 = &(param_3->ShaderIndices).ArrayNum;
    local_a190 = piVar1;
    if (iVar9 != 0) {
      memcpy((param_3->ShaderIndices).AllocatorInstance.Data,pFVar18,(longlong)iVar9 << 2);
    }
  }
  uVar11 = (pFVar7->ShaderEntries).ArrayNum;
  if ((int)uVar11 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &(param_3->ShaderEntries).ArrayMax;
  (param_3->ShaderEntries).ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&(param_3->ShaderEntries).AllocatorInstance,0,piVar1);
  }
  iVar9 = (pFVar7->ShaderEntries).ArrayNum;
  pFVar18 = (pFVar7->ShaderEntries).AllocatorInstance.Data;
  if ((iVar9 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar24 = pFVar18 + (longlong)iVar9 * 0x18;
  for (; pFVar18 != pFVar24; pFVar18 = pFVar18 + 0x18) {
    iVar9 = (param_3->ShaderEntries).ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(param_3->ShaderEntries).AllocatorInstance,piVar1);
    }
    (param_3->ShaderEntries).ArrayNum = iVar9 + 1;
    pFVar3 = (param_3->ShaderEntries).AllocatorInstance.Data + (longlong)iVar9 * 8;
    DefaultConstructItems<FIoStoreShaderCodeEntry,int>(pFVar3,1);
    *(ulonglong *)pFVar3 =
         ((ulonglong)(byte)pFVar18[0x10] ^ *(ulonglong *)pFVar3) & 0xfffffffffffffff0 ^
         (ulonglong)(byte)pFVar18[0x10];
  }
  pFVar12 = ::FName::FName(&local_a040,"PCD3D_SM5");
  iVar9 = (param_3->ShaderEntries).ArrayNum;
  local_a1e0 = *param_1 == *pFVar12;
  uVar17 = 0;
  local_a1d8.Data = (FScriptContainerElement *)0x0;
  local_a1d0 = 0;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x18,8,iVar9,&local_a1d8,(int *)&local_a1d0,(int *)((longlong)&local_a1d0 + 4)
                     );
  DefaultConstructItems<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
            (local_a1d8.Data + (longlong)iVar10 * 0x18,iVar9);
  p_Var16 = local_a038;
  lVar22 = 0x400;
  do {
    InitializeCriticalSectionAndSpinCount(p_Var16,4000);
    p_Var16 = p_Var16 + 1;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  local_a0d0 = &local_a1d8;
  local_a0c0 = local_a038;
  local_a140.DataPtr = (void **)0x0;
  local_a130 = UE::Core::Private::Function::
               TFunctionRefCaller<`FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l12::<lambda_1>,void,int>
               ::Call;
  local_a128 = &local_a0d0;
  local_a140.ArrayNum = 0;
  local_a0c8 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(param_3->ShaderMapEntries).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_a130,(<lambda_1>)local_a1f8[0],None,
             &local_a140);
  p_Var16 = (LPCRITICAL_SECTION)&local_38;
  lVar22 = 0x400;
  do {
    p_Var16 = p_Var16 + -1;
    DeleteCriticalSection(p_Var16);
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  local_a118 = 0x400;
  local_a120 = &local_a1d8;
  local_a100 = UE::Core::Private::Function::
               TFunctionRefCaller<`FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l13::<lambda_2>,void,int>
               ::Call;
  local_a0f8 = &local_a120;
  local_a110.DataPtr = (void **)0x0;
  local_a110.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             ((int)(((int)local_a1d0 >> 0x1f & 0x3ffU) + (int)local_a1d0) >> 10) + 1,1,
             (TFunctionRef<void___cdecl(int)> *)&local_a100,(<lambda_1>)local_a1f8[0],Unbalanced,
             &local_a110);
  lVar22 = (longlong)(int)local_a1d0;
  uVar13 = uVar17;
  uVar19 = uVar17;
  if (0 < lVar22) {
    do {
      uVar14 = (uint)uVar13;
      uVar11 = 0;
      if ((int)uVar14 < (int)local_a1d0) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((*(int *)(local_a1d8.Data + uVar19 + 0x10) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ShaderToShadermapsArray[Idx].Value.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                             ,0x634,
                             L"Error converting to IoStore archive: shader (index=%d) is not referenced by any of the shadermaps!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar11 = 0;
      if ((int)uVar14 < (int)local_a1d0) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(uint *)(local_a1d8.Data + uVar19) = uVar14;
      lVar22 = lVar22 + -1;
      uVar13 = (ulonglong)(uVar14 + 1);
      uVar19 = uVar19 + 0x18;
    } while (lVar22 != 0);
  }
  AlgoImpl::
  IntroSortInternal<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>,int,FIdentityFunctor,_FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader_::__l2::<lambda_3>_>
            ((TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)local_a1d8.Data,
             (int)local_a1d0,local_a1f8[0],(<lambda_3>)local_a1f8[0]);
  pFVar7 = local_a180;
  iVar9 = (int)local_a1d0;
  uVar13 = (ulonglong)(int)local_a1d0;
  local_a060 = &local_a1a8;
  local_a1b8[0] = 1;
  if (1 < (uint)GShaderCodeLibraryMaxShaderGroupSize) {
    local_a1b8[0] = GShaderCodeLibraryMaxShaderGroupSize;
  }
  local_a058 = &local_a170;
  local_a050 = local_a1b8 + 2;
  local_a048 = local_a1b8 + 1;
  local_a0a8 = &local_a078;
  local_a0a0 = local_a1b8;
  local_a168 = &local_a1e0;
  local_a158 = &local_a0b8;
  local_a170 = 0;
  local_a1b8[1] = 0;
  local_a1a8 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0;
  local_a1a0 = 0;
  local_a1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a1f0.ArrayMax = 0;
  local_a1c8.Data = (FScriptContainerElement *)0x0;
  local_a1c0 = 0;
  pTVar4 = (TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)
           (local_a1d8.Data + uVar13 * 0x18);
  local_a1b8[2] = 0xffffffff;
  local_a068 = local_a180;
  local_a0b0 = local_a180;
  local_a1f0.ArrayNum = 0;
  FVar20.Data = local_a1d8.Data;
  local_a160 = param_3;
  local_a0b8 = param_3;
  local_a078 = param_1;
  local_a070 = param_3;
  do {
    uVar11 = (uint)uVar17;
    if ((int)uVar13 != iVar9) {
      local_a1f8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_a1f8);
      uVar11 = local_a1f0.ArrayNum;
    }
    FVar23.Data = local_a1f0.AllocatorInstance.Data;
    if ((TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)FVar20.Data == pTVar4) {
      if (uVar11 != 0) {
        `FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l2::<lambda_6>::
        operator()(&local_a168,&local_a1f0);
      }
      if (((int)local_a1a0 != (param_3->ShaderGroupEntries).ArrayNum) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StoredGroupShaderIndices.Num() == OutHeader.ShaderGroupEntries.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                             ,0x761,L"We should have stored shader indices for all groups."), bVar8)
         ) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_a088 = &local_a1a8;
      local_a080 = local_a1df;
      local_a090 = pFVar7;
      local_a0e0 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l2::<lambda_8>,void,int>
                   ::Call;
      local_a0d8 = &local_a098;
      local_a0f0.DataPtr = (void **)0x0;
      local_a0f0.ArrayNum = 0;
      local_a098 = param_3;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",(int)local_a1a0,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_a0e0,local_a1df[0],None,&local_a0f0);
      local_a178 = (longlong)(param_3->ShaderGroupEntries).ArrayNum;
      uVar11 = 0;
      if (0 < local_a178) {
        lVar25 = 0;
        lVar22 = 0;
        do {
          uVar14 = 0;
          if ((int)uVar11 < (param_3->ShaderGroupEntries).ArrayNum) {
            uVar14 = ~uVar11 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar18 = (param_3->ShaderGroupEntries).AllocatorInstance.Data;
          if (*(int *)(pFVar18 + lVar22) == -1) {
            uVar14 = 0;
            if ((int)uVar11 < (int)local_a1a0) {
              uVar14 = ~uVar11 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar21 = (undefined8 *)((longlong)&(local_a1a8->AllocatorInstance).Data + lVar22);
            *(int *)(pFVar18 + lVar22) = (local_a198->ShaderIndices).ArrayNum;
            pTVar2 = &local_a198->ShaderIndices;
            if ((pTVar2 == (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)puVar21) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(void*)this != (void*)&Source",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x96e,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = *(int *)(puVar21 + 1);
            if (iVar9 != 0) {
              iVar10 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (4,4,iVar9,&pTVar2->AllocatorInstance,local_a188,local_a190);
              memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 4,(void *)*puVar21,
                     (longlong)iVar9 << 2);
            }
          }
          uVar11 = uVar11 + 1;
          lVar25 = lVar25 + 1;
          lVar22 = lVar22 + 0x10;
          param_3 = local_a198;
        } while (lVar25 < local_a178);
      }
      pFVar7 = local_a180;
      iVar9 = (local_a180->ShaderEntries).ArrayNum;
      if ((iVar9 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((param_3->ShaderEntries).ArrayNum != iVar9) {
        if (((pFVar7->ShaderEntries).ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutHeader.ShaderEntries.Num() == SerializedShaders.GetShaderEntries().Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                           ,0x786,
                           L"Error creating IoStoreShaderArchive header - shader entries differ (%d in IoStore, %d original). Bug in grouping logic?"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (((param_3->ShaderGroupIoHashes).ArrayNum != (param_3->ShaderGroupEntries).ArrayNum) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutHeader.ShaderGroupIoHashes.Num() == OutHeader.ShaderGroupEntries.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                             ,0x788,
                             L"Error creating IoStoreShaderArchive header - mismatch between shader group hashes and descriptors (%d descriptors, %d hashes). Bug in grouping logic?"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((param_3->ShaderGroupEntries).ArrayNum == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutHeader.ShaderGroupEntries.Num() != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                             ,0x789,L"At least one group must have been created"), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (3 < (byte)LogShaderLibrary._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
      }
      if (local_a1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a1c8.Data);
      }
      if ((TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)
          local_a1f0.AllocatorInstance.Data !=
          (TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
        FMemory::Free(local_a1f0.AllocatorInstance.Data);
      }
      DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
                (local_a1a8,(int)local_a1a0);
      if (local_a1a8 != (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_a1a8);
      }
      DestructItems<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
                ((TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)local_a1d8.Data,
                 (int)local_a1d0);
      if ((TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)local_a1d8.Data !=
          (TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
        FMemory::Free(local_a1d8.Data);
      }
      return;
    }
    if (uVar11 == 0) {
      uVar11 = 0;
      if (((local_a1f0.AllocatorInstance.Data <= FVar20.Data) &&
          (FVar20.Data <
           (TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)
           (local_a1f0.AllocatorInstance.Data + (longlong)local_a1f0.ArrayMax * 4))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), uVar11 = local_a1f0.ArrayNum, bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar11 == local_a1f0.ArrayMax) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_a1f0.AllocatorInstance,&local_a1f0.ArrayMax);
      }
      local_a1f0.ArrayNum = uVar11 + 1;
      *(undefined4 *)(local_a1f0.AllocatorInstance.Data + (longlong)(int)uVar11 * 4) =
           *(undefined4 *)FVar20.Data;
      if (&local_a1c8 !=
          (ForAnyElementType *)
          &((TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)FVar20.Data)->field_0x8
         ) {
        iVar10 = *(int *)&((TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)
                          FVar20.Data)->field_0x10;
        _Src = *(void **)&((TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)
                          FVar20.Data)->field_0x8;
        local_a1c0 = CONCAT44(local_a1c0._4_4_,iVar10);
        if (iVar10 == 0) {
          if (local_a1c0._4_4_ == 0) {
LAB_145e00adc:
            local_a1c0 = local_a1c0 & 0xffffffff;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,local_a1c0._4_4_,&local_a1c8,0,(int *)((longlong)&local_a1c0 + 4));
          }
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar10,local_a1c0._4_4_,&local_a1c8,iVar10,
                     (int *)((longlong)&local_a1c0 + 4));
LAB_145e00b0e:
          memcpy(local_a1c8.Data,_Src,(longlong)iVar10 << 2);
        }
      }
    }
    else if (((int)local_a1c0 ==
              *(int *)&((TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)FVar20.Data
                       )->field_0x10) &&
            (((int)local_a1c0 == 0 ||
             (iVar10 = memcmp(local_a1c8.Data,
                              *(void **)&((TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>
                                           *)FVar20.Data)->field_0x8,(longlong)(int)local_a1c0 << 2)
             , iVar10 == 0)))) {
      if ((FVar23.Data <= FVar20.Data) &&
         ((FVar20.Data <
           (TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)
           (FVar23.Data + (longlong)local_a1f0.ArrayMax * 4) &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), FVar23.Data = local_a1f0.AllocatorInstance.Data,
          uVar11 = local_a1f0.ArrayNum, bVar8)))) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar11 == local_a1f0.ArrayMax) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_a1f0.AllocatorInstance,&local_a1f0.ArrayMax);
        FVar23.Data = local_a1f0.AllocatorInstance.Data;
      }
      local_a1f0.ArrayNum = uVar11 + 1;
      *(undefined4 *)
       ((longlong)
        &((TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)FVar23.Data)->field_0x0 +
       (longlong)(int)uVar11 * 4) = *(undefined4 *)FVar20.Data;
    }
    else {
      `FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l2::<lambda_6>::
      operator()(&local_a168,&local_a1f0);
      if (local_a1f0.ArrayNum < 1) {
        iVar15 = 1 - local_a1f0.ArrayNum;
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar15,&local_a1f0.AllocatorInstance,&local_a1f0.ArrayNum,
                            &local_a1f0.ArrayMax);
        memset(local_a1f0.AllocatorInstance.Data + (longlong)iVar10 * 4,0,(longlong)iVar15 << 2);
      }
      else if (1 < local_a1f0.ArrayNum) {
        iVar10 = local_a1f0.ArrayNum - 1;
        if (iVar10 < 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else if (iVar10 == 0) goto LAB_145e00a74;
        iVar15 = (local_a1f0.ArrayNum - iVar10) + -1;
        if (iVar15 != 0) {
          memmove(local_a1f0.AllocatorInstance.Data + 4,
                  local_a1f0.AllocatorInstance.Data + 4 + (longlong)iVar10 * 4,(longlong)iVar15 << 2
                 );
        }
        local_a1f0.ArrayNum = local_a1f0.ArrayNum - iVar10;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_a1f0.AllocatorInstance,local_a1f0.ArrayNum,&local_a1f0.ArrayMax);
      }
LAB_145e00a74:
      uVar5 = *(undefined4 *)FVar20.Data;
      if ((local_a1f0.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)local_a1f0.AllocatorInstance.Data = uVar5;
      if (&local_a1c8 !=
          (ForAnyElementType *)
          &((TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)FVar20.Data)->field_0x8
         ) {
        iVar10 = *(int *)&((TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)
                          FVar20.Data)->field_0x10;
        _Src = *(void **)&((TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_> *)
                          FVar20.Data)->field_0x8;
        local_a1c0 = CONCAT44(local_a1c0._4_4_,iVar10);
        if ((iVar10 == 0) && (local_a1c0._4_4_ == 0)) goto LAB_145e00adc;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar10,local_a1c0._4_4_,&local_a1c8,iVar10,(int *)((longlong)&local_a1c0 + 4)
                  );
        if (iVar10 != 0) goto LAB_145e00b0e;
      }
    }
    uVar13 = local_a1d0 & 0xffffffff;
    FVar20.Data = FVar20.Data + 0x18;
    uVar17 = (ulonglong)(uint)local_a1f0.ArrayNum;
  } while( true );
}

// CreateShader @ 145e01960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FRHIShader> __thiscall
FIoStoreShaderCodeArchive::CreateShader(FIoStoreShaderCodeArchive *this,int param_1,bool param_2)

{
  FMemStackBase *this_00;
  FShaderUsageVisualizer *pFVar1;
  EIoErrorCode EVar2;
  FName FVar3;
  uchar *puVar4;
  FRHIResource *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FNameEntryId FVar14;
  uint uVar15;
  TRefCountPtr<FRHIShader> TVar16;
  FIoStatus *pFVar17;
  FTaskGraphInterface *this_01;
  FScriptContainerElement *pFVar18;
  FIoBuffer *pFVar19;
  uint *puVar20;
  FTlsAutoCleanup *pFVar21;
  undefined4 extraout_var;
  ulong64 uVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersCreated> FVar24;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FCsvProfiler *this_04;
  TCsvPersistentCustomStat<int> *pTVar25;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar26;
  undefined4 in_register_00000014;
  FRHIShader *pFVar27;
  undefined1 *puVar28;
  uint uVar29;
  longlong lVar30;
  TRefCountPtr<FBaseGraphTask> TVar31;
  uint uVar32;
  undefined7 in_register_00000081;
  char in_R9B;
  uint uVar33;
  FName *pFVar34;
  longlong lVar35;
  bool bVar36;
  undefined1 auStackY_3a8 [32];
  undefined1 local_330 [4];
  uint local_32c;
  uint local_328;
  FName local_320;
  FScriptContainerElement *local_318;
  undefined8 local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  uint local_2f8 [2];
  FLLMScope local_2f0;
  FLLMScope local_2ec;
  FLLMScope local_2e8;
  FLLMScope local_2e4;
  FLLMScope local_2e0;
  FLLMScope local_2dc;
  FLLMScope local_2d8;
  FLLMScope local_2d4;
  FLLMScope local_2d0 [2];
  undefined4 local_2c8 [2];
  FRHIResource *local_2c0;
  FRHIResource *local_2b8;
  FRHIResource *local_2b0;
  FRHIResource *local_2a8;
  FRHIResource *local_2a0;
  FRHIResource *local_298;
  FRHIResource *local_290;
  FRHIResource *local_288;
  FRHIResource *local_280;
  FScriptContainerElement *local_278;
  FMemMark local_270;
  FString local_248;
  undefined1 local_238 [16];
  FString local_228;
  TRefCountPtr<FBaseGraphTask> local_218;
  uint local_210;
  undefined4 uStack_20c;
  undefined1 local_208 [4];
  int local_204;
  FMemScope local_200;
  FMemScope local_1f8;
  FMemScope local_1f0;
  FMemScope local_1e8;
  FMemScope local_1e0;
  FMemScope local_1d8;
  FMemScope local_1d0;
  FMemScope local_1c8;
  FName local_1c0;
  FMemScope local_1b8;
  int local_1b0 [2];
  LARGE_INTEGER local_1a8;
  LARGE_INTEGER local_1a0;
  FString local_198;
  FString local_188;
  FStatMessage local_178;
  ulonglong local_168;
  code *local_160;
  undefined1 *local_158;
  FName local_150;
  FIoStatus local_148;
  FString local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  FName local_98;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_90;
  ulonglong local_60;
  
  pFVar27 = (FRHIShader *)CONCAT44(in_register_00000014,param_1);
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  uVar32 = (uint)CONCAT71(in_register_00000081,param_2);
  lVar30 = (longlong)(int)uVar32;
  pFVar23 = (FName *)0x0;
  FLLMScope::FLLMScope(local_2d0,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_1b8,Shaders,true);
  bVar36 = -1 < CpuChannel->Enabled;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2392,"FIoStoreShaderCodeArchive::CreateShader",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
               ,0x958);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2392);
  }
  pFVar27->_padding_ = 0;
  local_32c = ~uVar32 >> 0x1f;
  uVar12 = 0;
  if ((int)uVar32 < (this->Header).ShaderEntries.ArrayNum) {
    uVar12 = local_32c;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    TVar16.Reference = (FRHIShader *)(*pcVar6)();
    return (TRefCountPtr<FRHIShader>)TVar16.Reference;
  }
  local_318 = (this->Header).ShaderEntries.AllocatorInstance.Data;
  uVar12 = (**(code **)(this->_padding_ + 0xa8))
                     (this,CONCAT71(in_register_00000081,param_2) & 0xffffffff);
  local_90.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 4;
  PreloadShaderGroup(this,uVar12,&local_90,
                     (TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>
                      *)0x0);
  AcquireSRWLockShared((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  pFVar34 = pFVar23;
  if (*(int *)&(this->PreloadedShaderGroups).field_0x8 !=
      *(int *)&(this->PreloadedShaderGroups).field_0x34) {
    puVar28 = *(undefined1 **)&(this->PreloadedShaderGroups).field_0x40;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = &(this->PreloadedShaderGroups).field_0x38;
    }
    iVar13 = *(int *)(puVar28 +
                     (ulonglong)(*(int *)&(this->PreloadedShaderGroups).field_0x48 - 1U & uVar12) *
                     4);
    if (iVar13 != -1) {
      do {
        lVar35 = *(longlong *)&this->PreloadedShaderGroups + (longlong)iVar13 * 0x18;
        if (*(uint *)(*(longlong *)&this->PreloadedShaderGroups + (longlong)iVar13 * 0x18) == uVar12
           ) {
          pFVar34 = (FName *)(lVar35 + 8);
          if (lVar35 == 0) {
            pFVar34 = pFVar23;
          }
          if (pFVar34 != (FName *)0x0) goto LAB_145e01b55;
          break;
        }
        iVar13 = *(int *)(lVar35 + 0x10);
      } while (iVar13 != -1);
    }
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("PtrPtr != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCodeArchive.h"
                      ,0x30f,
                      L"The preload entry for a shader group we assumed to exist does not exist!");
  if (bVar11) {
    pcVar6 = (code *)swi(3);
    TVar16.Reference = (FRHIShader *)(*pcVar6)();
    return (TRefCountPtr<FRHIShader>)TVar16.Reference;
  }
LAB_145e01b55:
  FVar3 = *pFVar34;
  local_320 = FVar3;
  ReleaseSRWLockShared((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  pFVar17 = FIoRequest::Status((FIoRequest *)((longlong)FVar3 + 8),&local_148);
  EVar2 = pFVar17->ErrorCode;
  FIoStatus::~FIoStatus(&local_148);
  if (EVar2 == Unknown) {
    FIoRequest::UpdatePriority((FIoRequest *)((longlong)FVar3 + 8),0x7fffffff);
  }
  TVar31.Reference = *(FBaseGraphTask **)FVar3;
  local_218.Reference = TVar31.Reference;
  if (TVar31.Reference == (FBaseGraphTask *)0x0) {
LAB_145e01d94:
    pFVar18 = (FScriptContainerElement *)FIoRequest::GetResult((FIoRequest *)((longlong)FVar3 + 8));
    if (pFVar18 == (FScriptContainerElement *)0x0) {
      uVar29 = 0;
      if ((int)uVar12 < (this->Header).ShaderGroupIoHashes.ArrayNum) {
        uVar29 = ~uVar12 >> 0x1f;
      }
      local_238._0_8_ = pFVar18;
      local_238._8_8_ = pFVar18;
      if ((uVar29 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        TVar16.Reference = (FRHIShader *)(*pcVar6)();
        return (TRefCountPtr<FRHIShader>)TVar16.Reference;
      }
      FIoChunkId::ToString
                ((FIoChunkId *)
                 ((this->Header).ShaderGroupIoHashes.AllocatorInstance.Data +
                 (longlong)(int)uVar12 * 0xc),(FString *)local_238);
      if (2 < (byte)LogShaderLibrary._0_1_) {
        local_328 = GFrameNumber;
        uVar29 = 0;
        if ((int)uVar32 < (this->Header).ShaderHashes.ArrayNum) {
          uVar29 = local_32c;
        }
        if ((uVar29 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          TVar16.Reference = (FRHIShader *)(*pcVar6)();
          return (TRefCountPtr<FRHIShader>)TVar16.Reference;
        }
        local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_248.Data.ArrayNum = 0;
        local_248.Data.ArrayMax = 0;
        BytesToHex((uchar *)((this->Header).ShaderHashes.AllocatorInstance.Data + lVar30 * 0x14),
                   0x14,&local_248);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
        if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.Data.AllocatorInstance.Data);
        }
      }
      if ((FScriptContainerElement *)local_238._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_238._0_8_);
      }
    }
    pFVar19 = FIoRequest::GetResultOrDie((FIoRequest *)((longlong)FVar3 + 8));
    puVar4 = ((pFVar19->CorePtr).Reference)->DataPtr;
    puVar20 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_158 = local_330;
    local_160 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar21 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_160,puVar20);
    this_00 = (FMemStackBase *)(pFVar21 + 2);
    local_270.Top = this_00->Top;
    local_270.SavedChunk = *(FTaggedMemory **)(pFVar21 + 4);
    local_270.bPopped = false;
    local_270.NextTopmostMark = *(FMemMark **)(pFVar21 + 5);
    pFVar21[5] = (FTlsAutoCleanup)&local_270;
    *(int *)(pFVar21 + 6) = *(int *)(pFVar21 + 6) + 1;
    uVar29 = 0;
    if ((int)uVar12 < (this->Header).ShaderGroupEntries.ArrayNum) {
      uVar29 = ~uVar12 >> 0x1f;
    }
    local_270.Mem = this_00;
    if ((uVar29 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      TVar16.Reference = (FRHIShader *)(*pcVar6)();
      return (TRefCountPtr<FRHIShader>)TVar16.Reference;
    }
    lVar35 = (longlong)(int)uVar12;
    pFVar18 = (this->Header).ShaderGroupEntries.AllocatorInstance.Data;
    pFVar19 = FIoRequest::GetResultOrDie((FIoRequest *)((longlong)local_320 + 8));
    local_328 = ((pFVar19->CorePtr).Reference)->DataSizeLow;
    if (*(uint *)(pFVar18 + lVar35 * 0x10 + 0xc) == *(uint *)(pFVar18 + lVar35 * 0x10 + 8)) {
      pFVar18 = (FScriptContainerElement *)
                (puVar4 + (*(ulonglong *)(local_318 + lVar30 * 8) >> 0x22));
    }
    else {
      local_320 = (FName)FMemStackBase::Alloc
                                   (this_00,(ulonglong)*(uint *)(pFVar18 + lVar35 * 0x10 + 8),0x10);
      uVar29 = 0;
      if ((int)uVar32 < (this->Header).ShaderHashes.ArrayNum) {
        uVar29 = local_32c;
      }
      local_168 = (ulonglong)*(uint *)(pFVar18 + lVar35 * 0x10 + 8);
      if ((uVar29 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        TVar16.Reference = (FRHIShader *)(*pcVar6)();
        return (TRefCountPtr<FRHIShader>)TVar16.Reference;
      }
      local_278 = (this->Header).ShaderHashes.AllocatorInstance.Data + lVar30 * 0x14;
      uVar29 = 0;
      if ((int)uVar12 < (this->Header).ShaderGroupIoHashes.ArrayNum) {
        uVar29 = ~uVar12 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        TVar16.Reference = (FRHIShader *)(*pcVar6)();
        return (TRefCountPtr<FRHIShader>)TVar16.Reference;
      }
      local_308 = (this->Header).ShaderGroupIoHashes.AllocatorInstance.Data +
                  (longlong)(int)uVar12 * 0xc;
      FVar14 = FNameEntryId::FromValidEName((EName)local_208);
      local_210 = *(uint *)CONCAT44(extraout_var,FVar14.Value);
      uStack_20c = 0;
      FVar3.Number = 0;
      FVar3.ComparisonIndex.Value = local_210;
      bVar11 = FCompression::UncompressMemory
                         (FVar3,(void *)local_320,local_168,puVar4,(ulonglong)local_328,
                          COMPRESS_NoFlags,0);
      if (!bVar11) {
        FWindowsPlatformMisc::GetCPUBrand(&local_198);
        ::FString::PrintfImpl
                  (&local_188,
                   L"The CPU (%s) may be unstable; for details see http://www.radgametools.com/oodleintel.htm"
                  );
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_228.Data.ArrayNum = 0;
        local_228.Data.ArrayMax = 0;
        BytesToHex((uchar *)local_278,0x14,&local_228);
        local_278 = (FScriptContainerElement *)L"";
        if (local_228.Data.ArrayNum != 0) {
          local_278 = local_228.Data.AllocatorInstance.Data;
        }
        ::LexToString(&local_138,(FIoChunkId *)local_308);
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)&PTR_u_DecompressShade_151155258,
                   (FLogCategoryBase *)&LogShaderLibrary);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
      }
      uVar29 = *(uint *)(pFVar18 + lVar35 * 0x10);
      uVar33 = *(int *)(pFVar18 + lVar35 * 0x10 + 4) + uVar29;
      pFVar18 = (FScriptContainerElement *)
                ((*(ulonglong *)(local_318 + lVar30 * 8) >> 0x22) + (longlong)local_320);
      if (uVar29 < uVar33) {
        pFVar1 = &this->DebugVisualizer;
        do {
          uVar15 = 0;
          if ((int)uVar29 < (this->Header).ShaderIndices.ArrayNum) {
            uVar15 = ~uVar29 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            TVar16.Reference = (FRHIShader *)(*pcVar6)();
            return (TRefCountPtr<FRHIShader>)TVar16.Reference;
          }
          local_2c8[0] = *(undefined4 *)
                          ((this->Header).ShaderIndices.AllocatorInstance.Data +
                          (longlong)(int)uVar29 * 4);
          if (GShaderCodeLibraryVisualizeShaderUsage != 0) {
            if (pFVar1 == (FShaderUsageVisualizer *)0x0) goto LAB_145e02d4a;
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&(this->DebugVisualizer).DecompressedShaders,&local_204,(bool *)local_2c8);
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 < uVar33);
      }
    }
    pFVar10 = local_318;
    local_308 = pFVar18;
    uVar22 = FIoStoreShaderCodeArchiveHeader::GetShaderUncompressedSize(&this->Header,uVar32);
    iStack_300 = (int)uVar22;
    if ((iStack_300 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      TVar16.Reference = (FRHIShader *)(*pcVar6)();
      return (TRefCountPtr<FRHIShader>)TVar16.Reference;
    }
    uVar29 = 0;
    if ((int)uVar32 < (this->Header).ShaderHashes.ArrayNum) {
      uVar29 = local_32c;
    }
    if ((uVar29 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      TVar16.Reference = (FRHIShader *)(*pcVar6)();
      return (TRefCountPtr<FRHIShader>)TVar16.Reference;
    }
    pFVar18 = (this->Header).ShaderHashes.AllocatorInstance.Data + lVar30 * 0x14;
    switch((uint)*(undefined8 *)(pFVar10 + lVar30 * 8) & 0xf) {
    case 0:
      FLLMScope::FLLMScope(&local_2f0,Shaders,false,None,Default,true);
      FMemScope::FMemScope(&local_200,Shaders,true);
      local_128 = (undefined4)local_308;
      uStack_124 = local_308._4_4_;
      iStack_120 = iStack_300;
      uStack_11c = uStack_2fc;
      (**(code **)(GDynamicRHI->_padding_ + 0x78))(GDynamicRHI,&local_2c0);
      FMemScope::~FMemScope(&local_200);
      FLLMScope::~FLLMScope(&local_2f0);
      pFVar5 = (FRHIResource *)pFVar27->_padding_;
      pFVar27->_padding_ = (longlong)local_2c0;
      local_2c0 = (FRHIResource *)0x0;
      if ((pFVar5 != (FRHIResource *)0x0) &&
         (FRHIResource::Release(pFVar5), local_2c0 != (FRHIResource *)0x0)) {
        FRHIResource::Release(local_2c0);
      }
      break;
    case 1:
      FLLMScope::FLLMScope(&local_2ec,Shaders,false,None,Default,true);
      FMemScope::FMemScope(&local_1f8,Shaders,true);
      local_118 = (undefined4)local_308;
      uStack_114 = local_308._4_4_;
      iStack_110 = iStack_300;
      uStack_10c = uStack_2fc;
      (**(code **)(GDynamicRHI->_padding_ + 0x88))(GDynamicRHI,&local_2b8);
      FMemScope::~FMemScope(&local_1f8);
      FLLMScope::~FLLMScope(&local_2ec);
      pFVar5 = (FRHIResource *)pFVar27->_padding_;
      pFVar27->_padding_ = (longlong)local_2b8;
      local_2b8 = (FRHIResource *)0x0;
      if ((pFVar5 != (FRHIResource *)0x0) &&
         (FRHIResource::Release(pFVar5), local_2b8 != (FRHIResource *)0x0)) {
        FRHIResource::Release(local_2b8);
      }
      break;
    case 2:
      FLLMScope::FLLMScope(&local_2e8,Shaders,false,None,Default,true);
      FMemScope::FMemScope(&local_1f0,Shaders,true);
      local_108 = (undefined4)local_308;
      uStack_104 = local_308._4_4_;
      iStack_100 = iStack_300;
      uStack_fc = uStack_2fc;
      (**(code **)(GDynamicRHI->_padding_ + 0x90))(GDynamicRHI,&local_2b0);
      FMemScope::~FMemScope(&local_1f0);
      FLLMScope::~FLLMScope(&local_2e8);
      pFVar5 = (FRHIResource *)pFVar27->_padding_;
      pFVar27->_padding_ = (longlong)local_2b0;
      local_2b0 = (FRHIResource *)0x0;
      if ((pFVar5 != (FRHIResource *)0x0) &&
         (FRHIResource::Release(pFVar5), local_2b0 != (FRHIResource *)0x0)) {
        FRHIResource::Release(local_2b0);
      }
      break;
    case 3:
      FLLMScope::FLLMScope(&local_2e4,Shaders,false,None,Default,true);
      FMemScope::FMemScope(&local_1e8,Shaders,true);
      local_f8 = (undefined4)local_308;
      uStack_f4 = local_308._4_4_;
      iStack_f0 = iStack_300;
      uStack_ec = uStack_2fc;
      (**(code **)(GDynamicRHI->_padding_ + 0x70))(GDynamicRHI,&local_2a8);
      FMemScope::~FMemScope(&local_1e8);
      FLLMScope::~FLLMScope(&local_2e4);
      pFVar5 = (FRHIResource *)pFVar27->_padding_;
      pFVar27->_padding_ = (longlong)local_2a8;
      local_2a8 = (FRHIResource *)0x0;
      if ((pFVar5 != (FRHIResource *)0x0) &&
         (FRHIResource::Release(pFVar5), local_2a8 != (FRHIResource *)0x0)) {
        FRHIResource::Release(local_2a8);
      }
      break;
    case 4:
      FLLMScope::FLLMScope(&local_2e0,Shaders,false,None,Default,true);
      FMemScope::FMemScope(&local_1e0,Shaders,true);
      local_e8 = (undefined4)local_308;
      uStack_e4 = local_308._4_4_;
      iStack_e0 = iStack_300;
      uStack_dc = uStack_2fc;
      (**(code **)(GDynamicRHI->_padding_ + 0x80))(GDynamicRHI,&local_2a0);
      FMemScope::~FMemScope(&local_1e0);
      FLLMScope::~FLLMScope(&local_2e0);
      pFVar5 = (FRHIResource *)pFVar27->_padding_;
      pFVar27->_padding_ = (longlong)local_2a0;
      local_2a0 = (FRHIResource *)0x0;
      if ((pFVar5 != (FRHIResource *)0x0) &&
         (FRHIResource::Release(pFVar5), local_2a0 != (FRHIResource *)0x0)) {
        FRHIResource::Release(local_2a0);
      }
      break;
    case 5:
      FLLMScope::FLLMScope(&local_2dc,Shaders,false,None,Default,true);
      FMemScope::FMemScope(&local_1d8,Shaders,true);
      local_d8 = (undefined4)local_308;
      uStack_d4 = local_308._4_4_;
      iStack_d0 = iStack_300;
      uStack_cc = uStack_2fc;
      (**(code **)(GDynamicRHI->_padding_ + 0xa0))(GDynamicRHI,&local_298);
      FMemScope::~FMemScope(&local_1d8);
      FLLMScope::~FLLMScope(&local_2dc);
      pFVar5 = (FRHIResource *)pFVar27->_padding_;
      pFVar27->_padding_ = (longlong)local_298;
      local_298 = (FRHIResource *)0x0;
      if ((pFVar5 != (FRHIResource *)0x0) &&
         (FRHIResource::Release(pFVar5), local_298 != (FRHIResource *)0x0)) {
        FRHIResource::Release(local_298);
      }
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      if ((GRHIGlobals.RayTracing.Supported != false) &&
         (GRHIGlobals.RayTracing.SupportsShaders != false)) {
        local_a8 = (undefined4)local_308;
        uStack_a4 = local_308._4_4_;
        iStack_a0 = iStack_300;
        uStack_9c = uStack_2fc;
        (**(code **)(GDynamicRHI->_padding_ + 0x4a0))(GDynamicRHI,&local_280);
        pFVar5 = (FRHIResource *)pFVar27->_padding_;
        pFVar27->_padding_ = (longlong)local_280;
        local_280 = (FRHIResource *)0x0;
        if ((pFVar5 != (FRHIResource *)0x0) &&
           (FRHIResource::Release(pFVar5), local_280 != (FRHIResource *)0x0)) {
          FRHIResource::Release(local_280);
        }
      }
      break;
    case 10:
      FLLMScope::FLLMScope(&local_2d8,Shaders,false,None,Default,true);
      FMemScope::FMemScope(&local_1d0,Shaders,true);
      local_c8 = (undefined4)local_308;
      uStack_c4 = local_308._4_4_;
      iStack_c0 = iStack_300;
      uStack_bc = uStack_2fc;
      (**(code **)(GDynamicRHI->_padding_ + 0xa8))(GDynamicRHI,&local_290);
      FMemScope::~FMemScope(&local_1d0);
      FLLMScope::~FLLMScope(&local_2d8);
      pFVar5 = (FRHIResource *)pFVar27->_padding_;
      pFVar27->_padding_ = (longlong)local_290;
      local_290 = (FRHIResource *)0x0;
      if ((pFVar5 != (FRHIResource *)0x0) &&
         (FRHIResource::Release(pFVar5), local_290 != (FRHIResource *)0x0)) {
        FRHIResource::Release(local_290);
      }
      break;
    case 0xb:
      FLLMScope::FLLMScope(&local_2d4,Shaders,false,None,Default,true);
      FMemScope::FMemScope(&local_1c8,Shaders,true);
      local_b8 = (undefined4)local_308;
      uStack_b4 = local_308._4_4_;
      iStack_b0 = iStack_300;
      uStack_ac = uStack_2fc;
      (**(code **)(GDynamicRHI->_padding_ + 0xa8))(GDynamicRHI,&local_288);
      FMemScope::~FMemScope(&local_1c8);
      FLLMScope::~FLLMScope(&local_2d4);
      pFVar5 = (FRHIResource *)pFVar27->_padding_;
      pFVar27->_padding_ = (longlong)local_288;
      local_288 = (FRHIResource *)0x0;
      if ((pFVar5 != (FRHIResource *)0x0) &&
         (FRHIResource::Release(pFVar5), local_288 != (FRHIResource *)0x0)) {
        FRHIResource::Release(local_288);
      }
      break;
    default:
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                          ,0x9d2,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        TVar16.Reference = (FRHIShader *)(*pcVar6)();
        return (TRefCountPtr<FRHIShader>)TVar16.Reference;
      }
    }
    pFVar1 = &this->DebugVisualizer;
    local_2f8[0] = uVar32;
    if (GShaderCodeLibraryVisualizeShaderUsage != 0) {
      if (pFVar1 == (FShaderUsageVisualizer *)0x0) {
LAB_145e02d4a:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&(this->DebugVisualizer).CreatedShaders,local_1b0,(bool *)local_2f8);
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    }
    ReleasePreloadEntry(this,uVar12);
    if (pFVar27->_padding_ != 0) {
      FVar24 = StatPtr_STAT_Shaders_NumShadersCreated;
      if (StatPtr_STAT_Shaders_NumShadersCreated ==
          (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersCreated>)0x0) {
        pFVar23 = ::FName::FName(&local_98,"STAT_Shaders_NumShadersCreated");
        FVar24 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersCreated>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShadersCreated,
                            *pFVar23,L"Num Shaders Created","STATGROUP_Shaders","STATCAT_Advanced",
                            L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar3 = *(FName *)FVar24;
      local_320 = FVar3;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_02 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_02 == (FThreadStats *)0x0) {
          this_03 = FThreadStatsPool::Get();
          this_02 = FThreadStatsPool::GetFromPool(this_03);
        }
        local_178.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
        local_178.StatData.Pad[0] = '\x01';
        local_178.StatData.Pad[1] = '\0';
        local_178.StatData.Pad[2] = '\0';
        local_178.StatData.Pad[3] = '\0';
        local_178.StatData.Pad[4] = '\0';
        local_178.StatData.Pad[5] = '\0';
        local_178.StatData.Pad[6] = '\0';
        local_178.StatData.Pad[7] = '\0';
        local_1c0 = FVar3;
        local_178.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_02,&local_178);
        FStatsTrace::Add(&local_1c0,1);
        if (this_02->ScopeCount == 0) {
          FThreadStats::Flush(this_02,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_02,false,false);
        }
      }
      this_04 = FCsvProfiler::Get();
      uVar32 = _GCsvCategory_Shaders.Index;
      pFVar23 = ::FName::FName(&local_150,L"NumShadersCreated");
      pTVar25 = FCsvProfiler::GetOrCreatePersistentCustomStatInt(this_04,*pFVar23,uVar32,false);
      LOCK();
      pTVar25->Value = (atomic<int>)((int)pTVar25->Value + 1);
      UNLOCK();
      lVar30 = pFVar27->_padding_;
      uVar8 = *(undefined8 *)(pFVar18 + 8);
      *(undefined8 *)(lVar30 + 0xf0) = *(undefined8 *)pFVar18;
      *(undefined8 *)(lVar30 + 0xf8) = uVar8;
      *(undefined4 *)(lVar30 + 0x100) = *(undefined4 *)(pFVar18 + 0x10);
    }
    if (local_270.bPopped == false) {
      if (((local_270.Mem)->TopMark != &local_270) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mem.TopMark == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                              ,0x215,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        TVar16.Reference = (FRHIShader *)(*pcVar6)();
        return (TRefCountPtr<FRHIShader>)TVar16.Reference;
      }
      local_270.bPopped = true;
      (local_270.Mem)->NumMarks = (local_270.Mem)->NumMarks + -1;
      if (local_270.SavedChunk != (local_270.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_270.Mem,local_270.SavedChunk);
      }
      (local_270.Mem)->Top = local_270.Top;
      (local_270.Mem)->TopMark = local_270.NextTopmostMark;
      local_270.Top = (uchar *)0x0;
    }
    TVar31.Reference = local_218.Reference;
    if (local_218.Reference == (FBaseGraphTask *)0x0) goto LAB_145e02ccd;
  }
  else {
    LOCK();
    *(int *)&(TVar31.Reference)->field_0x30 = *(int *)&(TVar31.Reference)->field_0x30 + 1;
    UNLOCK();
    if ((TVar31.Reference)->field_0xd0 != '\0') goto LAB_145e01d94;
    if (in_R9B != '\0') {
      bVar11 = -1 < CpuChannel->Enabled;
      if (bVar11) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2439,"BlockingShaderLoad",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                   ,0x987);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2439);
      }
      QueryPerformanceCounter(&local_1a8);
      dVar7 = (double)local_1a8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      this_01 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(this_01,&local_218,AnyNormalThreadNormalTask);
      QueryPerformanceCounter(&local_1a0);
      dVar9 = __real_408f400000000000;
      dVar7 = (double)local_1a0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7;
      if (((double)GShaderCodeLibraryMaxShaderPreloadWaitTime < dVar7) &&
         (2 < (byte)LogShaderLibrary._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
      }
      if (__CsvProfilerStat2450 == false) {
        FCsvProfilerTrace::OutputInlineStat("PreloadShaderMiss",_GCsvCategory_Shaders.Index);
        __CsvProfilerStat2450 = true;
      }
      FCsvProfiler::RecordCustomStat("PreloadShaderMiss",_GCsvCategory_Shaders.Index,1,Accumulate);
      if (__CsvProfilerStat2451 == false) {
        FCsvProfilerTrace::OutputInlineStat("PreloadShaderWaitTime",_GCsvCategory_Shaders.Index);
        __CsvProfilerStat2451 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("PreloadShaderWaitTime",_GCsvCategory_Shaders.Index,dVar7 * dVar9,Accumulate);
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto LAB_145e01d94;
    }
    ReleasePreloadEntry(this,uVar12);
  }
  LOCK();
  puVar28 = &(TVar31.Reference)->field_0x30;
  iVar13 = *(int *)puVar28;
  *(int *)puVar28 = *(int *)puVar28 + -1;
  UNLOCK();
  if (iVar13 == 1) {
    (*(code *)**(undefined8 **)TVar31.Reference)(TVar31.Reference,1);
  }
LAB_145e02ccd:
  FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_90;
  if (local_90.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar26 = local_90.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar26,local_90.ArrayNum);
  if (local_90.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
  }
  if (bVar36) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_1b8);
  FLLMScope::~FLLMScope(local_2d0);
  return (TRefCountPtr<FRHIShader>)pFVar27;
}

// FindShaderIndex @ 145e0a2d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall
FIoStoreShaderCodeArchive::FindShaderIndex(FIoStoreShaderCodeArchive *this,FSHAHash *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar1 = (this->ShaderHashTable).Hash[(this->ShaderHashTable).HashMask & *(uint *)param_1->Hash];
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return -1;
    }
    uVar5 = 0;
    if ((int)uVar1 < (this->Header).ShaderHashes.ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    lVar7 = (longlong)(int)uVar1;
    pFVar2 = (this->Header).ShaderHashes.AllocatorInstance.Data;
    if (((*(longlong *)(pFVar2 + lVar7 * 0x14) == *(longlong *)param_1->Hash) &&
        (*(longlong *)(pFVar2 + lVar7 * 0x14 + 8) == *(longlong *)(param_1->Hash + 8))) &&
       (*(int *)(pFVar2 + lVar7 * 0x14 + 0x10) == *(int *)(param_1->Hash + 0x10))) {
      return uVar1;
    }
    uVar1 = (this->ShaderHashTable).NextIndex[uVar1];
  }
  pcVar3 = (code *)swi(3);
  iVar6 = (*pcVar3)();
  return iVar6;
}

// FindShaderMapIndex @ 145e0a400

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall
FIoStoreShaderCodeArchive::FindShaderMapIndex(FIoStoreShaderCodeArchive *this,FSHAHash *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar1 = (this->ShaderMapHashTable).Hash
          [(this->ShaderMapHashTable).HashMask & *(uint *)param_1->Hash];
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return -1;
    }
    uVar5 = 0;
    if ((int)uVar1 < (this->Header).ShaderMapHashes.ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    lVar7 = (longlong)(int)uVar1;
    pFVar2 = (this->Header).ShaderMapHashes.AllocatorInstance.Data;
    if (((*(longlong *)(pFVar2 + lVar7 * 0x14) == *(longlong *)param_1->Hash) &&
        (*(longlong *)(pFVar2 + lVar7 * 0x14 + 8) == *(longlong *)(param_1->Hash + 8))) &&
       (*(int *)(pFVar2 + lVar7 * 0x14 + 0x10) == *(int *)(param_1->Hash + 0x10))) {
      return uVar1;
    }
    uVar1 = (this->ShaderMapHashTable).NextIndex[uVar1];
  }
  pcVar3 = (code *)swi(3);
  iVar6 = (*pcVar3)();
  return iVar6;
}

// GetAllShaderIndices @ 145e0ea10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FIoStoreShaderCodeArchive::GetAllShaderIndices
          (FIoStoreShaderCodeArchive *this,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_res10 [2];
  
  uVar5 = 0;
  if (param_1 < (this->Header).ShaderMapEntries.ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Header).ShaderMapEntries.AllocatorInstance.Data + (longlong)param_1 * 8;
  uVar5 = 0;
  if (*(int *)(pFVar1 + 4) != 0) {
    do {
      uVar6 = *(int *)pFVar1 + uVar5;
      uVar4 = 0;
      if ((int)uVar6 < (this->Header).ShaderIndices.ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res10[0] =
           *(int *)((this->Header).ShaderIndices.AllocatorInstance.Data + (longlong)(int)uVar6 * 4);
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>(param_2,local_res10);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(pFVar1 + 4));
  }
  return;
}

// GetGroupIndexForShader @ 145e0f3d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall
FIoStoreShaderCodeArchive::GetGroupIndexForShader(FIoStoreShaderCodeArchive *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Header).ShaderEntries.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return (uint)(*(ulonglong *)
                 ((this->Header).ShaderEntries.AllocatorInstance.Data + (longlong)param_1 * 8) >> 4)
         & 0x3fffffff;
}

// GetNumShaderMaps @ 145e0fb60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall FIoStoreShaderCodeArchive::GetNumShaderMaps(FIoStoreShaderCodeArchive *this)

{
  return (this->Header).ShaderMapEntries.ArrayNum;
}

// GetNumShaders @ 145e0fbc0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall FIoStoreShaderCodeArchive::GetNumShaders(FIoStoreShaderCodeArchive *this)

{
  return (this->Header).ShaderEntries.ArrayNum;
}

// GetNumShadersForShaderMap @ 145e0fc20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall
FIoStoreShaderCodeArchive::GetNumShadersForShaderMap(FIoStoreShaderCodeArchive *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Header).ShaderMapEntries.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->Header).ShaderMapEntries.AllocatorInstance.Data + (longlong)param_1 * 8 + 4
                 );
}

// GetShaderCodeArchiveChunkId @ 145e102f0

FIoChunkId * __cdecl
FIoStoreShaderCodeArchive::GetShaderCodeArchiveChunkId
          (FIoChunkId *__return_storage_ptr__,FString *param_1,FName param_2)

{
  ForAnyElementType FVar1;
  int iVar2;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  local_res18[0] = param_2;
  ::FName::ToString(local_res18,&local_38);
  ::FString::PrintfImpl(&local_28,L"%s-%s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::ToLowerInline(&local_28);
  local_38.Data.ArrayNum = 0x8000000;
  iVar2 = local_28.Data.ArrayNum + -1;
  FVar1.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)CityHash64(FVar1.Data,iVar2 * 2)
  ;
  *(FScriptContainerElement **)__return_storage_ptr__->Id = local_38.Data.AllocatorInstance.Data;
  *(int *)(__return_storage_ptr__->Id + 8) = local_38.Data.ArrayNum;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetShaderCodeChunkId @ 145e10400

FIoChunkId * __cdecl
FIoStoreShaderCodeArchive::GetShaderCodeChunkId
          (FIoChunkId *__return_storage_ptr__,FSHAHash *param_1)

{
  undefined4 local_10;
  
  local_10 = CONCAT13(9,*(undefined3 *)(param_1->Hash + 8));
  *(undefined8 *)__return_storage_ptr__->Id = *(undefined8 *)param_1->Hash;
  *(undefined4 *)(__return_storage_ptr__->Id + 8) = local_10;
  return __return_storage_ptr__;
}

// GetShaderHash @ 145e10630

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FSHAHash * __thiscall
FIoStoreShaderCodeArchive::GetShaderHash
          (FIoStoreShaderCodeArchive *this,FSHAHash *__return_storage_ptr__,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  FSHAHash *pFVar8;
  uint uVar9;
  
  uVar7 = (**(code **)(this->_padding_ + 0x30))(this,param_1,param_2);
  uVar9 = 0;
  if ((int)uVar7 < (this->Header).ShaderHashes.ArrayNum) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSHAHash *)(*pcVar4)();
      return pFVar8;
    }
  }
  pFVar3 = (this->Header).ShaderHashes.AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(int)uVar7 * 0x14;
  uVar5 = *(undefined8 *)(pFVar1 + 8);
  uVar2 = *(undefined4 *)(pFVar3 + (longlong)(int)uVar7 * 0x14 + 0x10);
  *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)pFVar1;
  *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar5;
  *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = uVar2;
  return __return_storage_ptr__;
}

// GetShaderIndex @ 145e10780

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

int __thiscall
FIoStoreShaderCodeArchive::GetShaderIndex(FIoStoreShaderCodeArchive *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < (this->Header).ShaderMapEntries.ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uVar4 = *(int *)((this->Header).ShaderMapEntries.AllocatorInstance.Data + (longlong)param_1 * 8) +
          param_2;
  uVar5 = 0;
  if ((int)uVar4 < (this->Header).ShaderIndices.ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((this->Header).ShaderIndices.AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
}

// GetShaderMapHash @ 145e10950

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FSHAHash * __thiscall
FIoStoreShaderCodeArchive::GetShaderMapHash
          (FIoStoreShaderCodeArchive *this,FSHAHash *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  FSHAHash *pFVar8;
  
  uVar7 = 0;
  if (param_1 < (this->Header).ShaderMapHashes.ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSHAHash *)(*pcVar4)();
      return pFVar8;
    }
  }
  pFVar3 = (this->Header).ShaderMapHashes.AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)param_1 * 0x14;
  uVar5 = *(undefined8 *)(pFVar1 + 8);
  uVar2 = *(undefined4 *)(pFVar3 + (longlong)param_1 * 0x14 + 0x10);
  *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)pFVar1;
  *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar5;
  *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = uVar2;
  return __return_storage_ptr__;
}

// GetShaderSizeBytes @ 145e10da0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

uint __thiscall
FIoStoreShaderCodeArchive::GetShaderSizeBytes(FIoStoreShaderCodeArchive *this,int param_1)

{
  ulong64 uVar1;
  
  uVar1 = FIoStoreShaderCodeArchiveHeader::GetShaderUncompressedSize(&this->Header,param_1);
  return (uint)uVar1;
}

// GetSizeBytes @ 145e11590

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

uint __thiscall FIoStoreShaderCodeArchive::GetSizeBytes(FIoStoreShaderCodeArchive *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)&(this->PreloadedShaderGroups).field_0x48;
  iVar2 = uVar1 * 4;
  if (uVar1 < 2) {
    iVar2 = 0;
  }
  return iVar2 + (((this->Header).ShaderGroupIoHashes.ArrayMax +
                  *(int *)&(this->PreloadedShaderGroups).field_0xc * 2) * 3 + 0xca +
                  ((this->Header).ShaderEntries.ArrayMax +
                   (this->Header).ShaderGroupEntries.ArrayMax * 2 +
                  (this->Header).ShaderMapEntries.ArrayMax) * 2 +
                  ((this->Header).ShaderHashes.ArrayMax + (this->Header).ShaderMapHashes.ArrayMax) *
                  5 + (*(int *)&(this->PreloadedShaderGroups).field_0x2c + 0x1fU >> 5) +
                 (this->Header).ShaderIndices.ArrayMax) * 4;
}

// GroupOnlyContainsRaytracingShaders @ 145e15af0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FIoStoreShaderCodeArchive::GroupOnlyContainsRaytracingShaders
          (FIoStoreShaderCodeArchive *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 0;
  if (param_1 < (this->Header).ShaderGroupEntries.ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (this->Header).ShaderGroupEntries.AllocatorInstance.Data;
  uVar7 = *(uint *)(pFVar1 + (longlong)param_1 * 0x10);
  uVar8 = *(int *)(pFVar1 + (longlong)param_1 * 0x10 + 4) + uVar7;
  while( true ) {
    if (uVar8 <= uVar7) {
      return true;
    }
    uVar5 = 0;
    if ((int)uVar7 < (this->Header).ShaderIndices.ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    uVar5 = *(uint *)((this->Header).ShaderIndices.AllocatorInstance.Data + (longlong)(int)uVar7 * 4
                     );
    uVar6 = 0;
    if ((int)uVar5 < (this->Header).ShaderEntries.ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    switch((byte)(this->Header).ShaderEntries.AllocatorInstance.Data[(longlong)(int)uVar5 * 8] & 0xf
          ) {
    default:
      return false;
    case 6:
    case 7:
    case 8:
    case 9:
      uVar7 = uVar7 + 1;
    }
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// IsNativeLibrary @ 145e19b70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FIoStoreShaderCodeArchive::IsNativeLibrary(FIoStoreShaderCodeArchive *this)

{
  return false;
}

// IsPreloading @ 145e19c90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FIoStoreShaderCodeArchive::IsPreloading
          (FIoStoreShaderCodeArchive *this,int param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  longlong lVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar2;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar9;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar10;
  undefined1 *puVar11;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res8,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Shaders,true);
  uVar7 = (**(code **)(this->_padding_ + 0xa8))(this,param_1);
  AcquireSRWLockShared((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  if (*(int *)&(this->PreloadedShaderGroups).field_0x8 !=
      *(int *)&(this->PreloadedShaderGroups).field_0x34) {
    puVar11 = *(undefined1 **)&(this->PreloadedShaderGroups).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->PreloadedShaderGroups).field_0x38;
    }
    iVar8 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->PreloadedShaderGroups).field_0x48 - 1U & uVar7) * 4)
    ;
    if (iVar8 != -1) {
      do {
        lVar1 = *(longlong *)&this->PreloadedShaderGroups + (longlong)iVar8 * 0x18;
        if (*(uint *)(*(longlong *)&this->PreloadedShaderGroups + (longlong)iVar8 * 0x18) == uVar7)
        {
          pFVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0;
          }
          if (pFVar10 != (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
            FVar2 = *pFVar10;
            if ((*(longlong *)FVar2 != 0) && (*(char *)(*(longlong *)FVar2 + 0xd0) == '\0')) {
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
              if (FVar3 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                FVar9 = FVar3;
              }
              if ((ulonglong)FVar9 <= (ulonglong)FVar2) {
                FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
                if (FVar3 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                  FVar9 = FVar3;
                }
                if (((ulonglong)FVar2 <
                     (ulonglong)((longlong)FVar9 + (longlong)param_2->ArrayMax * 8)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
              }
              iVar8 = param_2->ArrayNum;
              if (iVar8 == param_2->ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                                  (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
              }
              param_2->ArrayNum = iVar8 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              if (FVar3 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                param_2 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                           *)FVar3;
              }
              *(undefined8 *)((longlong)param_2 + (longlong)iVar8 * 8) = 0;
              lVar1 = *(longlong *)FVar2;
              *(longlong *)((longlong)param_2 + (longlong)iVar8 * 8) = lVar1;
              if (lVar1 != 0) {
                LOCK();
                *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 1;
                UNLOCK();
              }
              bVar5 = true;
              goto LAB_145e19d5a;
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x10);
      } while (iVar8 != -1);
    }
  }
  bVar5 = false;
LAB_145e19d5a:
  ReleaseSRWLockShared((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return bVar5;
}

// MarkPreloadEntrySkipped @ 145e1ba00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FIoStoreShaderCodeArchive::MarkPreloadEntrySkipped(FIoStoreShaderCodeArchive *this,int param_1)

{
  undefined1 *puVar1;
  atomic<float> aVar2;
  undefined4 uVar3;
  FName FVar4;
  float fVar5;
  atomic<float> aVar6;
  FShaderGroupPreloadEntry **ppFVar7;
  FShaderGroupPreloadEntry *pFVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FCsvProfiler *this_02;
  TCsvPersistentCustomStat<float> *pTVar11;
  FShaderGroupPreloadEntry *pFVar12;
  uint uVar13;
  bool bVar14;
  FName local_res8;
  atomic<float> local_res10 [2];
  FStatMessage local_28;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  local_res10[0] = (atomic<float>)param_1;
  ppFVar7 = TMapBase<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>_>
            ::FindOrAddImpl<int_const_&>
                      ((TMapBase<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>_>
                        *)&this->PreloadedShaderGroups,param_1,(int *)local_res10);
  pFVar12 = *ppFVar7;
  if (pFVar12 == (FShaderGroupPreloadEntry *)0x0) {
    pFVar8 = ::operator_new(0x18);
    pFVar12 = (FShaderGroupPreloadEntry *)0x0;
    if (pFVar8 != (FShaderGroupPreloadEntry *)0x0) {
      (pFVar8->PreloadEvent).Reference = (FBaseGraphTask *)0x0;
      (pFVar8->IoRequest).Impl = (FIoRequestImpl *)0x0;
      pFVar8->FramePreloadStarted = 0xffffffff;
      pFVar8->NumRefs = 0;
      pFVar8->bNeverToBePreloaded = 0;
      pFVar12 = pFVar8;
    }
    *ppFVar7 = pFVar12;
  }
  puVar1 = &pFVar12->field_0x14;
  uVar3 = *(undefined4 *)puVar1;
  uVar13 = (pFVar12->NumRefs + 1 ^ pFVar12->NumRefs) & 0x7fffffff ^ uVar3;
  *(uint *)&pFVar12->field_0x14 = uVar13;
  if (ZPULL(uVar3,0,0x1f) == 0) {
    *(uint *)&pFVar12->field_0x14 = uVar13 | 0x80000000;
    FVar10 = StatPtr_STAT_Shaders_ShaderPreloadMemory;
    if (StatPtr_STAT_Shaders_ShaderPreloadMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)0x0) {
      pFVar9 = ::FName::FName(&local_res8,"STAT_Shaders_ShaderPreloadMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderPreloadMemory,
                          *pFVar9,L"Shader Preload Mem","STATGROUP_Shaders","STATCAT_Advanced",
                          L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar4 = *(FName *)FVar10;
    local_res8 = FVar4;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
      local_28.StatData.Pad[0] = '\x18';
      local_28.StatData.Pad[1] = '\0';
      local_28.StatData.Pad[2] = '\0';
      local_28.StatData.Pad[3] = '\0';
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_res8 = FVar4;
      local_28.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,0x18);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
    this_02 = FCsvProfiler::Get();
    uVar13 = _GCsvCategory_Shaders.Index;
    pFVar9 = ::FName::FName(&local_res8,L"PreloadedShaderMB");
    pTVar11 = FCsvProfiler::GetOrCreatePersistentCustomStatFloat(this_02,*pFVar9,uVar13,false);
    fVar5 = __real_37c00000;
    local_res10[0] = pTVar11->Value;
    aVar6 = local_res10[0];
    do {
      LOCK();
      aVar2 = pTVar11->Value;
      bVar14 = aVar6 == aVar2;
      if (bVar14) {
        pTVar11->Value = (atomic<float>)((float)aVar6 + fVar5);
        aVar2 = aVar6;
      }
      aVar6 = aVar2;
      UNLOCK();
    } while (!bVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x000145e1bc6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  return;
}

// PreloadShader @ 145e1e210

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FIoStoreShaderCodeArchive::PreloadShader
          (FIoStoreShaderCodeArchive *this,int param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FShaderUsageVisualizer *lpCriticalSection;
  bool bVar1;
  int iVar2;
  int local_res8 [2];
  FLLMScope local_res10 [2];
  int local_res20 [2];
  FMemScope local_28 [2];
  
  FLLMScope::FLLMScope(local_res10,Shaders,false,None,Default,true);
  FMemScope::FMemScope(local_28,Shaders,true);
  lpCriticalSection = &this->DebugVisualizer;
  local_res8[0] = param_1;
  if (GShaderCodeLibraryVisualizeShaderUsage != 0) {
    if (lpCriticalSection == (FShaderUsageVisualizer *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&(this->DebugVisualizer).ExplicitlyPreloadedShaders,local_res20,(bool *)local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  iVar2 = (**(code **)(this->_padding_ + 0xa8))(this,param_1);
  bVar1 = PreloadShaderGroup(this,iVar2,param_2,
                             (TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>
                              *)0x0);
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_res10);
  return bVar1;
}

// PreloadShaderGroup @ 145e1e980

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FIoStoreShaderCodeArchive::PreloadShaderGroup
          (FIoStoreShaderCodeArchive *this,int param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>
                   *param_3)

{
  uchar *puVar1;
  int *piVar2;
  atomic<float> aVar3;
  FName FVar4;
  undefined8 *puVar5;
  longlong lVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  atomic<float> aVar11;
  int iVar12;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar13;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar14;
  FIoStatus *this_00;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory> FVar16;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FCsvProfiler *this_03;
  TCsvPersistentCustomStat<float> *pTVar17;
  FIoBuffer *pFVar18;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar19;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar20;
  uchar auVar21 [8];
  uint uVar22;
  float fVar23;
  int local_res10 [2];
  FIoRequest local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FStatMessage local_88;
  FIoStatus local_78;
  FIoStoreShaderCodeArchive *local_68;
  TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)> *local_60;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_58;
  int local_50;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  local_res10[0] = param_1;
  pFVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)
            TMapBase<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>_>
            ::FindOrAddImpl<int_const_&>
                      ((TMapBase<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>_>
                        *)&this->PreloadedShaderGroups,param_1,local_res10);
  FVar20 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  FVar14 = *pFVar13;
  if (*pFVar13 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)::operator_new(0x18);
    if (FVar14 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      *(longlong *)FVar14 = 0;
      ((FIoRequest *)((longlong)FVar14 + 8))->Impl = (FIoRequestImpl *)0x0;
      *(uint *)((longlong)FVar14 + 0x10) = 0xffffffff;
      puVar1 = (uchar *)((longlong)FVar14 + 0x14);
      puVar1[0] = '\0';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
      FVar20 = FVar14;
    }
    *pFVar13 = FVar20;
    FVar14 = FVar20;
  }
  if ((*(int *)((longlong)FVar14 + 0x14) < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!PreloadEntry.bNeverToBePreloaded",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                         ,0x816,
                         L"We are preloading a shader group (index=%d) that shouldn\'t be preloaded in this run (e.g. raytracing shaders on D3D11)."
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  uVar22 = *(uint *)((longlong)FVar14 + 0x14);
  *(uint *)((longlong)FVar14 + 0x14) = (uVar22 + 1 ^ uVar22) & 0x7fffffff ^ uVar22;
  local_68 = this;
  local_60 = param_3;
  local_58 = FVar14;
  local_50 = param_1;
  this_00 = FIoRequest::Status((FIoRequest *)((longlong)FVar14 + 8),&local_78);
  bVar9 = FIoStatus::operator==(this_00,&FIoStatus::Invalid);
  FIoStatus::~FIoStatus(&local_78);
  if (bVar9) {
    `FIoStoreShaderCodeArchive::PreloadShaderGroup'::__l2::<lambda_1>::operator()(&local_68);
    uVar22 = 0;
    if (param_1 < (this->Header).ShaderGroupEntries.ArrayNum) {
      uVar22 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    uVar22 = *(int *)((this->Header).ShaderGroupEntries.AllocatorInstance.Data +
                     (longlong)param_1 * 0x10 + 0xc) + 0x18;
    auVar21[4] = '\0';
    auVar21[5] = '\0';
    auVar21[6] = '\0';
    auVar21[7] = '\0';
    auVar21._0_4_ = uVar22;
    if (uVar22 != 0) {
      FVar16 = StatPtr_STAT_Shaders_ShaderPreloadMemory;
      if (StatPtr_STAT_Shaders_ShaderPreloadMemory ==
          (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)0x0) {
        pFVar15 = ::FName::FName(&local_98,"STAT_Shaders_ShaderPreloadMemory");
        FVar16 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderPreloadMemory,
                            *pFVar15,L"Shader Preload Mem","STATGROUP_Shaders","STATCAT_Advanced",
                            L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar4 = *(FName *)FVar16;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        local_88.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
        local_a0 = FVar4;
        local_88.StatData.Pad = auVar21;
        local_88.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_01,&local_88);
        FStatsTrace::Add(&local_a0,(long64)auVar21);
        if (this_01->ScopeCount == 0) {
          FThreadStats::Flush(this_01,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
      }
    }
    this_03 = FCsvProfiler::Get();
    uVar8 = _GCsvCategory_Shaders.Index;
    pFVar15 = ::FName::FName(&local_90,L"PreloadedShaderMB");
    fVar23 = (float)uVar22 * __real_35800000;
    pTVar17 = FCsvProfiler::GetOrCreatePersistentCustomStatFloat(this_03,*pFVar15,uVar8,false);
    aVar11 = pTVar17->Value;
    do {
      LOCK();
      aVar3 = pTVar17->Value;
      bVar9 = aVar11 == aVar3;
      if (bVar9) {
        pTVar17->Value = (atomic<float>)((float)aVar11 + fVar23);
        aVar3 = aVar11;
      }
      aVar11 = aVar3;
      UNLOCK();
    } while (!bVar9);
  }
  else if (((*(longlong *)FVar14 != 0) && (*(char *)(*(longlong *)FVar14 + 0xd0) != '\0')) &&
          (pFVar18 = FIoRequest::GetResult((FIoRequest *)((longlong)FVar14 + 8)),
          pFVar18 == (FIoBuffer *)0x0)) {
    FIoRequest::Cancel((FIoRequest *)((longlong)FVar14 + 8));
    local_a8.Impl = (FIoRequestImpl *)0x0;
    FIoRequest::operator=((FIoRequest *)((longlong)FVar14 + 8),&local_a8);
    FIoRequest::~FIoRequest(&local_a8);
    puVar5 = *(undefined8 **)FVar14;
    if (puVar5 != (undefined8 *)0x0) {
      *(longlong *)FVar14 = 0;
      LOCK();
      piVar2 = (int *)(puVar5 + 6);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    `FIoStoreShaderCodeArchive::PreloadShaderGroup'::__l2::<lambda_1>::operator()(&local_68);
  }
  if (((param_3 ==
        (TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)> *)0x0) &&
      (*(longlong *)FVar14 != 0)) && (*(char *)(*(longlong *)FVar14 + 0xd0) == '\0')) {
    FVar20 = (param_2->AllocatorInstance).SecondaryData;
    FVar19 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
    if (FVar20 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar19 = FVar20;
    }
    if ((ulonglong)FVar19 <= (ulonglong)FVar14) {
      FVar19 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
      if (FVar20 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar19 = FVar20;
      }
      if (((ulonglong)FVar14 < (ulonglong)((longlong)FVar19 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
    }
    iVar12 = param_2->ArrayNum;
    if (iVar12 == param_2->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                         (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar12 + 1;
    FVar20 = (param_2->AllocatorInstance).SecondaryData;
    if (FVar20 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      param_2 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar20;
    }
    *(undefined8 *)((longlong)param_2 + (longlong)iVar12 * 8) = 0;
    lVar6 = *(longlong *)FVar14;
    *(longlong *)((longlong)param_2 + (longlong)iVar12 * 8) = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + 1;
      UNLOCK();
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  return true;
}

// PreloadShaderMap @ 145e1eeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FIoStoreShaderCodeArchive::PreloadShaderMap
          (FIoStoreShaderCodeArchive *this,int param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FShaderUsageVisualizer *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  TEventRef<unsigned_int> TVar11;
  FWriteBuffer *pFVar12;
  wchar_t *pwVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStackY_b8 [32];
  FLLMScope local_84;
  undefined4 local_80 [2];
  undefined8 local_78;
  int local_70;
  FName local_6c;
  FMemScope local_60;
  FName local_58;
  undefined4 *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  FLLMScope::FLLMScope(&local_84,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_60,Shaders,true);
  if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
    local_78 = 0;
    TVar11 = (TEventRef<unsigned_int>)&local_78;
  }
  else {
    if ((int)this->_padding_ == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)this->_padding_;
    }
    ::FName::FName(&local_6c,pwVar13);
    TVar11 = FStringTrace::GetNameRef(&local_58);
  }
  uVar3 = *(undefined8 *)TVar11;
  bVar6 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>((TLogScope<0> *)&local_50)
    ;
    bVar6 = true;
    *local_50 = (int)uVar3;
    *(undefined8 *)(local_48 + 0x28) = *(undefined8 *)(local_48 + 0x20);
  }
  uVar15 = 0;
  if (param_1 < (this->Header).ShaderMapEntries.ArrayNum) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar15 = 0;
  pFVar1 = (this->Header).ShaderMapEntries.AllocatorInstance.Data + (longlong)param_1 * 8;
  if (*(int *)(pFVar1 + 4) != 0) {
    do {
      uVar14 = *(int *)pFVar1 + uVar15;
      uVar9 = 0;
      if ((int)uVar14 < (this->Header).ShaderIndices.ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      uVar2 = *(undefined4 *)
               ((this->Header).ShaderIndices.AllocatorInstance.Data + (longlong)(int)uVar14 * 4);
      iVar10 = (**(code **)(this->_padding_ + 0xa8))(this,uVar2);
      if ((GRHIGlobals.IsRHIInitialized == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("GRHIGlobals.IsRHIInitialized",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderUtils.cpp"
                             ,0x6fd,
                             L"IsRayTracingAllowed() may only be called once RHI is initialized."),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (((GRayTracingMode != Disabled) ||
          (bVar7 = ::`anonymous_namespace'::IsCreateShadersOnLoadEnabled(), bVar7)) ||
         (bVar7 = GroupOnlyContainsRaytracingShaders(this,iVar10), !bVar7)) {
        lpCriticalSection = &this->DebugVisualizer;
        local_80[0] = uVar2;
        if (GShaderCodeLibraryVisualizeShaderUsage != 0) {
          if (lpCriticalSection == (FShaderUsageVisualizer *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&(this->DebugVisualizer).ExplicitlyPreloadedShaders,&local_70,(bool *)local_80)
          ;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        PreloadShaderGroup(this,iVar10,param_2,
                           (TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>
                            *)0x0);
      }
      else {
        MarkPreloadEntrySkipped(this,iVar10);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(pFVar1 + 4));
  }
  if (bVar6) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar12 = *(FWriteBuffer **)(lVar4 + 0x20);
    if ((int)pFVar12 - *(int *)&pFVar12->Cursor < 1) {
      pFVar12 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar12->Cursor = '\n';
    pFVar12->Cursor = pFVar12->Cursor + 1;
    pFVar12->Committed = pFVar12->Cursor;
  }
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(&local_84);
  return true;
}

// PreloadShaderMap @ 145e1f200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FIoStoreShaderCodeArchive::PreloadShaderMap
          (FIoStoreShaderCodeArchive *this,int param_1,
          TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)> *param_2
          )

{
  FShaderUsageVisualizer *lpCriticalSection;
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  TEventRef<unsigned_int> TVar9;
  FWriteBuffer *pFVar10;
  uint uVar11;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar12;
  wchar_t *pwVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStackY_f8 [32];
  FLLMScope local_c4;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  int local_b0;
  FName local_ac;
  TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)> *local_a0;
  FScriptContainerElement *local_98;
  FMemScope local_90;
  FName local_88;
  undefined4 *local_80;
  longlong local_78;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a0 = param_2;
  FLLMScope::FLLMScope(&local_c4,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_90,Shaders,true);
  uVar15 = 0;
  if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
    local_b8 = 0;
    TVar9 = (TEventRef<unsigned_int>)&local_b8;
  }
  else {
    if ((int)this->_padding_ == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)this->_padding_;
    }
    ::FName::FName(&local_ac,pwVar13);
    TVar9 = FStringTrace::GetNameRef(&local_88);
  }
  uVar2 = *(undefined8 *)TVar9;
  bVar5 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>((TLogScope<0> *)&local_80)
    ;
    bVar5 = true;
    *local_80 = (int)uVar2;
    *(undefined8 *)(local_78 + 0x28) = *(undefined8 *)(local_78 + 0x20);
  }
  uVar11 = 0;
  if (param_1 < (this->Header).ShaderMapEntries.ArrayNum) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_98 = (this->Header).ShaderMapEntries.AllocatorInstance.Data + (longlong)param_1 * 8;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 4;
  if (*(int *)(local_98 + 4) != 0) {
    do {
      uVar14 = *(int *)local_98 + uVar15;
      uVar11 = 0;
      if ((int)uVar14 < (this->Header).ShaderIndices.ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      uVar1 = *(undefined4 *)
               ((this->Header).ShaderIndices.AllocatorInstance.Data + (longlong)(int)uVar14 * 4);
      iVar8 = (**(code **)(this->_padding_ + 0xa8))(this,uVar1);
      if ((GRHIGlobals.IsRHIInitialized == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("GRHIGlobals.IsRHIInitialized",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderUtils.cpp"
                             ,0x6fd,
                             L"IsRayTracingAllowed() may only be called once RHI is initialized."),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if (((GRayTracingMode != Disabled) ||
          (bVar6 = ::`anonymous_namespace'::IsCreateShadersOnLoadEnabled(), bVar6)) ||
         (bVar6 = GroupOnlyContainsRaytracingShaders(this,iVar8), !bVar6)) {
        lpCriticalSection = &this->DebugVisualizer;
        local_c0[0] = uVar1;
        if (GShaderCodeLibraryVisualizeShaderUsage != 0) {
          if (lpCriticalSection == (FShaderUsageVisualizer *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&(this->DebugVisualizer).ExplicitlyPreloadedShaders,&local_b0,(bool *)local_c0)
          ;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        PreloadShaderGroup(this,iVar8,&local_70,local_a0);
      }
      else {
        MarkPreloadEntrySkipped(this,iVar8);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(local_98 + 4));
  }
  FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar12 = local_70.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar12,local_70.ArrayNum);
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  if (bVar5) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar10 = *(FWriteBuffer **)(lVar3 + 0x20);
    if ((int)pFVar10 - *(int *)&pFVar10->Cursor < 1) {
      pFVar10 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar10->Cursor = '\n';
    pFVar10->Cursor = pFVar10->Cursor + 1;
    pFVar10->Committed = pFVar10->Cursor;
  }
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(&local_c4);
  return true;
}

// ReleasePreloadEntry @ 145e20ca0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FIoStoreShaderCodeArchive::ReleasePreloadEntry(FIoStoreShaderCodeArchive *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  atomic<float> aVar3;
  longlong *plVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  atomic<float> aVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FCsvProfiler *this_02;
  TCsvPersistentCustomStat<float> *pTVar13;
  undefined1 *puVar14;
  uchar auVar15 [8];
  undefined8 *puVar16;
  uint uVar17;
  longlong lVar18;
  FNameEntryId FVar19;
  float fVar20;
  atomic<float> local_res8;
  uint uStackX_c;
  atomic<float> local_res10 [2];
  FIoRequest local_res18;
  FName local_res20;
  atomic<float> *local_88;
  FName local_80;
  FName local_78;
  FStatMessage local_70 [3];
  
  local_res10[0] = (atomic<float>)param_1;
  AcquireSRWLockExclusive((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  if (*(int *)&(this->PreloadedShaderGroups).field_0x8 !=
      *(int *)&(this->PreloadedShaderGroups).field_0x34) {
    puVar14 = *(undefined1 **)&(this->PreloadedShaderGroups).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->PreloadedShaderGroups).field_0x38;
    }
    iVar8 = *(int *)(puVar14 +
                    (ulonglong)
                    (*(int *)&(this->PreloadedShaderGroups).field_0x48 - 1U & (uint)local_res10[0])
                    * 4);
    if (iVar8 != -1) {
      lVar18 = *(longlong *)&(this->PreloadedShaderGroups).field_0x0;
      do {
        lVar2 = lVar18 + (longlong)iVar8 * 0x18;
        if (*(atomic<float> *)(lVar18 + (longlong)iVar8 * 0x18) == local_res10[0]) {
          puVar16 = (undefined8 *)(lVar2 + 8);
          if (lVar2 == 0) {
            puVar16 = (undefined8 *)0x0;
          }
          if (puVar16 != (undefined8 *)0x0) {
            plVar4 = (longlong *)*puVar16;
            uVar17 = *(uint *)((longlong)plVar4 + 0x14);
            uVar9 = (uVar17 - 1 ^ uVar17) & 0x7fffffff ^ uVar17;
            *(uint *)((longlong)plVar4 + 0x14) = uVar9;
            if ((uVar17 & 0x7fffffff) == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ShaderNumRefs > 0u",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                                 ,0x904,L"");
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else if ((uVar17 & 0x7fffffff) == 1) {
              if ((int)uVar9 < 0) {
                uVar17 = 0x18;
              }
              else {
                FIoRequest::Cancel((FIoRequest *)(plVar4 + 1));
                local_res18.Impl = (FIoRequestImpl *)0x0;
                FIoRequest::operator=((FIoRequest *)(plVar4 + 1),&local_res18);
                FIoRequest::~FIoRequest(&local_res18);
                puVar16 = (undefined8 *)*plVar4;
                if (puVar16 != (undefined8 *)0x0) {
                  *plVar4 = 0;
                  LOCK();
                  piVar1 = (int *)(puVar16 + 6);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)*puVar16)(puVar16,1);
                  }
                }
                lVar18 = (longlong)(int)local_res10[0];
                uVar17 = 0;
                if ((int)local_res10[0] < (this->Header).ShaderGroupEntries.ArrayNum) {
                  uVar17 = ~(uint)local_res10[0] >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar17 = *(int *)((this->Header).ShaderGroupEntries.AllocatorInstance.Data +
                                 lVar18 * 0x10 + 0xc) + 0x18;
              }
              if (plVar4 != (longlong *)0x0) {
                FIoRequest::~FIoRequest((FIoRequest *)(plVar4 + 1));
                puVar16 = (undefined8 *)*plVar4;
                if (puVar16 != (undefined8 *)0x0) {
                  LOCK();
                  piVar1 = (int *)(puVar16 + 6);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)*puVar16)(puVar16,1);
                  }
                }
                ::operator_delete(plVar4,0x18);
              }
              local_res8 = local_res10[0];
              if (*(int *)&(this->PreloadedShaderGroups).field_0x8 !=
                  *(int *)&(this->PreloadedShaderGroups).field_0x34) {
                TSet<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>,FDefaultSetAllocator>
                ::RemoveImpl<int>((TSet<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>,FDefaultSetAllocator>
                                   *)&this->PreloadedShaderGroups,(uint)local_res10[0],
                                  (int *)&local_res8);
              }
              auVar15[4] = '\0';
              auVar15[5] = '\0';
              auVar15[6] = '\0';
              auVar15[7] = '\0';
              auVar15[0] = (char)uVar17;
              auVar15[1] = (char)(uVar17 >> 8);
              auVar15[2] = (char)(uVar17 >> 0x10);
              auVar15[3] = (char)(uVar17 >> 0x18);
              if (uVar17 != 0) {
                FVar12 = StatPtr_STAT_Shaders_ShaderPreloadMemory;
                if (StatPtr_STAT_Shaders_ShaderPreloadMemory ==
                    (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)0x0) {
                  pFVar11 = ::FName::FName(&local_80,"STAT_Shaders_ShaderPreloadMemory");
                  FVar12 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)
                           FThreadSafeStaticStatBase::DoSetup
                                     ((FThreadSafeStaticStatBase *)
                                      &StatPtr_STAT_Shaders_ShaderPreloadMemory,*pFVar11,
                                      L"Shader Preload Mem","STATGROUP_Shaders","STATCAT_Advanced",
                                      L"Shader Compression",true,false,ST_int64,false,false,
                                      MCR_Physical);
                }
                FVar5 = *(FName *)FVar12;
                FVar19 = FVar5.ComparisonIndex.Value;
                uVar9 = FVar5.Number;
                local_res8 = (atomic<float>)FVar19.Value;
                uStackX_c = uVar9;
                if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                   (FThreadStats::TlsSlot != 0xffffffff)) {
                  this_00 = TlsGetValue(FThreadStats::TlsSlot);
                  if (this_00 == (FThreadStats *)0x0) {
                    this_01 = FThreadStatsPool::Get();
                    this_00 = FThreadStatsPool::GetFromPool(this_01);
                  }
                  local_70[0].NameAndInfo.Number = uVar9 & 0xffffbfff | 0xb000;
                  local_res20 = FVar5;
                  local_70[0].StatData.Pad = auVar15;
                  local_70[0].NameAndInfo.Index.Value = FVar19.Value;
                  FThreadStats::AddStatMessage(this_00,local_70);
                  FStatsTrace::Add(&local_res20,-(longlong)auVar15);
                  if (this_00->ScopeCount == 0) {
                    FThreadStats::Flush(this_00,false,false);
                  }
                  else if (FThreadStats::bIsRawStatsActive != false) {
                    FThreadStats::FlushRawStats(this_00,false,false);
                  }
                }
              }
              this_02 = FCsvProfiler::Get();
              uVar9 = _GCsvCategory_Shaders.Index;
              pFVar11 = ::FName::FName(&local_78,L"PreloadedShaderMB");
              fVar20 = (float)uVar17 * __real_b5800000;
              pTVar13 = FCsvProfiler::GetOrCreatePersistentCustomStatFloat
                                  (this_02,*pFVar11,uVar9,false);
              local_res8 = pTVar13->Value;
              aVar10 = local_res8;
              do {
                LOCK();
                aVar3 = pTVar13->Value;
                bVar7 = aVar10 == aVar3;
                if (bVar7) {
                  pTVar13->Value = (atomic<float>)((float)aVar10 + fVar20);
                  aVar3 = aVar10;
                }
                aVar10 = aVar3;
                UNLOCK();
              } while (!bVar7);
            }
            goto LAB_145e20d3f;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x10);
      } while (iVar8 != -1);
    }
  }
  local_88 = local_res10;
  `FIoStoreShaderCodeArchive::ReleasePreloadEntry'::__l2::<lambda_1>::operator()(&local_88);
LAB_145e20d3f:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  return;
}

// ReleasePreloadedShader @ 145e21100

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FIoStoreShaderCodeArchive::ReleasePreloadedShader(FIoStoreShaderCodeArchive *this,int param_1)

{
  int iVar1;
  undefined4 in_register_00000014;
  
  iVar1 = (**(code **)(this->_padding_ + 0xa8))(this,CONCAT44(in_register_00000014,param_1));
  ReleasePreloadEntry(this,iVar1);
  return;
}

// ReleasePreloadedShaderGroup @ 145e214f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FIoStoreShaderCodeArchive::ReleasePreloadedShaderGroup(FIoStoreShaderCodeArchive *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  atomic<float> aVar3;
  longlong *plVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  atomic<float> aVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FCsvProfiler *this_02;
  TCsvPersistentCustomStat<float> *pTVar13;
  undefined1 *puVar14;
  uchar auVar15 [8];
  undefined8 *puVar16;
  uint uVar17;
  longlong lVar18;
  FNameEntryId FVar19;
  float fVar20;
  atomic<float> aStackX_8;
  uint uStackX_c;
  atomic<float> aaStackX_10 [2];
  FIoRequest FStackX_18;
  FName FStackX_20;
  atomic<float> *paStack_88;
  FName FStack_80;
  FName FStack_78;
  FStatMessage aFStack_70 [3];
  
  aaStackX_10[0] = (atomic<float>)param_1;
  AcquireSRWLockExclusive((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  if (*(int *)&(this->PreloadedShaderGroups).field_0x8 !=
      *(int *)&(this->PreloadedShaderGroups).field_0x34) {
    puVar14 = *(undefined1 **)&(this->PreloadedShaderGroups).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->PreloadedShaderGroups).field_0x38;
    }
    iVar8 = *(int *)(puVar14 +
                    (ulonglong)
                    (*(int *)&(this->PreloadedShaderGroups).field_0x48 - 1U & (uint)aaStackX_10[0])
                    * 4);
    if (iVar8 != -1) {
      lVar18 = *(longlong *)&(this->PreloadedShaderGroups).field_0x0;
      do {
        lVar2 = lVar18 + (longlong)iVar8 * 0x18;
        if (*(atomic<float> *)(lVar18 + (longlong)iVar8 * 0x18) == aaStackX_10[0]) {
          puVar16 = (undefined8 *)(lVar2 + 8);
          if (lVar2 == 0) {
            puVar16 = (undefined8 *)0x0;
          }
          if (puVar16 != (undefined8 *)0x0) {
            plVar4 = (longlong *)*puVar16;
            uVar17 = *(uint *)((longlong)plVar4 + 0x14);
            uVar9 = (uVar17 - 1 ^ uVar17) & 0x7fffffff ^ uVar17;
            *(uint *)((longlong)plVar4 + 0x14) = uVar9;
            if ((uVar17 & 0x7fffffff) == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ShaderNumRefs > 0u",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                                 ,0x904,L"");
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else if ((uVar17 & 0x7fffffff) == 1) {
              if ((int)uVar9 < 0) {
                uVar17 = 0x18;
              }
              else {
                FIoRequest::Cancel((FIoRequest *)(plVar4 + 1));
                FStackX_18.Impl = (FIoRequestImpl *)0x0;
                FIoRequest::operator=((FIoRequest *)(plVar4 + 1),&FStackX_18);
                FIoRequest::~FIoRequest(&FStackX_18);
                puVar16 = (undefined8 *)*plVar4;
                if (puVar16 != (undefined8 *)0x0) {
                  *plVar4 = 0;
                  LOCK();
                  piVar1 = (int *)(puVar16 + 6);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)*puVar16)(puVar16,1);
                  }
                }
                lVar18 = (longlong)(int)aaStackX_10[0];
                uVar17 = 0;
                if ((int)aaStackX_10[0] < (this->Header).ShaderGroupEntries.ArrayNum) {
                  uVar17 = ~(uint)aaStackX_10[0] >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar17 = *(int *)((this->Header).ShaderGroupEntries.AllocatorInstance.Data +
                                 lVar18 * 0x10 + 0xc) + 0x18;
              }
              if (plVar4 != (longlong *)0x0) {
                FIoRequest::~FIoRequest((FIoRequest *)(plVar4 + 1));
                puVar16 = (undefined8 *)*plVar4;
                if (puVar16 != (undefined8 *)0x0) {
                  LOCK();
                  piVar1 = (int *)(puVar16 + 6);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)*puVar16)(puVar16,1);
                  }
                }
                ::operator_delete(plVar4,0x18);
              }
              aStackX_8 = aaStackX_10[0];
              if (*(int *)&(this->PreloadedShaderGroups).field_0x8 !=
                  *(int *)&(this->PreloadedShaderGroups).field_0x34) {
                TSet<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>,FDefaultSetAllocator>
                ::RemoveImpl<int>((TSet<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>,FDefaultSetAllocator>
                                   *)&this->PreloadedShaderGroups,(uint)aaStackX_10[0],
                                  (int *)&aStackX_8);
              }
              auVar15[4] = '\0';
              auVar15[5] = '\0';
              auVar15[6] = '\0';
              auVar15[7] = '\0';
              auVar15[0] = (char)uVar17;
              auVar15[1] = (char)(uVar17 >> 8);
              auVar15[2] = (char)(uVar17 >> 0x10);
              auVar15[3] = (char)(uVar17 >> 0x18);
              if (uVar17 != 0) {
                FVar12 = StatPtr_STAT_Shaders_ShaderPreloadMemory;
                if (StatPtr_STAT_Shaders_ShaderPreloadMemory ==
                    (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)0x0) {
                  pFVar11 = ::FName::FName(&FStack_80,"STAT_Shaders_ShaderPreloadMemory");
                  FVar12 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)
                           FThreadSafeStaticStatBase::DoSetup
                                     ((FThreadSafeStaticStatBase *)
                                      &StatPtr_STAT_Shaders_ShaderPreloadMemory,*pFVar11,
                                      L"Shader Preload Mem","STATGROUP_Shaders","STATCAT_Advanced",
                                      L"Shader Compression",true,false,ST_int64,false,false,
                                      MCR_Physical);
                }
                FVar5 = *(FName *)FVar12;
                FVar19 = FVar5.ComparisonIndex.Value;
                uVar9 = FVar5.Number;
                aStackX_8 = (atomic<float>)FVar19.Value;
                uStackX_c = uVar9;
                if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                   (FThreadStats::TlsSlot != 0xffffffff)) {
                  this_00 = TlsGetValue(FThreadStats::TlsSlot);
                  if (this_00 == (FThreadStats *)0x0) {
                    this_01 = FThreadStatsPool::Get();
                    this_00 = FThreadStatsPool::GetFromPool(this_01);
                  }
                  aFStack_70[0].NameAndInfo.Number = uVar9 & 0xffffbfff | 0xb000;
                  FStackX_20 = FVar5;
                  aFStack_70[0].StatData.Pad = auVar15;
                  aFStack_70[0].NameAndInfo.Index.Value = FVar19.Value;
                  FThreadStats::AddStatMessage(this_00,aFStack_70);
                  FStatsTrace::Add(&FStackX_20,-(longlong)auVar15);
                  if (this_00->ScopeCount == 0) {
                    FThreadStats::Flush(this_00,false,false);
                  }
                  else if (FThreadStats::bIsRawStatsActive != false) {
                    FThreadStats::FlushRawStats(this_00,false,false);
                  }
                }
              }
              this_02 = FCsvProfiler::Get();
              uVar9 = _GCsvCategory_Shaders.Index;
              pFVar11 = ::FName::FName(&FStack_78,L"PreloadedShaderMB");
              fVar20 = (float)uVar17 * __real_b5800000;
              pTVar13 = FCsvProfiler::GetOrCreatePersistentCustomStatFloat
                                  (this_02,*pFVar11,uVar9,false);
              aStackX_8 = pTVar13->Value;
              aVar10 = aStackX_8;
              do {
                LOCK();
                aVar3 = pTVar13->Value;
                bVar7 = aVar10 == aVar3;
                if (bVar7) {
                  pTVar13->Value = (atomic<float>)((float)aVar10 + fVar20);
                  aVar3 = aVar10;
                }
                aVar10 = aVar3;
                UNLOCK();
              } while (!bVar7);
            }
            goto LAB_145e20d3f;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x10);
      } while (iVar8 != -1);
    }
  }
  paStack_88 = aaStackX_10;
  `FIoStoreShaderCodeArchive::ReleasePreloadEntry'::__l2::<lambda_1>::operator()(&paStack_88);
LAB_145e20d3f:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  return;
}

// SaveIoStoreShaderCodeArchive @ 145e23590

void __cdecl
FIoStoreShaderCodeArchive::SaveIoStoreShaderCodeArchive
          (FIoStoreShaderCodeArchiveHeader *param_1,FArchive *param_2)

{
  longlong *plVar1;
  uint local_res10 [6];
  
  local_res10[0] = 1;
  plVar1 = *(longlong **)&param_2->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  ::operator<<(param_2,param_1);
  return;
}

// SetupPreloadEntryForLoading @ 145e26480

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FIoStoreShaderCodeArchive::SetupPreloadEntryForLoading
          (FIoStoreShaderCodeArchive *this,int param_1,FShaderGroupPreloadEntry *param_2)

{
  undefined1 *puVar1;
  FShaderUsageVisualizer *lpCriticalSection;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
  *this_00;
  FBaseGraphTask *pFVar8;
  FTask *pFVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  int local_res8 [2];
  undefined4 local_res10 [2];
  
  pFVar8 = (param_2->PreloadEvent).Reference;
  param_2->FramePreloadStarted = GFrameNumber;
  if (pFVar8 != (FBaseGraphTask *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PreloadEntry.PreloadEvent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                       ,0x801,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = (TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             *)GetGraphEventImplAllocator();
  pFVar8 = TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate(this_00);
  if (pFVar8 == (FBaseGraphTask *)0x0) {
    pFVar8 = (FBaseGraphTask *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask
              (pFVar8,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                       *)0x0);
    *(undefined ***)pFVar8 = &___7FGraphEventImpl__6B_;
    TaskTrace::Created(*(ulong64 *)&pFVar8->field_0x50,0xd8);
    if ((*(ulonglong *)&pFVar8->field_0xb0 & 0x20) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)(*(longlong *)&pFVar8->field_0xa0 + 0x18))(&pFVar8->field_0xa0,&pFVar8->field_0x78);
    *(FBaseGraphTask **)&pFVar8->field_0x78 = pFVar8;
    *(undefined ***)&pFVar8->field_0xa0 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FBaseGraphTask **)&pFVar8->field_0x80 = pFVar8;
    pFVar9 = LowLevelTasks::FTask::GetActiveTask();
    uVar10 = 0;
    if (pFVar9 != (FTask *)0x0) {
      uVar10 = *(undefined8 *)&pFVar9->field_0x30;
    }
    *(undefined8 *)&pFVar8->field_0xa8 = uVar10;
    *(undefined8 *)&pFVar8->field_0xb0 = 0xc8000054184c7c00;
    pFVar8->field_0x44 = 2;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar8->field_0x8);
  }
  if (param_2 == (FShaderGroupPreloadEntry *)&stack0xffffffffffffffc8) {
    if (pFVar8 == (FBaseGraphTask *)0x0) goto LAB_145e26623;
    LOCK();
    puVar1 = &pFVar8->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_145e26623;
    puVar11 = *(undefined8 **)pFVar8;
  }
  else {
    pFVar3 = (param_2->PreloadEvent).Reference;
    (param_2->PreloadEvent).Reference = pFVar8;
    if (pFVar3 == (FBaseGraphTask *)0x0) goto LAB_145e26623;
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_145e26623;
    puVar11 = *(undefined8 **)pFVar3;
    pFVar8 = pFVar3;
  }
  (*(code *)*puVar11)(pFVar8,1);
LAB_145e26623:
  uVar12 = 0;
  if (param_1 < (this->Header).ShaderGroupEntries.ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (this->Header).ShaderGroupEntries.AllocatorInstance.Data;
  uVar12 = *(uint *)(pFVar4 + (longlong)param_1 * 0x10);
  uVar13 = *(int *)(pFVar4 + (longlong)param_1 * 0x10 + 4) + uVar12;
  if (uVar12 < uVar13) {
    lpCriticalSection = &this->DebugVisualizer;
    do {
      uVar7 = 0;
      if ((int)uVar12 < (this->Header).ShaderIndices.ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_res10[0] =
           *(undefined4 *)
            ((this->Header).ShaderIndices.AllocatorInstance.Data + (longlong)(int)uVar12 * 4);
      if (GShaderCodeLibraryVisualizeShaderUsage != 0) {
        if (lpCriticalSection == (FShaderUsageVisualizer *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&(this->DebugVisualizer).PreloadedShaders,local_res8,(bool *)local_res10);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar13);
  }
  return;
}

// Teardown @ 145e34850

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FIoStoreShaderCodeArchive::Teardown(FIoStoreShaderCodeArchive *this)

{
  int *piVar1;
  TMap<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>_>
  *this_00;
  atomic<float> aVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  FName FVar5;
  longlong lVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  atomic<float> aVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory> FVar14;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FCsvProfiler *this_03;
  TCsvPersistentCustomStat<float> *pTVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uchar auVar19 [8];
  float fVar20;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_c8;
  undefined1 local_b8 [32];
  longlong local_98;
  TSet<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>,FDefaultSetAllocator>
  *pTStack_90;
  longlong *local_88;
  undefined1 auStack_80 [16];
  uint uStack_70;
  uint uStack_6c;
  longlong local_68;
  TSet<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>,FDefaultSetAllocator>
  *pTStack_60;
  TSet<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>,FDefaultSetAllocator>
  *local_58;
  undefined2 local_50;
  
  FShaderUsageVisualizer::SaveShaderUsageBitmap
            (&this->DebugVisualizer,(FString *)&this->_padding_,(EShaderPlatform)this->_padding_);
  uVar18 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  this_00 = &this->PreloadedShaderGroups;
  TSet<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_b8,
             (TSet<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>,FDefaultSetAllocator>
              *)this_00);
  local_50 = 0;
  stack0xffffffffffffff88 = local_b8._16_16_;
  local_88 = (longlong *)local_b8._0_8_;
  auStack_80._0_8_ = local_b8._8_8_;
  local_68 = local_98;
  pTStack_60 = pTStack_90;
  uVar16 = local_b8._24_8_ >> 0x20;
  uVar17 = local_b8._28_4_;
  local_58 = (TSet<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>,FDefaultSetAllocator>
              *)this_00;
  if ((int)uVar17 < *(int *)(local_b8._16_8_ + 0x18)) {
    do {
      plVar8 = local_88;
      plVar3 = *(longlong **)(*local_88 + 8 + (longlong)(int)uVar16 * 0x18);
      if (((*(uint *)((longlong)plVar3 + 0x14) & 0x7fffffff) != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("PreloadEntry->NumRefs == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeArchive.cpp"
                             ,0x7ed,
                             L"Group %d has still %d references on deletion. Group extended debug info: \n%s"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar17 = *(uint *)(*plVar8 + (longlong)(int)uVar17 * 0x18);
      uVar10 = 0;
      if ((int)uVar17 < (this->Header).ShaderGroupEntries.ArrayNum) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar18 = uVar18 + 0x18 +
               *(int *)((this->Header).ShaderGroupEntries.AllocatorInstance.Data +
                       (longlong)(int)uVar17 * 0x10 + 0xc);
      if (plVar3 != (longlong *)0x0) {
        FIoRequest::~FIoRequest((FIoRequest *)(plVar3 + 1));
        puVar4 = (undefined8 *)*plVar3;
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar4 + 6);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        ::operator_delete(plVar3,0x18);
      }
      uStack_70 = uStack_70 & ~auStack_80._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_80);
      uVar16 = (ulonglong)uStack_6c;
      uVar17 = uStack_6c;
    } while ((int)uStack_6c < *(int *)(auStack_80._8_8_ + 0x18));
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      uVar17 = *(int *)&(local_58->Elements).field_0x8 - *(int *)&(local_58->Elements).field_0x34;
      if (uVar17 < 4) {
        iVar11 = 1;
      }
      else {
        uVar16 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar11 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar17) && (local_58->HashSize < iVar11)) || (iVar11 < local_58->HashSize)) {
        local_58->HashSize = iVar11;
        TSet<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>,FDefaultSetAllocator>
        ::Rehash(local_58);
      }
    }
  }
  bVar9 = 1 < *(int *)&(this->PreloadedShaderGroups).field_0x48;
  if (!bVar9) {
    TSet<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  *(undefined4 *)&(this->PreloadedShaderGroups).field_0x8 = 0;
  if (*(int *)&(this->PreloadedShaderGroups).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,
               (int *)&(this->PreloadedShaderGroups).field_0xc);
  }
  *(undefined4 *)&(this->PreloadedShaderGroups).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreloadedShaderGroups).field_0x34 = 0;
  iVar11 = *(int *)&(this->PreloadedShaderGroups).field_0x2c;
  *(undefined4 *)&(this->PreloadedShaderGroups).field_0x28 = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    *(undefined4 *)&(this->PreloadedShaderGroups).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PreloadedShaderGroups).field_0x10,0);
  }
  if (bVar9) {
    *(undefined4 *)&(this->PreloadedShaderGroups).field_0x48 = 1;
    TSet<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  auVar19[4] = '\0';
  auVar19[5] = '\0';
  auVar19[6] = '\0';
  auVar19[7] = '\0';
  auVar19[0] = (char)uVar18;
  auVar19[1] = (char)(uVar18 >> 8);
  auVar19[2] = (char)(uVar18 >> 0x10);
  auVar19[3] = (char)(uVar18 >> 0x18);
  if (uVar18 != 0) {
    FVar14 = StatPtr_STAT_Shaders_ShaderPreloadMemory;
    if (StatPtr_STAT_Shaders_ShaderPreloadMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)0x0) {
      pFVar13 = ::FName::FName(&local_res18,"STAT_Shaders_ShaderPreloadMemory");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderPreloadMemory,
                          *pFVar13,L"Shader Preload Mem","STATGROUP_Shaders","STATCAT_Advanced",
                          L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar5 = *(FName *)FVar14;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_c8.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
      local_res10 = FVar5;
      local_c8.StatData.Pad = auVar19;
      local_c8.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_01,&local_c8);
      FStatsTrace::Add(&local_res10,-(longlong)auVar19);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  this_03 = FCsvProfiler::Get();
  uVar17 = _GCsvCategory_Shaders.Index;
  pFVar13 = ::FName::FName(&local_res20,L"PreloadedShaderMB");
  pTVar15 = FCsvProfiler::GetOrCreatePersistentCustomStatFloat(this_03,*pFVar13,uVar17,false);
  aVar12 = pTVar15->Value;
  fVar20 = (float)uVar18 * __real_b5800000;
  do {
    LOCK();
    aVar2 = pTVar15->Value;
    bVar9 = aVar12 == aVar2;
    if (bVar9) {
      pTVar15->Value = (atomic<float>)((float)aVar12 + fVar20);
      aVar2 = aVar12;
    }
    aVar12 = aVar2;
    UNLOCK();
  } while (!bVar9);
                    /* WARNING: Could not recover jumptable at 0x000145e34cdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PreloadedShaderGroupsLock);
  return;
}

// operator() @ 1504dd150

bool __thiscall
`FIoStoreShaderCodeArchive::ReleasePreloadEntry'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<889625449422915838>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<889625449422915838>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

