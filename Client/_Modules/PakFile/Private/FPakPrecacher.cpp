// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 39

// FPakPrecacher @ 142a53690

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

FPakPrecacher * __thiscall
FPakPrecacher::FPakPrecacher(FPakPrecacher *this,IPlatformFile *param_1,bool param_2)

{
  code *pcVar1;
  uint uVar2;
  FPakPrecacher *pFVar3;
  bool bVar4;
  
  this->LowerLevel = param_1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CachedFilesScopeLock,4000);
  this->NextUniqueID = 1;
  bVar4 = 3 < GNextSalt;
  this->LastReadRequest = 0;
  this->BlockMemory = 0;
  this->BlockMemoryHighWater = 0;
  (this->RequestCounter).Counter = 0;
  *(undefined8 *)&this->CachedPaks = 0;
  *(undefined8 *)&(this->CachedPaks).field_0x8 = 0;
  *(undefined8 *)&(this->CachedPaks).field_0x20 = 0;
  *(undefined4 *)&(this->CachedPaks).field_0x28 = 0;
  *(undefined4 *)&(this->CachedPaks).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedPaks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedPaks).field_0x34 = 0;
  *(undefined8 *)&(this->CachedPaks).field_0x40 = 0;
  *(undefined4 *)&(this->CachedPaks).field_0x48 = 0;
  (this->CachedPakData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedPakData).ArrayNum = 0;
  (this->CachedPakData).ArrayMax = 0;
  (this->InRequestAllocator).Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InRequestAllocator).Items.ArrayNum = 0;
  (this->InRequestAllocator).Items.ArrayMax = 0;
  (this->InRequestAllocator).FreeItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InRequestAllocator).FreeItems.ArrayNum = 0;
  (this->InRequestAllocator).FreeItems.ArrayMax = 0;
  if (bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GNextSalt < 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x2b,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPakPrecacher *)(*pcVar1)();
      return pFVar3;
    }
  }
  (this->InRequestAllocator).SaltMask = 0xc0000000;
  (this->InRequestAllocator).Salt = GNextSalt << 0x1e;
  GNextSalt = GNextSalt + 1;
  uVar2 = TIntervalTreeAllocator<FPakPrecacher::FPakInRequest>::Alloc(&this->InRequestAllocator);
  if ((uVar2 & ~(this->InRequestAllocator).SaltMask) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Alloc() & ~SaltMask) == IntervalTreeInvalidIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x2e,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPakPrecacher *)(*pcVar1)();
      return pFVar3;
    }
  }
  bVar4 = 3 < GNextSalt;
  (this->CacheBlockAllocator).Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheBlockAllocator).Items.ArrayNum = 0;
  (this->CacheBlockAllocator).Items.ArrayMax = 0;
  (this->CacheBlockAllocator).FreeItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheBlockAllocator).FreeItems.ArrayNum = 0;
  (this->CacheBlockAllocator).FreeItems.ArrayMax = 0;
  if (bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GNextSalt < 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x2b,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPakPrecacher *)(*pcVar1)();
      return pFVar3;
    }
  }
  (this->CacheBlockAllocator).SaltMask = 0xc0000000;
  (this->CacheBlockAllocator).Salt = GNextSalt << 0x1e;
  GNextSalt = GNextSalt + 1;
  uVar2 = TIntervalTreeAllocator<FPakPrecacher::FCacheBlock>::Alloc(&this->CacheBlockAllocator);
  if ((uVar2 & ~(this->CacheBlockAllocator).SaltMask) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Alloc() & ~SaltMask) == IntervalTreeInvalidIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x2e,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPakPrecacher *)(*pcVar1)();
      return pFVar3;
    }
  }
  *(undefined8 *)&this->OutstandingRequests = 0;
  *(undefined8 *)&(this->OutstandingRequests).field_0x8 = 0;
  *(undefined8 *)&(this->OutstandingRequests).field_0x20 = 0;
  *(undefined4 *)&(this->OutstandingRequests).field_0x28 = 0;
  *(undefined4 *)&(this->OutstandingRequests).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutstandingRequests).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutstandingRequests).field_0x34 = 0;
  *(undefined8 *)&(this->OutstandingRequests).field_0x40 = 0;
  *(undefined4 *)&(this->OutstandingRequests).field_0x48 = 0;
  (this->OffsetAndPakIndexOfSavedBlocked).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OffsetAndPakIndexOfSavedBlocked).ArrayNum = 0;
  (this->OffsetAndPakIndexOfSavedBlocked).ArrayMax = 0;
  this->RequestsToLower[0].RequestHandle = (IAsyncReadRequest *)0x0;
  this->RequestsToLower[0].BlockIndex = 0;
  this->RequestsToLower[0].RequestSize = 0;
  this->RequestsToLower[0].Memory = (uchar *)0x0;
  this->RequestsToLower[1].RequestHandle = (IAsyncReadRequest *)0x0;
  this->RequestsToLower[1].BlockIndex = 0;
  this->RequestsToLower[1].RequestSize = 0;
  this->RequestsToLower[1].Memory = (uchar *)0x0;
  this->RequestsToLower[2].RequestHandle = (IAsyncReadRequest *)0x0;
  this->RequestsToLower[2].BlockIndex = 0;
  this->RequestsToLower[2].RequestSize = 0;
  this->RequestsToLower[2].Memory = (uchar *)0x0;
  this->RequestsToLower[3].RequestHandle = (IAsyncReadRequest *)0x0;
  this->RequestsToLower[3].BlockIndex = 0;
  this->RequestsToLower[3].RequestSize = 0;
  this->RequestsToLower[3].Memory = (uchar *)0x0;
  this->RequestsToLower[4].RequestHandle = (IAsyncReadRequest *)0x0;
  this->RequestsToLower[4].BlockIndex = 0;
  this->RequestsToLower[4].RequestSize = 0;
  this->RequestsToLower[4].Memory = (uchar *)0x0;
  this->RequestsToLower[5].RequestHandle = (IAsyncReadRequest *)0x0;
  this->RequestsToLower[5].BlockIndex = 0;
  this->RequestsToLower[5].RequestSize = 0;
  this->RequestsToLower[5].Memory = (uchar *)0x0;
  this->RequestsToLower[6].RequestHandle = (IAsyncReadRequest *)0x0;
  this->RequestsToLower[6].BlockIndex = 0;
  this->RequestsToLower[6].RequestSize = 0;
  this->RequestsToLower[6].Memory = (uchar *)0x0;
  this->RequestsToLower[7].RequestHandle = (IAsyncReadRequest *)0x0;
  this->RequestsToLower[7].BlockIndex = 0;
  this->RequestsToLower[7].RequestSize = 0;
  this->RequestsToLower[7].Memory = (uchar *)0x0;
  (this->RequestsToDelete).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestsToDelete).ArrayNum = 0;
  (this->RequestsToDelete).ArrayMax = 0;
  this->NotifyRecursion = 0;
  this->Loads = 0;
  this->Frees = 0;
  this->LoadSize = 0;
  this->AsyncMinPriority = AIOP_MIN;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->SetAsyncMinimumPriorityScopeLock,4000);
  this->bEnableSignatureChecks = param_2;
  if (this->LowerLevel != (IPlatformFile *)0x0) {
    bVar4 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar4) goto LAB_142a539ed;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("LowerLevel && FPlatformProcess::SupportsMultithreading()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                     ,0x350,L"");
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPakPrecacher *)(*pcVar1)();
    return pFVar3;
  }
LAB_142a539ed:
  if (8 < GPakCache_MaxRequestsToLowerLevel) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GPakCache_MaxRequestsToLowerLevel <= (8)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x352,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPakPrecacher *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// operator() @ 142a58ea0

bool __thiscall
`FPakPrecacher::GetCompletedRequestData'::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  
  lVar9 = *(longlong *)this;
  uVar7 = ~*(uint *)(lVar9 + 0x104) & param_1;
  if ((((*(uint *)(lVar9 + 0x104) & param_1) != *(uint *)(lVar9 + 0x100)) || (uVar7 == 0)) ||
     (*(uint *)(lVar9 + 0xe8) <= uVar7)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x4a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar5 = 0;
  if ((int)uVar7 < *(int *)(lVar9 + 0xe8)) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  puVar10 = (ulonglong *)(*(longlong *)(lVar9 + 0xe0) + (longlong)(int)uVar7 * 0x30);
  uVar8 = *puVar10 & 0xffffffffffff;
  if (((puVar10[2] == 0) || (puVar10[1] == 0)) ||
     (*(longlong *)(*(longlong *)((longlong)this + 0x28) + 0x10) < (longlong)(puVar10[1] + uVar8)))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Block.Memory && Block.Size && BlockOffset >= 0 && BlockOffset + Block.Size <= Pak.TotalSize"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x886,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar1 = *(ulonglong *)((longlong)this + 8);
  uVar11 = uVar8;
  if ((longlong)uVar8 < (longlong)uVar1) {
    uVar11 = uVar1;
  }
  lVar6 = uVar1 + *(longlong *)((longlong)this + 0x10);
  lVar9 = puVar10[1] + uVar8;
  if (lVar6 < (longlong)(puVar10[1] + uVar8)) {
    lVar9 = lVar6;
  }
  if (lVar9 <= (longlong)uVar11) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OverlapEnd > OverlapStart",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x88a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  **(longlong **)((longlong)this + 0x18) = **(longlong **)((longlong)this + 0x18) + (lVar9 - uVar11)
  ;
  memcpy((void *)((*(longlong *)((longlong)this + 0x20) - *(longlong *)((longlong)this + 8)) +
                 uVar11),(void *)((puVar10[2] - uVar8) + uVar11),lVar9 - uVar11);
  return true;
}

// operator() @ 142a59200

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
`FPakPrecacher::StartBlockTask'::__l2::<lambda_1>::operator()
          (void *this,bool param_1,IAsyncReadRequest *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_res8 [24];
  undefined4 local_res20;
  IAsyncReadRequest *local_28;
  FConstructor local_20;
  undefined8 *local_18 [3];
  
  if (((*(FPakPrecacher **)this)->bEnableSignatureChecks != false) &&
     (*(char *)((longlong)this + 0xc) != '\0')) {
    local_res20 = *(undefined4 *)((longlong)this + 8);
    local_20.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_res8[0] = param_1;
    local_28 = param_2;
    TGraphTask<FAsyncIOSignatureCheckTask>::FConstructor::
    ConstructAndDispatchWhenReady<bool_&,IAsyncReadRequest_*_&,int_&>
              (&local_20,(bool *)local_18,(IAsyncReadRequest **)local_res8,(int *)&local_28);
    if (local_18[0] != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18[0] + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142a59272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*local_18[0])(local_18[0],1);
        return;
      }
    }
    return;
  }
  FPakPrecacher::NewRequestsToLowerComplete
            (*(FPakPrecacher **)this,param_1,param_2,*(int *)((longlong)this + 8));
  return;
}

// operator() @ 142a59290

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall
`FPakPrecacher::GetNextBlock'::__l24::<lambda_1>::operator()(void *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulong64 uVar4;
  
  uVar4 = FPakPrecacher::FirstUnfilledBlockForRequest
                    (*(FPakPrecacher **)this,param_1,*(ulong64 *)((longlong)this + 0x30));
  if ((*(longlong *)((longlong)this + 0x30) == 0) && (uVar4 == 0xffffffffffffffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalLastReadRequest != 0 || First != ((uint64) 0xffffffffffffffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x641,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (uVar4 < **(ulonglong **)((longlong)this + 0x10)) {
    **(ulonglong **)((longlong)this + 0x10) = uVar4;
    **(undefined2 **)((longlong)this + 0x18) = *(undefined2 *)((longlong)this + 0x20);
    **(longlong **)((longlong)this + 0x28) =
         (**(ulonglong **)((longlong)this + 0x10) & 0xffffffffffff) - 1;
  }
  return true;
}

// operator() @ 142a59420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall `FPakPrecacher::TrimCache'::__l44::<lambda_1>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  FCacheBlock *pFVar7;
  
  lVar1 = *(longlong *)this;
  uVar6 = ~*(uint *)(lVar1 + 0x104) & param_1;
  if ((((*(uint *)(lVar1 + 0x104) & param_1) != *(uint *)(lVar1 + 0x100)) || (uVar6 == 0)) ||
     (*(uint *)(lVar1 + 0xe8) <= uVar6)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x4a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar5 = 0;
  if ((int)uVar6 < *(int *)(lVar1 + 0xe8)) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar7 = (FCacheBlock *)((longlong)(int)uVar6 * 0x30 + *(longlong *)(lVar1 + 0xe0));
  if (pFVar7->InRequestRefCount == 0) {
    if (6 < (byte)LogPakFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`public:_bool___cdecl_`private:_void___cdecl_FPakPrecacher::TrimCache(bool,unsigned_short)___ptr64'::`44'::<lambda_1>::operator()(unsigned_int)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
    FPakPrecacher::ClearBlock(*(FPakPrecacher **)this,pFVar7);
    return true;
  }
  return false;
}

// operator() @ 142a59540

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall `FPakPrecacher::AddNewBlock'::__l65::<lambda_1>::operator()(void *this,uint param_1)

{
  int *piVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  ulong64 uVar9;
  uint uVar10;
  uint local_res10 [2];
  
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 0x18);
  *piVar1 = *piVar1 + 1;
  local_res10[0] = param_1;
  uVar9 = FPakPrecacher::FirstUnfilledBlockForRequest(*(FPakPrecacher **)this,param_1,0);
  if (uVar9 != 0xffffffffffffffff) {
    return false;
  }
  lVar2 = *(longlong *)this;
  uVar10 = ~*(uint *)(lVar2 + 0xdc) & local_res10[0];
  if ((((*(uint *)(lVar2 + 0xdc) & local_res10[0]) != *(uint *)(lVar2 + 0xd8)) || (uVar10 == 0)) ||
     (*(uint *)(lVar2 + 0xc0) <= uVar10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x4a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uVar7 = 0;
  if ((int)uVar10 < *(int *)(lVar2 + 0xc0)) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0xb8) + 0x24 + (longlong)(int)uVar10 * 0x30) = 0;
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
  if ((pFVar3->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar8 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar8 + 1;
  *(uint *)(pFVar3->Data + (longlong)iVar8 * 4) = local_res10[0];
  return true;
}

// operator() @ 142a596f0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall
`FPakPrecacher::CompleteRequest'::__l117::<lambda_1>::operator()(void *this,uint param_1)

{
  int *piVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  ulong64 uVar9;
  uint uVar10;
  uint local_res10 [2];
  
  local_res10[0] = param_1;
  uVar9 = FPakPrecacher::FirstUnfilledBlockForRequest(*(FPakPrecacher **)this,param_1,0);
  if (uVar9 != 0xffffffffffffffff) {
    return false;
  }
  lVar2 = *(longlong *)this;
  uVar10 = ~*(uint *)(lVar2 + 0xdc) & local_res10[0];
  if ((((*(uint *)(lVar2 + 0xdc) & local_res10[0]) != *(uint *)(lVar2 + 0xd8)) || (uVar10 == 0)) ||
     (*(uint *)(lVar2 + 0xc0) <= uVar10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x4a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uVar7 = 0;
  if ((int)uVar10 < *(int *)(lVar2 + 0xc0)) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0xb8) + 0x24 + (longlong)(int)uVar10 * 0x30) = 0;
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  if ((pFVar3->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar8 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar8 + 1;
  *(uint *)(pFVar3->Data + (longlong)iVar8 * 4) = local_res10[0];
  return true;
}

// operator() @ 142a59a80

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall
`FPakPrecacher::RemoveRequest'::__l12::<lambda_1>::operator()(void *this,uint param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FCacheBlock *pFVar11;
  ForAnyElementType *pFVar12;
  LARGE_INTEGER local_res8 [2];
  
  lVar3 = *(longlong *)this;
  uVar10 = ~*(uint *)(lVar3 + 0x104) & param_1;
  if ((((*(uint *)(lVar3 + 0x104) & param_1) != *(uint *)(lVar3 + 0x100)) || (uVar10 == 0)) ||
     (*(uint *)(lVar3 + 0xe8) <= uVar10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x4a,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  uVar9 = 0;
  if ((int)uVar10 < *(int *)(lVar3 + 0xe8)) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  pFVar11 = (FCacheBlock *)((longlong)(int)uVar10 * 0x30 + *(longlong *)(lVar3 + 0xe0));
  if (pFVar11->InRequestRefCount == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Block.InRequestRefCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x5ba,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  puVar1 = &pFVar11->InRequestRefCount;
  *puVar1 = *puVar1 - 1;
  if (*puVar1 == 0) {
    if (GPakCache_NumUnreferencedBlocksToCache != 0) {
      uVar4 = pFVar11->OffsetAndPakIndex;
      if (*(longlong *)((longlong)this + 8) < (longlong)((uVar4 & 0xffffffffffff) + pFVar11->Size))
      {
        uVar10 = (uint)(ushort)(uVar4 >> 0x30);
        if ((*(char *)((longlong)this + 0x10) != '\0') && (GPakCache_EnableNoCaching != 0)) {
          lVar3 = *(longlong *)this;
          if (*(int *)(lVar3 + 0xb0) <= (int)uVar10) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
          }
          uVar10 = *(uint *)(*(longlong *)((uVar4 >> 0x30) * 0x98 + 8 + *(longlong *)(lVar3 + 0xa8))
                            + 0x33c);
          pFVar11->TimeNoLongerReferenced = 0.0;
          lVar3 = *(longlong *)this;
          uVar9 = 0;
          if ((int)uVar10 < *(int *)(lVar3 + 0x160)) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
          }
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::Remove
                    ((TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)
                     ((longlong)(int)uVar10 * 0x10 + *(longlong *)(lVar3 + 0x158)),
                     (ulong64 *)pFVar11);
          FPakPrecacher::ClearBlock(*(FPakPrecacher **)this,pFVar11);
          return true;
        }
        lVar3 = *(longlong *)this;
        if (*(int *)(lVar3 + 0xb0) <= (int)uVar10) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        uVar10 = *(uint *)(*(longlong *)((uVar4 >> 0x30) * 0x98 + 8 + *(longlong *)(lVar3 + 0xa8)) +
                          0x33c);
        QueryPerformanceCounter(local_res8);
        pFVar11->TimeNoLongerReferenced =
             (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
        lVar3 = *(longlong *)this;
        uVar9 = 0;
        if ((int)uVar10 < *(int *)(lVar3 + 0x160)) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::Remove
                  ((TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)
                   (*(longlong *)(lVar3 + 0x158) + (longlong)(int)uVar10 * 0x10),(ulong64 *)pFVar11)
        ;
        lVar3 = *(longlong *)this;
        uVar9 = 0;
        if ((int)uVar10 < *(int *)(lVar3 + 0x160)) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        pFVar12 = (ForAnyElementType *)(*(longlong *)(lVar3 + 0x158) + (longlong)(int)uVar10 * 0x10)
        ;
        if (((FCacheBlock *)pFVar12->Data <= pFVar11) &&
           (pFVar11 < (FCacheBlock *)
                      (&((FCacheBlock *)pFVar12->Data)->OffsetAndPakIndex +
                      *(int *)((longlong)&pFVar12[1].Data + 4)))) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        iVar8 = *(int *)&pFVar12[1].Data;
        piVar2 = (int *)((longlong)&pFVar12[1].Data + 4);
        if (iVar8 == *piVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar12,piVar2);
        }
        *(int *)&pFVar12[1].Data = iVar8 + 1;
        *(ulong64 *)(pFVar12->Data + (longlong)iVar8 * 8) = pFVar11->OffsetAndPakIndex;
        return false;
      }
    }
    FPakPrecacher::ClearBlock(*(FPakPrecacher **)this,pFVar11);
    return true;
  }
  return false;
}

// operator() @ 142a59ec0

bool __thiscall `FPakPrecacher::AddRequest'::__l15::<lambda_1>::operator()(void *this,uint param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = *(longlong *)this;
  uVar7 = ~*(uint *)(lVar2 + 0x104) & param_1;
  if ((((*(uint *)(lVar2 + 0x104) & param_1) != *(uint *)(lVar2 + 0x100)) || (uVar7 == 0)) ||
     (*(uint *)(lVar2 + 0xe8) <= uVar7)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x4a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar6 = 0;
  if ((int)uVar7 < *(int *)(lVar2 + 0xe8)) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  piVar1 = (int *)((longlong)(int)uVar7 * 0x30 + 0x18 + *(longlong *)(lVar2 + 0xe0));
  *piVar1 = *piVar1 + 1;
  if (`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
      ::__l2::InFlightOrDone.ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  MaskInterval<FPakPrecacher::FCacheBlock>
            (param_1,(TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> *)
                     (*(longlong *)this + 0xe0),*(ulong64 *)((longlong)this + 0x10),
             *(ulong64 *)((longlong)this + 0x18),*(uint *)(*(longlong *)((longlong)this + 8) + 0x28)
             ,(ulong64 *)
              `private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
              ::__l2::InFlightOrDone.AllocatorInstance.Data);
  return true;
}

// operator() @ 142a5a4f0

bool __thiscall `FPakPrecacher::AddRequest'::__l26::<lambda_2>::operator()(void *this,uint param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = *(longlong *)this;
  uVar7 = ~*(uint *)(lVar2 + 0x104) & param_1;
  if ((((*(uint *)(lVar2 + 0x104) & param_1) != *(uint *)(lVar2 + 0x100)) || (uVar7 == 0)) ||
     (*(uint *)(lVar2 + 0xe8) <= uVar7)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x4a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar6 = 0;
  if ((int)uVar7 < *(int *)(lVar2 + 0xe8)) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  piVar1 = (int *)((longlong)(int)uVar7 * 0x30 + 0x18 + *(longlong *)(lVar2 + 0xe0));
  *piVar1 = *piVar1 + 1;
  if (`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
      ::__l2::InFlightOrDone.ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  MaskInterval<FPakPrecacher::FCacheBlock>
            (param_1,(TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> *)
                     (*(longlong *)this + 0xe0),*(ulong64 *)((longlong)this + 0x10),
             *(ulong64 *)((longlong)this + 0x18),*(uint *)(*(longlong *)((longlong)this + 8) + 0x28)
             ,(ulong64 *)
              `private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
              ::__l2::InFlightOrDone.AllocatorInstance.Data);
  return true;
}

// operator() @ 142a5a750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall `FPakPrecacher::TrimCache'::__l81::<lambda_2>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  FCacheBlock *pFVar7;
  
  lVar1 = *(longlong *)this;
  uVar6 = ~*(uint *)(lVar1 + 0x104) & param_1;
  if ((((*(uint *)(lVar1 + 0x104) & param_1) != *(uint *)(lVar1 + 0x100)) || (uVar6 == 0)) ||
     (*(uint *)(lVar1 + 0xe8) <= uVar6)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x4a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar5 = 0;
  if ((int)uVar6 < *(int *)(lVar1 + 0xe8)) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar7 = (FCacheBlock *)((longlong)(int)uVar6 * 0x30 + *(longlong *)(lVar1 + 0xe0));
  if ((pFVar7->InRequestRefCount == 0) &&
     ((double)GPakCache_TimeToTrim <=
      *(double *)((longlong)this + 8) - pFVar7->TimeNoLongerReferenced)) {
    if (6 < (byte)LogPakFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`public:_bool___cdecl_`private:_void___cdecl_FPakPrecacher::TrimCache(bool,unsigned_short)___ptr64'::`81'::<lambda_2>::operator()(unsigned_int)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
    FPakPrecacher::ClearBlock(*(FPakPrecacher **)this,pFVar7);
    return true;
  }
  **(undefined1 **)((longlong)this + 0x10) = 0;
  return false;
}

// operator() @ 142a5a890

bool __thiscall
`FPakPrecacher::RemoveRequest'::__l12::<lambda_2>::operator()(void *this,uint param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)this;
  uVar6 = ~*(uint *)(lVar7 + 0x104) & param_1;
  if ((((*(uint *)(lVar7 + 0x104) & param_1) != *(uint *)(lVar7 + 0x100)) || (uVar6 == 0)) ||
     (*(uint *)(lVar7 + 0xe8) <= uVar6)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x4a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar5 = 0;
  if ((int)uVar6 < *(int *)(lVar7 + 0xe8)) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  lVar7 = (longlong)(int)uVar6 * 0x30 + *(longlong *)(lVar7 + 0xe0);
  if (*(int *)(lVar7 + 0x18) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Block.InRequestRefCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x5e8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  piVar1 = (int *)(lVar7 + 0x18);
  *piVar1 = *piVar1 + -1;
  return true;
}

// operator() @ 142a5a990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall `FPakPrecacher::TrimCache'::__l124::<lambda_3>::operator()(void *this,uint param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  FCacheBlock *pFVar7;
  
  lVar1 = *(longlong *)this;
  uVar6 = ~*(uint *)(lVar1 + 0x104) & param_1;
  if ((((*(uint *)(lVar1 + 0x104) & param_1) != *(uint *)(lVar1 + 0x100)) || (uVar6 == 0)) ||
     (*(uint *)(lVar1 + 0xe8) <= uVar6)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x4a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar5 = 0;
  if ((int)uVar6 < *(int *)(lVar1 + 0xe8)) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar7 = (FCacheBlock *)((longlong)(int)uVar6 * 0x30 + *(longlong *)(lVar1 + 0xe0));
  if (pFVar7->InRequestRefCount == 0) {
    if (6 < (byte)LogPakFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`public:_bool___cdecl_`private:_void___cdecl_FPakPrecacher::TrimCache(bool,unsigned_short)___ptr64'::`124'::<lambda_3>::operator()(unsigned_int)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
    FPakPrecacher::ClearBlock(*(FPakPrecacher **)this,pFVar7);
    return true;
  }
  return false;
}

// AddNewBlock @ 142a5cd40

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall FPakPrecacher::AddNewBlock(FPakPrecacher *this)

{
  TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> *this_00;
  TIntervalTreeAllocator<FPakPrecacher::FPakInRequest> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint *puVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  uint *puVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  EAsyncIOPriorityAndFlags local_178;
  uint local_174;
  longlong local_170;
  uint *local_168;
  FCacheBlock *local_160;
  uint local_158;
  uint *local_150;
  ulonglong local_148;
  ulonglong local_140;
  code *local_138;
  TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> **local_130;
  code *local_128;
  TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> **local_120;
  code *local_118;
  TIntervalTreeAllocator<FPakPrecacher::FPakInRequest> **local_110;
  code *local_108;
  FPakPrecacher **local_100;
  code *local_f8;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  FPakPrecacher *local_d8;
  FCacheBlock *local_d0;
  uint **local_c8;
  TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> *local_c0;
  ulonglong local_b8;
  ulong64 local_b0;
  undefined4 local_a8;
  FScriptContainerElement *local_a0;
  TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> *local_98;
  ulonglong local_90;
  ulong64 local_88;
  undefined4 local_80;
  FScriptContainerElement *local_78;
  TIntervalTreeAllocator<FPakPrecacher::FPakInRequest> *local_70;
  ulonglong local_68;
  ulong64 local_60;
  undefined4 local_58;
  FScriptContainerElement *local_50;
  
  uVar9 = GetNextBlock(this,&local_178);
  if ((5 < (int)local_178) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequestPriority < AIOP_NUM",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x661,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (uVar9 == 0xffffffffffffffff) {
    return false;
  }
  uVar10 = uVar9 >> 0x30;
  uVar7 = (uint)(ushort)(uVar9 >> 0x30);
  local_158 = uVar7;
  if (((this->CachedPakData).ArrayNum <= (int)uVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result < CachedPakData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x3c4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (((this->CachedPakData).ArrayNum <= (int)uVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pFVar2 = (this->CachedPakData).AllocatorInstance.Data;
  if ((*(longlong *)(pFVar2 + uVar10 * 0x98 + 0x10) <= (longlong)(uVar9 & 0xffffffffffff)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset < Pak.TotalSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x669,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  uVar12 = *(ulonglong *)(pFVar2 + uVar10 * 0x98 + 0x10);
  uVar20 = uVar9 & 0xffffffff0000;
  uVar13 = (longlong)(GPakCache_MaxRequestSizeToLowerLevelKB << 10) + 0xffff + uVar20 &
           0xffffffffffff0000;
  uVar14 = uVar12;
  if ((longlong)(uVar13 - 1) < (longlong)(uVar12 - 1)) {
    uVar14 = uVar13;
  }
  uVar9 = uVar14 - 1;
  local_168 = (uint *)uVar9;
  if (((((longlong)uVar12 <= (longlong)uVar9) || ((longlong)uVar9 < 0)) ||
      ((longlong)uVar9 < (longlong)uVar20)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstByte >= 0 && LastByte < Pak.TotalSize && LastByte >= 0 && LastByte >= FirstByte"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x66c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  lVar11 = (uVar9 - uVar20) + 0x10000;
  lVar11 = lVar11 + (ulonglong)(ushort)(lVar11 >> 0x3f);
  uVar7 = (uint)((ulonglong)lVar11 >> 0x10);
  if (((lVar11 >> 0x10 != (ulonglong)uVar7) || (lVar11 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  uVar19 = uVar7 + 0x3f >> 6;
  local_170 = CONCAT44(local_170._4_4_,uVar19);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
                           _thread_safe_static_guard_0__),
     `private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    atexit(`FPakPrecacher::AddNewBlock'::__l2::_dynamic_atexit_destructor_for__InFlightOrDone__);
    _Init_thread_footer(&`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
                         _thread_safe_static_guard_0__);
  }
  uVar15 = 0;
  iVar18 = 8;
  `private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::InFlightOrDone.ArrayNum =
       0;
  if ((`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::InFlightOrDone.
       ArrayMax < 0) &&
     (`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::InFlightOrDone.
      ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
                      InFlightOrDone.AllocatorInstance,0,
               &`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
                InFlightOrDone.ArrayMax);
  }
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar19,
                     &`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
                      InFlightOrDone.AllocatorInstance,
                     &`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
                      InFlightOrDone.ArrayNum,
                     &`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
                      InFlightOrDone.ArrayMax);
  memset(`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::InFlightOrDone.
         AllocatorInstance.Data + (longlong)iVar8 * 8,0,(ulonglong)uVar19 * 8);
  local_174 = uVar19 << 6;
  if (uVar7 != local_174) {
    uVar7 = 0;
    if ((int)(uVar19 - 1) <
        `private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::InFlightOrDone.
        ArrayNum) {
      uVar7 = ~(uVar19 - 1) >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    *(longlong *)
     (`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::InFlightOrDone.
      AllocatorInstance.Data + (ulonglong)uVar19 * 8 + -8) =
         -1L << (((char)((ulonglong)lVar11 >> 0x10) - (char)local_174) + 0x40U & 0x3f);
  }
  if (*(int *)(pFVar2 + uVar10 * 0x98 + 0x80) != 0) {
    if ((`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::InFlightOrDone.
         ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    local_a8 = *(undefined4 *)(pFVar2 + uVar10 * 0x98 + 0x28);
    local_c0 = &this->CacheBlockAllocator;
    local_a0 = `private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
               InFlightOrDone.AllocatorInstance.Data;
    local_130 = &local_c0;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`OverlappingNodesInIntervalTreeMask<FPakPrecacher::FCacheBlock>'::__l2::<lambda_1>,bool,unsigned_int>
                ::Call;
    local_b8 = uVar20;
    local_b0 = uVar9;
    OverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
              (*(uint *)(pFVar2 + uVar10 * 0x98 + 0x80),local_c0,uVar20,uVar9,0,
               *(ulong64 *)(pFVar2 + uVar10 * 0x98 + 0x18),*(uint *)(pFVar2 + uVar10 * 0x98 + 0x20),
               *(uint *)(pFVar2 + uVar10 * 0x98 + 0x24),
               (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_138);
  }
  if (*(int *)(pFVar2 + uVar10 * 0x98 + 0x7c) != 0) {
    if ((`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::InFlightOrDone.
         ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    local_80 = *(undefined4 *)(pFVar2 + uVar10 * 0x98 + 0x28);
    local_78 = `private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
               InFlightOrDone.AllocatorInstance.Data;
    local_120 = &local_98;
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`OverlappingNodesInIntervalTreeMask<FPakPrecacher::FCacheBlock>'::__l2::<lambda_1>,bool,unsigned_int>
                ::Call;
    local_98 = &this->CacheBlockAllocator;
    local_90 = uVar20;
    local_88 = uVar9;
    OverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
              (*(uint *)(pFVar2 + uVar10 * 0x98 + 0x7c),&this->CacheBlockAllocator,uVar20,uVar9,0,
               *(ulong64 *)(pFVar2 + uVar10 * 0x98 + 0x18),*(uint *)(pFVar2 + uVar10 * 0x98 + 0x20),
               *(uint *)(pFVar2 + uVar10 * 0x98 + 0x24),
               (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_128);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
       _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
                           _thread_safe_static_guard_1__),
     `private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
     _thread_safe_static_guard_1__ == -1)) {
    atexit(`FPakPrecacher::AddNewBlock'::__l2::_dynamic_atexit_destructor_for__Requested__);
    _Init_thread_footer(&`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
                         _thread_safe_static_guard_1__);
  }
  `private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::Requested.ArrayNum = 0;
  if ((`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::Requested.ArrayMax <
       0) && (`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::Requested.
              ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
                      Requested.AllocatorInstance,0,
               &`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::Requested.
                ArrayMax);
  }
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar19,
                     &`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
                      Requested.AllocatorInstance,
                     &`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
                      Requested.ArrayNum,
                     &`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
                      Requested.ArrayMax);
  memset(`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::Requested.
         AllocatorInstance.Data + (longlong)iVar8 * 8,0,(ulonglong)uVar19 << 3);
  local_140 = 5;
  if ((int)local_178 < 9) {
    lVar11 = 5;
    pFVar17 = pFVar2 + uVar10 * 0x98 + 0x74;
    do {
      if (*(uint *)pFVar17 != 0) {
        if ((`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::Requested.
             ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        local_58 = *(undefined4 *)(pFVar2 + uVar10 * 0x98 + 0x28);
        local_70 = &this->InRequestAllocator;
        local_50 = `private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::Requested
                   .AllocatorInstance.Data;
        local_110 = &local_70;
        local_118 = UE::Core::Private::Function::
                    TFunctionRefCaller<`OverlappingNodesInIntervalTreeMask<FPakPrecacher::FPakInRequest>'::__l2::<lambda_1>,bool,unsigned_int>
                    ::Call;
        local_68 = uVar20;
        local_60 = uVar9;
        OverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
                  (*(uint *)pFVar17,local_70,uVar20,uVar9,0,
                   *(ulong64 *)(pFVar2 + uVar10 * 0x98 + 0x18),
                   *(uint *)(pFVar2 + uVar10 * 0x98 + 0x20),*(uint *)(pFVar2 + uVar10 * 0x98 + 0x24)
                   ,(TFunctionRef<bool___cdecl(unsigned_int)> *)&local_118);
      }
      if (lVar11 == 0) break;
      iVar18 = iVar18 + -1;
      lVar11 = lVar11 + -1;
      pFVar17 = pFVar17 + -0xc;
    } while ((int)local_178 <= iVar18);
    uVar19 = (uint)local_170;
  }
  uVar12 = (ulonglong)(uVar19 << 0x16);
  uVar7 = 0;
  if (uVar19 != 0) {
    do {
      uVar19 = uVar7;
      if ((int)uVar15 <
          `private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::InFlightOrDone.
          ArrayNum) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      local_160 = (FCacheBlock *)((longlong)(int)uVar15 * 8);
      uVar14 = *(ulonglong *)
                (`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::
                 InFlightOrDone.AllocatorInstance.Data + (longlong)local_160);
      uVar19 = uVar7;
      if ((int)uVar15 <
          `private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::Requested.ArrayNum
         ) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      uVar14 = *(ulonglong *)
                (`private:_bool___cdecl_FPakPrecacher::AddNewBlock(void)___ptr64'::__l2::Requested.
                 AllocatorInstance.Data + (longlong)local_160) & ~uVar14;
      if (uVar14 != 0xffffffffffffffff) {
        uVar12 = (ulonglong)(uVar15 << 0x16);
        for (; (uVar14 & 1) != 0; uVar14 = uVar14 >> 1) {
          uVar12 = uVar12 + 0x10000;
        }
        break;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < (uint)local_170);
  }
  if ((((longlong)uVar12 < 1) ||
      ((longlong)(GPakCache_MaxRequestSizeToLowerLevelKB << 10) < (longlong)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size > 0 && Size <= (GPakCache_MaxRequestSizeToLowerLevelKB * 1024)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x6c7,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  local_170 = (longlong)local_168 + 1U;
  if ((longlong)(uVar20 + uVar12) < (longlong)((longlong)local_168 + 1U)) {
    local_170 = uVar20 + uVar12;
  }
  local_168 = (uint *)(local_170 - uVar20);
  this_00 = &this->CacheBlockAllocator;
  local_174 = TIntervalTreeAllocator<FPakPrecacher::FCacheBlock>::Alloc(this_00);
  uVar19 = (this->CacheBlockAllocator).SaltMask;
  uVar15 = ~uVar19 & local_174;
  if (((((uVar19 & local_174) != (this->CacheBlockAllocator).Salt) || (uVar15 == 0)) ||
      ((uint)(this->CacheBlockAllocator).Items.ArrayNum <= uVar15)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x4a,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  uVar19 = uVar7;
  if ((int)uVar15 < (this->CacheBlockAllocator).Items.ArrayNum) {
    uVar19 = ~uVar15 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  local_160 = (FCacheBlock *)
              ((this_00->Items).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x30);
  local_160->OffsetAndPakIndex = (ulonglong)(ushort)local_158 << 0x30 | uVar20;
  local_160->Size = (long64)local_168;
  local_160->Index = local_174;
  local_160->InRequestRefCount = 0;
  local_160->Memory = (uchar *)0x0;
  local_160->Status = InFlight;
  AddToIntervalTree<FPakPrecacher::FCacheBlock>
            ((uint *)(pFVar2 + uVar10 * 0x98 + 0x7c),this_00,local_174,
             *(uint *)(pFVar2 + uVar10 * 0x98 + 0x20),*(uint *)(pFVar2 + uVar10 * 0x98 + 0x24));
  local_f0 = local_res18;
  pFVar17 = pFVar2 + uVar10 * 0x98 + 0x78;
  local_150 = (uint *)0x0;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPakPrecacher::AddNewBlock'::__l62::<lambda_2>,bool,unsigned_int>::
             Call;
  local_e0 = local_res20;
  uVar9 = local_170 - 1;
  local_148 = 0;
  local_e8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPakPrecacher::AddNewBlock'::__l62::<lambda_3>,bool,unsigned_int>::
             Call;
  uVar12 = 5;
  while( true ) {
    pTVar1 = &this->InRequestAllocator;
    if (*(uint *)(pFVar17 + -4) != 0) {
      uVar9 = local_170 - 1;
      local_d0 = local_160;
      local_c8 = &local_150;
      local_108 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPakPrecacher::AddNewBlock'::__l65::<lambda_1>,bool,unsigned_int>
                  ::Call;
      local_100 = &local_d8;
      local_d8 = this;
      MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
                ((uint *)(pFVar2 + (longlong)(int)uVar12 * 0xc + 0x38 + uVar10 * 0x98),pTVar1,uVar20
                 ,uVar9,0,*(ulong64 *)(pFVar2 + uVar10 * 0x98 + 0x18),
                 *(uint *)(pFVar2 + uVar10 * 0x98 + 0x20),*(uint *)(pFVar2 + uVar10 * 0x98 + 0x24),
                 (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_108);
    }
    OverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
              (*(uint *)pFVar17,pTVar1,uVar20,uVar9,0,*(ulong64 *)(pFVar2 + uVar10 * 0x98 + 0x18),
               *(uint *)(pFVar2 + uVar10 * 0x98 + 0x20),*(uint *)(pFVar2 + uVar10 * 0x98 + 0x24),
               (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_f8);
    OverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
              (*(uint *)(pFVar17 + -8),pTVar1,uVar20,uVar9,0,
               *(ulong64 *)(pFVar2 + uVar10 * 0x98 + 0x18),*(uint *)(pFVar2 + uVar10 * 0x98 + 0x20),
               *(uint *)(pFVar2 + uVar10 * 0x98 + 0x24),
               (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_e8);
    if ((int)local_140 == 0) break;
    uVar12 = (ulonglong)((int)local_140 - 1);
    pFVar17 = pFVar17 + -0xc;
    local_140 = uVar12;
  }
  iVar18 = (int)local_148;
  uVar12 = (ulonglong)(int)local_148;
  local_168 = local_150 + uVar12;
  puVar21 = local_150;
  while( true ) {
    puVar4 = local_168;
    if ((int)uVar12 != iVar18) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (puVar21 == puVar4) {
      StartBlockTask(this,local_160);
      if (local_150 != (uint *)0x0) {
        FMemory::Free(local_150);
      }
      return true;
    }
    uVar19 = (this->InRequestAllocator).SaltMask;
    uVar15 = *puVar21;
    uVar16 = ~uVar19 & uVar15;
    if (((((uVar19 & uVar15) != (this->InRequestAllocator).Salt) || (uVar16 == 0)) ||
        ((uint)(this->InRequestAllocator).Items.ArrayNum <= uVar16)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                           ,0x4a,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    uVar19 = uVar7;
    if ((int)uVar16 < (this->InRequestAllocator).Items.ArrayNum) {
      uVar19 = ~uVar16 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    pFVar17 = (pTVar1->Items).AllocatorInstance.Data;
    *(undefined4 *)(pFVar17 + (longlong)(int)uVar16 * 0x30 + 0x2c) = 2;
    AddToIntervalTree<FPakPrecacher::FPakInRequest>
              ((uint *)(pFVar2 + ((ulonglong)(byte)pFVar17[(longlong)(int)uVar16 * 0x30 + 0x28] + 5)
                                 * 0xc + uVar10 * 0x98),pTVar1,uVar15,
               *(uint *)(pFVar2 + uVar10 * 0x98 + 0x20),*(uint *)(pFVar2 + uVar10 * 0x98 + 0x24));
    uVar12 = local_148 & 0xffffffff;
    puVar21 = puVar21 + 1;
  }
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return (bool)uVar6;
}

// AddRequest @ 142a5e900

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall FPakPrecacher::AddRequest(FPakPrecacher *this,FPakInRequest *param_1,uint param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong64 uVar9;
  longlong lVar10;
  FRequestToLower *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  code *local_d8;
  FPakPrecacher **local_d0;
  code *local_c8;
  FPakPrecacher **local_c0;
  code *local_b8;
  FPakPrecacher **local_b0;
  FPakPrecacher *local_a8;
  FScriptContainerElement *local_a0;
  ulonglong local_98;
  ulong64 local_90;
  FPakPrecacher *local_88;
  FScriptContainerElement *local_80;
  ulonglong local_78;
  ulong64 local_70;
  FPakPrecacher *local_68;
  FScriptContainerElement *local_60;
  ulonglong local_58;
  ulong64 local_50;
  
  uVar1 = *(ushort *)((longlong)&param_1->OffsetAndPakIndex + 6);
  if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result < CachedPakData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x3c4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar12 = param_1->OffsetAndPakIndex;
  uVar15 = uVar12 & 0xffffffffffff;
  if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar16 = (this->CachedPakData).AllocatorInstance.Data + (ulonglong)uVar1 * 0x98;
  if (((((*(longlong *)(pFVar16 + 0x10) < (longlong)(param_1->Size + uVar15)) || (param_1->Size < 1)
        ) || (AIOP_CriticalPath < (byte)(char)param_1->PriorityAndFlags)) ||
      ((param_1->Status != Waiting || (param_1->Owner == (IPakRequestor *)0x0)))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset + Request.Size <= Pak.TotalSize && Request.Size > 0 && Request.GetPriority() >= AIOP_MIN && Request.GetPriority() <= AIOP_MAX && Request.Status == EInRequestStatus::Waiting && Request.Owner"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x421,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FPakPrecacher::AddRequest'::__l2::_dynamic_atexit_destructor_for__InFlightOrDone__);
    _Init_thread_footer(&`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar12 = uVar12 & 0xffffffff0000;
  uVar9 = (param_1->Size + 0xffff + uVar15 & 0xffffffffffff0000) - 1;
  lVar10 = (uVar9 - uVar12) + 0x10000;
  lVar10 = lVar10 + (ulonglong)(ushort)(lVar10 >> 0x3f);
  uVar5 = (uint)((ulonglong)lVar10 >> 0x10);
  if (((lVar10 >> 0x10 != (ulonglong)uVar5) || (lVar10 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar13 = 0;
  uVar17 = uVar5 + 0x3f >> 6;
  `private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
  ::__l2::InFlightOrDone.ArrayNum = 0;
  if ((`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
       ::__l2::InFlightOrDone.ArrayMax < 0) &&
     (`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
      ::__l2::InFlightOrDone.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
                      ::__l2::InFlightOrDone.AllocatorInstance,0,
               &`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
                ::__l2::InFlightOrDone.ArrayMax);
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar17,
                     &`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
                      ::__l2::InFlightOrDone.AllocatorInstance,
                     &`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
                      ::__l2::InFlightOrDone.ArrayNum,
                     &`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
                      ::__l2::InFlightOrDone.ArrayMax);
  memset(`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
         ::__l2::InFlightOrDone.AllocatorInstance.Data + (longlong)iVar6 * 8,0,(ulonglong)uVar17 * 8
        );
  if (uVar5 != uVar17 << 6) {
    uVar7 = 0;
    if ((int)(uVar17 - 1) <
        `private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
        ::__l2::InFlightOrDone.ArrayNum) {
      uVar7 = ~(uVar17 - 1) >> 0x1f;
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
    *(longlong *)
     (`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
      ::__l2::InFlightOrDone.AllocatorInstance.Data + (ulonglong)uVar17 * 8 + -8) =
         -1L << ((char)((ulonglong)lVar10 >> 0x10) + 0x40U & 0x3f);
  }
  uVar7 = 0;
  if (*(int *)(pFVar16 + 0x80) != 0) {
    local_d0 = &local_a8;
    param_1->Status = Complete;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPakPrecacher::AddRequest'::__l15::<lambda_1>,bool,unsigned_int>
               ::Call;
    local_a8 = this;
    local_a0 = pFVar16;
    local_98 = uVar12;
    local_90 = uVar9;
    OverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
              (*(uint *)(pFVar16 + 0x80),&this->CacheBlockAllocator,uVar12,uVar9,0,
               *(ulong64 *)(pFVar16 + 0x18),*(uint *)(pFVar16 + 0x20),*(uint *)(pFVar16 + 0x24),
               (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_d8);
    uVar14 = uVar13;
    if (uVar17 != 0) {
      do {
        uVar8 = uVar7;
        if ((int)uVar14 <
            `private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
            ::__l2::InFlightOrDone.ArrayNum) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(longlong *)
             (`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
              ::__l2::InFlightOrDone.AllocatorInstance.Data + (longlong)(int)uVar14 * 8) != -1) {
          param_1->Status = Waiting;
          break;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar17);
    }
  }
  if (param_1->Status == Waiting) {
    if (*(int *)(pFVar16 + 0x7c) != 0) {
      local_c0 = &local_88;
      param_1->Status = InFlight;
      local_c8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPakPrecacher::AddRequest'::__l26::<lambda_2>,bool,unsigned_int>
                 ::Call;
      local_88 = this;
      local_80 = pFVar16;
      local_78 = uVar12;
      local_70 = uVar9;
      OverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
                (*(uint *)(pFVar16 + 0x7c),&this->CacheBlockAllocator,uVar12,uVar9,0,
                 *(ulong64 *)(pFVar16 + 0x18),*(uint *)(pFVar16 + 0x20),*(uint *)(pFVar16 + 0x24),
                 (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_c8);
      uVar14 = uVar13;
      if (uVar5 + 0x3f >> 6 != 0) {
        do {
          uVar5 = uVar7;
          if ((int)uVar14 <
              `private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
              ::__l2::InFlightOrDone.ArrayNum) {
            uVar5 = ~uVar14 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if (*(longlong *)
               (`private:_bool___cdecl_FPakPrecacher::AddRequest(FPakPrecacher::FPakInRequest&___ptr64,unsigned_int)___ptr64'
                ::__l2::InFlightOrDone.AllocatorInstance.Data + (longlong)(int)uVar14 * 8) != -1) {
            param_1->Status = Waiting;
            break;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar17);
      }
    }
  }
  else {
    local_b0 = &local_68;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPakPrecacher::AddRequest'::__l33::<lambda_3>,bool,unsigned_int>
               ::Call;
    local_68 = this;
    local_60 = pFVar16;
    local_58 = uVar12;
    local_50 = uVar9;
    OverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
              (*(uint *)(pFVar16 + 0x7c),&this->CacheBlockAllocator,uVar12,uVar9,0,
               *(ulong64 *)(pFVar16 + 0x18),*(uint *)(pFVar16 + 0x20),*(uint *)(pFVar16 + 0x24),
               (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_b8);
  }
  AddToIntervalTree<FPakPrecacher::FPakInRequest>
            ((uint *)(pFVar16 +
                     ((ulonglong)(byte)(char)param_1->PriorityAndFlags * 3 +
                     (longlong)(int)param_1->Status) * 4 + 0x34),&this->InRequestAllocator,param_2,
             *(uint *)(pFVar16 + 0x20),*(uint *)(pFVar16 + 0x24));
  uVar5 = (this->InRequestAllocator).SaltMask;
  uVar17 = ~uVar5 & param_2;
  if (((((uVar5 & param_2) != (this->InRequestAllocator).Salt) || (uVar17 == 0)) ||
      ((uint)(this->InRequestAllocator).Items.ArrayNum <= uVar17)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x4a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((int)uVar17 < (this->InRequestAllocator).Items.ArrayNum) {
    uVar7 = ~uVar17 >> 0x1f;
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
  if ((param_1 !=
       (FPakInRequest *)
       ((this->InRequestAllocator).Items.AllocatorInstance.Data + (longlong)(int)uVar17 * 0x30)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("&Request == &InRequestAllocator.Get(NewIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x48b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (param_1->Status == Complete) {
    NotifyComplete(this,param_2);
    bVar3 = true;
  }
  else {
    if ((param_1->Status == Waiting) && (0 < GPakCache_MaxRequestsToLowerLevel)) {
      pFVar11 = this->RequestsToLower;
      do {
        if (pFVar11->RequestHandle == (IAsyncReadRequest *)0x0) {
          if ((-1 < (int)uVar13) && (bVar3 = HasRequestsAtStatus(this,Waiting), bVar3)) {
            AddNewBlock(this);
          }
          break;
        }
        uVar13 = uVar13 + 1;
        pFVar11 = pFVar11 + 1;
      } while ((int)uVar13 < GPakCache_MaxRequestsToLowerLevel);
    }
    bVar3 = false;
  }
  return bVar3;
}

// CanStartAnotherTask @ 142a60a30

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall FPakPrecacher::CanStartAnotherTask(FPakPrecacher *this)

{
  bool bVar1;
  int iVar2;
  FRequestToLower *pFVar3;
  
  iVar2 = 0;
  if (0 < GPakCache_MaxRequestsToLowerLevel) {
    pFVar3 = this->RequestsToLower;
    do {
      if (pFVar3->RequestHandle == (IAsyncReadRequest *)0x0) {
        if (iVar2 < 0) {
          return false;
        }
        bVar1 = HasRequestsAtStatus(this,Waiting);
        return bVar1;
      }
      iVar2 = iVar2 + 1;
      pFVar3 = pFVar3 + 1;
    } while (iVar2 < GPakCache_MaxRequestsToLowerLevel);
  }
  return false;
}

// CancelRequest @ 142a61100

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FPakPrecacher::CancelRequest(FPakPrecacher *this,IPakRequestor *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  IPakRequestor *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FRequestToLower *pFVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  
  if ((param_1 == (IPakRequestor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x910,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  ClearOldBlockTasks(this);
  lpCriticalSection = &this->CachedFilesScopeLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar3 = param_1->UniqueID;
  iVar12 = 0;
  if (*(int *)&(this->OutstandingRequests).field_0x8 !=
      *(int *)&(this->OutstandingRequests).field_0x34) {
    puVar10 = *(undefined1 **)&(this->OutstandingRequests).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->OutstandingRequests).field_0x38;
    }
    iVar7 = *(int *)(puVar10 +
                    ((ulonglong)(*(int *)&(this->OutstandingRequests).field_0x48 - 1) &
                    (uVar3 >> 0x20) * 0x17 + uVar3) * 4);
    if (iVar7 != -1) {
      do {
        lVar1 = *(longlong *)&this->OutstandingRequests + (longlong)iVar7 * 0x18;
        if (*(ulonglong *)(*(longlong *)&this->OutstandingRequests + (longlong)iVar7 * 0x18) ==
            uVar3) {
          if ((lVar1 != 0) && (uVar2 = *(uint *)(lVar1 + 8), uVar2 != 0)) {
            uVar8 = (this->InRequestAllocator).SaltMask;
            uVar11 = ~uVar8 & uVar2;
            if ((((uVar8 & uVar2) != (this->InRequestAllocator).Salt) ||
                ((uVar11 == 0 || ((uint)(this->InRequestAllocator).Items.ArrayNum <= uVar11)))) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                                   ,0x4a,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar8 = 0;
            if ((int)uVar11 < (this->InRequestAllocator).Items.ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar13 = (this->InRequestAllocator).Items.AllocatorInstance.Data +
                      (longlong)(int)uVar11 * 0x30;
            pIVar4 = *(IPakRequestor **)(pFVar13 + 0x10);
            if (((((param_1 != pIVar4) || (*(ulong64 *)(pFVar13 + 0x18) != pIVar4->UniqueID)) ||
                 (uVar2 != pIVar4->InRequestIndex)) ||
                (*(ulong64 *)pFVar13 != pIVar4->OffsetAndPakIndex)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Owner == Request.Owner && Request.UniqueID == Request.Owner->UniqueID && RequestIndex == Request.Owner->InRequestIndex && Request.OffsetAndPakIndex == Request.Owner->OffsetAndPakIndex"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                   ,0x919,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            RemoveRequest(this,uVar2);
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x10);
      } while (iVar7 != -1);
    }
  }
  if (0 < GPakCache_MaxRequestsToLowerLevel) {
    pFVar9 = this->RequestsToLower;
    do {
      if (pFVar9->RequestHandle == (IAsyncReadRequest *)0x0) {
        if ((-1 < iVar12) && (bVar6 = HasRequestsAtStatus(this,Waiting), bVar6)) {
          AddNewBlock(this);
        }
        break;
      }
      iVar12 = iVar12 + 1;
      pFVar9 = pFVar9 + 1;
    } while (iVar12 < GPakCache_MaxRequestsToLowerLevel);
  }
                    /* WARNING: Could not recover jumptable at 0x000142a61352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ClearBlock @ 142a636e0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakPrecacher::ClearBlock(FPakPrecacher *this,FCacheBlock *param_1)

{
  int *piVar1;
  int *piVar2;
  uchar auVar3 [8];
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_PakCacheMem> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FName local_res10;
  FName local_res18 [2];
  uint local_58 [2];
  FStatMessage local_50;
  
  if (6 < (byte)LogPakFile._0_1_) {
    UE::Logging::Private::BasicLog<7>
              (&`private:_void___cdecl_FPakPrecacher::ClearBlock(FPakPrecacher::FCacheBlock&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogPakFile);
  }
  if (param_1->Memory != (uchar *)0x0) {
    if ((param_1->Size == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Block.Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x49e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this->BlockMemory = this->BlockMemory - param_1->Size;
    auVar3 = (uchar  [8])param_1->Size;
    if (auVar3 != (uchar  [8])0x0) {
      FVar11 = StatPtr_STAT_PakCacheMem;
      if (StatPtr_STAT_PakCacheMem == (FThreadSafeStaticStat<FStat_STAT_PakCacheMem>)0x0) {
        pFVar10 = ::FName::FName(local_res18,"STAT_PakCacheMem");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_PakCacheMem>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCacheMem,*pFVar10,
                            L"PakCache Current","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true
                            ,false,ST_int64,false,false,MCR_Physical);
      }
      FVar4 = *(FName *)FVar11;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_50.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
        local_res10 = FVar4;
        local_50.StatData.Pad = auVar3;
        local_50.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_50);
        FStatsTrace::Add(&local_res10,-(longlong)auVar3);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    if ((this->BlockMemory < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("BlockMemory >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x4a1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FMemory::Free(param_1->Memory);
    param_1->Memory = (uchar *)0x0;
  }
  param_1->Next = 0;
  uVar9 = (this->CacheBlockAllocator).SaltMask;
  uVar12 = ~uVar9 & param_1->Index;
  if (((((uVar9 & param_1->Index) != (this->CacheBlockAllocator).Salt) || (uVar12 == 0)) ||
      ((uint)(this->CacheBlockAllocator).Items.ArrayNum <= uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x50,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = 0;
  if ((int)uVar12 < (this->CacheBlockAllocator).Items.ArrayNum) {
    uVar9 = ~uVar12 >> 0x1f;
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
  pFVar5 = (this->CacheBlockAllocator).FreeItems.AllocatorInstance.Data;
  local_58[0] = uVar12;
  if (((pFVar5 <= (FScriptContainerElement *)local_58) &&
      ((FScriptContainerElement *)local_58 <
       pFVar5 + (longlong)(this->CacheBlockAllocator).FreeItems.ArrayMax * 4)) &&
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
  iVar8 = (this->CacheBlockAllocator).FreeItems.ArrayNum;
  piVar1 = &(this->CacheBlockAllocator).FreeItems.ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->CacheBlockAllocator).FreeItems.AllocatorInstance,piVar1);
  }
  (this->CacheBlockAllocator).FreeItems.ArrayNum = iVar8 + 1;
  *(uint *)((this->CacheBlockAllocator).FreeItems.AllocatorInstance.Data + (longlong)iVar8 * 4) =
       local_58[0];
  if ((this->CacheBlockAllocator).FreeItems.ArrayNum + 1 ==
      (this->CacheBlockAllocator).Items.ArrayNum) {
    piVar2 = &(this->CacheBlockAllocator).Items.ArrayMax;
    (this->CacheBlockAllocator).Items.ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)&this->CacheBlockAllocator,0,piVar2);
    }
    (this->CacheBlockAllocator).FreeItems.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->CacheBlockAllocator).FreeItems.AllocatorInstance,0,piVar1);
    }
    uVar9 = TIntervalTreeAllocator<FPakPrecacher::FCacheBlock>::Alloc(&this->CacheBlockAllocator);
    if (((uVar9 & ~(this->CacheBlockAllocator).SaltMask) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Alloc() & ~SaltMask) == IntervalTreeInvalidIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                           ,0x58,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// ClearOldBlockTasks @ 142a63b00

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FPakPrecacher::ClearOldBlockTasks(FPakPrecacher *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<IAsyncReadRequest_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  if (this->NotifyRecursion == 0) {
    lpCriticalSection = &this->CachedFilesScopeLock;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = 0;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = &this->RequestsToDelete;
    if ((TArray<IAsyncReadRequest_*,TSizedDefaultAllocator<32>_> *)&local_28 != pTVar1) {
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
      local_28.Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_20._0_4_ = (this->RequestsToDelete).ArrayNum;
      local_20._4_4_ = (this->RequestsToDelete).ArrayMax;
      (this->RequestsToDelete).ArrayNum = 0;
      (this->RequestsToDelete).ArrayMax = 0;
    }
    if (((this->RequestsToDelete).ArrayNum != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("RequestsToDelete.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x75c,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar6 = (int)local_20;
    uVar8 = (ulonglong)(int)local_20;
    pFVar2 = local_28.Data + uVar8 * 8;
    FVar9.Data = local_28.Data;
    while( true ) {
      if ((int)uVar8 != iVar6) {
        `TCheckedPointerIterator<IAsyncReadRequest_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar9.Data == pFVar2) break;
      puVar4 = *(undefined8 **)FVar9.Data;
      cVar3 = *(char *)((longlong)puVar4 + 0x41);
      while (cVar3 == '\0') {
        FWindowsPlatformProcess::Sleep(0.0);
        cVar3 = *(char *)((longlong)puVar4 + 0x41);
      }
      (**(code **)*puVar4)(puVar4,1);
      uVar8 = local_20 & 0xffffffff;
      FVar9.Data = FVar9.Data + 8;
    }
    uVar8 = local_20 >> 0x20;
    local_20 = local_20 & 0xffffffff00000000;
    if ((int)uVar8 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_28,0,(int *)((longlong)&local_20 + 4));
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return;
}

// ClearRequest @ 142a63c80

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FPakPrecacher::ClearRequest(FPakPrecacher *this,FPakInRequest *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong64 local_res8;
  uint local_18 [4];
  
  local_res8 = param_1->UniqueID;
  uVar8 = param_1->Index;
  param_1->OffsetAndPakIndex = 0;
  param_1->Size = 0;
  param_1->Owner = (IPakRequestor *)0x0;
  param_1->UniqueID = 0;
  param_1->Index = 0;
  param_1->Next = 0;
  param_1->PriorityAndFlags = AIOP_MIN;
  param_1->Status = Num;
  if (*(int *)&(this->OutstandingRequests).field_0x8 !=
      *(int *)&(this->OutstandingRequests).field_0x34) {
    iVar7 = TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
            ::RemoveImpl<unsigned___int64>
                      ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                        *)&this->OutstandingRequests,
                       (int)(local_res8 >> 0x20) * 0x17 + (int)local_res8,&local_res8);
    if (iVar7 == 1) goto LAB_142a63d13;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("OutstandingRequests.Remove(Id) == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                     ,0x4b8,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_142a63d13:
  LOCK();
  (this->RequestCounter).Counter = (this->RequestCounter).Counter + -1;
  UNLOCK();
  uVar3 = (this->InRequestAllocator).SaltMask;
  uVar9 = ~uVar3 & uVar8;
  if ((((uVar3 & uVar8) != (this->InRequestAllocator).Salt) || (uVar9 == 0)) ||
     ((uint)(this->InRequestAllocator).Items.ArrayNum <= uVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x50,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar8 = 0;
  if ((int)uVar9 < (this->InRequestAllocator).Items.ArrayNum) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
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
  pFVar4 = (this->InRequestAllocator).FreeItems.AllocatorInstance.Data;
  local_18[0] = uVar9;
  if ((pFVar4 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar4 + (longlong)(this->InRequestAllocator).FreeItems.ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->InRequestAllocator).FreeItems.ArrayNum;
  piVar1 = &(this->InRequestAllocator).FreeItems.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->InRequestAllocator).FreeItems.AllocatorInstance,piVar1);
  }
  (this->InRequestAllocator).FreeItems.ArrayNum = iVar7 + 1;
  *(uint *)((this->InRequestAllocator).FreeItems.AllocatorInstance.Data + (longlong)iVar7 * 4) =
       local_18[0];
  if ((this->InRequestAllocator).FreeItems.ArrayNum + 1 == (this->InRequestAllocator).Items.ArrayNum
     ) {
    piVar2 = &(this->InRequestAllocator).Items.ArrayMax;
    (this->InRequestAllocator).Items.ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)&this->InRequestAllocator,0,piVar2);
    }
    (this->InRequestAllocator).FreeItems.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->InRequestAllocator).FreeItems.AllocatorInstance,0,piVar1);
    }
    uVar8 = TIntervalTreeAllocator<FPakPrecacher::FPakInRequest>::Alloc(&this->InRequestAllocator);
    if ((uVar8 & ~(this->InRequestAllocator).SaltMask) != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Alloc() & ~SaltMask) == IntervalTreeInvalidIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x58,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  return;
}

// CompleteRequest @ 142a64620

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakPrecacher::CompleteRequest(FPakPrecacher *this,bool param_1,uchar *param_2,uint param_3)

{
  TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> *pTVar1;
  uint *puVar2;
  ushort uVar3;
  FScriptContainerElement *pFVar4;
  uchar auVar5 [8];
  FName FVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_PakCacheMem> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FThreadSafeStaticStat<FStat_STAT_PakCacheHighWater> FVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  FCacheBlock *pFVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  uint *puVar24;
  undefined1 local_res20 [8];
  uint *local_a0;
  ulonglong local_98;
  FName local_90;
  ulonglong local_88;
  FStatMessage local_80;
  FPakPrecacher *local_70;
  uint **local_68;
  code *local_60;
  FPakPrecacher **local_58;
  FName local_50;
  FName local_48 [2];
  
  pTVar1 = &this->CacheBlockAllocator;
  uVar14 = (this->CacheBlockAllocator).SaltMask;
  uVar17 = ~uVar14 & param_3;
  if (((((uVar14 & param_3) != (this->CacheBlockAllocator).Salt) || (uVar17 == 0)) ||
      ((uint)(this->CacheBlockAllocator).Items.ArrayNum <= uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x4a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar14 = 0;
  if ((int)uVar17 < (this->CacheBlockAllocator).Items.ArrayNum) {
    uVar14 = ~uVar17 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar21 = (FCacheBlock *)((pTVar1->Items).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x30);
  uVar3 = *(ushort *)((longlong)&pFVar21->OffsetAndPakIndex + 6);
  if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result < CachedPakData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x3c4,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_88 = pFVar21->OffsetAndPakIndex & 0xffffffffffff;
  if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = (this->CachedPakData).AllocatorInstance.Data;
  if (((pFVar21->Memory != (uchar *)0x0) || (pFVar21->Size == 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Block.Memory && Block.Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x7e4,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bWasCanceled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x7e5,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar14 = *(uint *)(pFVar4 + (ulonglong)uVar3 * 0x98 + 0x24);
  uVar17 = pFVar21->Index;
  uVar20 = *(uint *)(pFVar4 + (ulonglong)uVar3 * 0x98 + 0x20);
  uVar9 = (this->CacheBlockAllocator).SaltMask;
  uVar18 = ~uVar9 & uVar17;
  if (((((uVar9 & uVar17) != (this->CacheBlockAllocator).Salt) || (uVar18 == 0)) ||
      ((uint)(this->CacheBlockAllocator).Items.ArrayNum <= uVar18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x4a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = 0;
  if ((int)uVar18 < (this->CacheBlockAllocator).Items.ArrayNum) {
    uVar9 = ~uVar18 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar23 = (pTVar1->Items).AllocatorInstance.Data;
  uVar22 = *(ulonglong *)(pFVar23 + (longlong)(int)uVar18 * 0x30) & 0xffffffffffff;
  bVar8 = RemoveFromIntervalTree<FPakPrecacher::FCacheBlock>
                    ((uint *)(pFVar4 + (ulonglong)uVar3 * 0x98 + 0x7c),pTVar1,uVar17,uVar22,
                     (uVar22 - 1) + *(longlong *)(pFVar23 + (longlong)(int)uVar18 * 0x30 + 8),uVar20
                     ,uVar14);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x7e9,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((pFVar21->InRequestRefCount == 0) || (param_1)) {
    if ((pFVar21->Size < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Block.Size > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x7ee,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FMemory::Free(param_2);
    if (6 < (byte)LogPakFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`private:_void___cdecl_FPakPrecacher::CompleteRequest(bool,unsigned_char*___ptr64,unsigned_int)___ptr64'
                  ::__l37::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
    ClearBlock(this,pFVar21);
  }
  else {
    pFVar21->Memory = param_2;
    if (((param_2 == (uchar *)0x0) || (pFVar21->Size == 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Block.Memory && Block.Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x7f6,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this->BlockMemory = this->BlockMemory + pFVar21->Size;
    if ((this->BlockMemory < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("BlockMemory > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x7f8,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((pFVar21->Size < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Block.Size > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x7f9,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    auVar5 = (uchar  [8])pFVar21->Size;
    if (auVar5 != (uchar  [8])0x0) {
      FVar11 = StatPtr_STAT_PakCacheMem;
      if (StatPtr_STAT_PakCacheMem == (FThreadSafeStaticStat<FStat_STAT_PakCacheMem>)0x0) {
        pFVar10 = ::FName::FName(&local_50,"STAT_PakCacheMem");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_PakCacheMem>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCacheMem,*pFVar10,
                            L"PakCache Current","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true
                            ,false,ST_int64,false,false,MCR_Physical);
      }
      FVar6 = *(FName *)FVar11;
      if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_80.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
        local_90 = FVar6;
        local_80.StatData.Pad = auVar5;
        local_80.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_80);
        FStatsTrace::Add(&local_90,(long64)auVar5);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    if (this->BlockMemoryHighWater < this->BlockMemory) {
      this->BlockMemoryHighWater = this->BlockMemory;
      FVar12 = StatPtr_STAT_PakCacheHighWater;
      if (StatPtr_STAT_PakCacheHighWater == (FThreadSafeStaticStat<FStat_STAT_PakCacheHighWater>)0x0
         ) {
        pFVar10 = ::FName::FName(local_48,"STAT_PakCacheHighWater");
        FVar12 = (FThreadSafeStaticStat<FStat_STAT_PakCacheHighWater>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCacheHighWater,*pFVar10,
                            L"PakCache High Water","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                            true,false,ST_int64,false,false,MCR_Physical);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar12,Set,this->BlockMemoryHighWater,false);
      lVar13 = (longlong)
               (this->BlockMemoryHighWater +
               (ulonglong)((uint)(this->BlockMemoryHighWater >> 0x3f) & 0xffffff)) >> 0x18;
      if ((lVar13 != `private:_void___cdecl_FPakPrecacher::CompleteRequest(bool,unsigned_char*___ptr64,unsigned_int)___ptr64'
                     ::__l87::LastPrint) &&
         (`private:_void___cdecl_FPakPrecacher::CompleteRequest(bool,unsigned_char*___ptr64,unsigned_int)___ptr64'
          ::__l87::LastPrint = lVar13, 4 < (byte)LogPakFile._0_1_)) {
        UE::Logging::Private::BasicLog<5>
                  (&`private:_void___cdecl_FPakPrecacher::CompleteRequest(bool,unsigned_char*___ptr64,unsigned_int)___ptr64'
                    ::__l95::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
    }
    pFVar21->Status = Complete;
    AddToIntervalTree<FPakPrecacher::FCacheBlock>
              ((uint *)(pFVar4 + (ulonglong)uVar3 * 0x98 + 0x80),&this->CacheBlockAllocator,
               pFVar21->Index,*(uint *)(pFVar4 + (ulonglong)uVar3 * 0x98 + 0x20),
               *(uint *)(pFVar4 + (ulonglong)uVar3 * 0x98 + 0x24));
    pFVar23 = pFVar4 + (ulonglong)uVar3 * 0x98 + 0x78;
    local_a0 = (uint *)0x0;
    local_98 = 0;
    iVar19 = 5;
    while( true ) {
      if (*(int *)pFVar23 != 0) {
        local_68 = &local_a0;
        local_58 = &local_70;
        local_60 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FPakPrecacher::CompleteRequest'::__l117::<lambda_1>,bool,unsigned_int>
                   ::Call;
        local_70 = this;
        MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
                  ((uint *)(pFVar4 + ((longlong)iVar19 + 5) * 0xc + (ulonglong)uVar3 * 0x98),
                   &this->InRequestAllocator,local_88,(local_88 - 1) + pFVar21->Size,0,
                   *(ulong64 *)(pFVar4 + (ulonglong)uVar3 * 0x98 + 0x18),
                   *(uint *)(pFVar4 + (ulonglong)uVar3 * 0x98 + 0x20),
                   *(uint *)(pFVar4 + (ulonglong)uVar3 * 0x98 + 0x24),
                   (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_60);
      }
      uVar22 = local_98;
      if (iVar19 == 0) break;
      iVar19 = iVar19 + -1;
      pFVar23 = pFVar23 + -0xc;
    }
    uVar15 = (ulonglong)(int)local_98;
    puVar2 = local_a0 + uVar15;
    uVar16 = uVar15;
    puVar24 = local_a0;
    while( true ) {
      if ((int)uVar15 != (int)uVar16) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (puVar24 == puVar2) break;
      uVar14 = (this->InRequestAllocator).SaltMask;
      uVar17 = *puVar24;
      uVar20 = ~uVar14 & uVar17;
      if (((((uVar14 & uVar17) != (this->InRequestAllocator).Salt) || (uVar20 == 0)) ||
          ((uint)(this->InRequestAllocator).Items.ArrayNum <= uVar20)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                             ,0x4a,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar14 = 0;
      if ((int)uVar20 < (this->InRequestAllocator).Items.ArrayNum) {
        uVar14 = ~uVar20 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar23 = (this->InRequestAllocator).Items.AllocatorInstance.Data;
      *(undefined4 *)(pFVar23 + (longlong)(int)uVar20 * 0x30 + 0x2c) = 0;
      AddToIntervalTree<FPakPrecacher::FPakInRequest>
                ((uint *)(pFVar4 + (ulonglong)(byte)pFVar23[(longlong)(int)uVar20 * 0x30 + 0x28] *
                                   0xc + 0x34 + (ulonglong)uVar3 * 0x98),&this->InRequestAllocator,
                 uVar17,*(uint *)(pFVar4 + (ulonglong)uVar3 * 0x98 + 0x20),
                 *(uint *)(pFVar4 + (ulonglong)uVar3 * 0x98 + 0x24));
      NotifyComplete(this,uVar17);
      uVar15 = local_98 & 0xffffffff;
      puVar24 = puVar24 + 1;
      uVar16 = uVar22 & 0xffffffff;
    }
    if (local_a0 != (uint *)0x0) {
      FMemory::Free(local_a0);
    }
  }
  TrimCache(this,false,0xffff);
  return;
}

// DoSignatureCheck @ 142a69600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakPrecacher::DoSignatureCheck
          (FPakPrecacher *this,bool param_1,IAsyncReadRequest *param_2,int param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FName FVar4;
  code *pcVar5;
  uchar auVar6 [8];
  double dVar7;
  bool bVar8;
  uint uVar9;
  uchar *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_PakCache_SigningChunkHashTime> FVar14;
  FString *pFVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_PakCache_SigningChunkHashSize> FVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uchar auVar23 [8];
  uint *puVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 auStackY_258 [32];
  ulonglong local_1f0;
  uchar local_1e0 [8];
  uchar *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  LARGE_INTEGER local_180;
  LARGE_INTEGER local_178;
  FName local_170;
  FName local_168;
  IAsyncReadRequest *local_160;
  FString local_158;
  FString local_148;
  FStatMessage local_138;
  FStatMessage local_128;
  FPakChunkSignatureCheckFailedData local_118;
  FName local_f8;
  FName local_f0;
  FString local_e8;
  longlong local_d8;
  longlong lStack_d0;
  int local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined4 local_b4;
  uint local_a8 [16];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_258;
  lpCriticalSection = &this->CachedFilesScopeLock;
  local_b4 = 0;
  local_c4 = 0;
  uStack_bc = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  local_a8[0xc] = 0;
  local_a8[0xd] = 0;
  local_a8[0xe] = 0;
  local_a8[0xf] = 0;
  local_160 = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this->RequestsToLower[param_3].RequestHandle = param_2;
  puVar10 = IAsyncReadRequest::GetReadResults(param_2);
  this->RequestsToLower[param_3].Memory = puVar10;
  uVar11 = this->RequestsToLower[param_3].RequestSize + 0xffff;
  lVar12 = (longlong)((uVar11 & 0xffffffffffff0000) + (ulonglong)(ushort)((longlong)uVar11 >> 0x3f))
           >> 0x10;
  if ((lVar12 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSignaturesToCheck >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xc3f,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar19 = (this->CacheBlockAllocator).SaltMask;
  uVar21 = this->RequestsToLower[param_3].BlockIndex;
  uVar20 = ~uVar19 & uVar21;
  if (((((uVar19 & uVar21) != (this->CacheBlockAllocator).Salt) || (uVar20 == 0)) ||
      ((uint)(this->CacheBlockAllocator).Items.ArrayNum <= uVar20)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x4a,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar19 = 0;
  if ((int)uVar20 < (this->CacheBlockAllocator).Items.ArrayNum) {
    uVar19 = ~uVar20 >> 0x1f;
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
  pFVar2 = (this->CacheBlockAllocator).Items.AllocatorInstance.Data;
  uVar11 = *(ulonglong *)(pFVar2 + (longlong)(int)uVar20 * 0x30) & 0xffffffffffff;
  if (((short)uVar11 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(RequestOffset % FPakInfo::MaxChunkDataSize) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xc43,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar1 = *(ushort *)(pFVar2 + (longlong)(int)uVar20 * 0x30 + 6);
  uVar22 = (ulonglong)uVar1;
  local_1e0 = (uchar  [8])this->RequestsToLower[param_3].RequestSize;
  if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result < CachedPakData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x3c4,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_1d8 = this->RequestsToLower[param_3].Memory;
  local_1f0 = uVar11 >> 0x10;
  uVar19 = (uint)(uVar11 >> 0x10);
  uVar11 = (ulonglong)(int)uVar19;
  if ((local_1f0 != uVar11) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = (this->CachedPakData).AllocatorInstance.Data;
  lVar27 = uVar22 * 0x98;
  if ((*(longlong *)(pFVar2 + lVar27 + 0x88) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar26 = *(longlong *)(pFVar2 + lVar27 + 0x88);
  local_c4 = *(undefined8 *)(lVar26 + 0x18);
  uStack_bc = *(undefined8 *)(lVar26 + 0x20);
  local_b4 = *(undefined4 *)(lVar26 + 0x28);
  lVar26 = 0x10;
  if (lVar12 < 0x10) {
    lVar26 = lVar12;
  }
  if (0 < lVar26) {
    puVar24 = local_a8;
    uVar21 = uVar19;
    do {
      if ((*(longlong *)(pFVar2 + lVar27 + 0x88) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)(pFVar2 + lVar27 + 0x88);
      uVar20 = 0;
      if ((int)uVar21 < *(int *)(lVar3 + 0x48)) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar21 = uVar21 + 1;
      *puVar24 = *(uint *)((longlong)puVar24 +
                          *(longlong *)(lVar3 + 0x40) + (uVar11 * 4 - (longlong)local_a8));
      puVar24 = puVar24 + 1;
    } while ((int)(uVar21 - uVar19) < lVar26);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((local_1d8 == (uchar *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xc52,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((lVar12 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSignaturesToCheck > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xc53,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((longlong)local_1e0 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequestSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xc54,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_1d0 = 0;
  if (0 < lVar12) {
    local_1c8 = uVar11 * 4;
    iVar25 = -uVar19;
    do {
      auVar23[0] = '\0';
      auVar23[1] = '\0';
      auVar23[2] = '\x01';
      auVar23[3] = '\0';
      auVar23[4] = '\0';
      auVar23[5] = '\0';
      auVar23[6] = '\0';
      auVar23[7] = '\0';
      if ((longlong)local_1e0 < 0x10000) {
        auVar23 = local_1e0;
      }
      uVar21 = (uint)local_1f0;
      uVar19 = (uint)(local_1d0 >> 0x3f);
      if ((0 < local_1d0) && (uVar20 = uVar19 & 0xf, ((int)local_1d0 + uVar20 & 0xf) == uVar20)) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar24 = local_a8;
        pFVar2 = (this->CachedPakData).AllocatorInstance.Data;
        uVar20 = uVar21;
        do {
          if (lVar12 <= (int)(uVar20 + iVar25) + local_1d0) break;
          if ((*(longlong *)(pFVar2 + uVar22 * 0x98 + 0x88) == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar27 = *(longlong *)(pFVar2 + uVar22 * 0x98 + 0x88);
          uVar9 = 0;
          if ((int)uVar20 < *(int *)(lVar27 + 0x48)) {
            uVar9 = ~uVar20 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          uVar20 = uVar20 + 1;
          *puVar24 = *(uint *)((longlong)puVar24 +
                              *(longlong *)(lVar27 + 0x40) + (local_1c8 - (longlong)local_a8));
          puVar24 = puVar24 + 1;
        } while ((int)(uVar20 + iVar25) < 0x10);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      FVar14 = StatPtr_STAT_PakCache_SigningChunkHashTime;
      if (StatPtr_STAT_PakCache_SigningChunkHashTime ==
          (FThreadSafeStaticStat<FStat_STAT_PakCache_SigningChunkHashTime>)0x0) {
        pFVar13 = ::FName::FName(&local_f8,"STAT_PakCache_SigningChunkHashTime");
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_PakCache_SigningChunkHashTime>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCache_SigningChunkHashTime
                            ,*pFVar13,L"PakCache Signing Chunk Hash Time","STATGROUP_PakFile",
                            "STATCAT_Advanced",L"Pak File",true,false,NumBits,false,false,
                            MCR_Invalid);
      }
      QueryPerformanceCounter(&local_180);
      dVar7 = (double)local_180.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      if ((auVar23 != (uchar  [8])(longlong)auVar23._0_4_) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8
         )) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar20 = (*FCrc::MemCrc32Func)(local_1d8,auVar23._0_4_,0);
      uVar19 = uVar19 & 0xf;
      lVar27 = (ulonglong)((int)local_1d0 + uVar19 & 0xf) - (ulonglong)uVar19;
      if (uVar20 != local_a8[lVar27]) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (this->CachedPakData).AllocatorInstance.Data;
        if (2 < (byte)LogPakFile._0_1_) {
          ::FString::PrintfImpl(&local_148,L"%08X");
          if ((*(longlong *)(pFVar2 + uVar22 * 0x98 + 0x88) == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar19 = 0;
          if ((int)uVar21 < *(int *)(*(longlong *)(pFVar2 + uVar22 * 0x98 + 0x88) + 0x48)) {
            uVar19 = ~uVar21 >> 0x1f;
          }
          if ((uVar19 == 0) &&
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
          ::FString::PrintfImpl(&local_158,L"%08X");
          if ((*(longlong *)(pFVar2 + uVar22 * 0x98 + 0x88) == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
        }
        if ((*(longlong *)(pFVar2 + uVar22 * 0x98 + 0x88) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_d8 = 0;
        lStack_d0 = 0;
        local_c8 = 0;
        FSHA1::HashBuffer(*(void **)(*(longlong *)(pFVar2 + uVar22 * 0x98 + 0x88) + 0x40),
                          (longlong)*(int *)(*(longlong *)(pFVar2 + uVar22 * 0x98 + 0x88) + 0x48) <<
                          2,(uchar *)&local_d8);
        if ((*(longlong *)(pFVar2 + uVar22 * 0x98 + 0x88) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar26 = *(longlong *)(pFVar2 + uVar22 * 0x98 + 0x88);
        if ((((*(longlong *)(lVar26 + 0x18) != local_d8) ||
             (*(longlong *)(lVar26 + 0x20) != lStack_d0)) || (*(int *)(lVar26 + 0x28) != local_c8))
           && (2 < (byte)LogPakFile._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        pFVar15 = ::FName::ToString((FName *)(pFVar2 + uVar22 * 0x98 + 0x2c),&local_e8);
        ::FString::FString(&local_118.PakFilename,pFVar15);
        local_118.ExpectedHash = local_a8[lVar27];
        local_118.ChunkIndex = uVar21;
        local_118.ReceivedHash = uVar20;
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        FPakPlatformFile::BroadcastPakChunkSignatureCheckFailure(&local_118);
        if (local_118.PakFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.PakFilename.Data.AllocatorInstance.Data);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      QueryPerformanceCounter(&local_178);
      FVar4 = *(FName *)FVar14;
      auVar6 = (uchar  [8])
               ((double)local_178.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7);
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar16 == (FThreadStats *)0x0) {
          pFVar17 = FThreadStatsPool::Get();
          pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
        }
        local_138.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
        local_170 = FVar4;
        local_138.StatData.Pad = auVar6;
        local_138.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar16,&local_138);
        FStatsTrace::Add(&local_170,(double)auVar6);
        if (pFVar16->ScopeCount == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
      if (auVar23 != (uchar  [8])0x0) {
        FVar18 = StatPtr_STAT_PakCache_SigningChunkHashSize;
        if (StatPtr_STAT_PakCache_SigningChunkHashSize ==
            (FThreadSafeStaticStat<FStat_STAT_PakCache_SigningChunkHashSize>)0x0) {
          pFVar13 = ::FName::FName(&local_f0,"STAT_PakCache_SigningChunkHashSize");
          FVar18 = (FThreadSafeStaticStat<FStat_STAT_PakCache_SigningChunkHashSize>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_PakCache_SigningChunkHashSize,*pFVar13,
                              L"PakCache Signing Chunk Hash Size","STATGROUP_PakFile",
                              "STATCAT_Advanced",L"Pak File",true,false,ST_int64,false,false,
                              MCR_Physical);
        }
        FVar4 = *(FName *)FVar18;
        if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar16 == (FThreadStats *)0x0) {
            pFVar17 = FThreadStatsPool::Get();
            pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
          }
          local_128.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
          local_168 = FVar4;
          local_128.StatData.Pad = auVar23;
          local_128.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar16,&local_128);
          FStatsTrace::Add(&local_168,(long64)auVar23);
          if (pFVar16->ScopeCount == 0) {
            FThreadStats::Flush(pFVar16,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar16,false,false);
          }
        }
      }
      local_1e0 = (uchar  [8])((longlong)local_1e0 - (longlong)auVar23);
      local_1d0 = local_1d0 + 1;
      local_1f0 = (ulonglong)(uVar21 + 1);
      local_1d8 = local_1d8 + (longlong)auVar23;
      iVar25 = iVar25 + -1;
      local_1c8 = local_1c8 + 4;
    } while (local_1d0 < lVar12);
  }
  NewRequestsToLowerComplete(this,param_1,local_160,param_3);
  return;
}

// DumpBlocks @ 142a6a8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakPrecacher::DumpBlocks(FPakPrecacher *this)

{
  FWindowsRecursiveMutex *pFVar1;
  int *piVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  float fVar6;
  FPakPrecacher *this_00;
  bool bVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FStaticBasicLogRecord *pFVar10;
  FName FVar11;
  bool bVar12;
  FColor_u_0 local_res10 [4];
  FName local_res20;
  LARGE_INTEGER local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FStatMessage local_58 [2];
  
  fVar6 = __real_3a83126f;
  while( true ) {
    if ((PakPrecacherSingleton == (FPakPrecacher *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PakPrecacherSingleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x33f,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = PakPrecacherSingleton;
    pFVar1 = &PakPrecacherSingleton->CachedFilesScopeLock;
    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_142a6ac9b;
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    bVar7 = HasRequestsAtStatus(this_00,Waiting);
    if ((!bVar7) && (bVar7 = HasRequestsAtStatus(this_00,InFlight), !bVar7)) break;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FPakPrecacher::DumpBlocks(void)___ptr64'::__l4::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FPakPrecacher::DumpBlocks(void)___ptr64'::__l4::
                             _thread_safe_static_guard_0__),
       `public:_void___cdecl_FPakPrecacher::DumpBlocks(void)___ptr64'::__l4::
       _thread_safe_static_guard_0__ == -1)) {
      _StatPtr_STAT_WaitDumpBlocks = (TStatIdData *)0x0;
      pFVar8 = ::FName::FName(&local_78,"STAT_WaitDumpBlocks");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &`public:_void___cdecl_FPakPrecacher::DumpBlocks(void)___ptr64'::__l4::
                  StatPtr_STAT_WaitDumpBlocks,*pFVar8,L"STAT_WaitDumpBlocks","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&`public:_void___cdecl_FPakPrecacher::DumpBlocks(void)___ptr64'::__l4::
                           _thread_safe_static_guard_0__);
    }
    pTVar9 = _StatPtr_STAT_WaitDumpBlocks;
    if (_StatPtr_STAT_WaitDumpBlocks == (TStatIdData *)0x0) {
      pFVar8 = ::FName::FName(&local_70,"STAT_WaitDumpBlocks");
      pTVar9 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_void___cdecl_FPakPrecacher::DumpBlocks(void)___ptr64'::__l4::
                           StatPtr_STAT_WaitDumpBlocks,*pFVar8,L"STAT_WaitDumpBlocks",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
    }
    FVar3 = *(FName *)&pTVar9->Name;
    bVar7 = false;
    bVar5 = false;
    local_68.ComparisonIndex.Value = 0;
    local_68.Number = 0;
    if ((FVar3.ComparisonIndex.Value.Value == 0) && (FVar3.Number == 0)) {
      FWindowsPlatformProcess::SleepNoStats(fVar6);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res10[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res10[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
        bVar7 = false;
        bVar5 = true;
        if (-1 < CpuChannel->Enabled) {
          local_res20.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
          local_res20.Number = FVar3.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_res20,(pTVar9->StatDescriptionWide).Ptr,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                     ,0x9d1);
          bVar7 = true;
          bVar5 = true;
        }
      }
      bVar12 = FThreadStats::bPrimaryEnable != false;
      FVar11 = local_68;
      if (bVar12) {
        local_68 = FVar3;
        FThreadStats::AddMessage(FVar3,CycleScopeStart);
        FVar11 = FVar3;
      }
      FWindowsPlatformProcess::SleepNoStats(fVar6);
      if (bVar5) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar12) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
          local_58[0].NameAndInfo.Index = FVar11.ComparisonIndex.Value;
          local_58[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_80);
          local_58[0].StatData.Pad[4] = '\0';
          local_58[0].StatData.Pad[5] = '\0';
          local_58[0].StatData.Pad[6] = '\0';
          local_58[0].StatData.Pad[7] = '\0';
          local_58[0].StatData.Pad[0] = local_80.s.LowPart._0_1_;
          local_58[0].StatData.Pad[1] = local_80.s.LowPart._1_1_;
          local_58[0].StatData.Pad[2] = local_80.s.LowPart._2_1_;
          local_58[0].StatData.Pad[3] = local_80.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_01,local_58);
          piVar2 = &this_01->ScopeCount;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FThreadStats::Flush(this_01,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  pFVar1 = &this->CachedFilesScopeLock;
  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_142a6ac9b:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  bVar7 = HasRequestsAtStatus(this,Waiting);
  if (((bVar7) || (bVar7 = HasRequestsAtStatus(this,InFlight), bVar7)) ||
     (bVar7 = HasRequestsAtStatus(this,Complete), bVar7)) {
    if ((byte)LogPakFile._0_1_ < 5) goto LAB_142a6ac5e;
    pFVar10 = &`public:_void___cdecl_FPakPrecacher::DumpBlocks(void)___ptr64'::__l8::LOG_Static;
  }
  else {
    if ((byte)LogPakFile._0_1_ < 5) goto LAB_142a6ac5e;
    pFVar10 = &`public:_void___cdecl_FPakPrecacher::DumpBlocks(void)___ptr64'::__l28::LOG_Static;
  }
  UE::Logging::Private::BasicLog<5>(pFVar10,(FLogCategoryBase *)&LogPakFile);
LAB_142a6ac5e:
                    /* WARNING: Could not recover jumptable at 0x000142a6ac83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  return;
}

// FirstUnfilledBlockForRequest @ 142a70f50

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

ulong64 __thiscall
FPakPrecacher::FirstUnfilledBlockForRequest(FPakPrecacher *this,uint param_1,ulong64 param_2)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong64 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  code *local_b0;
  TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> **local_a8;
  code *local_a0;
  TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> **local_98;
  TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> *local_90;
  ulonglong local_88;
  ulong64 local_80;
  undefined4 local_78;
  FScriptContainerElement *local_70;
  TIntervalTreeAllocator<FPakPrecacher::FCacheBlock> *local_68;
  ulonglong local_60;
  ulong64 local_58;
  undefined4 local_50;
  FScriptContainerElement *local_48;
  
  uVar6 = (this->InRequestAllocator).SaltMask;
  uVar13 = ~uVar6 & param_1;
  if (((((uVar6 & param_1) != (this->InRequestAllocator).Salt) || (uVar13 == 0)) ||
      ((uint)(this->InRequestAllocator).Items.ArrayNum <= uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x4a,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  uVar12 = 0;
  uVar6 = 0;
  if ((int)uVar13 < (this->InRequestAllocator).Items.ArrayNum) {
    uVar6 = ~uVar13 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  pFVar18 = (this->InRequestAllocator).Items.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30;
  uVar1 = *(ushort *)(pFVar18 + 6);
  uVar19 = (ulonglong)uVar1;
  if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result < CachedPakData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x3c4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  uVar11 = *(ulonglong *)pFVar18;
  uVar20 = *(ulonglong *)(pFVar18 + 8);
  uVar15 = uVar11 & 0xffffffffffff;
  if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  pFVar2 = (this->CachedPakData).AllocatorInstance.Data;
  if (((((*(longlong *)(pFVar2 + uVar19 * 0x98 + 0x10) <
          (longlong)(*(ulonglong *)(pFVar18 + 8) + uVar15)) || ((longlong)uVar20 < 1)) ||
       (5 < (byte)pFVar18[0x28])) ||
      ((*(int *)(pFVar18 + 0x2c) == 0 || (*(ulonglong *)(pFVar18 + 0x10) == 0)))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset + Request.Size <= Pak.TotalSize && Size > 0 && Request.GetPriority() >= AIOP_MIN && Request.GetPriority() <= AIOP_MAX && Request.Status != EInRequestStatus::Complete && Request.Owner"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x3d0,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  uVar4 = (ushort)(param_2 >> 0x30);
  if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result < CachedPakData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x3c4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  uVar10 = uVar12;
  if (uVar1 == uVar4) {
    uVar10 = param_2;
  }
  uVar16 = uVar15;
  if (uVar10 != 0) {
    if ((uVar10 & 0xffffffffffff) < uVar15) {
      uVar10 = uVar11;
    }
    uVar16 = uVar10 & 0xffffffffffff;
    uVar20 = uVar20 + (uVar15 - uVar16);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FPakPrecacher::FirstUnfilledBlockForRequest'::__l2::
           _dynamic_atexit_destructor_for__InFlightOrDone__);
    _Init_thread_footer(&`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar11 = uVar16 & 0xffffffffffff0000;
  uVar8 = (uVar16 + 0xffff + uVar20 & 0xffffffffffff0000) - 1;
  lVar9 = (uVar8 - uVar11) + 0x10000;
  lVar9 = lVar9 + (ulonglong)(ushort)(lVar9 >> 0x3f);
  uVar6 = (uint)((ulonglong)lVar9 >> 0x10);
  if (((lVar9 >> 0x10 != (ulonglong)uVar6) || (lVar9 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  uVar13 = uVar6 + 0x3f >> 6;
  `private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
  ::__l2::InFlightOrDone.ArrayNum = 0;
  if ((`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
       ::__l2::InFlightOrDone.ArrayMax < 0) &&
     (`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
      ::__l2::InFlightOrDone.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
                      ::__l2::InFlightOrDone.AllocatorInstance,0,
               &`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
                ::__l2::InFlightOrDone.ArrayMax);
  }
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar13,
                     &`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
                      ::__l2::InFlightOrDone.AllocatorInstance,
                     &`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
                      ::__l2::InFlightOrDone.ArrayNum,
                     &`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
                      ::__l2::InFlightOrDone.ArrayMax);
  memset(`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
         ::__l2::InFlightOrDone.AllocatorInstance.Data + (longlong)iVar7 * 8,0,(ulonglong)uVar13 * 8
        );
  uVar17 = 0;
  if (uVar6 != uVar13 << 6) {
    uVar6 = uVar17;
    if ((int)(uVar13 - 1) <
        `private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
        ::__l2::InFlightOrDone.ArrayNum) {
      uVar6 = ~(uVar13 - 1) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return uVar8;
    }
    *(longlong *)
     (`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
      ::__l2::InFlightOrDone.AllocatorInstance.Data + (ulonglong)uVar13 * 8 + -8) =
         -1L << ((char)((ulonglong)lVar9 >> 0x10) + 0x40U & 0x3f);
  }
  if (*(int *)(pFVar2 + uVar19 * 0x98 + 0x80) != 0) {
    if ((`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
         ::__l2::InFlightOrDone.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return uVar8;
    }
    local_78 = *(undefined4 *)(pFVar2 + uVar19 * 0x98 + 0x28);
    local_90 = &this->CacheBlockAllocator;
    local_70 = `private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
               ::__l2::InFlightOrDone.AllocatorInstance.Data;
    local_a8 = &local_90;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<`OverlappingNodesInIntervalTreeMask<FPakPrecacher::FCacheBlock>'::__l2::<lambda_1>,bool,unsigned_int>
               ::Call;
    local_88 = uVar11;
    local_80 = uVar8;
    OverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
              (*(uint *)(pFVar2 + uVar19 * 0x98 + 0x80),local_90,uVar11,uVar8,0,
               *(ulong64 *)(pFVar2 + uVar19 * 0x98 + 0x18),*(uint *)(pFVar2 + uVar19 * 0x98 + 0x20),
               *(uint *)(pFVar2 + uVar19 * 0x98 + 0x24),
               (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_b0);
  }
  if ((*(int *)(pFVar18 + 0x2c) == 1) && (*(int *)(pFVar2 + uVar19 * 0x98 + 0x7c) != 0)) {
    if ((`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
         ::__l2::InFlightOrDone.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return uVar8;
    }
    local_50 = *(undefined4 *)(pFVar2 + uVar19 * 0x98 + 0x28);
    local_48 = `private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
               ::__l2::InFlightOrDone.AllocatorInstance.Data;
    local_98 = &local_68;
    local_a0 = UE::Core::Private::Function::
               TFunctionRefCaller<`OverlappingNodesInIntervalTreeMask<FPakPrecacher::FCacheBlock>'::__l2::<lambda_1>,bool,unsigned_int>
               ::Call;
    local_68 = &this->CacheBlockAllocator;
    local_60 = uVar11;
    local_58 = uVar8;
    OverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
              (*(uint *)(pFVar2 + uVar19 * 0x98 + 0x7c),&this->CacheBlockAllocator,uVar11,uVar8,0,
               *(ulong64 *)(pFVar2 + uVar19 * 0x98 + 0x18),*(uint *)(pFVar2 + uVar19 * 0x98 + 0x20),
               *(uint *)(pFVar2 + uVar19 * 0x98 + 0x24),
               (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_a0);
  }
  iVar7 = `private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
          ::__l2::InFlightOrDone.ArrayNum;
  if (uVar13 != 0) {
    do {
      uVar14 = (uint)uVar12;
      uVar6 = uVar17;
      if ((int)uVar14 < iVar7) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar7 = `private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
                 ::__l2::InFlightOrDone.ArrayNum, bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return uVar8;
      }
      if (*(longlong *)
           (`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
            ::__l2::InFlightOrDone.AllocatorInstance.Data + (longlong)(int)uVar14 * 8) != -1) {
        if ((int)uVar14 < iVar7) {
          uVar17 = ~uVar14 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return uVar8;
        }
        uVar11 = (uVar14 << 0x16) + uVar11;
        for (uVar12 = *(ulonglong *)
                       (`private:_unsigned___int64___cdecl_FPakPrecacher::FirstUnfilledBlockForRequest(unsigned_int,unsigned___int64)___ptr64'
                        ::__l2::InFlightOrDone.AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
            (uVar12 & 1) != 0; uVar12 = uVar12 >> 1) {
          uVar11 = uVar11 + 0x10000;
        }
        if (((longlong)uVar11 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                               ,0x1a,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return uVar8;
        }
        return uVar19 << 0x30 | uVar11;
      }
      uVar12 = (ulonglong)(uVar14 + 1);
    } while (uVar14 + 1 < uVar13);
  }
  return 0xffffffffffffffff;
}

// GetCompletedRequest @ 142a73620

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall
FPakPrecacher::GetCompletedRequest(FPakPrecacher *this,IPakRequestor *param_1,uchar *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  IPakRequestor *pIVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  FPakInRequest *pFVar12;
  
  if (param_1 == (IPakRequestor *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Owner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x8ff,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  ClearOldBlockTasks(this);
  lpCriticalSection = &this->CachedFilesScopeLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar3 = param_1->UniqueID;
  if (*(int *)&(this->OutstandingRequests).field_0x8 !=
      *(int *)&(this->OutstandingRequests).field_0x34) {
    puVar10 = *(undefined1 **)&(this->OutstandingRequests).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->OutstandingRequests).field_0x38;
    }
    iVar8 = *(int *)(puVar10 +
                    ((ulonglong)(*(int *)&(this->OutstandingRequests).field_0x48 - 1) &
                    (uVar3 >> 0x20) * 0x17 + uVar3) * 4);
    if (iVar8 != -1) {
      do {
        lVar1 = *(longlong *)&this->OutstandingRequests + (longlong)iVar8 * 0x18;
        if (*(ulonglong *)(*(longlong *)&this->OutstandingRequests + (longlong)iVar8 * 0x18) ==
            uVar3) {
          if ((lVar1 != 0) && (uVar2 = *(uint *)(lVar1 + 8), uVar2 != 0)) {
            uVar9 = (this->InRequestAllocator).SaltMask;
            uVar11 = ~uVar9 & uVar2;
            if (((uVar9 & uVar2) != (this->InRequestAllocator).Salt) ||
               ((uVar11 == 0 || ((uint)(this->InRequestAllocator).Items.ArrayNum <= uVar11)))) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                                 ,0x4a,L"");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
            }
            uVar9 = 0;
            if ((int)uVar11 < (this->InRequestAllocator).Items.ArrayNum) {
              uVar9 = ~uVar11 >> 0x1f;
            }
            if (uVar9 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
            }
            pFVar12 = (FPakInRequest *)
                      ((this->InRequestAllocator).Items.AllocatorInstance.Data +
                      (longlong)(int)uVar11 * 0x30);
            pIVar4 = pFVar12->Owner;
            if ((((param_1 != pIVar4) || (pFVar12->Status != Complete)) ||
                (pFVar12->UniqueID != pIVar4->UniqueID)) ||
               ((uVar2 != pIVar4->InRequestIndex ||
                (pFVar12->OffsetAndPakIndex != pIVar4->OffsetAndPakIndex)))) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Owner == Request.Owner && Request.Status == EInRequestStatus::Complete && Request.UniqueID == Request.Owner->UniqueID && RequestIndex == Request.Owner->InRequestIndex && Request.OffsetAndPakIndex == Request.Owner->OffsetAndPakIndex"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                 ,0x908,L"");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
            }
            bVar6 = GetCompletedRequestData(this,pFVar12,param_2);
            goto LAB_142a736fb;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x10);
      } while (iVar8 != -1);
    }
  }
  bVar6 = false;
LAB_142a736fb:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar6;
}

// GetCompletedRequestData @ 142a73850

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall
FPakPrecacher::GetCompletedRequestData(FPakPrecacher *this,FPakInRequest *param_1,uchar *param_2)

{
  ushort uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  longlong local_res8;
  code *local_58;
  FPakPrecacher **local_50;
  FPakPrecacher *local_48;
  ulonglong local_40;
  longlong local_38;
  longlong *local_30;
  uchar *local_28;
  FScriptContainerElement *local_20;
  
  if (param_1->Status != Complete) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DoneRequest.Status == EInRequestStatus::Complete",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x84a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar1 = *(ushort *)((longlong)&param_1->OffsetAndPakIndex + 6);
  if ((this->CachedPakData).ArrayNum <= (int)(uint)uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result < CachedPakData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x3c4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  lVar2 = param_1->Size;
  uVar6 = param_1->OffsetAndPakIndex & 0xffffffffffff;
  if ((this->CachedPakData).ArrayNum <= (int)(uint)uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar7 = (this->CachedPakData).AllocatorInstance.Data + (ulonglong)uVar1 * 0x98;
  if ((((*(longlong *)(pFVar7 + 0x10) < (longlong)(param_1->Size + uVar6)) || (param_1->Size < 1))
      || (AIOP_CriticalPath < (byte)(char)param_1->PriorityAndFlags)) ||
     (param_1->Status != Complete)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset + DoneRequest.Size <= Pak.TotalSize && DoneRequest.Size > 0 && DoneRequest.GetPriority() >= AIOP_MIN && DoneRequest.GetPriority() <= AIOP_MAX && DoneRequest.Status == EInRequestStatus::Complete"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x850,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_res8 = 0;
  local_30 = &local_res8;
  local_50 = &local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPakPrecacher::GetCompletedRequestData'::__l2::<lambda_1>,bool,unsigned_int>
             ::Call;
  local_48 = this;
  local_40 = uVar6;
  local_38 = lVar2;
  local_28 = param_2;
  local_20 = pFVar7;
  OverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
            (*(uint *)(pFVar7 + 0x80),&this->CacheBlockAllocator,uVar6,lVar2 + -1 + uVar6,0,
             *(ulong64 *)(pFVar7 + 0x18),*(uint *)(pFVar7 + 0x20),*(uint *)(pFVar7 + 0x24),
             (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_58);
  if (local_res8 != lVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesCopied == Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x891,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return true;
}

// GetNextBlock @ 142a75970

/* WARNING: Removing unreachable block (ram,0x000142a75b19) */
/* WARNING: Removing unreachable block (ram,0x000142a75b23) */
/* WARNING: Removing unreachable block (ram,0x000142a75b48) */
/* WARNING: Removing unreachable block (ram,0x000142a75b4d) */
/* WARNING: Removing unreachable block (ram,0x000142a75b52) */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

ulong64 __thiscall
FPakPrecacher::GetNextBlock(FPakPrecacher *this,EAsyncIOPriorityAndFlags *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  int iVar8;
  undefined2 local_res8 [4];
  EAsyncIOPriorityAndFlags *local_res10;
  int local_res18;
  ulong64 local_res20;
  longlong local_b8;
  ulong64 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  code *local_90;
  FPakPrecacher **local_88;
  FPakPrecacher *local_80;
  FScriptContainerElement *local_78;
  ulong64 *local_70;
  undefined2 *local_68;
  short local_60;
  ulong64 *local_58;
  ulonglong local_50;
  
  local_98 = (longlong)(int)this->AsyncMinPriority;
  *param_1 = AIOP_MIN;
  local_a0 = 5;
  local_res8[0] = 0;
  local_a8 = 5;
  local_res20 = 0xffffffffffffffff;
  bVar2 = false;
  local_b8 = 0x3c;
  local_res10 = param_1;
  do {
    iVar8 = 0;
    if ((local_a0 < local_98) && (bVar2)) {
      return local_res20;
    }
    while( true ) {
      uVar7 = 0;
      if (iVar8 == 0) {
        uVar7 = this->LastReadRequest;
      }
      uVar6 = uVar7 >> 0x30;
      uVar5 = (uint)(ushort)(uVar7 >> 0x30);
      local_res18 = iVar8;
      if (((this->CachedPakData).ArrayNum <= (int)uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result < CachedPakData.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                             ,0x3c4,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      if (((this->CachedPakData).ArrayNum <= (int)uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      pFVar3 = local_78;
      if ((*(longlong *)((this->CachedPakData).AllocatorInstance.Data + uVar6 * 0x98 + 0x10) <
           (longlong)(uVar7 & 0xffffffffffff)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset <= CachedPakData[PakIndex].TotalSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                             ,0x623,L""), pFVar3 = local_78, bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      for (; (local_res20 == 0xffffffffffffffff &&
             (iVar8 = local_res18, (int)uVar6 < (this->CachedPakData).ArrayNum));
          uVar6 = (ulonglong)(ushort)((short)uVar6 + 1)) {
        local_78 = (this->CachedPakData).AllocatorInstance.Data + uVar6 * 0x98;
        if (*(int *)(local_78 + local_b8 + 0x34) != 0) {
          bVar2 = true;
        }
        if (*(int *)(local_78 + local_b8 + 0x38) != 0) {
          local_b0 = *(longlong *)(local_78 + 0x10) - 1;
          local_70 = &local_res20;
          local_68 = local_res8;
          local_58 = &local_b0;
          local_88 = &local_80;
          local_90 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FPakPrecacher::GetNextBlock'::__l24::<lambda_1>,bool,unsigned_int>
                     ::Call;
          local_80 = this;
          local_60 = (short)uVar6;
          local_50 = uVar7;
          OverlappingNodesInIntervalTreeWithShrinkingInterval<FPakPrecacher::FPakInRequest>
                    (*(uint *)(local_78 + local_b8 + 0x38),&this->InRequestAllocator,
                     uVar7 & 0xffffffffffff,&local_b0,0,*(ulong64 *)(local_78 + 0x18),
                     *(uint *)(local_78 + 0x20),*(uint *)(local_78 + 0x24),
                     (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_90);
          pFVar3 = local_78;
        }
        local_78 = pFVar3;
        pFVar3 = local_78;
        iVar8 = local_res18;
      }
      local_78 = pFVar3;
      if (uVar7 == 0) break;
      iVar8 = iVar8 + 1;
    }
    if ((local_b8 == 0) || (local_res20 != 0xffffffffffffffff)) {
      *local_res10 = (EAsyncIOPriorityAndFlags)local_a8;
      return local_res20;
    }
    local_b8 = local_b8 + -0xc;
    uVar6 = (ulonglong)local_a8 >> 0x20;
    local_a8 = CONCAT44((int)uVar6,(EAsyncIOPriorityAndFlags)local_a8 - AIOP_Low);
    local_a0 = local_a0 + -1;
  } while( true );
}

// HasRequestsAtStatus @ 142a7be60

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall FPakPrecacher::HasRequestsAtStatus(FPakPrecacher *this,EInRequestStatus param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  if (0 < (this->CachedPakData).ArrayNum) {
    do {
      if ((this->CachedPakData).ArrayNum <= (int)uVar7) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      lVar5 = 5;
      pFVar4 = (this->CachedPakData).AllocatorInstance.Data +
               (longlong)(int)param_1 * 4 + 0x70 + uVar7 * 0x98;
      while( true ) {
        if (*(int *)pFVar4 != 0) {
          return true;
        }
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        pFVar4 = pFVar4 + -0xc;
      }
      uVar6 = (short)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((int)(uint)uVar6 < (this->CachedPakData).ArrayNum);
  }
  return false;
}

// NewRequestsToLowerComplete @ 142a86a20

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FPakPrecacher::NewRequestsToLowerComplete
          (FPakPrecacher *this,bool param_1,IAsyncReadRequest *param_2,int param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<IAsyncReadRequest_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uchar *puVar7;
  FLLMScope local_res8 [2];
  IAsyncReadRequest *local_res18;
  FMemScope local_28 [2];
  
  local_res18 = param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FPakPrecacher::NewRequestsToLowerComplete(bool,IAsyncReadRequest*___ptr64,int)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FPakPrecacher::NewRequestsToLowerComplete(bool,IAsyncReadRequest*___ptr64,int)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FPakPrecacher::NewRequestsToLowerComplete(bool,IAsyncReadRequest*___ptr64,int)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FPakPrecacher::NewRequestsToLowerComplete(bool,IAsyncReadRequest*___ptr64,int)___ptr64'
                      ::__l2::LLMScope_Name2205,L"FileSystem/PakFile");
      _Init_thread_footer(&`public:_void___cdecl_FPakPrecacher::NewRequestsToLowerComplete(bool,IAsyncReadRequest*___ptr64,int)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FPakPrecacher::NewRequestsToLowerComplete(bool,IAsyncReadRequest*___ptr64,int)___ptr64'
             ::__l2::LLMScope_Name2205,false,None,Default,true);
  FMemScope::FMemScope
            (local_28,&`public:_void___cdecl_FPakPrecacher::NewRequestsToLowerComplete(bool,IAsyncReadRequest*___ptr64,int)___ptr64'
                       ::__l2::LLMScope_Name2205,true);
  ClearOldBlockTasks(this);
  lpCriticalSection = &this->CachedFilesScopeLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->RequestsToLower[param_3].RequestHandle = local_res18;
    this->NotifyRecursion = this->NotifyRecursion + 1;
    puVar7 = this->RequestsToLower[param_3].Memory;
    if (puVar7 == (uchar *)0x0) {
      puVar7 = IAsyncReadRequest::GetReadResults(local_res18);
      this->RequestsToLower[param_3].Memory = puVar7;
    }
    CompleteRequest(this,param_1,puVar7,this->RequestsToLower[param_3].BlockIndex);
    pTVar2 = &this->RequestsToDelete;
    this->RequestsToLower[param_3].RequestHandle = (IAsyncReadRequest *)0x0;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_res18) &&
       ((FScriptContainerElement *)&local_res18 <
        pFVar3 + (longlong)(this->RequestsToDelete).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->RequestsToDelete).ArrayNum;
    piVar1 = &(this->RequestsToDelete).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    (this->RequestsToDelete).ArrayNum = iVar6 + 1;
    *(IAsyncReadRequest **)(pFVar3 + (longlong)iVar6 * 8) = local_res18;
    this->RequestsToLower[param_3].BlockIndex = 0;
    bVar5 = CanStartAnotherTask(this);
    if (bVar5) {
      AddNewBlock(this);
    }
    this->NotifyRecursion = this->NotifyRecursion + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FMemScope::~FMemScope(local_28);
    FLLMScope::~FLLMScope(local_res8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// NotifyComplete @ 142a86dd0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakPrecacher::NotifyComplete(FPakPrecacher *this,uint param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  uVar5 = (this->InRequestAllocator).SaltMask;
  uVar6 = ~uVar5 & param_1;
  if ((((uVar5 & param_1) != (this->InRequestAllocator).Salt) || (uVar6 == 0)) ||
     ((uint)(this->InRequestAllocator).Items.ArrayNum <= uVar6)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x4a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = 0;
  if ((int)uVar6 < (this->InRequestAllocator).Items.ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  pFVar7 = (this->InRequestAllocator).Items.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30;
  uVar1 = *(ushort *)(pFVar7 + 6);
  if ((this->CachedPakData).ArrayNum <= (int)(uint)uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result < CachedPakData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x3c4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar2 = *(ulonglong *)pFVar7;
  if ((this->CachedPakData).ArrayNum <= (int)(uint)uVar1) {
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
  if (((*(longlong *)((this->CachedPakData).AllocatorInstance.Data + (ulonglong)uVar1 * 0x98 + 0x10)
        < (longlong)(*(ulonglong *)(pFVar7 + 8) + (uVar2 & 0xffffffffffff))) ||
      ((longlong)*(ulonglong *)(pFVar7 + 8) < 1)) ||
     ((5 < (byte)pFVar7[0x28] || (*(int *)(pFVar7 + 0x2c) != 0)))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset + Request.Size <= Pak.TotalSize && Request.Size > 0 && Request.GetPriority() >= AIOP_MIN && Request.GetPriority() <= AIOP_MAX && Request.Status == EInRequestStatus::Complete"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x5fd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((*(ulonglong *)(pFVar7 + 0x10) == 0) || (*(ulonglong *)(pFVar7 + 0x18) == 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Request.Owner && Request.UniqueID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x5ff,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((((*(int *)(pFVar7 + 0x2c) == 0) &&
       (uVar2 = *(ulonglong *)(pFVar7 + 0x10),
       *(ulonglong *)(pFVar7 + 0x18) == *(ulonglong *)(uVar2 + 0x10))) &&
      (param_1 == *(uint *)(uVar2 + 0x18))) && (*(ulonglong *)pFVar7 == *(ulonglong *)(uVar2 + 8)))
  {
    if (6 < (byte)LogPakFile._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`private:_void___cdecl_FPakPrecacher::NotifyComplete(unsigned_int)___ptr64'::__l20
                  ::LOG_Static,(FLogCategoryBase *)&LogPakFile);
    }
    (**(code **)(**(longlong **)(pFVar7 + 0x10) + 8))();
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x609,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// QueueRequest @ 142a8ee50

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPakPrecacher::QueueRequest
          (FPakPrecacher *this,IPakRequestor *param_1,FPakFile *param_2,FName param_3,long64 param_4
          ,long64 param_5,long64 param_6,EAsyncIOPriorityAndFlags param_7)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulong64 *puVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  longlong lVar12;
  FStaticBasicLogRecord *pFVar13;
  uint uVar14;
  FPakInRequest *pFVar15;
  undefined1 *puVar16;
  uint local_res8 [2];
  uint local_res10;
  TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> local_58;
  uint *local_48;
  
  if (!`public:_bool___cdecl_FPakPrecacher::QueueRequest(IPakRequestor*___ptr64,FPakFile*___ptr64,FName,__int64,__int64,__int64,EAsyncIOPriorityAndFlags)___ptr64'
       ::__l2::__CsvProfilerStat2225) {
    FCsvProfilerTrace::OutputInlineStat
              ("PakPrecacherQueueRequest",_GCsvCategory_FileIOVerbose.Index);
    `public:_bool___cdecl_FPakPrecacher::QueueRequest(IPakRequestor*___ptr64,FPakFile*___ptr64,FName,__int64,__int64,__int64,EAsyncIOPriorityAndFlags)___ptr64'
    ::__l2::__CsvProfilerStat2225 = true;
  }
  local_res10 = _GCsvCategory_FileIOVerbose.Index;
  FCsvProfiler::BeginStat
            ("PakPrecacherQueueRequest",_GCsvCategory_FileIOVerbose.Index,
             "CSV_PakPrecacherQueueRequest");
  if ((((((param_1 == (IPakRequestor *)0x0) || (param_3 == (FName)0x0)) || (param_6 < 1)) ||
       ((param_5 < 0 || (param_4 <= param_5)))) || (AIOP_CriticalPath < (byte)(undefined1)param_7))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Owner && File != NAME_None && Size > 0 && Offset >= 0 && Offset < PakFileSize && (PriorityAndFlags&AIOP_PRIORITY_MASK) >= AIOP_MIN && (PriorityAndFlags&AIOP_PRIORITY_MASK) <= AIOP_MAX"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0x8b2,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  lpCriticalSection = &this->CachedFilesScopeLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar11 = RegisterPakFile(this,param_2,param_3,param_4);
  if (puVar11 == (ushort *)0x0) {
    bVar7 = false;
    goto LAB_142a8f27f;
  }
  this->NotifyRecursion = this->NotifyRecursion + 1;
  uVar2 = *puVar11;
  if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pFVar3 = (this->CachedPakData).AllocatorInstance.Data;
  lVar12 = (ulonglong)uVar2 * 0x98;
  if ((((*(FName *)(pFVar3 + lVar12 + 0x2c) != param_3) ||
       (*(longlong *)(pFVar3 + lVar12 + 0x10) != param_4)) || (*(longlong *)(pFVar3 + lVar12) == 0))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pak.Name == File && Pak.TotalSize == PakFileSize && Pak.Handle",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0x8c0,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  local_res8[0] =
       TIntervalTreeAllocator<FPakPrecacher::FPakInRequest>::Alloc(&this->InRequestAllocator);
  uVar9 = (this->InRequestAllocator).SaltMask;
  uVar14 = ~uVar9 & local_res8[0];
  if (((((uVar9 & local_res8[0]) != (this->InRequestAllocator).Salt) || (uVar14 == 0)) ||
      ((uint)(this->InRequestAllocator).Items.ArrayNum <= uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x4a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  uVar9 = 0;
  if ((int)uVar14 < (this->InRequestAllocator).Items.ArrayNum) {
    uVar9 = ~uVar14 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pFVar15 = (FPakInRequest *)
            ((this->InRequestAllocator).Items.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x30)
  ;
  if ((param_5 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                         ,0x1a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  puVar1 = &pFVar15->UniqueID;
  pFVar15->Size = param_6;
  pFVar15->PriorityAndFlags = param_7;
  pFVar15->Status = Waiting;
  pFVar15->Owner = param_1;
  pFVar15->OffsetAndPakIndex = (ulonglong)uVar2 << 0x30 | param_5;
  uVar4 = this->NextUniqueID;
  this->NextUniqueID = uVar4 + 1;
  *puVar1 = uVar4;
  pFVar15->Index = local_res8[0];
  if ((pFVar15->Next != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request.Next == IntervalTreeInvalidIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0x8cc,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  param_1->OffsetAndPakIndex = pFVar15->OffsetAndPakIndex;
  param_1->UniqueID = *puVar1;
  param_1->InRequestIndex = local_res8[0];
  uVar5 = *puVar1;
  if (*(int *)&(this->OutstandingRequests).field_0x8 !=
      *(int *)&(this->OutstandingRequests).field_0x34) {
    puVar16 = *(undefined1 **)&(this->OutstandingRequests).field_0x40;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->OutstandingRequests).field_0x38;
    }
    iVar10 = *(int *)(puVar16 +
                     ((uVar5 >> 0x20) * 0x17 + uVar5 &
                     (ulonglong)(*(int *)&(this->OutstandingRequests).field_0x48 - 1)) * 4);
    if (iVar10 != -1) {
      lVar12 = *(longlong *)&(this->OutstandingRequests).field_0x0;
      do {
        if (*(ulonglong *)(lVar12 + (longlong)iVar10 * 0x18) == uVar5) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!OutstandingRequests.Contains(Request.UniqueID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                             ,0x8d0,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          break;
        }
        iVar10 = *(int *)(lVar12 + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
  }
  local_48 = local_res8;
  local_58.Value = (uint *)puVar1;
  TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->OutstandingRequests,&local_58,(bool *)&local_58.Value);
  LOCK();
  (this->RequestCounter).Counter = (this->RequestCounter).Counter + 1;
  UNLOCK();
  bVar7 = AddRequest(this,pFVar15,local_res8[0]);
  if (bVar7) {
    LOCK();
    GPreCacheHotBlocksCount = GPreCacheHotBlocksCount + 1;
    UNLOCK();
    if (6 < (byte)LogPakFile._0_1_) {
      pFVar13 = &`public:_bool___cdecl_FPakPrecacher::QueueRequest(IPakRequestor*___ptr64,FPakFile*___ptr64,FName,__int64,__int64,__int64,EAsyncIOPriorityAndFlags)___ptr64'
                 ::__l40::LOG_Static;
LAB_142a8f251:
      UE::Logging::Private::BasicLog<7>(pFVar13,(FLogCategoryBase *)&LogPakFile);
    }
  }
  else {
    LOCK();
    GPreCacheColdBlocksCount = GPreCacheColdBlocksCount + 1;
    UNLOCK();
    if (6 < (byte)LogPakFile._0_1_) {
      pFVar13 = &`public:_bool___cdecl_FPakPrecacher::QueueRequest(IPakRequestor*___ptr64,FPakFile*___ptr64,FName,__int64,__int64,__int64,EAsyncIOPriorityAndFlags)___ptr64'
                 ::__l60::LOG_Static;
      goto LAB_142a8f251;
    }
  }
  TrimCache(this,false,0xffff);
  this->NotifyRecursion = this->NotifyRecursion + -1;
  bVar7 = true;
LAB_142a8f27f:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FCsvProfiler::EndStat("PakPrecacherQueueRequest",local_res10);
  return bVar7;
}

// RegisterPakFile @ 142a93640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ushort * __thiscall
FPakPrecacher::RegisterPakFile(FPakPrecacher *this,FPakFile *param_1,FName param_2,long64 param_3)

{
  int *piVar1;
  TArray<FPakPrecacher::FPakData,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<FPakSignatureFile_const_,1> *this_00;
  longlong lVar3;
  ushort uVar4;
  FPakData *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  ushort *puVar10;
  IAsyncReadFileHandle *pIVar11;
  FPakData *pFVar12;
  wchar_t *pwVar13;
  TSharedPtr<FPakSignatureFile_const_,1> *pTVar14;
  FPakSignatureFile *pFVar15;
  uint uVar16;
  undefined1 *puVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  FName local_res18 [2];
  undefined1 auStackY_198 [32];
  short local_148 [4];
  FString local_140;
  TPairInitializer<FPakFile_*_const_&,unsigned_short_&&> local_130;
  ushort **local_120;
  short *local_118;
  TSharedPtr<FPakSignatureFile_const_,1> local_110;
  FPakData local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar16 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
  if (*(int *)&(this->CachedPaks).field_0x8 != *(int *)&(this->CachedPaks).field_0x34) {
    puVar17 = *(undefined1 **)&(this->CachedPaks).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->CachedPaks).field_0x38;
    }
    iVar9 = *(int *)(puVar17 +
                    (ulonglong)
                    (*(int *)&(this->CachedPaks).field_0x48 - 1U & (uVar16 >> 0x10 ^ uVar16)) * 4);
    if (iVar9 != -1) {
      do {
        lVar3 = *(longlong *)&this->CachedPaks + (longlong)iVar9 * 0x18;
        if (*(FPakFile **)(*(longlong *)&this->CachedPaks + (longlong)iVar9 * 0x18) == param_1) {
          puVar10 = (ushort *)(lVar3 + 8);
          if (lVar3 == 0) {
            puVar10 = (ushort *)0x0;
          }
          if (puVar10 != (ushort *)0x0) {
            return puVar10;
          }
          break;
        }
        iVar9 = *(int *)(lVar3 + 0x10);
      } while (iVar9 != -1);
    }
  }
  if (param_1->bIsMounted != false) {
    local_res18[0] = param_2;
    local_130.Value = (ushort *)param_1;
    ::FName::ToString(local_res18,&local_140);
    if ((0xfffe < (this->CachedPakData).ArrayNum) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CachedPakData.Num() < ((uint16) 0xffff)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x371,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      puVar10 = (ushort *)(*pcVar6)();
      return puVar10;
    }
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_140.Data.ArrayNum != 0) {
      FVar18.Data = local_140.Data.AllocatorInstance.Data;
    }
    pIVar11 = (IAsyncReadFileHandle *)
              (**(code **)((longlong)*this->LowerLevel + 400))(this->LowerLevel,FVar18.Data,0);
    if (pIVar11 != (IAsyncReadFileHandle *)0x0) {
      pTVar2 = &this->CachedPakData;
      pFVar12 = FPakData::FPakData(&local_f8,(FPakFile *)local_130.Value,pIVar11,local_res18[0],
                                   param_3);
      pFVar5 = (FPakData *)(pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar12) && (pFVar12 < pFVar5 + (this->CachedPakData).ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        puVar10 = (ushort *)(*pcVar6)();
        return puVar10;
      }
      iVar9 = (this->CachedPakData).ArrayNum;
      piVar1 = &(this->CachedPakData).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x898,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->CachedPakData).ArrayNum = iVar9 + 1;
      pFVar19 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x98;
      *(IAsyncReadFileHandle **)pFVar19 = pFVar12->Handle;
      *(FPakFile **)(pFVar19 + 8) = pFVar12->ActualPakFile;
      *(long64 *)(pFVar19 + 0x10) = pFVar12->TotalSize;
      *(ulong64 *)(pFVar19 + 0x18) = pFVar12->MaxNode;
      *(uint *)(pFVar19 + 0x20) = pFVar12->StartShift;
      *(uint *)(pFVar19 + 0x24) = pFVar12->MaxShift;
      *(uint *)(pFVar19 + 0x28) = pFVar12->BytesToBitsShift;
      *(FName *)(pFVar19 + 0x2c) = pFVar12->Name;
      uVar7 = *(undefined8 *)(pFVar12->InRequests[0] + 2);
      *(undefined8 *)(pFVar19 + 0x34) = *(undefined8 *)pFVar12->InRequests[0];
      *(undefined8 *)(pFVar19 + 0x3c) = uVar7;
      uVar7 = *(undefined8 *)pFVar12->InRequests[2];
      *(undefined8 *)(pFVar19 + 0x44) = *(undefined8 *)(pFVar12->InRequests[1] + 1);
      *(undefined8 *)(pFVar19 + 0x4c) = uVar7;
      uVar7 = *(undefined8 *)(pFVar12->InRequests[3] + 1);
      *(undefined8 *)(pFVar19 + 0x54) = *(undefined8 *)(pFVar12->InRequests[2] + 2);
      *(undefined8 *)(pFVar19 + 0x5c) = uVar7;
      uVar7 = *(undefined8 *)(pFVar12->InRequests[4] + 2);
      *(undefined8 *)(pFVar19 + 100) = *(undefined8 *)pFVar12->InRequests[4];
      *(undefined8 *)(pFVar19 + 0x6c) = uVar7;
      *(undefined8 *)(pFVar19 + 0x74) = *(undefined8 *)(pFVar12->InRequests[5] + 1);
      *(undefined8 *)(pFVar19 + 0x7c) = *(undefined8 *)pFVar12->CacheBlocks;
      *(FPakSignatureFile **)(pFVar19 + 0x88) = (pFVar12->Signatures).Object;
      *(TReferenceControllerBase<1> **)(pFVar19 + 0x90) =
           (pFVar12->Signatures).SharedReferenceCount.ReferenceController;
      (pFVar12->Signatures).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar12->Signatures).Object = (FPakSignatureFile *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.Signatures.SharedReferenceCount.ReferenceController);
      local_148[0] = (short)(this->CachedPakData).ArrayNum + -1;
      local_120 = &local_130.Value;
      local_118 = local_148;
      TSet<TTuple<FPakFile_*,unsigned_short>,TDefaultMapHashableKeyFuncs<FPakFile_*,unsigned_short,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FPakFile_*_const_&,unsigned_short_&&>_>
                ((TSet<TTuple<FPakFile_*,unsigned_short>,TDefaultMapHashableKeyFuncs<FPakFile_*,unsigned_short,0>,FDefaultSetAllocator>
                  *)&this->CachedPaks,&local_130,(bool *)&local_120);
      lVar3 = (longlong)(int)local_130.Key * 3 + 1;
      uVar4 = *(ushort *)(*(longlong *)&this->CachedPaks + lVar3 * 8);
      puVar10 = (ushort *)(*(longlong *)&this->CachedPaks + lVar3 * 8);
      if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar4) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        puVar10 = (ushort *)(*pcVar6)();
        return puVar10;
      }
      pFVar19 = (pTVar2->AllocatorInstance).Data;
      if ((this->OffsetAndPakIndexOfSavedBlocked).ArrayNum == 0) {
        TArray<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
        AddDefaulted(&this->OffsetAndPakIndexOfSavedBlocked,1);
      }
      if (`public:_unsigned_short*___ptr64___cdecl_FPakPrecacher::RegisterPakFile(FPakFile*___ptr64,FName,__int64)___ptr64'
          ::__l5::bFirst != false) {
        pwVar13 = FCommandLine::Get();
        bVar8 = FParse::Param(pwVar13,L"CachePerPak");
        if (bVar8) {
          GPakCache_CachePerPakFile = 1;
        }
        pwVar13 = FCommandLine::Get();
        bVar8 = FParse::Param(pwVar13,L"NewTrimCache");
        if (bVar8) {
          GPakCache_UseNewTrim = 1;
        }
        pwVar13 = FCommandLine::Get();
        FParse::Value(pwVar13,L"PakCacheMaxBlockMemory=",&GPakCache_MaxBlockMemory);
        `public:_unsigned_short*___ptr64___cdecl_FPakPrecacher::RegisterPakFile(FPakFile*___ptr64,FName,__int64)___ptr64'
        ::__l5::bFirst = false;
      }
      lVar3 = *(longlong *)(pFVar19 + (ulonglong)uVar4 * 0x98 + 8);
      if ((*(char *)(lVar3 + 0x338) == '\x01') || (GPakCache_CachePerPakFile != 0)) {
        *(int *)(lVar3 + 0x33c) = (this->OffsetAndPakIndexOfSavedBlocked).ArrayNum;
        TArray<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
        AddDefaulted(&this->OffsetAndPakIndexOfSavedBlocked,1);
      }
      else {
        *(undefined4 *)(lVar3 + 0x33c) = 0;
      }
      if (4 < (byte)LogPakFile._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_unsigned_short*___ptr64___cdecl_FPakPrecacher::RegisterPakFile(FPakFile*___ptr64,FName,__int64)___ptr64'
                    ::__l36::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_140.Data.ArrayNum != 0) {
        FVar18.Data = local_140.Data.AllocatorInstance.Data;
      }
      pTVar14 = FPakPlatformFile::GetPakSignatureFile(&local_110,(wchar_t *)FVar18.Data);
      this_00 = (TSharedPtr<FPakSignatureFile_const_,1> *)(pFVar19 + (ulonglong)uVar4 * 0x98 + 0x88)
      ;
      if (this_00 != pTVar14) {
        this_00->Object = pTVar14->Object;
        pTVar14->Object = (FPakSignatureFile *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar19 + (ulonglong)uVar4 * 0x98 + 0x90),
                   &pTVar14->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_110.SharedReferenceCount.ReferenceController);
      if (((this_00->Object != (FPakSignatureFile *)0x0) &&
          (pFVar15 = TSharedPtr<FPakSignatureFile_const_,1>::operator->(this_00),
          (longlong)
          ((param_3 + 0xffffU & 0xffffffffffff0000) +
          (ulonglong)(ushort)((longlong)(param_3 + 0xffffU) >> 0x3f)) >> 0x10 !=
          (longlong)(pFVar15->ChunkHashes).ArrayNum)) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5195954862361150378>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                             ,0x3aa,"NumPakChunks == Pak.Signatures->ChunkHashes.Num()"), bVar8)) {
        pcVar6 = (code *)swi(3);
        puVar10 = (ushort *)(*pcVar6)();
        return puVar10;
      }
      if (local_140.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return puVar10;
      }
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
      return puVar10;
    }
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
  }
  return (ushort *)0x0;
}

// RemoveRequest @ 142a98510

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FPakPrecacher::RemoveRequest(FPakPrecacher *this,uint param_1)

{
  TIntervalTreeAllocator<FPakPrecacher::FPakInRequest> *pTVar1;
  ushort uVar2;
  EAsyncIOPriorityAndFlags EVar3;
  EInRequestStatus EVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong64 uVar14;
  ulonglong uVar15;
  FPakInRequest *pFVar16;
  ulonglong uVar17;
  FPakPrecacher *local_90;
  code *local_88;
  FPakPrecacher **local_80;
  code *local_78;
  FPakPrecacher **local_70;
  FPakPrecacher *local_68;
  ulong64 local_60;
  byte local_58;
  
  pTVar1 = &this->InRequestAllocator;
  uVar11 = (this->InRequestAllocator).SaltMask;
  uVar12 = ~uVar11 & param_1;
  if ((((uVar11 & param_1) != (this->InRequestAllocator).Salt) || (uVar12 == 0)) ||
     ((uint)(this->InRequestAllocator).Items.ArrayNum <= uVar12)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x4a,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar11 = 0;
  if ((int)uVar12 < (this->InRequestAllocator).Items.ArrayNum) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar16 = (FPakInRequest *)((pTVar1->Items).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x30)
  ;
  uVar2 = *(ushort *)((longlong)&pFVar16->OffsetAndPakIndex + 6);
  if ((this->CachedPakData).ArrayNum <= (int)(uint)uVar2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result < CachedPakData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x3c4,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar17 = pFVar16->OffsetAndPakIndex & 0xffffffffffff;
  lVar5 = pFVar16->Size;
  if ((this->CachedPakData).ArrayNum <= (int)(uint)uVar2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar6 = (this->CachedPakData).AllocatorInstance.Data;
  if (((*(longlong *)(pFVar6 + (ulonglong)uVar2 * 0x98 + 0x10) < (longlong)(pFVar16->Size + uVar17))
      || (pFVar16->Size < 1)) ||
     ((AIOP_CriticalPath < (byte)(char)pFVar16->PriorityAndFlags ||
      (((int)pFVar16->Status < 0 || (2 < (int)pFVar16->Status)))))) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset + Request.Size <= Pak.TotalSize && Request.Size > 0 && Request.GetPriority() >= AIOP_MIN && Request.GetPriority() <= AIOP_MAX && int32(Request.Status) >= 0 && int32(Request.Status) < int32(EInRequestStatus::Num)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x5a5,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  EVar3 = pFVar16->PriorityAndFlags;
  uVar11 = *(uint *)(pFVar6 + (ulonglong)uVar2 * 0x98 + 0x24);
  uVar12 = *(uint *)(pFVar6 + (ulonglong)uVar2 * 0x98 + 0x20);
  EVar4 = pFVar16->Status;
  uVar10 = (this->InRequestAllocator).SaltMask;
  uVar13 = ~uVar10 & param_1;
  if ((((uVar10 & param_1) != (this->InRequestAllocator).Salt) || (uVar13 == 0)) ||
     ((uint)(this->InRequestAllocator).Items.ArrayNum <= uVar13)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                       ,0x4a,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar10 = 0;
  if ((int)uVar13 < (this->InRequestAllocator).Items.ArrayNum) {
    uVar10 = ~uVar13 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = (pTVar1->Items).AllocatorInstance.Data;
  uVar15 = *(ulonglong *)(pFVar7 + (longlong)(int)uVar13 * 0x30) & 0xffffffffffff;
  bVar9 = RemoveFromIntervalTree<FPakPrecacher::FPakInRequest>
                    ((uint *)(pFVar6 + ((longlong)(int)EVar4 + 0xd +
                                       (ulonglong)(EVar3 & AIOP_PRIORITY_MASK) * 3) * 4 +
                                       (ulonglong)uVar2 * 0x98),pTVar1,param_1,uVar15,
                     (uVar15 - 1) + *(longlong *)(pFVar7 + (longlong)(int)uVar13 * 0x30 + 8),uVar12,
                     uVar11);
  if (bVar9) {
    local_80 = &local_68;
    uVar14 = lVar5 + -1 + uVar17;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPakPrecacher::RemoveRequest'::__l12::<lambda_1>,bool,unsigned_int>
               ::Call;
    local_68 = this;
    local_60 = uVar14;
    local_58 = (byte)(EVar3 >> 9) & 1;
    MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
              ((uint *)(pFVar6 + (ulonglong)uVar2 * 0x98 + 0x80),&this->CacheBlockAllocator,uVar17,
               uVar14,0,*(ulong64 *)(pFVar6 + (ulonglong)uVar2 * 0x98 + 0x18),
               *(uint *)(pFVar6 + (ulonglong)uVar2 * 0x98 + 0x20),
               *(uint *)(pFVar6 + (ulonglong)uVar2 * 0x98 + 0x24),
               (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_88);
    if (*(char *)(*(longlong *)(pFVar6 + (ulonglong)uVar2 * 0x98 + 8) + 0x340) == '\0') {
      TrimCache(this,false,uVar2);
    }
    local_70 = &local_90;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPakPrecacher::RemoveRequest'::__l12::<lambda_2>,bool,unsigned_int>
               ::Call;
    local_90 = this;
    OverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
              (*(uint *)(pFVar6 + (ulonglong)uVar2 * 0x98 + 0x7c),&this->CacheBlockAllocator,uVar17,
               uVar14,0,*(ulong64 *)(pFVar6 + (ulonglong)uVar2 * 0x98 + 0x18),
               *(uint *)(pFVar6 + (ulonglong)uVar2 * 0x98 + 0x20),
               *(uint *)(pFVar6 + (ulonglong)uVar2 * 0x98 + 0x24),
               (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_78);
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0x5f0,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  ClearRequest(this,pFVar16);
  return;
}

// Shutdown @ 142aa06f0

/* WARNING: Removing unreachable block (ram,0x000142aa0716) */
/* WARNING: Removing unreachable block (ram,0x000142aa072c) */
/* WARNING: Removing unreachable block (ram,0x000142aa0967) */
/* WARNING: Removing unreachable block (ram,0x000142aa0974) */
/* WARNING: Removing unreachable block (ram,0x000142aa099d) */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVersion": Some values do not have unique names */

void __cdecl FPakPrecacher::Shutdown(void)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  FPakPrecacher *pFVar6;
  bool bVar7;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  pFVar6 = PakPrecacherSingleton;
  if (PakPrecacherSingleton != (FPakPrecacher *)0x0) {
    LOCK();
    PakPrecacherSingleton = (FPakPrecacher *)0x0;
    UNLOCK();
    TrimCache(pFVar6,true,0xffff);
    QueryPerformanceCounter(&local_res8);
    dVar5 = __real_4024000000000000;
    fVar4 = __real_3a83126f;
    lpCriticalSection = &pFVar6->CachedFilesScopeLock;
    dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      bVar7 = HasRequestsAtStatus(pFVar6,Waiting);
      if ((!bVar7) && (bVar7 = HasRequestsAtStatus(pFVar6,InFlight), !bVar7)) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pFVar6 = PakPrecacherSingleton;
        if (PakPrecacherSingleton != (FPakPrecacher *)0x0) {
          DeleteCriticalSection
                    ((LPCRITICAL_SECTION)&PakPrecacherSingleton->SetAsyncMinimumPriorityScopeLock);
          pFVar1 = (pFVar6->RequestsToDelete).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          DestructItems<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)
                     (pFVar6->OffsetAndPakIndexOfSavedBlocked).AllocatorInstance.Data,
                     (pFVar6->OffsetAndPakIndexOfSavedBlocked).ArrayNum);
          pFVar1 = (pFVar6->OffsetAndPakIndexOfSavedBlocked).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)&(pFVar6->OutstandingRequests).field_0x48 = 0;
          pvVar2 = *(void **)&(pFVar6->OutstandingRequests).field_0x40;
          if (pvVar2 != (void *)0x0) {
            FMemory::Free(pvVar2);
          }
          TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&pFVar6->OutstandingRequests);
          pFVar1 = (pFVar6->CacheBlockAllocator).FreeItems.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          pFVar1 = (pFVar6->CacheBlockAllocator).Items.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          pFVar1 = (pFVar6->InRequestAllocator).FreeItems.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          pFVar1 = (pFVar6->InRequestAllocator).Items.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          DestructItems<FPakPrecacher::FPakData,int>
                    ((FPakData *)(pFVar6->CachedPakData).AllocatorInstance.Data,
                     (pFVar6->CachedPakData).ArrayNum);
          pFVar1 = (pFVar6->CachedPakData).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          *(undefined4 *)&(pFVar6->CachedPaks).field_0x48 = 0;
          pvVar2 = *(void **)&(pFVar6->CachedPaks).field_0x40;
          if (pvVar2 != (void *)0x0) {
            FMemory::Free(pvVar2);
          }
          TSparseArray<TSparseSetElement<TTuple<FPakFile_*,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FPakFile_*,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FPakFile_*,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&pFVar6->CachedPaks);
          DeleteCriticalSection((LPCRITICAL_SECTION)&pFVar6->CachedFilesScopeLock);
          ::operator_delete(pFVar6,0x2c8);
        }
        PakPrecacherSingleton = (FPakPrecacher *)0x0;
        return;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      FWindowsPlatformProcess::SleepNoStats(fVar4);
      QueryPerformanceCounter(&local_res10);
    } while ((double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar3 <= dVar5);
    if (1 < (byte)LogPakFile._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_static_void___cdecl_FPakPrecacher::Shutdown(void)'::__l14::LOG_Static,
                 (FLogCategoryBase *)&LogPakFile);
    }
  }
  return;
}

// StartBlockTask @ 142aa10f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakPrecacher::StartBlockTask(FPakPrecacher *this,FCacheBlock *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  ulong64 uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FRequestToLower *pFVar10;
  IAsyncReadRequest *pIVar11;
  undefined ***pppuVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_a8 [32];
  code **local_88;
  longlong local_80;
  undefined2 local_6b;
  undefined1 local_69;
  code *local_68 [2];
  undefined **local_58;
  FPakPrecacher *local_50;
  int local_48;
  undefined1 local_44;
  undefined2 local_43;
  undefined1 local_41;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  iVar13 = 0;
  if (0 < GPakCache_MaxRequestsToLowerLevel) {
    pFVar10 = this->RequestsToLower;
    do {
      if (pFVar10->RequestHandle == (IAsyncReadRequest *)0x0) {
        if (-1 < iVar13) {
          if ((param_1->Status != InFlight) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Block.Status == EBlockStatus::InFlight",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                 ,0x79a,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (6 < (byte)LogPakFile._0_1_) {
            UE::Logging::Private::BasicLog<7>
                      (&`private:_void___cdecl_FPakPrecacher::StartBlockTask(FPakPrecacher::FCacheBlock&___ptr64)___ptr64'
                        ::__l20::LOG_Static,(FLogCategoryBase *)&LogPakFile);
          }
          uVar1 = *(ushort *)((longlong)&param_1->OffsetAndPakIndex + 6);
          if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result < CachedPakData.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                 ,0x3c4,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar2 = (this->CachedPakData).ArrayNum;
          if ((iVar2 <= (int)(uint)uVar1) &&
             (local_88 = (code **)(ulonglong)uVar1, local_80 = (longlong)iVar2,
             bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar9 = param_1->Index;
          pFVar4 = (this->CachedPakData).AllocatorInstance.Data;
          this->RequestsToLower[iVar13].BlockIndex = uVar9;
          this->RequestsToLower[iVar13].RequestSize = param_1->Size;
          this->RequestsToLower[iVar13].Memory = (uchar *)0x0;
          uVar3 = (this->CacheBlockAllocator).SaltMask;
          uVar14 = ~uVar3 & uVar9;
          if (((((uVar3 & uVar9) != (this->CacheBlockAllocator).Salt) || (uVar14 == 0)) ||
              ((uint)(this->CacheBlockAllocator).Items.ArrayNum <= uVar14)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(InIndex & SaltMask) == Salt && Index != IntervalTreeInvalidIndex && Index >= 0 && Index < (uint32)Items.Num()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakIntervalTree.inl"
                                 ,0x4a,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar2 = (this->CacheBlockAllocator).Items.ArrayNum;
          uVar9 = 0;
          if ((int)uVar14 < iVar2) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if (uVar9 == 0) {
            local_88 = (code **)(longlong)(int)uVar14;
            local_80 = (longlong)iVar2;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (((FCacheBlock *)
               ((this->CacheBlockAllocator).Items.AllocatorInstance.Data +
               (longlong)(int)uVar14 * 0x30) != param_1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("&CacheBlockAllocator.Get(RequestsToLower[IndexToFill].BlockIndex) == &Block"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                 ,0x7a1,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          LOCK();
          GPreCacheTotalLoaded = GPreCacheTotalLoaded + param_1->Size;
          UNLOCK();
          LOCK();
          GTotalLoaded = GTotalLoaded + param_1->Size;
          UNLOCK();
          local_58 = &
                     ___7__TFunction_OwnedObject_V<lambda_1>__1__StartBlockTask_FPakPrecacher__AEAAXAEAUFCacheBlock_3__Z__0A__0A__Function_Private_Core_UE__6B_
          ;
          local_88 = local_68;
          local_43 = local_6b;
          local_41 = local_69;
          local_68[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FPakPrecacher::StartBlockTask'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
                        ::Call;
          local_40 = (undefined ***)0x0;
          local_44 = 1;
          plVar5 = *(longlong **)(pFVar4 + (ulonglong)uVar1 * 0x98);
          local_80 = 0;
          local_50 = this;
          local_48 = iVar13;
          pIVar11 = (IAsyncReadRequest *)
                    (**(code **)(*plVar5 + 0x10))
                              (plVar5,param_1->OffsetAndPakIndex & 0xffffffffffff,param_1->Size,3);
          this->RequestsToLower[iVar13].RequestHandle = pIVar11;
          uVar6 = this->LastReadRequest;
          this->LastReadRequest = param_1->Size + param_1->OffsetAndPakIndex;
          if (uVar6 == param_1->OffsetAndPakIndex) {
            GPreCacheContiguousReads = GPreCacheContiguousReads + 1;
          }
          else if ((short)(uVar6 >> 0x30) == (short)(param_1->OffsetAndPakIndex >> 0x30)) {
            GPreCacheSeeks = GPreCacheSeeks + 1;
          }
          else {
            GPreCacheBadSeeks = GPreCacheBadSeeks + 1;
          }
          this->Loads = this->Loads + 1;
          this->LoadSize = this->LoadSize + param_1->Size;
          if (local_68[0] == (code *)0x0) {
            return;
          }
          pppuVar12 = &local_58;
          if (local_40 != (undefined ***)0x0) {
            pppuVar12 = local_40;
          }
          (*(code *)(*pppuVar12)[2])();
          return;
        }
        break;
      }
      iVar13 = iVar13 + 1;
      pFVar10 = pFVar10 + 1;
    } while (iVar13 < GPakCache_MaxRequestsToLowerLevel);
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                     ,0x796,L"");
  if (!bVar8) {
    return;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// StartNextRequest @ 142aa14b0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall FPakPrecacher::StartNextRequest(FPakPrecacher *this)

{
  bool bVar1;
  int iVar2;
  FRequestToLower *pFVar3;
  
  iVar2 = 0;
  if (0 < GPakCache_MaxRequestsToLowerLevel) {
    pFVar3 = this->RequestsToLower;
    do {
      if (pFVar3->RequestHandle == (IAsyncReadRequest *)0x0) {
        if (iVar2 < 0) {
          return false;
        }
        bVar1 = HasRequestsAtStatus(this,Waiting);
        if (!bVar1) {
          return false;
        }
        bVar1 = AddNewBlock(this);
        return bVar1;
      }
      iVar2 = iVar2 + 1;
      pFVar3 = pFVar3 + 1;
    } while (iVar2 < GPakCache_MaxRequestsToLowerLevel);
  }
  return false;
}

// StartSignatureCheck @ 142aa1a70

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FPakPrecacher::StartSignatureCheck
          (FPakPrecacher *this,bool param_1,IAsyncReadRequest *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 local_res10 [8];
  IAsyncReadRequest *local_res18;
  int local_res20;
  FConstructor local_18;
  undefined8 *local_10 [2];
  
  local_18.Prerequisites =
       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  local_res10[0] = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  TGraphTask<FAsyncIOSignatureCheckTask>::FConstructor::
  ConstructAndDispatchWhenReady<bool_&,IAsyncReadRequest_*_&,int_&>
            (&local_18,(bool *)local_10,(IAsyncReadRequest **)local_res10,(int *)&local_res18);
  if (local_10[0] != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_10[0] + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142aa1acd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*local_10[0])(local_10[0],1);
      return;
    }
  }
  return;
}

// TrimCache @ 142aa4280

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakPrecacher::TrimCache(FPakPrecacher *this,bool param_1,ushort param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint local_res20;
  char local_128 [4];
  uint local_124;
  uint local_120;
  longlong local_118;
  undefined8 local_110;
  ulonglong local_108;
  longlong local_100;
  ForAnyElementType local_f8;
  int local_f0 [2];
  ulonglong local_e8;
  FPakPrecacher *local_e0;
  LARGE_INTEGER local_d8;
  FPakPrecacher *local_d0;
  code *local_c8;
  FPakPrecacher **local_c0;
  code *local_b8;
  FPakPrecacher **local_b0;
  code *local_a8;
  FPakPrecacher **local_a0;
  FPakPrecacher *local_98;
  double local_90;
  char *local_88;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  local_120 = (uint)param_2;
  if ((GPakCache_UseNewTrim == 0) || (param_1)) {
    uVar12 = 0;
    if (param_2 == 0xffff) {
      uVar16 = (this->CachedPakData).ArrayNum;
      local_res20 = uVar16 & 0xffff;
      local_120 = 0;
      if (((uVar16 != local_res20) || (uVar13 = 0, (int)uVar16 < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
         uVar13 = 0, bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_res20 = param_2 + 1;
      uVar13 = (ulonglong)param_2;
    }
    if ((ushort)uVar13 < (ushort)local_res20) {
      local_100 = uVar13 * 0x98;
      local_108 = uVar13;
      do {
        iVar9 = (int)(uVar13 & 0xffff);
        if (((this->CachedPakData).ArrayNum <= iVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar19 = (uVar13 & 0xffff) * 0x98;
        if (*(longlong *)((this->CachedPakData).AllocatorInstance.Data + lVar19) != 0) {
          if (((this->CachedPakData).ArrayNum <= iVar9) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar16 = *(uint *)(*(longlong *)
                              ((this->CachedPakData).AllocatorInstance.Data + lVar19 + 8) + 0x33c);
          if (((int)uVar16 < 0) || ((this->OffsetAndPakIndexOfSavedBlocked).ArrayNum <= (int)uVar16)
             ) {
            if (1 < (byte)LogPakFile._0_1_) {
              if (((this->CachedPakData).ArrayNum <= (int)((uint)uVar13 & 0xffff)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              ::FName::ToString((FName *)((this->CachedPakData).AllocatorInstance.Data +
                                         local_100 + 0x2c),local_60);
              UE::Logging::Private::BasicLog<2>
                        (&`private:_void___cdecl_FPakPrecacher::TrimCache(bool,unsigned_short)___ptr64'
                          ::__l102::LOG_Static,(FLogCategoryBase *)&LogPakFile);
              if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            uVar18 = GPakCache_NumUnreferencedBlocksToCache;
            if (param_1) {
              uVar18 = uVar12;
            }
            local_124 = ~uVar16 >> 0x1f;
            if (((int)uVar16 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_e8 = (longlong)(int)uVar16 * 0x10;
            uVar18 = *(int *)((this->OffsetAndPakIndexOfSavedBlocked).AllocatorInstance.Data +
                             local_e8 + 8) - uVar18;
            if ((int)uVar18 < 0) {
              uVar18 = uVar12;
            }
            if (uVar18 != 0) {
              uVar17 = 0;
              if (0 < (int)uVar18) {
                local_118 = 0;
                local_110 = 0;
                uVar13 = 0;
                do {
                  uVar11 = local_e8;
                  uVar10 = uVar12;
                  if ((int)uVar16 < (this->OffsetAndPakIndexOfSavedBlocked).ArrayNum) {
                    uVar10 = local_124;
                  }
                  if ((uVar10 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar1 = (this->OffsetAndPakIndexOfSavedBlocked).AllocatorInstance.Data;
                  uVar8 = (uint)uVar13;
                  uVar10 = uVar17;
                  if ((int)uVar8 < *(int *)(pFVar1 + uVar11 + 8)) {
                    uVar10 = ~uVar8 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  uVar13 = *(ulonglong *)(local_118 + *(longlong *)(pFVar1 + uVar11));
                  uVar10 = (uint)(ushort)(uVar13 >> 0x30);
                  if (((this->CachedPakData).ArrayNum <= (int)uVar10) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Result < CachedPakData.Num()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                         ,0x3c4,L""), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (((this->CachedPakData).ArrayNum <= (int)uVar10) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar1 = (this->CachedPakData).AllocatorInstance.Data;
                  lVar19 = (uVar13 >> 0x30) * 0x98;
                  local_a0 = &local_d0;
                  local_a8 = UE::Core::Private::Function::
                             TFunctionRefCaller<`FPakPrecacher::TrimCache'::__l124::<lambda_3>,bool,unsigned_int>
                             ::Call;
                  local_d0 = this;
                  MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
                            ((uint *)(pFVar1 + lVar19 + 0x80),&this->CacheBlockAllocator,
                             uVar13 & 0xffffffffffff,uVar13 & 0xffffffffffff,0,
                             *(ulong64 *)(pFVar1 + lVar19 + 0x18),*(uint *)(pFVar1 + lVar19 + 0x20),
                             *(uint *)(pFVar1 + lVar19 + 0x24),
                             (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_a8);
                  uVar13 = (ulonglong)(uVar8 + 1);
                  local_118 = local_118 + 8;
                  local_110 = local_110 + 1;
                } while ((int)(uVar8 + 1) < (int)uVar18);
              }
              uVar10 = uVar17;
              if ((int)uVar16 < (this->OffsetAndPakIndexOfSavedBlocked).ArrayNum) {
                uVar10 = ~uVar16 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar1 = (this->OffsetAndPakIndexOfSavedBlocked).AllocatorInstance.Data;
              lVar19 = (longlong)(int)uVar16 * 0x10;
              if ((int)uVar18 <= *(int *)(pFVar1 + lVar19 + 8)) {
                uVar17 = ~uVar18 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (*(int *)(pFVar1 + lVar19 + 8) - uVar18 != 0) {
                memmove(*(void **)(pFVar1 + lVar19),
                        (void *)((longlong)*(void **)(pFVar1 + lVar19) + (longlong)(int)uVar18 * 8),
                        (longlong)(int)(*(int *)(pFVar1 + lVar19 + 8) - uVar18) << 3);
              }
              *(uint *)(pFVar1 + lVar19 + 8) = *(int *)(pFVar1 + lVar19 + 8) - uVar18;
              uVar13 = (ulonglong)local_120;
            }
          }
        }
        local_108 = local_108 + 1;
        uVar15 = (short)uVar13 + 1;
        uVar13 = CONCAT62((int6)(uVar13 >> 0x10),uVar15);
        local_100 = local_100 + 0x98;
        local_120 = (uint)uVar13;
      } while (uVar15 < (ushort)local_res20);
    }
  }
  else {
    uVar12 = (this->CachedPakData).ArrayNum;
    uVar16 = uVar12 & 0xffff;
    uVar15 = (ushort)uVar12;
    local_110 = CONCAT44(local_110._4_4_,uVar12) & 0xffffffff0000ffff;
    if (((uVar12 != (uVar12 & 0xffff)) || ((int)uVar12 < 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4))
    {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar9 = (this->OffsetAndPakIndexOfSavedBlocked).ArrayNum;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar9,&local_f8,local_f0,local_f0 + 1);
    memset(local_f8.Data + iVar7,0,(longlong)iVar9);
    local_118 = (longlong)(GPakCache_MaxBlockMemory << 0x14);
    if (local_118 < this->BlockMemory) {
      while( true ) {
        uVar11 = 0;
        uVar13 = uVar11;
        if (0 < local_f0[0]) {
          do {
            uVar18 = (uint)uVar11;
            uVar12 = 0;
            if ((int)uVar18 < local_f0[0]) {
              uVar12 = ~uVar18 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar11 = (ulonglong)(uVar18 + 1);
            local_f8.Data[uVar13] = (FScriptContainerElement)0x0;
            uVar13 = uVar13 + 1;
          } while ((int)(uVar18 + 1) < local_f0[0]);
        }
        bVar4 = true;
        uVar6 = 0;
        local_124 = local_124 & 0xffff0000;
        uVar15 = 0;
        if ((short)uVar16 == 0) break;
        do {
          if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar6) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar19 = (ulonglong)uVar6 * 0x98;
          if (*(longlong *)((this->CachedPakData).AllocatorInstance.Data + lVar19) != 0) {
            if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar6) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar12 = *(uint *)(*(longlong *)
                                ((this->CachedPakData).AllocatorInstance.Data + lVar19 + 8) + 0x33c)
            ;
            lVar14 = (longlong)(int)uVar12;
            if (((int)uVar12 < 0) ||
               ((this->OffsetAndPakIndexOfSavedBlocked).ArrayNum <= (int)uVar12)) {
              if (1 < (byte)LogPakFile._0_1_) {
                if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar6) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                ::FName::ToString((FName *)((this->CachedPakData).AllocatorInstance.Data +
                                           lVar19 + 0x2c),&local_80);
                UE::Logging::Private::BasicLog<2>
                          (&`private:_void___cdecl_FPakPrecacher::TrimCache(bool,unsigned_short)___ptr64'
                            ::__l18::LOG_Static,(FLogCategoryBase *)&LogPakFile);
                if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_80.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              uVar17 = ~uVar12 >> 0x1f;
              uVar18 = 0;
              uVar16 = uVar18;
              if ((int)uVar12 < local_f0[0]) {
                uVar16 = uVar17;
              }
              if ((uVar16 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (local_f8.Data[lVar14] != (FScriptContainerElement)0x1) {
                uVar16 = uVar18;
                if ((int)uVar12 < local_f0[0]) {
                  uVar16 = uVar17;
                }
                if ((uVar16 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                local_f8.Data[lVar14] = (FScriptContainerElement)0x1;
                uVar16 = uVar18;
                if ((int)uVar12 < (this->OffsetAndPakIndexOfSavedBlocked).ArrayNum) {
                  uVar16 = uVar17;
                }
                if ((uVar16 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                uVar16 = uVar18;
                if ((int)uVar12 < (this->OffsetAndPakIndexOfSavedBlocked).ArrayNum) {
                  uVar16 = uVar17;
                }
                if ((uVar16 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                lVar14 = lVar14 * 0x10;
                if (*(int *)((this->OffsetAndPakIndexOfSavedBlocked).AllocatorInstance.Data +
                            lVar14 + 8) != 0) {
                  bVar4 = false;
                  if ((int)uVar12 < (this->OffsetAndPakIndexOfSavedBlocked).ArrayNum) {
                    uVar18 = uVar17;
                  }
                  if ((uVar18 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar1 = (this->OffsetAndPakIndexOfSavedBlocked).AllocatorInstance.Data;
                  if ((*(int *)(pFVar1 + lVar14 + 8) < 1) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  uVar13 = **(ulonglong **)(pFVar1 + lVar14);
                  uVar16 = (uint)(ushort)(uVar13 >> 0x30);
                  if (((this->CachedPakData).ArrayNum <= (int)uVar16) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Result < CachedPakData.Num()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                         ,0x3c4,L""), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (((this->CachedPakData).ArrayNum <= (int)uVar16) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar1 = (this->CachedPakData).AllocatorInstance.Data;
                  lVar19 = (uVar13 >> 0x30) * 0x98;
                  local_c0 = &local_e0;
                  local_c8 = UE::Core::Private::Function::
                             TFunctionRefCaller<`FPakPrecacher::TrimCache'::__l44::<lambda_1>,bool,unsigned_int>
                             ::Call;
                  local_e0 = this;
                  MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
                            ((uint *)(pFVar1 + lVar19 + 0x80),&this->CacheBlockAllocator,
                             uVar13 & 0xffffffffffff,uVar13 & 0xffffffffffff,0,
                             *(ulong64 *)(pFVar1 + lVar19 + 0x18),*(uint *)(pFVar1 + lVar19 + 0x20),
                             *(uint *)(pFVar1 + lVar19 + 0x24),
                             (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_c8);
                  uVar16 = 0;
                  if ((int)uVar12 < (this->OffsetAndPakIndexOfSavedBlocked).ArrayNum) {
                    uVar16 = uVar17;
                  }
                  if ((uVar16 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar1 = (this->OffsetAndPakIndexOfSavedBlocked).AllocatorInstance.Data;
                  if ((*(int *)(pFVar1 + lVar14 + 8) < 1) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x458,
                                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (*(int *)(pFVar1 + lVar14 + 8) + -1 != 0) {
                    memmove(*(void **)(pFVar1 + lVar14),
                            (void *)((longlong)*(void **)(pFVar1 + lVar14) + 8),
                            (longlong)(*(int *)(pFVar1 + lVar14 + 8) + -1) << 3);
                  }
                  *(int *)(pFVar1 + lVar14 + 8) = *(int *)(pFVar1 + lVar14 + 8) + -1;
                }
              }
            }
          }
          uVar15 = (ushort)local_110;
          uVar6 = (short)local_124 + 1;
          local_124 = CONCAT22(local_124._2_2_,uVar6);
        } while (uVar6 < uVar15);
        if ((bVar4) || (uVar16 = (uint)local_110, this->BlockMemory <= local_118)) break;
      }
    }
    if (GPakCache_TimeToTrim != 0.0) {
      QueryPerformanceCounter(&local_d8);
      uVar6 = 0;
      dVar3 = (double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
      if (uVar15 != 0) {
        local_118 = 0;
        local_100 = 0;
        do {
          lVar19 = local_100;
          if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar6) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(longlong *)((this->CachedPakData).AllocatorInstance.Data + (ulonglong)uVar6 * 0x98)
              != 0) {
            if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar6) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_120 = *(uint *)(*(longlong *)
                                   ((this->CachedPakData).AllocatorInstance.Data +
                                   (ulonglong)uVar6 * 0x98 + 8) + 0x33c);
            uVar13 = (ulonglong)(int)local_120;
            if (((int)local_120 < 0) ||
               ((this->OffsetAndPakIndexOfSavedBlocked).ArrayNum <= (int)local_120)) {
              if (1 < (byte)LogPakFile._0_1_) {
                if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar6) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                ::FName::ToString((FName *)((this->CachedPakData).AllocatorInstance.Data +
                                           lVar19 + 0x2c),&local_70);
                UE::Logging::Private::BasicLog<2>
                          (&`private:_void___cdecl_FPakPrecacher::TrimCache(bool,unsigned_short)___ptr64'
                            ::__l59::LOG_Static,(FLogCategoryBase *)&LogPakFile);
                if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_70.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              uVar16 = 0;
              uVar12 = ~local_120 >> 0x1f;
              local_124 = uVar12;
              if (((int)local_120 < 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              lVar19 = uVar13 * 0x10;
              local_e8 = uVar13;
              if (*(int *)((this->OffsetAndPakIndexOfSavedBlocked).AllocatorInstance.Data +
                          lVar19 + 8) != 0) {
                local_108 = 0;
                uVar18 = 0;
                uVar17 = 0;
                while( true ) {
                  uVar8 = (uint)uVar13;
                  uVar10 = uVar16;
                  if ((int)uVar8 < (this->OffsetAndPakIndexOfSavedBlocked).ArrayNum) {
                    uVar10 = uVar12;
                  }
                  if ((uVar10 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (*(int *)((this->OffsetAndPakIndexOfSavedBlocked).AllocatorInstance.Data +
                              lVar19 + 8) <= (int)uVar18) break;
                  uVar10 = uVar16;
                  if ((int)uVar8 < (this->OffsetAndPakIndexOfSavedBlocked).ArrayNum) {
                    uVar10 = uVar12;
                  }
                  if ((uVar10 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar1 = (this->OffsetAndPakIndexOfSavedBlocked).AllocatorInstance.Data;
                  uVar12 = uVar16;
                  if ((int)uVar18 < *(int *)(pFVar1 + lVar19 + 8)) {
                    uVar12 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar12 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  uVar13 = *(ulonglong *)(local_108 + *(longlong *)(pFVar1 + lVar19));
                  uVar12 = (uint)(ushort)(uVar13 >> 0x30);
                  if (((this->CachedPakData).ArrayNum <= (int)uVar12) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Result < CachedPakData.Num()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                         ,0x3c4,L""), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (((this->CachedPakData).ArrayNum <= (int)uVar12) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar1 = (this->CachedPakData).AllocatorInstance.Data;
                  local_128[0] = '\x01';
                  lVar14 = (uVar13 >> 0x30) * 0x98;
                  local_88 = local_128;
                  local_b0 = &local_98;
                  local_b8 = UE::Core::Private::Function::
                             TFunctionRefCaller<`FPakPrecacher::TrimCache'::__l81::<lambda_2>,bool,unsigned_int>
                             ::Call;
                  local_98 = this;
                  local_90 = dVar3;
                  MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
                            ((uint *)(pFVar1 + lVar14 + 0x80),&this->CacheBlockAllocator,
                             uVar13 & 0xffffffffffff,uVar13 & 0xffffffffffff,0,
                             *(ulong64 *)(pFVar1 + lVar14 + 0x18),*(uint *)(pFVar1 + lVar14 + 0x20),
                             *(uint *)(pFVar1 + lVar14 + 0x24),
                             (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_b8);
                  uVar13 = (ulonglong)local_120;
                  uVar12 = local_124;
                  uVar8 = local_120;
                  if (local_128[0] == '\0') break;
                  uVar17 = uVar17 + 1;
                  uVar18 = uVar18 + 1;
                  local_108 = local_108 + 8;
                }
                if (uVar17 != 0) {
                  uVar16 = 0;
                  if ((int)uVar8 < (this->OffsetAndPakIndexOfSavedBlocked).ArrayNum) {
                    uVar16 = uVar12;
                  }
                  if ((uVar16 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar1 = (this->OffsetAndPakIndexOfSavedBlocked).AllocatorInstance.Data;
                  uVar12 = 0;
                  if ((int)uVar17 <= *(int *)(pFVar1 + lVar19 + 8)) {
                    uVar12 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar12 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x458,
                                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (*(int *)(pFVar1 + lVar19 + 8) - uVar17 != 0) {
                    memmove(*(void **)(pFVar1 + lVar19),
                            (void *)((longlong)*(void **)(pFVar1 + lVar19) +
                                    (longlong)(int)uVar17 * 8),
                            (longlong)(int)(*(int *)(pFVar1 + lVar19 + 8) - uVar17) << 3);
                  }
                  *(uint *)(pFVar1 + lVar19 + 8) = *(int *)(pFVar1 + lVar19 + 8) - uVar17;
                }
              }
            }
          }
          local_118 = local_118 + 1;
          uVar6 = uVar6 + 1;
          local_100 = local_100 + 0x98;
        } while (uVar6 < (ushort)local_110);
      }
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
  }
  return;
}

// Unmount @ 142aa9510

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakPrecacher::Unmount(FPakPrecacher *this,FName param_1,FPakFile *param_2)

{
  TMap<FPakFile_*,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPakFile_*,unsigned_short,0>_>
  *pTVar1;
  TArray<FPakPrecacher::FPakData,TSizedDefaultAllocator<32>_> *this_00;
  ushort uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  TIntervalTreeAllocator<FPakPrecacher::FPakInRequest> *pTVar14;
  longlong lVar15;
  FName local_res10;
  FPakFile *local_res18;
  char local_res20 [8];
  undefined1 auStack_160 [16];
  uint uStack_150;
  uint uStack_14c;
  longlong local_148;
  TSet<TTuple<FPakFile_*,unsigned_short>,TDefaultMapHashableKeyFuncs<FPakFile_*,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_140;
  TSet<TTuple<FPakFile_*,unsigned_short>,TDefaultMapHashableKeyFuncs<FPakFile_*,unsigned_short,0>,FDefaultSetAllocator>
  *local_138;
  undefined2 local_130;
  char *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  LPCRITICAL_SECTION local_100;
  code *local_f8;
  char **local_f0;
  code *local_e8;
  char **local_e0;
  code *local_d8;
  char **local_d0;
  code *local_c8;
  char **local_c0;
  code *local_b8;
  char **local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FPakFile_*,unsigned_short>,TDefaultMapHashableKeyFuncs<FPakFile_*,unsigned_short,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CachedFilesScopeLock;
  local_res10 = param_1;
  local_res18 = param_2;
  local_100 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  pTVar1 = &this->CachedPaks;
  TSet<TTuple<FPakFile_*,unsigned_short>,TDefaultMapHashableKeyFuncs<FPakFile_*,unsigned_short,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FPakFile_*,unsigned_short>,TDefaultMapHashableKeyFuncs<FPakFile_*,unsigned_short,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_130 = 0;
  stack0xfffffffffffffea8 = local_78._16_16_;
  auStack_160._0_8_ = local_78._8_8_;
  local_148 = local_58;
  pTStack_140 = pTStack_50;
  uVar7 = local_78._24_8_ >> 0x20;
  uVar8 = local_78._28_4_;
  local_138 = (TSet<TTuple<FPakFile_*,unsigned_short>,TDefaultMapHashableKeyFuncs<FPakFile_*,unsigned_short,0>,FDefaultSetAllocator>
               *)pTVar1;
  if ((int)uVar8 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      if (*(FName *)(*(longlong *)(*(longlong *)local_78._0_8_ + (longlong)(int)uVar7 * 0x18) + 0x28
                    ) == local_res10) {
        uVar2 = *(ushort *)(*(longlong *)local_78._0_8_ + 8 + (longlong)(int)uVar8 * 0x18);
        TrimCache(this,true,0xffff);
        this_00 = &this->CachedPakData;
        if (((this->CachedPakData).ArrayNum <= (int)(uint)uVar2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_res20[0] = '\0';
        local_128 = local_res20;
        local_f0 = &local_128;
        lVar13 = (ulonglong)uVar2 << 0x30;
        local_f8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FPakPrecacher::Unmount'::__l7::<lambda_1>,bool,unsigned_int>
                   ::Call;
        pFVar9 = (this_00->AllocatorInstance).Data + (ulonglong)uVar2 * 0x98;
        OverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
                  (*(uint *)(pFVar9 + 0x80),&this->CacheBlockAllocator,0,
                   *(longlong *)(pFVar9 + 0x10) + -1 + lVar13,0,*(ulong64 *)(pFVar9 + 0x18),
                   *(uint *)(pFVar9 + 0x20),*(uint *)(pFVar9 + 0x24),
                   (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_f8);
        local_120 = local_res20;
        local_e0 = &local_120;
        local_e8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FPakPrecacher::Unmount'::__l7::<lambda_2>,bool,unsigned_int>
                   ::Call;
        OverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
                  (*(uint *)(pFVar9 + 0x7c),&this->CacheBlockAllocator,0,
                   *(longlong *)(pFVar9 + 0x10) + -1 + lVar13,0,*(ulong64 *)(pFVar9 + 0x18),
                   *(uint *)(pFVar9 + 0x20),*(uint *)(pFVar9 + 0x24),
                   (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_e8);
        local_d0 = &local_118;
        lVar15 = 5;
        pFVar12 = pFVar9 + 0x70;
        pTVar14 = &this->InRequestAllocator;
        local_d8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FPakPrecacher::Unmount'::__l9::<lambda_3>,bool,unsigned_int>
                   ::Call;
        local_c0 = &local_110;
        local_c8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FPakPrecacher::Unmount'::__l9::<lambda_4>,bool,unsigned_int>
                   ::Call;
        local_b0 = &local_108;
        local_b8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FPakPrecacher::Unmount'::__l9::<lambda_5>,bool,unsigned_int>
                   ::Call;
        while( true ) {
          local_118 = local_res20;
          OverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
                    (*(uint *)(pFVar12 + 8),pTVar14,0,*(longlong *)(pFVar9 + 0x10) + -1 + lVar13,0,
                     *(ulong64 *)(pFVar9 + 0x18),*(uint *)(pFVar9 + 0x20),*(uint *)(pFVar9 + 0x24),
                     (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_d8);
          local_110 = local_res20;
          OverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
                    (*(uint *)pFVar12,pTVar14,0,*(longlong *)(pFVar9 + 0x10) + -1 + lVar13,0,
                     *(ulong64 *)(pFVar9 + 0x18),*(uint *)(pFVar9 + 0x20),*(uint *)(pFVar9 + 0x24),
                     (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_c8);
          local_108 = local_res20;
          OverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
                    (*(uint *)(pFVar12 + 4),pTVar14,0,*(longlong *)(pFVar9 + 0x10) + -1 + lVar13,0,
                     *(ulong64 *)(pFVar9 + 0x18),*(uint *)(pFVar9 + 0x20),*(uint *)(pFVar9 + 0x24),
                     (TFunctionRef<bool___cdecl(unsigned_int)> *)&local_b8);
          if (lVar15 == 0) break;
          lVar15 = lVar15 + -1;
          pFVar12 = pFVar12 + -0xc;
        }
        if (local_res20[0] == '\0') {
          if (4 < (byte)LogPakFile._0_1_) {
            ::FName::ToString(&local_res10,&local_a8);
            UE::Logging::Private::BasicLog<5>
                      (&`public:_void___cdecl_FPakPrecacher::Unmount(FName,FPakFile*___ptr64)___ptr64'
                        ::__l16::LOG_Static,(FLogCategoryBase *)&LogPakFile);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          param_2 = local_res18;
          if (*(FPakFile **)(pFVar9 + 8) != local_res18) {
            if ((local_res18 != (FPakFile *)0x0) && (2 < (byte)LogPakFile._0_1_)) {
              ::FName::ToString(&local_res10,&local_98);
              UE::Logging::Private::BasicLog<3>
                        (&`public:_void___cdecl_FPakPrecacher::Unmount(FName,FPakFile*___ptr64)___ptr64'
                          ::__l40::LOG_Static,(FLogCategoryBase *)&LogPakFile);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
            }
            *(undefined1 *)(*(longlong *)(pFVar9 + 8) + 0x341) = 0;
          }
          TSet<TTuple<FPakFile_*,unsigned_short>,TDefaultMapHashableKeyFuncs<FPakFile_*,unsigned_short,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_140,uVar8);
          local_130 = CONCAT11(local_130._1_1_,1);
          if ((*(longlong *)pFVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pak.Handle",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                 ,0x998,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar3 = *(undefined8 **)pFVar9;
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          uVar8 = 0;
          *(longlong *)pFVar9 = 0;
          *(longlong *)(pFVar9 + 8) = 0;
          uVar10 = (this->CachedPakData).ArrayNum - 1;
          if (-1 < (int)uVar10) {
            lVar13 = (longlong)(int)uVar10 * 0x98;
            do {
              uVar6 = 0;
              if ((int)uVar10 < (this->CachedPakData).ArrayNum) {
                uVar6 = ~uVar10 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (*(longlong *)((this_00->AllocatorInstance).Data + lVar13) != 0) break;
              uVar8 = uVar8 + 1;
              lVar13 = lVar13 + -0x98;
              uVar10 = uVar10 - 1;
            } while (-1 < (int)uVar10);
            param_2 = local_res18;
            if (uVar8 != 0) {
              uVar10 = (this->CachedPakData).ArrayNum - uVar8;
              if (((int)(uVar10 | uVar8) < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              TArray<FPakPrecacher::FPakData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        (this_00,uVar10,uVar8);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x98,8,&this_00->AllocatorInstance,(this->CachedPakData).ArrayNum,
                         &(this->CachedPakData).ArrayMax);
              this->LastReadRequest = 0;
              param_2 = local_res18;
            }
          }
        }
        else {
          param_2 = local_res18;
          if (4 < (byte)LogPakFile._0_1_) {
            ::FName::ToString(&local_res10,&local_88);
            UE::Logging::Private::BasicLog<5>
                      (&`public:_void___cdecl_FPakPrecacher::Unmount(FName,FPakFile*___ptr64)___ptr64'
                        ::__l77::LOG_Static,(FLogCategoryBase *)&LogPakFile);
            param_2 = local_res18;
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
              param_2 = local_res18;
            }
          }
        }
      }
      uStack_150 = uStack_150 & ~auStack_160._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_160);
      lpCriticalSection = local_100;
      uVar7 = (ulonglong)uStack_14c;
      uVar8 = uStack_14c;
    } while ((int)uStack_14c < *(int *)(auStack_160._8_8_ + 0x18));
    if (((char)local_130 != '\0') && (local_130._1_1_ != '\0')) {
      iVar11 = 1;
      uVar8 = *(int *)&(local_138->Elements).field_0x8 - *(int *)&(local_138->Elements).field_0x34;
      if (3 < uVar8) {
        uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar11 = 1 << ((byte)lVar13 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_138->HashSize < iVar11)) || (iVar11 < local_138->HashSize)) {
        local_138->HashSize = iVar11;
        TSet<TTuple<FPakFile_*,unsigned_short>,TDefaultMapHashableKeyFuncs<FPakFile_*,unsigned_short,0>,FDefaultSetAllocator>
        ::Rehash(local_138);
      }
    }
  }
  if (param_2 != (FPakFile *)0x0) {
    param_2->bIsMounted = false;
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}

