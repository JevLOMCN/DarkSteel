// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FWorldPartitionReplaySample @ 148ab3fb0

FWorldPartitionReplaySample * __thiscall
FWorldPartitionReplaySample::FWorldPartitionReplaySample
          (FWorldPartitionReplaySample *this,FWorldPartitionReplaySample *param_1)

{
  int *piVar1;
  TArray<FWorldPartitionReplayStreamingSource,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FWorldPartitionReplayStreamingSource *pFVar4;
  
  piVar1 = &(this->StreamingSourceNameIndices).ArrayMax;
  (this->StreamingSourceNameIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->StreamingSourceNameIndices).ArrayNum;
  _Src = (param_1->StreamingSourceNameIndices).AllocatorInstance.Data;
  (this->StreamingSourceNameIndices).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->StreamingSourceNameIndices).AllocatorInstance.Data,_Src,(longlong)iVar3 << 2);
  }
  pTVar2 = &this->StreamingSources;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->StreamingSources).ArrayMax;
  iVar3 = (param_1->StreamingSources).ArrayNum;
  pFVar4 = (FWorldPartitionReplayStreamingSource *)
           (param_1->StreamingSources).AllocatorInstance.Data;
  (this->StreamingSources).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x160,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FWorldPartitionReplayStreamingSource,FWorldPartitionReplayStreamingSource,int>
              ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
  }
  this->Replay = param_1->Replay;
  this->TimeSeconds = param_1->TimeSeconds;
  return this;
}

// FWorldPartitionReplaySample @ 148ab40a0

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

FWorldPartitionReplaySample * __thiscall
FWorldPartitionReplaySample::FWorldPartitionReplaySample
          (FWorldPartitionReplaySample *this,AWorldPartitionReplay *param_1)

{
  int *piVar1;
  uint uVar2;
  FWorldPartitionStreamingSource *pFVar3;
  AWorldPartitionReplay *pAVar4;
  FName *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  UWorld *pUVar11;
  FWorldPartitionReplaySample *pFVar12;
  UWorldPartition *pUVar13;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *pTVar14;
  ulonglong uVar15;
  FName *pFVar16;
  ForAnyElementType FVar17;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar18;
  FWorldPartitionStreamingSource *pFVar19;
  undefined1 auStackY_238 [32];
  undefined1 local_1e8 [4];
  int local_1e4;
  int local_1e0 [2];
  ForAnyElementType local_1d8;
  uint local_1d0;
  int local_1cc;
  uint local_1c8;
  TVector<double>_u_0 local_1b8;
  FWorldPartitionStreamingSource local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  (this->StreamingSourceNameIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingSourceNameIndices).ArrayNum = 0;
  (this->StreamingSourceNameIndices).ArrayMax = 0;
  (this->StreamingSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingSources).ArrayNum = 0;
  (this->StreamingSources).ArrayMax = 0;
  this->Replay = param_1;
  this->TimeSeconds = 0.0;
  pUVar11 = AActor::GetWorld((AActor *)param_1);
  if (pUVar11 == (UWorld *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionReplay.cpp"
                       ,0x106,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FWorldPartitionReplaySample *)(*pcVar7)();
      return pFVar12;
    }
  }
  pUVar11 = AActor::GetWorld((AActor *)param_1);
  pUVar13 = UWorld::GetWorldPartition(pUVar11);
  if (pUVar13 == (UWorldPartition *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetWorld()->GetWorldPartition()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionReplay.cpp"
                       ,0x107,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FWorldPartitionReplaySample *)(*pcVar7)();
      return pFVar12;
    }
  }
  pUVar11 = AActor::GetWorld((AActor *)param_1);
  pUVar13 = UWorld::GetWorldPartition(pUVar11);
  pTVar14 = UWorldPartition::GetStreamingSources(pUVar13);
  local_1d8.Data = (FScriptContainerElement *)0x0;
  uVar2 = pTVar14->ArrayNum;
  pFVar19 = (FWorldPartitionStreamingSource *)(pTVar14->AllocatorInstance).Data;
  local_1d0 = uVar2;
  if (uVar2 == 0) {
    local_1cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x160,8,uVar2,0,&local_1d8,uVar2,&local_1cc);
    ConstructItems<FWorldPartitionStreamingSource,FWorldPartitionStreamingSource,int>
              (local_1d8.Data,pFVar19,uVar2);
  }
  uVar15 = (ulonglong)(int)local_1d0;
  local_1c8 = local_1d0;
  pFVar19 = (FWorldPartitionStreamingSource *)(local_1d8.Data + uVar15 * 0x160);
  FVar17.Data = local_1d8.Data;
  do {
    if (local_1d0 != (uint)uVar15) {
      local_1e8[0] = 0;
      `TCheckedPointerIterator<FWorldPartitionStreamingSource,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_1e8);
    }
    if ((FWorldPartitionStreamingSource *)FVar17.Data == pFVar19) {
      DestructItems<FWorldPartitionStreamingSource,int>
                ((FWorldPartitionStreamingSource *)local_1d8.Data,local_1d0);
      if ((FWorldPartitionStreamingSource *)local_1d8.Data != (FWorldPartitionStreamingSource *)0x0)
      {
        FMemory::Free(local_1d8.Data);
      }
      return this;
    }
    local_1b8._s_0.X = (((FWorldPartitionStreamingSource *)FVar17.Data)->Velocity).field0_0x0._s_0.X
    ;
    local_1b8._s_0.Y = (((FWorldPartitionStreamingSource *)FVar17.Data)->Velocity).field0_0x0._s_0.Y
    ;
    local_1b8._s_0.Z = (((FWorldPartitionStreamingSource *)FVar17.Data)->Velocity).field0_0x0._s_0.Z
    ;
    FWorldPartitionReplayStreamingSource::FWorldPartitionReplayStreamingSource
              ((FWorldPartitionReplayStreamingSource *)&local_198,
               ((FWorldPartitionStreamingSource *)FVar17.Data)->Name,
               &((FWorldPartitionStreamingSource *)FVar17.Data)->Location,
               &((FWorldPartitionStreamingSource *)FVar17.Data)->Rotation,
               ((FWorldPartitionStreamingSource *)FVar17.Data)->TargetState,
               ((FWorldPartitionStreamingSource *)FVar17.Data)->bBlockOnSlowLoading,
               ((FWorldPartitionStreamingSource *)FVar17.Data)->Priority,
               (TVector<double> *)&local_1b8._s_0);
    pFVar3 = (FWorldPartitionStreamingSource *)(this->StreamingSources).AllocatorInstance.Data;
    if ((pFVar3 <= &local_198) && (&local_198 < pFVar3 + (this->StreamingSources).ArrayMax)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FWorldPartitionReplaySample *)(*pcVar7)();
        return pFVar12;
      }
    }
    iVar9 = (this->StreamingSources).ArrayNum;
    if (iVar9 == (this->StreamingSources).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x160,8,&(this->StreamingSources).AllocatorInstance,
                         &(this->StreamingSources).ArrayMax);
    }
    (this->StreamingSources).ArrayNum = iVar9 + 1;
    FWorldPartitionStreamingSource::FWorldPartitionStreamingSource
              ((FWorldPartitionStreamingSource *)
               ((this->StreamingSources).AllocatorInstance.Data + (longlong)iVar9 * 0x160),
               &local_198);
    if (local_198.Shapes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Shapes.AllocatorInstance.Data);
    }
    local_198.TargetHLODLayers.HashSize = 0;
    if (local_198.TargetHLODLayers.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_198.TargetHLODLayers.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_198.TargetHLODLayers.Elements);
    local_198.TargetGrids.HashSize = 0;
    if (local_198.TargetGrids.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_198.TargetGrids.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_198.TargetGrids.Elements);
    pAVar4 = this->Replay;
    pTVar18 = &pAVar4->StreamingSourceNames;
    pFVar5 = (FName *)(pTVar18->AllocatorInstance).Data;
    if (pFVar5 != pFVar5 + (pAVar4->StreamingSourceNames).ArrayNum) {
      pFVar16 = pFVar5;
      do {
        if (*pFVar16 == ((FWorldPartitionStreamingSource *)FVar17.Data)->Name) {
          local_1e4 = (int)((longlong)pFVar16 - (longlong)pFVar5 >> 3);
          if (local_1e4 == -1) goto LAB_148ab438a;
          pFVar6 = (this->StreamingSourceNameIndices).AllocatorInstance.Data;
          if ((pFVar6 <= (FScriptContainerElement *)&local_1e4) &&
             ((FScriptContainerElement *)&local_1e4 <
              pFVar6 + (longlong)(this->StreamingSourceNameIndices).ArrayMax * 4)) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              pFVar12 = (FWorldPartitionReplaySample *)(*pcVar7)();
              return pFVar12;
            }
          }
          iVar9 = (this->StreamingSourceNameIndices).ArrayNum;
          if (iVar9 == (this->StreamingSourceNameIndices).ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)this,
                               &(this->StreamingSourceNameIndices).ArrayMax);
          }
          (this->StreamingSourceNameIndices).ArrayNum = iVar9 + 1;
          iVar10 = local_1e4;
          goto LAB_148ab44b4;
        }
        pFVar16 = pFVar16 + 1;
      } while (pFVar16 != pFVar5 + (pAVar4->StreamingSourceNames).ArrayNum);
    }
    local_1e4 = -1;
LAB_148ab438a:
    pFVar3 = (FWorldPartitionStreamingSource *)(pTVar18->AllocatorInstance).Data;
    if ((pFVar3 <= FVar17.Data) &&
       (FVar17.Data <
        (FWorldPartitionStreamingSource *)(&pFVar3->Name + (pAVar4->StreamingSourceNames).ArrayMax))
       ) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FWorldPartitionReplaySample *)(*pcVar7)();
        return pFVar12;
      }
    }
    iVar9 = (pAVar4->StreamingSourceNames).ArrayNum;
    piVar1 = &(pAVar4->StreamingSourceNames).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar18->AllocatorInstance,piVar1);
    }
    pFVar6 = (pTVar18->AllocatorInstance).Data;
    (pAVar4->StreamingSourceNames).ArrayNum = iVar9 + 1;
    *(FName *)(pFVar6 + (longlong)iVar9 * 8) = ((FWorldPartitionStreamingSource *)FVar17.Data)->Name
    ;
    local_1e0[0] = (this->Replay->StreamingSourceNames).ArrayNum + -1;
    pFVar6 = (this->StreamingSourceNameIndices).AllocatorInstance.Data;
    if ((pFVar6 <= (FScriptContainerElement *)local_1e0) &&
       ((FScriptContainerElement *)local_1e0 <
        pFVar6 + (longlong)(this->StreamingSourceNameIndices).ArrayMax * 4)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FWorldPartitionReplaySample *)(*pcVar7)();
        return pFVar12;
      }
    }
    iVar9 = (this->StreamingSourceNameIndices).ArrayNum;
    if (iVar9 == (this->StreamingSourceNameIndices).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)this,
                         &(this->StreamingSourceNameIndices).ArrayMax);
    }
    (this->StreamingSourceNameIndices).ArrayNum = iVar9 + 1;
    iVar10 = local_1e0[0];
LAB_148ab44b4:
    FVar17.Data = FVar17.Data + 0x160;
    *(int *)((this->StreamingSourceNameIndices).AllocatorInstance.Data + (longlong)iVar9 * 4) =
         iVar10;
    uVar15 = (ulonglong)local_1c8;
  } while( true );
}

