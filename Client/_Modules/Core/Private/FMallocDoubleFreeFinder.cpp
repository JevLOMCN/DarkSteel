// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FMallocDoubleFreeFinder @ 1416d61f0

FMallocDoubleFreeFinder * __thiscall
FMallocDoubleFreeFinder::FMallocDoubleFreeFinder(FMallocDoubleFreeFinder *this,FMalloc *param_1)

{
  FMallocCallstackHandler::FMallocCallstackHandler((FMallocCallstackHandler *)this,param_1);
  this->_padding_ = (longlong)&___7FMallocDoubleFreeFinder__6B_;
  *(undefined8 *)&this->TrackedCurrentAllocations = 0;
  *(undefined8 *)&(this->TrackedCurrentAllocations).field_0x8 = 0;
  *(undefined8 *)&(this->TrackedCurrentAllocations).field_0x20 = 0;
  *(undefined4 *)&(this->TrackedCurrentAllocations).field_0x28 = 0;
  *(undefined4 *)&(this->TrackedCurrentAllocations).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackedCurrentAllocations).field_0x34 = 0;
  *(undefined4 *)&(this->TrackedCurrentAllocations).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TrackedCurrentAllocations).field_0x40 = 0;
  *(undefined4 *)&(this->TrackedCurrentAllocations).field_0x48 = 0;
  *(undefined8 *)&this->TrackedFreeAllocations = 0;
  *(undefined8 *)&(this->TrackedFreeAllocations).field_0x8 = 0;
  *(undefined8 *)&(this->TrackedFreeAllocations).field_0x20 = 0;
  *(undefined4 *)&(this->TrackedFreeAllocations).field_0x28 = 0;
  *(undefined4 *)&(this->TrackedFreeAllocations).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackedFreeAllocations).field_0x34 = 0;
  *(undefined4 *)&(this->TrackedFreeAllocations).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TrackedFreeAllocations).field_0x40 = 0;
  *(undefined4 *)&(this->TrackedFreeAllocations).field_0x48 = 0;
  return this;
}

// Exec @ 1416ecf60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FMallocDoubleFreeFinder::Exec
          (FMallocDoubleFreeFinder *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  void *pvVar3;
  wchar_t *local_res18 [2];
  
  local_res18[0] = param_2;
  bVar1 = FParse::Command(local_res18,L"DoubleFreeFinderCrash",true);
  if (bVar1) {
    pvVar3 = FMemory::Malloc(0x80,0);
    FMemory::Free(pvVar3);
    FMemory::Free(pvVar3);
    return true;
  }
  uVar2 = (**(code **)(*(longlong *)this->_padding_ + 8))
                    ((longlong *)this->_padding_,param_1,local_res18[0],param_3);
  return (bool)uVar2;
}

// Init @ 1416fe2e0

void __thiscall FMallocDoubleFreeFinder::Init(FMallocDoubleFreeFinder *this)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if ((char)this->_padding_ == '\0') {
    FMallocCallstackHandler::Init((FMallocCallstackHandler *)this);
    if ((uint)(*(int *)&(this->TrackedFreeAllocations).field_0x8 -
              *(int *)&(this->TrackedFreeAllocations).field_0x34) < 6000000) {
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->TrackedFreeAllocations,6000000);
      for (lVar2 = 0x3f; 0x5b8d8fUL >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
      iVar1 = *(int *)&(this->TrackedFreeAllocations).field_0x48;
      if ((iVar1 == 0) || (iVar1 < iVar3)) {
        *(int *)&(this->TrackedFreeAllocations).field_0x48 = iVar3;
        TSet<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>,FDefaultSetAllocator>
                  *)&this->TrackedFreeAllocations);
      }
    }
    if ((uint)(*(int *)&(this->TrackedCurrentAllocations).field_0x8 -
              *(int *)&(this->TrackedCurrentAllocations).field_0x34) < 8000000) {
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->TrackedCurrentAllocations,8000000);
      for (lVar2 = 0x3f; 0x7a120fUL >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
      iVar1 = *(int *)&(this->TrackedCurrentAllocations).field_0x48;
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
      if ((iVar1 == 0) || (iVar1 < iVar3)) {
        *(int *)&(this->TrackedCurrentAllocations).field_0x48 = iVar3;
        TSet<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>,FDefaultSetAllocator>
                  *)&this->TrackedCurrentAllocations);
      }
    }
  }
  return;
}

// OverrideIfEnabled @ 141707340

FMalloc * __cdecl FMallocDoubleFreeFinder::OverrideIfEnabled(FMalloc *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  FMallocDoubleFreeFinder *pFVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 *puVar8;
  FMallocDoubleFreeFinder *pFVar9;
  FMallocDoubleFreeFinder *this;
  uint uVar10;
  ulonglong uVar11;
  FMallocDoubleFreeFinder *pFVar12;
  ulonglong *puVar13;
  uint *puVar14;
  uint uVar15;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  if (!GMallocDoubleFreeFinderEnabled) {
    return param_1;
  }
  pFVar5 = malloc(0x150);
  pFVar9 = (FMallocDoubleFreeFinder *)0x0;
  MemoryTrace_Alloc((ulong64)pFVar5,0x150,0,0,0);
  this = pFVar9;
  if (pFVar5 != (FMallocDoubleFreeFinder *)0x0) {
    FMallocCallstackHandler::FMallocCallstackHandler((FMallocCallstackHandler *)pFVar5,param_1);
    pFVar5->_padding_ = (longlong)&___7FMallocDoubleFreeFinder__6B_;
    *(undefined8 *)&pFVar5->TrackedCurrentAllocations = 0;
    *(undefined8 *)&(pFVar5->TrackedCurrentAllocations).field_0x8 = 0;
    *(undefined8 *)&(pFVar5->TrackedCurrentAllocations).field_0x20 = 0;
    *(undefined4 *)&(pFVar5->TrackedCurrentAllocations).field_0x28 = 0;
    *(undefined4 *)&(pFVar5->TrackedCurrentAllocations).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar5->TrackedCurrentAllocations).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar5->TrackedCurrentAllocations).field_0x34 = 0;
    *(undefined8 *)&(pFVar5->TrackedCurrentAllocations).field_0x40 = 0;
    *(undefined4 *)&(pFVar5->TrackedCurrentAllocations).field_0x48 = 0;
    *(undefined8 *)&pFVar5->TrackedFreeAllocations = 0;
    *(undefined8 *)&(pFVar5->TrackedFreeAllocations).field_0x8 = 0;
    *(undefined8 *)&(pFVar5->TrackedFreeAllocations).field_0x20 = 0;
    *(undefined4 *)&(pFVar5->TrackedFreeAllocations).field_0x28 = 0;
    *(undefined4 *)&(pFVar5->TrackedFreeAllocations).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar5->TrackedFreeAllocations).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar5->TrackedFreeAllocations).field_0x34 = 0;
    *(undefined8 *)&(pFVar5->TrackedFreeAllocations).field_0x40 = 0;
    *(undefined4 *)&(pFVar5->TrackedFreeAllocations).field_0x48 = 0;
    this = pFVar5;
  }
  if ((char)this->_padding_ != '\0') {
    GMallocDoubleFreeFinder = this;
    return (FMalloc *)this;
  }
  GMallocDoubleFreeFinder = this;
  FMallocCallstackHandler::Init((FMallocCallstackHandler *)this);
  if ((uint)(*(int *)&(this->TrackedFreeAllocations).field_0x8 -
            *(int *)&(this->TrackedFreeAllocations).field_0x34) < 6000000) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&this->TrackedFreeAllocations,6000000);
    puVar1 = &(this->TrackedFreeAllocations).field_0x48;
    for (lVar4 = 0x3f; 0x5b8d8fUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    uVar15 = 1 << ((byte)lVar4 & 0x1f);
    if ((*(int *)puVar1 == 0) || (*(int *)puVar1 < (int)uVar15)) {
      puVar2 = &(this->TrackedFreeAllocations).field_0x38;
      *(uint *)puVar1 = uVar15;
      if (*(longlong *)&(this->TrackedFreeAllocations).field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->TrackedFreeAllocations).field_0x40,0,0,4);
      }
      if (uVar15 != 0) {
        uVar10 = uVar15;
        if (uVar15 < 2) {
          if (*(longlong *)&(this->TrackedFreeAllocations).field_0x40 != 0) {
            uVar10 = 0;
            goto LAB_1417074f5;
          }
        }
        else {
LAB_1417074f5:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(this->TrackedFreeAllocations).field_0x40,0,uVar10,4);
        }
        if (0 < (int)uVar15) {
          uVar11 = (ulonglong)uVar15;
          pFVar5 = pFVar9;
          do {
            puVar3 = *(undefined1 **)&(this->TrackedFreeAllocations).field_0x40;
            puVar8 = puVar2;
            if (puVar3 != (undefined1 *)0x0) {
              puVar8 = puVar3;
            }
            uVar6 = (ulonglong)pFVar5 & (longlong)(int)uVar15 - 1U;
            pFVar5 = (FMallocDoubleFreeFinder *)((longlong)&pFVar5->_padding_ + 1);
            *(undefined4 *)(puVar8 + uVar6 * 4) = 0xffffffff;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      if (*(int *)puVar1 != 0) {
        uVar15 = *(uint *)&(this->TrackedFreeAllocations).field_0x28;
        local_50.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->TrackedFreeAllocations).field_0x10;
        local_78 = 0;
        uStack_74 = 1;
        uStack_64 = 0;
        uStack_60 = 0;
        pFVar5 = pFVar9;
        if (uVar15 != 0) {
          puVar14 = *(uint **)&(this->TrackedFreeAllocations).field_0x20;
          if (puVar14 == (uint *)0x0) {
            puVar14 = (uint *)local_50.Array;
          }
          uVar10 = *puVar14;
          pFVar12 = pFVar9;
          while (uVar10 == 0) {
            uStack_60 = (int)pFVar12 + 0x20;
            pFVar12 = (FMallocDoubleFreeFinder *)(ulonglong)uStack_60;
            iVar7 = (int)pFVar5;
            local_78 = iVar7 + 1;
            pFVar5 = (FMallocDoubleFreeFinder *)(ulonglong)local_78;
            if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
            goto LAB_1417075e9;
            uVar10 = puVar14[(longlong)iVar7 + 1];
          }
          uStack_74 = -uVar10 & uVar10;
          uVar11 = (ulonglong)uStack_74 * 2 + 1;
          lVar4 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          uStack_64 = (int)lVar4 + -1 + uStack_60;
          pFVar5 = (FMallocDoubleFreeFinder *)(ulonglong)uStack_64;
          if ((int)uVar15 < (int)uStack_64) {
LAB_1417075e9:
            pFVar5 = (FMallocDoubleFreeFinder *)(ulonglong)uVar15;
            uStack_64 = uVar15;
          }
        }
        local_50._padding_ = CONCAT44(uStack_74,local_78);
        local_50.CurrentBitIndex = uStack_64;
        local_50.UnvisitedBitMask = 0xffffffff;
        local_50._28_4_ = uStack_5c;
        local_50.BaseBitIndex = uStack_60;
        if ((int)pFVar5 < (int)uVar15) {
          do {
            puVar13 = (ulonglong *)
                      ((longlong)(int)pFVar5 * 0x20 +
                      *(longlong *)&(this->TrackedFreeAllocations).field_0x0);
            uVar15 = ((uint)(*puVar13 >> 0x14) & 0xffff ^ (uint)(*puVar13 >> 4)) * -0x7a143595;
            uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
            uVar15 = (uVar15 >> 0x10 ^ uVar15) & *(int *)puVar1 - 1U;
            *(uint *)((longlong)puVar13 + 0x1c) = uVar15;
            puVar3 = *(undefined1 **)&(this->TrackedFreeAllocations).field_0x40;
            puVar8 = puVar2;
            if (puVar3 != (undefined1 *)0x0) {
              puVar8 = puVar3;
            }
            uVar11 = (longlong)*(int *)puVar1 - 1U & (longlong)(int)uVar15;
            *(undefined4 *)(puVar13 + 3) = *(undefined4 *)(puVar8 + uVar11 * 4);
            *(int *)(puVar8 + uVar11 * 4) = (int)pFVar5;
            local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
            pFVar5 = (FMallocDoubleFreeFinder *)(ulonglong)(uint)local_50.CurrentBitIndex;
          } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
        }
      }
    }
  }
  if (7999999 < (uint)(*(int *)&(this->TrackedCurrentAllocations).field_0x8 -
                      *(int *)&(this->TrackedCurrentAllocations).field_0x34)) {
    return (FMalloc *)GMallocDoubleFreeFinder;
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&this->TrackedCurrentAllocations,8000000);
  puVar1 = &(this->TrackedCurrentAllocations).field_0x48;
  for (lVar4 = 0x3f; 0x7a120fUL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  uVar15 = 1 << ((byte)lVar4 & 0x1f);
  if ((*(int *)puVar1 != 0) && ((int)uVar15 <= *(int *)puVar1)) {
    return (FMalloc *)GMallocDoubleFreeFinder;
  }
  puVar2 = &(this->TrackedCurrentAllocations).field_0x38;
  *(uint *)puVar1 = uVar15;
  if (*(longlong *)&(this->TrackedCurrentAllocations).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->TrackedCurrentAllocations).field_0x40,0,0,4);
  }
  if (uVar15 == 0) goto LAB_141707774;
  uVar10 = uVar15;
  if (uVar15 < 2) {
    if (*(longlong *)&(this->TrackedCurrentAllocations).field_0x40 != 0) {
      uVar10 = 0;
      goto LAB_14170772a;
    }
  }
  else {
LAB_14170772a:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->TrackedCurrentAllocations).field_0x40,0,uVar10,4);
  }
  if (0 < (int)uVar15) {
    uVar11 = (ulonglong)uVar15;
    pFVar5 = pFVar9;
    do {
      puVar3 = *(undefined1 **)&(this->TrackedCurrentAllocations).field_0x40;
      puVar8 = puVar2;
      if (puVar3 != (undefined1 *)0x0) {
        puVar8 = puVar3;
      }
      uVar6 = (ulonglong)pFVar5 & (longlong)(int)uVar15 - 1U;
      pFVar5 = (FMallocDoubleFreeFinder *)((longlong)&pFVar5->_padding_ + 1);
      *(undefined4 *)(puVar8 + uVar6 * 4) = 0xffffffff;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
LAB_141707774:
  if (*(int *)puVar1 != 0) {
    uVar15 = *(uint *)&(this->TrackedCurrentAllocations).field_0x28;
    local_50.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->TrackedCurrentAllocations).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar15 != 0) {
      puVar14 = *(uint **)&(this->TrackedCurrentAllocations).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_50.Array;
      }
      uVar10 = *puVar14;
      pFVar5 = pFVar9;
      while (uVar10 == 0) {
        iVar7 = (int)pFVar9;
        uStack_60 = (int)pFVar5 + 0x20;
        pFVar5 = (FMallocDoubleFreeFinder *)(ulonglong)uStack_60;
        local_78 = iVar7 + 1;
        pFVar9 = (FMallocDoubleFreeFinder *)(ulonglong)local_78;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_14170781b;
        uVar10 = puVar14[(longlong)iVar7 + 1];
      }
      uStack_74 = -uVar10 & uVar10;
      uVar11 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      pFVar9 = (FMallocDoubleFreeFinder *)(ulonglong)uStack_64;
      if ((int)uVar15 < (int)uStack_64) {
LAB_14170781b:
        pFVar9 = (FMallocDoubleFreeFinder *)(ulonglong)uVar15;
        uStack_64 = uVar15;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)pFVar9 < (int)uVar15) {
      do {
        puVar13 = (ulonglong *)
                  ((longlong)(int)pFVar9 * 0x20 +
                  *(longlong *)&(this->TrackedCurrentAllocations).field_0x0);
        uVar15 = ((uint)(*puVar13 >> 0x14) & 0xffff ^ (uint)(*puVar13 >> 4)) * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        uVar15 = (uVar15 >> 0x10 ^ uVar15) & *(int *)puVar1 - 1U;
        *(uint *)((longlong)puVar13 + 0x1c) = uVar15;
        puVar3 = *(undefined1 **)&(this->TrackedCurrentAllocations).field_0x40;
        puVar8 = puVar2;
        if (puVar3 != (undefined1 *)0x0) {
          puVar8 = puVar3;
        }
        uVar11 = (longlong)*(int *)puVar1 - 1U & (longlong)(int)uVar15;
        *(undefined4 *)(puVar13 + 3) = *(undefined4 *)(puVar8 + uVar11 * 4);
        *(int *)(puVar8 + uVar11 * 4) = (int)pFVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        pFVar9 = (FMallocDoubleFreeFinder *)(ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return (FMalloc *)GMallocDoubleFreeFinder;
}

// TrackFree @ 1417162a0

void __thiscall
FMallocDoubleFreeFinder::TrackFree
          (FMallocDoubleFreeFinder *this,void *param_1,uint param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TrackedAllocationData *pTVar3;
  TPairInitializer<void_const_*_const_&,FMallocDoubleFreeFinder::TrackedAllocationData_&&>
  local_res8;
  TrackedAllocationData local_38;
  ulonglong local_28;
  int local_20;
  TrackedAllocationData **local_18;
  ulonglong *local_10;
  
  local_38.Size = 0;
  local_38.CallStackIndex = -1;
  local_res8.Value = param_1;
  bVar2 = TMap<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
          ::RemoveAndCopyValue(&this->TrackedCurrentAllocations,param_1,&local_38);
  if (!bVar2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`FMallocDoubleFreeFinder::TrackFree'::__l5::
               _dynamic_atexit_destructor_for__WhatHaveWeHere__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pTVar3 = TMapBase<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
             ::Find((TMapBase<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
                     *)&this->TrackedFreeAllocations,local_res8.Value);
    WhatHaveWeHere = *pTVar3;
                    /* WARNING: Subroutine does not return */
    FMallocCallstackHandler::DumpStackTraceToLog
              ((FMallocCallstackHandler *)this,pTVar3->CallStackIndex);
  }
  if ((param_2 != 0) && (param_2 != local_38.Size)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_18 = &local_res8.Value;
  local_10 = &local_28;
  local_28 = (ulonglong)param_2;
  local_20 = param_3;
  TSet<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<void_const_*_const_&,FMallocDoubleFreeFinder::TrackedAllocationData_&&>_>
            ((TSet<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>,FDefaultSetAllocator>
              *)&this->TrackedFreeAllocations,&local_res8,(bool *)&local_18);
  return;
}

// TrackMalloc @ 1417165a0

void __thiscall
FMallocDoubleFreeFinder::TrackMalloc
          (FMallocDoubleFreeFinder *this,void *param_1,uint param_2,int param_3)

{
  code *pcVar1;
  TrackedAllocationData *pTVar2;
  void *local_res10;
  TPairInitializer<void_const_*_const_&,FMallocDoubleFreeFinder::TrackedAllocationData_&&> local_48;
  int local_38;
  void **local_30;
  TrackedAllocationData **local_28;
  
  if (param_1 != (void *)0x0) {
    local_res10 = param_1;
    pTVar2 = TMapBase<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
             ::Find((TMapBase<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
                     *)&this->TrackedCurrentAllocations,param_1);
    if (pTVar2 != (TrackedAllocationData *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) &&
         (_Init_thread_header(&::_TSS0), param_1 = local_res10, ::_TSS0 == -1)) {
        AlreadyThereStatic = pTVar2;
        _Init_thread_footer(&::_TSS0);
        param_1 = local_res10;
      }
      TrackSpecial(this,param_1);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_30 = &local_res10;
    local_28 = &local_48.Value;
    local_48.Value = (TrackedAllocationData *)(ulonglong)param_2;
    local_38 = param_3;
    TSet<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<void_const_*_const_&,FMallocDoubleFreeFinder::TrackedAllocationData_&&>_>
              ((TSet<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>,FDefaultSetAllocator>
                *)&this->TrackedCurrentAllocations,&local_48,(bool *)&local_30);
  }
  return;
}

// TrackSpecial @ 141716b20

void __thiscall FMallocDoubleFreeFinder::TrackSpecial(FMallocDoubleFreeFinder *this,void *param_1)

{
  longlong *lpCriticalSection;
  TMap<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
  *this_00;
  longlong lVar1;
  FMallocCallstackHandler *pFVar2;
  bool bVar3;
  int iVar4;
  LPVOID pvVar5;
  TrackedAllocationData *pTVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  TrackedAllocationData local_88;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  pFVar2 = GMallocCallstackHandler;
  pvVar5 = TlsGetValue(GMallocCallstackHandler->DisabledTLS);
  TlsSetValue(pFVar2->DisabledTLS,(LPVOID)((longlong)pvVar5 + 1));
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FMallocDoubleFreeFinder::TrackSpecial'::__l2::
           _dynamic_atexit_destructor_for__WhatHaveWeHere__);
    _Init_thread_footer(&::_TSS0);
  }
  local_88.Size = 0;
  local_88.CallStackIndex = -1;
  if ((GTrackFreeSpecialPtr != (void *)0x0) &&
     (bVar3 = TMap<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
              ::RemoveAndCopyValue(&this->TrackedCurrentAllocations,GTrackFreeSpecialPtr,&local_88),
     !bVar3)) {
    pTVar6 = TMapBase<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
             ::Find((TMapBase<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
                     *)&this->TrackedFreeAllocations,GTrackFreeSpecialPtr);
    WhatHaveWeHere = *pTVar6;
                    /* WARNING: Subroutine does not return */
    FMallocCallstackHandler::DumpStackTraceToLog
              ((FMallocCallstackHandler *)this,pTVar6->CallStackIndex);
  }
  bVar3 = TMap<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
          ::RemoveAndCopyValue(&this->TrackedCurrentAllocations,param_1,&local_88);
  this_00 = &this->TrackedFreeAllocations;
  if (!bVar3) {
    pTVar6 = TMapBase<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
             ::Find((TMapBase<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
                     *)this_00,param_1);
    WhatHaveWeHere = *pTVar6;
                    /* WARNING: Subroutine does not return */
    FMallocCallstackHandler::DumpStackTraceToLog
              ((FMallocCallstackHandler *)this,pTVar6->CallStackIndex);
  }
  pTVar6 = TMapBase<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
           ::Find((TMapBase<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
                   *)this_00,param_1);
  if (pTVar6 == (TrackedAllocationData *)0x0) {
    TSet<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>,FDefaultSetAllocator>
                *)this_00);
    local_10 = 0;
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar7 = local_78._24_8_ >> 0x20;
    uVar9 = local_78._28_4_;
    local_18 = (TSet<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>,FDefaultSetAllocator>
                *)this_00;
    if ((int)uVar9 < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        lVar8 = (longlong)(int)uVar9 * 0x20 + *local_48;
        lVar1 = *(longlong *)((longlong)(int)uVar7 * 0x20 + *local_48);
        if ((lVar1 <= (longlong)param_1) && ((longlong)param_1 < *(longlong *)(lVar8 + 8) + lVar1))
        {
          WhatHaveWeHere = *(TrackedAllocationData *)(lVar8 + 8);
                    /* WARNING: Subroutine does not return */
          FMallocCallstackHandler::DumpStackTraceToLog
                    ((FMallocCallstackHandler *)this,*(int *)(lVar8 + 0x10));
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar7 = (ulonglong)uStack_2c;
        uVar9 = uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
        uVar9 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar9 < 4) {
          iVar4 = 1;
        }
        else {
          uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar4 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar9) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
          local_18->HashSize = iVar4;
          TSet<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = GMallocCallstackHandler;
    pvVar5 = TlsGetValue(GMallocCallstackHandler->DisabledTLS);
                    /* WARNING: Could not recover jumptable at 0x000141716dc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsSetValue(pFVar2->DisabledTLS,(LPVOID)((longlong)pvVar5 + -1));
    return;
  }
  WhatHaveWeHere = *pTVar6;
                    /* WARNING: Subroutine does not return */
  FMallocCallstackHandler::DumpStackTraceToLog
            ((FMallocCallstackHandler *)this,pTVar6->CallStackIndex);
}

