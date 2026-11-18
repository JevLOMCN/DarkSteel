// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FMallocFrameProfiler @ 1416d62a0

FMallocFrameProfiler * __thiscall
FMallocFrameProfiler::FMallocFrameProfiler(FMallocFrameProfiler *this,FMalloc *param_1)

{
  FMallocCallstackHandler::FMallocCallstackHandler((FMallocCallstackHandler *)this,param_1);
  this->bEnabled = false;
  this->_padding_ = (longlong)&___7FMallocFrameProfiler__6B_;
  this->FrameCount = 0;
  *(undefined8 *)&this->TrackedCurrentAllocations = 0;
  *(undefined8 *)&(this->TrackedCurrentAllocations).field_0x8 = 0;
  *(undefined8 *)&(this->TrackedCurrentAllocations).field_0x20 = 0;
  this->EntriesToOutput = 0xf;
  *(undefined4 *)&(this->TrackedCurrentAllocations).field_0x28 = 0;
  *(undefined4 *)&(this->TrackedCurrentAllocations).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackedCurrentAllocations).field_0x34 = 0;
  *(undefined4 *)&(this->TrackedCurrentAllocations).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TrackedCurrentAllocations).field_0x40 = 0;
  *(undefined4 *)&(this->TrackedCurrentAllocations).field_0x48 = 0;
  (this->CallStackStatsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CallStackStatsArray).ArrayNum = 0;
  (this->CallStackStatsArray).ArrayMax = 0;
  return this;
}

// Exec @ 1416ed000

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
FMallocFrameProfiler::Exec
          (FMallocFrameProfiler *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  wchar_t *local_res18 [2];
  
  local_res18[0] = param_2;
  bVar1 = FParse::Command(local_res18,L"MallocFrameProfiler",true);
  if (bVar1) {
    bVar1 = FParse::Value(local_res18[0],L"FrameCount=",&this->FrameCount);
    if (!bVar1) {
      this->FrameCount = 0;
    }
    bVar1 = FParse::Value(local_res18[0],L"Entries=",&this->EntriesToOutput);
    if (!bVar1) {
      this->EntriesToOutput = 0xf;
    }
    this->bEnabled = true;
    return true;
  }
  uVar2 = (**(code **)(*(longlong *)this->_padding_ + 8))
                    ((longlong *)this->_padding_,param_1,local_res18[0],param_3);
  return (bool)uVar2;
}

// Init @ 1416fe3b0

void __thiscall FMallocFrameProfiler::Init(FMallocFrameProfiler *this)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if ((char)this->_padding_ == '\0') {
    FMallocCallstackHandler::Init((FMallocCallstackHandler *)this);
    if ((uint)(*(int *)&(this->TrackedCurrentAllocations).field_0x8 -
              *(int *)&(this->TrackedCurrentAllocations).field_0x34) < 8000000) {
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->TrackedCurrentAllocations,8000000);
      for (lVar2 = 0x3f; 0x7a120fUL >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
      iVar1 = *(int *)&(this->TrackedCurrentAllocations).field_0x48;
      if ((iVar1 == 0) || (iVar1 < iVar3)) {
        *(int *)&(this->TrackedCurrentAllocations).field_0x48 = iVar3;
        TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>::
        Rehash((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                *)&this->TrackedCurrentAllocations);
      }
    }
    if ((this->CallStackStatsArray).ArrayMax < 8000000) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,8000000,&(this->CallStackStatsArray).AllocatorInstance,
                 (this->CallStackStatsArray).ArrayNum,&(this->CallStackStatsArray).ArrayMax);
    }
  }
  return;
}

// IsDisabled @ 141701a40

bool __thiscall FMallocFrameProfiler::IsDisabled(FMallocFrameProfiler *this)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue((DWORD)this->_padding_);
  if ((pvVar1 == (LPVOID)0x0) && (this->bEnabled != false)) {
    return false;
  }
  return true;
}

// OverrideIfEnabled @ 141707920

FMalloc * __cdecl FMallocFrameProfiler::OverrideIfEnabled(FMalloc *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  FMallocFrameProfiler *pFVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  int iVar9;
  FMallocFrameProfiler *pFVar10;
  FMallocFrameProfiler *this;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  if (!GMallocFrameProfilerEnabled) {
    return param_1;
  }
  pFVar6 = malloc(0x120);
  pFVar10 = (FMallocFrameProfiler *)0x0;
  MemoryTrace_Alloc((ulong64)pFVar6,0x120,0,0,0);
  this = pFVar10;
  if (pFVar6 != (FMallocFrameProfiler *)0x0) {
    FMallocCallstackHandler::FMallocCallstackHandler((FMallocCallstackHandler *)pFVar6,param_1);
    pFVar6->bEnabled = false;
    pFVar6->_padding_ = (longlong)&___7FMallocFrameProfiler__6B_;
    *(undefined8 *)&pFVar6->TrackedCurrentAllocations = 0;
    *(undefined8 *)&(pFVar6->TrackedCurrentAllocations).field_0x8 = 0;
    *(undefined8 *)&(pFVar6->TrackedCurrentAllocations).field_0x20 = 0;
    pFVar6->FrameCount = 0;
    pFVar6->EntriesToOutput = 0xf;
    *(undefined4 *)&(pFVar6->TrackedCurrentAllocations).field_0x28 = 0;
    *(undefined4 *)&(pFVar6->TrackedCurrentAllocations).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar6->TrackedCurrentAllocations).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar6->TrackedCurrentAllocations).field_0x34 = 0;
    *(undefined8 *)&(pFVar6->TrackedCurrentAllocations).field_0x40 = 0;
    *(undefined4 *)&(pFVar6->TrackedCurrentAllocations).field_0x48 = 0;
    (pFVar6->CallStackStatsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->CallStackStatsArray).ArrayNum = 0;
    (pFVar6->CallStackStatsArray).ArrayMax = 0;
    this = pFVar6;
  }
  if ((char)this->_padding_ != '\0') {
    GMallocFrameProfiler = this;
    return (FMalloc *)this;
  }
  GMallocFrameProfiler = this;
  FMallocCallstackHandler::Init((FMallocCallstackHandler *)this);
  if (7999999 < (uint)(*(int *)&(this->TrackedCurrentAllocations).field_0x8 -
                      *(int *)&(this->TrackedCurrentAllocations).field_0x34)) goto LAB_141707c82;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&this->TrackedCurrentAllocations,8000000);
  puVar1 = &(this->TrackedCurrentAllocations).field_0x48;
  for (lVar5 = 0x3f; 0x7a120fUL >> lVar5 == 0; lVar5 = lVar5 + -1) {
  }
  uVar14 = 1 << ((byte)lVar5 & 0x1f);
  if ((*(int *)puVar1 != 0) && ((int)uVar14 <= *(int *)puVar1)) goto LAB_141707c82;
  puVar2 = &(this->TrackedCurrentAllocations).field_0x38;
  *(uint *)puVar1 = uVar14;
  if (*(longlong *)&(this->TrackedCurrentAllocations).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->TrackedCurrentAllocations).field_0x40,0,0,4);
  }
  if (uVar14 != 0) {
    uVar11 = uVar14;
    if (uVar14 < 2) {
      if (*(longlong *)&(this->TrackedCurrentAllocations).field_0x40 != 0) {
        uVar11 = 0;
        goto LAB_141707ab3;
      }
    }
    else {
LAB_141707ab3:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->TrackedCurrentAllocations).field_0x40,0,uVar11,4);
    }
    if (0 < (int)uVar14) {
      uVar12 = (ulonglong)uVar14;
      pFVar6 = pFVar10;
      do {
        puVar3 = *(undefined1 **)&(this->TrackedCurrentAllocations).field_0x40;
        puVar8 = puVar2;
        if (puVar3 != (undefined1 *)0x0) {
          puVar8 = puVar3;
        }
        uVar7 = (ulonglong)pFVar6 & (longlong)(int)uVar14 - 1U;
        pFVar6 = (FMallocFrameProfiler *)((longlong)&pFVar6->_padding_ + 1);
        *(undefined4 *)(puVar8 + uVar7 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  if (*(int *)puVar1 != 0) {
    uVar14 = *(uint *)&(this->TrackedCurrentAllocations).field_0x28;
    local_50.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->TrackedCurrentAllocations).field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar14 != 0) {
      puVar13 = *(uint **)&(this->TrackedCurrentAllocations).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_50.Array;
      }
      uVar11 = *puVar13;
      pFVar6 = pFVar10;
      while (uVar11 == 0) {
        iVar9 = (int)pFVar10;
        uStack_60 = (int)pFVar6 + 0x20;
        pFVar6 = (FMallocFrameProfiler *)(ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        pFVar10 = (FMallocFrameProfiler *)(ulonglong)local_78;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_141707bac;
        uVar11 = puVar13[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar12 = (ulonglong)uStack_74 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_64 = (uStack_60 - 1) + (int)lVar5;
      pFVar10 = (FMallocFrameProfiler *)(ulonglong)uStack_64;
      if ((int)uVar14 < (int)uStack_64) {
LAB_141707bac:
        pFVar10 = (FMallocFrameProfiler *)(ulonglong)uVar14;
        uStack_64 = uVar14;
      }
    }
    local_50._padding_ = CONCAT44(uStack_74,local_78);
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)pFVar10 < (int)uVar14) {
      do {
        iVar9 = (int)pFVar10;
        lVar4 = *(longlong *)&(this->TrackedCurrentAllocations).field_0x0;
        lVar5 = lVar4 + (longlong)iVar9 * 0x18;
        uVar12 = *(ulonglong *)(lVar4 + (longlong)iVar9 * 0x18);
        uVar14 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        uVar14 = (uVar14 >> 0x10 ^ uVar14) & *(int *)puVar1 - 1U;
        *(uint *)(lVar5 + 0x14) = uVar14;
        puVar3 = *(undefined1 **)&(this->TrackedCurrentAllocations).field_0x40;
        puVar8 = puVar2;
        if (puVar3 != (undefined1 *)0x0) {
          puVar8 = puVar3;
        }
        uVar12 = (longlong)*(int *)puVar1 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(puVar8 + uVar12 * 4);
        *(int *)(puVar8 + uVar12 * 4) = iVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        pFVar10 = (FMallocFrameProfiler *)(ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
LAB_141707c82:
  if ((this->CallStackStatsArray).ArrayMax < 8000000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,8000000,&(this->CallStackStatsArray).AllocatorInstance,
               (this->CallStackStatsArray).ArrayNum,&(this->CallStackStatsArray).ArrayMax);
  }
  return (FMalloc *)GMallocFrameProfiler;
}

// TrackFree @ 1417163e0

void __thiscall
FMallocFrameProfiler::TrackFree(FMallocFrameProfiler *this,void *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  
  uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  if (*(int *)&(this->TrackedCurrentAllocations).field_0x8 !=
      *(int *)&(this->TrackedCurrentAllocations).field_0x34) {
    puVar7 = *(undefined1 **)&(this->TrackedCurrentAllocations).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->TrackedCurrentAllocations).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->TrackedCurrentAllocations).field_0x48 - 1U &
                              (uVar9 >> 0x10 ^ uVar9)) * 4);
    if (iVar5 != -1) {
      while (lVar1 = *(longlong *)&this->TrackedCurrentAllocations + (longlong)iVar5 * 0x18,
            *(void **)(*(longlong *)&this->TrackedCurrentAllocations + (longlong)iVar5 * 0x18) !=
            param_1) {
        iVar5 = *(int *)(lVar1 + 0x10);
        if (iVar5 == -1) {
          return;
        }
      }
      puVar8 = (uint *)(lVar1 + 8);
      if (lVar1 == 0) {
        puVar8 = (uint *)0x0;
      }
      if (puVar8 != (uint *)0x0) {
        if ((this->CallStackStatsArray).ArrayNum <= (int)*puVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar9 = *puVar8;
        uVar6 = 0;
        if ((int)uVar9 < (this->CallStackStatsArray).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->CallStackStatsArray).AllocatorInstance.Data +
                 (longlong)(int)uVar9 * 0x18 + 0xc;
        *(int *)pFVar2 = *(int *)pFVar2 + 1;
        uVar9 = *puVar8;
        uVar6 = 0;
        if ((int)uVar9 < (this->CallStackStatsArray).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->CallStackStatsArray).AllocatorInstance.Data +
                 (longlong)(int)uVar9 * 0x18 + 8;
        *(int *)pFVar2 = *(int *)pFVar2 + 1;
      }
    }
  }
  return;
}

// TrackMalloc @ 1417166b0

void __thiscall
FMallocFrameProfiler::TrackMalloc(FMallocFrameProfiler *this,void *param_1,uint param_2,int param_3)

{
  TArray<FMallocFrameProfiler::FCallStackStats,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  void *local_res10 [2];
  uint local_res20 [2];
  TPairInitializer<void_*_const_&,int_const_&> local_48;
  uint *local_38;
  
  if (param_1 != (void *)0x0) {
    piVar8 = &(this->CallStackStatsArray).ArrayNum;
    pTVar1 = &this->CallStackStatsArray;
    iVar9 = *piVar8;
    local_res10[0] = param_1;
    local_res20[0] = param_3;
    if (iVar9 <= param_3) {
      iVar9 = param_3 - iVar9;
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,4,iVar9 + 1,&pTVar1->AllocatorInstance,piVar8,
                         &(this->CallStackStatsArray).ArrayMax);
      DefaultConstructItems<FMallocFrameProfiler::FCallStackStats,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x18,iVar9 + 1);
    }
    uVar6 = local_res20[0];
    uVar7 = 0;
    if ((int)local_res20[0] < (this->CallStackStatsArray).ArrayNum) {
      uVar7 = ~local_res20[0] >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x18) = uVar6;
    lVar10 = (longlong)(int)local_res20[0];
    uVar6 = 0;
    if ((int)local_res20[0] < (this->CallStackStatsArray).ArrayNum) {
      uVar6 = ~local_res20[0] >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (pTVar1->AllocatorInstance).Data + lVar10 * 0x18 + 4;
    *(int *)pFVar2 = *(int *)pFVar2 + 1;
    lVar10 = (longlong)(int)local_res20[0];
    uVar6 = 0;
    if ((int)local_res20[0] < (this->CallStackStatsArray).ArrayNum) {
      uVar6 = ~local_res20[0] >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)((pTVar1->AllocatorInstance).Data + lVar10 * 0x18 + 0x10) == 0) {
      lVar10 = (longlong)(int)local_res20[0];
      uVar6 = 0;
      if ((int)local_res20[0] < (this->CallStackStatsArray).ArrayNum) {
        uVar6 = ~local_res20[0] >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->CallStackStatsArray).AllocatorInstance.Data + lVar10 * 0x18 + 0x10;
      *(int *)pFVar2 = *(int *)pFVar2 + 1;
    }
    lVar10 = (longlong)(int)local_res20[0];
    uVar6 = 0;
    if ((int)local_res20[0] < (this->CallStackStatsArray).ArrayNum) {
      uVar6 = ~local_res20[0] >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(uint *)((pTVar1->AllocatorInstance).Data + lVar10 * 0x18 + 0x14) != this->FrameCount) {
      lVar10 = (longlong)(int)local_res20[0];
      uVar6 = 0;
      if ((int)local_res20[0] < (this->CallStackStatsArray).ArrayNum) {
        uVar6 = ~local_res20[0] >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->CallStackStatsArray).AllocatorInstance.Data + lVar10 * 0x18 + 0x10;
      *(int *)pFVar2 = *(int *)pFVar2 + 1;
      lVar10 = (longlong)(int)local_res20[0];
      uVar6 = this->FrameCount;
      uVar7 = 0;
      if ((int)local_res20[0] < (this->CallStackStatsArray).ArrayNum) {
        uVar7 = ~local_res20[0] >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(uint *)((this->CallStackStatsArray).AllocatorInstance.Data + lVar10 * 0x18 + 0x14) = uVar6;
    }
    local_48.Value = (int *)local_res10;
    local_38 = local_res20;
    TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<void_*_const_&,int_const_&>_>
              ((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                *)&this->TrackedCurrentAllocations,&local_48,(bool *)&local_48.Value);
  }
  return;
}

// TrackRealloc @ 141716ac0

void __thiscall
FMallocFrameProfiler::TrackRealloc
          (FMallocFrameProfiler *this,void *param_1,void *param_2,uint param_3,uint param_4,
          int param_5)

{
  if (param_1 != (void *)0x0) {
    if (param_1 == param_2) {
      return;
    }
    TrackFree(this,param_1,param_4,param_5);
    if (param_2 == (void *)0x0) {
      return;
    }
  }
  TrackMalloc(this,param_2,param_3,param_5);
  return;
}

// UpdateStats @ 14171a2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocFrameProfiler::UpdateStats(FMallocFrameProfiler *this)

{
  longlong *lpCriticalSection;
  TArray<FMallocFrameProfiler::FCallStackStats,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FIdentityFunctor local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res18;
  undefined4 local_res20;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xa0))();
  if (this->bEnabled != false) {
    lpCriticalSection = &this->_padding_;
    if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<void_*,int>,TDefaultMapHashableKeyFuncs<void_*,int,0>,FDefaultSetAllocator>
                *)&this->TrackedCurrentAllocations);
    if (this->FrameCount == 0) {
      this->bEnabled = false;
      pTVar1 = &this->CallStackStatsArray;
      AlgoImpl::
      IntroSortInternal<FMallocFrameProfiler::FCallStackStats,int,FIdentityFunctor,TDereferenceWrapper<FMallocFrameProfiler::FCallStackStats,_FMallocFrameProfiler::UpdateStats_::__l2::<lambda_1>_>_>
                ((FCallStackStats *)(pTVar1->AllocatorInstance).Data,
                 (this->CallStackStatsArray).ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
      uVar7 = 0;
      if (0 < (this->CallStackStatsArray).ArrayNum) {
        lVar8 = 0;
        do {
          uVar6 = ~uVar7 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar7 < (this->CallStackStatsArray).ArrayNum) {
            uVar5 = uVar6;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)((pTVar1->AllocatorInstance).Data + lVar8) != 0) {
            if (3 < (byte)LogMallocFrameProfiler._0_1_) {
              uVar5 = 0;
              if ((int)uVar7 < (this->CallStackStatsArray).ArrayNum) {
                uVar5 = uVar6;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar5 = 0;
              if ((int)uVar7 < (this->CallStackStatsArray).ArrayNum) {
                uVar5 = uVar6;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar5 = 0;
              if ((int)uVar7 < (this->CallStackStatsArray).ArrayNum) {
                uVar5 = uVar6;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_res10 = *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar8 + 0x10);
              uVar5 = 0;
              if ((int)uVar7 < (this->CallStackStatsArray).ArrayNum) {
                uVar5 = uVar6;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_res18 = *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar8 + 0xc);
              uVar5 = 0;
              if ((int)uVar7 < (this->CallStackStatsArray).ArrayNum) {
                uVar5 = uVar6;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_res20 = *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar8 + 8);
              uVar5 = 0;
              if ((int)uVar7 < (this->CallStackStatsArray).ArrayNum) {
                uVar5 = uVar6;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar5 = 0;
              if ((int)uVar7 < (this->CallStackStatsArray).ArrayNum) {
                uVar5 = uVar6;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogMallocFrameProfiler);
            }
            uVar5 = 0;
            if ((int)uVar7 < (this->CallStackStatsArray).ArrayNum) {
              uVar5 = uVar6;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
                    /* WARNING: Subroutine does not return */
            FMallocCallstackHandler::DumpStackTraceToLog
                      ((FMallocCallstackHandler *)this,
                       *(int *)((pTVar1->AllocatorInstance).Data + lVar8));
          }
          if (uVar7 == this->EntriesToOutput) break;
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 0x18;
        } while ((int)uVar7 < (this->CallStackStatsArray).ArrayNum);
      }
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)&this->_padding_ = 0;
      if (iVar2 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x208,8,0,(ForAnyElementType *)&this->_padding_,0,
                   (int *)((longlong)&this->_padding_ + 4));
      }
      TSet<TTuple<FMallocCallstackHandler::FCallStackMapKey,int>,TDefaultMapHashableKeyFuncs<FMallocCallstackHandler::FCallStackMapKey,int,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FMallocCallstackHandler::FCallStackMapKey,int>,TDefaultMapHashableKeyFuncs<FMallocCallstackHandler::FCallStackMapKey,int,0>,FDefaultSetAllocator>
               *)&this->_padding_);
      (this->CallStackStatsArray).ArrayNum = 0;
      if ((this->CallStackStatsArray).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,0,&pTVar1->AllocatorInstance,0,&(this->CallStackStatsArray).ArrayMax);
      }
    }
    else {
      this->FrameCount = this->FrameCount - 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

