// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// FCoarseMeshStreamingManager @ 1483e0e80

FCoarseMeshStreamingManager * __thiscall
Nanite::FCoarseMeshStreamingManager::FCoarseMeshStreamingManager(FCoarseMeshStreamingManager *this)

{
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FCoarseMeshStreamingManager_Nanite__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->UpdateCS,4000);
  (this->ReleasedRenderAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReleasedRenderAssets).ArrayNum = 0;
  (this->ReleasedRenderAssets).ArrayMax = 0;
  *(undefined8 *)&(this->UsedStreamableHandles).Elements = 0;
  *(undefined8 *)&(this->UsedStreamableHandles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UsedStreamableHandles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UsedStreamableHandles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UsedStreamableHandles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UsedStreamableHandles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UsedStreamableHandles).Elements.field_0x34 = 0;
  (this->UsedStreamableHandles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UsedStreamableHandles).HashSize = 0;
  (this->TmpUsedStreamableHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TmpUsedStreamableHandles).ArrayNum = 0;
  (this->TmpUsedStreamableHandles).ArrayMax = 0;
  *(undefined8 *)&this->RegisteredRenderAssets = 0;
  *(undefined8 *)&(this->RegisteredRenderAssets).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredRenderAssets).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredRenderAssets).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredRenderAssets).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredRenderAssets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredRenderAssets).field_0x34 = 0;
  (this->ActiveHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveHandles).ArrayNum = 0;
  (this->ActiveHandles).ArrayMax = 0;
  (this->TmpHandleArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TmpHandleArray).ArrayNum = 0;
  (this->TmpHandleArray).ArrayMax = 0;
  (this->RegisteredLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredLevels).ArrayNum = 0;
  (this->RegisteredLevels).ArrayMax = 0;
  *(undefined8 *)&this->RequestReleaseComponentsMap = 0;
  *(undefined8 *)&(this->RequestReleaseComponentsMap).field_0x8 = 0;
  *(undefined8 *)&(this->RequestReleaseComponentsMap).field_0x20 = 0;
  *(undefined4 *)&(this->RequestReleaseComponentsMap).field_0x28 = 0;
  *(undefined4 *)&(this->RequestReleaseComponentsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RequestReleaseComponentsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RequestReleaseComponentsMap).field_0x34 = 0;
  *(undefined8 *)&(this->RequestReleaseComponentsMap).field_0x40 = 0;
  *(undefined4 *)&(this->RequestReleaseComponentsMap).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredComponentsMap = 0;
  *(undefined8 *)&(this->RegisteredComponentsMap).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredComponentsMap).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredComponentsMap).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredComponentsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredComponentsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredComponentsMap).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredComponentsMap).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredComponentsMap).field_0x48 = 0;
  *(undefined8 *)&this->ComponentToRenderAssetLookUpMap = 0;
  *(undefined8 *)&(this->ComponentToRenderAssetLookUpMap).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentToRenderAssetLookUpMap).field_0x20 = 0;
  *(undefined4 *)&(this->ComponentToRenderAssetLookUpMap).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentToRenderAssetLookUpMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentToRenderAssetLookUpMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComponentToRenderAssetLookUpMap).field_0x34 = 0;
  *(undefined8 *)&(this->ComponentToRenderAssetLookUpMap).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentToRenderAssetLookUpMap).field_0x48 = 0;
  this->TotalRequestedRenderAssetSize = 0;
  this->TotalLoadedRenderAssetSize = 0;
  this->TickCount = 0;
  return this;
}

// AddLevel @ 1483ef290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
Nanite::FCoarseMeshStreamingManager::AddLevel(FCoarseMeshStreamingManager *this,ULevel *param_1)

{
  int *piVar1;
  TArray<ULevel_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  ULevel *local_res10;
  
  pTVar2 = &this->RegisteredLevels;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar7 + (longlong)(this->RegisteredLevels).ArrayNum * 8;
  for (; pFVar7 != pFVar3; pFVar7 = pFVar7 + 8) {
    if (*(ULevel **)pFVar7 == param_1) {
      return;
    }
  }
  pFVar7 = (param_1->Actors).AllocatorInstance.Data;
  iVar6 = (param_1->Actors).ArrayNum;
  pFVar3 = pFVar7 + (longlong)iVar6 * 8;
  local_res10 = param_1;
  while( true ) {
    if ((param_1->Actors).ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar3) break;
    if (*(AActor **)pFVar7 != (AActor *)0x0) {
      ProcessNotifiedActor(this,*(AActor **)pFVar7,Register);
    }
    pFVar7 = pFVar7 + 8;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar3 + (longlong)(this->RegisteredLevels).ArrayMax * 8)) &&
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
  iVar6 = (this->RegisteredLevels).ArrayNum;
  piVar1 = &(this->RegisteredLevels).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->RegisteredLevels).ArrayNum = iVar6 + 1;
  *(ULevel **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10;
  return;
}

// AddUsedStreamingHandles @ 1483ef5f0

void __thiscall
Nanite::FCoarseMeshStreamingManager::AddUsedStreamingHandles
          (FCoarseMeshStreamingManager *this,TArray<short,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator> *this_00;
  FScriptContainerElement *pFVar12;
  short local_res8 [4];
  
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                         ,0x1ee,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId496,"FCoarseMeshStreamingManager::AddUsedStreamingHandles",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
               ,0x1f0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId496);
  }
  pFVar12 = (param_1->AllocatorInstance).Data;
  this_00 = &this->UsedStreamableHandles;
  iVar3 = param_1->ArrayNum;
  if ((iVar3 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = *(int *)&(this->UsedStreamableHandles).Elements.field_0x8 -
          *(int *)&(this->UsedStreamableHandles).Elements.field_0x34;
  uVar11 = uVar9 + iVar3;
  if (uVar9 < uVar11) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,uVar11);
    if (uVar11 < 4) {
      iVar10 = 1;
    }
    else {
      uVar2 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar5 & 0x1f);
    }
    iVar4 = (this->UsedStreamableHandles).HashSize;
    if ((iVar4 == 0) || (iVar4 < iVar10)) {
      (this->UsedStreamableHandles).HashSize = iVar10;
      TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator>::Rehash(this_00);
    }
  }
  pFVar1 = pFVar12 + (longlong)iVar3 * 2;
  for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 2) {
    TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator>::Emplace<short_const_&>
              (this_00,local_res8,(bool *)pFVar12);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BlockTillAllRequestsFinished @ 1483f01c0

int __thiscall
Nanite::FCoarseMeshStreamingManager::BlockTillAllRequestsFinished
          (FCoarseMeshStreamingManager *this,float param_1,bool param_2)

{
  return 0;
}

// CancelForcedResources @ 1483f2cf0

void __thiscall
Nanite::FCoarseMeshStreamingManager::CancelForcedResources(FCoarseMeshStreamingManager *this)

{
  return;
}

// ForceStreamIn @ 148401d10

void __thiscall
Nanite::FCoarseMeshStreamingManager::ForceStreamIn(FCoarseMeshStreamingManager *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<short,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  uStack_84 = 1;
  puVar2 = &(this->RegisteredRenderAssets).field_0x10;
  local_88 = 0;
  iVar10 = *(int *)&(this->RegisteredRenderAssets).field_0x28;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar10 != 0) {
    puVar15 = *(uint **)&(this->RegisteredRenderAssets).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar2;
    }
    uVar13 = *puVar15;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar13 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar11 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_148401dcb;
      uVar13 = puVar15[lVar11 + 1];
    }
    uStack_84 = -uVar13 & uVar13;
    uVar5 = (ulonglong)uStack_84 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar10 < iStack_74) {
LAB_148401dcb:
      iStack_74 = iVar10;
    }
  }
  uVar13 = *(uint *)&(this->RegisteredRenderAssets).field_0x28;
  local_40 = *(int *)&(this->RegisteredRenderAssets).field_0x8 -
             *(int *)&(this->RegisteredRenderAssets).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar12 = (int)uVar13 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar16 = uVar13 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar10 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->RegisteredRenderAssets).field_0x28;
  if (uVar13 != uVar6) {
    puVar14 = *(undefined1 **)&(this->RegisteredRenderAssets).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar2;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148401ed0;
      uVar13 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uVar13 = local_res18 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar13) {
      uVar13 = uVar6;
    }
  }
LAB_148401ed0:
  while( true ) {
    if (*(int *)&(this->RegisteredRenderAssets).field_0x8 -
        *(int *)&(this->RegisteredRenderAssets).field_0x34 != local_40) {
      local_res8[0] = 0;
      `TSparseArray<Nanite::FCoarseMeshStreamingManager::FRegisteredRenderAsset,FDefaultSparseArrayAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar13) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pFVar4 = (FScriptContainerElement *)
             (*(longlong *)&this->RegisteredRenderAssets + (longlong)local_60.CurrentBitIndex * 0x28
             );
    if (*(int *)(*(longlong *)&this->RegisteredRenderAssets + 0x20 +
                (longlong)local_60.CurrentBitIndex * 0x28) == 0) {
      pTVar3 = &this->ActiveHandles;
      *(undefined4 *)(pFVar4 + 0x20) = 1;
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar7 <= pFVar4) && (pFVar4 < pFVar7 + (longlong)(this->ActiveHandles).ArrayMax * 2))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar10 = (this->ActiveHandles).ArrayNum;
      piVar1 = &(this->ActiveHandles).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->ActiveHandles).ArrayNum = iVar10 + 1;
      *(undefined2 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 2) =
           *(undefined2 *)pFVar4;
      this->TotalRequestedRenderAssetSize =
           this->TotalRequestedRenderAssetSize + (ulonglong)*(uint *)(pFVar4 + 0x10);
    }
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// ForceStreamOut @ 148402000

void __thiscall
Nanite::FCoarseMeshStreamingManager::ForceStreamOut(FCoarseMeshStreamingManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  uStack_84 = 1;
  puVar1 = &(this->RegisteredRenderAssets).field_0x10;
  local_88 = 0;
  iVar3 = *(int *)&(this->RegisteredRenderAssets).field_0x28;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->RegisteredRenderAssets).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar10 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar10 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_1484020ba;
      uVar10 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_1484020ba:
      iStack_74 = iVar3;
    }
  }
  uVar10 = *(uint *)&(this->RegisteredRenderAssets).field_0x28;
  local_40 = *(int *)&(this->RegisteredRenderAssets).field_0x8 -
             *(int *)&(this->RegisteredRenderAssets).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar9 = (int)uVar10 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar13 = uVar10 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->RegisteredRenderAssets).field_0x28;
  if (uVar10 != uVar4) {
    puVar11 = *(undefined1 **)&(this->RegisteredRenderAssets).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar9 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar9;
      uVar13 = uVar13 + 0x20;
      iVar9 = iVar9 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1484021b2;
      uVar10 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_1484021b2:
  while( true ) {
    if (*(int *)&(this->RegisteredRenderAssets).field_0x8 -
        *(int *)&(this->RegisteredRenderAssets).field_0x34 != local_40) {
      `TSparseArray<Nanite::FCoarseMeshStreamingManager::FRegisteredRenderAsset,FDefaultSparseArrayAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar8 = (longlong)local_60.CurrentBitIndex;
    if ((local_60.CurrentBitIndex == uVar10) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar5 = *(longlong *)&this->RegisteredRenderAssets;
    if (*(int *)(lVar5 + 0x20 + lVar8 * 0x28) == 3) {
      *(undefined4 *)(lVar5 + 0x20 + lVar8 * 0x28) = 4;
      this->TotalRequestedRenderAssetSize =
           this->TotalRequestedRenderAssetSize - (ulonglong)*(uint *)(lVar5 + 0x10 + lVar8 * 0x28);
    }
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// NotifyActorDestroyed @ 148413030

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
Nanite::FCoarseMeshStreamingManager::NotifyActorDestroyed
          (FCoarseMeshStreamingManager *this,AActor *param_1)

{
  ProcessNotifiedActor(this,param_1,Unregister);
  return;
}

// NotifyLevelChange @ 148413050

void __thiscall
Nanite::FCoarseMeshStreamingManager::NotifyLevelChange(FCoarseMeshStreamingManager *this)

{
  return;
}

// NotifyLevelOffset @ 148413060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
Nanite::FCoarseMeshStreamingManager::NotifyLevelOffset
          (FCoarseMeshStreamingManager *this,ULevel *param_1,TVector<double> *param_2)

{
  return;
}

// NotifyPrimitiveDetached @ 148413070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
Nanite::FCoarseMeshStreamingManager::NotifyPrimitiveDetached
          (FCoarseMeshStreamingManager *this,UPrimitiveComponent *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  UStaticMesh *this_00;
  bool bVar2;
  UClass *pUVar3;
  
  pUVar3 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    this_00 = *(UStaticMesh **)&param_1[1].field_0x50;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UStaticMesh *)0x0) {
        return;
      }
    }
    else {
      if (this_00 == (UStaticMesh *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    bVar2 = UStaticMesh::HasValidNaniteData(this_00);
    if ((bVar2) && ((this_00->_padding_ & 1) != 0)) {
      lpCriticalSection = &this->UpdateCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (param_1->bAttachedToCoarseMeshStreamingManager != 0) {
        UnregisterComponentInternal(this,param_1,(UStreamableRenderAsset *)this_00);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// NotifyPrimitiveUpdated @ 148413080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
Nanite::FCoarseMeshStreamingManager::NotifyPrimitiveUpdated
          (FCoarseMeshStreamingManager *this,UPrimitiveComponent *param_1)

{
  RegisterComponent(this,param_1,true);
  return;
}

// NotifyPrimitiveUpdated_Concurrent @ 148413090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
Nanite::FCoarseMeshStreamingManager::NotifyPrimitiveUpdated_Concurrent
          (FCoarseMeshStreamingManager *this,UPrimitiveComponent *param_1)

{
  RegisterComponent(this,param_1,false);
  return;
}

// ProcessNotifiedActor @ 14841b110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
Nanite::FCoarseMeshStreamingManager::ProcessNotifiedActor
          (FCoarseMeshStreamingManager *this,AActor *param_1,ENotifyMode param_2)

{
  undefined8 *puVar1;
  int iVar2;
  UPrimitiveComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  undefined8 *puVar9;
  UClass *pUVar10;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  UClass *local_110;
  UClass *local_108;
  undefined8 local_100 [24];
  undefined8 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_138;
  pUVar8 = (UClass *)0x0;
  pUVar10 = (UClass *)0x0;
  local_34 = 0x18;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  pUVar6 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UClass *)0x0) goto LAB_14841b1a8;
  }
  else {
    pUVar10 = pUVar8;
    if (pUVar6 == (UClass *)0x0) goto LAB_14841b1a8;
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar10 = pUVar8;
  if (pUVar7 != (UClass *)0x0) {
    iVar2 = (int)pUVar7->_padding_;
    if (((int)pUVar6->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) != &pUVar7->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar10 = pUVar6;
    }
  }
LAB_14841b1a8:
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar10 == pUVar8) {
    local_110 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,1,0,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_110,
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_100);
  }
  else {
    local_108 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,0,0,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_108,
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_100);
  }
  iVar2 = local_38;
  puVar9 = local_100;
  if (local_40 != (undefined8 *)0x0) {
    puVar9 = local_40;
  }
  puVar1 = puVar9 + local_38;
  while( true ) {
    if (local_38 != iVar2) {
      local_118[0] = 0;
      `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_118);
    }
    if (puVar9 == puVar1) break;
    pUVar3 = (UPrimitiveComponent *)*puVar9;
    if ((pUVar3 == (UPrimitiveComponent *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Primitive",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                           ,0xf4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (param_2 == Register) {
      RegisterComponent(this,pUVar3,true);
      puVar9 = puVar9 + 1;
    }
    else {
      if (param_2 == Unregister) {
        UnregisterComponent(this,pUVar3);
      }
      puVar9 = puVar9 + 1;
    }
  }
  if (local_40 != (undefined8 *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}

// RegisterComponent @ 14841cda0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
Nanite::FCoarseMeshStreamingManager::RegisterComponent
          (FCoarseMeshStreamingManager *this,UPrimitiveComponent *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
  *this_00;
  UStaticMesh *this_01;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
  *pTVar6;
  longlong lVar7;
  ForElementType<FSetElementId> FVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  UPrimitiveComponent *local_res10;
  int local_78;
  undefined1 local_74 [12];
  UStaticMesh *local_68;
  TKeyInitializer<UStreamableRenderAsset_*_&&> local_60;
  UStaticMesh *local_58;
  FSparseArrayAllocationInfo local_50;
  UPrimitiveComponent **local_40;
  UStaticMesh **local_38;
  
  local_res10 = param_1;
  pUVar5 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  iVar12 = (int)pUVar5->_padding_;
  if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar12) {
    return;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar12 * 8) !=
      &pUVar5->_padding_) {
    return;
  }
  this_01 = *(UStaticMesh **)&local_res10[1].field_0x50;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  lpCriticalSection = &this->UpdateCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_2) {
    if (local_res10->bAttachedToCoarseMeshStreamingManager != 0) {
      uVar4 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)
              ) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      if (*(int *)&(this->ComponentToRenderAssetLookUpMap).field_0x8 !=
          *(int *)&(this->ComponentToRenderAssetLookUpMap).field_0x34) {
        puVar9 = *(undefined1 **)&(this->ComponentToRenderAssetLookUpMap).field_0x40;
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &(this->ComponentToRenderAssetLookUpMap).field_0x38;
        }
        iVar12 = *(int *)(puVar9 + (ulonglong)
                                   (*(int *)&(this->ComponentToRenderAssetLookUpMap).field_0x48 - 1U
                                   & (uVar4 >> 0x10 ^ uVar4)) * 4);
        if (iVar12 != -1) {
          lVar7 = *(longlong *)&this->ComponentToRenderAssetLookUpMap;
          do {
            if (*(UPrimitiveComponent **)(lVar7 + (longlong)iVar12 * 0x18) == local_res10) {
              if ((iVar12 != -1) && (lVar7 = lVar7 + (longlong)iVar12 * 0x18, lVar7 != 0)) {
                puVar11 = (undefined8 *)(lVar7 + 8);
                if (puVar11 != (undefined8 *)0x0) goto LAB_14841cefa;
                goto LAB_14841ced0;
              }
              break;
            }
            iVar12 = *(int *)(lVar7 + 0x10 + (longlong)iVar12 * 0x18);
          } while (iVar12 != -1);
        }
      }
      puVar11 = (undefined8 *)0x0;
LAB_14841ced0:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegisteredAsset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                         ,0x110,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
LAB_14841cefa:
      if ((UStaticMesh *)*puVar11 != this_01) {
        UnregisterComponentInternal(this,local_res10,(UStreamableRenderAsset *)*puVar11);
      }
      goto LAB_14841cf11;
    }
  }
  else {
LAB_14841cf11:
    if (local_res10->bAttachedToCoarseMeshStreamingManager != 0) goto LAB_14841d2b0;
  }
  if (((this_01 != (UStaticMesh *)0x0) && (bVar2 = UStaticMesh::HasValidNaniteData(this_01), bVar2))
     && ((this_01->_padding_ & 1) != 0)) {
    bVar2 = true;
    pTVar6 = TMapBase<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
             ::Find((TMapBase<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
                     *)&this->RequestReleaseComponentsMap,(UStreamableRenderAsset *)this_01);
    if ((pTVar6 != (TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
                    *)0x0) &&
       (uVar4 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
                (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595,
       uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb,
       *(int *)&(pTVar6->Elements).field_0x8 != *(int *)&(pTVar6->Elements).field_0x34)) {
      FVar8 = (pTVar6->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&pTVar6->Hash;
      }
      iVar12 = *(int *)((longlong)FVar8 +
                       (ulonglong)(pTVar6->HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
      if (iVar12 != -1) {
        do {
          if (*(UPrimitiveComponent **)(*(longlong *)&pTVar6->Elements + (longlong)iVar12 * 0x10) ==
              local_res10) {
            TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
            ::Remove(pTVar6,local_res10);
            bVar2 = false;
            break;
          }
          iVar12 = *(int *)(*(longlong *)&pTVar6->Elements + 8 + (longlong)iVar12 * 0x10);
        } while (iVar12 != -1);
      }
    }
    this_00 = &this->RegisteredComponentsMap;
    uVar4 = ((uint)((ulonglong)this_01 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_01 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    local_68 = this_01;
    if (*(int *)&(this->RegisteredComponentsMap).field_0x8 !=
        *(int *)&(this->RegisteredComponentsMap).field_0x34) {
      puVar9 = *(undefined1 **)&(this->RegisteredComponentsMap).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->RegisteredComponentsMap).field_0x38;
      }
      iVar12 = *(int *)(puVar9 + (ulonglong)
                                 (*(int *)&(this->RegisteredComponentsMap).field_0x48 - 1U & uVar4)
                                 * 4);
      if (iVar12 != -1) {
        lVar7 = *(longlong *)&this_00->field_0x0;
        do {
          if (*(UStaticMesh **)((longlong)iVar12 * 0x60 + lVar7) == this_01) {
            if ((iVar12 != -1) && (lVar7 = (longlong)iVar12 * 0x60 + lVar7, lVar7 != 0))
            goto LAB_14841d143;
            break;
          }
          iVar12 = *(int *)((longlong)iVar12 * 0x60 + 0x58 + lVar7);
        } while (iVar12 != -1);
      }
    }
    local_60.Key = (UStreamableRenderAsset **)&local_68;
    TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this_00,&local_50);
    if (local_50.Pointer !=
        (TSparseSetElement<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>_>
         *)0x0) {
      TKeyInitializer<UStreamableRenderAsset_*_&&>::
      operator<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>_TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>
                (&local_60,local_50.Pointer);
      *(undefined4 *)((longlong)local_50.Pointer + 0x58) = 0xffffffff;
    }
    local_78 = local_50.Index;
    bVar3 = TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::TryReplaceExisting
                      ((TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)this_00,uVar4,local_50.Pointer,&local_78,(bool *)0x0);
    if (!bVar3) {
      TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::RehashOrLink((TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)this_00,uVar4,local_50.Pointer,local_78);
    }
    lVar7 = (longlong)local_78 * 0x60 + *(longlong *)&this_00->field_0x0;
LAB_14841d143:
    pTVar6 = (TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
              *)(lVar7 + 8);
    uVar4 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4))
            * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    if (bVar2) {
      if (*(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 0x3c)) {
        lVar10 = *(longlong *)(lVar7 + 0x48);
        if (*(longlong *)(lVar7 + 0x48) == 0) {
          lVar10 = lVar7 + 0x40;
        }
        iVar12 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar7 + 0x50) - 1U & uVar4) * 4);
        if (iVar12 != -1) {
          do {
            if (*(UPrimitiveComponent **)(*(longlong *)&pTVar6->Elements + (longlong)iVar12 * 0x10)
                == local_res10) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("!RegisteredComponents.Contains(Primitive)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                                 ,0x130,L"");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              break;
            }
            iVar12 = *(int *)(*(longlong *)&pTVar6->Elements + 8 + (longlong)iVar12 * 0x10);
          } while (iVar12 != -1);
        }
      }
      TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
      ::Emplace<UPrimitiveComponent_const_*_const_&>
                (pTVar6,(UPrimitiveComponent **)local_74,(bool *)&local_res10);
    }
    else {
      if (*(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 0x3c)) {
        lVar10 = *(longlong *)(lVar7 + 0x48);
        if (*(longlong *)(lVar7 + 0x48) == 0) {
          lVar10 = lVar7 + 0x40;
        }
        iVar12 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar7 + 0x50) - 1U & uVar4) * 4);
        if (iVar12 != -1) {
          do {
            if (*(UPrimitiveComponent **)(*(longlong *)&pTVar6->Elements + (longlong)iVar12 * 0x10)
                == local_res10) goto LAB_14841d27a;
            iVar12 = *(int *)(*(longlong *)&pTVar6->Elements + 8 + (longlong)iVar12 * 0x10);
          } while (iVar12 != -1);
        }
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegisteredComponents.Contains(Primitive)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                         ,0x135,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_14841d27a:
    local_40 = &local_res10;
    local_38 = &local_58;
    local_58 = this_01;
    TSet<TTuple<UPrimitiveComponent_const_*,UStreamableRenderAsset_*>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,UStreamableRenderAsset_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UPrimitiveComponent_const_*_const_&,UStreamableRenderAsset_*_&&>_>
              ((TSet<TTuple<UPrimitiveComponent_const_*,UStreamableRenderAsset_*>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,UStreamableRenderAsset_*,0>,FDefaultSetAllocator>
                *)&this->ComponentToRenderAssetLookUpMap,
               (TPairInitializer<UPrimitiveComponent_const_*_const_&,UStreamableRenderAsset_*_&&> *)
               (local_74 + 4),(bool *)&local_40);
    local_res10->bAttachedToCoarseMeshStreamingManager = '\x01';
  }
LAB_14841d2b0:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RegisterRenderAsset @ 14841d2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Nanite::FCoarseMeshStreamingManager::RegisterRenderAsset
          (FCoarseMeshStreamingManager *this,UStreamableRenderAsset *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FName FVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshTotalCount> FVar9;
  FThreadStats *pFVar10;
  FThreadStatsPool *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshMemoryNonStreaming> FVar12;
  FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshTotalMemory> FVar13;
  FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshNonStreamingCount> FVar14;
  TSparseArray<Nanite::FCoarseMeshStreamingManager::FRegisteredRenderAsset,FDefaultSparseArrayAllocator>
  *this_00;
  uchar auVar15 [8];
  uchar auVar16 [8];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_e8;
  FStatMessage local_e0;
  FStatMessage local_d0;
  FStatMessage local_c0;
  FStatMessage local_b0;
  undefined2 local_a0;
  undefined6 uStack_9e;
  UStreamableRenderAsset *pUStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  FSparseArrayAllocationInfo local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  FVar9 = StatPtr_STAT_NaniteCoarseMeshTotalCount;
  if (StatPtr_STAT_NaniteCoarseMeshTotalCount ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshTotalCount>)0x0) {
    pFVar8 = ::FName::FName(&local_68,"STAT_NaniteCoarseMeshTotalCount");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshTotalCount>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteCoarseMeshTotalCount,*pFVar8
                       ,L"Total Mesh Count","STATGROUP_NaniteCoarseMeshStreaming","STATCAT_Advanced"
                       ,L"Nanite Coarse Mesh Streaming",true,false,ST_int64,false,false,MCR_Invalid)
    ;
  }
  FVar2 = *(FName *)FVar9;
  local_res10 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar10 == (FThreadStats *)0x0) {
      pFVar11 = FThreadStatsPool::Get();
      pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
    }
    local_e0.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
    local_e0.StatData.Pad[0] = '\x01';
    local_e0.StatData.Pad[1] = '\0';
    local_e0.StatData.Pad[2] = '\0';
    local_e0.StatData.Pad[3] = '\0';
    local_e0.StatData.Pad[4] = '\0';
    local_e0.StatData.Pad[5] = '\0';
    local_e0.StatData.Pad[6] = '\0';
    local_e0.StatData.Pad[7] = '\0';
    local_res18 = FVar2;
    local_e0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar10,&local_e0);
    FStatsTrace::Add(&local_res18,1);
    if (pFVar10->ScopeCount == 0) {
      FThreadStats::Flush(pFVar10,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar10,false,false);
    }
  }
  iVar6 = (**(code **)(param_1->_padding_ + 0x2b8))
                    (param_1,(param_1->CachedSRRState).field0_0x0._s_0.NumNonStreamingLODs);
  auVar16 = (uchar  [8])(longlong)iVar6;
  iVar6 = (**(code **)(param_1->_padding_ + 0x2b8))
                    (param_1,(param_1->CachedSRRState).field0_0x0._s_0.NumNonOptionalLODs);
  auVar15 = (uchar  [8])(longlong)iVar6;
  if (auVar16 != (uchar  [8])0x0) {
    FVar12 = StatPtr_STAT_NaniteCoarseMeshMemoryNonStreaming;
    if (StatPtr_STAT_NaniteCoarseMeshMemoryNonStreaming ==
        (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshMemoryNonStreaming>)0x0) {
      pFVar8 = ::FName::FName(&local_60,"STAT_NaniteCoarseMeshMemoryNonStreaming");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshMemoryNonStreaming>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_NaniteCoarseMeshMemoryNonStreaming,*pFVar8,L"NonStreaming",
                          "STATGROUP_NaniteCoarseMeshStreaming","STATCAT_Advanced",
                          L"Nanite Coarse Mesh Streaming",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar2 = *(FName *)FVar12;
    local_res10 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_d0.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res20 = FVar2;
      local_d0.StatData.Pad = auVar16;
      local_d0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_d0);
      FStatsTrace::Add(&local_res20,(long64)auVar16);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  if (auVar15 != (uchar  [8])0x0) {
    FVar13 = StatPtr_STAT_NaniteCoarseMeshTotalMemory;
    if (StatPtr_STAT_NaniteCoarseMeshTotalMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshTotalMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_58,"STAT_NaniteCoarseMeshTotalMemory");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshTotalMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteCoarseMeshTotalMemory,
                          *pFVar8,L"Total Memory","STATGROUP_NaniteCoarseMeshStreaming",
                          "STATCAT_Advanced",L"Nanite Coarse Mesh Streaming",true,false,ST_int64,
                          false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar13;
    local_res10 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_c0.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res10 = FVar2;
      local_c0.StatData.Pad = auVar15;
      local_c0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_c0);
      FStatsTrace::Add(&local_res10,(long64)auVar15);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  bVar4 = *(byte *)&(param_1->CachedSRRState).field0_0x0 & 1;
  if ((longlong)auVar15 - (longlong)auVar16 == 0) {
    if ((bVar4 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ResourceState.bSupportsStreaming",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                           ,0x9c,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar14 = StatPtr_STAT_NaniteCoarseMeshNonStreamingCount;
    if (StatPtr_STAT_NaniteCoarseMeshNonStreamingCount ==
        (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshNonStreamingCount>)0x0) {
      pFVar8 = ::FName::FName(local_50,"STAT_NaniteCoarseMeshNonStreamingCount");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshNonStreamingCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_NaniteCoarseMeshNonStreamingCount,*pFVar8,
                          L"NonStreaming Mesh Count","STATGROUP_NaniteCoarseMeshStreaming",
                          "STATCAT_Advanced",L"Nanite Coarse Mesh Streaming",true,false,ST_int64,
                          false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar14;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res10 = FVar2;
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_b0.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_b0.StatData.Pad[0] = '\x01';
      local_b0.StatData.Pad[1] = '\0';
      local_b0.StatData.Pad[2] = '\0';
      local_b0.StatData.Pad[3] = '\0';
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_e8 = FVar2;
      local_b0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_b0);
      FStatsTrace::Add(&local_e8,1);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  else {
    if ((bVar4 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ResourceState.bSupportsStreaming",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                           ,0xa1,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_88 = 0;
    local_a0 = 0xffff;
    local_80 = 0;
    lpCriticalSection = &this->UpdateCS;
    local_90 = (undefined4)((longlong)auVar15 - (longlong)auVar16);
    pUStack_98 = param_1;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = &this->RegisteredRenderAssets;
    iVar6 = *(int *)&(this->RegisteredRenderAssets).field_0x34;
    if (iVar6 == 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,1,(ForAnyElementType *)this_00,
                         (int *)&(this->RegisteredRenderAssets).field_0x8,
                         (int *)&(this->RegisteredRenderAssets).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredRenderAssets).field_0x10,
                 false);
    }
    else {
      iVar7 = *(int *)&(this->RegisteredRenderAssets).field_0x30;
      iVar6 = iVar6 + -1;
      iVar1 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar7 * 0x28);
      *(int *)&(this->RegisteredRenderAssets).field_0x30 = iVar1;
      *(int *)&(this->RegisteredRenderAssets).field_0x34 = iVar6;
      if (iVar6 != 0) {
        *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar1 * 0x28) = 0xffffffff;
      }
    }
    TSparseArrayBase<40,8,FDefaultSparseArrayAllocator>::AllocateIndex
              ((TSparseArrayBase<40,8,FDefaultSparseArrayAllocator> *)this_00,&local_78,iVar7);
    if (local_78.Pointer != (undefined8 *)0x0) {
      *(ulonglong *)local_78.Pointer = CONCAT62(uStack_9e,local_a0);
      *(UStreamableRenderAsset **)((longlong)local_78.Pointer + 8) = pUStack_98;
      *(ulonglong *)((longlong)local_78.Pointer + 0x10) = CONCAT44(uStack_8c,local_90);
      *(undefined8 *)((longlong)local_78.Pointer + 0x18) = uStack_88;
      *(ulonglong *)((longlong)local_78.Pointer + 0x20) = CONCAT44(uStack_7c,local_80);
    }
    *(short *)(*(longlong *)&this_00->field_0x0 + (longlong)(short)local_78.Index * 0x28) =
         (short)local_78.Index;
    if ((param_1->StreamingIndex != -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RenderAsset->StreamingIndex == INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                           ,0xab,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1->StreamingIndex = (int)(short)local_78.Index;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RemoveLevel @ 148420210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
Nanite::FCoarseMeshStreamingManager::RemoveLevel(FCoarseMeshStreamingManager *this,ULevel *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  ULevel *pUVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ULevel *local_res10;
  undefined1 local_res18 [8];
  
  pFVar2 = (this->RegisteredLevels).AllocatorInstance.Data;
  local_res10 = param_1;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar2 + (longlong)(this->RegisteredLevels).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->RegisteredLevels).ArrayNum;
  if (iVar1 != 0) {
    iVar10 = 0;
    pFVar2 = (this->RegisteredLevels).AllocatorInstance.Data;
    bVar4 = *(ULevel **)pFVar2 != local_res10;
    lVar5 = 0;
    pUVar7 = local_res10;
    iVar8 = 0;
    do {
      iVar9 = iVar8;
      do {
        lVar5 = lVar5 + 1;
        iVar9 = iVar9 + 1;
        if (iVar1 <= lVar5) break;
      } while (bVar4 == (*(ULevel **)(pFVar2 + lVar5 * 8) != pUVar7));
      if (bVar4 != false) {
        if (iVar10 != iVar8) {
          memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar8 * 8,
                  (longlong)(iVar9 - iVar8) << 3);
          pUVar7 = local_res10;
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar8 = iVar9;
    } while (lVar5 < iVar1);
    (this->RegisteredLevels).ArrayNum = iVar10;
    if (0 < iVar1 - iVar10) {
      pFVar6 = (pUVar7->Actors).AllocatorInstance.Data;
      iVar1 = (pUVar7->Actors).ArrayNum;
      pFVar2 = pFVar6 + (longlong)iVar1 * 8;
      while( true ) {
        if ((pUVar7->Actors).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar6 == pFVar2) break;
        if (*(AActor **)pFVar6 != (AActor *)0x0) {
          ProcessNotifiedActor(this,*(AActor **)pFVar6,Unregister);
        }
        pFVar6 = pFVar6 + 8;
      }
    }
  }
  return;
}

// RequestUpdateCachedRenderState @ 1484211e0

void __thiscall
Nanite::FCoarseMeshStreamingManager::RequestUpdateCachedRenderState
          (FCoarseMeshStreamingManager *this,UStreamableRenderAsset *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
  *pTVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                         ,0x16c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lpCriticalSection = &this->UpdateCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar8 = TMapBase<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
           ::Find((TMapBase<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
                   *)&this->RegisteredComponentsMap,param_1);
  if (pTVar8 != (TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
                 *)0x0) {
    iVar3 = *(int *)&(pTVar8->Elements).field_0x28;
    iVar11 = 0;
    puVar1 = &(pTVar8->Elements).field_0x10;
    uVar6 = 1;
    iVar13 = 0;
    iVar7 = 0;
    if (iVar3 != 0) {
      puVar14 = *(uint **)&(pTVar8->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar1;
      }
      uVar10 = *puVar14;
      while (uVar10 == 0) {
        lVar9 = (longlong)iVar11;
        iVar13 = iVar13 + 0x20;
        iVar11 = iVar11 + 1;
        iVar7 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1484212fe;
        uVar10 = puVar14[lVar9 + 1];
      }
      uVar6 = -uVar10 & uVar10;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = iVar13 + -1 + (int)lVar9;
      if (iVar3 < iVar7) {
        iVar7 = iVar3;
      }
    }
LAB_1484212fe:
    uVar10 = *(uint *)&(pTVar8->Elements).field_0x28;
    uVar15 = uVar10 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar6,iVar11);
    TStack_60.CurrentBitIndex = iVar7;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar10 >> 5;
    TStack_60._28_4_ = local_9c;
    TStack_60.BaseBitIndex = iVar13;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(pTVar8->Elements).field_0x8 -
                         *(int *)&(pTVar8->Elements).field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *(uint *)&(pTVar8->Elements).field_0x28;
    if (uVar10 != uVar6) {
      puVar12 = *(undefined1 **)&(pTVar8->Elements).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
      while (uVar10 == 0) {
        lVar9 = (longlong)iVar11;
        uVar15 = uVar15 + 0x20;
        iVar11 = iVar11 + 1;
        uVar10 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_148421410;
        uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar10 = (int)lVar9 + -1 + uVar15;
      if ((int)uVar6 < (int)uVar10) {
        uVar10 = uVar6;
      }
    }
LAB_148421410:
    while( true ) {
      if (*(int *)&(pTVar8->Elements).field_0x8 - *(int *)&(pTVar8->Elements).field_0x34 !=
          (int)uStack_40) {
        `TSparseArray<TSparseSetElement<UPrimitiveComponent_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar10) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      lVar9 = *(longlong *)
               (*(longlong *)
                 (*(longlong *)&pTVar8->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10) +
               0x530);
      if (lVar9 != 0) {
        (**(code **)(**(longlong **)(lVar9 + 0x220) + 0x4f8))();
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014842149e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetDisregardWorldResourcesForFrames @ 148424360

void __thiscall
Nanite::FCoarseMeshStreamingManager::SetDisregardWorldResourcesForFrames
          (FCoarseMeshStreamingManager *this,int param_1)

{
  return;
}

// UnregisterComponent @ 148429c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
Nanite::FCoarseMeshStreamingManager::UnregisterComponent
          (FCoarseMeshStreamingManager *this,UPrimitiveComponent *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  UStaticMesh *this_00;
  bool bVar2;
  UClass *pUVar3;
  
  pUVar3 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    this_00 = *(UStaticMesh **)&param_1[1].field_0x50;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UStaticMesh *)0x0) {
        return;
      }
    }
    else {
      if (this_00 == (UStaticMesh *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    bVar2 = UStaticMesh::HasValidNaniteData(this_00);
    if ((bVar2) && ((this_00->_padding_ & 1) != 0)) {
      lpCriticalSection = &this->UpdateCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (param_1->bAttachedToCoarseMeshStreamingManager != 0) {
        UnregisterComponentInternal(this,param_1,(UStreamableRenderAsset *)this_00);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// UnregisterComponentInternal @ 148429d30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
Nanite::FCoarseMeshStreamingManager::UnregisterComponentInternal
          (FCoarseMeshStreamingManager *this,UPrimitiveComponent *param_1,
          UStreamableRenderAsset *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 *puVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  UPrimitiveComponent *local_res8;
  UPrimitiveComponent *local_res10;
  UStreamableRenderAsset *local_res18;
  UPrimitiveComponent *local_res20;
  
  uVar7 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  local_res10 = param_1;
  local_res18 = param_2;
  if (*(int *)&(this->RequestReleaseComponentsMap).field_0x8 !=
      *(int *)&(this->RequestReleaseComponentsMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->RequestReleaseComponentsMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->RequestReleaseComponentsMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->RequestReleaseComponentsMap).field_0x48 - 1U & uVar7)
                              * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)
                 ((longlong)iVar3 * 0x60 + *(longlong *)&this->RequestReleaseComponentsMap);
        if ((UStreamableRenderAsset *)*plVar4 == param_2) {
          if (plVar4 != (longlong *)0x0) {
            this_00 = (TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
                       *)(plVar4 + 1);
            goto LAB_148429df1;
          }
          break;
        }
        iVar3 = (int)plVar4[0xb];
      } while (iVar3 != -1);
    }
  }
  this_00 = TMapBase<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
            ::EmplaceByHash<UStreamableRenderAsset_*_const_&>
                      ((TMapBase<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
                        *)&this->RequestReleaseComponentsMap,uVar7,&local_res18);
LAB_148429df1:
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    FVar6 = (this_00->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this_00->Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)(this_00->HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        if (*(UPrimitiveComponent **)(*(longlong *)&this_00->Elements + (longlong)iVar3 * 0x10) ==
            param_1) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Components.Contains(Primitive)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                             ,0x161,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          break;
        }
        iVar3 = *(int *)(*(longlong *)&this_00->Elements + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
  ::Emplace<UPrimitiveComponent_const_*_const_&>(this_00,&local_res8,(bool *)&local_res10);
  local_res20 = param_1;
  if (((*(int *)&(this->ComponentToRenderAssetLookUpMap).field_0x8 ==
        *(int *)&(this->ComponentToRenderAssetLookUpMap).field_0x34) ||
      (uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595, uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb,
      iVar3 = TSet<TTuple<UPrimitiveComponent_const_*,UStreamableRenderAsset_*>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,UStreamableRenderAsset_*,0>,FDefaultSetAllocator>
              ::RemoveImpl<UPrimitiveComponent_const_*>
                        ((TSet<TTuple<UPrimitiveComponent_const_*,UStreamableRenderAsset_*>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,UStreamableRenderAsset_*,0>,FDefaultSetAllocator>
                          *)&this->ComponentToRenderAssetLookUpMap,uVar7 >> 0x10 ^ uVar7,
                         &local_res20), iVar3 != 1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComponentToRenderAssetLookUpMap.Remove(Primitive) == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                         ,0x164,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  param_1->bAttachedToCoarseMeshStreamingManager = '\0';
  return;
}

// UnregisterRenderAsset @ 148429f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Nanite::FCoarseMeshStreamingManager::UnregisterRenderAsset
          (FCoarseMeshStreamingManager *this,UStreamableRenderAsset *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  FName FVar5;
  ForElementType<FSetElementId> FVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  byte bVar9;
  TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshTotalCount> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshMemoryNonStreaming> FVar18;
  FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshTotalMemory> FVar19;
  FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshNonStreamingCount> FVar20;
  TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
  *pTVar21;
  TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
  *pTVar22;
  short sVar23;
  longlong lVar24;
  ForElementType<FSetElementId> FVar25;
  uint uVar26;
  int iVar27;
  TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *this_00;
  int iVar28;
  TMap<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
  *this_01;
  undefined1 *puVar29;
  undefined1 *puVar30;
  uint *puVar31;
  int iVar32;
  uchar auVar33 [8];
  uint uVar34;
  uchar auVar35 [8];
  bool local_res18;
  undefined1 local_res20 [8];
  short local_188 [4];
  TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *local_180;
  int local_178;
  int local_174;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  longlong local_150;
  TMap<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
  *local_148;
  UStreamableRenderAsset *local_140;
  UStreamableRenderAsset *local_138;
  FStatMessage local_130;
  FStatMessage local_120;
  FStatMessage local_110;
  FStatMessage local_100;
  TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
  *local_f0;
  int iStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78 [4];
  undefined4 local_54;
  
  FVar15 = StatPtr_STAT_NaniteCoarseMeshTotalCount;
  if (StatPtr_STAT_NaniteCoarseMeshTotalCount ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshTotalCount>)0x0) {
    pFVar14 = ::FName::FName(&local_90,"STAT_NaniteCoarseMeshTotalCount");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshTotalCount>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteCoarseMeshTotalCount,
                        *pFVar14,L"Total Mesh Count","STATGROUP_NaniteCoarseMeshStreaming",
                        "STATCAT_Advanced",L"Nanite Coarse Mesh Streaming",true,false,ST_int64,false
                        ,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar15;
  if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    local_130.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
    local_130.StatData.Pad[0] = '\x01';
    local_130.StatData.Pad[1] = '\0';
    local_130.StatData.Pad[2] = '\0';
    local_130.StatData.Pad[3] = '\0';
    local_130.StatData.Pad[4] = '\0';
    local_130.StatData.Pad[5] = '\0';
    local_130.StatData.Pad[6] = '\0';
    local_130.StatData.Pad[7] = '\0';
    local_170 = FVar5;
    local_130.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar16,&local_130);
    FStatsTrace::Add(&local_170,-1);
    if (pFVar16->ScopeCount == 0) {
      FThreadStats::Flush(pFVar16,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar16,false,false);
    }
  }
  iVar12 = (**(code **)(param_1->_padding_ + 0x2b8))
                     (param_1,(param_1->CachedSRRState).field0_0x0._s_0.NumNonStreamingLODs);
  auVar33 = (uchar  [8])(longlong)iVar12;
  iVar12 = (**(code **)(param_1->_padding_ + 0x2b8))
                     (param_1,(param_1->CachedSRRState).field0_0x0._s_0.NumNonOptionalLODs);
  auVar35 = (uchar  [8])(longlong)iVar12;
  if (auVar33 != (uchar  [8])0x0) {
    FVar18 = StatPtr_STAT_NaniteCoarseMeshMemoryNonStreaming;
    if (StatPtr_STAT_NaniteCoarseMeshMemoryNonStreaming ==
        (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshMemoryNonStreaming>)0x0) {
      pFVar14 = ::FName::FName(&local_88,"STAT_NaniteCoarseMeshMemoryNonStreaming");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshMemoryNonStreaming>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_NaniteCoarseMeshMemoryNonStreaming,*pFVar14,L"NonStreaming",
                          "STATGROUP_NaniteCoarseMeshStreaming","STATCAT_Advanced",
                          L"Nanite Coarse Mesh Streaming",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar5 = *(FName *)FVar18;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      local_120.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
      local_168 = FVar5;
      local_120.StatData.Pad = auVar33;
      local_120.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar16,&local_120);
      FStatsTrace::Add(&local_168,-(longlong)auVar33);
      if (pFVar16->ScopeCount == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  if (auVar35 != (uchar  [8])0x0) {
    FVar19 = StatPtr_STAT_NaniteCoarseMeshTotalMemory;
    if (StatPtr_STAT_NaniteCoarseMeshTotalMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshTotalMemory>)0x0) {
      pFVar14 = ::FName::FName(&local_80,"STAT_NaniteCoarseMeshTotalMemory");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshTotalMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteCoarseMeshTotalMemory,
                          *pFVar14,L"Total Memory","STATGROUP_NaniteCoarseMeshStreaming",
                          "STATCAT_Advanced",L"Nanite Coarse Mesh Streaming",true,false,ST_int64,
                          false,false,MCR_Physical);
    }
    FVar5 = *(FName *)FVar19;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      local_110.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
      local_160 = FVar5;
      local_110.StatData.Pad = auVar35;
      local_110.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar16,&local_110);
      FStatsTrace::Add(&local_160,-(longlong)auVar35);
      if (pFVar16->ScopeCount == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  if (auVar35 == auVar33) {
    if ((param_1->StreamingIndex != -1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("RenderAsset->StreamingIndex == INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                            ,0xbc,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar20 = StatPtr_STAT_NaniteCoarseMeshNonStreamingCount;
    if (StatPtr_STAT_NaniteCoarseMeshNonStreamingCount ==
        (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshNonStreamingCount>)0x0) {
      pFVar14 = ::FName::FName(local_78,"STAT_NaniteCoarseMeshNonStreamingCount");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshNonStreamingCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_NaniteCoarseMeshNonStreamingCount,*pFVar14,
                          L"NonStreaming Mesh Count","STATGROUP_NaniteCoarseMeshStreaming",
                          "STATCAT_Advanced",L"Nanite Coarse Mesh Streaming",true,false,ST_int64,
                          false,false,MCR_Invalid);
    }
    FVar5 = *(FName *)FVar20;
    if (FVar5 == (FName)0x0) {
      return;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return;
    }
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    local_100.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
    local_100.StatData.Pad[0] = '\x01';
    local_100.StatData.Pad[1] = '\0';
    local_100.StatData.Pad[2] = '\0';
    local_100.StatData.Pad[3] = '\0';
    local_100.StatData.Pad[4] = '\0';
    local_100.StatData.Pad[5] = '\0';
    local_100.StatData.Pad[6] = '\0';
    local_100.StatData.Pad[7] = '\0';
    local_158 = FVar5;
    local_100.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar16,&local_100);
    FStatsTrace::Add(&local_158,-1);
    if (pFVar16->ScopeCount == 0) {
      FThreadStats::Flush(pFVar16,false,false);
      return;
    }
    if (FThreadStats::bIsRawStatsActive == false) {
      return;
    }
    FThreadStats::FlushRawStats(pFVar16,false,false);
    return;
  }
  if ((param_1->StreamingIndex == -1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("RenderAsset->StreamingIndex != INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                          ,0xc1,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lpCriticalSection = &this->UpdateCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_01 = &this->RegisteredComponentsMap;
  lVar24 = *(longlong *)&this->RegisteredRenderAssets + (longlong)param_1->StreamingIndex * 0x28;
  local_150 = lVar24;
  local_148 = this_01;
  pTVar21 = TMapBase<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
            ::Find((TMapBase<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
                    *)this_01,param_1);
  if (pTVar21 ==
      (TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
       *)0x0) {
    this_00 = (TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
               *)&this->RequestReleaseComponentsMap;
  }
  else {
    local_180 = (TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                 *)&this->RequestReleaseComponentsMap;
    pTVar22 = TMapBase<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
              ::Find((TMapBase<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
                      *)local_180,param_1);
    iVar12 = *(int *)&(pTVar21->Elements).field_0x28;
    puVar3 = &(pTVar21->Elements).field_0x10;
    iStack_e8 = 0;
    local_d0 = 0;
    uStack_e4 = 1;
    iStack_d4 = 0;
    if (iVar12 != 0) {
      puVar31 = *(uint **)&(pTVar21->Elements).field_0x20;
      if (puVar31 == (uint *)0x0) {
        puVar31 = (uint *)puVar3;
      }
      uVar26 = *puVar31;
      while (uVar26 == 0) {
        lVar24 = (longlong)iStack_e8;
        local_d0 = local_d0 + 0x20;
        iStack_e8 = iStack_e8 + 1;
        iStack_d4 = iVar12;
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e8) goto LAB_14842a640;
        uVar26 = puVar31[lVar24 + 1];
      }
      uStack_e4 = -uVar26 & uVar26;
      uVar2 = (ulonglong)uStack_e4 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_178 = (int)lVar24;
      iStack_d4 = local_178 + -1 + local_d0;
      if (iVar12 < iStack_d4) {
        iStack_d4 = iVar12;
      }
    }
LAB_14842a640:
    uStack_cc = local_54;
    iStack_c8 = *(int *)&(pTVar21->Elements).field_0x8 - *(int *)&(pTVar21->Elements).field_0x34;
    uVar26 = *(uint *)&(pTVar21->Elements).field_0x28;
    uStack_d8 = 0xffffffff;
    TStack_b8._padding_ = CONCAT44(uStack_e4,iStack_e8);
    uVar34 = uVar26 & 0xffffffe0;
    TStack_b8.CurrentBitIndex = iStack_d4;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar28 = (int)uVar26 >> 5;
    TStack_b8._28_4_ = local_54;
    TStack_b8.BaseBitIndex = local_d0;
    uStack_98 = CONCAT44(uStack_c4,iStack_c8);
    local_f0 = pTVar21;
    local_e0 = puVar3;
    local_c0 = pTVar21;
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if ((((int)uVar26 < 0) || (iVar12 < (int)uVar26)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar4 = *(uint *)&(pTVar21->Elements).field_0x28;
    if (uVar26 != uVar4) {
      puVar30 = *(undefined1 **)&(pTVar21->Elements).field_0x20;
      puVar29 = puVar3;
      if (puVar30 != (undefined1 *)0x0) {
        puVar29 = puVar30;
      }
      uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar28 * 4);
      while (uVar26 == 0) {
        lVar24 = (longlong)iVar28;
        uVar34 = uVar34 + 0x20;
        iVar28 = iVar28 + 1;
        uVar26 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
        goto LAB_14842a750;
        uVar26 = *(uint *)(puVar29 + lVar24 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_174 = (int)lVar24;
      uVar26 = local_174 + -1 + uVar34;
      if ((int)uVar4 < (int)uVar26) {
        uVar26 = uVar4;
      }
    }
LAB_14842a750:
    while( true ) {
      pTVar10 = local_c0;
      if (*(int *)&(local_c0->Elements).field_0x8 - *(int *)&(local_c0->Elements).field_0x34 !=
          (int)uStack_98) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<UPrimitiveComponent_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_b8.CurrentBitIndex == uVar26) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
         (this_00 = local_180, this_01 = local_148, lVar24 = local_150, pTVar10 == pTVar21)) break;
      uVar2 = *(ulonglong *)
               (*(longlong *)&pTVar10->Elements + (longlong)TStack_b8.CurrentBitIndex * 0x10);
      if ((pTVar22 !=
           (TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
            *)0x0) &&
         (uVar34 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595,
         uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb,
         *(int *)&(pTVar22->Elements).field_0x8 != *(int *)&(pTVar22->Elements).field_0x34)) {
        FVar6 = (pTVar22->Hash).SecondaryData;
        FVar25 = (ForElementType<FSetElementId>)&pTVar22->Hash;
        if (FVar6 != (ForElementType<FSetElementId>)0x0) {
          FVar25 = FVar6;
        }
        iVar12 = *(int *)((longlong)FVar25 +
                         (ulonglong)(pTVar22->HashSize - 1U & (uVar34 >> 0x10 ^ uVar34)) * 4);
        if (iVar12 != -1) {
          do {
            if (*(ulonglong *)(*(longlong *)&pTVar22->Elements + (longlong)iVar12 * 0x10) == uVar2)
            goto LAB_14842a81c;
            iVar12 = *(int *)(*(longlong *)&pTVar22->Elements + 8 + (longlong)iVar12 * 0x10);
          } while (iVar12 != -1);
        }
      }
      *(byte *)(uVar2 + 0x27b) = *(byte *)(uVar2 + 0x27b) & 0xfe;
LAB_14842a81c:
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
  }
  local_140 = param_1;
  if (*(int *)&this_01->field_0x8 != *(int *)&this_01->field_0x34) {
    uVar26 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
             -0x7a143595;
    uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
    TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::RemoveImpl<UStreamableRenderAsset_const_*>
              ((TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)&this->RegisteredComponentsMap,uVar26 >> 0x10 ^ uVar26,&local_140);
  }
  local_138 = param_1;
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    uVar26 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
             -0x7a143595;
    uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
    TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::RemoveImpl<UStreamableRenderAsset_const_*>(this_00,uVar26 >> 0x10 ^ uVar26,&local_138);
  }
  if (*(int *)(lVar24 + 0x20) != 0) {
    this->TotalRequestedRenderAssetSize =
         this->TotalRequestedRenderAssetSize - (ulonglong)*(uint *)(lVar24 + 0x10);
    if ((*(int *)(lVar24 + 0x20) == 3) || (*(int *)(lVar24 + 0x20) - 4U < 2)) {
      this->TotalLoadedRenderAssetSize =
           this->TotalLoadedRenderAssetSize - (ulonglong)*(uint *)(lVar24 + 0x10);
    }
    pFVar7 = (this->ActiveHandles).AllocatorInstance.Data;
    local_188[0] = (short)param_1->StreamingIndex;
    if (((pFVar7 <= (FScriptContainerElement *)local_188) &&
        ((FScriptContainerElement *)local_188 <
         pFVar7 + (longlong)(this->ActiveHandles).ArrayMax * 2)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar12 = (this->ActiveHandles).ArrayNum;
    local_180 = (TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                 *)CONCAT44(local_180._4_4_,iVar12);
    if (iVar12 != 0) {
      pFVar7 = (this->ActiveHandles).AllocatorInstance.Data;
      iVar32 = 0;
      local_res18 = *(short *)pFVar7 != local_188[0];
      lVar24 = 0;
      sVar23 = local_188[0];
      iVar28 = 0;
      do {
        iVar27 = iVar28;
        do {
          lVar24 = lVar24 + 1;
          iVar27 = iVar27 + 1;
          if (iVar12 <= lVar24) break;
        } while (local_res18 == (*(short *)(pFVar7 + lVar24 * 2) != sVar23));
        if (local_res18 != false) {
          if (iVar32 != iVar28) {
            memmove(pFVar7 + (longlong)iVar32 * 2,pFVar7 + (longlong)iVar28 * 2,
                    (longlong)(iVar27 - iVar28) * 2);
            sVar23 = local_188[0];
          }
          iVar32 = iVar32 + (iVar27 - iVar28);
        }
        local_res18 = (bool)(local_res18 ^ 1);
        iVar28 = iVar27;
      } while (lVar24 < iVar12);
      (this->ActiveHandles).ArrayNum = iVar32;
      if ((int)local_180 - iVar32 == 1) goto LAB_14842aa7f;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("ActiveHandles.Remove(RenderAsset->StreamingIndex) == 1",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                        ,0xe7,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
LAB_14842aa7f:
  puVar3 = &(this->RegisteredRenderAssets).field_0x10;
  lVar24 = *(longlong *)&this->RegisteredRenderAssets;
  iVar12 = param_1->StreamingIndex;
  bVar9 = (byte)iVar12 & 0x1f;
  uVar26 = 1 << bVar9 | 1U >> 0x20 - bVar9;
  if (((iVar12 < 0) || (*(int *)&(this->RegisteredRenderAssets).field_0x28 <= iVar12)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar30 = *(undefined1 **)&(this->RegisteredRenderAssets).field_0x20;
  if (puVar30 == (undefined1 *)0x0) {
    puVar30 = puVar3;
  }
  if (((*(uint *)(puVar30 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4) & uVar26)
       == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllocationFlags[Index]",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                          ,0xc5,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (*(int *)&(this->RegisteredRenderAssets).field_0x34 != 0) {
    *(int *)(lVar24 + (longlong)*(int *)&(this->RegisteredRenderAssets).field_0x30 * 0x28) = iVar12;
  }
  puVar1 = (undefined4 *)(lVar24 + (longlong)iVar12 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)&(this->RegisteredRenderAssets).field_0x34 < 1) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar13 = *(undefined4 *)&(this->RegisteredRenderAssets).field_0x30;
  }
  puVar1[1] = uVar13;
  puVar30 = &(this->RegisteredRenderAssets).field_0x34;
  *(int *)puVar30 = *(int *)puVar30 + 1;
  *(int *)&(this->RegisteredRenderAssets).field_0x30 = iVar12;
  if (((iVar12 < 0) || (*(int *)&(this->RegisteredRenderAssets).field_0x28 <= iVar12)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar30 = *(undefined1 **)&(this->RegisteredRenderAssets).field_0x20;
  if (puVar30 == (undefined1 *)0x0) {
    puVar30 = puVar3;
  }
  *(uint *)(puVar30 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4) =
       *(uint *)(puVar30 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4) & ~uVar26;
  param_1->StreamingIndex = -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// UpdateResourceStates @ 14842b490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Nanite::FCoarseMeshStreamingManager::UpdateResourceStates(FCoarseMeshStreamingManager *this)

{
  TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator> *this_00;
  int *piVar1;
  TArray<short,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 *puVar6;
  FName FVar7;
  code *pcVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshStreamingMeshesRequested> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshStreamingMeshMemoryRequested> FVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uchar auVar18 [8];
  uchar auVar19 [8];
  LPCRITICAL_SECTION p_Var20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint *puVar24;
  undefined1 *puVar25;
  FScriptContainerElement *pFVar26;
  ForAnyElementType FVar27;
  FIdentityFunctor FVar28;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  short local_148 [4];
  ForAnyElementType local_140;
  undefined8 local_138;
  uchar local_130 [8];
  ulonglong local_128;
  uchar local_120 [8];
  int local_118;
  undefined4 local_114;
  LPCRITICAL_SECTION local_110;
  FName local_108;
  FName local_100;
  FStatMessage local_f8;
  FStatMessage local_e8;
  TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator> *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  undefined4 uStack_8c;
  FName local_80;
  FName local_78 [4];
  undefined4 local_54;
  
  bVar9 = IsInRenderingThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                         ,0x1f6,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar28 = (FIdentityFunctor)(-1 < CpuChannel->Enabled);
  if ((bool)FVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId504,"FCoarseMeshStreamingManager::UpdateRenderThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
               ,0x1f8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId504);
  }
  local_110 = (LPCRITICAL_SECTION)&this->UpdateCS;
  if (local_110 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_110);
  this->TickCount = this->TickCount + 1;
  iVar22 = 0;
  uVar21 = *(int *)&(this->UsedStreamableHandles).Elements.field_0x8 -
           *(int *)&(this->UsedStreamableHandles).Elements.field_0x34;
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138 = 0;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  iVar23 = 0;
  if (0 < (int)uVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar21,&local_140,0,(int *)((longlong)&local_138 + 4));
  }
  this_00 = &this->UsedStreamableHandles;
  local_res20 = *(int *)&(this->UsedStreamableHandles).Elements.field_0x8 -
                *(int *)&(this->UsedStreamableHandles).Elements.field_0x34;
  TStack_d0.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->UsedStreamableHandles).Elements.field_0x10;
  local_130[0] = '\0';
  local_130[1] = '\0';
  local_130[2] = '\0';
  local_130[3] = '\0';
  local_130[4] = '\0';
  local_130[5] = '\0';
  local_130[6] = '\0';
  local_130[7] = '\0';
  local_120[0] = '\0';
  local_120[1] = '\0';
  local_120[2] = '\0';
  local_120[3] = '\0';
  local_120[4] = '\0';
  local_120[5] = '\0';
  local_120[6] = '\0';
  local_120[7] = '\0';
  iVar5 = *(int *)&(this->UsedStreamableHandles).Elements.field_0x28;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar5 != 0) {
    puVar24 = *(uint **)&(this->UsedStreamableHandles).Elements.field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)TStack_d0.Array;
    }
    uVar21 = *puVar24;
    iVar23 = 0;
    iVar22 = 0;
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar22;
      iVar23 = iVar23 + 0x20;
      iVar22 = iVar22 + 1;
      iStack_94 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14842b650;
      uVar21 = puVar24[lVar15 + 1];
    }
    uStack_a4 = -uVar21 & uVar21;
    uVar4 = (ulonglong)uStack_a4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_118 = (int)lVar15;
    iStack_94 = iVar23 + -1 + local_118;
    if (iVar5 < iStack_94) {
      iStack_94 = iVar5;
    }
  }
LAB_14842b650:
  uStack_98 = 0xffffffff;
  uStack_8c = local_54;
  TStack_d0._padding_ = CONCAT44(uStack_a4,iVar22);
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  TStack_d0._28_4_ = local_54;
  TStack_d0.BaseBitIndex = iVar23;
  auVar19 = local_130;
  auVar18 = local_120;
  local_d8 = this_00;
  local_b0 = this_00;
  iStack_a8 = iVar22;
  local_a0 = (undefined1 *)TStack_d0.Array;
  local_90 = iVar23;
  TStack_d0.CurrentBitIndex = iStack_94;
  if (iStack_94 < iVar5) {
    auVar18[0] = '\0';
    auVar18[1] = '\0';
    auVar18[2] = '\0';
    auVar18[3] = '\0';
    auVar18[4] = '\0';
    auVar18[5] = '\0';
    auVar18[6] = '\0';
    auVar18[7] = '\0';
    auVar19 = auVar18;
    do {
      local_148[0] = *(short *)(*(longlong *)&local_d8->Elements +
                               (longlong)TStack_d0.CurrentBitIndex * 0xc);
      uVar21 = (uint)local_148[0];
      if ((-1 < local_148[0]) && ((int)uVar21 < *(int *)&(this->RegisteredRenderAssets).field_0x28))
      {
        if ((*(int *)&(this->RegisteredRenderAssets).field_0x28 <= (int)uVar21) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        puVar6 = *(undefined1 **)&(this->RegisteredRenderAssets).field_0x20;
        puVar25 = &(this->RegisteredRenderAssets).field_0x10;
        if (puVar6 != (undefined1 *)0x0) {
          puVar25 = puVar6;
        }
        uVar17 = uVar21 & 0x1f;
        if ((int)uVar21 < 0) {
          uVar21 = uVar21 + 0x1f;
        }
        if ((*(uint *)(puVar25 + (longlong)((int)uVar21 >> 5) * 4) >> uVar17 & 1) != 0) {
          lVar15 = *(longlong *)&this->RegisteredRenderAssets + (longlong)local_148[0] * 0x28;
          if ((*(short *)(*(longlong *)&this->RegisteredRenderAssets + (longlong)local_148[0] * 0x28
                         ) != local_148[0]) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("RenderAsset.Handle == Handle",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                                 ,0x210,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(ulong64 *)(lVar15 + 0x18) = this->TickCount;
          auVar18 = (uchar  [8])((longlong)auVar18 + (ulonglong)*(uint *)(lVar15 + 0x10));
          if (*(int *)(lVar15 + 0x20) == 0) {
            auVar19 = (uchar  [8])((longlong)auVar19 + (ulonglong)*(uint *)(lVar15 + 0x10));
            if (((local_140.Data <= (FScriptContainerElement *)local_148) &&
                ((FScriptContainerElement *)local_148 <
                 local_140.Data + (longlong)local_138._4_4_ * 2)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar22 = (int)local_138;
            if ((int)local_138 == local_138._4_4_) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x202,&local_140,(int *)((longlong)&local_138 + 4));
            }
            local_138 = CONCAT44(local_138._4_4_,iVar22 + 1);
            *(short *)(local_140.Data + (longlong)iVar22 * 2) = local_148[0];
          }
        }
      }
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
    } while (TStack_d0.CurrentBitIndex < (TStack_d0.Array)->NumBits);
  }
  local_120 = auVar18;
  local_130 = auVar19;
  iVar22 = 1;
  uVar21 = *(int *)&(this->UsedStreamableHandles).Elements.field_0x8 -
           *(int *)&(this->UsedStreamableHandles).Elements.field_0x34;
  if (3 < uVar21) {
    uVar4 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_114 = (undefined4)lVar15;
    iVar22 = 1 << ((byte)lVar15 & 0x1f);
  }
  if ((((int)uVar21 < 1) || (iVar22 <= (this->UsedStreamableHandles).HashSize)) &&
     ((this->UsedStreamableHandles).HashSize <= iVar22)) {
    TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    TSparseArray<TSparseSetElement<short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_00->Elements,uVar21);
  }
  else {
    TSparseArray<TSparseSetElement<short>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_00->Elements,uVar21);
    (this->UsedStreamableHandles).HashSize = iVar22;
    TSet<short,DefaultKeyFuncs<short,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  p_Var20 = (LPCRITICAL_SECTION)&this->UpdateCS;
  if (GNaniteCoarseMeshStreamingMode == 1) {
    ForceStreamIn(this);
  }
  else if (GNaniteCoarseMeshStreamingMode == 2) {
    ForceStreamOut(this);
  }
  else {
    local_128 = (ulonglong)(GNaniteCoarseMeshStreamingMemoryPoolSizeInMB << 0x14);
    if (local_128 < (longlong)local_130 + this->TotalRequestedRenderAssetSize) {
      bVar9 = -1 < CpuChannel->Enabled;
      if (bVar9) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId561,"CheckStreamOut",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                   ,0x231);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId561);
      }
      AlgoImpl::
      IntroSortInternal<short,int,FIdentityFunctor,_Nanite::FCoarseMeshStreamingManager::UpdateResourceStates_::__l36::<lambda_1>_>
                ((short *)(this->ActiveHandles).AllocatorInstance.Data,
                 (this->ActiveHandles).ArrayNum,FVar28,(<lambda_1>)this);
      uVar4 = local_128;
      auVar18 = local_130;
      pFVar26 = (this->ActiveHandles).AllocatorInstance.Data;
      iVar22 = (this->ActiveHandles).ArrayNum;
      pFVar3 = pFVar26 + (longlong)iVar22 * 2;
      while( true ) {
        if ((this->ActiveHandles).ArrayNum != iVar22) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<short,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if ((pFVar26 == pFVar3) ||
           (lVar15 = *(longlong *)&this->RegisteredRenderAssets + (longlong)*(short *)pFVar26 * 0x28
           , *(ulong64 *)(lVar15 + 0x18) == this->TickCount)) break;
        if (*(int *)(lVar15 + 0x20) == 3) {
          *(undefined4 *)(lVar15 + 0x20) = 4;
          this->TotalRequestedRenderAssetSize =
               this->TotalRequestedRenderAssetSize - (ulonglong)*(uint *)(lVar15 + 0x10);
          if (this->TotalRequestedRenderAssetSize + (longlong)auVar18 <= uVar4) break;
        }
        pFVar26 = pFVar26 + 2;
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if (local_128 < (longlong)local_130 + this->TotalRequestedRenderAssetSize) {
      AlgoImpl::
      IntroSortInternal<short,int,FIdentityFunctor,_Nanite::FCoarseMeshStreamingManager::UpdateResourceStates_::__l52::<lambda_2>_>
                ((short *)local_140.Data,(int)local_138,FVar28,(<lambda_2>)this);
    }
    uVar4 = local_128;
    iVar22 = (int)local_138;
    uVar16 = (ulonglong)(int)local_138;
    pFVar3 = local_140.Data + uVar16 * 2;
    FVar27.Data = local_140.Data;
    while( true ) {
      if ((int)uVar16 != iVar22) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<short,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      p_Var20 = local_110;
      if ((FVar27.Data == pFVar3) ||
         (lVar15 = *(longlong *)&this->RegisteredRenderAssets +
                   (longlong)*(short *)FVar27.Data * 0x28,
         uVar4 < (ulonglong)
                 *(uint *)(*(longlong *)&this->RegisteredRenderAssets + 0x10 +
                          (longlong)*(short *)FVar27.Data * 0x28) +
                 this->TotalRequestedRenderAssetSize)) break;
      if ((*(int *)(lVar15 + 0x20) != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StreamInRenderAsset.ResourceState == EResourceState::Unloaded",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                             ,0x26e,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar2 = &this->ActiveHandles;
      *(undefined4 *)(lVar15 + 0x20) = 1;
      pFVar26 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar26 <= FVar27.Data) &&
          (FVar27.Data < pFVar26 + (longlong)(this->ActiveHandles).ArrayMax * 2)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar23 = (this->ActiveHandles).ArrayNum;
      piVar1 = &(this->ActiveHandles).ArrayMax;
      if (iVar23 == *piVar1) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ActiveHandles).ArrayNum = iVar23 + 1;
      *(short *)((pTVar2->AllocatorInstance).Data + (longlong)iVar23 * 2) = *(short *)FVar27.Data;
      this->TotalRequestedRenderAssetSize =
           this->TotalRequestedRenderAssetSize + (ulonglong)*(uint *)(lVar15 + 0x10);
      uVar16 = local_138 & 0xffffffff;
      FVar27.Data = FVar27.Data + 2;
    }
  }
  FVar11 = StatPtr_STAT_NaniteCoarseMeshStreamingMeshesRequested;
  if (StatPtr_STAT_NaniteCoarseMeshStreamingMeshesRequested ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshStreamingMeshesRequested>)0x0) {
    pFVar10 = ::FName::FName(&local_80,"STAT_NaniteCoarseMeshStreamingMeshesRequested");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshStreamingMeshesRequested>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NaniteCoarseMeshStreamingMeshesRequested,*pFVar10,
                        L"Streaming Meshes Requested","STATGROUP_NaniteCoarseMeshStreaming",
                        "STATCAT_Advanced",L"Nanite Coarse Mesh Streaming",true,false,ST_int64,false
                        ,false,MCR_Invalid);
  }
  FVar7 = *(FName *)FVar11;
  auVar19[4] = '\0';
  auVar19[5] = '\0';
  auVar19[6] = '\0';
  auVar19[7] = '\0';
  auVar19[0] = (undefined1)local_res20;
  auVar19[1] = local_res20._1_1_;
  auVar19[2] = local_res20._2_1_;
  auVar19[3] = local_res20._3_1_;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    local_f8.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
    local_108 = FVar7;
    local_f8.StatData.Pad = auVar19;
    local_f8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar12,&local_f8);
    FStatsTrace::Set(&local_108,(long64)auVar19);
    if (pFVar12->ScopeCount == 0) {
      FThreadStats::Flush(pFVar12,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar12,false,false);
    }
  }
  FVar14 = StatPtr_STAT_NaniteCoarseMeshStreamingMeshMemoryRequested;
  if (StatPtr_STAT_NaniteCoarseMeshStreamingMeshMemoryRequested ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshStreamingMeshMemoryRequested>)0x0) {
    pFVar10 = ::FName::FName(local_78,"STAT_NaniteCoarseMeshStreamingMeshMemoryRequested");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshStreamingMeshMemoryRequested>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NaniteCoarseMeshStreamingMeshMemoryRequested,*pFVar10,
                        L"Streaming Memory Requested","STATGROUP_NaniteCoarseMeshStreaming",
                        "STATCAT_Advanced",L"Nanite Coarse Mesh Streaming",true,false,ST_int64,false
                        ,false,MCR_Physical);
  }
  FVar7 = *(FName *)FVar14;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    auVar18 = local_120;
    local_e8.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
    local_e8.StatData.Pad[0] = local_120[0];
    local_e8.StatData.Pad[1] = local_120[1];
    local_e8.StatData.Pad[2] = local_120[2];
    local_e8.StatData.Pad[3] = local_120[3];
    local_e8.StatData.Pad[4] = local_120[4];
    local_e8.StatData.Pad[5] = local_120[5];
    local_e8.StatData.Pad[6] = local_120[6];
    local_e8.StatData.Pad[7] = local_120[7];
    local_100 = FVar7;
    local_e8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar12,&local_e8);
    FStatsTrace::Set(&local_100,(long64)auVar18);
    if (pFVar12->ScopeCount == 0) {
      FThreadStats::Flush(pFVar12,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar12,false,false);
    }
  }
  if (local_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data);
  }
  LeaveCriticalSection(p_Var20);
  if ((bool)FVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateResourceStreaming @ 14842be70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Nanite::FCoarseMeshStreamingManager::UpdateResourceStreaming
          (FCoarseMeshStreamingManager *this,float param_1,bool param_2)

{
  longlong *plVar1;
  int *piVar2;
  UStreamableRenderAsset *this_00;
  FName FVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  ulonglong *puVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshStreamingMeshesLoaded> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshStreamingMeshMemoryUsed> FVar14;
  uint uVar15;
  ulonglong uVar16;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  TMap<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
  *pTVar21;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_01;
  LPCRITICAL_SECTION lpCriticalSection;
  ForElementType<unsigned_int> FVar22;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar23;
  TArray<short,TSizedDefaultAllocator<32>_> *pTVar24;
  uchar auVar25 [8];
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  ForElementType<unsigned_int> FVar29;
  FScriptContainerElement *pFVar30;
  bool bVar31;
  undefined1 local_1e8 [4];
  uint local_1e4;
  uint local_1e0;
  ForElementType<unsigned_int> local_1d8;
  int *local_1d0;
  LPCRITICAL_SECTION local_1c8;
  longlong *local_1b8;
  undefined1 auStack_1b0 [16];
  uint uStack_1a0;
  uint uStack_19c;
  longlong local_198;
  TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *pTStack_190;
  TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *local_188;
  undefined2 local_180;
  int local_178;
  int local_174;
  undefined4 local_170;
  FScriptContainerElement *local_160;
  UStreamableRenderAsset *local_158;
  UStreamableRenderAsset *local_150;
  TMap<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>_>
  *local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FString local_128;
  FStatMessage local_118;
  FStatMessage local_108;
  longlong *local_f8;
  uint uStack_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FName local_98;
  FName local_90;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *pTStack_60;
  undefined4 local_3c;
  
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId388,"FCoarseMeshStreamingManager::UpdateResourceStreaming",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
               ,0x184);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId388);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&this->UpdateCS;
  local_1c8 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  pTVar21 = &this->RequestReleaseComponentsMap;
  TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)pTVar21);
  local_180 = 0;
  stack0xfffffffffffffe58 = local_88._16_16_;
  local_1b8 = (longlong *)local_88._0_8_;
  auStack_1b0._0_8_ = local_88._8_8_;
  local_198 = local_68;
  pTStack_190 = pTStack_60;
  uVar16 = local_88._24_8_ >> 0x20;
  local_188 = (TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
               *)pTVar21;
  if ((int)local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    pTVar21 = &this->RegisteredComponentsMap;
    uVar19 = (ulonglong)local_88._28_4_;
    local_148 = pTVar21;
LAB_14842bf90:
    pTVar17 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)0x0;
    local_158 = *(UStreamableRenderAsset **)((longlong)(int)uVar16 * 0x60 + *local_1b8);
    uVar15 = ((uint)((ulonglong)local_158 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_158 >> 4)) *
             -0x7a143595;
    local_1e0 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    local_1e0 = local_1e0 >> 0x10 ^ local_1e0;
    if (*(int *)&(this->RegisteredComponentsMap).field_0x8 != *(int *)(&pTVar21->field_0x0 + 0x34))
    {
      puVar20 = &pTVar21->field_0x38;
      if (*(undefined1 **)(&pTVar21->field_0x38 + 8) != (undefined1 *)0x0) {
        puVar20 = *(undefined1 **)(&pTVar21->field_0x38 + 8);
      }
      iVar8 = *(int *)(puVar20 + (ulonglong)(*(int *)&pTVar21->field_0x48 - 1U & local_1e0) * 4);
      if (iVar8 != -1) {
        do {
          puVar9 = (ulonglong *)((longlong)iVar8 * 0x60 + *(longlong *)&pTVar21->field_0x0);
          if ((UStreamableRenderAsset *)*puVar9 == local_158) {
            this_01 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)(puVar9 + 1);
            if (puVar9 == (ulonglong *)0x0) {
              this_01 = pTVar17;
            }
            if (this_01 !=
                (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)0x0) {
              uStack_ec = 1;
              uStack_f0 = 0;
              lVar27 = (longlong)(int)uVar19 * 0x60 + *local_1b8;
              uVar15 = *(uint *)(lVar27 + 0x30);
              local_1d8 = (ForElementType<unsigned_int>)(lVar27 + 0x18);
              plVar1 = (longlong *)(lVar27 + 8);
              uStack_dc = uStack_f0;
              local_d8 = uStack_f0;
              if (uVar15 == 0) goto LAB_14842c0f2;
              FVar22 = local_1d8;
              if (*(ForElementType<unsigned_int> *)(lVar27 + 0x28) !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar22 = *(ForElementType<unsigned_int> *)(lVar27 + 0x28);
              }
              uVar26 = *(uint *)FVar22;
              pTVar23 = pTVar17;
              if (uVar26 != 0) goto LAB_14842c0c8;
              goto LAB_14842c0b0;
            }
            break;
          }
          iVar8 = (int)puVar9[0xb];
        } while (iVar8 != -1);
      }
    }
    goto LAB_14842c4bb;
  }
LAB_14842c54e:
  pTVar21 = &this->RequestReleaseComponentsMap;
  uVar16 = 0;
  bVar6 = 1 < *(int *)&(this->RequestReleaseComponentsMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)pTVar21);
  }
  TSparseArray<TSparseSetElement<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)pTVar21,0,*(int *)&(this->RequestReleaseComponentsMap).field_0x8);
  *(undefined4 *)&(this->RequestReleaseComponentsMap).field_0x8 = 0;
  if (*(int *)&(this->RequestReleaseComponentsMap).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)pTVar21,0,
               (int *)&(this->RequestReleaseComponentsMap).field_0xc);
  }
  *(undefined4 *)&(this->RequestReleaseComponentsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RequestReleaseComponentsMap).field_0x34 = 0;
  iVar8 = *(int *)&(this->RequestReleaseComponentsMap).field_0x2c;
  *(undefined4 *)&(this->RequestReleaseComponentsMap).field_0x28 = 0;
  if ((iVar8 < 0) || (0x80 < iVar8)) {
    *(undefined4 *)&(this->RequestReleaseComponentsMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->RequestReleaseComponentsMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->RequestReleaseComponentsMap).field_0x48 = 1;
    TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)pTVar21);
  }
  if (0 < (this->ActiveHandles).ArrayNum) {
    pTVar24 = &this->ActiveHandles;
    uVar19 = uVar16;
    do {
      uVar28 = (uint)uVar19;
      local_1e0 = ~uVar28;
      uVar26 = local_1e0 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar28 < (this->ActiveHandles).ArrayNum) {
        uVar15 = uVar26;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar18 = (longlong)*(short *)((pTVar24->AllocatorInstance).Data + uVar16);
      lVar27 = *(longlong *)&this->RegisteredRenderAssets;
      iVar8 = *(int *)(lVar27 + 0x20 + lVar18 * 0x28);
      this_00 = *(UStreamableRenderAsset **)(lVar27 + 8 + lVar18 * 0x28);
      lVar27 = lVar27 + lVar18 * 0x28;
      if (iVar8 == 0) {
        local_140 = (FName)this_00->_padding_;
        ::FName::ToString(&local_140,&local_128);
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                           ,0x1a9,
                           L"Active handles list should not contain unloaded resources (Resource: %s)"
                          );
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else if (iVar8 == 1) {
        cVar7 = (**(code **)(this_00->_padding_ + 0x2d8))(this_00);
        if (cVar7 != '\0') {
          UStreamableRenderAsset::TickStreaming
                    (*(UStreamableRenderAsset **)(lVar27 + 8),false,
                     (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0);
          *(undefined4 *)(lVar27 + 0x20) = 2;
        }
      }
      else if (iVar8 == 2) {
        UStreamableRenderAsset::TickStreaming
                  (this_00,false,(TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0
                  );
        if ((this_00->CachedSRRState).field0_0x0._s_0.NumResidentLODs ==
            (this_00->CachedSRRState).field0_0x0._s_0.NumRequestedLODs) {
          *(undefined4 *)(lVar27 + 0x20) = 3;
          this->TotalLoadedRenderAssetSize =
               this->TotalLoadedRenderAssetSize + (ulonglong)*(uint *)(lVar27 + 0x10);
        }
      }
      else if (iVar8 == 4) {
        cVar7 = (**(code **)(this_00->_padding_ + 0x2d0))(this_00);
        if ((cVar7 == '\0') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("RenderAsset.RenderAsset->StreamOut(StreamingResourceState.NumNonStreamingLODs)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                               ,0x1cb,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UStreamableRenderAsset::TickStreaming
                  (*(UStreamableRenderAsset **)(lVar27 + 8),false,
                   (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0);
        *(undefined4 *)(lVar27 + 0x20) = 5;
      }
      else if ((iVar8 == 5) &&
              (UStreamableRenderAsset::TickStreaming
                         (this_00,false,
                          (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0),
              (this_00->CachedSRRState).field0_0x0._s_0.NumResidentLODs ==
              (this_00->CachedSRRState).field0_0x0._s_0.NumRequestedLODs)) {
        *(undefined4 *)(lVar27 + 0x20) = 0;
        uVar15 = 0;
        if ((int)uVar28 < (this->ActiveHandles).ArrayNum) {
          uVar15 = uVar26;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar30 = (pTVar24->AllocatorInstance).Data + (longlong)(int)uVar28 * 2;
        iVar8 = local_1e0 + (this->ActiveHandles).ArrayNum;
        if (iVar8 != 0) {
          memmove(pFVar30,pFVar30 + 2,(longlong)iVar8 * 2);
        }
        piVar2 = &(this->ActiveHandles).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,&pTVar24->AllocatorInstance,(this->ActiveHandles).ArrayNum,
                   &(this->ActiveHandles).ArrayMax);
        uVar28 = uVar28 - 1;
        uVar16 = uVar16 - 2;
        this->TotalLoadedRenderAssetSize =
             this->TotalLoadedRenderAssetSize - (ulonglong)*(uint *)(lVar27 + 0x10);
      }
      uVar19 = (ulonglong)(uVar28 + 1);
      uVar16 = uVar16 + 2;
      lpCriticalSection = local_1c8;
    } while ((int)(uVar28 + 1) < (this->ActiveHandles).ArrayNum);
  }
  FVar11 = StatPtr_STAT_NaniteCoarseMeshStreamingMeshesLoaded;
  if (StatPtr_STAT_NaniteCoarseMeshStreamingMeshesLoaded ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshStreamingMeshesLoaded>)0x0) {
    pFVar10 = ::FName::FName(&local_98,"STAT_NaniteCoarseMeshStreamingMeshesLoaded");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshStreamingMeshesLoaded>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NaniteCoarseMeshStreamingMeshesLoaded,*pFVar10,
                        L"Streaming Meshes Loaded","STATGROUP_NaniteCoarseMeshStreaming",
                        "STATCAT_Advanced",L"Nanite Coarse Mesh Streaming",true,false,ST_int64,false
                        ,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar11;
  auVar25 = (uchar  [8])(longlong)(this->ActiveHandles).ArrayNum;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    local_118.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_138 = FVar3;
    local_118.StatData.Pad = auVar25;
    local_118.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar12,&local_118);
    FStatsTrace::Set(&local_138,(long64)auVar25);
    if (pFVar12->ScopeCount == 0) {
      FThreadStats::Flush(pFVar12,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar12,false,false);
    }
  }
  FVar14 = StatPtr_STAT_NaniteCoarseMeshStreamingMeshMemoryUsed;
  if (StatPtr_STAT_NaniteCoarseMeshStreamingMeshMemoryUsed ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshStreamingMeshMemoryUsed>)0x0) {
    pFVar10 = ::FName::FName(&local_90,"STAT_NaniteCoarseMeshStreamingMeshMemoryUsed");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_NaniteCoarseMeshStreamingMeshMemoryUsed>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NaniteCoarseMeshStreamingMeshMemoryUsed,*pFVar10,
                        L"Streaming Memory Used","STATGROUP_NaniteCoarseMeshStreaming",
                        "STATCAT_Advanced",L"Nanite Coarse Mesh Streaming",true,false,ST_int64,false
                        ,false,MCR_Physical);
  }
  FVar3 = *(FName *)FVar14;
  auVar25 = (uchar  [8])this->TotalLoadedRenderAssetSize;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    local_108.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_130 = FVar3;
    local_108.StatData.Pad = auVar25;
    local_108.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar12,&local_108);
    FStatsTrace::Set(&local_130,(long64)auVar25);
    if (pFVar12->ScopeCount == 0) {
      FThreadStats::Flush(pFVar12,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar12,false,false);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
  while (uVar26 = ((uint *)((longlong)FVar22 + 4))[iVar8], uVar26 == 0) {
LAB_14842c0b0:
    iVar8 = (int)pTVar17;
    local_d8 = (int)pTVar23 + 0x20;
    pTVar23 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(ulonglong)local_d8;
    uStack_f0 = iVar8 + 1;
    pTVar17 = (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(ulonglong)uStack_f0;
    uStack_dc = uVar15;
    if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_f0)
    goto LAB_14842c0f2;
  }
LAB_14842c0c8:
  local_d8 = (uint)pTVar23;
  uStack_f0 = (uint)pTVar17;
  uStack_ec = -uVar26 & uVar26;
  uVar16 = (ulonglong)uStack_ec * 2 + 1;
  lVar18 = 0x3f;
  if (uVar16 != 0) {
    for (; uVar16 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  local_178 = (int)lVar18;
  uStack_dc = local_178 + -1 + local_d8;
  if ((int)uVar15 < (int)uStack_dc) {
    uStack_dc = uVar15;
  }
LAB_14842c0f2:
  local_e8 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar27 + 0x18);
  uVar26 = *(uint *)(lVar27 + 0x30);
  uStack_d4 = local_3c;
  iStack_d0 = *(int *)(lVar27 + 0x10) - *(int *)(lVar27 + 0x3c);
  uVar28 = uVar26 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uStack_ec,uStack_f0);
  uStack_e0 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_dc;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar8 = (int)uVar26 >> 5;
  TStack_c0._28_4_ = local_3c;
  TStack_c0.BaseBitIndex = local_d8;
  uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
  local_1e4 = uVar26;
  local_f8 = plVar1;
  local_c8 = plVar1;
  TStack_c0.Array = local_e8;
  if ((((int)uVar26 < 0) || ((int)uVar15 < (int)uVar26)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar15 = *(int *)((longlong)local_1d8 + 0x18);
  if (uVar26 != uVar15) {
    FVar22 = local_1d8;
    if (*(ForElementType<unsigned_int> *)((longlong)local_1d8 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar22 = *(ForElementType<unsigned_int> *)((longlong)local_1d8 + 0x10);
    }
    uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)((longlong)FVar22 + (longlong)iVar8 * 4);
    while (uVar26 == 0) {
      lVar27 = (longlong)iVar8;
      uVar28 = uVar28 + 0x20;
      iVar8 = iVar8 + 1;
      uVar26 = uVar15;
      local_1e4 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_14842c217;
      uVar26 = ((uint *)((longlong)FVar22 + 4))[lVar27];
    }
    uVar16 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_174 = (int)lVar27;
    uVar26 = local_174 + -1 + uVar28;
    local_1e4 = uVar26;
    if ((int)uVar15 < (int)uVar26) {
      uVar26 = uVar15;
      local_1e4 = uVar15;
    }
  }
LAB_14842c217:
  local_1d0 = &(this_01->Data).ArrayNum;
  while( true ) {
    plVar5 = local_c8;
    if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      local_1e8[0] = 0;
      `TSparseArray<TSparseSetElement<UPrimitiveComponent_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e8);
    }
    if (((TStack_c0.CurrentBitIndex == uVar26) &&
        ((ForElementType<unsigned_int>)TStack_c0.Array == local_1d8)) && (plVar5 == plVar1)) break;
    uVar16 = *(ulonglong *)(*plVar5 + (longlong)TStack_c0.CurrentBitIndex * 0x10);
    if (*local_1d0 == this_01->NumFreeIndices) {
LAB_14842c414:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegisteredComponents->Remove(Component) == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteCoarseMeshStreamingManager.cpp"
                         ,0x192,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      bVar6 = false;
      uVar15 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
      uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
      pTVar17 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  **)&this_01[1].Data.ArrayNum;
      if (pTVar17 ==
          (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)0x0) {
        pTVar17 = this_01 + 1;
      }
      uVar15 = *(uint *)((pTVar17->AllocationFlags).AllocatorInstance.InlineData +
                        ((longlong)*(int *)this_01[1].AllocationFlags.AllocatorInstance.InlineData -
                         1U & (longlong)(int)(uVar15 >> 0x10 ^ uVar15)) * 4 + -0x10);
      if (uVar15 != 0xffffffff) {
        pFVar30 = (this_01->Data).AllocatorInstance.Data;
LAB_14842c2e0:
        lVar27 = (longlong)(int)uVar15 * 0x10;
        if (*(ulonglong *)(pFVar30 + lVar27) != uVar16) goto code_r0x00014842c2f1;
        if (((int)uVar15 < 0) || ((this_01->AllocationFlags).NumBits <= (int)uVar15)) {
LAB_14842c35d:
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          if (((this_01->AllocationFlags).NumBits <= (int)uVar15) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar22 = (this_01->AllocationFlags).AllocatorInstance.SecondaryData;
          FVar29 = (ForElementType<unsigned_int>)&this_01->AllocationFlags;
          if (FVar22 != (ForElementType<unsigned_int>)0x0) {
            FVar29 = FVar22;
          }
          uVar26 = uVar15;
          if ((int)uVar15 < 0) {
            uVar26 = uVar15 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar29 + (longlong)((int)uVar26 >> 5) * 4) >> (uVar15 & 0x1f) & 1
              ) == 0) goto LAB_14842c35d;
        }
        pTVar17 = *(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    **)&this_01[1].Data.ArrayNum;
        local_160 = (this_01->Data).AllocatorInstance.Data + lVar27;
        pTVar23 = this_01 + 1;
        if (pTVar17 !=
            (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)0x0) {
          pTVar23 = pTVar17;
        }
        pFVar30 = (FScriptContainerElement *)
                  ((pTVar23->AllocationFlags).AllocatorInstance.InlineData +
                  (longlong)*(int *)(local_160 + 0xc) * 4 + -0x10);
        while( true ) {
          uVar26 = *(uint *)pFVar30;
          if ((uVar26 == 0xffffffff) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash"), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar26 == uVar15) break;
          pFVar30 = (this_01->Data).AllocatorInstance.Data + (longlong)(int)uVar26 * 0x10 + 8;
        }
        *(uint *)pFVar30 = *(uint *)(local_160 + 8);
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized(this_01,uVar15,1);
        bVar6 = true;
      }
LAB_14842c40e:
      if (!bVar6) goto LAB_14842c414;
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    uVar26 = local_1e4;
  }
  pTVar21 = local_148;
  if (*local_1d0 == this_01->NumFreeIndices) {
    pTVar21 = &this->RegisteredComponentsMap;
    local_150 = local_158;
    if (*(int *)&(this->RegisteredComponentsMap).field_0x8 !=
        *(int *)&(this->RegisteredComponentsMap).field_0x34) {
      TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::RemoveImpl<UStreamableRenderAsset_const_*>
                ((TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                  *)pTVar21,local_1e0,&local_150);
    }
  }
LAB_14842c4bb:
  uStack_1a0 = uStack_1a0 & ~auStack_1b0._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1b0);
  lpCriticalSection = local_1c8;
  uVar16 = (ulonglong)uStack_19c;
  uVar19 = uVar16;
  if (*(int *)(auStack_1b0._8_8_ + 0x18) <= (int)uStack_19c) goto code_r0x00014842c4de;
  goto LAB_14842bf90;
code_r0x00014842c2f1:
  uVar15 = *(uint *)(pFVar30 + lVar27 + 8);
  if (uVar15 == 0xffffffff) goto LAB_14842c40e;
  goto LAB_14842c2e0;
code_r0x00014842c4de:
  if (((char)local_180 != '\0') && (local_180._1_1_ != '\0')) {
    uVar15 = *(int *)&(local_188->Elements).field_0x8 - *(int *)&(local_188->Elements).field_0x34;
    if (uVar15 < 4) {
      iVar8 = 1;
    }
    else {
      uVar16 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
      lVar27 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      local_170 = (undefined4)lVar27;
      iVar8 = 1 << ((byte)lVar27 & 0x1f);
    }
    if (((0 < (int)uVar15) && (local_188->HashSize < iVar8)) || (iVar8 < local_188->HashSize)) {
      local_188->HashSize = iVar8;
      TSet<TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::Rehash(local_188);
    }
  }
  goto LAB_14842c54e;
}

