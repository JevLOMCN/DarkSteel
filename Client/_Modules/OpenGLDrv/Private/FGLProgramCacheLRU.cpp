// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 7

// FGLProgramCacheLRU @ 145be01b0

FGLProgramCacheLRU * __thiscall FGLProgramCacheLRU::FGLProgramCacheLRU(FGLProgramCacheLRU *this)

{
  TMap<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  this->LRUCapacity = 0x800;
  this->LRUBinaryMemoryUse = 0;
  uVar9 = 0;
  *(undefined8 *)&(this->LRU).LookupSet.Elements = 0;
  *(undefined8 *)&(this->LRU).LookupSet.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LRU).LookupSet.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LRU).LookupSet.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LRU).LookupSet.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LRU).LookupSet.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LRU).LookupSet.Elements.field_0x34 = 0;
  (this->LRU).LookupSet.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LRU).LookupSet.HashSize = 0;
  (this->LRU).LeastRecent = (FCacheEntry *)0x0;
  (this->LRU).MostRecent = (FCacheEntry *)0x0;
  (this->LRU).MaxNumElements = 0x800;
  TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::Empty(&this->LRU,0x800);
  this_00 = &this->EvictedPrograms;
  *(undefined8 *)&this_00->field_0x0 = 0;
  puVar1 = &(this->EvictedPrograms).field_0x48;
  *(undefined8 *)&(this->EvictedPrograms).field_0x8 = 0;
  *(undefined8 *)&(this->EvictedPrograms).field_0x20 = 0;
  *(undefined4 *)&(this->EvictedPrograms).field_0x28 = 0;
  *(undefined4 *)&(this->EvictedPrograms).field_0x2c = 0x80;
  *(undefined4 *)&(this->EvictedPrograms).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EvictedPrograms).field_0x34 = 0;
  *(undefined8 *)&(this->EvictedPrograms).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,10000);
  for (lVar4 = 0x3f; 0x271fUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  uVar10 = 1 << ((byte)lVar4 & 0x1f);
  if ((*(int *)puVar1 != 0) && ((int)uVar10 <= *(int *)puVar1)) {
    return this;
  }
  puVar2 = &(this->EvictedPrograms).field_0x38;
  *(uint *)puVar1 = uVar10;
  if (*(longlong *)&(this->EvictedPrograms).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->EvictedPrograms).field_0x40,0,0,4);
  }
  if (uVar10 == 0) goto LAB_145be0304;
  uVar12 = uVar10;
  if (uVar10 < 2) {
    if (*(longlong *)&(this->EvictedPrograms).field_0x40 != 0) {
      uVar12 = 0;
      goto LAB_145be02b6;
    }
  }
  else {
LAB_145be02b6:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->EvictedPrograms).field_0x40,0,uVar12,4);
  }
  if (0 < (int)uVar10) {
    uVar13 = (ulonglong)uVar10;
    uVar7 = uVar9;
    do {
      puVar3 = *(undefined1 **)&(this->EvictedPrograms).field_0x40;
      puVar6 = puVar2;
      if (puVar3 != (undefined1 *)0x0) {
        puVar6 = puVar3;
      }
      uVar5 = uVar7 & (longlong)(int)uVar10 - 1U;
      uVar7 = uVar7 + 1;
      *(undefined4 *)(puVar6 + uVar5 * 4) = 0xffffffff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
LAB_145be0304:
  if (*(int *)puVar1 != 0) {
    uVar10 = *(uint *)&(this->EvictedPrograms).field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->EvictedPrograms).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar10 != 0) {
      puVar14 = *(uint **)&(this->EvictedPrograms).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_50.Array;
      }
      uVar12 = *puVar14;
      uVar7 = uVar9;
      while (uVar12 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        local_78 = iVar8 + 1;
        uVar9 = (ulonglong)local_78;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_145be03ac;
        uVar12 = puVar14[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (uStack_60 - 1) + (int)lVar4;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar10 < (int)uStack_64) {
LAB_145be03ac:
        uVar9 = (ulonglong)uVar10;
        uStack_64 = uVar10;
      }
    }
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    if ((int)uVar9 < (int)uVar10) {
      do {
        pvVar11 = (void *)(*(longlong *)&this_00->field_0x0 + (longlong)(int)uVar9 * 0x90);
        uVar10 = (*FCrc::MemCrc32Func)(pvVar11,0x78,0);
        uVar10 = *(int *)puVar1 - 1U & uVar10;
        *(uint *)((longlong)pvVar11 + 0x8c) = uVar10;
        puVar3 = *(undefined1 **)&(this->EvictedPrograms).field_0x40;
        puVar6 = puVar2;
        if (puVar3 != (undefined1 *)0x0) {
          puVar6 = puVar3;
        }
        uVar7 = (longlong)*(int *)puVar1 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)((longlong)pvVar11 + 0x88) = *(undefined4 *)(puVar6 + uVar7 * 4);
        *(int *)(puVar6 + uVar7 * 4) = (int)uVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar9 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return this;
}

// ~FGLProgramCacheLRU @ 145be9300

void __thiscall FGLProgramCacheLRU::~FGLProgramCacheLRU(FGLProgramCacheLRU *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined4 *)&(this->EvictedPrograms).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EvictedPrograms).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EvictedPrograms);
  TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::Empty(&this->LRU,0);
  (this->LRU).LookupSet.HashSize = 0;
  FVar2 = (this->LRU).LookupSet.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LRU);
  return;
}

// Add @ 145bf0580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGLProgramCacheLRU::Add
          (FGLProgramCacheLRU *this,FOpenGLProgramKey *param_1,FOpenGLLinkedProgram *param_2)

{
  int iVar1;
  FCacheEntry *pFVar2;
  FOpenGLLinkedProgram *pFVar3;
  FName FVar4;
  code *pcVar5;
  undefined8 uVar6;
  TConsoleVariableData<int> *pTVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramCount> FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FSetElementId local_res8;
  uint uStackX_c;
  FCacheEntry *local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_e8;
  FString local_d8;
  FString local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  bVar9 = TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::Contains(&this->LRU,param_1);
  if (bVar9) {
    FOpenGLProgramKey::ToString(param_1,&local_d8);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!LRU.Contains(ProgramKey)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0x688,L"Program is already in the LRU program list: %s");
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar10 = (*FCrc::MemCrc32Func)(param_1,0x78,0);
  iVar11 = TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FOpenGLProgramKey>
                     ((TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
                       *)&this->EvictedPrograms,uVar10,param_1);
  if (iVar11 != -1) {
    FOpenGLProgramKey::ToString(param_1,&local_c8);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsEvicted(ProgramKey)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0x689,L"Program is already in the evicted program list: %s");
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  do {
    pTVar7 = CVarLRUMaxProgramCount.Ref;
    iVar11 = *(int *)&(this->LRU).LookupSet.Elements.field_0x8;
    iVar1 = *(int *)&(this->LRU).LookupSet.Elements.field_0x34;
    bVar9 = IsInParallelGameThread();
    if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
      lVar12 = 0;
    }
    else {
      lVar12 = 4;
    }
    pTVar8 = CVarLRUMaxProgramBinarySize.Ref;
    if ((iVar11 - iVar1 != *(int *)((longlong)pTVar7->ShadowedValue + lVar12)) &&
       (*(int *)&(this->LRU).LookupSet.Elements.field_0x8 -
        *(int *)&(this->LRU).LookupSet.Elements.field_0x34 != (this->LRU).MaxNumElements)) {
      bVar9 = IsInParallelGameThread();
      if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
        lVar12 = 0;
      }
      else {
        lVar12 = 4;
      }
      if (this->LRUBinaryMemoryUse <= *(int *)((longlong)pTVar8->ShadowedValue + lVar12)) {
        if (((this->LRU).MaxNumElements < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("MaxNumElements > 0 && \"Cannot add values to zero size FOpenGLLruCache\""
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                               ,0x8a,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_b8 = *(undefined8 *)param_1->ShaderHashes[0].Hash;
        uStack_b0 = *(undefined8 *)(param_1->ShaderHashes[0].Hash + 8);
        local_a8 = *(undefined8 *)(param_1->ShaderHashes[0].Hash + 0x10);
        uStack_a0 = *(undefined8 *)(param_1->ShaderHashes[1].Hash + 4);
        local_98 = *(undefined8 *)(param_1->ShaderHashes[1].Hash + 0xc);
        uStack_90 = *(undefined8 *)param_1->ShaderHashes[2].Hash;
        local_88 = *(undefined8 *)(param_1->ShaderHashes[2].Hash + 8);
        uStack_80 = *(undefined8 *)(param_1->ShaderHashes[2].Hash + 0x10);
        local_78 = *(undefined8 *)(param_1->ShaderHashes[3].Hash + 4);
        uStack_70 = *(undefined8 *)(param_1->ShaderHashes[3].Hash + 0xc);
        local_68 = *(undefined8 *)param_1->ShaderHashes[4].Hash;
        uStack_60 = *(undefined8 *)(param_1->ShaderHashes[4].Hash + 8);
        local_58 = *(undefined4 *)(param_1->ShaderHashes[4].Hash + 0x10);
        uStack_54 = *(undefined4 *)param_1->ShaderHashes[5].Hash;
        uStack_50 = *(undefined4 *)(param_1->ShaderHashes[5].Hash + 4);
        uStack_4c = *(undefined4 *)(param_1->ShaderHashes[5].Hash + 8);
        local_48 = *(undefined8 *)(param_1->ShaderHashes[5].Hash + 0xc);
        uVar10 = (*FCrc::MemCrc32Func)(&local_b8,0x78,0);
        iVar11 = TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
                 ::FindIndexByHash<FOpenGLProgramKey>(&(this->LRU).LookupSet,uVar10,param_1);
        if ((iVar11 != -1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!LookupSet.Contains(Key)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                               ,0x8b,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((this->LRU).MaxNumElements <=
             *(int *)&(this->LRU).LookupSet.Elements.field_0x8 -
             *(int *)&(this->LRU).LookupSet.Elements.field_0x34) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("LookupSet.Num() < MaxNumElements",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                               ,0x8d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_res10 = ::operator_new(0x90);
        if (local_res10 != (FCacheEntry *)0x0) {
          uVar6 = *(undefined8 *)(param_1->ShaderHashes[0].Hash + 8);
          *(undefined8 *)(local_res10->Key).ShaderHashes[0].Hash =
               *(undefined8 *)param_1->ShaderHashes[0].Hash;
          *(undefined8 *)((local_res10->Key).ShaderHashes[0].Hash + 8) = uVar6;
          uVar6 = *(undefined8 *)(param_1->ShaderHashes[1].Hash + 4);
          *(undefined8 *)((local_res10->Key).ShaderHashes[0].Hash + 0x10) =
               *(undefined8 *)(param_1->ShaderHashes[0].Hash + 0x10);
          *(undefined8 *)((local_res10->Key).ShaderHashes[1].Hash + 4) = uVar6;
          uVar6 = *(undefined8 *)param_1->ShaderHashes[2].Hash;
          *(undefined8 *)((local_res10->Key).ShaderHashes[1].Hash + 0xc) =
               *(undefined8 *)(param_1->ShaderHashes[1].Hash + 0xc);
          *(undefined8 *)(local_res10->Key).ShaderHashes[2].Hash = uVar6;
          uVar6 = *(undefined8 *)(param_1->ShaderHashes[2].Hash + 0x10);
          *(undefined8 *)((local_res10->Key).ShaderHashes[2].Hash + 8) =
               *(undefined8 *)(param_1->ShaderHashes[2].Hash + 8);
          *(undefined8 *)((local_res10->Key).ShaderHashes[2].Hash + 0x10) = uVar6;
          uVar6 = *(undefined8 *)(param_1->ShaderHashes[3].Hash + 0xc);
          *(undefined8 *)((local_res10->Key).ShaderHashes[3].Hash + 4) =
               *(undefined8 *)(param_1->ShaderHashes[3].Hash + 4);
          *(undefined8 *)((local_res10->Key).ShaderHashes[3].Hash + 0xc) = uVar6;
          uVar6 = *(undefined8 *)(param_1->ShaderHashes[4].Hash + 8);
          *(undefined8 *)(local_res10->Key).ShaderHashes[4].Hash =
               *(undefined8 *)param_1->ShaderHashes[4].Hash;
          *(undefined8 *)((local_res10->Key).ShaderHashes[4].Hash + 8) = uVar6;
          uVar6 = *(undefined8 *)(param_1->ShaderHashes[5].Hash + 4);
          *(undefined8 *)((local_res10->Key).ShaderHashes[4].Hash + 0x10) =
               *(undefined8 *)(param_1->ShaderHashes[4].Hash + 0x10);
          *(undefined8 *)((local_res10->Key).ShaderHashes[5].Hash + 4) = uVar6;
          *(undefined8 *)((local_res10->Key).ShaderHashes[5].Hash + 0xc) =
               *(undefined8 *)(param_1->ShaderHashes[5].Hash + 0xc);
          local_res10->LessRecent = (FCacheEntry *)0x0;
          local_res10->MoreRecent = (FCacheEntry *)0x0;
          local_res10->Value = param_2;
        }
        pFVar2 = (this->LRU).MostRecent;
        local_res10->LessRecent = pFVar2;
        if (pFVar2 != (FCacheEntry *)0x0) {
          pFVar2->MoreRecent = local_res10;
        }
        (this->LRU).MostRecent = local_res10;
        if ((this->LRU).LeastRecent == (FCacheEntry *)0x0) {
          (this->LRU).LeastRecent = local_res10;
        }
        TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
        ::Emplace<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*_const_&>
                  (&(this->LRU).LookupSet,(FCacheEntry **)&local_res8,(bool *)&local_res10);
        (param_2->LRUInfo).LRUNode.Index = local_res8.Index;
        (param_2->LRUInfo).LastTouchedFrame = GFrameNumber;
        iVar11 = FOpenGLLinkedProgramBase::GetProgramBinarySize((FOpenGLLinkedProgramBase *)param_2)
        ;
        this->LRUBinaryMemoryUse = this->LRUBinaryMemoryUse + iVar11;
        FVar14 = StatPtr_STAT_OpenGLShaderLRUProgramCount;
        if (StatPtr_STAT_OpenGLShaderLRUProgramCount ==
            (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramCount>)0x0) {
          pFVar13 = ::FName::FName(&local_res20,"STAT_OpenGLShaderLRUProgramCount");
          FVar14 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramCount>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLRUProgramCount
                              ,*pFVar13,L"Program LRU count","STATGROUP_OpenGLRHI",
                              "STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,false,false,
                              MCR_Invalid);
        }
        FVar4 = *(FName *)FVar14;
        if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          local_res8.Index = FVar4.ComparisonIndex.Value.Value;
          uStackX_c = FVar4.Number;
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          local_e8.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
          local_e8.StatData.Pad[0] = '\x01';
          local_e8.StatData.Pad[1] = '\0';
          local_e8.StatData.Pad[2] = '\0';
          local_e8.StatData.Pad[3] = '\0';
          local_e8.StatData.Pad[4] = '\0';
          local_e8.StatData.Pad[5] = '\0';
          local_e8.StatData.Pad[6] = '\0';
          local_e8.StatData.Pad[7] = '\0';
          local_res18 = FVar4;
          local_e8.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this_00,&local_e8);
          FStatsTrace::Add(&local_res18,1);
          if (this_00->ScopeCount == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
        return;
      }
    }
    if (((this->LRU).LeastRecent == (FCacheEntry *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("LeastRecent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\PsoLruCache.h"
                           ,0x185,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = (this->LRU).LeastRecent;
    pFVar3 = pFVar2->Value;
    TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::Remove(&this->LRU,pFVar2);
    EvictFromLRU(this,pFVar3);
  } while( true );
}

// AddOrReplaceEvicted @ 145bf0e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGLProgramCacheLRU::AddOrReplaceEvicted
          (FGLProgramCacheLRU *this,FOpenGLProgramKey *param_1,
          TUniqueObj<FOpenGLProgramBinary> *param_2)

{
  FEvictedGLProgram *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FOpenGLProgramBinary *pFVar5;
  FOpenGLProgramBinary *pFVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUEvictedProgramCount> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  TPairInitializer<FOpenGLProgramKey_const_&,FGLProgramCacheLRU::FEvictedGLProgram_&&> local_res8;
  FName local_res18 [2];
  undefined8 local_68;
  FOpenGLProgramBinary *local_60;
  FStatMessage local_58;
  FOpenGLProgramKey *local_48;
  undefined8 *local_40;
  FString local_38;
  
  bVar3 = TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::Contains(&this->LRU,param_1);
  if (bVar3) {
    FOpenGLProgramKey::ToString(param_1,&local_38);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!LRU.Contains(ProgramKey)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0x69b,L"Program is already in the LRU program list: %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar6 = (FOpenGLProgramBinary *)0x0;
  local_68 = 0;
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FOpenGLProgramBinary *)0x0) {
    (pFVar5->OwnedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->OwnedData).ArrayNum = 0;
    (pFVar5->OwnedData).ArrayMax = 0;
    (pFVar5->DataView).DataPtr = (uchar *)0x0;
    (pFVar5->DataView).ArrayNum = 0;
    pFVar6 = pFVar5;
  }
  local_60 = pFVar6;
  if (((((param_2->Obj).Ptr)->DataView).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ProgramBinaryIn->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0x5cd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar6 = (param_2->Obj).Ptr;
  local_40 = &local_68;
  (param_2->Obj).Ptr = local_60;
  local_60 = pFVar6;
  local_48 = param_1;
  TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FOpenGLProgramKey_const_&,FGLProgramCacheLRU::FEvictedGLProgram_&&>_>
            ((TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
              *)&this->EvictedPrograms,&local_res8,(bool *)&local_48);
  pFVar6 = local_60;
  if (local_60 != (FOpenGLProgramBinary *)0x0) {
    FOpenGLProgramBinary::~FOpenGLProgramBinary(local_60);
    ::operator_delete(pFVar6,0x20);
  }
  FVar8 = StatPtr_STAT_OpenGLShaderLRUEvictedProgramCount;
  if (StatPtr_STAT_OpenGLShaderLRUEvictedProgramCount ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUEvictedProgramCount>)0x0) {
    pFVar7 = ::FName::FName(local_res18,"STAT_OpenGLShaderLRUEvictedProgramCount");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUEvictedProgramCount>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLRUEvictedProgramCount
                       ,*pFVar7,L"Program LRU evicted count","STATGROUP_OpenGLRHI",
                       "STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,false,false,MCR_Invalid)
    ;
  }
  pFVar1 = *(FEvictedGLProgram **)FVar8;
  uVar4 = (uint)((ulonglong)pFVar1 >> 0x20);
  if (((pFVar1 != (FEvictedGLProgram *)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8.Key._0_4_ = (uint)pFVar1;
    local_res8.Key._4_4_ = uVar4;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_58.NameAndInfo.Number = uVar4 & 0xffffafff | 0xa000;
    local_58.StatData.Pad[0] = '\x01';
    local_58.StatData.Pad[1] = '\0';
    local_58.StatData.Pad[2] = '\0';
    local_58.StatData.Pad[3] = '\0';
    local_58.StatData.Pad[4] = '\0';
    local_58.StatData.Pad[5] = '\0';
    local_58.StatData.Pad[6] = '\0';
    local_58.StatData.Pad[7] = '\0';
    local_res8.Value = pFVar1;
    local_58.NameAndInfo.Index.Value = (uint)pFVar1;
    FThreadStats::AddStatMessage(this_00,&local_58);
    FStatsTrace::Add((FName *)&local_res8.Value,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
      return;
    }
    if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return;
}

// Empty @ 145bfc350

void __thiscall FGLProgramCacheLRU::Empty(FGLProgramCacheLRU *this)

{
  TMap<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  FOpenGLLinkedProgram *pFVar3;
  FOpenGLProgramBinary *pFVar4;
  FCacheEntry *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &(this->EvictedPrograms).field_0x10;
  iVar14 = 0;
  iVar2 = *(int *)&(this->EvictedPrograms).field_0x28;
  this_00 = &this->EvictedPrograms;
  iVar16 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar2 != 0) {
    puVar17 = *(uint **)&(this->EvictedPrograms).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145bfc3fd;
      uVar13 = puVar17[lVar10 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar12 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iVar9 = iVar16 + -1 + local_res18;
    if (iVar2 < iVar9) {
      iVar9 = iVar2;
    }
  }
LAB_145bfc3fd:
  uVar13 = *(uint *)&(this->EvictedPrograms).field_0x28;
  uVar11 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar8,iVar14);
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->EvictedPrograms).field_0x8 -
                       *(int *)&(this->EvictedPrograms).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar2 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->EvictedPrograms).field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(this->EvictedPrograms).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar11 = uVar11 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145bfc510;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar13 = local_res20 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_145bfc510:
  do {
    if (*(int *)&(this->EvictedPrograms).field_0x8 - *(int *)&(this->EvictedPrograms).field_0x34 !=
        (int)uStack_50) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_70.CurrentBitIndex == uVar13) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      bVar7 = 1 < *(int *)&(this->EvictedPrograms).field_0x48;
      if (!bVar7) {
        TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,0,*(int *)&(this->EvictedPrograms).field_0x8);
      puVar1 = &(this->EvictedPrograms).field_0xc;
      *(undefined4 *)&(this->EvictedPrograms).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->EvictedPrograms).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->EvictedPrograms).field_0x34 = 0;
      iVar2 = *(int *)&(this->EvictedPrograms).field_0x2c;
      *(undefined4 *)&(this->EvictedPrograms).field_0x28 = 0;
      if ((iVar2 < 0) || (0x80 < iVar2)) {
        *(undefined4 *)&(this->EvictedPrograms).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EvictedPrograms).field_0x10,0);
      }
      if (bVar7) {
        *(undefined4 *)&(this->EvictedPrograms).field_0x48 = 1;
        TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
                  *)this_00);
      }
      pFVar5 = (this->LRU).MostRecent;
      do {
        if (pFVar5 == (FCacheEntry *)0x0) {
          TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::Empty
                    (&this->LRU,this->LRUCapacity);
          return;
        }
        pFVar3 = pFVar5->Value;
        if (pFVar3 != (FOpenGLLinkedProgram *)0x0) {
          FOpenGLLinkedProgram::DeleteGLResources(pFVar3);
          pFVar4 = (pFVar3->LRUInfo).CachedProgramBinary.Obj.Ptr;
          if (pFVar4 != (FOpenGLProgramBinary *)0x0) {
            FOpenGLProgramBinary::~FOpenGLProgramBinary(pFVar4);
            ::operator_delete(pFVar4,0x20);
          }
          uVar12 = (ulonglong)(pFVar3->Config).TypeIndex;
          if ((2 < uVar12) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram::FComputeProgram>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar12])(&pFVar3->Config);
          if ((void *)pFVar3->_padding_ != (void *)0x0) {
            FMemory::Free((void *)pFVar3->_padding_);
          }
          if ((void *)pFVar3->_padding_ != (void *)0x0) {
            FMemory::Free((void *)pFVar3->_padding_);
          }
          ::operator_delete(pFVar3,0x2a8);
        }
        pFVar5 = pFVar5->LessRecent;
      } while( true );
    }
    pFVar3 = *(FOpenGLLinkedProgram **)
              (*(longlong *)&this_00->field_0x0 + 0x78 + (longlong)TStack_70.CurrentBitIndex * 0x90)
    ;
    if (pFVar3 != (FOpenGLLinkedProgram *)0x0) {
      FOpenGLLinkedProgram::DeleteGLResources(pFVar3);
      pFVar4 = (pFVar3->LRUInfo).CachedProgramBinary.Obj.Ptr;
      if (pFVar4 != (FOpenGLProgramBinary *)0x0) {
        FOpenGLProgramBinary::~FOpenGLProgramBinary(pFVar4);
        ::operator_delete(pFVar4,0x20);
      }
      uVar12 = (ulonglong)(pFVar3->Config).TypeIndex;
      if ((2 < uVar12) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram::FComputeProgram>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12])(&pFVar3->Config);
      if ((void *)pFVar3->_padding_ != (void *)0x0) {
        FMemory::Free((void *)pFVar3->_padding_);
      }
      if ((void *)pFVar3->_padding_ != (void *)0x0) {
        FMemory::Free((void *)pFVar3->_padding_);
      }
      ::operator_delete(pFVar3,0x2a8);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// EvictFromLRU @ 145bfd440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGLProgramCacheLRU::EvictFromLRU(FGLProgramCacheLRU *this,FOpenGLLinkedProgram *param_1)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FOpenGLLinkedProgram *pFVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUEvictTime> FVar12;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramCount> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUEvictedProgramCount> FVar16;
  FNameEntryId FVar17;
  FName FVar18;
  FColor_u_0 FVar19;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FOpenGLLinkedProgram *local_res10;
  undefined1 local_res18 [8];
  FName local_res20;
  FName local_c8;
  FName local_c0;
  LARGE_INTEGER local_b8;
  FStatMessage local_b0;
  FStatMessage local_a0;
  FStatMessage local_90;
  FOpenGLLinkedProgram *local_80;
  FOpenGLLinkedProgram **local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FString local_58;
  
  FVar12 = StatPtr_STAT_OpenGLShaderLRUEvictTime;
  local_res10 = param_1;
  if (StatPtr_STAT_OpenGLShaderLRUEvictTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUEvictTime>)0x0) {
    pFVar11 = ::FName::FName(&local_70,"STAT_OpenGLShaderLRUEvictTime");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUEvictTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLRUEvictTime,*pFVar11
                        ,L"Program LRU cache eviction time","STATGROUP_OpenGLRHI","STATCAT_Advanced"
                        ,L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar4 = false;
  bVar6 = false;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar17.Value;
        local_res20.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                   ,0x643);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18._0_4_ = FVar17.Value;
      local_res18._4_4_ = uVar10;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar5 = true;
      goto LAB_145bfd57e;
    }
  }
  bVar5 = false;
  FVar18.ComparisonIndex.Value = 0;
  FVar18.Number = 0;
LAB_145bfd57e:
  (local_res10->LRUInfo).LRUNode.Index = -1;
  FVar13 = StatPtr_STAT_OpenGLShaderLRUProgramCount;
  if (StatPtr_STAT_OpenGLShaderLRUProgramCount ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramCount>)0x0) {
    pFVar11 = ::FName::FName(&local_68,"STAT_OpenGLShaderLRUProgramCount");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramCount>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLRUProgramCount,
                        *pFVar11,L"Program LRU count","STATGROUP_OpenGLRHI","STATCAT_Advanced",
                        L"OpenGL RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar13;
  FVar17 = FVar2.ComparisonIndex.Value;
  uVar10 = FVar2.Number;
  local_res18._0_4_ = FVar17.Value;
  local_res18._4_4_ = uVar10;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_b0.NameAndInfo.Number = uVar10 & 0xffffbfff | 0xb000;
    local_b0.StatData.Pad[0] = '\x01';
    local_b0.StatData.Pad[1] = '\0';
    local_b0.StatData.Pad[2] = '\0';
    local_b0.StatData.Pad[3] = '\0';
    local_b0.StatData.Pad[4] = '\0';
    local_b0.StatData.Pad[5] = '\0';
    local_b0.StatData.Pad[6] = '\0';
    local_b0.StatData.Pad[7] = '\0';
    local_c8 = FVar2;
    local_b0.NameAndInfo.Index.Value = FVar17.Value;
    FThreadStats::AddStatMessage(pFVar14,&local_b0);
    FStatsTrace::Add(&local_c8,-1);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  iVar9 = FOpenGLLinkedProgramBase::GetProgramBinarySize((FOpenGLLinkedProgramBase *)local_res10);
  pFVar7 = local_res10;
  this->LRUBinaryMemoryUse = this->LRUBinaryMemoryUse - iVar9;
  uVar10 = (*FCrc::MemCrc32Func)(local_res10,0x78,0);
  iVar9 = TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FOpenGLProgramKey>
                    ((TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
                      *)&this->EvictedPrograms,uVar10,(FOpenGLProgramKey *)pFVar7);
  if (iVar9 != -1) {
    FOpenGLProgramKey::ToString((FOpenGLProgramKey *)local_res10,&local_58);
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EvictedPrograms.Contains(LinkedProgram->ProgramKey)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0x64a,L"Program is already in the evicted program list: %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_80 = local_res10;
  local_78 = &local_res10;
  TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FOpenGLProgramKey_const_&,FOpenGLLinkedProgram_*_&>_>
            ((TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
              *)&this->EvictedPrograms,
             (TPairInitializer<FOpenGLProgramKey_const_&,FOpenGLLinkedProgram_*_&> *)local_res18,
             (bool *)&local_80);
  FVar16 = StatPtr_STAT_OpenGLShaderLRUEvictedProgramCount;
  if (StatPtr_STAT_OpenGLShaderLRUEvictedProgramCount ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUEvictedProgramCount>)0x0) {
    pFVar11 = ::FName::FName(&local_60,"STAT_OpenGLShaderLRUEvictedProgramCount");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUEvictedProgramCount>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_OpenGLShaderLRUEvictedProgramCount,*pFVar11,
                        L"Program LRU evicted count","STATGROUP_OpenGLRHI","STATCAT_Advanced",
                        L"OpenGL RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar16;
  FVar19.Bits = (uint)FVar2.ComparisonIndex.Value;
  uVar10 = FVar2.Number;
  local_res8.Bits = FVar19.Bits;
  uStackX_c = uVar10;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    local_a0.NameAndInfo.Number = uVar10 & 0xffffafff | 0xa000;
    local_a0.StatData.Pad[0] = '\x01';
    local_a0.StatData.Pad[1] = '\0';
    local_a0.StatData.Pad[2] = '\0';
    local_a0.StatData.Pad[3] = '\0';
    local_a0.StatData.Pad[4] = '\0';
    local_a0.StatData.Pad[5] = '\0';
    local_a0.StatData.Pad[6] = '\0';
    local_a0.StatData.Pad[7] = '\0';
    local_c0 = FVar2;
    local_a0.NameAndInfo.Index.Value = FVar19.Bits;
    FThreadStats::AddStatMessage(pFVar14,&local_a0);
    FStatsTrace::Add(&local_c0,1);
    if (pFVar14->ScopeCount == 0) {
      FThreadStats::Flush(pFVar14,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar14,false,false);
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_90.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_90.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b8);
      local_90.StatData.Pad[4] = '\0';
      local_90.StatData.Pad[5] = '\0';
      local_90.StatData.Pad[6] = '\0';
      local_90.StatData.Pad[7] = '\0';
      local_90.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
      local_90.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
      local_90.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
      local_90.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar14,&local_90);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return;
}

// FindEvictedAndUpdateLRU @ 145bffbd0

/* WARNING: Enum "Type": Some values do not have unique names */

FOpenGLLinkedProgram * __thiscall
FGLProgramCacheLRU::FindEvictedAndUpdateLRU(FGLProgramCacheLRU *this,FOpenGLProgramKey *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  TUniqueObj<FOpenGLProgramBinary> TVar8;
  bool bVar9;
  uint uVar10;
  FOpenGLProgramBinary *pFVar11;
  FOpenGLLinkedProgram *pFVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUMissTime> FVar14;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUMissCount> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUEvictedProgramCount> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  FColor_u_0 FVar21;
  FOpenGLProgramBinary *this_00;
  FName FVar22;
  FColor_u_0 FVar23;
  longlong lVar24;
  FColor_u_0 local_res18;
  uint uStackX_1c;
  FColor_u_0 local_res20;
  uint local_res24;
  FEvictedGLProgram local_b8;
  FName local_a8;
  LARGE_INTEGER local_a0;
  FName local_98;
  FStatMessage local_90;
  FStatMessage local_80;
  FStatMessage local_70;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  pFVar11 = ::operator_new(0x20);
  this_00 = (FOpenGLProgramBinary *)0x0;
  FVar23.Bits = 0;
  if (pFVar11 != (FOpenGLProgramBinary *)0x0) {
    (pFVar11->OwnedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->OwnedData).ArrayNum = 0;
    (pFVar11->OwnedData).ArrayMax = 0;
    (pFVar11->DataView).DataPtr = (uchar *)0x0;
    (pFVar11->DataView).ArrayNum = 0;
    this_00 = pFVar11;
  }
  uVar10 = (*FCrc::MemCrc32Func)(param_1,0x78,0);
  uVar10 = TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FOpenGLProgramKey>
                     ((TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
                       *)&this->EvictedPrograms,uVar10,param_1);
  if (uVar10 == 0xffffffff) {
    if (this_00 != (FOpenGLProgramBinary *)0x0) {
      FOpenGLProgramBinary::~FOpenGLProgramBinary(this_00);
      ::operator_delete(this_00,0x20);
    }
    return (FOpenGLLinkedProgram *)0x0;
  }
  lVar3 = *(longlong *)&this->EvictedPrograms;
  lVar24 = (longlong)(int)uVar10 * 0x90;
  local_b8.LinkedProgram = *(FOpenGLLinkedProgram **)(lVar3 + 0x78 + lVar24);
  local_b8.CachedProgramBinary.Obj.Ptr =
       *(TUniquePtr<FOpenGLProgramBinary,TDefaultDelete<FOpenGLProgramBinary>_> *)
        (lVar3 + 0x80 + lVar24);
  *(FOpenGLProgramBinary **)(lVar3 + 0x80 + lVar24) = this_00;
  if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)&(this->EvictedPrograms).field_0x28)) {
    puVar19 = *(undefined1 **)&(this->EvictedPrograms).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = &(this->EvictedPrograms).field_0x10;
    }
    if ((*(uint *)(puVar19 + (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar10 & 0x1f) & 1) != 0) goto LAB_145bffd0e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar9) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FOpenGLLinkedProgram *)(*pcVar5)();
    return pFVar12;
  }
LAB_145bffd0e:
  lVar24 = lVar24 + *(longlong *)&this->EvictedPrograms;
  puVar19 = *(undefined1 **)&(this->EvictedPrograms).field_0x40;
  if (puVar19 == (undefined1 *)0x0) {
    puVar19 = &(this->EvictedPrograms).field_0x38;
  }
  puVar20 = (uint *)(puVar19 + (longlong)*(int *)(lVar24 + 0x8c) * 4);
  do {
    uVar2 = *puVar20;
    if (uVar2 == 0xffffffff) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FOpenGLLinkedProgram *)(*pcVar5)();
        return pFVar12;
      }
    }
    else if (uVar2 == uVar10) {
      *puVar20 = *(uint *)(lVar24 + 0x88);
      TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&this->EvictedPrograms,uVar10,1);
      TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this->EvictedPrograms,uVar10,1);
      FVar14 = StatPtr_STAT_OpenGLShaderLRUMissTime;
      if (StatPtr_STAT_OpenGLShaderLRUMissTime ==
          (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUMissTime>)0x0) {
        pFVar13 = ::FName::FName(&local_60,"STAT_OpenGLShaderLRUMissTime");
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUMissTime>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLRUMissTime,
                            *pFVar13,L"Program LRU cache miss time","STATGROUP_OpenGLRHI",
                            "STATCAT_Advanced",L"OpenGL RHI",true,true,ST_int64,true,false,
                            MCR_Invalid);
      }
      FVar22 = *(FName *)FVar14;
      bVar9 = false;
      bVar7 = false;
      FVar21.Bits = (uint)FVar22.ComparisonIndex.Value;
      uVar10 = FVar22.Number;
      if ((FVar21.Bits != 0) || (uVar10 != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res18.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
          bVar9 = false;
          bVar7 = true;
          if (-1 < CpuChannel->Enabled) {
            local_res20.Bits = FVar21.Bits;
            local_res24 = uVar10;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      ((FName *)&local_res20._s_0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0x630);
            bVar9 = true;
            bVar7 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          local_res18.Bits = FVar21.Bits;
          uStackX_1c = uVar10;
          FThreadStats::AddMessage(FVar22,CycleScopeStart);
          bVar6 = true;
          FVar23.Bits = FVar21.Bits;
          goto LAB_145bffed1;
        }
      }
      bVar6 = false;
      FVar22.ComparisonIndex.Value = 0;
      FVar22.Number = 0;
LAB_145bffed1:
      FVar15 = StatPtr_STAT_OpenGLShaderLRUMissCount;
      if (StatPtr_STAT_OpenGLShaderLRUMissCount ==
          (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUMissCount>)0x0) {
        pFVar13 = ::FName::FName(&local_58,"STAT_OpenGLShaderLRUMissCount");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUMissCount>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLRUMissCount,
                            *pFVar13,L"Program LRU miss count","STATGROUP_OpenGLRHI",
                            "STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar4 = *(FName *)FVar15;
      FVar21.Bits = (uint)FVar4.ComparisonIndex.Value;
      uVar10 = FVar4.Number;
      local_res18.Bits = FVar21.Bits;
      uStackX_1c = uVar10;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar16 == (FThreadStats *)0x0) {
          pFVar17 = FThreadStatsPool::Get();
          pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
        }
        local_90.NameAndInfo.Number = uVar10 & 0xffffafff | 0xa000;
        local_90.StatData.Pad[0] = '\x01';
        local_90.StatData.Pad[1] = '\0';
        local_90.StatData.Pad[2] = '\0';
        local_90.StatData.Pad[3] = '\0';
        local_90.StatData.Pad[4] = '\0';
        local_90.StatData.Pad[5] = '\0';
        local_90.StatData.Pad[6] = '\0';
        local_90.StatData.Pad[7] = '\0';
        local_a8 = FVar4;
        local_90.NameAndInfo.Index.Value = FVar21.Bits;
        FThreadStats::AddStatMessage(pFVar16,&local_90);
        FStatsTrace::Add(&local_a8,1);
        if (pFVar16->ScopeCount == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
      FEvictedGLProgram::RestoreGLProgramFromBinary(&local_b8,param_1);
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((bVar6) && (FVar22 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar16 == (FThreadStats *)0x0) {
          pFVar17 = FThreadStatsPool::Get();
          pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
        }
        if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
          local_80.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
          local_80.NameAndInfo.Index.Value = FVar23.Bits;
          QueryPerformanceCounter(&local_a0);
          local_80.StatData.Pad[4] = '\0';
          local_80.StatData.Pad[5] = '\0';
          local_80.StatData.Pad[6] = '\0';
          local_80.StatData.Pad[7] = '\0';
          local_80.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
          local_80.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
          local_80.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
          local_80.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar16,&local_80);
          piVar1 = &pFVar16->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar16,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar16,false,false);
          }
        }
      }
      TVar8.Obj.Ptr = local_b8.CachedProgramBinary.Obj.Ptr;
      if (local_b8.CachedProgramBinary.Obj.Ptr != (FOpenGLProgramBinary *)0x0) {
        FOpenGLProgramBinary::~FOpenGLProgramBinary
                  ((FOpenGLProgramBinary *)local_b8.CachedProgramBinary.Obj.Ptr);
        ::operator_delete((void *)TVar8.Obj.Ptr,0x20);
      }
      pFVar12 = local_b8.LinkedProgram;
      Add(this,param_1,local_b8.LinkedProgram);
      FVar18 = StatPtr_STAT_OpenGLShaderLRUEvictedProgramCount;
      if (StatPtr_STAT_OpenGLShaderLRUEvictedProgramCount ==
          (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUEvictedProgramCount>)0x0) {
        pFVar13 = ::FName::FName(local_50,"STAT_OpenGLShaderLRUEvictedProgramCount");
        FVar18 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUEvictedProgramCount>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_OpenGLShaderLRUEvictedProgramCount,*pFVar13,
                            L"Program LRU evicted count","STATGROUP_OpenGLRHI","STATCAT_Advanced",
                            L"OpenGL RHI",true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar22 = *(FName *)FVar18;
      if (((FVar22 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar16 == (FThreadStats *)0x0) {
          pFVar17 = FThreadStatsPool::Get();
          pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
        }
        local_70.NameAndInfo.Number = FVar22.Number & 0xffffbfff | 0xb000;
        local_70.StatData.Pad[0] = '\x01';
        local_70.StatData.Pad[1] = '\0';
        local_70.StatData.Pad[2] = '\0';
        local_70.StatData.Pad[3] = '\0';
        local_70.StatData.Pad[4] = '\0';
        local_70.StatData.Pad[5] = '\0';
        local_70.StatData.Pad[6] = '\0';
        local_70.StatData.Pad[7] = '\0';
        local_98 = FVar22;
        local_70.NameAndInfo.Index.Value = FVar22.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar16,&local_70);
        FStatsTrace::Add(&local_98,-1);
        if (pFVar16->ScopeCount == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
      return pFVar12;
    }
    puVar20 = (uint *)(*(longlong *)&this->EvictedPrograms + 0x88 + (longlong)(int)uVar2 * 0x90);
  } while( true );
}

