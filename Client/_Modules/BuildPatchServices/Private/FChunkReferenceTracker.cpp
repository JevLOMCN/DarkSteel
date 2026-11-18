// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 13

// FChunkReferenceTracker @ 14327e5b0

FChunkReferenceTracker * __thiscall
BuildPatchServices::FChunkReferenceTracker::FChunkReferenceTracker
          (FChunkReferenceTracker *this,IBuildManifestSet *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TTuple<FGuid,int>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  FChunkReferenceTracker *pFVar12;
  longlong lVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  FIdentityFunctor local_res18;
  undefined1 local_res20 [8];
  undefined1 local_d8 [4];
  uint local_d4;
  ForElementType<unsigned_int> local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar18 = 0;
  pTVar1 = &this->UseList;
  iStack_a8 = 0;
  this->CurrentPosition = (atomic<int>)0x0;
  pTVar2 = &this->GuidUsagePositions;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_d0 = (ForElementType<unsigned_int>)&(param_2->Elements).field_0x10;
  (this->UseList).ArrayNum = 0;
  (this->UseList).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FChunkReferenceTracker_BuildPatchServices__6B_;
  (this->GuidUsagePositions).ArrayNum = 0;
  (this->GuidUsagePositions).ArrayMax = 0;
  uStack_a4 = 1;
  iVar5 = *(int *)&(param_2->Elements).field_0x28;
  local_90 = 0;
  iStack_94 = local_90;
  if (iVar5 != 0) {
    puVar17 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)local_d0;
    }
    uVar19 = *puVar17;
    local_90 = iVar18;
    iStack_a8 = iVar18;
    while (uVar19 == 0) {
      lVar13 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14327e692;
      uVar19 = (puVar17 + 1)[lVar13];
    }
    uStack_a4 = -uVar19 & uVar19;
    uVar4 = (ulonglong)uStack_a4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_80 = (int)lVar13;
    iStack_94 = local_90 + -1 + local_80;
    if (iVar5 < iStack_94) {
      iStack_94 = iVar5;
    }
  }
LAB_14327e692:
  uVar19 = *(uint *)&(param_2->Elements).field_0x28;
  iStack_88 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uVar20 = uVar19 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  TStack_70.CurrentBitIndex = iStack_94;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar19 >> 5;
  TStack_70._28_4_ = iStack_94;
  TStack_70.BaseBitIndex = local_90;
  uStack_50 = CONCAT44(uStack_84,iStack_88);
  local_d4 = uVar19;
  local_b0 = param_2;
  local_a0 = (undefined1 *)local_d0;
  iStack_8c = iStack_94;
  local_78 = param_2;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d0;
  if ((((int)uVar19 < 0) || (iVar5 < (int)uVar19)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FChunkReferenceTracker *)(*pcVar8)();
    return pFVar12;
  }
  uVar6 = *(int *)((longlong)local_d0 + 0x18);
  if (uVar19 != uVar6) {
    FVar16 = *(ForElementType<unsigned_int> *)((longlong)local_d0 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_d0 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_d0;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar14 * 4);
    while (uVar19 == 0) {
      lVar13 = (longlong)iVar14;
      uVar20 = uVar20 + 0x20;
      iVar14 = iVar14 + 1;
      uVar19 = uVar6;
      local_d4 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14327e7b0;
      uVar19 = *(uint *)((undefined1 *)((longlong)FVar16 + 4) + lVar13 * 4);
    }
    uVar4 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_7c = (int)lVar13;
    uVar19 = local_7c + -1 + uVar20;
    local_d4 = uVar19;
    if ((int)uVar6 < (int)uVar19) {
      uVar19 = uVar6;
      local_d4 = uVar6;
    }
  }
LAB_14327e7b0:
  do {
    pTVar10 = local_78;
    if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
        (int)uStack_50) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_70.CurrentBitIndex == uVar19) &&
        ((ForElementType<unsigned_int>)TStack_70.Array == local_d0)) && (pTVar10 == param_2)) {
      local_res18 = SUB81(param_2,0);
      AlgoImpl::IntroSortInternal<TTuple<FGuid,int>,int,FIdentityFunctor,TLess<void>_>
                ((TTuple<FGuid,int> *)(this->GuidUsagePositions).AllocatorInstance.Data,
                 (this->GuidUsagePositions).ArrayNum,local_res18,(TLess<void>)local_res18);
      return this;
    }
    lVar13 = (**(code **)((longlong)*param_1 + 0x70))
                       (param_1,*(longlong *)&pTVar10->Elements +
                                (longlong)TStack_70.CurrentBitIndex * 0x18);
    if (lVar13 != 0) {
      iVar5 = *(int *)(lVar13 + 0x50);
      pFVar15 = *(FScriptContainerElement **)(lVar13 + 0x48);
      pFVar3 = pFVar15 + (longlong)iVar5 * 0x18;
      while( true ) {
        if (*(int *)(lVar13 + 0x50) != iVar5) {
          local_d8[0] = 0;
          `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_d8);
        }
        uVar19 = local_d4;
        if (pFVar15 == pFVar3) break;
        pFVar7 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar7 <= pFVar15) && (pFVar15 < pFVar7 + (longlong)(this->UseList).ArrayMax * 0x10))
           && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FChunkReferenceTracker *)(*pcVar8)();
          return pFVar12;
        }
        iVar14 = (this->UseList).ArrayNum;
        if (iVar14 == (this->UseList).ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&pTVar1->AllocatorInstance,&(this->UseList).ArrayMax);
        }
        (this->UseList).ArrayNum = iVar14 + 1;
        uVar9 = *(undefined8 *)(pFVar15 + 8);
        pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
        *(undefined8 *)pFVar7 = *(undefined8 *)pFVar15;
        *(undefined8 *)(pFVar7 + 8) = uVar9;
        pFVar7 = (pTVar2->AllocatorInstance).Data;
        local_c8 = *(undefined8 *)pFVar15;
        uStack_c0 = *(undefined8 *)(pFVar15 + 8);
        local_b8 = iVar18;
        if (((pFVar7 <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 <
             pFVar7 + (longlong)(this->GuidUsagePositions).ArrayMax * 0x14)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FChunkReferenceTracker *)(*pcVar8)();
          return pFVar12;
        }
        iVar14 = (this->GuidUsagePositions).ArrayNum;
        if (iVar14 == (this->GuidUsagePositions).ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x414,&pTVar2->AllocatorInstance,&(this->GuidUsagePositions).ArrayMax)
          ;
        }
        iVar18 = iVar18 + 1;
        (this->GuidUsagePositions).ArrayNum = iVar14 + 1;
        pFVar15 = pFVar15 + 0x18;
        pFVar7 = (pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x14;
        *(undefined8 *)pFVar7 = local_c8;
        *(undefined8 *)(pFVar7 + 8) = uStack_c0;
        *(int *)(pFVar7 + 0x10) = local_b8;
      }
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// FChunkReferenceTracker @ 14327e9e0

FChunkReferenceTracker * __thiscall
BuildPatchServices::FChunkReferenceTracker::FChunkReferenceTracker
          (FChunkReferenceTracker *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FChunkReferenceTracker *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FIdentityFunctor local_res8 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  
  iVar8 = 0;
  (this->UseList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FChunkReferenceTracker_BuildPatchServices__6B_;
  this->CurrentPosition = (atomic<int>)0x0;
  (this->UseList).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->UseList).ArrayNum = param_1->ArrayNum;
  (this->UseList).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  (this->GuidUsagePositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GuidUsagePositions).ArrayNum = 0;
  (this->GuidUsagePositions).ArrayMax = 0;
  iVar1 = (this->UseList).ArrayNum;
  pFVar9 = (this->UseList).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->UseList).ArrayNum != iVar1) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar10) break;
    local_48 = *(undefined8 *)pFVar9;
    uStack_40 = *(undefined8 *)(pFVar9 + 8);
    pFVar2 = (this->GuidUsagePositions).AllocatorInstance.Data;
    local_38 = iVar8;
    if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 <
        pFVar2 + (longlong)(this->GuidUsagePositions).ArrayMax * 0x14)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FChunkReferenceTracker *)(*pcVar4)();
        return pFVar7;
      }
    }
    iVar6 = (this->GuidUsagePositions).ArrayNum;
    if (iVar6 == (this->GuidUsagePositions).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x414,&(this->GuidUsagePositions).AllocatorInstance,
                         &(this->GuidUsagePositions).ArrayMax);
    }
    iVar8 = iVar8 + 1;
    pFVar9 = pFVar9 + 0x10;
    (this->GuidUsagePositions).ArrayNum = iVar6 + 1;
    pFVar3 = (this->GuidUsagePositions).AllocatorInstance.Data;
    pFVar2 = pFVar3 + (longlong)iVar6 * 0x14;
    *(undefined8 *)pFVar2 = local_48;
    *(undefined8 *)(pFVar2 + 8) = uStack_40;
    *(int *)(pFVar3 + (longlong)iVar6 * 0x14 + 0x10) = local_38;
  }
  AlgoImpl::IntroSortInternal<TTuple<FGuid,int>,int,FIdentityFunctor,TLess<void>_>
            ((TTuple<FGuid,int> *)(this->GuidUsagePositions).AllocatorInstance.Data,
             (this->GuidUsagePositions).ArrayNum,local_res8[0],(TLess<void>)local_res8[0]);
  pFVar9 = (param_1->AllocatorInstance).Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  return this;
}

// ~FChunkReferenceTracker @ 143287930

void __thiscall
BuildPatchServices::FChunkReferenceTracker::~FChunkReferenceTracker(FChunkReferenceTracker *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FChunkReferenceTracker_BuildPatchServices__6B_;
  pFVar1 = (this->GuidUsagePositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UseList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IChunkReferenceTracker_BuildPatchServices__6B_;
  return;
}

// CopyOutOrderedUseList @ 1432c7e50

void __thiscall
BuildPatchServices::FChunkReferenceTracker::CopyOutOrderedUseList
          (FChunkReferenceTracker *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  iVar4 = (this->UseList).ArrayNum - (int)this->CurrentPosition;
  _Src = (this->UseList).AllocatorInstance.Data + (longlong)(int)this->CurrentPosition * 0x10;
  if ((_Src == (FScriptContainerElement *)0x0) && (iVar4 != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar4,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax)
  ;
  if (iVar4 != 0) {
    memcpy((param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10,_Src,(longlong)iVar4 << 4);
  }
  return;
}

// GetCurrentUsageIndex @ 1432d4990

int __thiscall
BuildPatchServices::FChunkReferenceTracker::GetCurrentUsageIndex(FChunkReferenceTracker *this)

{
  return (int)this->CurrentPosition;
}

// GetNextReferences @ 1432d7180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FChunkReferenceTracker::GetNextReferences
          (FChunkReferenceTracker *this,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,
          TFunction<bool___cdecl(FGuid_const_&)> *param_2)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar8;
  ulong64 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong *plVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  ForElementType<unsigned_int> FVar17;
  ulonglong uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  int *piVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 auStackY_188 [32];
  atomic<int> local_134;
  uint local_120;
  uint uStack_11c;
  uint uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  FSparseArrayAllocationInfo local_a8;
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  this_00 = &local_98.AllocationFlags;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_134 = this->CurrentPosition;
  uVar22 = (ulonglong)(int)local_134;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_98.AllocationFlags.NumBits = 0;
  local_98.AllocationFlags.MaxBits = 0x80;
  local_98.FirstFreeIndex = -1;
  local_98.NumFreeIndices = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar16 = uVar22;
  if ((int)local_134 < (this->UseList).ArrayNum) {
    do {
      piVar21 = (int *)0x0;
      if (param_1 <= __return_storage_ptr__->ArrayNum) break;
      uVar19 = 0;
      if ((int)(uint)uVar16 < (this->UseList).ArrayNum) {
        uVar19 = ~(uint)uVar16 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      pFVar20 = (this->UseList).AllocatorInstance.Data + uVar22 * 0x10;
      uVar9 = CityHash64((char *)pFVar20,0x10);
      if (local_98.Data.ArrayNum != local_98.NumFreeIndices) {
        FVar15.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_58.Data;
        }
        iVar7 = *(int *)(FVar15.Data + ((ulonglong)(local_50 - 1) & uVar9 & 0xffffffff) * 4);
        if (iVar7 != -1) {
          do {
            lVar10 = (longlong)iVar7;
            if (((*(int *)(pFVar20 + 0xc) ==
                  *(int *)(local_98.Data.AllocatorInstance.Data + lVar10 * 0x18 + 0xc) &&
                 *(int *)(pFVar20 + 8) ==
                 *(int *)(local_98.Data.AllocatorInstance.Data + lVar10 * 0x18 + 8)) &&
                *(int *)(pFVar20 + 4) ==
                *(int *)(local_98.Data.AllocatorInstance.Data + lVar10 * 0x18 + 4)) &&
                *(int *)pFVar20 == *(int *)(local_98.Data.AllocatorInstance.Data + lVar10 * 0x18))
            goto LAB_1432d7825;
            iVar7 = *(int *)(local_98.Data.AllocatorInstance.Data + lVar10 * 0x18 + 0x10);
          } while (iVar7 != -1);
        }
      }
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar3 = *(code **)param_2;
      plVar14 = *(longlong **)&param_2->field_0x28;
      if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
        plVar14 = (longlong *)&param_2->field_0x10;
      }
      uVar11 = (**(code **)(*plVar14 + 8))();
      cVar5 = (*pcVar3)(uVar11);
      if (cVar5 != '\0') {
        if (local_98.NumFreeIndices == 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,4,1,(ForAnyElementType *)&local_98,&local_98.Data.ArrayNum,
                             &local_98.Data.ArrayMax);
          iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,1);
          FVar17 = (ForElementType<unsigned_int>)this_00;
          if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar17 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          bVar13 = (byte)iVar6 & 0x1f;
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0x1f;
            bVar13 = bVar13 - 0x20;
          }
          puVar1 = (uint *)((longlong)FVar17 + (longlong)(iVar6 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (bVar13 & 0x1f));
          iVar6 = local_98.FirstFreeIndex;
        }
        else {
          local_98.NumFreeIndices = local_98.NumFreeIndices + -1;
          iVar6 = *(int *)(local_98.Data.AllocatorInstance.Data +
                          (longlong)local_98.FirstFreeIndex * 0x18 + 4);
          iVar7 = local_98.FirstFreeIndex;
          if (local_98.NumFreeIndices != 0) {
            *(undefined4 *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar6 * 0x18) =
                 0xffffffff;
          }
        }
        local_98.FirstFreeIndex = iVar6;
        TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex(&local_98,&local_a8,iVar7);
        iVar7 = local_a8.Index;
        if (local_a8.Pointer != (int *)0x0) {
          uVar11 = *(undefined8 *)(pFVar20 + 8);
          *(undefined8 *)local_a8.Pointer = *(undefined8 *)pFVar20;
          *(undefined8 *)((longlong)local_a8.Pointer + 8) = uVar11;
          *(int *)((longlong)local_a8.Pointer + 0x10) = -1;
          piVar21 = local_a8.Pointer;
        }
        uVar9 = CityHash64((char *)piVar21,0x10);
        if ((local_98.Data.ArrayNum - local_98.NumFreeIndices != 1) &&
           (local_98.Data.ArrayNum != local_98.NumFreeIndices)) {
          FVar15.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar15.Data = local_58.Data;
          }
          iVar6 = *(int *)(FVar15.Data + ((ulonglong)(local_50 - 1) & uVar9 & 0xffffffff) * 4);
          if (iVar6 != -1) {
            do {
              pFVar2 = local_98.Data.AllocatorInstance.Data + (longlong)iVar6 * 0x18;
              if (((piVar21[3] == *(int *)(pFVar2 + 0xc) &&
                   piVar21[2] ==
                   *(int *)(local_98.Data.AllocatorInstance.Data + (longlong)iVar6 * 0x18 + 8)) &&
                  piVar21[1] == *(int *)(pFVar2 + 4)) && *piVar21 == *(int *)pFVar2) {
                if (iVar6 != -1) {
                  memmove(local_98.Data.AllocatorInstance.Data + (longlong)iVar6 * 0x18,piVar21,0x10
                         );
                  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized(&local_98,iVar7,1);
                  goto LAB_1432d7772;
                }
                break;
              }
              iVar6 = *(int *)(pFVar2 + 0x10);
            } while (iVar6 != -1);
          }
        }
        uVar16 = 0;
        uVar23 = local_98.Data.ArrayNum - local_98.NumFreeIndices;
        uVar19 = 1;
        if (3 < uVar23) {
          uVar18 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
          lVar10 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar19 = 1 << ((byte)lVar10 & 0x1f);
        }
        if (((int)uVar23 < 1) || ((int)uVar19 <= (int)local_50)) {
          uVar19 = local_50 - 1 & (uint)uVar9;
          piVar21[5] = uVar19;
          FVar15.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar15.Data = local_58.Data;
          }
          uVar16 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar19;
          piVar21[4] = *(int *)(FVar15.Data + uVar16 * 4);
          *(int *)(FVar15.Data + uVar16 * 4) = iVar7;
        }
        else {
          local_50 = uVar19;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
          }
          if (uVar19 != 0) {
            uVar23 = uVar19;
            if (uVar19 < 2) {
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                uVar23 = 0;
                goto LAB_1432d759a;
              }
            }
            else {
LAB_1432d759a:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_58,0,uVar23,4);
            }
            if (0 < (int)uVar19) {
              uVar24 = (ulonglong)uVar19;
              uVar18 = uVar16;
              do {
                FVar15.Data = local_60;
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  FVar15.Data = local_58.Data;
                }
                uVar12 = uVar18 & (longlong)(int)uVar19 - 1U;
                uVar18 = uVar18 + 1;
                *(undefined4 *)(FVar15.Data + uVar12 * 4) = 0xffffffff;
                uVar24 = uVar24 - 1;
              } while (uVar24 != 0);
            }
          }
          if (local_50 != 0) {
            local_120 = 0;
            uStack_11c = 1;
            uStack_10c = 0;
            uStack_108 = 0;
            if (local_98.AllocationFlags.NumBits != 0) {
              FVar17 = (ForElementType<unsigned_int>)this_00;
              if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar17 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              uVar19 = *(uint *)FVar17;
              uVar18 = uVar16;
              while (uVar19 == 0) {
                uStack_108 = (int)uVar18 + 0x20;
                uVar18 = (ulonglong)uStack_108;
                iVar7 = (int)uVar16;
                local_120 = iVar7 + 1;
                uVar16 = (ulonglong)local_120;
                if ((int)((local_98.AllocationFlags.NumBits - 1U) +
                         ((int)(local_98.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                    (int)local_120) goto LAB_1432d769f;
                uVar19 = *(uint *)((uchar *)((longlong)FVar17 + 4) + (longlong)iVar7 * 4);
              }
              uStack_11c = -uVar19 & uVar19;
              uVar16 = (ulonglong)uStack_11c * 2 + 1;
              lVar10 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              uStack_10c = (int)lVar10 + -1 + uStack_108;
              uVar16 = (ulonglong)uStack_10c;
              if (local_98.AllocationFlags.NumBits < (int)uStack_10c) {
LAB_1432d769f:
                uVar16 = (ulonglong)(uint)local_98.AllocationFlags.NumBits;
                uStack_10c = local_98.AllocationFlags.NumBits;
              }
            }
            local_c8._padding_ = CONCAT44(uStack_11c,local_120);
            local_c8.CurrentBitIndex = uStack_10c;
            local_c8.UnvisitedBitMask = 0xffffffff;
            local_c8._28_4_ = uStack_104;
            local_c8.BaseBitIndex = uStack_108;
            local_c8.Array = this_00;
            if ((int)uVar16 < local_98.AllocationFlags.NumBits) {
              do {
                pFVar2 = local_98.Data.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x18;
                uVar9 = CityHash64((char *)pFVar2,0x10);
                uVar19 = local_50 - 1 & (uint)uVar9;
                *(uint *)(pFVar2 + 0x14) = uVar19;
                FVar15.Data = local_60;
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  FVar15.Data = local_58.Data;
                }
                uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar19;
                *(undefined4 *)(pFVar2 + 0x10) = *(undefined4 *)(FVar15.Data + uVar18 * 4);
                *(int *)(FVar15.Data + uVar18 * 4) = (int)uVar16;
                local_c8.UnvisitedBitMask = local_c8.UnvisitedBitMask & ~local_c8._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c8);
                uVar16 = (ulonglong)(uint)local_c8.CurrentBitIndex;
              } while (local_c8.CurrentBitIndex < (local_c8.Array)->NumBits);
            }
          }
        }
LAB_1432d7772:
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        piVar21 = &__return_storage_ptr__->ArrayMax;
        if (((pFVar2 <= pFVar20) && (pFVar20 < pFVar2 + (longlong)*piVar21 * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == *piVar21) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&__return_storage_ptr__->AllocatorInstance,piVar21);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        uVar11 = *(undefined8 *)(pFVar20 + 8);
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar2 = *(undefined8 *)pFVar20;
        *(undefined8 *)(pFVar2 + 8) = uVar11;
      }
LAB_1432d7825:
      local_134 = (atomic<int>)((int)local_134 + 1);
      uVar22 = uVar22 + 1;
      uVar16 = (ulonglong)(uint)local_134;
    } while ((int)local_134 < (this->UseList).ArrayNum);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  bVar4 = local_98.Data.ArrayMax != 0;
  local_98.Data._8_8_ = (ulonglong)(uint)local_98.Data.ArrayMax << 0x20;
  if (bVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)&local_98,0,&local_98.Data.ArrayMax);
  }
  local_98.NumFreeIndices = 0;
  local_98.AllocationFlags.NumBits = 0;
  local_98.FirstFreeIndex = -1;
  if (0x80 < (uint)local_98.AllocationFlags.MaxBits) {
    local_98.AllocationFlags.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(this_00,0);
  }
  if (local_98.AllocationFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_98.AllocationFlags.AllocatorInstance.SecondaryData);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetNextUsageForChunk @ 1432d8120

int __thiscall
BuildPatchServices::FChunkReferenceTracker::GetNextUsageForChunk
          (FChunkReferenceTracker *this,FGuid *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  FIdentityFunctor local_res8;
  undefined1 local_48 [32];
  
  local_48._16_4_ = this->CurrentPosition;
  local_48._0_4_ = param_1->A;
  local_48._4_4_ = param_1->B;
  local_48._8_4_ = param_1->C;
  local_48._12_4_ = param_1->D;
  iVar4 = (this->GuidUsagePositions).ArrayNum;
  uVar3 = AlgoImpl::
          LowerBoundInternal<TTuple<FGuid,int>_const_,int,TTuple<FGuid,int>,FIdentityFunctor,TLess<void>_>
                    ((TTuple<FGuid,int> *)(this->GuidUsagePositions).AllocatorInstance.Data,iVar4,
                     (TTuple<FGuid,int> *)local_48,local_res8,(TLess<void>)local_res8);
  uVar8 = (ulonglong)(int)uVar3;
  if ((int)uVar3 < iVar4) {
    if (((int)uVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    lVar9 = uVar8 * 0x14;
    pFVar6 = (this->GuidUsagePositions).AllocatorInstance.Data + lVar9;
    if (((*(uint *)(pFVar6 + 8) == param_1->C && *(uint *)(pFVar6 + 4) == param_1->B) &&
        *(uint *)(pFVar6 + 0xc) == param_1->D) && param_1->A == *(uint *)pFVar6) {
      uVar7 = 0;
      if ((int)uVar3 < (this->GuidUsagePositions).ArrayNum) {
        uVar7 = ~uVar3 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      uVar7 = uVar3 + 1;
      iVar4 = *(int *)((this->GuidUsagePositions).AllocatorInstance.Data + lVar9 + 0x10);
      if ((int)uVar7 < (this->GuidUsagePositions).ArrayNum) {
        do {
          uVar3 = (uint)uVar8;
          lVar9 = lVar9 + 0x14;
          uVar5 = 0;
          if ((int)uVar7 < (this->GuidUsagePositions).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          pFVar6 = (this->GuidUsagePositions).AllocatorInstance.Data + lVar9;
          if (((*(uint *)(pFVar6 + 0xc) != param_1->D || *(uint *)(pFVar6 + 8) != param_1->C) ||
              *(uint *)(pFVar6 + 4) != param_1->B) || param_1->A != *(uint *)pFVar6) break;
          uVar3 = uVar3 + 1;
          uVar8 = (ulonglong)uVar3;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (this->GuidUsagePositions).ArrayNum);
      }
      uVar7 = 0;
      if ((int)uVar3 < (this->GuidUsagePositions).ArrayNum) {
        uVar7 = ~uVar3 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      *param_2 = *(int *)((this->GuidUsagePositions).AllocatorInstance.Data +
                         (longlong)(int)uVar3 * 0x14 + 0x10);
      return iVar4;
    }
  }
  return -1;
}

// GetReferenceCount @ 1432d8b90

int __thiscall
BuildPatchServices::FChunkReferenceTracker::GetReferenceCount
          (FChunkReferenceTracker *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  FIdentityFunctor local_res8;
  undefined1 local_38 [32];
  
  local_38._16_4_ = this->CurrentPosition;
  local_38._0_4_ = param_1->A;
  local_38._4_4_ = param_1->B;
  local_38._8_4_ = param_1->C;
  local_38._12_4_ = param_1->D;
  uVar3 = AlgoImpl::
          LowerBoundInternal<TTuple<FGuid,int>_const_,int,TTuple<FGuid,int>,FIdentityFunctor,TLess<void>_>
                    ((TTuple<FGuid,int> *)(this->GuidUsagePositions).AllocatorInstance.Data,
                     (this->GuidUsagePositions).ArrayNum,(TTuple<FGuid,int> *)local_38,local_res8,
                     (TLess<void>)local_res8);
  uVar8 = (ulonglong)(int)uVar3;
  uVar7 = uVar3;
  if ((int)uVar3 < (this->GuidUsagePositions).ArrayNum) {
    lVar9 = uVar8 * 0x14;
    do {
      uVar7 = (uint)uVar8;
      uVar4 = 0;
      if ((int)uVar7 < (this->GuidUsagePositions).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      pFVar6 = (this->GuidUsagePositions).AllocatorInstance.Data + lVar9;
      if (((*(uint *)(pFVar6 + 8) != param_1->C || *(uint *)(pFVar6 + 4) != param_1->B) ||
          *(uint *)(pFVar6 + 0xc) != param_1->D) || *(uint *)pFVar6 != param_1->A) break;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)uVar7;
      lVar9 = lVar9 + 0x14;
    } while ((int)uVar7 < (this->GuidUsagePositions).ArrayNum);
  }
  return uVar7 - uVar3;
}

// GetReferencedChunks @ 1432d8cf0

TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> * __thiscall
BuildPatchServices::FChunkReferenceTracker::GetReferencedChunks
          (FChunkReferenceTracker *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  char *pcVar3;
  undefined1 *puVar4;
  ForElementType<FSetElementId> FVar5;
  uint *puVar6;
  undefined8 uVar7;
  void *_Src;
  int iVar8;
  int iVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  byte bVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  undefined1 *this_00;
  ulonglong uVar18;
  ulonglong uVar19;
  atomic<int> aVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  undefined1 local_res10 [8];
  atomic<int> local_res18;
  uint local_res20;
  FSparseArrayAllocationInfo local_a0;
  int local_90;
  uint uStack_8c;
  undefined1 *puStack_88;
  undefined4 local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_68;
  
  aVar20 = this->CurrentPosition;
  iVar16 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0xc = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_res20 = (this->GuidUsagePositions).ArrayNum;
  uVar19 = (ulonglong)(int)local_res20;
  pFVar22 = (this->GuidUsagePositions).AllocatorInstance.Data;
  pFVar1 = pFVar22 + uVar19 * 0x14;
  iVar8 = iVar16;
  iVar9 = iVar16;
  iVar23 = iVar16;
  local_res18 = aVar20;
  do {
    if ((this->GuidUsagePositions).ArrayNum != (int)uVar19) {
      `TCheckedPointerIterator<TTuple<FGuid,int>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
      aVar20 = local_res18;
    }
    if (pFVar22 == pFVar1) {
      return __return_storage_ptr__;
    }
    if (((int)aVar20 <= *(int *)(pFVar22 + 0x10)) &&
       (((iVar9 != *(int *)(pFVar22 + 8) || iVar16 != *(int *)(pFVar22 + 4)) ||
        iVar23 != *(int *)(pFVar22 + 0xc)) || iVar8 != *(int *)pFVar22)) {
      iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (iVar9 == 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,4,1,(ForAnyElementType *)__return_storage_ptr__,
                           (int *)&(__return_storage_ptr__->Elements).field_0x8,
                           (int *)&(__return_storage_ptr__->Elements).field_0xc);
        this_00 = &(__return_storage_ptr__->Elements).field_0x10;
        iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
        puVar4 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
        if (puVar4 != (undefined1 *)0x0) {
          this_00 = puVar4;
        }
        bVar12 = (byte)iVar9 & 0x1f;
        if (iVar9 < 0) {
          iVar9 = iVar9 + 0x1f;
          bVar12 = bVar12 - 0x20;
        }
        *(uint *)(this_00 + (longlong)(iVar9 >> 5) * 4) =
             *(uint *)(this_00 + (longlong)(iVar9 >> 5) * 4) & ~(1 << (bVar12 & 0x1f));
      }
      else {
        iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
        iVar9 = iVar9 + -1;
        lVar15 = *(longlong *)&__return_storage_ptr__->Elements;
        iVar16 = *(int *)(lVar15 + 4 + (longlong)iVar8 * 0x18);
        *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar16;
        *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar9;
        if (iVar9 != 0) {
          *(undefined4 *)(lVar15 + (longlong)iVar16 * 0x18) = 0xffffffff;
        }
      }
      TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)__return_storage_ptr__,&local_a0,iVar8);
      _Src = local_a0.Pointer;
      iVar9 = local_a0.Index;
      if (local_a0.Pointer != (int *)0x0) {
        uVar7 = *(undefined8 *)(pFVar22 + 8);
        *(undefined8 *)local_a0.Pointer = *(undefined8 *)pFVar22;
        *(undefined8 *)((longlong)local_a0.Pointer + 8) = uVar7;
        *(int *)((longlong)local_a0.Pointer + 0x10) = -1;
      }
      uVar10 = CityHash64(local_a0.Pointer,0x10);
      iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
      iVar16 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if ((iVar8 - iVar16 != 1) && (iVar8 != iVar16)) {
        FVar5 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = FVar5;
        }
        iVar8 = *(int *)((longlong)FVar13 +
                        ((ulonglong)(__return_storage_ptr__->HashSize - 1) & uVar10 & 0xffffffff) *
                        4);
        if (iVar8 != -1) {
          lVar15 = *(longlong *)&__return_storage_ptr__->Elements;
          do {
            piVar2 = (int *)(lVar15 + (longlong)iVar8 * 0x18);
            if (((*(int *)((longlong)_Src + 0xc) == piVar2[3] &&
                 *(int *)((longlong)_Src + 8) == *(int *)(lVar15 + 8 + (longlong)iVar8 * 0x18)) &&
                *(int *)((longlong)_Src + 4) == piVar2[1]) && *(int *)_Src == *piVar2) {
              if (iVar8 != -1) {
                memmove((void *)(lVar15 + (longlong)iVar8 * 0x18),_Src,0x10);
                TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)__return_storage_ptr__,iVar9,1);
                goto LAB_1432d9185;
              }
              break;
            }
            iVar8 = piVar2[4];
          } while (iVar8 != -1);
        }
      }
      uVar17 = 1;
      uVar14 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
               *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (3 < uVar14) {
        uVar19 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar17 = 1 << ((byte)lVar15 & 0x1f);
      }
      if (((int)uVar14 < 1) || ((int)uVar17 <= __return_storage_ptr__->HashSize)) {
        uVar14 = __return_storage_ptr__->HashSize - 1U & (uint)uVar10;
        *(uint *)((longlong)_Src + 0x14) = uVar14;
        FVar5 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = FVar5;
        }
        uVar19 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar14;
        *(int *)((longlong)_Src + 0x10) = *(int *)((longlong)FVar13 + uVar19 * 4);
        *(int *)((longlong)FVar13 + uVar19 * 4) = iVar9;
      }
      else {
        __return_storage_ptr__->HashSize = uVar17;
        if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
        }
        if (uVar17 != 0) {
          uVar14 = uVar17;
          if (uVar17 < 2) {
            if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0)
            {
              uVar14 = 0;
              goto LAB_1432d8fd1;
            }
          }
          else {
LAB_1432d8fd1:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar14,4
                      );
          }
          if (0 < (int)uVar17) {
            uVar18 = (ulonglong)uVar17;
            uVar19 = 0;
            do {
              FVar5 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                FVar13 = FVar5;
              }
              uVar11 = uVar19 & (longlong)(int)uVar17 - 1U;
              uVar19 = uVar19 + 1;
              *(undefined4 *)((longlong)FVar13 + uVar11 * 4) = 0xffffffff;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
        }
        if (__return_storage_ptr__->HashSize != 0) {
          iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
          puStack_88 = &(__return_storage_ptr__->Elements).field_0x10;
          uStack_8c = 1;
          local_90 = 0;
          iStack_7c = 0;
          iStack_78 = 0;
          if (iVar9 != 0) {
            puVar6 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
            puVar21 = (uint *)puStack_88;
            if (puVar6 != (uint *)0x0) {
              puVar21 = puVar6;
            }
            uVar14 = *puVar21;
            iStack_78 = 0;
            local_90 = 0;
            while (uVar14 == 0) {
              iStack_78 = iStack_78 + 0x20;
              lVar15 = (longlong)local_90;
              local_90 = local_90 + 1;
              if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < local_90)
              goto LAB_1432d90b8;
              uVar14 = puVar21[lVar15 + 1];
            }
            uStack_8c = -uVar14 & uVar14;
            uVar19 = (ulonglong)uStack_8c * 2 + 1;
            lVar15 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iStack_7c = iStack_78 + -1 + (int)lVar15;
            if (iVar9 < iStack_7c) {
LAB_1432d90b8:
              iStack_7c = iVar9;
            }
          }
          local_80 = 0xffffffff;
          local_68._padding_ = CONCAT44(uStack_8c,local_90);
          local_68.CurrentBitIndex = iStack_7c;
          local_68.UnvisitedBitMask = 0xffffffff;
          local_68._28_4_ = uStack_74;
          local_68.BaseBitIndex = iStack_78;
          iVar8 = iStack_7c;
          local_70 = __return_storage_ptr__;
          local_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_88;
          if (iStack_7c < iVar9) {
            do {
              pcVar3 = (char *)(*(longlong *)&local_70->Elements + (longlong)iVar8 * 0x18);
              uVar10 = CityHash64(pcVar3,0x10);
              uVar14 = __return_storage_ptr__->HashSize - 1U & (uint)uVar10;
              *(uint *)(pcVar3 + 0x14) = uVar14;
              FVar5 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar13 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                FVar13 = FVar5;
              }
              uVar19 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar14;
              *(undefined4 *)(pcVar3 + 0x10) = *(undefined4 *)((longlong)FVar13 + uVar19 * 4);
              *(int *)((longlong)FVar13 + uVar19 * 4) = iVar8;
              local_68.UnvisitedBitMask = local_68.UnvisitedBitMask & ~local_68._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_68);
              iVar8 = local_68.CurrentBitIndex;
            } while (local_68.CurrentBitIndex < (local_68.Array)->NumBits);
          }
        }
      }
LAB_1432d9185:
      iVar8 = *(int *)pFVar22;
      iVar16 = *(int *)(pFVar22 + 4);
      iVar23 = *(int *)(pFVar22 + 0xc);
      iVar9 = *(int *)(pFVar22 + 8);
      aVar20 = local_res18;
    }
    uVar19 = (ulonglong)local_res20;
    pFVar22 = pFVar22 + 0x14;
  } while( true );
}

// GetRemainingChunkCount @ 1432d9240

int __thiscall
BuildPatchServices::FChunkReferenceTracker::GetRemainingChunkCount(FChunkReferenceTracker *this)

{
  return (this->UseList).ArrayNum - (int)this->CurrentPosition;
}

// PopReference @ 1432e14d0

bool __thiscall
BuildPatchServices::FChunkReferenceTracker::PopReference
          (FChunkReferenceTracker *this,FGuid *param_1)

{
  atomic<int> aVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  atomic<int> aVar6;
  
  aVar6 = this->CurrentPosition;
  do {
    if ((this->UseList).ArrayNum <= (int)aVar6) {
      return false;
    }
    if (((int)aVar6 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar5 = (this->UseList).AllocatorInstance.Data + (longlong)(int)aVar6 * 0x10;
    if (((*(uint *)(pFVar5 + 0xc) != param_1->D || *(uint *)(pFVar5 + 8) != param_1->C) ||
        *(uint *)(pFVar5 + 4) != param_1->B) || *(uint *)pFVar5 != param_1->A) {
      return false;
    }
    LOCK();
    aVar1 = this->CurrentPosition;
    bVar3 = aVar6 == aVar1;
    if (bVar3) {
      this->CurrentPosition = (atomic<int>)((int)aVar6 + 1);
      aVar1 = aVar6;
    }
    aVar6 = aVar1;
    UNLOCK();
  } while (!bVar3);
  return true;
}

// SelectFromNextReferences @ 1432ec590

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FChunkReferenceTracker::SelectFromNextReferences
          (FChunkReferenceTracker *this,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,
          TFunction<bool___cdecl(FGuid_const_&)> *param_2)

{
  (**(code **)(this->_padding_ + 0x20))();
  return __return_storage_ptr__;
}

// SortByUseOrder @ 1432ee320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
BuildPatchServices::FChunkReferenceTracker::SortByUseOrder
          (FChunkReferenceTracker *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1,
          ESortDirection param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  FGuid *pFVar8;
  FGuid *pFVar9;
  undefined1 auStack_108 [32];
  undefined1 local_d7 [3];
  int local_d4;
  uint local_d0;
  FGuid *local_c8;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *local_c0;
  undefined1 local_b8 [32];
  TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_d0 = param_1->ArrayNum;
  uVar6 = (ulonglong)(int)local_d0;
  pFVar9 = (FGuid *)(param_1->AllocatorInstance).Data;
  pFVar8 = pFVar9 + uVar6;
  local_98.Pairs.Elements._0_8_ = 0;
  local_98.Pairs.Elements._8_8_ = 0;
  local_98.Pairs.Elements._32_8_ = 0;
  local_98.Pairs.Elements._40_4_ = 0;
  local_98.Pairs.Elements._44_4_ = 0x80;
  local_98.Pairs.Elements._48_4_ = 0xffffffff;
  local_98.Pairs.Elements._52_4_ = 0;
  local_98.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.Pairs.HashSize = 0;
  local_c8 = pFVar8;
  local_c0 = param_1;
  do {
    if (local_c0->ArrayNum != (int)uVar6) {
      local_d7[0] = 0;
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_d7);
    }
    if (pFVar9 == pFVar8) {
      if (param_2 == Ascending) {
        AlgoImpl::
        IntroSortInternal<FGuid,int,_BuildPatchServices::FChunkReferenceTracker::SortByUseOrder_::__l12::<lambda_1>,TLess<int>_>
                  ((FGuid *)(local_c0->AllocatorInstance).Data,local_c0->ArrayNum,
                   (TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *
                   )&local_98,(TLess<int>)0x0);
      }
      else if (param_2 == Descending) {
        AlgoImpl::
        IntroSortInternal<FGuid,int,_BuildPatchServices::FChunkReferenceTracker::SortByUseOrder_::__l13::<lambda_2>,TGreater<int>_>
                  ((FGuid *)(local_c0->AllocatorInstance).Data,local_c0->ArrayNum,
                   (TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *
                   )&local_98,(TGreater<int>)0x1);
      }
      local_98.Pairs.HashSize = 0;
      if (local_98.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Pairs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_98);
      return;
    }
    local_b8._16_4_ = this->CurrentPosition;
    local_b8._0_4_ = pFVar9->A;
    local_b8._4_4_ = pFVar9->B;
    local_b8._8_4_ = pFVar9->C;
    local_b8._12_4_ = pFVar9->D;
    iVar1 = (this->GuidUsagePositions).ArrayNum;
    uVar4 = AlgoImpl::
            LowerBoundInternal<TTuple<FGuid,int>_const_,int,TTuple<FGuid,int>,FIdentityFunctor,TLess<void>_>
                      ((TTuple<FGuid,int> *)(this->GuidUsagePositions).AllocatorInstance.Data,iVar1,
                       (TTuple<FGuid,int> *)local_b8,(FIdentityFunctor)param_2,(TLess<void>)param_2)
    ;
    local_d4 = 0x7fffffff;
    if ((int)uVar4 < iVar1) {
      if (((int)uVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = (this->GuidUsagePositions).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x14;
      pFVar8 = local_c8;
      if (((*(uint *)(pFVar7 + 0xc) == pFVar9->D && *(uint *)(pFVar7 + 8) == pFVar9->C) &&
          *(uint *)(pFVar7 + 4) == pFVar9->B) && pFVar9->A == *(uint *)pFVar7) {
        uVar5 = 0;
        if ((int)uVar4 < (this->GuidUsagePositions).ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_d4 = *(int *)((this->GuidUsagePositions).AllocatorInstance.Data +
                           (longlong)(int)uVar4 * 0x14 + 0x10);
        pFVar8 = local_c8;
      }
    }
    TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_>::
    Emplace<FGuid_const_&,int_const_&>(&local_98,pFVar9,&local_d4);
    pFVar9 = pFVar9 + 1;
    uVar6 = (ulonglong)local_d0;
  } while( true );
}

