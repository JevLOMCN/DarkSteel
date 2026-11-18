// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 33

// FStatsThreadState @ 1419cf360

FStatsThreadState * __thiscall
FStatsThreadState::FStatsThreadState(FStatsThreadState *this,int param_1)

{
  this->HistoryFrames = param_1;
  this->LastFullFrameMetaAndNonFrame = -1;
  *(undefined8 *)&this->CondensedStackHistory = 0;
  *(undefined8 *)&(this->CondensedStackHistory).field_0x8 = 0;
  *(undefined8 *)&(this->CondensedStackHistory).field_0x20 = 0;
  this->LastFullFrameProcessed = -1;
  *(undefined4 *)&(this->CondensedStackHistory).field_0x28 = 0;
  *(undefined4 *)&(this->CondensedStackHistory).field_0x2c = 0x80;
  *(undefined4 *)&(this->CondensedStackHistory).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CondensedStackHistory).field_0x34 = 0;
  *(undefined8 *)&(this->CondensedStackHistory).field_0x40 = 0;
  *(undefined4 *)&(this->CondensedStackHistory).field_0x48 = 0;
  *(undefined8 *)&(this->GoodFrames).Elements = 0;
  *(undefined8 *)&(this->GoodFrames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GoodFrames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GoodFrames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GoodFrames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GoodFrames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GoodFrames).Elements.field_0x34 = 0;
  (this->GoodFrames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GoodFrames).HashSize = 0;
  *(undefined8 *)&(this->BadFrames).Elements = 0;
  *(undefined8 *)&(this->BadFrames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->BadFrames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->BadFrames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->BadFrames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->BadFrames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BadFrames).Elements.field_0x34 = 0;
  (this->BadFrames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->BadFrames).HashSize = 0;
  (this->StartupRawStats).Packets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StartupRawStats).Packets.ArrayNum = 0;
  (this->StartupRawStats).Packets.ArrayMax = 0;
  this->TotalNumStatMessages = 0;
  (this->NumStatMessages).Counter = 0;
  this->MaxNumStatMessages = 0;
  this->bFindMemoryExtensiveStats = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->NewFrameDelegate,4000);
  *(undefined8 *)&(this->NewFrameDelegate).field_0x28 = 0;
  *(undefined8 *)&(this->NewFrameDelegate).field_0x30 = 0;
  *(undefined8 *)&(this->NewFrameDelegate).field_0x38 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->NewRawStatPacket,4000);
  *(undefined8 *)&(this->NewRawStatPacket).field_0x28 = 0;
  *(undefined8 *)&(this->NewRawStatPacket).field_0x30 = 0;
  *(undefined8 *)&(this->NewRawStatPacket).field_0x38 = 2;
  this->CurrentGameFrame = 1;
  this->CurrentRenderFrame = 1;
  this->CurrentEndOfPipeFrame = 1;
  *(undefined8 *)&this->NotClearedEveryFrame = 0;
  *(undefined8 *)&(this->NotClearedEveryFrame).field_0x8 = 0;
  *(undefined8 *)&(this->NotClearedEveryFrame).field_0x20 = 0;
  *(undefined4 *)&(this->NotClearedEveryFrame).field_0x28 = 0;
  *(undefined4 *)&(this->NotClearedEveryFrame).field_0x2c = 0x80;
  *(undefined4 *)&(this->NotClearedEveryFrame).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NotClearedEveryFrame).field_0x34 = 0;
  *(undefined8 *)&(this->NotClearedEveryFrame).field_0x40 = 0;
  *(undefined4 *)&(this->NotClearedEveryFrame).field_0x48 = 0;
  *(undefined8 *)&this->ShortNameToLongName = 0;
  *(undefined8 *)&(this->ShortNameToLongName).field_0x8 = 0;
  *(undefined8 *)&(this->ShortNameToLongName).field_0x20 = 0;
  *(undefined4 *)&(this->ShortNameToLongName).field_0x28 = 0;
  *(undefined4 *)&(this->ShortNameToLongName).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShortNameToLongName).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShortNameToLongName).field_0x34 = 0;
  *(undefined8 *)&(this->ShortNameToLongName).field_0x40 = 0;
  *(undefined4 *)&(this->ShortNameToLongName).field_0x48 = 0;
  *(undefined8 *)&this->EventsHistory = 0;
  *(undefined8 *)&(this->EventsHistory).field_0x8 = 0;
  *(undefined8 *)&(this->EventsHistory).field_0x20 = 0;
  *(undefined4 *)&(this->EventsHistory).field_0x28 = 0;
  *(undefined4 *)&(this->EventsHistory).field_0x2c = 0x80;
  *(undefined4 *)&(this->EventsHistory).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EventsHistory).field_0x34 = 0;
  *(undefined8 *)&(this->EventsHistory).field_0x40 = 0;
  *(undefined4 *)&(this->EventsHistory).field_0x48 = 0;
  *(undefined8 *)&this->MemoryPoolToCapacityLongName = 0;
  *(undefined8 *)&(this->MemoryPoolToCapacityLongName).field_0x8 = 0;
  *(undefined8 *)&(this->MemoryPoolToCapacityLongName).field_0x20 = 0;
  *(undefined4 *)&(this->MemoryPoolToCapacityLongName).field_0x28 = 0;
  *(undefined4 *)&(this->MemoryPoolToCapacityLongName).field_0x2c = 0x80;
  *(undefined4 *)&(this->MemoryPoolToCapacityLongName).field_0x34 = 0;
  *(undefined4 *)&(this->MemoryPoolToCapacityLongName).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MemoryPoolToCapacityLongName).field_0x40 = 0;
  *(undefined4 *)&(this->MemoryPoolToCapacityLongName).field_0x48 = 0;
  *(undefined8 *)&this->Groups = 0;
  *(undefined8 *)&(this->Groups).field_0x8 = 0;
  *(undefined8 *)&(this->Groups).field_0x20 = 0;
  *(undefined4 *)&(this->Groups).field_0x28 = 0;
  *(undefined4 *)&(this->Groups).field_0x2c = 0x80;
  *(undefined4 *)&(this->Groups).field_0x34 = 0;
  *(undefined4 *)&(this->Groups).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Groups).field_0x40 = 0;
  *(undefined4 *)&(this->Groups).field_0x48 = 0;
  *(undefined8 *)&this->Threads = 0;
  *(undefined8 *)&(this->Threads).field_0x8 = 0;
  *(undefined8 *)&(this->Threads).field_0x20 = 0;
  *(undefined4 *)&(this->Threads).field_0x28 = 0;
  *(undefined4 *)&(this->Threads).field_0x2c = 0x80;
  *(undefined4 *)&(this->Threads).field_0x34 = 0;
  *(undefined4 *)&(this->Threads).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Threads).field_0x40 = 0;
  *(undefined4 *)&(this->Threads).field_0x48 = 0;
  *(undefined8 *)&this->History = 0;
  *(undefined8 *)&(this->History).field_0x8 = 0;
  *(undefined8 *)&(this->History).field_0x20 = 0;
  *(undefined4 *)&(this->History).field_0x28 = 0;
  *(undefined4 *)&(this->History).field_0x2c = 0x80;
  *(undefined4 *)&(this->History).field_0x34 = 0;
  *(undefined4 *)&(this->History).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->History).field_0x40 = 0;
  *(undefined4 *)&(this->History).field_0x48 = 0;
  return this;
}

// ~FStatsThreadState @ 1419d2f30

void __thiscall FStatsThreadState::~FStatsThreadState(FStatsThreadState *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  
  *(undefined4 *)&(this->History).field_0x48 = 0;
  pvVar1 = *(void **)&(this->History).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->History);
  *(undefined4 *)&(this->Threads).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Threads).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Threads);
  *(undefined4 *)&(this->Groups).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Groups).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Groups);
  *(undefined4 *)&(this->MemoryPoolToCapacityLongName).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MemoryPoolToCapacityLongName).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_FWindowsPlatformMemory::EMemoryCounterRegion,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_FWindowsPlatformMemory::EMemoryCounterRegion,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->MemoryPoolToCapacityLongName);
  *(undefined4 *)&(this->EventsHistory).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EventsHistory).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FEventData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FEventData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FEventData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EventsHistory);
  *(undefined4 *)&(this->ShortNameToLongName).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ShortNameToLongName).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ShortNameToLongName);
  *(undefined4 *)&(this->NotClearedEveryFrame).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NotClearedEveryFrame).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NotClearedEveryFrame);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NewRawStatPacket).field_0x28,*(int *)&(this->NewRawStatPacket).field_0x30);
  pvVar1 = *(void **)&(this->NewRawStatPacket).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->NewRawStatPacket);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NewFrameDelegate).field_0x28,*(int *)&(this->NewFrameDelegate).field_0x30);
  pvVar1 = *(void **)&(this->NewFrameDelegate).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->NewFrameDelegate);
  FStatPacketArray::Empty(&this->StartupRawStats);
  pFVar2 = (this->StartupRawStats).Packets.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->BadFrames).HashSize = 0;
  FVar3 = (this->BadFrames).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->BadFrames).Elements);
  (this->GoodFrames).HashSize = 0;
  FVar3 = (this->GoodFrames).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->GoodFrames).Elements);
  *(undefined4 *)&(this->CondensedStackHistory).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CondensedStackHistory).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CondensedStackHistory);
  return;
}

// AddMissingStats @ 1419dab10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStatsThreadState::AddMissingStats
          (FStatsThreadState *this,TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2)

{
  ForElementType<unsigned_int> this_00;
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  TTuple<FName,FStatMessage> *pTVar9;
  ForElementType<unsigned_int> FVar10;
  ForElementType<FSetElementId> FVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_1d8 [32];
  longlong local_174;
  FStatsThreadState *local_168;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  longlong *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  ForElementType<unsigned_int> local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  uint local_118;
  undefined4 uStack_114;
  undefined4 local_ec;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  uint local_c0;
  uint local_bc;
  int local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  this_00 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  uVar15 = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_168 = this;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_e8,param_2);
  iVar8 = param_1->ArrayNum;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_88.MaxBits = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  if (0 < iVar8) {
    do {
      uVar6 = 0;
      if ((int)uVar15 < iVar8) {
        uVar6 = ~uVar15 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FStatNameAndInfo::GetShortNameFrom((FName)&local_174);
      lVar2 = local_174;
      if (local_e8._8_4_ != local_b4) {
        uVar6 = ::GetTypeHash((FNameEntryId)(uint)local_174);
        FVar11 = (ForElementType<FSetElementId>)local_b0;
        if (local_a8 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = local_a8;
        }
        uVar6 = *(uint *)((longlong)FVar11 +
                         (longlong)(int)(local_a0 - 1U & uVar6 + (int)((ulonglong)lVar2 >> 0x20)) *
                         4);
        if (uVar6 != 0xffffffff) {
LAB_1419dacb0:
          lVar13 = (longlong)(int)uVar6 * 0x10;
          if (*(longlong *)(local_e8._0_8_ + lVar13) != lVar2) goto code_r0x0001419dacc1;
          if (((int)uVar6 < 0) || ((int)local_c0 <= (int)uVar6)) {
LAB_1419dad02:
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Elements.IsValidIndex(ElementIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2ab,
                               L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            FVar10 = this_00;
            if (local_c8 != (ForElementType<unsigned_int>)0x0) {
              FVar10 = local_c8;
            }
            uVar7 = uVar6;
            if ((int)uVar6 < 0) {
              uVar7 = uVar6 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar6 & 0x1f) & 1
                ) == 0) goto LAB_1419dad02;
          }
          uVar4 = local_e8._0_8_;
          FVar11 = (ForElementType<FSetElementId>)local_b0;
          if (local_a8 != (ForElementType<FSetElementId>)0x0) {
            FVar11 = local_a8;
          }
          pFVar14 = (FScriptContainerElement *)
                    ((longlong)FVar11 + (longlong)*(int *)(local_e8._0_8_ + lVar13 + 0xc) * 4);
          while( true ) {
            uVar7 = *(uint *)pFVar14;
            if ((uVar7 == 0xffffffff) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NextElementIndex != INDEX_NONE",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                   ,0x2b5,L"Corrupt hash"), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (uVar7 == uVar6) break;
            pFVar14 = (FScriptContainerElement *)(local_e8._0_8_ + (longlong)(int)uVar7 * 0x10 + 8);
          }
          *(uint *)pFVar14 = *(uint *)(uVar4 + lVar13 + 8);
          TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_e8,uVar6,1);
        }
      }
LAB_1419dada5:
      iVar8 = param_1->ArrayNum;
      uVar15 = uVar15 + 1;
      this = local_168;
    } while ((int)uVar15 < iVar8);
  }
  pFVar16 = (FScriptContainerElement *)0x0;
  uStack_12c = 1;
  local_118 = 0;
  pFVar12 = pFVar16;
  pFVar14 = pFVar16;
  if (local_c0 != 0) {
    FVar10 = this_00;
    if (local_c8 != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_c8;
    }
    uVar15 = *(uint *)FVar10;
    while (local_118 = (uint)pFVar12, uVar15 == 0) {
      iVar8 = (int)pFVar14;
      local_118 = local_118 + 0x20;
      pFVar12 = (FScriptContainerElement *)(ulonglong)local_118;
      uVar15 = iVar8 + 1;
      pFVar14 = (FScriptContainerElement *)(ulonglong)uVar15;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15) {
        pFVar12 = (FScriptContainerElement *)(ulonglong)local_c0;
        goto LAB_1419dae4e;
      }
      uVar15 = *(uint *)((uchar *)((longlong)FVar10 + 4) + (longlong)iVar8 * 4);
    }
    uStack_12c = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_12c * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar15 = (int)lVar2 + -1 + local_118;
    pFVar12 = (FScriptContainerElement *)(ulonglong)uVar15;
    if ((int)local_c0 < (int)uVar15) {
      pFVar12 = (FScriptContainerElement *)(ulonglong)local_c0;
    }
  }
LAB_1419dae4e:
  uStack_130 = SUB84(pFVar14,0);
  local_160 = (longlong *)local_e8;
  uStack_120 = 0xffffffff;
  uStack_11c = (uint)pFVar12;
  uStack_114 = local_ec;
  TStack_158._padding_ = CONCAT44(uStack_12c,uStack_130);
  TStack_158.UnvisitedBitMask = 0xffffffff;
  TStack_158._28_4_ = local_ec;
  TStack_158.BaseBitIndex = local_118;
  TStack_158.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
  local_138 = local_160;
  local_128 = this_00;
  TStack_158.CurrentBitIndex = uStack_11c;
  if ((int)uStack_11c < (int)local_c0) {
    do {
      pTVar9 = TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                       *)&this->ShortNameToLongName,
                      *(FName *)(*local_160 + (longlong)(int)pFVar12 * 0x10));
      pFVar14 = (FScriptContainerElement *)&pTVar9->field_0x8;
      if (pTVar9 == (TTuple<FName,FStatMessage> *)0x0) {
        pFVar14 = pFVar16;
      }
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        pFVar12 = (param_1->AllocatorInstance).Data;
        if (((pFVar12 <= pFVar14) && (pFVar14 < pFVar12 + (longlong)param_1->ArrayMax * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == param_1->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar8 + 1;
        uVar4 = *(undefined8 *)(pFVar14 + 8);
        pFVar12 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar12 = *(undefined8 *)pFVar14;
        *(undefined8 *)(pFVar12 + 8) = uVar4;
      }
      TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
      pFVar12 = (FScriptContainerElement *)(ulonglong)(uint)TStack_158.CurrentBitIndex;
    } while (TStack_158.CurrentBitIndex < *(int *)((longlong)TStack_158.Array + 0x18));
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_90._4_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_98,0,(int *)((longlong)&local_90 + 4));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_88.NumBits = 0;
  if (0x80 < (uint)local_88.MaxBits) {
    local_88.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
  }
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  bVar5 = local_e8._12_4_ != 0;
  local_e8._8_8_ = (ulonglong)(uint)local_e8._12_4_ << 0x20;
  if (bVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b4 = 0;
  local_c0 = 0;
  local_b8 = -1;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)this_00,0)
    ;
  }
  if (local_c8 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  return;
code_r0x0001419dacc1:
  uVar6 = *(uint *)(local_e8._0_8_ + lVar13 + 8);
  if (uVar6 == 0xffffffff) goto LAB_1419dada5;
  goto LAB_1419dacb0;
}

// AddToHistoryAndEmpty @ 1419dd600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStatsThreadState::AddToHistoryAndEmpty(FStatsThreadState *this,FStatPacketArray *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  TMap<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>_>
  *pTVar3;
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *pTVar4;
  TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
  *pTVar5;
  TMultiMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,1>_> *this_00;
  TMap<__int64,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>_>
  *pTVar6;
  TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy> *this_01;
  FScriptContainerElement *pFVar7;
  undefined8 *puVar8;
  uint *puVar9;
  void *_Src;
  undefined1 *puVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  FStatPacketArray *pFVar18;
  TTuple<__int64,FStatPacketArray> *pTVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  FScriptContainerElement *pFVar22;
  TStatId TVar23;
  ulonglong uVar24;
  longlong lVar25;
  ForElementType<FSetElementId> FVar26;
  ForElementType<FSetElementId> FVar27;
  undefined1 *puVar28;
  ForAnyElementType FVar29;
  TMap<unsigned_int,FEventData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>_>
  *pTVar30;
  uint uVar31;
  FScriptContainerElement *pFVar32;
  undefined1 *puVar33;
  uint *puVar34;
  TBitArray<FDefaultBitArrayAllocator> *pTVar35;
  longlong *plVar36;
  TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
  *this_02;
  uint uVar37;
  longlong lVar38;
  longlong lVar39;
  undefined1 auStackY_438 [32];
  undefined1 local_3e8;
  undefined1 local_3e7;
  undefined1 local_3e6;
  undefined1 local_3e5;
  FIdentityFunctor local_3e4 [4];
  undefined8 *local_3e0;
  uint local_3d8;
  longlong *local_3d0;
  undefined8 *local_3c8;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_3c0;
  uint local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  FScriptContainerElement *local_398;
  longlong local_390;
  FScriptContainerElement *local_388;
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *local_380;
  undefined8 uStack_378;
  TBitArray<FDefaultBitArrayAllocator> *local_370;
  uint uStack_368;
  int iStack_364;
  int local_360;
  undefined4 uStack_35c;
  int iStack_358;
  undefined4 uStack_354;
  longlong *local_348;
  undefined1 auStack_340 [16];
  uint uStack_330;
  uint uStack_32c;
  longlong local_328;
  TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
  *pTStack_320;
  TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
  *local_318;
  char local_310;
  char cStack_30f;
  longlong *local_308;
  undefined1 auStack_300 [16];
  uint uStack_2f0;
  uint uStack_2ec;
  longlong local_2e8;
  TSet<TTuple<unsigned_int,FEventData>,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>,FDefaultSetAllocator>
  *pTStack_2e0;
  TSet<TTuple<unsigned_int,FEventData>,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>,FDefaultSetAllocator>
  *local_2d8;
  char local_2d0;
  char cStack_2cf;
  longlong *local_2c8;
  undefined1 auStack_2c0 [16];
  uint uStack_2b0;
  uint uStack_2ac;
  longlong local_2a8;
  TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  *pTStack_2a0;
  TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  *local_298;
  char local_290;
  char cStack_28f;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_288;
  int local_268;
  undefined1 local_264 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
  *local_238;
  TBitArray<FDefaultBitArrayAllocator> *local_230;
  FStatsThreadState *local_228;
  int local_220;
  TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
  *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_210;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [12];
  uint local_1dc;
  longlong local_1d8;
  uint local_1d0;
  int local_1cc;
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *local_1c0;
  undefined1 local_1b8 [12];
  uint local_1ac;
  longlong local_1a8;
  uint local_1a0;
  int local_19c;
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *local_190;
  FSourceLocation local_188;
  FCycleCounter local_168 [2];
  undefined1 local_150 [32];
  longlong local_130;
  TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
  *pTStack_128;
  undefined1 local_120 [32];
  longlong local_100;
  TSet<TTuple<unsigned_int,FEventData>,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>,FDefaultSetAllocator>
  *pTStack_f8;
  undefined1 local_f0 [32];
  longlong local_d0;
  TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  *pTStack_c8;
  undefined4 local_a4;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_438;
  local_228 = this;
  if (FThreadStats::bPrimaryDisableForever) {
    FStatPacketArray::Empty(param_1);
    if (*(int *)&(this->CondensedStackHistory).field_0x48 < 2) {
      TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
                        *)&this->CondensedStackHistory);
      TSparseArray<TSparseSetElement<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&this->CondensedStackHistory,0);
    }
    else {
      TSparseArray<TSparseSetElement<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&this->CondensedStackHistory,0);
      *(undefined4 *)&(this->CondensedStackHistory).field_0x48 = 1;
      TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
                *)&this->CondensedStackHistory);
    }
    if ((this->GoodFrames).HashSize < 2) {
      TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::UnhashElements
                (&this->GoodFrames);
      TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(&(this->GoodFrames).Elements,0);
    }
    else {
      TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(&(this->GoodFrames).Elements,0);
      (this->GoodFrames).HashSize = 1;
      TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Rehash(&this->GoodFrames);
    }
    pTVar4 = &this->BadFrames;
    if ((this->BadFrames).HashSize < 2) {
      TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::UnhashElements(pTVar4);
      TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(&pTVar4->Elements,0);
    }
    else {
      TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(&pTVar4->Elements,0);
      (this->BadFrames).HashSize = 1;
      TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Rehash(pTVar4);
    }
    pTVar5 = &this->NotClearedEveryFrame;
    if (*(int *)&(this->NotClearedEveryFrame).field_0x48 < 2) {
      TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                        *)pTVar5);
      TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)pTVar5,0);
    }
    else {
      TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)pTVar5,0);
      *(undefined4 *)&(this->NotClearedEveryFrame).field_0x48 = 1;
      TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                *)pTVar5);
    }
    pTVar5 = &this->ShortNameToLongName;
    if (*(int *)&(this->ShortNameToLongName).field_0x48 < 2) {
      TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                        *)pTVar5);
      TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)pTVar5,0);
    }
    else {
      TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)pTVar5,0);
      *(undefined4 *)&(this->ShortNameToLongName).field_0x48 = 1;
      TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                *)pTVar5);
    }
    this_00 = &this->Groups;
    if (*(int *)&(this->Groups).field_0x48 < 2) {
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>::
      UnhashElements((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>
                      *)this_00);
      TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,0);
    }
    else {
      TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,0);
      *(undefined4 *)&(this->Groups).field_0x48 = 1;
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>::
      Rehash((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>
              *)this_00);
    }
    pTVar6 = &this->History;
    if (*(int *)&(this->History).field_0x48 < 2) {
      TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
                        *)pTVar6);
      TSparseArray<TSparseSetElement<TTuple<__int64,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<__int64,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)pTVar6,0);
    }
    else {
      TSparseArray<TSparseSetElement<TTuple<__int64,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<__int64,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)pTVar6,0);
      *(undefined4 *)&(this->History).field_0x48 = 1;
      TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
                *)pTVar6);
    }
    pTVar30 = &this->EventsHistory;
    if (*(int *)&(this->EventsHistory).field_0x48 < 2) {
      TSet<TTuple<unsigned_int,FEventData>,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<unsigned_int,FEventData>,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>,FDefaultSetAllocator>
                        *)pTVar30);
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,FEventData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FEventData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)pTVar30,0);
    }
    else {
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,FEventData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FEventData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)pTVar30,0);
      *(undefined4 *)&(this->EventsHistory).field_0x48 = 1;
      TSet<TTuple<unsigned_int,FEventData>,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<unsigned_int,FEventData>,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>,FDefaultSetAllocator>
                *)pTVar30);
    }
  }
  else {
    pFVar32 = (param_1->Packets).AllocatorInstance.Data;
    this_02 = (TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
               *)&this->History;
    iVar17 = (param_1->Packets).ArrayNum;
    pFVar22 = pFVar32 + (longlong)iVar17 * 8;
    while( true ) {
      if ((param_1->Packets).ArrayNum != iVar17) {
        local_3e8 = 0;
        `TCheckedPointerIterator<FStatPacket_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3e8);
      }
      if (pFVar32 == pFVar22) break;
      local_3d0 = *(longlong **)pFVar32;
      local_390 = *local_3d0;
      pFVar18 = TMapBase<__int64,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>_>
                ::FindOrAddImpl<__int64_const_&>
                          ((TMapBase<__int64,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>_>
                            *)this_02,(int)((ulonglong)local_390 >> 0x20) * 0x17 + (int)local_390,
                           &local_390);
      pFVar7 = (pFVar18->Packets).AllocatorInstance.Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_3d0) &&
          ((FScriptContainerElement *)&local_3d0 <
           pFVar7 + (longlong)(pFVar18->Packets).ArrayMax * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar15 = (pFVar18->Packets).ArrayNum;
      piVar1 = &(pFVar18->Packets).ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)pFVar18,piVar1);
      }
      (pFVar18->Packets).ArrayNum = iVar15 + 1;
      *(longlong **)((pFVar18->Packets).AllocatorInstance.Data + (longlong)iVar15 * 8) = local_3d0;
      if ((local_390 <= this->LastFullFrameMetaAndNonFrame) &&
         (this->LastFullFrameMetaAndNonFrame != -1)) {
        ProcessNonFrameStats
                  (this,(TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_> *)
                        (local_3d0 + 3),
                   (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0);
      }
      pFVar32 = pFVar32 + 8;
    }
    piVar1 = &(param_1->Packets).ArrayMax;
    (param_1->Packets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)param_1,0,piVar1);
    }
    local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3c0.ArrayNum = 0;
    local_3c0.ArrayMax = 0;
    TMapBase<__int64,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>_>
    ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<__int64,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>_>
                *)this_02,&local_3c0);
    AlgoImpl::
    IntroSortInternal<__int64,int,FIdentityFunctor,TDereferenceWrapper<__int64,TLess<void>_>_>
              ((long64 *)local_3c0.AllocatorInstance.Data,local_3c0.ArrayNum,local_3e4[0],
               (TLess<void> *)local_3e4);
    lVar25 = this->CurrentEndOfPipeFrame;
    if (this->CurrentRenderFrame < this->CurrentEndOfPipeFrame) {
      lVar25 = this->CurrentRenderFrame;
    }
    if (this->CurrentGameFrame < lVar25) {
      lVar25 = this->CurrentGameFrame;
    }
    uVar24 = (ulonglong)local_3c0.ArrayNum;
    local_3b0 = local_3c0.ArrayNum;
    local_398 = local_3c0.AllocatorInstance.Data + uVar24 * 8;
    lVar25 = lVar25 + -1;
    FVar29.Data = local_3c0.AllocatorInstance.Data;
    local_3a8 = lVar25;
    while( true ) {
      pFVar22 = local_398;
      lVar39 = -1;
      local_388 = FVar29.Data;
      if (local_3c0.ArrayNum != (int)uVar24) {
        local_3e7 = 0;
        `TCheckedPointerIterator<__int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3e7);
      }
      if (FVar29.Data == pFVar22) break;
      lVar39 = this->LastFullFrameMetaAndNonFrame;
      lVar38 = *(longlong *)FVar29.Data;
      if (lVar39 < 0) {
        lVar39 = lVar38 + -1;
        this->LastFullFrameMetaAndNonFrame = lVar39;
      }
      local_3a0 = lVar38;
      if ((lVar38 <= lVar25) && (lVar38 == lVar39 + 1)) {
        pTVar19 = TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
                  ::Find(this_02,lVar38);
        if ((pTVar19 == (TTuple<__int64,FStatPacketArray> *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        puVar10 = &pTVar19->field_0x8;
        local_3c8 = (undefined8 *)0x0;
        if (this->bFindMemoryExtensiveStats != false) {
          FindAndDumpMemoryExtensiveStats(this,(FStatPacketArray *)puVar10);
        }
        local_98.Elements._0_8_ = 0;
        local_98.Elements._32_8_ = 0;
        local_98.Elements._40_4_ = 0;
        local_98.Elements._52_4_ = 0;
        local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_98.HashSize = 0;
        local_98.Elements._8_8_ = 0;
        local_98.Elements._44_4_ = 0x80;
        local_98.Elements._48_4_ = 0xffffffff;
        plVar21 = *(longlong **)puVar10;
        iVar17 = *(int *)&pTVar19->field_0x10;
        plVar36 = plVar21 + iVar17;
        while( true ) {
          if (*(int *)&pTVar19->field_0x10 != iVar17) {
            local_3e6 = 0;
            `TCheckedPointerIterator<FStatPacket_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_3e6);
          }
          if (plVar21 == plVar36) break;
          puVar8 = (undefined8 *)*plVar21;
          ProcessNonFrameStats
                    (this,(TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_> *)
                          (puVar8 + 3),&local_98);
          if ((local_3c8 == (undefined8 *)0x0) && (*(int *)((longlong)puVar8 + 0xc) == 1)) {
            local_3c8 = puVar8;
          }
          plVar21 = plVar21 + 1;
        }
        if (local_3c8 != (undefined8 *)0x0) {
          if (*(int *)&(this->BadFrames).Elements.field_0x8 !=
              *(int *)&(this->BadFrames).Elements.field_0x34) {
            FVar27 = (this->BadFrames).Hash.SecondaryData;
            FVar26 = (ForElementType<FSetElementId>)&(this->BadFrames).Hash;
            if (FVar27 != (ForElementType<FSetElementId>)0x0) {
              FVar26 = FVar27;
            }
            iVar17 = *(int *)((longlong)FVar26 +
                             ((ulonglong)((this->BadFrames).HashSize - 1) &
                             (lVar38 >> 0x20) * 0x17 + lVar38) * 4);
            if (iVar17 != -1) {
              lVar25 = *(longlong *)&(this->BadFrames).Elements;
              do {
                if (*(longlong *)(lVar25 + (longlong)iVar17 * 0x10) == lVar38) goto LAB_1419ddfde;
                iVar17 = *(int *)(lVar25 + 8 + (longlong)iVar17 * 0x10);
              } while (iVar17 != -1);
            }
          }
          pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->NotClearedEveryFrame).field_0x10
          ;
          local_3e0 = (undefined8 *)0x0;
          iVar17 = *(int *)&(this->NotClearedEveryFrame).field_0x28;
          local_380 = (TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)
                      &this->NotClearedEveryFrame;
          iVar15 = 0;
          local_360 = 0;
          uVar16 = 1;
          iStack_364 = 0;
          if (iVar17 != 0) {
            puVar9 = *(uint **)&(this->NotClearedEveryFrame).field_0x20;
            puVar34 = (uint *)pTVar35;
            if (puVar9 != (uint *)0x0) {
              puVar34 = puVar9;
            }
            uVar31 = *puVar34;
            while (uVar31 == 0) {
              lVar25 = (longlong)iVar15;
              local_360 = local_360 + 0x20;
              iVar15 = iVar15 + 1;
              iStack_364 = iVar17;
              if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15)
              goto LAB_1419ddc20;
              uVar31 = puVar34[lVar25 + 1];
            }
            uVar16 = -uVar31 & uVar31;
            uVar24 = (ulonglong)uVar16 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            local_220 = (int)lVar25;
            iStack_364 = local_220 + -1 + local_360;
            if (iVar17 < iStack_364) {
              iStack_364 = iVar17;
            }
          }
LAB_1419ddc20:
          uVar31 = *(uint *)&(this->NotClearedEveryFrame).field_0x28;
          uStack_35c = local_a4;
          iStack_358 = *(int *)&(this->NotClearedEveryFrame).field_0x8 -
                       *(int *)&(this->NotClearedEveryFrame).field_0x34;
          uVar37 = uVar31 & 0xffffffe0;
          uStack_378 = CONCAT44(uVar16,iVar15);
          uStack_368 = 0xffffffff;
          TStack_210.CurrentBitIndex = iStack_364;
          TStack_210.UnvisitedBitMask = 0xffffffff;
          TStack_210._padding_ = uStack_378;
          iVar15 = (int)uVar31 >> 5;
          TStack_210._28_4_ = local_a4;
          TStack_210.BaseBitIndex = local_360;
          uStack_1f0 = CONCAT44(uStack_354,iStack_358);
          local_3d8 = uVar31;
          local_370 = pTVar35;
          local_238 = (TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
                       *)local_380;
          local_230 = pTVar35;
          local_218 = (TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
                       *)local_380;
          TStack_210.Array = pTVar35;
          if ((((int)uVar31 < 0) || (iVar17 < (int)uVar31)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          puVar8 = local_3c8;
          uVar16 = *(uint *)&(this->NotClearedEveryFrame).field_0x28;
          if (uVar31 != uVar16) {
            puVar28 = *(undefined1 **)&(this->NotClearedEveryFrame).field_0x20;
            puVar33 = (undefined1 *)pTVar35;
            if (puVar28 != (undefined1 *)0x0) {
              puVar33 = puVar28;
            }
            uVar31 = -1 << ((byte)uVar31 & 0x1f) & *(uint *)(puVar33 + (longlong)iVar15 * 4);
            while (uVar31 == 0) {
              lVar25 = (longlong)iVar15;
              uVar37 = uVar37 + 0x20;
              iVar15 = iVar15 + 1;
              uVar31 = uVar16;
              local_3d8 = uVar16;
              if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
              goto LAB_1419ddd50;
              uVar31 = *(uint *)(puVar33 + lVar25 * 4 + 4);
            }
            uVar24 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
            lVar25 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            local_268 = (int)lVar25;
            uVar31 = (uVar37 - 1) + local_268;
            local_3d8 = uVar31;
            if ((int)uVar16 < (int)uVar31) {
              uVar31 = uVar16;
              local_3d8 = uVar16;
            }
          }
LAB_1419ddd50:
          while( true ) {
            pTVar5 = local_218;
            if (*(int *)(&local_218->field_0x0 + 8) - *(int *)(&local_218->field_0x0 + 0x34) !=
                (int)uStack_1f0) {
              local_3e5 = 0;
              `TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3e5);
            }
            this = local_228;
            if (((TStack_210.CurrentBitIndex == uVar31) && (TStack_210.Array == pTVar35)) &&
               (pTVar5 == local_238)) break;
            plVar36 = (longlong *)
                      ((longlong)TStack_210.CurrentBitIndex * 0x20 + *(longlong *)&pTVar5->field_0x0
                      );
            lVar25 = *plVar36;
            uVar16 = ::GetTypeHash((FNameEntryId)(uint)lVar25);
            if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
              FVar27 = (ForElementType<FSetElementId>)&local_98.Hash;
              if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar27 = local_98.Hash.SecondaryData;
              }
              for (iVar17 = *(int *)((longlong)FVar27 +
                                    (ulonglong)
                                    (local_98.HashSize - 1U &
                                    (int)((ulonglong)lVar25 >> 0x20) + uVar16) * 4); iVar17 != -1;
                  iVar17 = *(int *)(local_98.Elements._0_8_ + 8 + (longlong)iVar17 * 0x10)) {
                if (*(longlong *)(local_98.Elements._0_8_ + (longlong)iVar17 * 0x10) == lVar25)
                goto LAB_1419ddf82;
              }
            }
            if (local_3e0 == (undefined8 *)0x0) {
              puVar20 = ::operator_new(0x40);
              if (puVar20 == (undefined8 *)0x0) {
                puVar20 = (undefined8 *)0x0;
              }
              else {
                *puVar20 = *puVar8;
                *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar8 + 1);
                *(undefined4 *)((longlong)puVar20 + 0xc) = *(undefined4 *)((longlong)puVar8 + 0xc);
                *(undefined1 *)(puVar20 + 2) = 0;
                TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::
                TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>
                          ((TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_> *)
                           (puVar20 + 3),0);
                pFVar2 = (ForAnyElementType *)(puVar20 + 6);
                pFVar2->Data = (FScriptContainerElement *)0x0;
                iVar17 = *(int *)(puVar8 + 7);
                _Src = (void *)puVar8[6];
                *(int *)(puVar20 + 7) = iVar17;
                if (iVar17 == 0) {
                  *(int *)((longlong)puVar20 + 0x3c) = 0;
                  uVar31 = local_3d8;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar17,0,pFVar2,iVar17,(int *)((longlong)puVar20 + 0x3c));
                  memcpy(pFVar2->Data,_Src,(longlong)iVar17 << 2);
                  uVar31 = local_3d8;
                }
              }
              local_3e0 = puVar20;
              if (((*(undefined8 ***)puVar10 <= &local_3e0) &&
                  (&local_3e0 < *(undefined8 ***)puVar10 + *(int *)&pTVar19->field_0x14)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              iVar17 = *(int *)&pTVar19->field_0x10;
              if (iVar17 == *(int *)&pTVar19->field_0x14) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)puVar10,(int *)&pTVar19->field_0x14);
              }
              *(int *)&pTVar19->field_0x10 = iVar17 + 1;
              *(undefined8 **)(*(longlong *)puVar10 + (longlong)iVar17 * 8) = local_3e0;
            }
            plVar21 = operator_new<FStatMessage,65536,TSizedDefaultAllocator<32>_>
                                (0x10,(TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>
                                       *)(local_3e0 + 3));
            if (plVar21 != (longlong *)0x0) {
              lVar25 = plVar36[2];
              *plVar21 = plVar36[1];
              plVar21[1] = lVar25;
            }
LAB_1419ddf82:
            TStack_210.UnvisitedBitMask = TStack_210.UnvisitedBitMask & ~TStack_210._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_210);
            pTVar35 = local_230;
          }
          if (local_3e0 != (undefined8 *)0x0) {
            LOCK();
            (local_228->NumStatMessages).Counter =
                 (local_228->NumStatMessages).Counter + *(int *)(local_3e0 + 5);
            UNLOCK();
          }
          TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Emplace<__int64_const_&>
                    (&local_228->GoodFrames,(long64 *)local_264,(bool *)&local_3a0);
          lVar38 = local_3a0;
        }
LAB_1419ddfde:
        this->LastFullFrameMetaAndNonFrame = lVar38;
        local_98.HashSize = 0;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98.Elements);
        this_02 = (TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
                   *)&this->History;
        FVar29.Data = local_388;
        lVar25 = local_3a8;
      }
      uVar24 = (ulonglong)local_3b0;
      FVar29.Data = FVar29.Data + 8;
    }
    pFVar22 = (FScriptContainerElement *)GetLatestValidFrame(this);
    local_398 = pFVar22;
    if (0 < (longlong)pFVar22) {
      pTVar4 = &this->GoodFrames;
      if (*(int *)&(this->GoodFrames).Elements.field_0x8 !=
          *(int *)&(this->GoodFrames).Elements.field_0x34) {
        FVar27 = (this->GoodFrames).Hash.SecondaryData;
        if (FVar27 == (ForElementType<FSetElementId>)0x0) {
          FVar27 = (ForElementType<FSetElementId>)&(this->GoodFrames).Hash;
        }
        iVar17 = *(int *)((longlong)FVar27 +
                         ((ulonglong)((this->GoodFrames).HashSize - 1) &
                         ((longlong)pFVar22 >> 0x20) * 0x17 + (longlong)pFVar22) * 4);
        if (iVar17 != -1) {
          do {
            if ((FScriptContainerElement *)
                *(longlong *)(*(longlong *)&pTVar4->Elements + (longlong)iVar17 * 0x10) == pFVar22)
            goto LAB_1419de0c6;
            iVar17 = *(int *)(*(longlong *)&pTVar4->Elements + 8 + (longlong)iVar17 * 0x10);
          } while (iVar17 != -1);
        }
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("GoodFrames.Contains(NewLatestFrame)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                          ,0x3e4,L"");
      if (bVar12) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
LAB_1419de0c6:
      lVar25 = local_3a8;
      if (this->LastFullFrameProcessed < (longlong)pFVar22) {
        local_288.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->GoodFrames).Elements.field_0x10;
        local_288._padding_._0_4_ = 0;
        lVar25 = this->LastFullFrameProcessed + 1;
        local_288.UnvisitedBitMask = 0xffffffff;
        local_288.CurrentBitIndex = 0;
        local_288.BaseBitIndex = 0;
        local_288._padding_._4_4_ = 1;
        if (*(int *)&(this->GoodFrames).Elements.field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_288);
        }
        uStack_378 = CONCAT44(local_288._padding_._4_4_,(undefined4)local_288._padding_);
        uStack_368 = local_288.UnvisitedBitMask;
        iStack_364 = local_288.CurrentBitIndex;
        local_360 = local_288.BaseBitIndex;
        uStack_35c = local_288._28_4_;
        local_370 = local_288.Array;
        TStack_258.CurrentBitIndex = local_288.CurrentBitIndex;
        TStack_258.UnvisitedBitMask = local_288.UnvisitedBitMask;
        TStack_258._padding_._0_4_ = (undefined4)local_288._padding_;
        TStack_258._padding_._4_4_ = local_288._padding_._4_4_;
        TStack_258.Array = local_288.Array;
        TStack_258.BaseBitIndex = local_288.BaseBitIndex;
        TStack_258._28_4_ = local_288._28_4_;
        iVar17 = local_288.CurrentBitIndex;
        local_380 = pTVar4;
        local_264._4_8_ = pTVar4;
        if (local_288.CurrentBitIndex < (local_288.Array)->NumBits) {
          do {
            if (((lVar39 == -1) ||
                (*(longlong *)
                  (*(longlong *)
                    (TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_264._4_8_ + (longlong)iVar17 * 0x10) < lVar39)) &&
               (lVar38 = *(longlong *)
                          (*(longlong *)
                            (TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_264._4_8_ + (longlong)iVar17 * 0x10),
               lVar38 <= this->LastFullFrameMetaAndNonFrame)) {
              lVar39 = lVar38;
            }
            TStack_258.UnvisitedBitMask = TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
            iVar17 = TStack_258.CurrentBitIndex;
          } while (TStack_258.CurrentBitIndex < (TStack_258.Array)->NumBits);
        }
        TVar23 = FThreadSafeStaticStatInner<FStat_STAT_StatsBroadcast,1>::GetStatId
                           ((FThreadSafeStaticStatInner<FStat_STAT_StatsBroadcast,1> *)
                            &StatPtr_STAT_StatsBroadcast);
        local_188.Impl._Line = 0x3eb;
        local_188.Impl._Function =
             "void __cdecl FStatsThreadState::AddToHistoryAndEmpty(struct FStatPacketArray &)";
        local_188.Impl._Column = 5;
        local_188.Impl._File =
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
        ;
        FScopeCycleCounter::FScopeCycleCounter
                  ((FScopeCycleCounter *)local_168,*(TStatIdData **)&(TVar23.StatIdPtr)->Name,
                   CycleStat|ClearEveryFrame,false,&local_188);
        if (lVar25 < lVar39) {
          lVar25 = lVar39;
        }
        if (lVar25 <= (longlong)pFVar22) {
          do {
            if (*(int *)&(this->GoodFrames).Elements.field_0x8 !=
                *(int *)&(this->GoodFrames).Elements.field_0x34) {
              FVar27 = (this->GoodFrames).Hash.SecondaryData;
              FVar26 = (ForElementType<FSetElementId>)&(this->GoodFrames).Hash;
              if (FVar27 != (ForElementType<FSetElementId>)0x0) {
                FVar26 = FVar27;
              }
              iVar17 = *(int *)((longlong)FVar26 +
                               ((ulonglong)((this->GoodFrames).HashSize - 1) &
                               (lVar25 >> 0x20) * 0x17 + lVar25) * 4);
              if (iVar17 != -1) {
                lVar39 = *(longlong *)&(this->GoodFrames).Elements;
LAB_1419de2a0:
                if (*(longlong *)(lVar39 + (longlong)iVar17 * 0x10) != lVar25)
                goto code_r0x0001419de2ab;
                this_01 = &this->NewFrameDelegate;
                if ((this_01 ==
                     (TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy> *)0x0)
                   && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Mutex",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                           ,0x1b,L""), bVar12)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                EnterCriticalSection((LPCRITICAL_SECTION)this_01);
                puVar10 = &(this->NewFrameDelegate).field_0x3c;
                *(int *)puVar10 = *(int *)puVar10 + 1;
                bVar12 = false;
                uVar16 = *(int *)&(this->NewFrameDelegate).field_0x30 - 1;
                if (-1 < (int)uVar16) {
                  lVar39 = (longlong)(int)uVar16 << 4;
                  do {
                    uVar31 = 0;
                    if ((int)uVar16 < *(int *)&(this->NewFrameDelegate).field_0x30) {
                      uVar31 = ~uVar16 >> 0x1f;
                    }
                    if ((uVar31 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    lVar38 = *(longlong *)&(this->NewFrameDelegate).field_0x28;
                    if (((*(int *)(lVar38 + 8 + lVar39) == 0) ||
                        (plVar36 = *(longlong **)(lVar38 + lVar39), plVar36 == (longlong *)0x0)) ||
                       (cVar14 = (**(code **)(*plVar36 + 0x68))(), cVar14 == '\0')) {
                      bVar12 = true;
                    }
                    lVar39 = lVar39 + -0x10;
                    uVar16 = uVar16 - 1;
                    pFVar22 = local_398;
                  } while (-1 < (int)uVar16);
                }
                puVar10 = &(this->NewFrameDelegate).field_0x3c;
                *(int *)puVar10 = *(int *)puVar10 + -1;
                if (bVar12) {
                  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_01,false);
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)this_01);
                this->LastFullFrameProcessed = lVar25;
              }
            }
LAB_1419de3aa:
            lVar25 = lVar25 + 1;
          } while (lVar25 <= (longlong)pFVar22);
        }
        FCycleCounter::Stop(local_168);
        lVar25 = local_3a8;
      }
    }
    iVar17 = 1;
    lVar25 = lVar25 - this->HistoryFrames;
    TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::TIterator::TIterator
              ((TIterator *)local_1e8,&this->BadFrames);
    if (local_1cc < *(int *)(local_1d8 + 0x18)) {
      do {
        lVar39 = *(longlong *)(*(longlong *)local_1e8._0_8_ + (longlong)local_1cc * 0x10);
        if ((lVar39 <= this->LastFullFrameMetaAndNonFrame) && (lVar39 < lVar25)) {
          TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::RemoveByIndex
                    (local_1c0,local_1cc);
        }
        local_1d0 = local_1d0 & ~local_1dc;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1e8 + 8));
      } while (local_1cc < *(int *)(local_1d8 + 0x18));
    }
    pTVar6 = &this->History;
    TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_150,
               (TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
                *)pTVar6);
    local_310 = '\0';
    cStack_30f = '\0';
    stack0xfffffffffffffcc8 = local_150._16_16_;
    local_348 = (longlong *)local_150._0_8_;
    auStack_340._0_8_ = local_150._8_8_;
    local_328 = local_130;
    pTStack_320 = pTStack_128;
    uVar24 = local_150._24_8_ >> 0x20;
    uVar16 = local_150._28_4_;
    local_318 = (TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
                 *)pTVar6;
    if ((int)uVar16 < *(int *)(local_150._16_8_ + 0x18)) {
      do {
        lVar39 = *(longlong *)((longlong)(int)uVar24 * 0x20 + *local_348);
        if ((lVar39 <= this->LastFullFrameMetaAndNonFrame) && (lVar39 < lVar25)) {
          TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_320,uVar16);
          local_310 = '\x01';
        }
        uStack_330 = uStack_330 & ~auStack_340._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_340);
        uVar24 = (ulonglong)uStack_32c;
        uVar16 = uStack_32c;
      } while ((int)uStack_32c < *(int *)(auStack_340._8_8_ + 0x18));
      if ((local_310 != '\0') && (cStack_30f != '\0')) {
        uVar16 = *(int *)&(local_318->Elements).field_0x8 -
                 *(int *)&(local_318->Elements).field_0x34;
        if (uVar16 < 4) {
          iVar15 = 1;
        }
        else {
          uVar24 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
          lVar39 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          iVar15 = 1 << ((byte)lVar39 & 0x1f);
        }
        if (((0 < (int)uVar16) && (local_318->HashSize < iVar15)) || (iVar15 < local_318->HashSize))
        {
          local_318->HashSize = iVar15;
          TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
          ::Rehash(local_318);
        }
      }
    }
    pTVar30 = &this->EventsHistory;
    TSet<TTuple<unsigned_int,FEventData>,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_120,
               (TSet<TTuple<unsigned_int,FEventData>,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>,FDefaultSetAllocator>
                *)pTVar30);
    local_2d0 = '\0';
    cStack_2cf = '\0';
    stack0xfffffffffffffd08 = local_120._16_16_;
    local_308 = (longlong *)local_120._0_8_;
    auStack_300._0_8_ = local_120._8_8_;
    local_2e8 = local_100;
    pTStack_2e0 = pTStack_f8;
    uVar24 = local_120._24_8_ >> 0x20;
    uVar16 = local_120._28_4_;
    local_2d8 = (TSet<TTuple<unsigned_int,FEventData>,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>,FDefaultSetAllocator>
                 *)pTVar30;
    if ((int)uVar16 < *(int *)(local_120._16_8_ + 0x18)) {
      do {
        lVar39 = *(longlong *)((longlong)(int)uVar24 * 0x40 + 0x28 + *local_308);
        if ((lVar39 <= this->LastFullFrameProcessed) && (lVar39 < lVar25)) {
          TSet<TTuple<unsigned_int,FEventData>,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_2e0,uVar16);
          local_2d0 = '\x01';
        }
        uStack_2f0 = uStack_2f0 & ~auStack_300._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_300);
        uVar24 = (ulonglong)uStack_2ec;
        uVar16 = uStack_2ec;
      } while ((int)uStack_2ec < *(int *)(auStack_300._8_8_ + 0x18));
      if ((local_2d0 != '\0') && (cStack_2cf != '\0')) {
        uVar16 = *(int *)&(local_2d8->Elements).field_0x8 -
                 *(int *)&(local_2d8->Elements).field_0x34;
        if (uVar16 < 4) {
          iVar15 = 1;
        }
        else {
          uVar24 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
          lVar39 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          iVar15 = 1 << ((byte)lVar39 & 0x1f);
        }
        if (((0 < (int)uVar16) && (local_2d8->HashSize < iVar15)) || (iVar15 < local_2d8->HashSize))
        {
          local_2d8->HashSize = iVar15;
          TSet<TTuple<unsigned_int,FEventData>,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>,FDefaultSetAllocator>
          ::Rehash(local_2d8);
        }
      }
    }
    pTVar3 = &this->CondensedStackHistory;
    TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_f0,
               (TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
                *)pTVar3);
    local_290 = '\0';
    cStack_28f = '\0';
    stack0xfffffffffffffd48 = local_f0._16_16_;
    local_2c8 = (longlong *)local_f0._0_8_;
    auStack_2c0._0_8_ = local_f0._8_8_;
    local_2a8 = local_d0;
    pTStack_2a0 = pTStack_c8;
    uVar24 = local_f0._24_8_ >> 0x20;
    uVar16 = local_f0._28_4_;
    local_298 = (TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
                 *)pTVar3;
    if ((int)uVar16 < *(int *)(local_f0._16_8_ + 0x18)) {
      do {
        lVar39 = *(longlong *)(*local_2c8 + (longlong)(int)uVar24 * 0x18);
        if ((lVar39 <= this->LastFullFrameProcessed) && (lVar39 < lVar25)) {
          puVar8 = *(undefined8 **)(*local_2c8 + 8 + (longlong)(int)uVar16 * 0x18);
          if (puVar8 != (undefined8 *)0x0) {
            if ((void *)*puVar8 != (void *)0x0) {
              FMemory::Free((void *)*puVar8);
            }
            ::operator_delete(puVar8,0x10);
          }
          TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_2a0,uVar16);
          local_290 = '\x01';
        }
        uStack_2b0 = uStack_2b0 & ~auStack_2c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2c0);
        uVar24 = (ulonglong)uStack_2ac;
        uVar16 = uStack_2ac;
      } while ((int)uStack_2ac < *(int *)(auStack_2c0._8_8_ + 0x18));
      if ((local_290 != '\0') && (cStack_28f != '\0')) {
        uVar16 = *(int *)&(local_298->Elements).field_0x8 -
                 *(int *)&(local_298->Elements).field_0x34;
        if (3 < uVar16) {
          uVar24 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
          lVar25 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          iVar17 = 1 << ((byte)lVar25 & 0x1f);
        }
        if (((0 < (int)uVar16) && (local_298->HashSize < iVar17)) || (iVar17 < local_298->HashSize))
        {
          local_298->HashSize = iVar17;
          TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
          ::Rehash(local_298);
        }
      }
    }
    TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::TIterator::TIterator
              ((TIterator *)local_1b8,&this->GoodFrames);
    if (local_19c < *(int *)(local_1a8 + 0x18)) {
      do {
        lVar25 = *(longlong *)(*(longlong *)local_1b8._0_8_ + (longlong)local_19c * 0x10);
        if (*(int *)&(this->History).field_0x8 != *(int *)&(this->History).field_0x34) {
          puVar10 = *(undefined1 **)&(this->History).field_0x40;
          puVar28 = &(this->History).field_0x38;
          if (puVar10 != (undefined1 *)0x0) {
            puVar28 = puVar10;
          }
          iVar17 = *(int *)(puVar28 +
                           ((ulonglong)(*(int *)&(this->History).field_0x48 - 1) &
                           (lVar25 >> 0x20) * 0x17 + lVar25) * 4);
          if (iVar17 != -1) {
            do {
              if (*(longlong *)((longlong)iVar17 * 0x20 + *(longlong *)&this->History) == lVar25)
              goto LAB_1419de8e5;
              iVar17 = *(int *)((longlong)iVar17 * 0x20 + 0x18 + *(longlong *)&this->History);
            } while (iVar17 != -1);
          }
        }
        if (*(int *)&(this->CondensedStackHistory).field_0x8 !=
            *(int *)&(this->CondensedStackHistory).field_0x34) {
          puVar10 = *(undefined1 **)&(this->CondensedStackHistory).field_0x40;
          puVar28 = &(this->CondensedStackHistory).field_0x38;
          if (puVar10 != (undefined1 *)0x0) {
            puVar28 = puVar10;
          }
          iVar17 = *(int *)(puVar28 +
                           ((ulonglong)(*(int *)&(this->CondensedStackHistory).field_0x48 - 1) &
                           (lVar25 >> 0x20) * 0x17 + lVar25) * 4);
          if (iVar17 != -1) {
            do {
              if (*(longlong *)(*(longlong *)&this->CondensedStackHistory + (longlong)iVar17 * 0x18)
                  == lVar25) goto LAB_1419de8e5;
              iVar17 = *(int *)(*(longlong *)&this->CondensedStackHistory + 0x10 +
                               (longlong)iVar17 * 0x18);
            } while (iVar17 != -1);
          }
        }
        TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::RemoveByIndex
                  (local_190,local_19c);
LAB_1419de8e5:
        local_1a0 = local_1a0 & ~local_1ac;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1b8 + 8));
      } while (local_19c < *(int *)(local_1a8 + 0x18));
    }
    if (local_3c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.AllocatorInstance.Data);
    }
  }
  return;
code_r0x0001419de2ab:
  iVar17 = *(int *)(lVar39 + 8 + (longlong)iVar17 * 0x10);
  if (iVar17 == -1) goto LAB_1419de3aa;
  goto LAB_1419de2a0;
}

// Condense @ 1419e5dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStatsThreadState::Condense
          (FStatsThreadState *this,long64 param_1,
          TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FStatNameAndInfo FVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStackY_d8 [32];
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> local_a8;
  undefined1 local_98 [80];
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  FVar5 = FStatConstants::AdvanceFrame;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  iVar7 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  piVar2 = &param_2->ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,piVar2);
  }
  *piVar1 = iVar7 + 1;
  lVar8 = (longlong)iVar7;
  pFVar3 = (param_2->AllocatorInstance).Data;
  *(uint *)(pFVar3 + lVar8 * 0x10 + 8) = FVar5.Index.Value.Value;
  *(long64 *)(pFVar3 + lVar8 * 0x10) = param_1;
  *(uint *)(pFVar3 + lVar8 * 0x10 + 0xc) = FVar5.Number & 0xffff2fffU | 0x2000;
  FVar5 = FStatConstants::AdvanceFrame;
  iVar7 = *piVar1;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,piVar2);
  }
  *piVar1 = iVar7 + 1;
  lVar8 = (longlong)iVar7;
  pFVar3 = (param_2->AllocatorInstance).Data;
  *(uint *)(pFVar3 + lVar8 * 0x10 + 8) = FVar5.Index.Value.Value;
  *(long64 *)(pFVar3 + lVar8 * 0x10) = param_1;
  *(uint *)(pFVar3 + lVar8 * 0x10 + 0xc) = FVar5.Number & 0xffff3fffU | 0x3000;
  FVar5 = FStatConstants::AdvanceFrame;
  iVar7 = *piVar1;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,piVar2);
  }
  *piVar1 = iVar7 + 1;
  lVar8 = (longlong)iVar7;
  pFVar3 = (param_2->AllocatorInstance).Data;
  *(uint *)(pFVar3 + lVar8 * 0x10 + 8) = FVar5.Index.Value.Value;
  *(long64 *)(pFVar3 + lVar8 * 0x10) = param_1;
  *(uint *)(pFVar3 + lVar8 * 0x10 + 0xc) = FVar5.Number & 0xffff4fffU | 0x4000;
  FRawStatStackNode::FRawStatStackNode((FRawStatStackNode *)local_98);
  GetRawStackStats(this,param_1,(FRawStatStackNode *)local_98,param_2);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  FRawStatStackNode::Encode((FRawStatStackNode *)local_98,&local_a8);
  if (param_2 == &local_a8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar8 = (longlong)local_a8.ArrayNum;
  if (local_a8.ArrayNum != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_a8.ArrayNum,&param_2->AllocatorInstance,piVar1,piVar2);
    memcpy((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x10,
           local_a8.AllocatorInstance.Data,lVar8 << 4);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  FRawStatStackNode::DeleteAllChildrenNodes((FRawStatStackNode *)local_98);
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_98 + 0x10));
  return;
}

// FindAndDumpMemoryExtensiveStats @ 1419f8a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStatsThreadState::FindAndDumpMemoryExtensiveStats
          (FStatsThreadState *this,FStatPacketArray *param_1)

{
  FName *this_00;
  undefined8 uVar1;
  code *pcVar2;
  float fVar3;
  int iVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_s_1 TVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte bVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  ForElementType<unsigned_int> FVar19;
  longlong *plVar20;
  ulonglong uVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStack_1e8 [32];
  wchar_t *local_1c8;
  undefined1 local_1b8;
  FIdentityFunctor local_1b7 [3];
  int local_1b4;
  undefined1 local_1b0 [4];
  int local_1ac;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_s_1 local_1a8;
  int local_1a0;
  uint uStack_19c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_198;
  undefined4 local_190;
  uint uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  FScriptContainerElement *local_180;
  undefined4 local_178;
  uint uStack_174;
  FIdentityFunctor **local_170;
  int local_168;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_s_1 *local_160;
  FIdentityFunctor *local_158;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_148;
  longlong *local_128;
  int iStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  int local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  FString local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_6c = 0x80;
  local_98._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *)0x0;
  local_98._8_8_ = 0;
  local_1b4 = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  pFVar23 = (param_1->Packets).AllocatorInstance.Data;
  iVar17 = (param_1->Packets).ArrayNum;
  local_70 = 0;
  local_68 = -1;
  local_64 = 0;
  pFVar13 = pFVar23 + (longlong)iVar17 * 8;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_180 = pFVar13;
  while( true ) {
    uVar15 = 0;
    if ((param_1->Packets).ArrayNum != iVar17) {
      local_1b8 = 0;
      `TCheckedPointerIterator<FStatPacket_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1b8);
    }
    if (pFVar23 == pFVar13) break;
    uVar8 = *(uint *)(*(longlong *)pFVar23 + 0x28);
    plVar20 = *(longlong **)(*(longlong *)pFVar23 + 0x18);
    if (uVar8 != 0) {
      local_1b4 = local_1b4 + uVar8;
      uVar21 = (ulonglong)uVar8;
      do {
        local_178 = *(undefined4 *)(*plVar20 + 8 + uVar15 * 0x10);
        uStack_174 = *(uint *)(*plVar20 + 0xc + uVar15 * 0x10) & 0x1ff;
        FStatNameAndInfo::GetShortNameFrom((FName)&local_1a8);
        TVar5 = local_1a8;
        uVar8 = ::GetTypeHash((FNameEntryId)local_1a8.PrevFreeIndex);
        uVar8 = uVar8 + TVar5.NextFreeIndex;
        if (local_98._8_4_ != local_64) {
          FVar14.Data = (FScriptContainerElement *)local_60;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            FVar14.Data = local_58.Data;
          }
          iVar18 = *(int *)((longlong)FVar14.Data + (ulonglong)(local_50 - 1 & uVar8) * 4);
          while (iVar18 != -1) {
            pFVar13 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar18 * 0x14);
            if (*(TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_s_1 *)
                 (local_98._0_8_ + (longlong)iVar18 * 0x14) == local_1a8) {
              if (pFVar13 != (FScriptContainerElement *)0x0) goto LAB_1419f8c0a;
              break;
            }
            iVar18 = *(int *)(pFVar13 + 0xc);
          }
        }
        local_160 = &local_1a8;
        local_1c8 = (wchar_t *)0x0;
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        EmplaceByHash<TKeyInitializer<FName_const_&>_>
                  ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)local_98,(uint)&local_1ac,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar8,
                   (bool *)&local_160);
        pFVar13 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_1ac * 0x14);
LAB_1419f8c0a:
        *(int *)(pFVar13 + 8) = *(int *)(pFVar13 + 8) + 1;
        uVar8 = (int)uVar15 + 1;
        uVar15 = 0;
        plVar6 = plVar20 + 1;
        if (uVar8 < 0x1000) {
          uVar15 = (ulonglong)uVar8;
          plVar6 = plVar20;
        }
        plVar20 = plVar6;
        uVar21 = uVar21 - 1;
        pFVar13 = local_180;
      } while (uVar21 != 0);
    }
    pFVar23 = pFVar23 + 8;
  }
  local_158 = local_1b7;
  local_170 = &local_158;
  if (0 < local_98._8_4_ - local_64) {
    TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98);
    uVar1 = local_98._0_8_;
    iVar17 = local_98._8_4_ - local_64;
    if ((iVar17 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::FValueComparisonClass<TGreater<unsigned_int>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *)uVar1,iVar17,local_1b7[0],
               (FElementCompareClass<TSortableMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::FValueComparisonClass<TGreater<unsigned_int>_>_>
                *)&local_170);
  }
  uVar8 = local_50;
  uVar15 = 0;
  uVar21 = (ulonglong)local_50;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar8 == 0) goto LAB_1419f8d58;
  uVar22 = uVar8;
  if (uVar8 < 2) {
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      uVar22 = 0;
      goto LAB_1419f8d00;
    }
  }
  else {
LAB_1419f8d00:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar22,4);
  }
  if (0 < (int)uVar8) {
    do {
      FVar14.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar14.Data = local_58.Data;
      }
      uVar10 = uVar15 & (longlong)(int)uVar8 - 1U;
      uVar15 = uVar15 + 1;
      *(undefined4 *)((longlong)FVar14.Data + uVar10 * 4) = 0xffffffff;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
LAB_1419f8d58:
  uVar8 = 1;
  if (local_50 != 0) {
    uStack_19c = 1;
    local_1a0 = 0;
    pTStack_198 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uStack_18c = 0;
    iStack_188 = 0;
    if (local_70 != 0) {
      FVar19 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_78;
      }
      uVar22 = *(uint *)FVar19;
      local_1a0 = 0;
      while (uVar22 == 0) {
        iStack_188 = iStack_188 + 0x20;
        lVar16 = (longlong)local_1a0;
        local_1a0 = local_1a0 + 1;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1a0)
        goto LAB_1419f8e0f;
        uVar22 = ((uint *)((longlong)FVar19 + 4))[lVar16];
      }
      uStack_19c = -uVar22 & uVar22;
      uVar15 = (ulonglong)uStack_19c * 2 + 1;
      lVar16 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_168 = (int)lVar16;
      uStack_18c = local_168 + -1 + iStack_188;
      if ((int)local_70 < (int)uStack_18c) {
LAB_1419f8e0f:
        uStack_18c = local_70;
      }
    }
    local_190 = 0xffffffff;
    local_150 = (longlong *)local_98;
    local_148._padding_ = CONCAT44(uStack_19c,local_1a0);
    local_148.CurrentBitIndex = uStack_18c;
    local_148.UnvisitedBitMask = 0xffffffff;
    local_148._28_4_ = uStack_184;
    local_148.BaseBitIndex = iStack_188;
    uVar22 = uStack_18c;
    local_148.Array = pTStack_198;
    if ((int)uStack_18c < (int)local_70) {
      do {
        lVar16 = *local_150;
        lVar11 = (longlong)(int)uVar22;
        uVar1 = *(undefined8 *)(lVar16 + lVar11 * 0x14);
        uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
        uVar9 = local_50 - 1 & uVar9 + (int)((ulonglong)uVar1 >> 0x20);
        *(uint *)(lVar16 + 0x10 + lVar11 * 0x14) = uVar9;
        FVar14.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar14.Data = local_58.Data;
        }
        uVar15 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar16 + 0xc + lVar11 * 0x14) =
             *(undefined4 *)((longlong)FVar14.Data + uVar15 * 4);
        *(uint *)((longlong)FVar14.Data + uVar15 * 4) = uVar22;
        local_148.UnvisitedBitMask = local_148.UnvisitedBitMask & ~local_148._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_148);
        uVar22 = local_148.CurrentBitIndex;
      } while (local_148.CurrentBitIndex < (local_148.Array)->NumBits);
    }
  }
  iVar17 = 0;
  if (2 < (byte)LogStats._0_1_) {
    local_1c8 = L"Count";
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
  }
  uVar22 = local_70;
  iStack_120 = 0;
  local_108 = 0;
  uStack_10c = 0;
  if (local_70 != 0) {
    FVar19 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_78;
    }
    uVar9 = *(uint *)FVar19;
    while (uVar9 == 0) {
      lVar16 = (longlong)iStack_120;
      local_108 = local_108 + 0x20;
      iStack_120 = iStack_120 + 1;
      uStack_10c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_120)
      goto LAB_1419f8f81;
      uVar9 = ((uint *)((longlong)FVar19 + 4))[lVar16];
    }
    uVar8 = -uVar9 & uVar9;
    uVar15 = (ulonglong)uVar8 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uStack_10c = local_108 + -1 + (int)lVar16;
    local_180 = (FScriptContainerElement *)CONCAT44(local_180._4_4_,(int)lVar16);
    if ((int)local_70 < (int)uStack_10c) {
      uStack_10c = local_70;
    }
  }
LAB_1419f8f81:
  local_128 = (longlong *)local_98;
  uStack_104 = local_9c;
  local_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar9 = local_70 & 0xffffffe0;
  iStack_100 = local_98._8_4_ - local_64;
  uStack_110 = 0xffffffff;
  TStack_f0.CurrentBitIndex = uStack_10c;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._padding_ = CONCAT44(uVar8,iStack_120);
  iVar18 = (int)local_70 >> 5;
  TStack_f0._28_4_ = local_9c;
  TStack_f0.BaseBitIndex = local_108;
  uStack_d0 = CONCAT44(uStack_fc,iStack_100);
  bVar12 = (byte)local_70;
  uStack_11c = uVar8;
  local_f8 = local_128;
  TStack_f0.Array = local_118;
  if (((int)local_70 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = local_1b4;
  fVar3 = __real_3f666666;
  if (uVar22 != local_70) {
    FVar19 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_78;
    }
    uVar8 = -1 << (bVar12 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar18 * 4);
    while (uVar8 == 0) {
      lVar16 = (longlong)iVar18;
      uVar9 = uVar9 + 0x20;
      iVar18 = iVar18 + 1;
      uVar22 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_1419f9090;
      uVar8 = ((uint *)((longlong)FVar19 + 4))[lVar16];
    }
    uVar15 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar22 = (int)lVar16 + -1 + uVar9;
    if ((int)local_70 < (int)uVar22) {
      uVar22 = local_70;
    }
  }
LAB_1419f9090:
  do {
    plVar20 = local_f8;
    if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
      `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1b0);
    }
    if (((TStack_f0.CurrentBitIndex == uVar22) &&
        (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar20 == (longlong *)local_98)) {
LAB_1419f916a:
      local_50 = 0;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_58.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return;
    }
    this_00 = (FName *)(*plVar20 + (longlong)TStack_f0.CurrentBitIndex * 0x14);
    if (2 < (byte)LogStats._0_1_) {
      uVar8 = this_00[1].ComparisonIndex.Value;
      ::FName::ToString(this_00,local_c8);
      local_1c8 = (wchar_t *)CONCAT44(local_1c8._4_4_,uVar8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
      if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
      }
    }
    iVar17 = iVar17 + this_00[1].ComparisonIndex.Value;
    if (fVar3 < (float)iVar17 / (float)iVar4) goto LAB_1419f916a;
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  } while( true );
}

// FindOrAddMetaData @ 1419f9780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStatsThreadState::FindOrAddMetaData(FStatsThreadState *this,FStatMessage *param_1)

{
  FStatNameAndInfo *this_00;
  int *piVar1;
  TMap<FWindowsPlatformMemory::EMemoryCounterRegion,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWindowsPlatformMemory::EMemoryCounterRegion,FName,0>_>
  *this_01;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FNameEntryId FVar5;
  size_t sVar6;
  TTuple<FName,FStatMessage> *pTVar7;
  undefined4 extraout_var;
  FString *this_02;
  FName *pFVar8;
  FThreadSafeStaticStat<_protected:_void___cdecl_FStatsThreadState::FindOrAddMetaData(FStatMessage_const_&)_::_8_::FStat_STAT_FSimpleDelegateGraphTask_StatsGroupToGame>
  FVar9;
  FStatGroupGameThreadNotifier *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  undefined1 *puVar13;
  FName FVar14;
  undefined1 *puVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  uint local_res8 [2];
  EMemoryCounterRegion local_res10 [2];
  TPairInitializer<unsigned_int_&&,FName_const_&> local_res18;
  FName local_1c8;
  FName local_1c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1b8;
  FDelegateAllocation local_1b0;
  FName local_1a0;
  uint local_198;
  uint uStack_194;
  undefined8 local_190;
  FStatNameAndInfo FStack_188;
  FString local_180;
  undefined1 local_170 [12];
  undefined1 local_164 [12];
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  FString local_148;
  uint *local_138;
  FName *local_130;
  FString local_128;
  FName *local_118;
  undefined8 *local_110;
  FName *local_108;
  FName *local_100;
  FName *local_f8;
  undefined8 *local_f0;
  EMemoryCounterRegion *local_e8;
  FName *local_e0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDelegateAllocation *local_a8;
  FName local_a0;
  FName local_98 [2];
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  this_00 = &param_1->NameAndInfo;
  puVar15 = (undefined1 *)0x0;
  local_res8[0] = 0;
  local_198 = (this_00->Index).Value;
  uStack_194 = (param_1->NameAndInfo).Number & 0x1ff;
  FStatNameAndInfo::GetShortNameFrom((FName)&local_1c8);
  FStatNameAndInfo::GetGroupName(this_00);
  if (FStatConstants::NAME_ThreadGroup == local_1a0) {
    FStatNameAndInfo::GetDescription(this_00,&local_128);
    ::FString::Replace(&local_128,&local_180,L"_0",L"",IgnoreCase);
    pFVar17 = local_180.Data.AllocatorInstance.Data + (longlong)local_180.Data.ArrayNum * 2;
    do {
      if (pFVar17 == local_180.Data.AllocatorInstance.Data) {
        iVar16 = -1;
        goto LAB_1419f9853;
      }
      pFVar17 = pFVar17 + -2;
    } while (*(short *)pFVar17 != 0x5f);
    iVar16 = (int)((longlong)pFVar17 - (longlong)local_180.Data.AllocatorInstance.Data >> 1);
LAB_1419f9853:
    ::FString::RightChop(&local_180,&local_148,iVar16 + 1);
    if (local_148.Data.ArrayNum == 0) {
      local_158 = (FScriptContainerElement *)0x15060d16c;
LAB_1419f988c:
      sVar6 = wcslen((wchar_t *)local_158);
      iStack_150 = (int)sVar6;
    }
    else {
      iStack_150 = 0;
      local_158 = local_148.Data.AllocatorInstance.Data;
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_1419f988c;
    }
    local_88._12_4_ = uStack_14c;
    local_88.Size = iStack_150;
    local_88.DataPtr = (wchar_t *)local_158;
    uVar4 = FParse::HexNumber(&local_88);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    local_138 = local_res8;
    local_130 = &local_1c8;
    local_res8[0] = uVar4;
    TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_&&,FName_const_&>_>
              ((TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
                *)&this->Threads,&local_res18,(bool *)&local_138);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  pTVar7 = TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                   *)&this->ShortNameToLongName,local_1c8);
  puVar13 = &pTVar7->field_0x8;
  if (pTVar7 == (TTuple<FName,FStatMessage> *)0x0) {
    puVar13 = puVar15;
  }
  if (puVar13 != (undefined1 *)0x0) {
    return;
  }
  local_1c0.ComparisonIndex.Value = (this_00->Index).Value;
  local_1c0.Number = (param_1->NameAndInfo).Number & 0x1ff;
  if ((local_1c8 == (FName)((ulonglong)*this_00 & 0x1ffffffffff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShortName != LongName",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                         ,0x6cc,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FStack_188 = param_1->NameAndInfo;
  local_118 = &local_1c8;
  local_110 = &local_190;
  local_190 = 0;
  TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FStatMessage_const_&>_>
            ((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
              *)&this->ShortNameToLongName,
             (TPairInitializer<FName_const_&,FStatMessage_const_&> *)&local_res18.Value,
             (bool *)&local_118);
  FStack_188 = (FStatNameAndInfo)((ulonglong)FStack_188 & 0xffff8fffffffffff | 0x800000000000);
  if ((((param_1->NameAndInfo).Number & 0xff0000U) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Item.NameAndInfo.GetField<EStatMetaFlags>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                         ,0x6d2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_108 = &local_1a0;
  local_100 = &local_1c8;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>
              *)&this->Groups,(TPairInitializer<FName_const_&,FName_const_&> *)local_170,
             (bool *)&local_108);
  FVar5 = FNameEntryId::FromValidEName((int)local_170 + FloatProperty);
  FVar14.Number = 0;
  FVar14.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  if ((local_1a0 != FVar14) && (((param_1->NameAndInfo).Number & 0x200000U) == 0)) {
    local_f8 = &local_1c0;
    local_f0 = &local_190;
    TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FStatMessage_const_&>_>
              ((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                *)&this->NotClearedEveryFrame,
               (TPairInitializer<FName_const_&,FStatMessage_const_&> *)(local_170 + 8),
               (bool *)&local_f8);
  }
  if (((param_1->NameAndInfo).Number & 0x80000U) != 0) {
    this_02 = ::FName::ToString(&local_1c8,&local_78);
    bVar3 = ::FString::StartsWith(this_02,L"MCR_",4,IgnoreCase);
    puVar15 = &DAT_00000001;
    if (bVar3) {
      bVar3 = true;
      goto LAB_1419f9aa5;
    }
  }
  bVar3 = false;
LAB_1419f9aa5:
  if ((puVar15 != (undefined1 *)0x0) &&
     (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    this_01 = &this->MemoryPoolToCapacityLongName;
    local_res10[0] =
         (int)*(char *)((longlong)&(param_1->NameAndInfo).Number + 3) &
         (MCR_SamplePlatformSpecifcMemoryRegion|MCR_GPUDefragPool);
    if (*(int *)&(this->MemoryPoolToCapacityLongName).field_0x8 !=
        *(int *)&(this->MemoryPoolToCapacityLongName).field_0x34) {
      puVar15 = *(undefined1 **)&(this->MemoryPoolToCapacityLongName).field_0x40;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = &(this->MemoryPoolToCapacityLongName).field_0x38;
      }
      iVar16 = *(int *)(puVar15 +
                       (ulonglong)
                       (*(int *)&(this->MemoryPoolToCapacityLongName).field_0x48 - MCR_Physical &
                       local_res10[0]) * 4);
      if (iVar16 != -1) {
        do {
          if (*(EMemoryCounterRegion *)(*(longlong *)this_01 + (longlong)iVar16 * 0x14) ==
              local_res10[0]) {
            if (2 < (byte)LogStats._0_1_) {
              pFVar8 = TMapBase<enum_FWindowsPlatformMemory::EMemoryCounterRegion,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FWindowsPlatformMemory::EMemoryCounterRegion,FName,0>_>
                       ::FindChecked(this_01,local_res10[0]);
              ::FName::ToString(pFVar8,&local_58);
              ::FName::ToString(&local_1c0,&local_68);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_1419f9b50;
          }
          iVar16 = *(int *)(*(longlong *)this_01 + 0xc + (longlong)iVar16 * 0x14);
        } while (iVar16 != -1);
      }
    }
    local_e8 = local_res10;
    local_e0 = &local_1c0;
    TSet<TTuple<enum_FWindowsPlatformMemory::EMemoryCounterRegion,FName>,TDefaultMapHashableKeyFuncs<enum_FWindowsPlatformMemory::EMemoryCounterRegion,FName,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_FWindowsPlatformMemory::EMemoryCounterRegion_const_&,FName_const_&>_>
              (this_01,(TPairInitializer<FWindowsPlatformMemory::EMemoryCounterRegion_const_&,FName_const_&>
                        *)local_164,(bool *)&local_e8);
  }
LAB_1419f9b50:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FSimpleDelegateGraphTask_StatsGroupToGame ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FStatsThreadState::FindOrAddMetaData(FStatMessage_const_&)_::_8_::FStat_STAT_FSimpleDelegateGraphTask_StatsGroupToGame>
         )0x0) {
      pFVar8 = ::FName::FName(&local_a0,"STAT_FSimpleDelegateGraphTask_StatsGroupToGame");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FSimpleDelegateGraphTask_StatsGroupToGame,*pFVar8,
                 L"FSimpleDelegateGraphTask.StatsGroupToGame","STATGROUP_TaskGraphTasks",
                 "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_FSimpleDelegateGraphTask_StatsGroupToGame;
  if (StatPtr_STAT_FSimpleDelegateGraphTask_StatsGroupToGame ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FStatsThreadState::FindOrAddMetaData(FStatMessage_const_&)_::_8_::FStat_STAT_FSimpleDelegateGraphTask_StatsGroupToGame>
       )0x0) {
    pFVar8 = ::FName::FName(local_98,"STAT_FSimpleDelegateGraphTask_StatsGroupToGame");
    FVar9 = (FThreadSafeStaticStat<_protected:_void___cdecl_FStatsThreadState::FindOrAddMetaData(FStatMessage_const_&)_::_8_::FStat_STAT_FSimpleDelegateGraphTask_StatsGroupToGame>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FSimpleDelegateGraphTask_StatsGroupToGame,*pFVar8,
                         L"FSimpleDelegateGraphTask.StatsGroupToGame","STATGROUP_TaskGraphTasks",
                         "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  pFVar10 = FStatGroupGameThreadNotifier::Get();
  local_1b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1b8,(FWriteAccessScope *)&local_c0);
  local_a8 = &local_1b0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_1b0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFStatNameAndInfo____6B_
    ;
    *(FStatNameAndInfo *)(puVar11 + 1) = *this_00;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_UFStatGroupGameThreadNotifier____A6AXXZUFDefaultDelegateUserPolicy__VFStatNameAndInfo____6B_
    ;
    puVar11[4] = FStatGroupGameThreadNotifier::NewData;
    puVar11[3] = pFVar10;
    if ((pFVar10 == (FStatGroupGameThreadNotifier *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
  }
  FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(local_164 + 4),
             (TStatIdData *)&local_1b8,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)FVar9,MainQueue);
  if ((undefined8 *)local_164._4_8_ != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_164._4_8_ + 0x30);
    iVar16 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar16 == 1) {
      (*(code *)**(undefined8 **)local_164._4_8_)(local_164._4_8_,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1b8,(FWriteAccessScope *)&local_d8);
  if ((local_1b0.DelegateSize != 0) &&
     (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1b0,0,0,0x10);
    local_1b0.DelegateSize = 0;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1b8.AccessDetector);
  return;
}

// GetCondensedHistory @ 1419fcd90

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FStatMessage,TSizedDefaultAllocator<32>_> * __thiscall
FStatsThreadState::GetCondensedHistory(FStatsThreadState *this,long64 param_1)

{
  int *piVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *pTVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_StatsCondense> FVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  FThreadSafeStaticStat<FStat_STAT_StatFramePacketsCondensed> FVar15;
  FThreadStats *pFVar16;
  FNameEntryId FVar17;
  FName FVar18;
  undefined1 *puVar19;
  FNameEntryId FVar20;
  uchar auVar21 [8];
  FName FVar22;
  FName local_res8;
  long64 local_res10;
  undefined1 local_res18 [8];
  FName local_res20;
  undefined8 *local_a8;
  FName local_a0;
  LARGE_INTEGER local_98;
  FStatMessage local_90;
  FStatMessage local_80;
  long64 *local_70;
  undefined8 **local_68;
  FName local_60;
  FName local_58 [3];
  
  local_res10 = param_1;
  bVar7 = IsFrameValid(this,param_1);
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsFrameValid(TargetFrame)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                         ,0x561,L""), param_1 = local_res10, bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar10;
  }
  if (*(int *)&(this->CondensedStackHistory).field_0x8 !=
      *(int *)&(this->CondensedStackHistory).field_0x34) {
    puVar19 = *(undefined1 **)&(this->CondensedStackHistory).field_0x40;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = &(this->CondensedStackHistory).field_0x38;
    }
    iVar8 = *(int *)(puVar19 +
                    ((param_1 >> 0x20) * 0x17 + param_1 &
                    (ulonglong)(*(int *)&(this->CondensedStackHistory).field_0x48 - 1)) * 4);
    if (iVar8 != -1) {
      do {
        lVar2 = *(longlong *)&this->CondensedStackHistory + (longlong)iVar8 * 0x18;
        if (*(longlong *)(*(longlong *)&this->CondensedStackHistory + (longlong)iVar8 * 0x18) ==
            param_1) {
          if ((lVar2 != 0) &&
             (*(TArray<FStatMessage,TSizedDefaultAllocator<32>_> **)(lVar2 + 8) !=
              (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)0x0)) {
            return *(TArray<FStatMessage,TSizedDefaultAllocator<32>_> **)(lVar2 + 8);
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x10);
      } while (iVar8 != -1);
    }
  }
  puVar14 = (undefined8 *)0x0;
  FVar20.Value = 0;
  FVar12 = StatPtr_STAT_StatsCondense;
  if (StatPtr_STAT_StatsCondense == (FThreadSafeStaticStat<FStat_STAT_StatsCondense>)0x0) {
    pFVar11 = ::FName::FName(&local_60,"STAT_StatsCondense");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_StatsCondense>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StatsCondense,*pFVar11,
                        L"Condense","STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar7 = false;
  bVar6 = false;
  FVar17 = FVar18.ComparisonIndex.Value;
  if ((FVar17.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar17.Value;
        local_res20.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                   ,0x568);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar5 = true;
      FVar20.Value = FVar17.Value;
      goto LAB_1419fcf95;
    }
  }
  bVar5 = false;
  FVar18.ComparisonIndex.Value = 0;
  FVar18.Number = 0;
LAB_1419fcf95:
  puVar13 = ::operator_new(0x10);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar14 = puVar13;
  }
  local_70 = &local_res10;
  local_68 = &local_a8;
  local_a8 = puVar14;
  TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<__int64_const_&,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*_&&>_>
            ((TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
              *)&this->CondensedStackHistory,
             (TPairInitializer<__int64_const_&,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*_&&>
              *)local_res18,(bool *)&local_70);
  FVar22 = *(FName *)(*(longlong *)&this->CondensedStackHistory + 8 +
                     (longlong)(int)local_res18._0_4_ * 0x18);
  local_res8 = FVar22;
  Condense(this,local_res10,(TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)FVar22);
  auVar21 = (uchar  [8])(longlong)*(int *)((longlong)FVar22 + 8);
  if ((auVar21 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar15 = StatPtr_STAT_StatFramePacketsCondensed;
    if (StatPtr_STAT_StatFramePacketsCondensed ==
        (FThreadSafeStaticStat<FStat_STAT_StatFramePacketsCondensed>)0x0) {
      pFVar11 = ::FName::FName(local_58,"STAT_StatFramePacketsCondensed");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_StatFramePacketsCondensed>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StatFramePacketsCondensed,
                          *pFVar11,L"Frame Messages Condensed","STATGROUP_StatSystem",
                          "STATCAT_Advanced",L"Stat System",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar3 = *(FName *)FVar15;
    FVar17 = FVar3.ComparisonIndex.Value;
    uVar9 = FVar3.Number;
    local_res18._0_4_ = FVar17.Value;
    local_res18._4_4_ = uVar9;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = FThreadStats::GetThreadStats();
      local_90.NameAndInfo.Number = uVar9 & 0xffffafff | 0xa000;
      local_a0 = FVar3;
      local_90.StatData.Pad = auVar21;
      local_90.NameAndInfo.Index.Value = FVar17.Value;
      FThreadStats::AddStatMessage(pFVar16,&local_90);
      FStatsTrace::Add(&local_a0,(long64)auVar21);
      if (pFVar16->ScopeCount == 0) {
        FThreadStats::Flush(pFVar16,false,false);
        FVar22 = local_res8;
      }
      else {
        FVar22 = local_res8;
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
          FVar22 = local_res8;
        }
      }
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false &&
      ((FThreadStats::TlsSlot != 0xffffffff &&
       (pFVar16 = FThreadStats::GetThreadStats(),
       pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount)))))) {
    local_80.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
    local_80.NameAndInfo.Index.Value = FVar20.Value;
    QueryPerformanceCounter(&local_98);
    local_80.StatData.Pad[4] = '\0';
    local_80.StatData.Pad[5] = '\0';
    local_80.StatData.Pad[6] = '\0';
    local_80.StatData.Pad[7] = '\0';
    local_80.StatData.Pad[0] = local_98.s.LowPart._0_1_;
    local_80.StatData.Pad[1] = local_98.s.LowPart._1_1_;
    local_80.StatData.Pad[2] = local_98.s.LowPart._2_1_;
    local_80.StatData.Pad[3] = local_98.s.LowPart._3_1_;
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
  return (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)FVar22;
}

// GetExclusiveAggregateStackStats @ 1419fd570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStatsThreadState::GetExclusiveAggregateStackStats
          (FStatsThreadState *this,TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_2,IItemFilter *param_3,
          bool param_4)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *pTVar5;
  IItemFilter *pIVar6;
  longlong *plVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  TTuple<FName,FStatMessage> *pTVar12;
  double dVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  double *pdVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  Type TVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  FStatMessage *pFVar23;
  ulonglong uVar24;
  undefined1 auStackY_1d8 [32];
  ForAnyElementType local_188;
  undefined8 local_180;
  FName local_178;
  undefined1 local_170 [8];
  FStatMessage *local_168;
  FStatNameAndInfo FStack_160;
  undefined1 local_158 [16];
  int local_148;
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *local_140;
  IItemFilter *local_138;
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  longlong *local_108;
  int iStack_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  FName *local_d8;
  FStatMessage *local_d0;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  uint *local_88;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  uVar18 = 0;
  iVar10 = param_1->ArrayNum;
  local_88 = (uint *)0x0;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_60 = 0;
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  uVar24 = uVar18;
  local_178 = (FName)param_1;
  local_140 = param_2;
  local_138 = param_3;
  if (0 < iVar10) {
    do {
      uVar22 = (uint)uVar18;
      uVar20 = 0;
      if ((int)uVar22 < iVar10) {
        uVar20 = ~uVar22 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar23 = (FStatMessage *)((param_1->AllocatorInstance).Data + uVar24);
      local_178 = (FName)((ulonglong)pFVar23->NameAndInfo & 0x1ffffffffff);
      uVar20 = (pFVar23->NameAndInfo).Number;
      TVar19 = (int)uVar20 >> 0xc & Mask;
      if (((TVar19 == ChildrenStart) || (TVar19 - ChildrenEnd < 2)) && ((uVar20 >> 0x12 & 1) != 0))
      {
        pTVar12 = TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                          *)local_a8,local_178);
        pdVar16 = (double *)&pTVar12->field_0x8;
        if (pTVar12 == (TTuple<FName,FStatMessage> *)0x0) {
          pdVar16 = (double *)0x0;
        }
        if (pdVar16 == (double *)0x0) {
          local_d8 = &local_178;
          local_d0 = pFVar23;
          TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FStatMessage_const_&>_>
                    ((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                      *)local_a8,(TPairInitializer<FName_const_&,FStatMessage_const_&> *)local_170,
                     (bool *)&local_d8);
          pdVar16 = (double *)(local_a8._0_8_ + 8 + (longlong)(int)local_170._0_4_ * 0x20);
          *(uint *)((longlong)pdVar16 + 0xc) = *(uint *)((longlong)pdVar16 + 0xc) & 0xffff8fff;
          *(uint *)((longlong)pdVar16 + 0xc) = *(uint *)((longlong)pdVar16 + 0xc) | 0x108000;
          *pdVar16 = 0.0;
        }
        if (TVar19 == ChildrenStart) {
          local_168 = *(FStatMessage **)(pFVar23->StatData).Pad;
          FStack_160 = pFVar23->NameAndInfo;
          if (((local_188.Data <= (FScriptContainerElement *)&local_168) &&
              ((FScriptContainerElement *)&local_168 <
               local_188.Data + (longlong)local_180._4_4_ * 0x10)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar10 = (int)local_180;
          if ((int)local_180 == local_180._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_188,(int *)((longlong)&local_180 + 4));
          }
          auVar1._8_4_ = FStack_160.Index.Value;
          auVar1._12_4_ = FStack_160.Number;
          auVar1._0_8_ = local_168;
          local_180 = CONCAT44(local_180._4_4_,iVar10 + 1);
          *(undefined1 (*) [16])(local_188.Data + (longlong)iVar10 * 0x10) = auVar1;
        }
        else {
          if (TVar19 == ChildrenEnd) {
            if ((int)local_180 < 1) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            pFVar14 = local_188.Data + (longlong)((int)local_180 + -1) * 0x10;
            auVar1 = *(undefined1 (*) [16])pFVar14;
            iVar11 = ((int)local_180 - ((int)local_180 + -1)) + -1;
            iVar10 = (int)local_180;
            local_158 = auVar1;
            if (iVar11 != 0) {
              memmove(pFVar14,pFVar14 + 0x10,(longlong)iVar11 << 4);
              iVar10 = (int)local_180;
            }
            local_180 = CONCAT44(local_180._4_4_,iVar10 + -1);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&local_188,iVar10 + -1,(int *)((longlong)&local_180 + 4));
            if ((((ulonglong)pdVar16[1] & 0x1ffffffffff) != (auVar1._8_8_ & 0x1ffffffffff)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bAllowNameMismatch || Dest.NameAndInfo.GetRawName() == Item.NameAndInfo.GetRawName()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                   ,1999,L""), bVar8)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar20 = (int)auVar1._12_4_ >> 9 & 7;
            if (((*(int *)((longlong)pdVar16 + 0xc) >> 9 & 7U) != uVar20) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Dest.NameAndInfo.GetField<EStatDataType>() == Item.NameAndInfo.GetField<EStatDataType>()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                   ,0x7d5,L""), bVar8)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (((((byte)(auVar1._12_4_ >> 0x14) ^
                  (byte)(*(uint *)((longlong)pdVar16 + 0xc) >> 0x14)) & 1) != 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Dest.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration) == Item.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                   ,0x7d6,L""), bVar8)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            dVar13 = (double)local_158._0_8_;
            if (uVar20 == 2) {
LAB_1419fdad0:
              *pdVar16 = (double)((longlong)*pdVar16 + (longlong)dVar13);
            }
            else if (uVar20 == 3) {
              *pdVar16 = (double)local_158._0_8_ + *pdVar16;
            }
            else if ((uVar20 != 5) &&
                    (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                        ,0x816,L""), bVar8)) {
code_r0x0001419fdabb:
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else {
            if ((((ulonglong)pdVar16[1] & 0x1ffffffffff) !=
                 ((ulonglong)pFVar23->NameAndInfo & 0x1ffffffffff)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bAllowNameMismatch || Dest.NameAndInfo.GetRawName() == Item.NameAndInfo.GetRawName()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                   ,1999,L""), bVar8)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (((((pFVar23->NameAndInfo).Number ^ *(uint *)((longlong)pdVar16 + 0xc)) & 0xe00) != 0
                ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Dest.NameAndInfo.GetField<EStatDataType>() == Item.NameAndInfo.GetField<EStatDataType>()"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                         ,0x7d5,L""), bVar8)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (((((byte)((uint)(pFVar23->NameAndInfo).Number >> 0x14) ^
                  (byte)(*(uint *)((longlong)pdVar16 + 0xc) >> 0x14)) & 1) != 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Dest.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration) == Item.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                   ,0x7d6,L""), bVar8)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar20 = (pFVar23->NameAndInfo).Number >> 9 & 7;
            if (uVar20 == 2) {
              dVar13 = *(double *)(pFVar23->StatData).Pad;
              goto LAB_1419fdad0;
            }
            if (uVar20 == 3) {
              *pdVar16 = *pdVar16 + *(double *)(pFVar23->StatData).Pad;
            }
            else if ((uVar20 != 5) &&
                    (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                        ,0x816,L""), bVar8)) goto code_r0x0001419fdabb;
          }
          if ((int)local_180 != 0) {
            uVar20 = 0;
            if ((int)((int)local_180 - 1U) < (int)local_180) {
              uVar20 = ~((int)local_180 - 1U) >> 0x1f;
            }
            if (uVar20 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            FVar4.Data = local_188.Data;
            lVar15 = (longlong)(int)local_180 * 0x10;
            if (((((pFVar23->NameAndInfo).Number ^ *(uint *)(local_188.Data + lVar15 + -4)) & 0xe00)
                 != 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Dest.NameAndInfo.GetField<EStatDataType>() == Item.NameAndInfo.GetField<EStatDataType>()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                   ,0x7d5,L""), bVar8)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (((((byte)((uint)(pFVar23->NameAndInfo).Number >> 0x14) ^
                  (byte)(*(uint *)(FVar4.Data + lVar15 + -4) >> 0x14)) & 1) != 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Dest.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration) == Item.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                   ,0x7d6,L""), bVar8)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar20 = (pFVar23->NameAndInfo).Number >> 9 & 7;
            if (uVar20 == 2) {
              if ((*(uint *)(FVar4.Data + lVar15 + -4) & 0x100000) == 0) {
                *(longlong *)(FVar4.Data + lVar15 + -0x10) =
                     *(longlong *)(FVar4.Data + lVar15 + -0x10) -
                     *(longlong *)(pFVar23->StatData).Pad;
              }
              else {
                *(ulonglong *)(FVar4.Data + lVar15 + -0x10) =
                     (*(longlong *)(FVar4.Data + lVar15 + -0x10) >> 0x20) << 0x20 |
                     (ulonglong)
                     (uint)((int)*(longlong *)(FVar4.Data + lVar15 + -0x10) -
                           *(int *)(pFVar23->StatData).Pad);
              }
            }
            else if (uVar20 == 3) {
              *(double *)(FVar4.Data + lVar15 + -0x10) =
                   *(double *)(FVar4.Data + lVar15 + -0x10) - *(double *)(pFVar23->StatData).Pad;
            }
            else if ((uVar20 != 5) &&
                    (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                        ,0x816,L""), bVar8)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
      }
      else if (param_4) {
        FStatsUtils::AddNonStackStats
                  (local_178,pFVar23,TVar19,
                   (TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
                    *)local_a8);
      }
      iVar10 = param_1->ArrayNum;
      uVar18 = (ulonglong)(uVar22 + 1);
      uVar24 = uVar24 + 0x10;
    } while ((int)(uVar22 + 1) < iVar10);
  }
  pIVar6 = local_138;
  pTVar5 = local_140;
  iStack_ec = 0;
  iStack_100 = 0;
  uStack_fc = 1;
  local_e8 = iStack_100;
  if (local_80 != 0) {
    puVar21 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar21 = local_88;
    }
    uVar20 = *puVar21;
    iStack_100 = 0;
    local_e8 = 0;
    while (uVar20 == 0) {
      lVar15 = (longlong)iStack_100;
      local_e8 = local_e8 + 0x20;
      iStack_100 = iStack_100 + 1;
      if ((int)(local_80 + -1 + (local_80 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_100)
      goto LAB_1419fdd09;
      uVar20 = puVar21[lVar15 + 1];
    }
    uStack_fc = -uVar20 & uVar20;
    uVar24 = (ulonglong)uStack_fc * 2 + 1;
    lVar15 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_148 = (int)lVar15;
    iStack_ec = local_148 + -1 + local_e8;
    if (local_80 < iStack_ec) {
LAB_1419fdd09:
      iStack_ec = local_80;
    }
  }
  local_130 = (longlong *)local_a8;
  TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uStack_f0 = 0xffffffff;
  uStack_e4 = local_ac;
  TStack_128._padding_ = CONCAT44(uStack_fc,iStack_100);
  TStack_128.UnvisitedBitMask = 0xffffffff;
  TStack_128._28_4_ = local_ac;
  TStack_128.BaseBitIndex = local_e8;
  local_108 = local_130;
  local_f8 = TStack_128.Array;
  TStack_128.CurrentBitIndex = iStack_ec;
  if (iStack_ec < local_80) {
    do {
      iVar10 = TStack_128.CurrentBitIndex;
      plVar7 = local_130;
      if ((pIVar6 == (IItemFilter *)0x0) ||
         (cVar9 = (**(code **)((longlong)*pIVar6 + 8))
                            (pIVar6,*local_130 + 8 + (longlong)TStack_128.CurrentBitIndex * 0x20),
         cVar9 != '\0')) {
        pFVar17 = (FScriptContainerElement *)(*plVar7 + 8 + (longlong)iVar10 * 0x20);
        pFVar14 = (pTVar5->AllocatorInstance).Data;
        if ((pFVar14 <= pFVar17) &&
           ((pFVar17 < pFVar14 + (longlong)pTVar5->ArrayMax * 0x10 &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)))) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar10 = pTVar5->ArrayNum;
        if (iVar10 == pTVar5->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
        }
        pTVar5->ArrayNum = iVar10 + 1;
        uVar3 = *(undefined8 *)(pFVar17 + 8);
        pFVar14 = (pTVar5->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
        *(undefined8 *)pFVar14 = *(undefined8 *)pFVar17;
        *(undefined8 *)(pFVar14 + 8) = uVar3;
      }
      TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
    } while (TStack_128.CurrentBitIndex < (TStack_128.Array)->NumBits);
  }
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  return;
}

// GetExclusiveAggregateStackStats @ 1419fded0

void __thiscall
FStatsThreadState::GetExclusiveAggregateStackStats
          (FStatsThreadState *this,long64 param_1,
          TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_2,IItemFilter *param_3,
          bool param_4)

{
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = GetCondensedHistory(this,param_1);
  GetExclusiveAggregateStackStats(this,pTVar1,param_2,param_3,param_4);
  return;
}

// GetFastThreadFrameTime @ 1419fdf30

long64 __thiscall
FStatsThreadState::GetFastThreadFrameTime(FStatsThreadState *this,long64 param_1,uint param_2)

{
  long64 lVar1;
  
  lVar1 = GetFastThreadFrameTimeInternal(this,param_1,param_2,Invalid);
  return lVar1;
}

// GetFastThreadFrameTime @ 1419fdf40

long64 __thiscall
FStatsThreadState::GetFastThreadFrameTime(FStatsThreadState *this,long64 param_1,Type param_2)

{
  long64 lVar1;
  
  lVar1 = GetFastThreadFrameTimeInternal(this,param_1,0,param_2);
  return lVar1;
}

// GetFastThreadFrameTimeInternal @ 1419fdf60

long64 __thiscall
FStatsThreadState::GetFastThreadFrameTimeInternal
          (FStatsThreadState *this,long64 param_1,int param_2,Type param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FStatPacketArray *pFVar4;
  long64 lVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  
  lVar5 = 0;
  pFVar4 = GetStatPacketArray(this,param_1);
  uVar13 = 0;
  iVar6 = (pFVar4->Packets).ArrayNum;
  if (0 < iVar6) {
    lVar12 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar13 < iVar6) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        lVar5 = (*pcVar2)();
        return lVar5;
      }
      lVar1 = *(longlong *)((pFVar4->Packets).AllocatorInstance.Data + lVar12);
      if ((*(int *)(lVar1 + 8) == param_2) || (*(Type *)(lVar1 + 0xc) == param_3)) {
        if (*(uint *)(lVar1 + 0x28) != 0) {
          uVar10 = 0;
          uVar11 = 0;
          plVar9 = *(longlong **)(lVar1 + 0x18);
          do {
            plVar8 = (longlong *)((ulonglong)uVar10 * 0x10 + *plVar9);
            uVar7 = *(uint *)((longlong)plVar8 + 0xc);
            if ((uVar7 & 0xf000) == 0x5000) {
              if (((uVar7 >> 0x12 & 1) == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Item.NameAndInfo.GetFlag(EStatMetaFlags::IsCycle)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                     ,0x664,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                lVar5 = (*pcVar2)();
                return lVar5;
              }
              lVar5 = lVar5 - *plVar8;
              break;
            }
            uVar7 = uVar10 + 1;
            plVar8 = plVar9 + 1;
            uVar10 = 0;
            if (uVar7 < 0x1000) {
              plVar8 = plVar9;
              uVar10 = uVar7;
            }
            uVar11 = uVar11 + 1;
            plVar9 = plVar8;
          } while (uVar11 < *(uint *)(lVar1 + 0x28));
        }
        uVar10 = *(uint *)(lVar1 + 0x28);
        do {
          uVar10 = uVar10 - 1;
          if ((int)uVar10 < 0) goto LAB_1419fe166;
          uVar7 = uVar10 >> 0xc;
          uVar11 = 0;
          if ((int)uVar7 < *(int *)(lVar1 + 0x20)) {
            uVar11 = ~uVar7 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            lVar5 = (*pcVar2)();
            return lVar5;
          }
          plVar9 = (longlong *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0x18) + (ulonglong)uVar7 * 8) +
                   (ulonglong)(uVar10 & 0xfff) * 0x10);
          uVar11 = *(uint *)((longlong)plVar9 + 0xc);
        } while ((uVar11 & 0xf000) != 0x6000);
        if (((uVar11 >> 0x12 & 1) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Item.NameAndInfo.GetFlag(EStatMetaFlags::IsCycle)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                               ,0x671,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          lVar5 = (*pcVar2)();
          return lVar5;
        }
        lVar5 = lVar5 + *plVar9;
      }
LAB_1419fe166:
      iVar6 = (pFVar4->Packets).ArrayNum;
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar13 < iVar6);
  }
  return lVar5;
}

// GetInclusiveAggregateStackStats @ 1419fffd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStatsThreadState::GetInclusiveAggregateStackStats
          (FStatsThreadState *this,TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_2,IItemFilter *param_3,
          bool param_4,
          TMap<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
          *param_5)

{
  FStatNameAndInfo *pFVar1;
  int *piVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  code *pcVar6;
  undefined8 uVar7;
  FName FVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  TTuple<FName,FStatMessage> *pTVar15;
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *pTVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  longlong lVar19;
  longlong lVar20;
  ForElementType<FSetElementId> FVar21;
  uint *puVar22;
  FScriptContainerElement *pFVar23;
  FName *pFVar24;
  FStatMessage *pFVar25;
  TMap<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  Type TVar26;
  int iVar27;
  TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
  *pTVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  uint uVar30;
  TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
  *pTVar31;
  TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
  *this_01;
  FStatMessage *pFVar32;
  undefined1 auStack_3f8 [32];
  FScriptContainerElement *local_3d8;
  FScriptContainerElement *local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  undefined8 local_3b8;
  FNameEntryId local_3a8;
  uint uStack_3a4;
  int local_3a0 [2];
  longlong local_398;
  FNameEntryId local_390;
  uint uStack_38c;
  IItemFilter *local_388;
  longlong *local_380;
  int iStack_378;
  uint uStack_374;
  TBitArray<FDefaultBitArrayAllocator> *local_370;
  undefined4 uStack_368;
  int iStack_364;
  int local_360;
  undefined4 uStack_35c;
  TMap<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
  *local_350;
  undefined1 local_348 [8];
  int local_340 [2];
  uint local_338;
  uint local_334;
  FName local_330;
  TPairInitializer<FName_const_&,FStatMessage_const_&> local_328;
  FStatMessage *local_318;
  FNameEntryId *local_310;
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *local_308;
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *local_300;
  longlong *local_2f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f0;
  longlong *local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c8;
  longlong *local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2a0;
  TPairInitializer<FName_const_&,FStatMessage_const_&> local_280;
  FStatMessage *local_270;
  uint *local_268;
  FStatMessage *local_260;
  FNameEntryId *local_258;
  FStatMessage *local_250;
  FNameEntryId *local_248;
  FStatMessage *local_240;
  undefined4 local_21c;
  undefined4 local_1fc;
  undefined4 local_1dc;
  undefined1 local_1d8 [32];
  uint *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  int local_1a4;
  undefined1 local_1a0 [8];
  ForElementType<FSetElementId> local_198;
  int local_190;
  undefined1 local_188 [32];
  uint *local_168;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  ForElementType<FSetElementId> local_148;
  int local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  undefined1 local_100 [8];
  undefined1 *local_f8;
  int local_f0;
  TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
  local_e8;
  TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  pTVar28 = (TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
             *)0x0;
  iVar13 = param_1->ArrayNum;
  local_350 = param_5;
  local_138 = 0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = (undefined1 *)0x0;
  local_f0 = 0;
  local_188._0_8_ = 0;
  local_188._8_8_ = 0;
  local_168 = (uint *)0x0;
  local_160 = 0;
  local_15c = 0x80;
  local_158 = 0xffffffff;
  local_154 = 0;
  local_148 = (ForElementType<FSetElementId>)0x0;
  local_140 = 0;
  local_1d8._0_8_ = 0;
  local_1d8._8_8_ = 0;
  local_1b8 = (uint *)0x0;
  local_1b0 = 0;
  local_1ac = 0x80;
  local_1a8 = 0xffffffff;
  local_1a4 = 0;
  local_198 = (ForElementType<FSetElementId>)0x0;
  local_190 = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  local_388 = param_3;
  local_308 = param_1;
  local_300 = param_2;
  if (0 < iVar13) {
    local_398 = 0;
    pTVar31 = pTVar28;
    this_01 = pTVar28;
    do {
      pTVar16 = local_308;
      lVar20 = local_398;
      uVar30 = (uint)pTVar28;
      uVar14 = 0;
      if ((int)uVar30 < iVar13) {
        uVar14 = ~uVar30 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_3d0 = (FScriptContainerElement *)(longlong)iVar13;
        local_3d8 = (FScriptContainerElement *)(longlong)(int)uVar30;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar32 = (FStatMessage *)((pTVar16->AllocatorInstance).Data + lVar20);
      if (local_350 !=
          (TMap<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
           *)0x0) {
        uVar14 = (pFVar32->NameAndInfo).Number;
        iVar13 = (int)pTVar31;
        if ((uVar14 & 0xf000) == 0xc000) {
          pTVar31 = (TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                     *)(ulonglong)(iVar13 + 1);
          if (iVar13 == 1) {
            local_390.Value = (pFVar32->NameAndInfo).Index.Value;
            uStack_38c = uVar14 & 0x1ff;
            if ((this_01 !=
                 (TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                  *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ThisFrameMetaDataPerThreadPtr == nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                   ,0x4b2,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_280.Value = (FStatMessage *)&local_390;
            local_270 = pFVar32;
            TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,FStatMessage_const_&>_>
                      (&local_98,&local_280,(bool *)&local_280.Value);
            uVar14 = uStack_38c;
            uVar11 = ::GetTypeHash(local_390);
            if (local_1d8._8_4_ != local_1a4) {
              FVar21 = (ForElementType<FSetElementId>)local_1a0;
              if (local_198 != (ForElementType<FSetElementId>)0x0) {
                FVar21 = local_198;
              }
              iVar13 = *(int *)((longlong)FVar21 + (ulonglong)(local_190 - 1U & uVar11 + uVar14) * 4
                               );
              if (iVar13 != -1) {
                do {
                  plVar17 = (longlong *)((longlong)iVar13 * 0x60 + local_1d8._0_8_);
                  if (*plVar17 == CONCAT44(uStack_38c,local_390.Value)) {
                    if (plVar17 != (longlong *)0x0) goto LAB_141a00370;
                    break;
                  }
                  iVar13 = (int)plVar17[0xb];
                } while (iVar13 != -1);
              }
            }
            local_318 = (FStatMessage *)&local_390;
            local_3d8 = (FScriptContainerElement *)0x0;
            TSet<TTuple<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                      ((TSet<TTuple<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>,0>,FDefaultSetAllocator>
                        *)local_1d8,(uint)local_3a0,
                       (TKeyInitializer<FName_const_&> *)(ulonglong)(uVar11 + uVar14),
                       (bool *)&local_318);
            plVar17 = (longlong *)((longlong)local_3a0[0] * 0x60 + local_1d8._0_8_);
LAB_141a00370:
            this_01 = (TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                       *)(plVar17 + 1);
            lVar20 = local_398;
          }
        }
        else if (((uVar14 & 0xf000) == 0xd000) &&
                (pTVar31 = (TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                            *)(ulonglong)(iVar13 - 1U), iVar13 - 1U == 1)) {
          local_338 = (pFVar32->NameAndInfo).Index.Value;
          local_334 = uVar14 & 0x1ff;
          local_268 = &local_338;
          local_260 = pFVar32;
          TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FStatMessage_const_&>_>
                    (&local_e8,&local_328,(bool *)&local_268);
          if ((this_01 ==
               (TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ThisFrameMetaDataPerThreadPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                 ,0x4bd,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          this_01 = (TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                     *)0x0;
        }
      }
      if ((param_3 == (IItemFilter *)0x0) ||
         (cVar10 = (**(code **)((longlong)*param_3 + 8))(param_3,pFVar32), cVar10 != '\0')) {
        uVar14 = (pFVar32->NameAndInfo).Number;
        pFVar1 = &pFVar32->NameAndInfo;
        local_3a8.Value = (pFVar1->Index).Value;
        uStack_3a4 = uVar14 & 0x1ff;
        TVar26 = (int)uVar14 >> 0xc & Mask;
        if (((TVar26 == ChildrenStart) ||
            (((uVar14 & 0xf000) == 0xd000 || ((uVar14 & 0xf000) == 0xe000)))) &&
           ((uVar14 >> 0x12 & 1) != 0)) {
          pTVar15 = TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                            *)local_188,(FName)((ulonglong)*pFVar1 & 0x1ffffffffff));
          pFVar25 = (FStatMessage *)&pTVar15->field_0x8;
          if (pTVar15 == (TTuple<FName,FStatMessage> *)0x0) {
            pFVar25 = (FStatMessage *)0x0;
          }
          if (pFVar25 == (FStatMessage *)0x0) {
            local_258 = &local_3a8;
            local_250 = pFVar32;
            TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,FStatMessage_const_&>_>
                      ((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                        *)local_188,
                       (TPairInitializer<FName_const_&,FStatMessage_const_&> *)local_348,
                       (bool *)&local_258);
            pFVar25 = (FStatMessage *)(local_188._0_8_ + 8 + (longlong)(int)local_348._0_4_ * 0x20);
            piVar2 = &(pFVar25->NameAndInfo).Number;
            *piVar2 = *piVar2 & 0xffff8fff;
            piVar2 = &(pFVar25->NameAndInfo).Number;
            *piVar2 = *piVar2 | 0x108000;
            *(undefined8 *)(pFVar25->StatData).Pad = 0;
          }
          if (((int)pTVar31 != 0) &&
             (this_01 !=
              (TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
               *)0x0)) {
            FVar5.Number = uStack_3a4;
            FVar5.ComparisonIndex.Value = local_3a8.Value;
            pTVar15 = TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                      ::Find(this_01,FVar5);
            puVar18 = &pTVar15->field_0x8;
            if (pTVar15 == (TTuple<FName,FStatMessage> *)0x0) {
              puVar18 = (undefined1 *)0x0;
            }
            if (puVar18 == (undefined1 *)0x0) {
              local_248 = &local_3a8;
              local_240 = pFVar32;
              TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_const_&,FStatMessage_const_&>_>
                        (this_01,(TPairInitializer<FName_const_&,FStatMessage_const_&> *)
                                 (local_348 + 4),(bool *)&local_248);
              lVar20 = *(longlong *)&this_01->Elements;
              lVar19 = (longlong)(int)local_348._4_4_ * 0x20;
              puVar22 = (uint *)(lVar19 + 0x14 + lVar20);
              *puVar22 = *puVar22 & 0xffff8fff;
              puVar22 = (uint *)(lVar19 + 0x14 + lVar20);
              *puVar22 = *puVar22 | 0x108000;
              *(undefined8 *)(lVar19 + 8 + lVar20) = 0;
            }
          }
          uVar11 = uStack_3a4;
          uVar12 = ::GetTypeHash(local_3a8);
          if ((int)local_130 != local_104) {
            puVar18 = local_100;
            if (local_f8 != (undefined1 *)0x0) {
              puVar18 = local_f8;
            }
            iVar13 = *(int *)(puVar18 + (ulonglong)(local_f0 - 1U & uVar12 + uVar11) * 4);
            if (iVar13 != -1) {
              do {
                plVar17 = (longlong *)((longlong)iVar13 * 0x1c + local_138);
                if (*plVar17 == CONCAT44(uStack_3a4,local_3a8.Value)) {
                  if (plVar17 != (longlong *)0x0) goto LAB_141a00606;
                  break;
                }
                iVar13 = *(int *)((longlong)plVar17 + 0x14);
              } while (iVar13 != -1);
            }
          }
          local_310 = &local_3a8;
          local_3d8 = (FScriptContainerElement *)0x0;
          TSet<TTuple<FName,`FStatsThreadState::GetInclusiveAggregateStackStats'::__l2::FTimeInfo>,TDefaultMapHashableKeyFuncs<FName,`FStatsThreadState::GetInclusiveAggregateStackStats'::__l2::FTimeInfo,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                    (&local_138,(uint)local_340,
                     (TKeyInitializer<FName_const_&> *)(ulonglong)(uVar12 + uVar11),
                     (bool *)&local_310);
          plVar17 = (longlong *)((longlong)local_340[0] * 0x1c + local_138);
LAB_141a00606:
          lVar20 = local_398;
          param_3 = local_388;
          if ((uVar14 & 0xf000) == 0xc000) {
            *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
            *(int *)(plVar17 + 2) = (int)plVar17[2] + 1;
          }
          else {
            if ((uVar14 & 0xf000) == 0xd000) {
              *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
              *(int *)(plVar17 + 2) = (int)plVar17[2] + -1;
            }
            if ((((int)plVar17[2] == 0) &&
                (FStatsUtils::AccumulateStat(pFVar25,pFVar32,Add,false), lVar20 = local_398,
                param_3 = local_388, (int)pTVar31 != 0)) &&
               (this_01 !=
                (TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                 *)0x0)) {
              FVar8.Number = uStack_3a4;
              FVar8.ComparisonIndex.Value = local_3a8.Value;
              pFVar25 = TMapBase<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
                        ::FindChecked((TMapBase<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
                                       *)this_01,FVar8);
              FStatsUtils::AccumulateStat(pFVar25,pFVar32,Add,false);
              lVar20 = local_398;
              param_3 = local_388;
            }
          }
        }
        else if (param_4) {
          FStatsUtils::AddNonStackStats
                    ((FName)((ulonglong)*pFVar1 & 0x1ffffffffff),pFVar32,TVar26,
                     (TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
                      *)local_188);
        }
      }
      local_398 = lVar20 + 0x10;
      pTVar28 = (TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                 *)(ulonglong)(uVar30 + 1);
      iVar13 = local_308->ArrayNum;
    } while ((int)(uVar30 + 1) < iVar13);
  }
  pTVar16 = local_300;
  iStack_364 = 0;
  iStack_378 = 0;
  uStack_374 = 1;
  local_360 = iStack_378;
  if (local_160 != 0) {
    puVar22 = (uint *)(local_188 + 0x10);
    if (local_168 != (uint *)0x0) {
      puVar22 = local_168;
    }
    uVar14 = *puVar22;
    local_360 = 0;
    while (uVar14 == 0) {
      lVar20 = (longlong)iStack_378;
      local_360 = local_360 + 0x20;
      iStack_378 = iStack_378 + 1;
      iStack_364 = local_160;
      if ((int)(local_160 + -1 + (local_160 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_378)
      goto LAB_141a006ee;
      uVar14 = puVar22[lVar20 + 1];
    }
    uStack_374 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_374 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_328.Key._4_4_ = (int)lVar20;
    iStack_364 = local_328.Key._4_4_ + -1 + local_360;
    if (local_160 < iStack_364) {
      iStack_364 = local_160;
    }
  }
LAB_141a006ee:
  local_380 = (longlong *)local_188;
  local_370 = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
  uStack_368 = 0xffffffff;
  uStack_35c = local_21c;
  TStack_2f0._padding_ = CONCAT44(uStack_374,iStack_378);
  TStack_2f0.UnvisitedBitMask = 0xffffffff;
  TStack_2f0._28_4_ = local_21c;
  TStack_2f0.BaseBitIndex = local_360;
  local_2f8 = local_380;
  TStack_2f0.Array = local_370;
  TStack_2f0.CurrentBitIndex = iStack_364;
  if (iStack_364 < local_160) {
    do {
      pFVar4 = (pTVar16->AllocatorInstance).Data;
      pFVar23 = (FScriptContainerElement *)
                (*local_2f8 + 8 + (longlong)TStack_2f0.CurrentBitIndex * 0x20);
      if ((pFVar4 <= pFVar23) && (pFVar23 < pFVar4 + (longlong)pTVar16->ArrayMax * 0x10)) {
        local_3c0 = (longlong)pTVar16->ArrayNum;
        local_3b8 = 0x10;
        local_3d8 = pFVar23;
        local_3d0 = pFVar4;
        local_3c8 = (longlong)pTVar16->ArrayMax;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar13 = pTVar16->ArrayNum;
      if (iVar13 == pTVar16->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar16->AllocatorInstance,&pTVar16->ArrayMax);
      }
      pTVar16->ArrayNum = iVar13 + 1;
      uVar7 = *(undefined8 *)(pFVar23 + 8);
      pFVar4 = (pTVar16->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
      *(undefined8 *)pFVar4 = *(undefined8 *)pFVar23;
      *(undefined8 *)(pFVar4 + 8) = uVar7;
      TStack_2f0.UnvisitedBitMask = TStack_2f0.UnvisitedBitMask & ~TStack_2f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f0);
    } while (TStack_2f0.CurrentBitIndex < (TStack_2f0.Array)->NumBits);
  }
  if (local_350 !=
      (TMap<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
       *)0x0) {
    iStack_378 = 0;
    uStack_374 = 1;
    iStack_364 = 0;
    local_360 = 0;
    if (local_1b0 != 0) {
      puVar22 = (uint *)(local_1d8 + 0x10);
      if (local_1b8 != (uint *)0x0) {
        puVar22 = local_1b8;
      }
      uVar14 = *puVar22;
      local_360 = 0;
      while (uVar14 == 0) {
        lVar20 = (longlong)iStack_378;
        local_360 = local_360 + 0x20;
        iStack_378 = iStack_378 + 1;
        iStack_364 = local_1b0;
        if ((int)(local_1b0 + -1 + (local_1b0 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_378)
        goto LAB_141a008bf;
        uVar14 = (puVar22 + 1)[lVar20];
      }
      uStack_374 = -uVar14 & uVar14;
      uVar3 = (ulonglong)uStack_374 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_328.Value._0_4_ = (int)lVar20;
      iStack_364 = (int)local_328.Value + -1 + local_360;
      if (local_1b0 < iStack_364) {
        iStack_364 = local_1b0;
      }
    }
LAB_141a008bf:
    local_380 = (longlong *)local_1d8;
    local_370 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10);
    uStack_368 = 0xffffffff;
    uStack_35c = local_1fc;
    TStack_2a0._padding_ = CONCAT44(uStack_374,iStack_378);
    TStack_2a0.CurrentBitIndex = iStack_364;
    TStack_2a0.UnvisitedBitMask = 0xffffffff;
    TStack_2a0._28_4_ = local_1fc;
    TStack_2a0.BaseBitIndex = local_360;
    this_00 = local_350;
    local_2a8 = local_380;
    TStack_2a0.Array = local_370;
    iVar13 = iStack_364;
    if (iStack_364 < local_1b0) {
      do {
        lVar20 = *local_2a8;
        plVar17 = (longlong *)(lVar20 + 8 + (longlong)iVar13 * 0x60);
        lVar19 = (longlong)iVar13 * 0x60;
        FVar5 = *(FName *)(lVar19 + lVar20);
        local_330 = FVar5;
        if (*(int *)(lVar19 + 0x10 + lVar20) != *(int *)(lVar19 + 0x3c + lVar20)) {
          uVar14 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
          uVar14 = uVar14 + FVar5.Number;
          if (*(int *)&this_00->field_0x8 != *(int *)&this_00->field_0x34) {
            FVar21 = (ForElementType<FSetElementId>)&this_00->field_0x38;
            if (*(ForElementType<FSetElementId> *)&this_00->field_0x40 !=
                (ForElementType<FSetElementId>)0x0) {
              FVar21 = *(ForElementType<FSetElementId> *)&this_00->field_0x40;
            }
            uVar30 = *(uint *)((longlong)FVar21 +
                              (ulonglong)(*(int *)&this_00->field_0x48 - 1U & uVar14) * 4);
            if (uVar30 != 0xffffffff) {
              do {
                pFVar24 = (FName *)((longlong)(int)uVar30 * 0x20 + *(longlong *)this_00);
                if (*pFVar24 == local_330) {
                  if (pFVar24 != (FName *)0x0) {
                    pTVar16 = (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)(pFVar24 + 1);
                    goto LAB_141a009cf;
                  }
                  break;
                }
                uVar30 = pFVar24[3].ComparisonIndex.Value;
              } while (uVar30 != 0xffffffff);
            }
          }
          pTVar16 = TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
                    ::EmplaceByHash<FName_const_&>
                              ((TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
                                *)this_00,uVar14,&local_330);
LAB_141a009cf:
          iVar13 = (int)plVar17[5];
          local_370 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar17 + 2);
          iStack_378 = 0;
          uStack_374 = 1;
          local_360 = 0;
          iStack_364 = 0;
          if (iVar13 != 0) {
            pTVar29 = local_370;
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar17[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)plVar17[4];
            }
            uVar14 = *(uint *)(pTVar29->AllocatorInstance).InlineData;
            while (uVar14 == 0) {
              lVar20 = (longlong)iStack_378;
              local_360 = local_360 + 0x20;
              iStack_378 = iStack_378 + 1;
              iStack_364 = iVar13;
              if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_378)
              goto LAB_141a00a4e;
              uVar14 = *(uint *)((pTVar29->AllocatorInstance).InlineData + lVar20 * 4 + 4);
            }
            uStack_374 = -uVar14 & uVar14;
            uVar3 = (ulonglong)uStack_374 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_328.Value._4_4_ = (int)lVar20;
            iStack_364 = local_360 + -1 + local_328.Value._4_4_;
            if (iVar13 < iStack_364) {
              iStack_364 = iVar13;
            }
          }
LAB_141a00a4e:
          uStack_368 = 0xffffffff;
          uStack_35c = local_1dc;
          TStack_2c8._padding_ = CONCAT44(uStack_374,iStack_378);
          TStack_2c8.CurrentBitIndex = iStack_364;
          TStack_2c8.UnvisitedBitMask = 0xffffffff;
          TStack_2c8._28_4_ = local_1dc;
          TStack_2c8.BaseBitIndex = local_360;
          this_00 = local_350;
          local_380 = plVar17;
          local_2d0 = plVar17;
          TStack_2c8.Array = local_370;
          iVar27 = iStack_364;
          if (iStack_364 < iVar13) {
            do {
              pFVar4 = (pTVar16->AllocatorInstance).Data;
              pFVar23 = (FScriptContainerElement *)(*local_2d0 + 8 + (longlong)iVar27 * 0x20);
              if ((pFVar4 <= pFVar23) && (pFVar23 < pFVar4 + (longlong)pTVar16->ArrayMax * 0x10)) {
                local_3c0 = (longlong)pTVar16->ArrayNum;
                local_3b8 = 0x10;
                local_3d8 = pFVar23;
                local_3d0 = pFVar4;
                local_3c8 = (longlong)pTVar16->ArrayMax;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar9) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              iVar13 = pTVar16->ArrayNum;
              if (iVar13 == pTVar16->ArrayMax) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar16->AllocatorInstance,&pTVar16->ArrayMax);
              }
              pTVar16->ArrayNum = iVar13 + 1;
              uVar7 = *(undefined8 *)(pFVar23 + 8);
              pFVar4 = (pTVar16->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
              *(undefined8 *)pFVar4 = *(undefined8 *)pFVar23;
              *(undefined8 *)(pFVar4 + 8) = uVar7;
              TStack_2c8.UnvisitedBitMask =
                   TStack_2c8.UnvisitedBitMask & ~TStack_2c8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c8);
              this_00 = local_350;
              iVar27 = TStack_2c8.CurrentBitIndex;
            } while (TStack_2c8.CurrentBitIndex < (TStack_2c8.Array)->NumBits);
          }
        }
        TStack_2a0.UnvisitedBitMask = TStack_2a0.UnvisitedBitMask & ~TStack_2a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2a0);
        iVar13 = TStack_2a0.CurrentBitIndex;
      } while (TStack_2a0.CurrentBitIndex < (TStack_2a0.Array)->NumBits);
    }
  }
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  local_190 = 0;
  if (local_198 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_198);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1d8);
  local_140 = 0;
  if (local_148 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_148);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_188);
  local_f0 = 0;
  if (local_f8 != (undefined1 *)0x0) {
    FMemory::Free(local_f8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,`FStatsThreadState::GetInclusiveAggregateStackStats'::__l2::FTimeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,_FStatsThreadState::GetInclusiveAggregateStackStats_::__l2::FTimeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_138);
  return;
}

// GetInclusiveAggregateStackStats @ 141a00d50

void __thiscall
FStatsThreadState::GetInclusiveAggregateStackStats
          (FStatsThreadState *this,long64 param_1,
          TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_2,IItemFilter *param_3,
          bool param_4,
          TMap<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
          *param_5)

{
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = GetCondensedHistory(this,param_1);
  GetInclusiveAggregateStackStats(this,pTVar1,param_2,param_3,param_4,param_5);
  return;
}

// GetLatestValidFrame @ 141a00e80

long64 __thiscall FStatsThreadState::GetLatestValidFrame(FStatsThreadState *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iStack_48 = 0;
  iVar2 = *(int *)&(this->GoodFrames).Elements.field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->GoodFrames).Elements.field_0x10;
  lVar5 = -1;
  uStack_44 = 1;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar2 != 0) {
    puVar6 = *(uint **)&(this->GoodFrames).Elements.field_0x20;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)TStack_70.Array;
    }
    uVar3 = *puVar6;
    while (uVar3 == 0) {
      lVar4 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar2;
      if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iStack_48) goto LAB_141a00f2a;
      uVar3 = puVar6[lVar4 + 1];
    }
    uStack_44 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_34 = (int)lVar4 + -1 + local_30;
    if (iVar2 < iStack_34) {
      iStack_34 = iVar2;
    }
  }
LAB_141a00f2a:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = &this->GoodFrames;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iStack_48;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar2) {
    do {
      lVar4 = *(longlong *)
               (*(longlong *)&(this->GoodFrames).Elements +
               (longlong)TStack_70.CurrentBitIndex * 0x10);
      if ((lVar5 < lVar4) && (lVar4 <= this->LastFullFrameMetaAndNonFrame)) {
        lVar5 = lVar4;
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return lVar5;
}

// GetLocalState @ 141a00ff0

FStatsThreadState * __cdecl FStatsThreadState::GetLocalState(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FStatsThreadState(&::Singleton,0xd);
      atexit(`FStatsThreadState::GetLocalState'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// GetOldestValidFrame @ 141a013d0

long64 __thiscall FStatsThreadState::GetOldestValidFrame(FStatsThreadState *this)

{
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iStack_48 = 0;
  pTVar1 = &this->GoodFrames;
  iVar3 = *(int *)&(this->GoodFrames).Elements.field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->GoodFrames).Elements.field_0x10;
  lVar6 = -1;
  uStack_44 = 1;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar3 != 0) {
    puVar7 = *(uint **)&(this->GoodFrames).Elements.field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)TStack_70.Array;
    }
    uVar4 = *puVar7;
    while (uVar4 == 0) {
      lVar5 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iStack_48) goto LAB_141a0147a;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_44 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uStack_44 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_34 = (int)lVar5 + -1 + local_30;
    if (iVar3 < iStack_34) {
      iStack_34 = iVar3;
    }
  }
LAB_141a0147a:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = pTVar1;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iStack_48;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar3) {
    do {
      if (((lVar6 == -1) ||
          (*(longlong *)
            (*(longlong *)&pTVar1->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10) < lVar6))
         && (lVar5 = *(longlong *)
                      (*(longlong *)&pTVar1->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10),
            lVar5 <= this->LastFullFrameMetaAndNonFrame)) {
        lVar6 = lVar5;
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return lVar6;
}

// GetRawStackStats @ 141a01ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStatsThreadState::GetRawStackStats
          (FStatsThreadState *this,long64 param_1,FRawStatStackNode *param_2,
          TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_3)

{
  FStatNameAndInfo *pFVar1;
  ForAnyElementType *pFVar2;
  uint *puVar3;
  TMap<unsigned_int,FEventData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>_>
  *pTVar4;
  longlong lVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  undefined1 *puVar8;
  int *piVar9;
  double *pdVar10;
  code *pcVar11;
  undefined8 uVar12;
  FStatNameAndInfo FVar13;
  FName FVar14;
  FName FVar15;
  double dVar16;
  undefined4 uVar17;
  FStatPacketArray *pFVar18;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  TTuple<FName,FRawStatStackNode_*> *pTVar25;
  undefined8 *puVar26;
  uchar (*pauVar27) [8];
  uchar (*pauVar28) [8];
  longlong lVar29;
  undefined1 *puVar30;
  undefined8 *puVar31;
  FScriptContainerElement *pFVar32;
  FStatMessage *pFVar33;
  ForAnyElementType FVar34;
  uint *puVar35;
  Type TVar36;
  int iVar37;
  TBitArray<FDefaultBitArrayAllocator> *pTVar38;
  longlong *plVar39;
  double *pdVar40;
  undefined1 auStackY_398 [32];
  ForAnyElementType local_348;
  undefined8 local_340;
  undefined1 local_338;
  undefined1 local_337 [7];
  ForAnyElementType local_330;
  undefined8 local_328;
  uint local_320 [2];
  double *local_318;
  ForAnyElementType local_310;
  uint local_308;
  uint local_304;
  ForAnyElementType local_300;
  uint local_2f8;
  uint local_2f4;
  uint local_2f0;
  uint local_2ec;
  uint local_2e8;
  longlong *local_2e0;
  undefined8 local_2d8;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c8;
  FNameEntryId local_2a0;
  uint uStack_29c;
  FStatMessage *local_298;
  undefined1 local_290 [16];
  uint local_280;
  undefined1 local_278 [16];
  undefined8 uStack_268;
  ForAnyElementType local_260;
  longlong local_258;
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *local_250;
  undefined4 local_248;
  uint local_244;
  FNameEntryId local_240;
  uint uStack_23c;
  FStatsThreadState *local_238;
  uchar (*local_230) [8];
  FStatPacketArray *local_228;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_220;
  FRawStatStackNode *local_218;
  int local_210;
  int local_20c;
  int local_208;
  undefined8 *local_200;
  uint *local_1f8;
  FString local_1f0;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  uint *local_190;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  TBitArray<FDefaultBitArrayAllocator> *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  undefined8 local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 *local_148;
  undefined8 **local_140;
  FNameEntryId *local_138;
  uchar (**local_130) [8];
  undefined4 local_104;
  undefined4 local_e4;
  undefined4 local_c4;
  undefined1 local_b8 [32];
  uint *local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  void *local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_260.Data = (FScriptContainerElement *)param_1;
  local_250 = param_3;
  local_238 = this;
  local_218 = param_2;
  local_228 = GetStatPacketArray(this,param_1);
  dVar16 = __real_408f400000000000;
  local_8c = 0x80;
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  iVar24 = (local_228->Packets).ArrayNum;
  local_2e8 = 0;
  local_2d8 = 1;
  if (0 < iVar24) {
    local_220 = (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                 *)&param_2->Children;
    local_258 = 0;
    do {
      this_00 = local_220;
      pFVar18 = local_228;
      lVar29 = local_258;
      uVar22 = local_2e8;
      puVar31 = (undefined8 *)0x0;
      uVar20 = 0;
      if ((int)local_2e8 < iVar24) {
        uVar20 = ~local_2e8 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar5 = *(longlong *)((pFVar18->Packets).AllocatorInstance.Data + lVar29);
      GetStatThreadName(this,(FStatPacket *)local_278);
      pTVar25 = TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                ::Find(this_00,(FName)local_278._0_8_);
      if ((pTVar25 == (TTuple<FName,FRawStatStackNode_*> *)0x0) ||
         (puVar26 = *(undefined8 **)&pTVar25->field_0x8, puVar26 == (undefined8 *)0x0)) {
        ::FString::PrintfImpl(&local_1f0,L"%s%x_0");
        puVar26 = FRawStatStackNode::operator_new(0x60);
        if (puVar26 != (undefined8 *)0x0) {
          FVar34.Data = (FScriptContainerElement *)L"";
          if (local_1f0.Data.ArrayNum != 0) {
            FVar34.Data = local_1f0.Data.AllocatorInstance.Data;
          }
          FStatNameAndInfo::ToLongName
                    ((FName)&local_248,(char *)local_278._0_8_,"STATGROUP_Threads",
                     (wchar_t *)"STATCAT_Advanced",SUB81(FVar34.Data,0));
          uStack_150 = local_248;
          uVar20 = local_244 & 0xfffff5ff | 0x250400;
          if (FStatNameAndInfo::GpuStatCategory == "STATCAT_Advanced") {
            uVar20 = local_244 & 0xfffff5ff | 0x270400;
          }
          uStack_14c = uVar20 & 0xffff1fff | 0x1000;
          *puVar26 = local_158;
          puVar26[1] = CONCAT44(uVar20,local_248) & 0xffff1fffffffffff | 0x100000000000;
          puVar26[2] = 0;
          puVar26[3] = 0;
          puVar26[6] = 0;
          *(undefined4 *)(puVar26 + 7) = 0;
          *(undefined4 *)((longlong)puVar26 + 0x3c) = 0x80;
          *(undefined4 *)(puVar26 + 8) = 0xffffffff;
          *(undefined4 *)((longlong)puVar26 + 0x44) = 0;
          puVar26[10] = 0;
          *(undefined4 *)(puVar26 + 0xb) = 0;
          puVar31 = puVar26;
        }
        local_148 = (undefined8 *)local_278;
        local_140 = &local_200;
        local_200 = puVar31;
        TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FRawStatStackNode_*_&&>_>
                  (this_00,(TPairInitializer<FName_const_&,FRawStatStackNode_*_&&> *)local_290,
                   (bool *)&local_148);
        puVar26 = *(undefined8 **)
                   (*(longlong *)&this_00->Elements + 8 + (longlong)(int)local_290._0_4_ * 0x18);
        *(uint *)((longlong)puVar26 + 0xc) = *(uint *)((longlong)puVar26 + 0xc) | 0x100000;
        *puVar26 = 0;
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
      }
      local_330.Data = (FScriptContainerElement *)0x0;
      local_328 = 0;
      local_348.Data = (FScriptContainerElement *)0x0;
      local_340 = 0;
      uVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_348,(int *)((longlong)&local_340 + 4));
      local_340 = CONCAT44(local_340._4_4_,uVar21 + 1);
      *(undefined8 **)(local_348.Data + (longlong)(int)uVar21 * 8) = puVar26;
      uVar20 = 0;
      if ((int)uVar21 < (int)(uVar21 + 1)) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      plVar39 = *(longlong **)(lVar5 + 0x18);
      local_2f0 = 0;
      pdVar40 = *(double **)(local_348.Data + (longlong)((int)local_340 + -1) * 8);
      local_280 = *(uint *)(lVar5 + 0x28);
      local_2ec = 0;
      local_2e0 = plVar39;
      if (local_280 != 0) {
        do {
          pauVar28 = (uchar (*) [8])0x0;
          pFVar33 = (FStatMessage *)((ulonglong)local_2ec * 0x10 + *plVar39);
          if ((((pFVar33->NameAndInfo).Number & 0x10000U) == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Item.NameAndInfo.GetFlag(EStatMetaFlags::DummyAlwaysOne)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                  ,0x58a,L""), bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar22 = (pFVar33->NameAndInfo).Number;
          pFVar1 = &pFVar33->NameAndInfo;
          local_2a0.Value = (pFVar1->Index).Value;
          uStack_29c = uVar22 & 0x1ff;
          TVar36 = (int)uVar22 >> 0xc & Mask;
          if ((TVar36 == CycleScopeStart) || ((uVar22 & 0xf000) == 0x6000)) {
            if (((uVar22 >> 0x12 & 1) == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Item.NameAndInfo.GetFlag(EStatMetaFlags::IsCycle)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                    ,0x590,L""), bVar19)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if ((uVar22 & 0xf000) == 0x5000) {
              FVar14.Number = uStack_29c;
              FVar14.ComparisonIndex.Value = local_2a0.Value;
              pTVar25 = TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                                *)(pdVar40 + 2),FVar14);
              if ((pTVar25 == (TTuple<FName,FRawStatStackNode_*> *)0x0) ||
                 (local_318 = *(double **)&pTVar25->field_0x8, local_318 == (double *)0x0)) {
                local_318 = (double *)0x0;
                pauVar27 = FRawStatStackNode::operator_new(0x60);
                if (pauVar27 != (uchar (*) [8])0x0) {
                  FVar13 = pFVar33->NameAndInfo;
                  *pauVar27 = *&(pFVar33->StatData).Pad;
                  *(FStatNameAndInfo *)(pauVar27 + 1) = FVar13;
                  pauVar27[2] = (uchar  [8])0x0;
                  pauVar27[3] = (uchar  [8])0x0;
                  pauVar27[6] = (uchar  [8])0x0;
                  *(uchar *)((longlong)(pauVar27 + 7) + 0) = '\0';
                  *(uchar *)((longlong)(pauVar27 + 7) + 1) = '\0';
                  *(uchar *)((longlong)(pauVar27 + 7) + 2) = '\0';
                  *(uchar *)((longlong)(pauVar27 + 7) + 3) = '\0';
                  *(uchar *)((longlong)(pauVar27 + 7) + 4) = 0x80;
                  *(uchar *)((longlong)(pauVar27 + 7) + 5) = '\0';
                  *(uchar *)((longlong)(pauVar27 + 7) + 6) = '\0';
                  *(uchar *)((longlong)(pauVar27 + 7) + 7) = '\0';
                  *(uchar *)((longlong)(pauVar27 + 8) + 0) = 0xff;
                  *(uchar *)((longlong)(pauVar27 + 8) + 1) = 0xff;
                  *(uchar *)((longlong)(pauVar27 + 8) + 2) = 0xff;
                  *(uchar *)((longlong)(pauVar27 + 8) + 3) = 0xff;
                  *(uchar *)((longlong)(pauVar27 + 8) + 4) = '\0';
                  *(uchar *)((longlong)(pauVar27 + 8) + 5) = '\0';
                  *(uchar *)((longlong)(pauVar27 + 8) + 6) = '\0';
                  *(uchar *)((longlong)(pauVar27 + 8) + 7) = '\0';
                  pauVar27[10] = (uchar  [8])0x0;
                  *(uchar *)((longlong)(pauVar27 + 0xb) + 0) = '\0';
                  *(uchar *)((longlong)(pauVar27 + 0xb) + 1) = '\0';
                  *(uchar *)((longlong)(pauVar27 + 0xb) + 2) = '\0';
                  *(uchar *)((longlong)(pauVar27 + 0xb) + 3) = '\0';
                  pauVar28 = pauVar27;
                }
                local_138 = &local_2a0;
                local_130 = &local_230;
                local_230 = pauVar28;
                TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FName_const_&,FRawStatStackNode_*_&&>_>
                          ((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                            *)(pdVar40 + 2),
                           (TPairInitializer<FName_const_&,FRawStatStackNode_*_&&> *)
                           (local_290 + 0xc),(bool *)&local_138);
                local_318 = *(double **)
                             ((longlong)pdVar40[2] + 8 + (longlong)(int)local_290._12_4_ * 0x18);
                *(uint *)((longlong)local_318 + 0xc) =
                     *(uint *)((longlong)local_318 + 0xc) & 0xffff8fff;
                *(uint *)((longlong)local_318 + 0xc) = *(uint *)((longlong)local_318 + 0xc) | 0x8000
                ;
                *(uint *)((longlong)local_318 + 0xc) =
                     *(uint *)((longlong)local_318 + 0xc) | 0x100000;
                *local_318 = 0.0;
              }
              if (((local_348.Data <= (FScriptContainerElement *)&local_318) &&
                  ((FScriptContainerElement *)&local_318 <
                   local_348.Data + (longlong)local_340._4_4_ * 8)) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              iVar24 = (int)local_340;
              if ((int)local_340 == local_340._4_4_) {
                iVar24 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_348,(int *)((longlong)&local_340 + 4));
              }
              local_340 = CONCAT44(local_340._4_4_,iVar24 + 1);
              *(double **)(local_348.Data + (longlong)iVar24 * 8) = local_318;
              local_298 = pFVar33;
              if (((local_330.Data <= (FScriptContainerElement *)&local_298) &&
                  ((FScriptContainerElement *)&local_298 <
                   local_330.Data + (longlong)local_328._4_4_ * 8)) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              iVar24 = (int)local_328;
              if ((int)local_328 == local_328._4_4_) {
                iVar24 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_330,(int *)((longlong)&local_328 + 4));
              }
              local_328 = CONCAT44(local_328._4_4_,iVar24 + 1);
              *(FStatMessage **)(local_330.Data + (longlong)iVar24 * 8) = local_298;
              pdVar40 = local_318;
            }
            else if ((uVar22 & 0xf000) == 0x6000) {
              if ((int)local_328 < 1) {
                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar19) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              iVar23 = (int)local_328 + -1;
              piVar9 = *(int **)(local_330.Data + (longlong)iVar23 * 8);
              iVar37 = ((int)local_328 - iVar23) + -1;
              iVar24 = (int)local_328;
              if (iVar37 != 0) {
                memmove(local_330.Data + (longlong)iVar23 * 8,
                        local_330.Data + (longlong)iVar23 * 8 + 8,(longlong)iVar37 << 3);
                iVar24 = (int)local_328;
              }
              local_328 = CONCAT44(local_328._4_4_,iVar24 + -1);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&local_330,iVar24 + -1,(int *)((longlong)&local_328 + 4));
              local_278._8_8_ =
                   (ulonglong)(uint)(*(int *)(pFVar33->StatData).Pad - *piVar9) | 0x100000000;
              uVar22 = (uint)((ulonglong)*(undefined8 *)(piVar9 + 2) >> 0x20);
              uStack_268._0_4_ = (undefined4)*(undefined8 *)(piVar9 + 2);
              uVar17 = (undefined4)uStack_268;
              uStack_268 = CONCAT44(uVar22,(undefined4)uStack_268) & 0xffff8fffffffffff |
                           0x10800000000000;
              if ((((ulonglong)pdVar40[1] & 0x1ffffffffff) !=
                   (CONCAT44(uVar22,uVar17) & 0x1ffffffffff)) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("bAllowNameMismatch || Dest.NameAndInfo.GetRawName() == Item.NameAndInfo.GetRawName()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                      ,1999,L""), bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar22 = (int)(uVar22 & 0xffff8fff | 0x108000) >> 9 & 7;
              if (((*(int *)((longlong)pdVar40 + 0xc) >> 9 & 7U) != uVar22) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Dest.NameAndInfo.GetField<EStatDataType>() == Item.NameAndInfo.GetField<EStatDataType>()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                      ,0x7d5,L""), bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if (((((byte)(*(uint *)((longlong)pdVar40 + 0xc) >> 0x14) ^
                    (byte)(uStack_268._4_4_ >> 0x14)) & 1) != 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Dest.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration) == Item.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                      ,0x7d6,L""), bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if (uVar22 == 2) {
                *pdVar40 = (double)((longlong)*pdVar40 + local_278._8_8_);
              }
              else if (uVar22 == 3) {
                *pdVar40 = (double)local_278._8_8_ + *pdVar40;
              }
              else if ((uVar22 != 5) &&
                      (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                          ("0",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                           ,0x816,L""), bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if (((*(uint *)((longlong)pdVar40 + 0xc) & 0x100000) == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Current->Meta.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                      ,0x5a3,L""), bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if ((int)local_340 < 1) {
                bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar19) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              iVar23 = (int)local_340 + -1;
              pdVar10 = *(double **)(local_348.Data + (longlong)iVar23 * 8);
              iVar37 = ((int)local_340 - iVar23) + -1;
              iVar24 = (int)local_340;
              if (iVar37 != 0) {
                memmove(local_348.Data + (longlong)iVar23 * 8,
                        local_348.Data + (longlong)iVar23 * 8 + 8,(longlong)iVar37 << 3);
                iVar24 = (int)local_340;
              }
              local_340 = CONCAT44(local_340._4_4_,iVar24 + -1);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&local_348,iVar24 + -1,(int *)((longlong)&local_340 + 4));
              if ((pdVar40 != pdVar10) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Current == Stack.Pop()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                      ,0x5a4,L""), bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar22 = 0;
              if ((int)((int)local_340 - 1U) < (int)local_340) {
                uVar22 = ~((int)local_340 - 1U) >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pdVar40 = *(double **)(local_348.Data + (longlong)((int)local_340 + -1) * 8);
            }
          }
          else if ((uVar22 & 0xf000) == 0x7000) {
            uVar6 = *(ulonglong *)(pFVar33->StatData).Pad;
            local_320[0] = (uint)(uVar6 >> 0x20);
            local_240.Value = local_2a0.Value;
            uStack_23c = uStack_29c;
            if ((FName)((ulonglong)*pFVar1 & 0x1ffffffffff) == FStatConstants::RAW_EventWaitWithId)
            {
              local_310.Data = (FScriptContainerElement *)0x0;
              local_304 = 0;
              iVar24 = (int)local_340;
              local_308 = 0;
              pFVar7 = local_348.Data + (longlong)(int)local_340 * 8;
              FVar34.Data = local_348.Data;
              while( true ) {
                uVar22 = (uint)pauVar28;
                if ((int)local_340 != iVar24) {
                  local_338 = 0;
                  `TCheckedPointerIterator<FRawStatStackNode_*,int,0>::operator!='::__l2::<lambda_1>
                  ::operator()(&local_338);
                  uVar22 = local_308;
                }
                this = local_238;
                if (FVar34.Data == pFVar7) break;
                pFVar32 = (FScriptContainerElement *)(*(double **)FVar34.Data + 1);
                if (((local_310.Data <= pFVar32) &&
                    (pFVar32 < local_310.Data + (longlong)(int)local_304 * 8)) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), uVar22 = local_308, bVar19)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                if (uVar22 == local_304) {
                  uVar22 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x408,&local_310,(int *)&local_304);
                }
                local_308 = uVar22 + 1;
                FVar34.Data = FVar34.Data + 8;
                *(double *)(local_310.Data + (longlong)(int)uVar22 * 8) = *(double *)pFVar32;
                pauVar28 = (uchar (*) [8])(ulonglong)local_308;
              }
              pTVar4 = &local_238->EventsHistory;
              if (*(int *)&(local_238->EventsHistory).field_0x8 !=
                  *(int *)&(local_238->EventsHistory).field_0x34) {
                puVar8 = *(undefined1 **)&(local_238->EventsHistory).field_0x40;
                puVar30 = &(local_238->EventsHistory).field_0x38;
                if (puVar8 != (undefined1 *)0x0) {
                  puVar30 = puVar8;
                }
                uVar20 = *(uint *)(puVar30 +
                                  (ulonglong)
                                  (*(int *)&(local_238->EventsHistory).field_0x48 - 1U &
                                  local_320[0]) * 4);
                if (uVar20 != 0xffffffff) {
                  do {
                    puVar35 = (uint *)((longlong)(int)uVar20 * 0x40 +
                                      *(longlong *)&pTVar4->field_0x0);
                    if (*puVar35 == local_320[0]) {
                      if (puVar35 != (uint *)0x0) goto LAB_141a02b04;
                      break;
                    }
                    uVar20 = puVar35[0xe];
                  } while (uVar20 != 0xffffffff);
                }
              }
              local_1f8 = local_320;
              TSet<TTuple<unsigned_int,FEventData>,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
                        ((TSet<TTuple<unsigned_int,FEventData>,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>,FDefaultSetAllocator>
                          *)pTVar4,(int)local_290 + 4,
                         (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_320[0],
                         (bool *)&local_1f8);
              puVar35 = (uint *)((longlong)(int)local_290._4_4_ * 0x40 +
                                *(longlong *)&pTVar4->field_0x0);
              uVar22 = local_308;
LAB_141a02b04:
              FVar34.Data = local_310.Data;
              pFVar2 = (ForAnyElementType *)(puVar35 + 2);
              if (pFVar2 != &local_310) {
                puVar3 = puVar35 + 5;
                puVar35[4] = uVar22;
                if ((uVar22 == 0) && (*puVar3 == 0)) {
                  *puVar3 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,4,uVar22,*puVar3,pFVar2,uVar22,(int *)puVar3);
                  if (uVar22 != 0) {
                    memcpy(pFVar2->Data,FVar34.Data,(longlong)(int)uVar22 << 3);
                  }
                }
              }
              if (((int)puVar35[4] < 1) || (iVar24 = (int)local_2d8, (int)puVar35[8] < 1)) {
                iVar24 = 0;
              }
              FVar34.Data = (FScriptContainerElement *)0x0;
              if (iVar24 != 0) {
                FVar34.Data = local_260.Data;
              }
              *(FScriptContainerElement **)(puVar35 + 10) = FVar34.Data;
              if (local_310.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_310.Data);
              }
            }
            else {
              plVar39 = local_2e0;
              if ((FName)((ulonglong)*pFVar1 & 0x1ffffffffff) !=
                  FStatConstants::RAW_EventTriggerWithId) goto LAB_141a02442;
            }
            FVar15.Number = uStack_23c;
            FVar15.ComparisonIndex.Value = local_240.Value;
            plVar39 = local_2e0;
            if (FStatConstants::RAW_EventTriggerWithId == FVar15) {
              local_300.Data = (FScriptContainerElement *)0x0;
              local_2f4 = 0;
              iVar24 = (int)local_340;
              local_2f8 = 0;
              pFVar7 = local_348.Data + (longlong)(int)local_340 * 8;
              FVar34.Data = local_348.Data;
              while( true ) {
                if ((int)local_340 != iVar24) {
                  local_337[0] = 0;
                  `TCheckedPointerIterator<FRawStatStackNode_*,int,0>::operator!='::__l2::<lambda_1>
                  ::operator()(local_337);
                }
                this = local_238;
                if (FVar34.Data == pFVar7) break;
                pFVar32 = (FScriptContainerElement *)(*(double **)FVar34.Data + 1);
                if (((local_300.Data <= pFVar32) &&
                    (pFVar32 < local_300.Data + (longlong)(int)local_2f4 * 8)) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                if (local_2f8 == local_2f4) {
                  local_2f8 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x408,&local_300,(int *)&local_2f4);
                }
                FVar34.Data = FVar34.Data + 8;
                *(double *)(local_300.Data + (longlong)(int)local_2f8 * 8) = *(double *)pFVar32;
                local_2f8 = local_2f8 + 1;
              }
              pTVar4 = &local_238->EventsHistory;
              if (*(int *)&(local_238->EventsHistory).field_0x8 !=
                  *(int *)&(local_238->EventsHistory).field_0x34) {
                puVar8 = *(undefined1 **)&(local_238->EventsHistory).field_0x40;
                puVar30 = &(local_238->EventsHistory).field_0x38;
                if (puVar8 != (undefined1 *)0x0) {
                  puVar30 = puVar8;
                }
                uVar22 = *(uint *)(puVar30 +
                                  (ulonglong)
                                  (*(int *)&(local_238->EventsHistory).field_0x48 - 1U &
                                  local_320[0]) * 4);
                if (uVar22 != 0xffffffff) {
                  do {
                    puVar35 = (uint *)((longlong)(int)uVar22 * 0x40 +
                                      *(longlong *)&pTVar4->field_0x0);
                    if (*puVar35 == local_320[0]) {
                      if (puVar35 != (uint *)0x0) goto LAB_141a02d24;
                      break;
                    }
                    uVar22 = puVar35[0xe];
                  } while (uVar22 != 0xffffffff);
                }
              }
              local_190 = local_320;
              TSet<TTuple<unsigned_int,FEventData>,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
                        ((TSet<TTuple<unsigned_int,FEventData>,TDefaultMapHashableKeyFuncs<unsigned_int,FEventData,0>,FDefaultSetAllocator>
                          *)pTVar4,(int)local_290 + 8,
                         (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_320[0],
                         (bool *)&local_190);
              puVar35 = (uint *)((longlong)(int)local_290._8_4_ * 0x40 +
                                *(longlong *)&pTVar4->field_0x0);
LAB_141a02d24:
              uVar22 = local_2f8;
              FVar34.Data = local_300.Data;
              pFVar2 = (ForAnyElementType *)(puVar35 + 6);
              if (pFVar2 != &local_300) {
                puVar3 = puVar35 + 9;
                puVar35[8] = local_2f8;
                if ((local_2f8 == 0) && (*puVar3 == 0)) {
                  *puVar3 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,4,local_2f8,*puVar3,pFVar2,local_2f8,(int *)puVar3);
                  if (uVar22 != 0) {
                    memcpy(pFVar2->Data,FVar34.Data,(longlong)(int)uVar22 << 3);
                  }
                }
              }
              puVar35[0xc] = (uint)uVar6;
              puVar35[0xd] = (uint)(float)(FGenericPlatformTime::SecondsPerCycle * dVar16 *
                                          (double)(uVar6 & 0xffffffff));
              if (((int)puVar35[4] < 1) || (iVar24 = (int)local_2d8, (int)puVar35[8] < 1)) {
                iVar24 = 0;
              }
              FVar34.Data = (FScriptContainerElement *)0x0;
              if (iVar24 != 0) {
                FVar34.Data = local_260.Data;
              }
              *(FScriptContainerElement **)(puVar35 + 10) = FVar34.Data;
              plVar39 = local_2e0;
              if (local_300.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_300.Data);
                plVar39 = local_2e0;
              }
            }
          }
          else if (local_250 != (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)0x0) {
            FStatsUtils::AddNonStackStats
                      ((FName)((ulonglong)*pFVar1 & 0x1ffffffffff),pFVar33,TVar36,
                       (TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
                        *)local_b8);
          }
LAB_141a02442:
          uVar22 = local_2ec + 1;
          if (0xfff < uVar22) {
            plVar39 = plVar39 + 1;
            local_2e0 = plVar39;
          }
          local_2f0 = local_2f0 + 1;
          local_2ec = 0;
          if (uVar22 < 0x1000) {
            local_2ec = uVar22;
          }
          lVar29 = local_258;
          uVar22 = local_2e8;
        } while (local_2f0 < local_280);
      }
      if (local_348.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.Data);
      }
      if (local_330.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_330.Data);
      }
      local_2e8 = uVar22 + 1;
      local_258 = lVar29 + 8;
      iVar24 = (local_228->Packets).ArrayNum;
      param_3 = local_250;
      param_2 = local_218;
    } while ((int)local_2e8 < iVar24);
  }
  local_2d0 = &param_2->Children;
  uVar20 = (uint)local_2d8;
  iVar24 = *(int *)&(param_2->Children).field_0x28;
  TStack_2c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Children).field_0x10;
  iVar37 = 0;
  TStack_2c8.BaseBitIndex = 0;
  uVar22 = uVar20;
  iVar23 = 0;
  if (iVar24 != 0) {
    puVar35 = *(uint **)&(param_2->Children).field_0x20;
    if (puVar35 == (uint *)0x0) {
      puVar35 = (uint *)TStack_2c8.Array;
    }
    uVar21 = *puVar35;
    while (uVar21 == 0) {
      lVar29 = (longlong)iVar37;
      TStack_2c8.BaseBitIndex = TStack_2c8.BaseBitIndex + 0x20;
      iVar37 = iVar37 + 1;
      iVar23 = iVar24;
      if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar37) goto LAB_141a02572;
      uVar21 = puVar35[lVar29 + 1];
    }
    uVar22 = -uVar21 & uVar21;
    uVar6 = (ulonglong)uVar22 * 2 + 1;
    lVar29 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_208 = (int)lVar29;
    iVar23 = TStack_2c8.BaseBitIndex + -1 + local_208;
    if (iVar24 < iVar23) {
      iVar23 = iVar24;
    }
  }
LAB_141a02572:
  TStack_2c8._padding_ = CONCAT44(uVar22,iVar37);
  TStack_2c8.CurrentBitIndex = iVar23;
  TStack_2c8.UnvisitedBitMask = 0xffffffff;
  TStack_2c8._28_4_ = local_104;
  TStack_1b0._padding_ = TStack_2c8._padding_;
  TStack_1b0.BaseBitIndex = TStack_2c8.BaseBitIndex;
  TStack_1b0._28_4_ = local_104;
  TStack_1b0.UnvisitedBitMask = 0xffffffff;
  TStack_1b0.CurrentBitIndex = iVar23;
  local_1b8 = local_2d0;
  TStack_1b0.Array = TStack_2c8.Array;
  if (iVar23 < iVar24) {
    do {
      iVar37 = 0;
      TStack_2c8.BaseBitIndex = 0;
      plVar39 = *(longlong **)(*(longlong *)local_1b8 + 8 + (longlong)iVar23 * 0x18);
      local_2d0 = (TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                   *)(plVar39 + 2);
      iVar24 = (int)plVar39[7];
      TStack_2c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar39 + 4);
      uVar22 = uVar20;
      TStack_2c8.CurrentBitIndex = 0;
      if (iVar24 != 0) {
        pTVar38 = TStack_2c8.Array;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar39[6] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar38 = (TBitArray<FDefaultBitArrayAllocator> *)plVar39[6];
        }
        uVar21 = *(uint *)(pTVar38->AllocatorInstance).InlineData;
        while (uVar21 == 0) {
          lVar29 = (longlong)iVar37;
          TStack_2c8.BaseBitIndex = TStack_2c8.BaseBitIndex + 0x20;
          iVar37 = iVar37 + 1;
          TStack_2c8.CurrentBitIndex = iVar24;
          if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar37) goto LAB_141a02671;
          uVar21 = *(uint *)((pTVar38->AllocatorInstance).InlineData + lVar29 * 4 + 4);
        }
        uVar22 = -uVar21 & uVar21;
        uVar6 = (ulonglong)uVar22 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        local_20c = (int)lVar29;
        TStack_2c8.CurrentBitIndex = TStack_2c8.BaseBitIndex + -1 + local_20c;
        if (iVar24 < TStack_2c8.CurrentBitIndex) {
          TStack_2c8.CurrentBitIndex = iVar24;
        }
      }
LAB_141a02671:
      TStack_2c8._padding_ = CONCAT44(uVar22,iVar37);
      TStack_2c8.UnvisitedBitMask = 0xffffffff;
      TStack_2c8._28_4_ = local_e4;
      TStack_1d8._padding_ = TStack_2c8._padding_;
      TStack_1d8.BaseBitIndex = TStack_2c8.BaseBitIndex;
      TStack_1d8._28_4_ = local_e4;
      TStack_1d8.UnvisitedBitMask = 0xffffffff;
      TStack_1d8.CurrentBitIndex = TStack_2c8.CurrentBitIndex;
      local_1e0 = local_2d0;
      TStack_1d8.Array = TStack_2c8.Array;
      iVar37 = TStack_2c8.CurrentBitIndex;
      if (TStack_2c8.CurrentBitIndex < iVar24) {
        do {
          *plVar39 = *plVar39 +
                     **(longlong **)(*(longlong *)local_1e0 + 8 + (longlong)iVar37 * 0x18);
          TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
          iVar37 = TStack_1d8.CurrentBitIndex;
        } while (TStack_1d8.CurrentBitIndex < (TStack_1d8.Array)->NumBits);
      }
      TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
      iVar23 = TStack_1b0.CurrentBitIndex;
    } while (TStack_1b0.CurrentBitIndex < (TStack_1b0.Array)->NumBits);
  }
  if (param_3 != (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)0x0) {
    iStack_180 = 0;
    iStack_16c = 0;
    local_168 = 0;
    if (local_90 != 0) {
      puVar35 = (uint *)(local_b8 + 0x10);
      if (local_98 != (uint *)0x0) {
        puVar35 = local_98;
      }
      uVar22 = *puVar35;
      while (uVar22 == 0) {
        lVar29 = (longlong)iStack_180;
        local_168 = local_168 + 0x20;
        iStack_180 = iStack_180 + 1;
        iStack_16c = local_90;
        if ((int)(local_90 + -1 + (local_90 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180)
        goto LAB_141a027e3;
        uVar22 = (puVar35 + 1)[lVar29];
      }
      uVar20 = -uVar22 & uVar22;
      uVar6 = (ulonglong)uVar20 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_210 = (int)lVar29;
      iStack_16c = local_210 + -1 + local_168;
      if (local_90 < iStack_16c) {
        iStack_16c = local_90;
      }
    }
LAB_141a027e3:
    local_2d0 = (TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                 *)local_b8;
    TStack_2c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
    uStack_170 = 0xffffffff;
    uStack_164 = local_c4;
    TStack_2c8._padding_ = CONCAT44(uVar20,iStack_180);
    TStack_2c8.CurrentBitIndex = iStack_16c;
    TStack_2c8.UnvisitedBitMask = 0xffffffff;
    TStack_2c8._28_4_ = local_c4;
    TStack_2c8.BaseBitIndex = local_168;
    local_188 = local_2d0;
    uStack_17c = uVar20;
    local_178 = TStack_2c8.Array;
    iVar24 = iStack_16c;
    if (iStack_16c < local_90) {
      do {
        pFVar7 = (param_3->AllocatorInstance).Data;
        pFVar32 = (FScriptContainerElement *)(*(longlong *)local_2d0 + 8 + (longlong)iVar24 * 0x20);
        if (((pFVar7 <= pFVar32) && (pFVar32 < pFVar7 + (longlong)param_3->ArrayMax * 0x10)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar24 = param_3->ArrayNum;
        if (iVar24 == param_3->ArrayMax) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar24 + 1;
        uVar12 = *(undefined8 *)(pFVar32 + 8);
        pFVar7 = (param_3->AllocatorInstance).Data + (longlong)iVar24 * 0x10;
        *(undefined8 *)pFVar7 = *(undefined8 *)pFVar32;
        *(undefined8 *)(pFVar7 + 8) = uVar12;
        TStack_2c8.UnvisitedBitMask = TStack_2c8.UnvisitedBitMask & ~TStack_2c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c8);
        iVar24 = TStack_2c8.CurrentBitIndex;
      } while (TStack_2c8.CurrentBitIndex < (TStack_2c8.Array)->NumBits);
    }
  }
  local_70 = 0;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b8);
  return;
}

// GetStatPacketArray @ 141a03fb0

FStatPacketArray * __thiscall
FStatsThreadState::GetStatPacketArray(FStatsThreadState *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FStatPacketArray *pFVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  
  bVar2 = IsFrameValid(this,param_1);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsFrameValid( TargetFrame )",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Stats\\StatsData.h"
                         ,0x293,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FStatPacketArray *)(*pcVar1)();
    return pFVar4;
  }
  if (*(int *)&(this->History).field_0x8 != *(int *)&(this->History).field_0x34) {
    puVar5 = *(undefined1 **)&(this->History).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->History).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->History).field_0x48 - 1U &
                              (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&this->History);
        if (*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (FStatPacketArray *)(plVar6 + 1);
          }
          break;
        }
        iVar3 = (int)plVar6[3];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FStatPacketArray *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FStatPacketArray *)(*pcVar1)();
  return pFVar4;
}

// GetStatThreadName @ 141a040b0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall FStatsThreadState::GetStatThreadName(FStatsThreadState *this,FStatPacket *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName *pFVar5;
  FName *pFVar6;
  FStartupMessages *this_00;
  FName FVar7;
  ForAnyElementType FVar8;
  longlong in_R8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStackX_24;
  FName local_30;
  FString local_28;
  
  param_1->Frame = 0;
  iVar1 = *(int *)(in_R8 + 0xc);
  if (iVar1 == 1) {
    FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
    uStackX_24 = 0;
    local_res20 = *(uint *)CONCAT44(extraout_var,FVar4.Value);
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_res20;
  }
  else if (iVar1 == 2) {
    FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar4.Value);
  }
  else if (iVar1 == 3) {
    FVar7 = NAME_EndOfPipe;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) &&
       (_Init_thread_header(&::_TSS0), FVar7 = NAME_EndOfPipe, ::_TSS0 == -1)) {
      ::FName::FName(&NAME_EndOfPipe,L"EndOfPipe");
      _Init_thread_footer(&::_TSS0);
      FVar7 = NAME_EndOfPipe;
    }
  }
  else {
    if (iVar1 != 4) goto LAB_141a04244;
    pFVar5 = TMapBase<unsigned_int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>_>
             ::FindOrAddImpl<unsigned_int_const_&>
                       ((TMapBase<unsigned_int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>_>
                         *)&this->Threads,*(uint *)(in_R8 + 8),(uint *)(in_R8 + 8));
    if (*pFVar5 == (FName)0x0) {
      if (3 < (byte)LogStats._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&NAME_UnknownThread,L"UnknownThread");
        _Init_thread_footer(&::_TSS1);
      }
      ::FString::PrintfImpl(&local_28,L"%s%x_0");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar8.Data = local_28.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_30,(wchar_t *)FVar8.Data);
      *pFVar5 = *pFVar6;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      this_00 = FStartupMessages::Get();
      FStartupMessages::AddThreadMetadata(this_00,NAME_UnknownThread,*(uint *)(in_R8 + 8));
    }
    FVar7 = *pFVar5;
  }
  param_1->Frame = (long64)FVar7;
LAB_141a04244:
  if ((param_1->Frame == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThreadName != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                         ,0x6a9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar7 = (FName)(*pcVar2)();
    return FVar7;
  }
  return (FName)param_1;
}

// IsFrameValid @ 141a076c0

bool __thiscall FStatsThreadState::IsFrameValid(FStatsThreadState *this,long64 param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->GoodFrames).Elements.field_0x8 !=
      *(int *)&(this->GoodFrames).Elements.field_0x34) {
    FVar3 = (this->GoodFrames).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->GoodFrames).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)
                    ((this->GoodFrames).HashSize - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->GoodFrames).Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) goto LAB_141a0772a;
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_141a0772a:
  return iVar2 != -1;
}

// ProcessMetaDataOnly @ 141a10f50

void __thiscall
FStatsThreadState::ProcessMetaDataOnly
          (FStatsThreadState *this,TArray<FStatMessage,TSizedDefaultAllocator<64>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  FStatMessage *pFVar6;
  longlong lVar7;
  
  lVar7 = param_1->ArrayNum;
  lVar4 = 0;
  if (0 < lVar7) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if (lVar4 < lVar7) {
        uVar3 = (uint)((ulonglong)lVar4 >> 0x3f) ^ 1;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar6 = (FStatMessage *)((param_1->AllocatorInstance).Data + lVar5);
      if ((((pFVar6->NameAndInfo).Number & 0xf000U) != 0x1000) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Op == EStatOperation::SetLongName",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                             ,0x340,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FindOrAddMetaData(this,pFVar6);
      lVar7 = param_1->ArrayNum;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar4 < lVar7);
  }
  return;
}

// ProcessNonFrameStats @ 141a11050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStatsThreadState::ProcessNonFrameStats
          (FStatsThreadState *this,
          TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_> *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2)

{
  double dVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<FName,FStatMessage> *pTVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  int iVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  FName local_res10;
  FName local_res20;
  undefined4 local_68;
  uint local_64;
  FName local_60;
  FString local_58;
  FString local_48;
  
  uVar16 = 0;
  if (param_1->NumElements != 0) {
    uVar15 = (ulonglong)(uint)param_1->NumElements;
    pFVar13 = (param_1->Chunks).Array.AllocatorInstance.Data;
    do {
      lVar2 = *(longlong *)pFVar13;
      lVar9 = (ulonglong)uVar16 * 0x10;
      if (((*(uint *)(lVar9 + 0xc + lVar2) & 0x10000) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Item.NameAndInfo.GetFlag(EStatMetaFlags::DummyAlwaysOne)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                             ,0x34f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = *(uint *)(lVar9 + 0xc + lVar2) & 0xf000;
      if ((uVar7 == 0x1000) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Op != EStatOperation::SetLongName",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                             ,0x351,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = *(uint *)(lVar9 + 0xc + lVar2);
      if ((uVar8 >> 0x15 & 1) == 0) {
        if (((((uVar7 == 0x5000) || (uVar7 == 0x6000)) || (uVar7 == 0xc000)) ||
            ((uVar7 == 0xd000 || (uVar7 == 0xe000)))) ||
           ((uVar7 == 0x2000 || ((uVar7 == 0x3000 || (uVar7 == 0x4000)))))) {
          local_60.ComparisonIndex.Value = *(uint *)(lVar9 + 8 + lVar2);
          local_60.Number = uVar8 & 0x1ff;
          ::FName::ToString(&local_60,&local_48);
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStats);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        else if (uVar7 != 0x7000) {
          pTVar5 = TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                           *)&this->NotClearedEveryFrame,
                          (FName)(CONCAT44(uVar8,*(undefined4 *)(lVar9 + 8 + lVar2)) & 0x1ffffffffff
                                 ));
          pdVar10 = (double *)&pTVar5->field_0x8;
          if (pTVar5 == (TTuple<FName,FStatMessage> *)0x0) {
            pdVar10 = (double *)0x0;
          }
          if (pdVar10 == (double *)0x0) {
            if (1 < (byte)LogStats._0_1_) {
              local_res20.ComparisonIndex.Value = *(uint *)(lVar9 + 8 + lVar2);
              local_res20.Number = *(uint *)(lVar9 + 0xc + lVar2) & 0x1ff;
              ::FName::ToString(&local_res20,&local_58);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            if (param_2 != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) {
              local_68 = *(undefined4 *)(lVar9 + 8 + lVar2);
              local_64 = *(uint *)(lVar9 + 0xc + lVar2) & 0x1ff;
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                        (param_2,&local_res10,(bool *)&local_68);
            }
            if ((((ulonglong)pdVar10[1] & 0x1ffffffffff) !=
                 (CONCAT44(*(undefined4 *)(lVar9 + 0xc + lVar2),*(undefined4 *)(lVar9 + 8 + lVar2))
                 & 0x1ffffffffff)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bAllowNameMismatch || Dest.NameAndInfo.GetRawName() == Item.NameAndInfo.GetRawName()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                   ,1999,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar7 = *(uint *)(lVar9 + 0xc + lVar2);
            uVar8 = (int)uVar7 >> 0xc & 0xf;
            if ((((uVar7 ^ *(uint *)((longlong)pdVar10 + 0xc)) & 0xe00) != 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Dest.NameAndInfo.GetField<EStatDataType>() == Item.NameAndInfo.GetField<EStatDataType>()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                   ,0x7d5,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (((((byte)(*(uint *)(lVar9 + 0xc + lVar2) >> 0x14) ^
                  (byte)(*(uint *)((longlong)pdVar10 + 0xc) >> 0x14)) & 1) != 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Dest.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration) == Item.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                   ,0x7d6,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar7 = *(int *)(lVar9 + 0xc + lVar2) >> 9 & 7;
            if (uVar7 == 2) {
              if (uVar8 == 8) {
LAB_141a114e5:
                dVar6 = *(double *)(lVar9 + lVar2);
              }
              else {
                if (uVar8 != 9) {
                  if (uVar8 == 10) {
                    *pdVar10 = (double)((longlong)*pdVar10 + *(longlong *)(lVar9 + lVar2));
                  }
                  else if (uVar8 == 0xb) {
                    if ((*(uint *)((longlong)pdVar10 + 0xc) & 0x100000) == 0) {
                      *pdVar10 = (double)((longlong)*pdVar10 - *(longlong *)(lVar9 + lVar2));
                    }
                    else {
                      *pdVar10 = (double)(((longlong)*pdVar10 >> 0x20) << 0x20 |
                                         (ulonglong)
                                         (uint)(SUB84(*pdVar10,0) - *(int *)(lVar9 + lVar2)));
                    }
                  }
                  else if (uVar8 == 0xf) {
                    dVar6 = *(double *)(lVar9 + lVar2);
                    if ((*(uint *)((longlong)pdVar10 + 0xc) & 0x100000) == 0) {
                      if ((longlong)dVar6 < (longlong)*pdVar10) {
                        dVar6 = *pdVar10;
                      }
                      *pdVar10 = dVar6;
                    }
                    else {
                      dVar1 = dVar6;
                      if ((uint)((ulonglong)dVar6 >> 0x20) < (uint)((ulonglong)*pdVar10 >> 0x20)) {
                        dVar1 = *pdVar10;
                      }
                      uVar12 = (ulonglong)dVar6 & 0xffffffff;
                      if (SUB84(dVar6,0) < *(uint *)pdVar10) {
                        uVar12 = (ulonglong)*(uint *)pdVar10;
                      }
                      *pdVar10 = (double)(((longlong)dVar1 >> 0x20) << 0x20 | uVar12);
                    }
                  }
                  else {
                    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                       ,0x7f6,L"");
                    if (bVar4) goto code_r0x000141a11465;
                  }
                  goto LAB_141a114ec;
                }
LAB_141a11414:
                dVar6 = 0.0;
              }
              *pdVar10 = dVar6;
            }
            else if (uVar7 == 3) {
              if (uVar8 == 8) goto LAB_141a114e5;
              if (uVar8 == 9) goto LAB_141a11414;
              if (uVar8 == 10) {
                *pdVar10 = *(double *)(lVar9 + lVar2) + *pdVar10;
              }
              else if (uVar8 == 0xb) {
                *pdVar10 = *pdVar10 - *(double *)(lVar9 + lVar2);
              }
              else {
                if (uVar8 != 0xf) {
                  iVar11 = 0x80d;
                  goto LAB_141a113b7;
                }
                dVar6 = *(double *)(lVar9 + lVar2);
                uVar17 = SUB84(dVar6,0);
                uVar18 = (undefined4)((ulonglong)dVar6 >> 0x20);
                dVar1 = *pdVar10;
                if (dVar6 <= dVar1) {
                  uVar17 = SUB84(dVar1,0);
                  uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
                }
                *pdVar10 = (double)CONCAT44(uVar18,uVar17);
              }
            }
            else if (uVar7 != 5) {
              iVar11 = 0x816;
LAB_141a113b7:
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                 ,iVar11,L"");
              if (bVar4) {
code_r0x000141a11465:
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
LAB_141a114ec:
            dVar6 = pdVar10[1];
            *(double *)(lVar9 + lVar2) = *pdVar10;
            ((double *)(lVar9 + lVar2))[1] = dVar6;
            if (((*(uint *)(lVar9 + 0xc + lVar2) & 0xf000) != 0x8000) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Item.NameAndInfo.GetField<EStatOperation>() == EStatOperation::Set"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                   ,0x379,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
      }
      uVar7 = uVar16 + 1;
      pFVar14 = pFVar13 + 8;
      uVar16 = 0;
      if (uVar7 < 0x1000) {
        pFVar14 = pFVar13;
        uVar16 = uVar7;
      }
      uVar15 = uVar15 - 1;
      pFVar13 = pFVar14;
    } while (uVar15 != 0);
  }
  return;
}

// ProcessRawStats @ 141a115a0

void __thiscall
FStatsThreadState::ProcessRawStats(FStatsThreadState *this,FStatPacketArray *param_1)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy> *pTVar2;
  int *piVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FStatPacketArray *pFVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  FStatPacketArray *pFVar17;
  uint uVar18;
  undefined1 local_res18 [8];
  FStatPacketArray *local_res20;
  undefined8 local_58 [3];
  
  pTVar2 = &this->NewRawStatPacket;
  if ((pTVar2 == (TMulticastDelegate<void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
                  *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pTVar2);
  iVar12 = *(int *)&(this->NewRawStatPacket).field_0x30;
  plVar14 = *(longlong **)&(this->NewRawStatPacket).field_0x28;
  plVar15 = plVar14 + (longlong)iVar12 * 2;
  while( true ) {
    if (*(int *)&(this->NewRawStatPacket).field_0x30 != iVar12) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (plVar14 == plVar15) {
      if (pTVar2 != (TMulticastDelegate<void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
                     *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)pTVar2);
      }
      iVar12 = (param_1->Packets).ArrayNum;
      uVar18 = 0;
      if (0 < iVar12) {
        pFVar17 = &this->StartupRawStats;
        lVar16 = 0;
        do {
          uVar13 = 0;
          if ((int)uVar18 < iVar12) {
            uVar13 = ~uVar18 >> 0x1f;
          }
          if ((uVar13 == 0) &&
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
          local_58[0] = *(undefined8 *)((param_1->Packets).AllocatorInstance.Data + lVar16);
          pFVar5 = (pFVar17->Packets).AllocatorInstance.Data;
          if (((pFVar5 <= (FScriptContainerElement *)local_58) &&
              ((FScriptContainerElement *)local_58 <
               pFVar5 + (longlong)(this->StartupRawStats).Packets.ArrayMax * 8)) &&
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
          iVar12 = (this->StartupRawStats).Packets.ArrayNum;
          if (iVar12 == (this->StartupRawStats).Packets.ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)pFVar17,
                                &(this->StartupRawStats).Packets.ArrayMax);
          }
          uVar18 = uVar18 + 1;
          (this->StartupRawStats).Packets.ArrayNum = iVar12 + 1;
          lVar16 = lVar16 + 8;
          *(undefined8 *)((pFVar17->Packets).AllocatorInstance.Data + (longlong)iVar12 * 8) =
               local_58[0];
          iVar12 = (param_1->Packets).ArrayNum;
        } while ((int)uVar18 < iVar12);
      }
      piVar3 = &(param_1->Packets).ArrayMax;
      (param_1->Packets).ArrayNum = 0;
      if (*piVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)param_1,0,piVar3);
      }
      return;
    }
    if (((int)plVar14[1] != 0) && (*plVar14 != 0)) break;
    plVar14 = plVar14 + 2;
  }
  if (pTVar2 != (TMulticastDelegate<void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
                 *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)pTVar2);
  }
  uVar18 = 0;
  pFVar17 = &this->StartupRawStats;
  pFVar7 = pFVar17;
  if (0 < (this->StartupRawStats).Packets.ArrayNum) {
    do {
      local_res20 = pFVar7;
      uVar13 = 0;
      if ((int)uVar18 < (pFVar17->Packets).ArrayNum) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pTVar2 == (TMulticastDelegate<void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
                      *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pTVar2);
      puVar1 = &(this->NewRawStatPacket).field_0x3c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar8 = false;
      uVar13 = *(int *)&(this->NewRawStatPacket).field_0x30 - 1;
      if (-1 < (int)uVar13) {
        lVar16 = (longlong)(int)uVar13 << 4;
        bVar8 = false;
        do {
          uVar11 = 0;
          if ((int)uVar13 < *(int *)&(this->NewRawStatPacket).field_0x30) {
            uVar11 = ~uVar13 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar4 = *(longlong *)&(this->NewRawStatPacket).field_0x28;
          if (((*(int *)(lVar16 + 8 + lVar4) == 0) ||
              (plVar14 = *(longlong **)(lVar16 + lVar4), plVar14 == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(*plVar14 + 0x68))(), cVar10 == '\0')) {
            bVar8 = true;
          }
          lVar16 = lVar16 + -0x10;
          uVar13 = uVar13 - 1;
          pFVar17 = local_res20;
        } while (-1 < (int)uVar13);
      }
      puVar1 = &(this->NewRawStatPacket).field_0x3c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar8) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)pTVar2,false);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)pTVar2);
      uVar18 = uVar18 + 1;
      pFVar7 = local_res20;
    } while ((int)uVar18 < (this->StartupRawStats).Packets.ArrayNum);
  }
  FStatPacketArray::Empty(pFVar17);
  iVar12 = (param_1->Packets).ArrayNum;
  uVar18 = 0;
  if (0 < iVar12) {
    pTVar2 = &this->NewRawStatPacket;
    do {
      uVar13 = 0;
      if ((int)uVar18 < iVar12) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pTVar2 == (TMulticastDelegate<void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
                      *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pTVar2);
      puVar1 = &(this->NewRawStatPacket).field_0x3c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar8 = false;
      uVar13 = *(int *)&(this->NewRawStatPacket).field_0x30 - 1;
      if (-1 < (int)uVar13) {
        lVar16 = (longlong)(int)uVar13 << 4;
        bVar8 = false;
        do {
          uVar11 = 0;
          if ((int)uVar13 < *(int *)&(this->NewRawStatPacket).field_0x30) {
            uVar11 = ~uVar13 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar4 = *(longlong *)&(this->NewRawStatPacket).field_0x28;
          if (((*(int *)(lVar4 + 8 + lVar16) == 0) ||
              (plVar14 = *(longlong **)(lVar4 + lVar16), plVar14 == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(*plVar14 + 0x68))(), cVar10 == '\0')) {
            bVar8 = true;
          }
          lVar16 = lVar16 + -0x10;
          uVar13 = uVar13 - 1;
        } while (-1 < (int)uVar13);
      }
      puVar1 = &(this->NewRawStatPacket).field_0x3c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar8) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)pTVar2,false);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)pTVar2);
      uVar18 = uVar18 + 1;
      iVar12 = (param_1->Packets).ArrayNum;
    } while ((int)uVar18 < iVar12);
  }
  FStatPacketArray::Empty(param_1);
  return;
}

// ResetRawStats @ 141a1a8e0

void __thiscall FStatsThreadState::ResetRawStats(FStatsThreadState *this)

{
  FStatPacketArray::Empty(&this->StartupRawStats);
  return;
}

// ResetRegularStats @ 141a1a900

void __thiscall FStatsThreadState::ResetRegularStats(FStatsThreadState *this)

{
  undefined1 *puVar1;
  TMap<__int64,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>_>
  *this_00;
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *this_01;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->History;
  this->LastFullFrameMetaAndNonFrame = -1;
  this->LastFullFrameProcessed = -1;
  bVar3 = 1 < *(int *)&(this->History).field_0x48;
  if (!bVar3) {
    TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<__int64,FStatPacketArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->History).field_0x8);
  puVar1 = &(this->History).field_0xc;
  *(undefined4 *)&(this->History).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->History).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->History).field_0x34 = 0;
  iVar2 = *(int *)&(this->History).field_0x2c;
  *(undefined4 *)&(this->History).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->History).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->History).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->History).field_0x48 = 1;
    TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
              *)this_00);
  }
  bVar3 = 1 < *(int *)&(this->CondensedStackHistory).field_0x48;
  if (!bVar3) {
    TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
                      *)&this->CondensedStackHistory);
  }
  puVar1 = &(this->CondensedStackHistory).field_0xc;
  *(undefined4 *)&(this->CondensedStackHistory).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->CondensedStackHistory,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CondensedStackHistory).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CondensedStackHistory).field_0x34 = 0;
  iVar2 = *(int *)&(this->CondensedStackHistory).field_0x2c;
  *(undefined4 *)&(this->CondensedStackHistory).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CondensedStackHistory).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CondensedStackHistory).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->CondensedStackHistory).field_0x48 = 1;
    TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<__int64,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
              *)&this->CondensedStackHistory);
  }
  bVar3 = 1 < (this->GoodFrames).HashSize;
  if (!bVar3) {
    TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::UnhashElements(&this->GoodFrames)
    ;
  }
  puVar1 = &(this->GoodFrames).Elements.field_0xc;
  *(undefined4 *)&(this->GoodFrames).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&this->GoodFrames,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->GoodFrames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GoodFrames).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->GoodFrames).Elements.field_0x2c;
  *(undefined4 *)&(this->GoodFrames).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->GoodFrames).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->GoodFrames).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->GoodFrames).HashSize = 1;
    TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Rehash(&this->GoodFrames);
  }
  this_01 = &this->BadFrames;
  bVar3 = 1 < (this->BadFrames).HashSize;
  if (!bVar3) {
    TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::UnhashElements(this_01);
  }
  puVar1 = &(this->BadFrames).Elements.field_0xc;
  *(undefined4 *)&(this->BadFrames).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->BadFrames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BadFrames).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->BadFrames).Elements.field_0x2c;
  *(undefined4 *)&(this->BadFrames).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->BadFrames).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->BadFrames).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->BadFrames).HashSize = 1;
    TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Rehash(this_01);
  }
  return;
}

// ScanForAdvance @ 141a1c5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStatsThreadState::ScanForAdvance(FStatsThreadState *this,FStatPacketArray *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  long64 *plVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  long64 lVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_StatFramePackets> FVar11;
  FThreadStats *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_StatFrameMessages> FVar13;
  uchar auVar14 [8];
  FNameEntryId FVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint local_res18;
  uint uStackX_1c;
  FName local_res20;
  FName local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_50;
  FStatMessage local_40;
  
  if (!FThreadStats::bPrimaryDisableForever) {
    iVar2 = (param_1->Packets).ArrayNum;
    pFVar16 = (param_1->Packets).AllocatorInstance.Data;
    uVar17 = 0;
    pFVar1 = pFVar16 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->Packets).ArrayNum != iVar2) {
        local_res18 = local_res18 & 0xffffff00;
        `TCheckedPointerIterator<FStatPacket_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res18);
      }
      if (pFVar16 == pFVar1) break;
      plVar4 = *(long64 **)pFVar16;
      iVar3 = *(int *)((longlong)plVar4 + 0xc);
      if (iVar3 == 1) {
        lVar9 = this->CurrentGameFrame;
LAB_141a1c66d:
        *plVar4 = lVar9;
      }
      else {
        if (iVar3 == 2) {
          lVar9 = this->CurrentRenderFrame;
          goto LAB_141a1c66d;
        }
        if (iVar3 == 3) {
          lVar9 = this->CurrentEndOfPipeFrame;
          goto LAB_141a1c66d;
        }
        if ((iVar3 != 4) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                               ,0x32f,L"Unknown thread type"), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      ScanForAdvance(this,(TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_> *)
                          (plVar4 + 3));
      uVar17 = uVar17 + (int)plVar4[5];
      pFVar16 = pFVar16 + 8;
    }
    auVar14 = (uchar  [8])(longlong)(param_1->Packets).ArrayNum;
    if ((auVar14 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar11 = StatPtr_STAT_StatFramePackets;
      if (StatPtr_STAT_StatFramePackets == (FThreadSafeStaticStat<FStat_STAT_StatFramePackets>)0x0)
      {
        pFVar10 = ::FName::FName(&local_60,"STAT_StatFramePackets");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_StatFramePackets>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StatFramePackets,*pFVar10,
                            L"Total Frame Packets","STATGROUP_StatSystem","STATCAT_Advanced",
                            L"Stat System",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar5 = *(FName *)FVar11;
      FVar15 = FVar5.ComparisonIndex.Value;
      uVar8 = FVar5.Number;
      local_res18 = FVar15.Value;
      uStackX_1c = uVar8;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar12 = FThreadStats::GetThreadStats();
        local_50.NameAndInfo.Number = uVar8 & 0xffffafff | 0xa000;
        local_res20 = FVar5;
        local_50.StatData.Pad = auVar14;
        local_50.NameAndInfo.Index.Value = FVar15.Value;
        FThreadStats::AddStatMessage(pFVar12,&local_50);
        FStatsTrace::Add(&local_res20,(long64)auVar14);
        if (pFVar12->ScopeCount == 0) {
          FThreadStats::Flush(pFVar12,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
    }
    auVar14[4] = '\0';
    auVar14[5] = '\0';
    auVar14[6] = '\0';
    auVar14[7] = '\0';
    auVar14[0] = (char)uVar17;
    auVar14[1] = (char)(uVar17 >> 8);
    auVar14[2] = (char)(uVar17 >> 0x10);
    auVar14[3] = (char)(uVar17 >> 0x18);
    if ((auVar14 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar13 = StatPtr_STAT_StatFrameMessages;
      if (StatPtr_STAT_StatFrameMessages == (FThreadSafeStaticStat<FStat_STAT_StatFrameMessages>)0x0
         ) {
        pFVar10 = ::FName::FName(&local_58,"STAT_StatFrameMessages");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_StatFrameMessages>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StatFrameMessages,*pFVar10,
                            L"Frame Messages","STATGROUP_StatSystem","STATCAT_Advanced",
                            L"Stat System",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar5 = *(FName *)FVar13;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        local_res18 = FVar5.ComparisonIndex.Value.Value;
        uStackX_1c = FVar5.Number;
        pFVar12 = FThreadStats::GetThreadStats();
        local_40.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
        local_68 = FVar5;
        local_40.StatData.Pad = auVar14;
        local_40.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar12,&local_40);
        FStatsTrace::Add(&local_68,(long64)auVar14);
        if (pFVar12->ScopeCount == 0) {
          FThreadStats::Flush(pFVar12,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
    }
  }
  return;
}

// ScanForAdvance @ 141a1c950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStatsThreadState::ScanForAdvance
          (FStatsThreadState *this,
          TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  TConsoleVariableData<int> *pTVar10;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  long64 *plVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ForElementType<FSetElementId> FVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *pTVar24;
  uint *puVar25;
  ulonglong uVar26;
  FIdentityFunctor local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_1a8;
  uint uStack_1a4;
  FScriptContainerElement *local_1a0;
  ulonglong local_198;
  int local_190;
  int local_18c;
  int local_188;
  undefined1 local_184 [8];
  undefined8 local_17c;
  undefined1 local_174 [12];
  uint *local_168;
  undefined1 *local_160;
  undefined1 **local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  FName local_128;
  int local_120;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *local_118;
  int iStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  int local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  FSparseArrayAllocationInfo local_b8;
  FString local_a8 [2];
  undefined4 local_7c;
  
  pTVar10 = CVarSpewStatsSpam.Ref;
  bVar12 = IsInParallelGameThread();
  if ((bVar12) || (bVar12 = IsInGameThread(), bVar12)) {
    lVar16 = 0;
  }
  else {
    lVar16 = 4;
  }
  if (*(int *)((longlong)pTVar10->ShadowedValue + lVar16) != 0) {
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar16 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FStatsThreadState::ScanForAdvance'::__l5::_dynamic_atexit_destructor_for__Profile__);
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar16 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      LastFrame = GFrameCounter;
      _Init_thread_footer(&::_TSS1);
    }
    pFVar22 = (param_1->Chunks).Array.AllocatorInstance.Data;
    uVar20 = 0;
    if (param_1->NumElements != 0) {
      uVar26 = (ulonglong)(uint)param_1->NumElements;
      do {
        local_1a8 = *(uint *)(*(longlong *)pFVar22 + 8 + uVar20 * 0x10);
        uVar14 = *(uint *)(*(longlong *)pFVar22 + 0xc + uVar20 * 0x10);
        uStack_1a4 = uVar14 & 0x1ff;
        uVar13 = ::GetTypeHash((FNameEntryId)local_1a8);
        uVar13 = uVar13 + (uVar14 & 0x1ff);
        if (Profile._8_4_ != Profile._52_4_) {
          lVar16 = 0x154b83598;
          if (Profile._64_8_ != 0) {
            lVar16 = Profile._64_8_;
          }
          iVar23 = *(int *)(lVar16 + (ulonglong)(Profile._72_4_ - 1 & uVar13) * 4);
          if (iVar23 != -1) {
            do {
              lVar16 = Profile._0_8_ + (longlong)iVar23 * 0x14;
              if (*(longlong *)(Profile._0_8_ + (longlong)iVar23 * 0x14) ==
                  CONCAT44(uStack_1a4,local_1a8)) {
                if (lVar16 != 0) goto LAB_141a1caee;
                break;
              }
              iVar23 = *(int *)(lVar16 + 0xc);
            } while (iVar23 != -1);
          }
        }
        local_168 = &local_1a8;
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        EmplaceByHash<TKeyInitializer<FName_const_&>_>
                  ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)&Profile,(uint)&local_190,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar13,
                   (bool *)&local_168);
        lVar16 = Profile._0_8_ + (longlong)local_190 * 0x14;
LAB_141a1caee:
        *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
        uVar14 = (int)uVar20 + 1;
        if (0xfff < uVar14) {
          pFVar22 = pFVar22 + 8;
        }
        uVar20 = 0;
        if (uVar14 < 0x1000) {
          uVar20 = (ulonglong)uVar14;
        }
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    if (LastFrame + 300 < GFrameCounter) {
      local_160 = local_res18;
      local_158 = &local_160;
      LastFrame = GFrameCounter;
      if (0 < (int)(Profile._8_4_ - Profile._52_4_)) {
        TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Compact((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&Profile);
        uVar9 = Profile._0_8_;
        iVar23 = Profile._8_4_ - Profile._52_4_;
        if ((iVar23 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        AlgoImpl::
        IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::FValueComparisonClass<TGreater<void>_>_>_>_>
                  ((TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *)uVar9,iVar23,
                   local_res10[0],
                   (FElementCompareClass<TSortableMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::FValueComparisonClass<TGreater<void>_>_>
                    *)&local_158);
      }
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Rehash
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&Profile);
      if (4 < (byte)LogStats._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
      }
      iStack_110 = 0;
      local_f8 = 0;
      uStack_10c = 1;
      uVar14 = Profile._40_4_;
      uStack_fc = 0;
      if (uVar14 != 0) {
        puVar25 = (uint *)&Profile.field_0x10;
        if (Profile._32_8_ != 0) {
          puVar25 = (uint *)Profile._32_8_;
        }
        uVar13 = *puVar25;
        while (uVar13 == 0) {
          lVar16 = (longlong)iStack_110;
          local_f8 = local_f8 + 0x20;
          iStack_110 = iStack_110 + 1;
          uStack_fc = uVar14;
          if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_110)
          goto LAB_141a1cc71;
          uVar13 = puVar25[lVar16 + 1];
        }
        uStack_10c = -uVar13 & uVar13;
        uVar20 = (ulonglong)uStack_10c * 2 + 1;
        lVar16 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_18c = (int)lVar16;
        uStack_fc = local_f8 + -1 + local_18c;
        if ((int)uVar14 < (int)uStack_fc) {
          uStack_fc = uVar14;
        }
      }
LAB_141a1cc71:
      bVar6 = Profile._40_1_;
      uStack_f4 = local_7c;
      uVar13 = uVar14 & 0xffffffe0;
      iStack_f0 = Profile._8_4_ - Profile._52_4_;
      local_108 = 0x154b83570;
      uStack_100 = 0xffffffff;
      TStack_e0.CurrentBitIndex = uStack_fc;
      TStack_e0.UnvisitedBitMask = 0xffffffff;
      local_118 = &Profile;
      TStack_e0._padding_ = CONCAT44(uStack_10c,iStack_110);
      local_e8 = &Profile;
      iVar23 = (int)uVar14 >> 5;
      TStack_e0._28_4_ = local_7c;
      TStack_e0.BaseBitIndex = local_f8;
      uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
      TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&Profile.field_0x10;
      uVar18 = uVar14;
      if ((int)uVar14 < 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L"");
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar18 = Profile._40_4_;
      }
      fVar8 = __real_3b5a740e;
      fVar7 = __real_42480000;
      if (uVar14 != uVar18) {
        lVar16 = 0x154b83570;
        if (Profile._32_8_ != 0) {
          lVar16 = Profile._32_8_;
        }
        uVar14 = -1 << (bVar6 & 0x1f) & *(uint *)(lVar16 + (longlong)iVar23 * 4);
        while (uVar14 == 0) {
          lVar19 = (longlong)iVar23;
          uVar13 = uVar13 + 0x20;
          iVar23 = iVar23 + 1;
          uVar14 = uVar18;
          if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
          goto LAB_141a1cda0;
          uVar14 = *(uint *)(lVar16 + 4 + lVar19 * 4);
        }
        uVar20 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_188 = (int)lVar16;
        uVar14 = local_188 + -1 + uVar13;
        if ((int)uVar18 < (int)uVar14) {
          uVar14 = uVar18;
        }
      }
LAB_141a1cda0:
      do {
        pTVar11 = local_e8;
        if (*(int *)&local_e8->field_0x8 - *(int *)&local_e8->field_0x34 != (int)uStack_c0) {
          local_res10[0] = (FIdentityFunctor)0x0;
          `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_e0.CurrentBitIndex == uVar14) &&
            (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)&Profile.field_0x10)) &&
           (pTVar11 == &Profile)) goto LAB_141a1ce7a;
        lVar16 = *(longlong *)pTVar11;
        local_128 = *(FName *)(lVar16 + (longlong)TStack_e0.CurrentBitIndex * 0x14);
        local_120 = *(int *)(lVar16 + 8 + (longlong)TStack_e0.CurrentBitIndex * 0x14);
        if ((float)local_120 * fVar8 < fVar7) goto LAB_141a1ce7a;
        if (4 < (byte)LogStats._0_1_) {
          ::FName::ToString(&local_128,local_a8);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
          if (local_a8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8[0].Data.AllocatorInstance.Data);
          }
        }
        TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
      } while( true );
    }
  }
LAB_141a1cea2:
  pFVar22 = (param_1->Chunks).Array.AllocatorInstance.Data;
  local_res20 = 0;
  local_1a0 = pFVar22;
  uVar20 = (ulonglong)(uint)param_1->NumElements;
  if (param_1->NumElements != 0) {
    do {
      local_198 = uVar20;
      uVar14 = local_res20;
      lVar16 = *(longlong *)pFVar22;
      uVar20 = (ulonglong)local_res20;
      uVar13 = *(uint *)(lVar16 + 0xc + uVar20 * 0x10);
      uVar18 = uVar13 & 0xf000;
      if (uVar18 == 0x2000) {
        if (((uVar13 & 0xe00) != 0x400) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Item.NameAndInfo.GetField<EStatDataType>() == EStatDataType::ST_int64"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                ,0x2ca,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar16 = *(longlong *)(lVar16 + uVar20 * 0x10);
        if (lVar16 < 0) {
          lVar16 = -lVar16;
          local_150 = lVar16 + -1;
          TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Emplace<__int64>
                    (&this->BadFrames,(long64 *)local_184,(bool *)&local_150);
        }
        plVar17 = &this->CurrentGameFrame;
        if (3 < this->CurrentGameFrame) {
          lVar19 = this->CurrentGameFrame + 1;
          plVar17 = &this->CurrentGameFrame;
          if (lVar19 != lVar16) {
            if ((lVar16 <= lVar19) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CurrentGameFrame + 1 < NewGameFrame",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                    ,0x2d5,L""), bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            plVar17 = &this->CurrentGameFrame;
            lVar19 = this->CurrentGameFrame + 1;
            if (lVar19 <= lVar16) {
              do {
                local_148 = lVar19 + -1;
                TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Emplace<__int64>
                          (&this->BadFrames,(long64 *)(local_184 + 4),(bool *)&local_148);
                lVar19 = lVar19 + 1;
              } while (lVar19 <= lVar16);
              plVar17 = &this->CurrentGameFrame;
            }
          }
        }
LAB_141a1d3bf:
        *plVar17 = lVar16;
        pFVar22 = local_1a0;
      }
      else if (uVar18 == 0x3000) {
        if (((uVar13 & 0xe00) != 0x400) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Item.NameAndInfo.GetField<EStatDataType>() == EStatDataType::ST_int64"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                ,0x2df,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar16 = *(longlong *)(lVar16 + uVar20 * 0x10);
        if (lVar16 < 0) {
          lVar16 = -lVar16;
          local_140 = lVar16 + -1;
          TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Emplace<__int64>
                    (&this->BadFrames,&local_17c,(bool *)&local_140);
        }
        plVar17 = &this->CurrentRenderFrame;
        if ((3 < *plVar17) && (lVar19 = *plVar17 + 1, lVar19 != lVar16)) {
          if ((lVar16 <= lVar19) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentRenderFrame + 1 < NewRenderFrame",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                  ,0x2eb,L""), bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar19 = *plVar17 + 1;
          if (lVar19 <= lVar16) {
            pTVar24 = &this->BadFrames;
            do {
              iVar23 = *(int *)&(this->BadFrames).Elements.field_0x34;
              if (iVar23 == 0) {
                iVar15 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x10,8,1,(ForAnyElementType *)pTVar24,
                                    (int *)&(this->BadFrames).Elements.field_0x8,
                                    (int *)&(this->BadFrames).Elements.field_0xc);
                TBitArray<FDefaultBitArrayAllocator>::Add
                          ((TBitArray<FDefaultBitArrayAllocator> *)
                           &(this->BadFrames).Elements.field_0x10,false);
              }
              else {
                iVar15 = *(int *)&(this->BadFrames).Elements.field_0x30;
                lVar2 = *(longlong *)&pTVar24->Elements;
                iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar15 * 0x10);
                iVar23 = iVar23 + -1;
                *(int *)&(this->BadFrames).Elements.field_0x30 = iVar1;
                *(int *)&(this->BadFrames).Elements.field_0x34 = iVar23;
                if (iVar23 != 0) {
                  *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
                }
              }
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)pTVar24,&local_b8,iVar15);
              if (local_b8.Pointer != (longlong *)0x0) {
                *(undefined4 *)((longlong)local_b8.Pointer + 8) = 0xffffffff;
                *(longlong *)local_b8.Pointer = lVar19 + -1;
              }
              lVar2 = *(longlong *)local_b8.Pointer;
              iVar23 = *(int *)&(this->BadFrames).Elements.field_0x8;
              iVar15 = *(int *)&(this->BadFrames).Elements.field_0x34;
              uVar14 = (int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2;
              if ((iVar23 - iVar15 != 1) && (iVar23 != iVar15)) {
                FVar3 = (this->BadFrames).Hash.SecondaryData;
                FVar21 = (ForElementType<FSetElementId>)&(this->BadFrames).Hash;
                if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                  FVar21 = FVar3;
                }
                iVar23 = *(int *)((longlong)FVar21 +
                                 (ulonglong)((this->BadFrames).HashSize - 1U & uVar14) * 4);
                if (iVar23 != -1) {
                  lVar4 = *(longlong *)&pTVar24->Elements;
                  do {
                    if (*(longlong *)(lVar4 + (longlong)iVar23 * 0x10) == lVar2) {
                      if (iVar23 != -1) {
                        *(longlong *)(lVar4 + (longlong)iVar23 * 0x10) =
                             *(longlong *)local_b8.Pointer;
                        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ::RemoveAtUninitialized
                                  ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                    *)pTVar24,local_b8.Index,1);
                        goto LAB_141a1d289;
                      }
                      break;
                    }
                    iVar23 = *(int *)(lVar4 + 8 + (longlong)iVar23 * 0x10);
                  } while (iVar23 != -1);
                }
              }
              uVar13 = *(int *)&(this->BadFrames).Elements.field_0x8 -
                       *(int *)&(this->BadFrames).Elements.field_0x34;
              if (uVar13 < 4) {
                iVar23 = 1;
              }
              else {
                uVar20 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
                lVar2 = 0x3f;
                if (uVar20 != 0) {
                  for (; uVar20 >> lVar2 == 0; lVar2 = lVar2 + -1) {
                  }
                }
                local_17c._4_4_ = (undefined4)lVar2;
                iVar23 = 1 << ((byte)lVar2 & 0x1f);
              }
              if (((int)uVar13 < 1) || (iVar23 <= (this->BadFrames).HashSize)) {
                uVar14 = (this->BadFrames).HashSize - 1U & uVar14;
                *(uint *)((longlong)local_b8.Pointer + 0xc) = uVar14;
                FVar3 = (this->BadFrames).Hash.SecondaryData;
                FVar21 = (ForElementType<FSetElementId>)&(this->BadFrames).Hash;
                if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                  FVar21 = FVar3;
                }
                uVar20 = (longlong)(this->BadFrames).HashSize - 1U & (longlong)(int)uVar14;
                *(undefined4 *)((longlong)local_b8.Pointer + 8) =
                     *(undefined4 *)((longlong)FVar21 + uVar20 * 4);
                *(int *)((longlong)FVar21 + uVar20 * 4) = local_b8.Index;
              }
              else {
                (this->BadFrames).HashSize = iVar23;
                TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Rehash(pTVar24);
              }
LAB_141a1d289:
              lVar19 = lVar19 + 1;
            } while (lVar19 <= lVar16);
            this->CurrentRenderFrame = lVar16;
            pFVar22 = local_1a0;
            uVar14 = local_res20;
            goto LAB_141a1d3cc;
          }
        }
        *plVar17 = lVar16;
        pFVar22 = local_1a0;
      }
      else if (uVar18 == 0x4000) {
        if (((uVar13 & 0xe00) != 0x400) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Item.NameAndInfo.GetField<EStatDataType>() == EStatDataType::ST_int64"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                ,0x2f5,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar16 = *(longlong *)(lVar16 + uVar20 * 0x10);
        if (lVar16 < 0) {
          lVar16 = -lVar16;
          local_138 = lVar16 + -1;
          TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Emplace<__int64>
                    (&this->BadFrames,(long64 *)local_174,(bool *)&local_138);
        }
        plVar17 = &this->CurrentEndOfPipeFrame;
        if (3 < this->CurrentEndOfPipeFrame) {
          lVar19 = this->CurrentEndOfPipeFrame + 1;
          plVar17 = &this->CurrentEndOfPipeFrame;
          if (lVar19 != lVar16) {
            if ((lVar16 <= lVar19) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CurrentEndOfPipeFrame + 1 < NewEndOfPipeFrame",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                    ,0x301,L""), bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            plVar17 = &this->CurrentEndOfPipeFrame;
            lVar19 = this->CurrentEndOfPipeFrame + 1;
            if (lVar19 <= lVar16) {
              do {
                local_130 = lVar19 + -1;
                TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Emplace<__int64>
                          (&this->BadFrames,(long64 *)(local_174 + 4),(bool *)&local_130);
                lVar19 = lVar19 + 1;
              } while (lVar19 <= lVar16);
              plVar17 = &this->CurrentEndOfPipeFrame;
            }
          }
        }
        goto LAB_141a1d3bf;
      }
LAB_141a1d3cc:
      uVar14 = uVar14 + 1;
      if (0xfff < uVar14) {
        pFVar22 = pFVar22 + 8;
        local_1a0 = pFVar22;
      }
      local_res20 = 0;
      if (uVar14 < 0x1000) {
        local_res20 = uVar14;
      }
      local_198 = local_198 - 1;
      uVar20 = local_198;
    } while (local_198 != 0);
  }
  if (FThreadStats::bIsRawStatsActive != false) {
    pTVar24 = &this->BadFrames;
    bVar12 = 1 < (this->BadFrames).HashSize;
    if (!bVar12) {
      TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::UnhashElements(pTVar24);
    }
    iVar23 = *(int *)&(this->BadFrames).Elements.field_0xc;
    *(undefined4 *)&(this->BadFrames).Elements.field_0x8 = 0;
    if (iVar23 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)pTVar24,0,
                 (int *)&(this->BadFrames).Elements.field_0xc);
    }
    *(undefined4 *)&(this->BadFrames).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->BadFrames).Elements.field_0x34 = 0;
    iVar23 = *(int *)&(this->BadFrames).Elements.field_0x2c;
    *(undefined4 *)&(this->BadFrames).Elements.field_0x28 = 0;
    if ((iVar23 < 0) || (0x80 < iVar23)) {
      *(undefined4 *)&(this->BadFrames).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->BadFrames).Elements.field_0x10,0);
    }
    if (bVar12) {
      (this->BadFrames).HashSize = 1;
      TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Rehash(pTVar24);
    }
  }
  return;
LAB_141a1ce7a:
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&Profile);
  goto LAB_141a1cea2;
}

// ToggleFindMemoryExtensiveStats @ 141a25650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStatsThreadState::ToggleFindMemoryExtensiveStats(FStatsThreadState *this)

{
  this->bFindMemoryExtensiveStats = this->bFindMemoryExtensiveStats == false;
  if (4 < (byte)LogStats._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
    return;
  }
  return;
}

// UncondenseStackStats @ 141a28880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStatsThreadState::UncondenseStackStats
          (FStatsThreadState *this,TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_1,
          FRawStatStackNode *param_2,IItemFilter *param_3,
          TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_4)

{
  FStatNameAndInfo *pFVar1;
  ulonglong uVar2;
  double *pdVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FStatNameAndInfo FVar6;
  undefined8 uVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  TTuple<FName,FRawStatStackNode_*> *pTVar12;
  TLockFreeFixedSizeAllocator<96,64,FNoopCounter> *this_00;
  atomic<void_*> aVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FStatMessage *pFVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  double *pdVar20;
  Type TVar21;
  undefined1 auStackY_1b8 [32];
  ForAnyElementType local_168;
  undefined8 local_160;
  double *local_158;
  uint local_150;
  uint uStack_14c;
  longlong local_148;
  TPairInitializer<FName_const_&,FRawStatStackNode_*_&&> local_140;
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *local_130;
  IItemFilter *local_128;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  longlong *local_f8;
  int iStack_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  uint *local_c8;
  FRawStatStackNode ***local_c0;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160 = 0;
  local_130 = param_1;
  local_128 = param_3;
  uVar10 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_168,(int *)((longlong)&local_160 + 4));
  local_160 = CONCAT44(local_160._4_4_,uVar10 + 1);
  *(FRawStatStackNode **)(local_168.Data + (longlong)(int)uVar10 * 8) = param_2;
  uVar19 = 0;
  if ((int)uVar10 < (int)(uVar10 + 1)) {
    uVar19 = ~uVar10 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar19 = 0;
  iVar11 = param_1->ArrayNum;
  pdVar20 = *(double **)(local_168.Data + (longlong)((int)local_160 + -1) * 8);
  if (0 < iVar11) {
    local_148 = 0;
    do {
      lVar14 = local_148;
      uVar10 = 0;
      if ((int)uVar19 < iVar11) {
        uVar10 = ~uVar19 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar16 = (FStatMessage *)((param_1->AllocatorInstance).Data + lVar14);
      if ((param_3 == (IItemFilter *)0x0) ||
         (cVar9 = (**(code **)((longlong)*param_3 + 8))(param_3,pFVar16), cVar9 != '\0')) {
        uVar10 = (pFVar16->NameAndInfo).Number;
        pFVar1 = &pFVar16->NameAndInfo;
        local_150 = (pFVar1->Index).Value;
        uStack_14c = uVar10 & 0x1ff;
        TVar21 = (int)uVar10 >> 0xc & Mask;
        if ((TVar21 == ChildrenStart) || (TVar21 - ChildrenEnd < 2)) {
          if ((FName)((ulonglong)*pFVar1 & 0x1ffffffffff) != FStatConstants::NAME_ThreadRoot) {
            if ((TVar21 - ChildrenStart & 0xfffffffd) == 0) {
              pTVar12 = TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                                *)(pdVar20 + 2),(FName)((ulonglong)*pFVar1 & 0x1ffffffffff));
              if (pTVar12 == (TTuple<FName,FRawStatStackNode_*> *)0x0) {
                local_158 = (double *)0x0;
LAB_141a28bfb:
                this_00 = GetRawStatStackNodeAllocator();
                uVar10 = FLockFreePointerListLIFORoot<64,1>::Pop
                                   ((FLockFreePointerListLIFORoot<64,1> *)this_00);
                aVar13 = (atomic<void_*>)0x0;
                if (uVar10 != 0) {
                  aVar13 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar10 >> 0xe][uVar10 & 0x3fff].
                           Payload;
                  FLockFreeLinkPolicy::FreeLockFreeLink(uVar10);
                }
                if ((aVar13 != (atomic<void_*>)0x0) ||
                   (aVar13 = (atomic<void_*>)FMemory::Malloc(0x60,8), aVar13 != (atomic<void_*>)0x0)
                   ) {
                  FVar6 = pFVar16->NameAndInfo;
                  *(undefined8 *)aVar13 = *(undefined8 *)(pFVar16->StatData).Pad;
                  *(FStatNameAndInfo *)((longlong)aVar13 + 8) = FVar6;
                  *(undefined8 *)((longlong)aVar13 + 0x10) = 0;
                  *(undefined8 *)((longlong)aVar13 + 0x18) = 0;
                  *(undefined8 *)((longlong)aVar13 + 0x30) = 0;
                  *(undefined4 *)((longlong)aVar13 + 0x38) = 0;
                  *(undefined4 *)((longlong)aVar13 + 0x3c) = 0x80;
                  *(undefined4 *)((longlong)aVar13 + 0x40) = 0xffffffff;
                  *(undefined4 *)((longlong)aVar13 + 0x44) = 0;
                  *(undefined8 *)((longlong)aVar13 + 0x50) = 0;
                  *(undefined4 *)((longlong)aVar13 + 0x58) = 0;
                }
                local_c8 = &local_150;
                local_c0 = &local_140.Value;
                local_140.Value = (FRawStatStackNode **)aVar13;
                TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FName_const_&,FRawStatStackNode_*_&&>_>
                          ((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                            *)(pdVar20 + 2),&local_140,(bool *)&local_c8);
                local_158 = *(double **)
                             ((longlong)pdVar20[2] + 8 + (longlong)(int)local_140.Key * 0x18);
                *(uint *)((longlong)local_158 + 0xc) =
                     *(uint *)((longlong)local_158 + 0xc) & 0xffff8fff;
                *(uint *)((longlong)local_158 + 0xc) = *(uint *)((longlong)local_158 + 0xc) | 0x8000
                ;
              }
              else {
                pdVar3 = *(double **)&pTVar12->field_0x8;
                local_158 = pdVar3;
                if (pdVar3 == (double *)0x0) goto LAB_141a28bfb;
                if ((((ulonglong)pdVar3[1] & 0x1ffffffffff) !=
                     ((ulonglong)pFVar16->NameAndInfo & 0x1ffffffffff)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("bAllowNameMismatch || Dest.NameAndInfo.GetRawName() == Item.NameAndInfo.GetRawName()"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                       ,1999,L""), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (((((pFVar16->NameAndInfo).Number ^ *(uint *)((longlong)pdVar3 + 0xc)) & 0xe00)
                     != 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Dest.NameAndInfo.GetField<EStatDataType>() == Item.NameAndInfo.GetField<EStatDataType>()"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                       ,0x7d5,L""), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (((((byte)((uint)(pFVar16->NameAndInfo).Number >> 0x14) ^
                      (byte)(*(uint *)((longlong)pdVar3 + 0xc) >> 0x14)) & 1) != 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Dest.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration) == Item.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration)"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                       ,0x7d6,L""), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar10 = (pFVar16->NameAndInfo).Number >> 9 & 7;
                if (uVar10 == 2) {
                  *pdVar3 = (double)((longlong)*pdVar3 + *(longlong *)(pFVar16->StatData).Pad);
                }
                else if (uVar10 == 3) {
                  *pdVar3 = *(double *)(pFVar16->StatData).Pad + *pdVar3;
                }
                else if ((uVar10 != 5) &&
                        (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                           ("0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                            ,0x816,L""), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              lVar14 = local_148;
              if (TVar21 == ChildrenStart) {
                if (((local_168.Data <= (FScriptContainerElement *)&local_158) &&
                    ((FScriptContainerElement *)&local_158 <
                     local_168.Data + (longlong)local_160._4_4_ * 8)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar11 = (int)local_160;
                if ((int)local_160 == local_160._4_4_) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_168,(int *)((longlong)&local_160 + 4));
                }
                local_160 = CONCAT44(local_160._4_4_,iVar11 + 1);
                *(double **)(local_168.Data + (longlong)iVar11 * 8) = local_158;
                lVar14 = local_148;
                pdVar20 = local_158;
                goto LAB_141a28eca;
              }
            }
            if (TVar21 == ChildrenEnd) {
              if (((int)local_160 < 1) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar11 = (int)local_160 + -1;
              pdVar3 = *(double **)(local_168.Data + (longlong)iVar11 * 8);
              iVar17 = ((int)local_160 - iVar11) + -1;
              if (iVar17 != 0) {
                memmove(local_168.Data + (longlong)iVar11 * 8,
                        local_168.Data + (longlong)iVar11 * 8 + 8,(longlong)iVar17 << 3);
              }
              iVar11 = (int)local_160 + -1;
              local_160 = CONCAT44(local_160._4_4_,iVar11);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&local_168,iVar11,(int *)((longlong)&local_160 + 4));
              if ((pdVar20 != pdVar3) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Current == Stack.Pop()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                     ,0x63c,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar10 = 0;
              if ((int)((int)local_160 - 1U) < (int)local_160) {
                uVar10 = ~((int)local_160 - 1U) >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pdVar20 = *(double **)(local_168.Data + (longlong)((int)local_160 + -1) * 8);
              lVar14 = local_148;
            }
          }
        }
        else if (param_4 != (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)0x0) {
          FStatsUtils::AddNonStackStats
                    ((FName)((ulonglong)*pFVar1 & 0x1ffffffffff),pFVar16,TVar21,
                     (TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
                      *)local_98);
        }
      }
LAB_141a28eca:
      local_148 = lVar14 + 0x10;
      uVar19 = uVar19 + 1;
      iVar11 = local_130->ArrayNum;
      param_3 = local_128;
      param_1 = local_130;
    } while ((int)uVar19 < iVar11);
  }
  if (local_168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data);
  }
  if (param_4 != (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)0x0) {
    iStack_f0 = 0;
    local_d8 = 0;
    uStack_ec = 1;
    iStack_dc = 0;
    if (local_70 != 0) {
      puVar18 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar18 = local_78;
      }
      uVar19 = *puVar18;
      while (uVar19 == 0) {
        lVar14 = (longlong)iStack_f0;
        local_d8 = local_d8 + 0x20;
        iStack_f0 = iStack_f0 + 1;
        iStack_dc = local_70;
        if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0)
        goto LAB_141a28fa0;
        uVar19 = puVar18[lVar14 + 1];
      }
      uStack_ec = -uVar19 & uVar19;
      uVar2 = (ulonglong)uStack_ec * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_140.Key._4_4_ = (int)lVar14;
      iStack_dc = local_140.Key._4_4_ + -1 + local_d8;
      if (local_70 < iStack_dc) {
        iStack_dc = local_70;
      }
    }
LAB_141a28fa0:
    local_120 = (longlong *)local_98;
    TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uStack_e0 = 0xffffffff;
    uStack_d4 = local_9c;
    TStack_118._padding_ = CONCAT44(uStack_ec,iStack_f0);
    TStack_118.CurrentBitIndex = iStack_dc;
    TStack_118.UnvisitedBitMask = 0xffffffff;
    TStack_118._28_4_ = local_9c;
    TStack_118.BaseBitIndex = local_d8;
    iVar11 = iStack_dc;
    local_f8 = local_120;
    local_e8 = TStack_118.Array;
    if (iStack_dc < local_70) {
      do {
        pFVar4 = (param_4->AllocatorInstance).Data;
        pFVar15 = (FScriptContainerElement *)(*local_120 + 8 + (longlong)iVar11 * 0x20);
        if (((pFVar4 <= pFVar15) && (pFVar15 < pFVar4 + (longlong)param_4->ArrayMax * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = param_4->ArrayNum;
        if (iVar11 == param_4->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar11 + 1;
        uVar7 = *(undefined8 *)(pFVar15 + 8);
        pFVar4 = (param_4->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
        *(undefined8 *)pFVar4 = *(undefined8 *)pFVar15;
        *(undefined8 *)(pFVar4 + 8) = uVar7;
        TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
        iVar11 = TStack_118.CurrentBitIndex;
      } while (TStack_118.CurrentBitIndex < (TStack_118.Array)->NumBits);
    }
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FStatMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// UncondenseStackStats @ 141a29120

void __thiscall
FStatsThreadState::UncondenseStackStats
          (FStatsThreadState *this,long64 param_1,FRawStatStackNode *param_2,IItemFilter *param_3,
          TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_4)

{
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = GetCondensedHistory(this,param_1);
  UncondenseStackStats(this,pTVar1,param_2,param_3,param_4);
  return;
}

// UpdateStatMessagesMemoryUsage @ 141a2c870

/* WARNING: Removing unreachable block (ram,0x000141a2cc31) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStatsThreadState::UpdateStatMessagesMemoryUsage(FStatsThreadState *this)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  int iVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_StatMessagesMemory> FVar9;
  FThreadStats *this_00;
  FGameThreadStatsData *this_01;
  FGameThreadStatsData *pFVar10;
  FLatestGameThreadStatsData *pFVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  uchar auVar16 [8];
  FName local_res8;
  undefined8 *local_res10;
  FName local_res18;
  FString local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FDelegateAllocation local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FStatMessage local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  iVar7 = (this->NumStatMessages).Counter;
  iVar4 = iVar7;
  if (iVar7 < this->MaxNumStatMessages) {
    iVar4 = this->MaxNumStatMessages;
  }
  this->TotalNumStatMessages = this->TotalNumStatMessages + (longlong)iVar7;
  this->MaxNumStatMessages = iVar4;
  FVar9 = StatPtr_STAT_StatMessagesMemory;
  if (StatPtr_STAT_StatMessagesMemory == (FThreadSafeStaticStat<FStat_STAT_StatMessagesMemory>)0x0)
  {
    pFVar8 = ::FName::FName(&local_res18,"STAT_StatMessagesMemory");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_StatMessagesMemory>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StatMessagesMemory,*pFVar8,
                       L"Stat Messages","STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System",
                       true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar2 = *(FName *)FVar9;
  auVar16 = (uchar  [8])((longlong)iVar7 << 4);
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = FThreadStats::GetThreadStats();
    local_80.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar2;
    local_80.StatData.Pad = auVar16;
    local_80.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_80);
    FStatsTrace::Set(&local_res8,(long64)auVar16);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else {
      if (FThreadStats::bIsRawStatsActive == false) {
        return;
      }
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  if (FThreadStats::bIsRawStatsActive != false) {
    this_01 = ::operator_new(0x138);
    pFVar10 = (FGameThreadStatsData *)0x0;
    if (this_01 != (FGameThreadStatsData *)0x0) {
      pFVar10 = FGameThreadStatsData::FGameThreadStatsData(this_01,true,GRenderStats);
    }
    ::FString::PrintfImpl(&local_90,L"Current: %.1f");
    ::FString::PrintfImpl(&local_a0,L"Max: %.1f");
    ::FString::PrintfImpl(&local_b0,L"Total: %.1f");
    if (5 < (byte)LogStats._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
    }
    ::FString::FString(&local_d8,L"RawStats memory usage (MB)");
    pFVar15 = (pFVar10->GroupDescriptions).AllocatorInstance.Data;
    if (((pFVar15 <= (FScriptContainerElement *)&local_d8) &&
        ((FScriptContainerElement *)&local_d8 <
         pFVar15 + (longlong)(pFVar10->GroupDescriptions).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = (pFVar10->GroupDescriptions).ArrayNum;
    if (iVar7 == (pFVar10->GroupDescriptions).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(pFVar10->GroupDescriptions).AllocatorInstance,
                         &(pFVar10->GroupDescriptions).ArrayMax);
    }
    lVar14 = (longlong)iVar7;
    (pFVar10->GroupDescriptions).ArrayNum = iVar7 + 1;
    pFVar15 = (pFVar10->GroupDescriptions).AllocatorInstance.Data;
    *(undefined8 *)(pFVar15 + lVar14 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar15 + lVar14 * 0x10) = local_d8.Data.AllocatorInstance.Data;
    *(int *)(pFVar15 + lVar14 * 0x10 + 8) = local_d8.Data.ArrayNum;
    *(int *)(pFVar15 + lVar14 * 0x10 + 0xc) = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar15 = (pFVar10->GroupDescriptions).AllocatorInstance.Data;
    if (((pFVar15 <= (FScriptContainerElement *)&local_90) &&
        ((FScriptContainerElement *)&local_90 <
         pFVar15 + (longlong)(pFVar10->GroupDescriptions).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = (pFVar10->GroupDescriptions).ArrayNum;
    if (iVar7 == (pFVar10->GroupDescriptions).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(pFVar10->GroupDescriptions).AllocatorInstance,
                         &(pFVar10->GroupDescriptions).ArrayMax);
    }
    FVar5.Data = local_90.Data.AllocatorInstance.Data;
    (pFVar10->GroupDescriptions).ArrayNum = iVar7 + 1;
    pFVar15 = (pFVar10->GroupDescriptions).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)&pFVar15->field_0x0 = 0;
    *(int *)&pFVar15[8].field_0x0 = local_90.Data.ArrayNum;
    if (local_90.Data.ArrayNum == 0) {
      *(int *)(pFVar15 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_90.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,local_90.Data.ArrayNum,
                 (int *)(pFVar15 + 0xc));
      memcpy(*(void **)&pFVar15->field_0x0,FVar5.Data,(longlong)local_90.Data.ArrayNum * 2);
    }
    pFVar15 = (pFVar10->GroupDescriptions).AllocatorInstance.Data;
    if (((pFVar15 <= (FScriptContainerElement *)&local_a0) &&
        ((FScriptContainerElement *)&local_a0 <
         pFVar15 + (longlong)(pFVar10->GroupDescriptions).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = (pFVar10->GroupDescriptions).ArrayNum;
    if (iVar7 == (pFVar10->GroupDescriptions).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(pFVar10->GroupDescriptions).AllocatorInstance,
                         &(pFVar10->GroupDescriptions).ArrayMax);
    }
    FVar5.Data = local_a0.Data.AllocatorInstance.Data;
    (pFVar10->GroupDescriptions).ArrayNum = iVar7 + 1;
    pFVar15 = (pFVar10->GroupDescriptions).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)&pFVar15->field_0x0 = 0;
    *(int *)&pFVar15[8].field_0x0 = local_a0.Data.ArrayNum;
    if (local_a0.Data.ArrayNum == 0) {
      *(int *)(pFVar15 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a0.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,local_a0.Data.ArrayNum,
                 (int *)(pFVar15 + 0xc));
      memcpy(*(void **)&pFVar15->field_0x0,FVar5.Data,(longlong)local_a0.Data.ArrayNum * 2);
    }
    pFVar15 = (pFVar10->GroupDescriptions).AllocatorInstance.Data;
    if (((pFVar15 <= (FScriptContainerElement *)&local_b0) &&
        ((FScriptContainerElement *)&local_b0 <
         pFVar15 + (longlong)(pFVar10->GroupDescriptions).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = (pFVar10->GroupDescriptions).ArrayNum;
    if (iVar7 == (pFVar10->GroupDescriptions).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(pFVar10->GroupDescriptions).AllocatorInstance,
                         &(pFVar10->GroupDescriptions).ArrayMax);
    }
    FVar5.Data = local_b0.Data.AllocatorInstance.Data;
    pFVar15 = (pFVar10->GroupDescriptions).AllocatorInstance.Data;
    (pFVar10->GroupDescriptions).ArrayNum = iVar7 + 1;
    pFVar15 = pFVar15 + (longlong)iVar7 * 0x10;
    *(undefined8 *)&pFVar15->field_0x0 = 0;
    *(int *)&pFVar15[8].field_0x0 = local_b0.Data.ArrayNum;
    if (local_b0.Data.ArrayNum == 0) {
      *(int *)(pFVar15 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_b0.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,local_b0.Data.ArrayNum,
                 (int *)(pFVar15 + 0xc));
      memcpy(*(void **)&pFVar15->field_0x0,FVar5.Data,(longlong)local_b0.Data.ArrayNum * 2);
    }
    pFVar11 = FLatestGameThreadStatsData::Get();
    local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_c8,(FWriteAccessScope *)&local_58);
    local_40 = &local_c0;
    puVar12 = UE::Core::Private::DelegateAllocate(0x28,&local_c0);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAUFGameThreadStatsData____6B_
      ;
      puVar12[1] = pFVar10;
      uVar13 = FDelegateHandle::GenerateNewID();
      puVar12[2] = uVar13;
      *puVar12 = &
                 ___7__TBaseRawMethodDelegateInstance__0A_UFLatestGameThreadStatsData____A6AXXZUFDefaultDelegateUserPolicy__PEAUFGameThreadStatsData____6B_
      ;
      puVar12[4] = FLatestGameThreadStatsData::NewData;
      puVar12[3] = pFVar11;
      if ((pFVar11 == (FLatestGameThreadStatsData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && MethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x1d8,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_res10,
               (TStatIdData *)&local_c8,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)&TStatId::TStatId_NAME_None,MainQueue);
    if (local_res10 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_res10 + 6);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)*local_res10)(local_res10,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_c8,(FWriteAccessScope *)&local_70);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  return;
}

