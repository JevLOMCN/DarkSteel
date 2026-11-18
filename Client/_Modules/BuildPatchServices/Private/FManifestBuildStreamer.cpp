// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 6

// FManifestBuildStreamer @ 1432813f0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FManifestBuildStreamer * __thiscall
BuildPatchServices::FManifestBuildStreamer::FManifestBuildStreamer
          (FManifestBuildStreamer *this,FManifestBuildStreamerConfig *param_1,
          FManifestBuildStreamerDependencies *param_2)

{
  FScriptContainerElement *pFVar1;
  TFactory<BuildPatchServices::IChunkReferenceTracker,TArray<FGuid,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  TFactory<BuildPatchServices::ICloudChunkSource,BuildPatchServices::IChunkReferenceTracker_*>
  *pTVar3;
  FStatsCollector *pFVar4;
  FBuildPatchAppManifest *pFVar5;
  
  (this->Config).CloudDirectory.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FManifestBuildStreamer_BuildPatchServices__6B_;
  (this->Config).CloudDirectory.Data.AllocatorInstance.Data =
       (param_1->CloudDirectory).Data.AllocatorInstance.Data;
  (param_1->CloudDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Config).CloudDirectory.Data.ArrayNum = (param_1->CloudDirectory).Data.ArrayNum;
  (this->Config).CloudDirectory.Data.ArrayMax = (param_1->CloudDirectory).Data.ArrayMax;
  (param_1->CloudDirectory).Data.ArrayNum = 0;
  (param_1->CloudDirectory).Data.ArrayMax = 0;
  FBlockStructure::FBlockStructure(&(this->Config).DesiredBytes,&param_1->DesiredBytes);
  pTVar2 = param_2->ChunkReferenceTrackerFactory;
  pTVar3 = param_2->CloudChunkSourceFactory;
  this->TopStackOffset = 0;
  pFVar4 = param_2->StatsCollector;
  pFVar5 = param_2->Manifest;
  (this->Dependencies).ChunkReferenceTrackerFactory = pTVar2;
  (this->Dependencies).CloudChunkSourceFactory = pTVar3;
  (this->Dependencies).StatsCollector = pFVar4;
  (this->Dependencies).Manifest = pFVar5;
  (this->ChunkReferenceTracker).Ptr = (IChunkReferenceTracker *)0x0;
  (this->CloudChunkSource).Ptr = (ICloudChunkSource *)0x0;
  (this->DataStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataStack).ArrayNum = 0;
  (this->DataStack).ArrayMax = 0;
  FBlockStructure::~FBlockStructure(&param_1->DesiredBytes);
  pFVar1 = (param_1->CloudDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// ~FManifestBuildStreamer @ 1432886c0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FManifestBuildStreamer::~FManifestBuildStreamer(FManifestBuildStreamer *this)

{
  FScriptContainerElement *pFVar1;
  ICloudChunkSource *pIVar2;
  IChunkReferenceTracker *pIVar3;
  
  this->_padding_ = (longlong)&___7FManifestBuildStreamer_BuildPatchServices__6B_;
  pFVar1 = (this->DataStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->CloudChunkSource).Ptr;
  if (pIVar2 != (ICloudChunkSource *)0x0) {
    (*(code *)**(undefined8 **)pIVar2)(pIVar2,1);
  }
  pIVar3 = (this->ChunkReferenceTracker).Ptr;
  if (pIVar3 != (IChunkReferenceTracker *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  FBlockStructure::~FBlockStructure(&(this->Config).DesiredBytes);
  pFVar1 = (this->Config).CloudDirectory.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IBuildStreamer_BuildPatchServices__6B_;
  return;
}

// DequeueData @ 1432cbc40

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
BuildPatchServices::FManifestBuildStreamer::DequeueData
          (FManifestBuildStreamer *this,uchar *param_1,uint param_2,bool param_3)

{
  longlong lVar1;
  int *piVar2;
  FGuid *this_00;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ICloudChunkSource *pIVar5;
  IChunkReferenceTracker *pIVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong local_res8;
  uchar *local_res10;
  FString local_48;
  
  uVar15 = 0;
  local_res10 = param_1;
  if ((this->DataStack).ArrayNum < 1) {
    return 0;
  }
  while( true ) {
    uVar11 = (uint)uVar15;
    if (param_2 <= uVar11) {
      return uVar11;
    }
    iVar3 = (this->DataStack).ArrayNum;
    uVar14 = iVar3 - 1;
    uVar10 = 0;
    if ((int)uVar14 < iVar3) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    pFVar4 = (this->DataStack).AllocatorInstance.Data;
    lVar1 = (longlong)(this->DataStack).ArrayNum * 3 + -3;
    iVar3 = *(int *)(pFVar4 + lVar1 * 8 + 0x10);
    this_00 = (FGuid *)(pFVar4 + lVar1 * 8);
    uVar12 = *(int *)(pFVar4 + lVar1 * 8 + 0x14) - this->TopStackOffset;
    uVar10 = this->TopStackOffset;
    pIVar5 = (this->CloudChunkSource).Ptr;
    uVar14 = param_2 - uVar11;
    if (uVar12 < param_2 - uVar11) {
      uVar14 = uVar12;
    }
    plVar13 = (longlong *)(**(code **)(*(longlong *)pIVar5 + 8))(pIVar5,this_00);
    if (plVar13 == (longlong *)0x0) {
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      FGuid::AppendString(this_00,&local_48,Digits);
      UE::Logging::Private::BasicFatalLog
                (&::LOG_Static,(FLogCategoryBase *)&LogManifestBuildStreamer);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    else {
      (**(code **)(*plVar13 + 8))(plVar13,&local_res8,0);
      memcpy(local_res10 + uVar15,(void *)((ulonglong)(iVar3 + uVar10) + local_res8),
             (ulonglong)uVar14);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      this->TopStackOffset = this->TopStackOffset + uVar14;
      uVar15 = (ulonglong)(uVar11 + uVar14);
      if (this_00[1].B <= this->TopStackOffset) {
        pIVar6 = (this->ChunkReferenceTracker).Ptr;
        cVar9 = (**(code **)((longlong)*pIVar6 + 0x30))(pIVar6,this_00);
        if (cVar9 == '\0') {
          UE::Logging::Private::BasicFatalLog
                    (&::LOG_Static,(FLogCategoryBase *)&LogManifestBuildStreamer);
        }
        this->TopStackOffset = 0;
        if (((this->DataStack).ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return uVar11;
        }
        iVar3 = (this->DataStack).ArrayNum;
        uVar11 = iVar3 - 1;
        pFVar4 = (this->DataStack).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x18;
        iVar3 = ~uVar11 + iVar3;
        if (iVar3 != 0) {
          memmove(pFVar4,pFVar4 + 0x18,(longlong)iVar3 * 0x18);
        }
        piVar2 = &(this->DataStack).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,&(this->DataStack).AllocatorInstance,(this->DataStack).ArrayNum,
                   &(this->DataStack).ArrayMax);
      }
    }
    if ((this->DataStack).ArrayNum == 0) {
      return (uint)uVar15;
    }
  }
  pcVar7 = (code *)swi(3);
  uVar11 = (*pcVar7)();
  return uVar11;
}

// GetBlockStructure @ 1432d3580

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FBlockStructure * __thiscall
BuildPatchServices::FManifestBuildStreamer::GetBlockStructure(FManifestBuildStreamer *this)

{
  return &(this->Config).DesiredBytes;
}

// Initialise @ 1432dad40

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall BuildPatchServices::FManifestBuildStreamer::Initialise(FManifestBuildStreamer *this)

{
  int *piVar1;
  undefined8 uVar2;
  FBuildPatchAppManifest *pFVar3;
  ulong64 uVar4;
  TFactory<BuildPatchServices::IChunkReferenceTracker,TArray<FGuid,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  IChunkReferenceTracker *pIVar6;
  TFactory<BuildPatchServices::ICloudChunkSource,BuildPatchServices::IChunkReferenceTracker_*>
  *pTVar7;
  ICloudChunkSource *pIVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  FString *pFVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  FBlockEntry *this_00;
  longlong lVar18;
  IChunkReferenceTracker *pIVar19;
  ICloudChunkSource *pIVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  FString *pFVar28;
  ulonglong uVar29;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  FScriptContainerElement *local_a8;
  FString *local_a0;
  ulonglong local_98;
  uint local_90;
  uint local_8c;
  FBlockEntry *local_88;
  FString *local_80;
  longlong local_78;
  FScriptContainerElement *local_70;
  FString *local_68;
  FScriptContainerElement *local_60;
  undefined4 local_58;
  int local_54;
  
  uVar27 = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  pFVar3 = (this->Dependencies).Manifest;
  local_b0 = 0;
  local_a0 = (FString *)0x0;
  local_98 = 0;
  (**(code **)(pFVar3->_padding_ + 0x1c8))(pFVar3,&local_a0);
  this_00 = FBlockStructure::GetHead(&(this->Config).DesiredBytes);
  uVar21 = (ulonglong)(int)(uint)local_98;
  local_68 = local_a0 + uVar21;
  local_8c = (uint)local_98;
  uVar23 = uVar21;
  pFVar28 = local_a0;
  local_88 = this_00;
  do {
    pFVar13 = local_68;
    local_80 = pFVar28;
    if ((int)uVar23 != (int)uVar21) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if ((pFVar28 == pFVar13) || (this_00 == (FBlockEntry *)0x0)) {
      iVar15 = (this->DataStack).ArrayNum;
      pFVar24 = (this->DataStack).AllocatorInstance.Data;
      pFVar25 = pFVar24 + (longlong)iVar15 * 0x18;
      while( true ) {
        if ((this->DataStack).ArrayNum != iVar15) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        local_54 = local_b0._4_4_;
        if (pFVar24 == pFVar25) break;
        if (((local_b8.Data <= pFVar24) &&
            (pFVar24 < local_b8.Data + (longlong)local_b0._4_4_ * 0x10)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar17 = (int)local_b0;
        if ((int)local_b0 == local_b0._4_4_) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&local_b8,(int *)((longlong)&local_b0 + 4));
        }
        local_b0 = CONCAT44(local_b0._4_4_,iVar17 + 1);
        uVar2 = *(undefined8 *)pFVar24;
        uVar10 = *(undefined8 *)(pFVar24 + 8);
        pFVar24 = pFVar24 + 0x18;
        *(undefined8 *)(local_b8.Data + (longlong)iVar17 * 0x10) = uVar2;
        *(undefined8 *)(local_b8.Data + (longlong)iVar17 * 0x10 + 8) = uVar10;
      }
      iVar15 = (this->DataStack).ArrayNum;
      pFVar25 = (this->DataStack).AllocatorInstance.Data;
      iVar17 = iVar15 / 2;
      lVar18 = (longlong)iVar17;
      if (0 < iVar17) {
        pFVar24 = pFVar25 + (longlong)(iVar15 + -1) * 0x18;
        do {
          uVar2 = *(undefined8 *)(pFVar25 + 0x10);
          uVar10 = *(undefined8 *)(pFVar24 + 8);
          uVar11 = *(undefined8 *)pFVar25;
          uVar12 = *(undefined8 *)(pFVar25 + 8);
          *(undefined8 *)pFVar25 = *(undefined8 *)pFVar24;
          *(undefined8 *)(pFVar25 + 8) = uVar10;
          *(undefined8 *)(pFVar25 + 0x10) = *(undefined8 *)(pFVar24 + 0x10);
          *(undefined8 *)pFVar24 = uVar11;
          *(undefined8 *)(pFVar24 + 8) = uVar12;
          *(undefined8 *)(pFVar24 + 0x10) = uVar2;
          lVar18 = lVar18 + -1;
          pFVar24 = pFVar24 + -0x18;
          pFVar25 = pFVar25 + 0x18;
        } while (lVar18 != 0);
      }
      pTVar5 = (this->Dependencies).ChunkReferenceTrackerFactory;
      local_60 = local_b8.Data;
      local_58 = (int)local_b0;
      local_b0 = 0;
      local_b8.Data = (FScriptContainerElement *)0x0;
      pIVar19 = (IChunkReferenceTracker *)(**(code **)*pTVar5)(pTVar5,&local_60);
      pIVar6 = (this->ChunkReferenceTracker).Ptr;
      if ((pIVar6 != pIVar19) &&
         ((this->ChunkReferenceTracker).Ptr = pIVar19, pIVar6 != (IChunkReferenceTracker *)0x0)) {
        (**(code **)*pIVar6)(pIVar6,1);
      }
      pTVar7 = (this->Dependencies).CloudChunkSourceFactory;
      pIVar20 = (ICloudChunkSource *)(**(code **)*pTVar7)(pTVar7,(this->ChunkReferenceTracker).Ptr);
      pIVar8 = (this->CloudChunkSource).Ptr;
      if ((pIVar8 != pIVar20) &&
         ((this->CloudChunkSource).Ptr = pIVar20, pIVar8 != (ICloudChunkSource *)0x0)) {
        (*(code *)**(undefined8 **)pIVar8)(pIVar8,1);
      }
      DestructItems<FString,int>(local_a0,(uint)local_98);
      if (local_a0 != (FString *)0x0) {
        FMemory::Free(local_a0);
      }
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      return;
    }
    pFVar3 = (this->Dependencies).Manifest;
    lVar18 = (**(code **)(pFVar3->_padding_ + 0x1f8))(pFVar3,pFVar28);
    local_78 = lVar18;
    if (lVar18 == 0) {
      UE::Logging::Private::BasicFatalLog
                (&::LOG_Static,(FLogCategoryBase *)&LogManifestBuildStreamer);
    }
    local_90 = *(uint *)(lVar18 + 0x50);
    uVar23 = (ulonglong)(int)local_90;
    pFVar25 = *(FScriptContainerElement **)(lVar18 + 0x48);
    local_70 = pFVar25 + uVar23 * 0x18;
    while( true ) {
      pFVar24 = local_70;
      local_a8 = pFVar25;
      if (*(int *)(lVar18 + 0x50) != (int)uVar23) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<BuildPatchServices::FChunkPart_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar25 == pFVar24) break;
      uVar23 = (ulonglong)*(uint *)(pFVar25 + 0x14);
      if (((uVar23 != 0) && ((uVar27 - 1) + uVar23 < uVar27)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                              ,0x2f,L"Byte range has uint64 overflow."), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (this_00 == (FBlockEntry *)0x0) break;
      do {
        uVar4 = this_00->Size;
        uVar21 = this_00->Offset;
        if (((uVar4 != 0) && ((uVar21 - 1) + uVar4 < uVar21)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(BlockRange.GetSize() == 0) || (BlockRange.GetLast() >= BlockRange.GetFirst())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                ,0x2f,L"Byte range has uint64 overflow."), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((uVar23 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Size > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((uVar4 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Size > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar26 = (uVar21 - 1) + uVar4;
        if (uVar27 <= uVar26) {
          if ((uVar4 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Size > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                  ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar14))
          {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((uVar23 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Size > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                  ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar29 = (uVar27 - 1) + uVar23;
          if (uVar29 < uVar21) break;
          if ((((uVar4 == 0) || (uVar23 == 0)) || (uVar29 < uVar21)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("BlockEntryRange.Overlaps(ChunkPartRange)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ManifestBuildStreamer.cpp"
                                  ,0xa2,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar25 = (this->DataStack).AllocatorInstance.Data;
          if (((pFVar25 <= local_a8) &&
              (local_a8 < pFVar25 + (longlong)(this->DataStack).ArrayMax * 0x18)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar15 = (this->DataStack).ArrayNum;
          piVar1 = &(this->DataStack).ArrayMax;
          if (iVar15 == *piVar1) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x418,&(this->DataStack).AllocatorInstance,piVar1);
          }
          (this->DataStack).ArrayNum = iVar15 + 1;
          uVar2 = *(undefined8 *)(local_a8 + 8);
          pFVar24 = (this->DataStack).AllocatorInstance.Data;
          pFVar25 = pFVar24 + (longlong)iVar15 * 0x18;
          *(undefined8 *)pFVar25 = *(undefined8 *)local_a8;
          *(undefined8 *)(pFVar25 + 8) = uVar2;
          *(undefined8 *)(pFVar24 + (longlong)iVar15 * 0x18 + 0x10) =
               *(undefined8 *)(local_a8 + 0x10);
          iVar15 = (this->DataStack).ArrayNum;
          uVar22 = iVar15 - 1;
          uVar16 = 0;
          if ((int)uVar22 < iVar15) {
            uVar16 = ~uVar22 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar15 = (this->DataStack).ArrayNum;
          pFVar25 = (this->DataStack).AllocatorInstance.Data;
          if ((uVar4 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Size > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                  ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar14))
          {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((uVar23 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Size > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                  ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar14))
          {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (uVar27 < uVar21) {
            if ((uVar4 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Size > 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                    ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar14)
               ) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((uVar23 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Size > 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                    ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar14)
               ) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar17 = (int)uVar21 - (int)uVar27;
            *(int *)(pFVar25 + (longlong)iVar15 * 0x18 + -8) =
                 *(int *)(pFVar25 + (longlong)iVar15 * 0x18 + -8) + iVar17;
            *(int *)(pFVar25 + (longlong)iVar15 * 0x18 + -4) =
                 *(int *)(pFVar25 + (longlong)iVar15 * 0x18 + -4) - iVar17;
          }
          if ((uVar4 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Size > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                  ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((uVar23 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Size > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                  ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          this_00 = local_88;
          if (uVar29 <= uVar26) break;
          if ((uVar23 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Size > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                  ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((uVar4 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Size > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                  ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          *(int *)(pFVar25 + (longlong)iVar15 * 0x18 + -4) =
               *(int *)(pFVar25 + (longlong)iVar15 * 0x18 + -4) +
               ((int)uVar21 - (int)uVar29) + -1 + (int)uVar4;
          this_00 = local_88;
        }
        this_00 = FBlockEntry::GetNext(this_00);
        local_88 = this_00;
      } while (this_00 != (FBlockEntry *)0x0);
      uVar23 = (ulonglong)local_90;
      uVar27 = uVar27 + *(uint *)(local_a8 + 0x14);
      pFVar25 = local_a8 + 0x18;
      lVar18 = local_78;
    }
    uVar23 = local_98 & 0xffffffff;
    pFVar28 = local_80 + 1;
    uVar21 = (ulonglong)local_8c;
  } while( true );
}

// IsEndOfData @ 1432dbd00

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FManifestBuildStreamer::IsEndOfData(FManifestBuildStreamer *this)

{
  return (this->DataStack).ArrayNum == 0;
}

