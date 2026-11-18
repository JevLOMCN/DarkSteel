// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 35

// FDeltaCompressionBaselineManager @ 144228ca0

FDeltaCompressionBaselineManager * __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::FDeltaCompressionBaselineManager
          (FDeltaCompressionBaselineManager *this)

{
  (this->BaselineStorage).UsedBaselineStateInfos.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BaselineStorage).UsedBaselineStateInfos.Storage.ArrayNum = 0;
  (this->BaselineStorage).UsedBaselineStateInfos.Storage.ArrayMax = 0;
  (this->BaselineStorage).UsedBaselineStateInfos.BitCount = 0;
  (this->BaselineStorage).BaselineStateInfos.Chunks.Array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->BaselineStorage).BaselineStateInfos.Chunks.Array.ArrayMax = 0;
  (this->BaselineStorage).BaselineStateInfos.Chunks.Array.ArrayNum = 0;
  (this->BaselineStorage).ReplicationStateStorage = (FReplicationStateStorage *)0x0;
  (this->DeltaCompressionEnabledObjects).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DeltaCompressionEnabledObjects).Storage.ArrayNum = 0;
  (this->DeltaCompressionEnabledObjects).Storage.ArrayMax = 0;
  (this->DeltaCompressionEnabledObjects).BitCount = 0;
  (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedPerObjectInfos).Storage.ArrayNum = 0;
  (this->UsedPerObjectInfos).Storage.ArrayMax = 0;
  (this->UsedPerObjectInfos).BitCount = 0;
  (this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectIndexToObjectInfoIndex).ArrayNum = 0;
  (this->ObjectIndexToObjectInfoIndex).ArrayMax = 0;
  (this->ObjectInfoStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectInfoStorage).ArrayNum = 0;
  (this->ObjectInfoStorage).ArrayMax = 0;
  (this->BaselineCounts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaselineCounts).ArrayNum = 0;
  (this->BaselineCounts).ArrayMax = 0;
  this->Connections = (FReplicationConnections *)0x0;
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  this->ReplicationSystem = (UReplicationSystem *)0x0;
  this->BaselineInvalidationTracker = (FDeltaCompressionBaselineInvalidationTracker *)0x0;
  this->MaxConnectionCount = 0;
  this->BytesPerObjectInfo = 0;
  this->MaxDeltaCompressedObjectCount = 0;
  this->FrameCounter = 0;
  (this->BaselineSharingContext).ObjectInfoIndicesWithNewBaseline.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BaselineSharingContext).ObjectInfoIndicesWithNewBaseline.Storage.ArrayNum = 0;
  (this->BaselineSharingContext).ObjectInfoIndicesWithNewBaseline.Storage.ArrayMax = 0;
  (this->BaselineSharingContext).ObjectInfoIndicesWithNewBaseline.BitCount = 0;
  (this->BaselineSharingContext).ObjectInfoIndexToBaselineInfoIndex.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BaselineSharingContext).ObjectInfoIndexToBaselineInfoIndex.ArrayNum = 0;
  (this->BaselineSharingContext).ObjectInfoIndexToBaselineInfoIndex.ArrayMax = 0;
  (this->BaselineSharingContext).CreatedBaselineCount = 0;
  return this;
}

// ~FDeltaCompressionBaselineManager @ 14422aed0

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::~FDeltaCompressionBaselineManager
          (FDeltaCompressionBaselineManager *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BaselineSharingContext).ObjectInfoIndexToBaselineInfoIndex.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BaselineSharingContext).ObjectInfoIndicesWithNewBaseline.Storage.AllocatorInstance
           .Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BaselineCounts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectInfoStorage).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeltaCompressionEnabledObjects).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDeltaCompressionBaselineStorage::~FDeltaCompressionBaselineStorage(&this->BaselineStorage);
  return;
}

// AddConnection @ 14422db60

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::AddConnection
          (FDeltaCompressionBaselineManager *this,uint param_1)

{
  return;
}

// AdjustBaselineCount @ 14422f4d0

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::AdjustBaselineCount
          (FDeltaCompressionBaselineManager *this,FPerObjectInfo *param_1,ushort param_2,
          short param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  if (param_3 != 0) {
    uVar6 = (ulonglong)param_2;
    if (((this->BaselineCounts).ArrayNum <= (int)(uint)param_2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = param_3 + *(short *)((this->BaselineCounts).AllocatorInstance.Data + uVar6 * 2);
    if (((this->BaselineCounts).ArrayNum <= (int)(uint)param_2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(ushort *)((this->BaselineCounts).AllocatorInstance.Data + uVar6 * 2) < uVar5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewBaselineCount <= BaselineCounts[ObjectInfoIndex]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineManager.cpp"
                           ,0x20b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((this->BaselineCounts).ArrayNum <= (int)(uint)param_2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(ushort *)((this->BaselineCounts).AllocatorInstance.Data + uVar6 * 2) = uVar5;
    if (uVar5 == 0) {
      uVar1 = param_1->ObjectIndex;
      bVar3 = FNetBitArray::GetBit(&this->DeltaCompressionEnabledObjects,uVar1);
      if (!bVar3) {
        FreePerObjectInfo(this,param_2);
        uVar4 = 0;
        if ((int)uVar1 < (this->ObjectIndexToObjectInfoIndex).ArrayNum) {
          uVar4 = ~uVar1 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined2 *)
         ((this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data + (longlong)(int)uVar1 * 2) =
             0;
      }
    }
  }
  return;
}

// AllocPerObjectInfo @ 14422fa20

ushort __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::AllocPerObjectInfo
          (FDeltaCompressionBaselineManager *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  FLLMScope local_res8 [2];
  int local_res10;
  FName local_res18;
  FMemScope local_res20;
  
  uVar12 = (this->UsedPerObjectInfos).Storage.ArrayNum;
  uVar7 = 0;
  uVar2 = (this->UsedPerObjectInfos).BitCount;
  pFVar8 = (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data;
  uVar11 = uVar7;
  uVar9 = uVar7;
  if (uVar12 != 0) {
    do {
      uVar10 = *(uint *)(pFVar8 + uVar7);
      if (uVar10 != 0xffffffff) {
        uVar10 = ~uVar10;
        local_res10 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> local_res10 & 1) == 0; local_res10 = local_res10 + 1) {
          }
        }
        iVar6 = 0x20;
        if (uVar10 != 0) {
          iVar6 = local_res10;
        }
        uVar10 = iVar6 + (int)uVar9;
        uVar12 = 0xffffffff;
        if (uVar10 < uVar2) {
          uVar12 = uVar10;
        }
        if (uVar12 == 0xffffffff) {
          return 0;
        }
        if ((uVar2 <= uVar12) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2a2,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
        piVar1 = &(this->ObjectInfoStorage).ArrayNum;
        pFVar8 = pFVar8 + (ulonglong)(uVar12 >> 5) * 4;
        *(uint *)pFVar8 = *(uint *)pFVar8 | 1 << (uVar12 & 0x1f);
        uVar11 = (ulonglong)(uVar12 * this->BytesPerObjectInfo);
        if ((ulonglong)(longlong)*piVar1 <= uVar11) {
          FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true)
          ;
          local_res18 = LLMTagDeclaration_Iris.UniqueName;
          FMemScope::FMemScope(&local_res20,&local_res18,true);
          Core::Private::ReallocGrow<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                    (1,1,this->BytesPerObjectInfo << 7,&(this->ObjectInfoStorage).AllocatorInstance,
                     piVar1,&(this->ObjectInfoStorage).ArrayMax);
          FMemScope::~FMemScope(&local_res20);
          FLLMScope::~FLLMScope(local_res8);
        }
        pFVar8 = (this->ObjectInfoStorage).AllocatorInstance.Data;
        *(undefined8 *)(pFVar8 + uVar11) = 0;
        *(undefined8 *)(pFVar8 + uVar11 + 8) = 0;
        *(undefined2 *)(pFVar8 + uVar11 + 0x10) = 0;
        uVar9 = (ulonglong)this->MaxConnectionCount;
        if (uVar9 != 0) {
          pFVar8 = pFVar8 + uVar11 + 0x28;
          do {
            *(undefined8 *)(pFVar8 + -8) = 0;
            *(undefined8 *)(pFVar8 + 8) = 0;
            *(undefined8 *)(pFVar8 + -0x10) = 0;
            *(undefined8 *)pFVar8 = 0;
            pFVar8 = pFVar8 + 0x20;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        return (ushort)uVar12;
      }
      uVar10 = (int)uVar11 + 1;
      uVar7 = uVar7 + 4;
      uVar11 = (ulonglong)uVar10;
      uVar9 = (ulonglong)((int)uVar9 + 0x20);
    } while (uVar10 < uVar12);
  }
  return 0;
}

// AllocPerObjectInfoForObject @ 14422fe50

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FPerObjectInfo * __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::AllocPerObjectInfoForObject
          (FDeltaCompressionBaselineManager *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FReplicatedObjectData *pFVar4;
  uint *_Dst;
  uint uVar5;
  uint uVar6;
  FPerObjectInfo *pFVar7;
  
  uVar3 = AllocPerObjectInfo(this);
  *(ushort *)((this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data + (ulonglong)param_1 * 2)
       = uVar3;
  if (uVar3 == 0) {
    return (FPerObjectInfo *)0x0;
  }
  pFVar7 = (FPerObjectInfo *)
           ((this->ObjectInfoStorage).AllocatorInstance.Data +
           (uint)uVar3 * this->BytesPerObjectInfo);
  pFVar7->ObjectIndex = param_1;
  pFVar4 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this->NetRefHandleManager,param_1);
  uVar5 = pFVar4->Protocol->ChangeMaskBitCount + 0x1f;
  uVar6 = uVar5 >> 5;
  if (uVar6 < 0x10000) {
    if (uVar5 >> 5 == 0) {
      return pFVar7;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChangeMaskStride < 65536U",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineManager.cpp"
                       ,0x125,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FPerObjectInfo *)(*pcVar1)();
      return pFVar7;
    }
  }
  uVar5 = uVar6 * this->MaxConnectionCount * 0xc;
  _Dst = FMemory::Malloc((ulonglong)uVar5,4);
  memset(_Dst,0,(ulonglong)uVar5);
  pFVar7->ChangeMaskStride = (ushort)uVar6;
  pFVar7->ChangeMasksForConnections = _Dst;
  return pFVar7;
}

// ConstructBaselineSharingContext @ 144233e30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::ConstructBaselineSharingContext
          (FDeltaCompressionBaselineManager *this,FBaselineSharingContext *param_1)

{
  param_1->CreatedBaselineCount = 0;
  FNetBitArray::Init(&param_1->ObjectInfoIndicesWithNewBaseline,(this->UsedPerObjectInfos).BitCount)
  ;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&param_1->ObjectInfoIndexToBaselineInfoIndex,(this->UsedPerObjectInfos).BitCount,
             Default);
  return;
}

// ConstructPerObjectInfo @ 144233ea0

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::ConstructPerObjectInfo
          (FDeltaCompressionBaselineManager *this,FPerObjectInfo *param_1)

{
  FInternalBaseline *pFVar1;
  ulonglong uVar2;
  
  param_1->ChangeMasksForConnections = (uint *)0x0;
  param_1->ObjectIndex = 0;
  param_1->PrevBaselineCreationFrame = 0;
  param_1->ChangeMaskStride = 0;
  uVar2 = (ulonglong)this->MaxConnectionCount;
  if (uVar2 != 0) {
    pFVar1 = param_1->BaselinesForConnections[0].Baselines + 1;
    do {
      *(undefined8 *)&((FObjectBaselineInfo *)(pFVar1 + -1))->Baselines[0].BaselineStateInfoIndex =
           0;
      *(undefined8 *)&pFVar1->BaselineStateInfoIndex = 0;
      ((FObjectBaselineInfo *)(pFVar1 + -1))->Baselines[0].ChangeMask = (uint *)0x0;
      pFVar1->ChangeMask = (uint *)0x0;
      pFVar1 = pFVar1 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// CreateBaseline @ 1442340d0

/* WARNING: Type propagation algorithm not settling */

FDeltaCompressionBaseline * __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::CreateBaseline
          (FDeltaCompressionBaselineManager *this,FDeltaCompressionBaseline *__return_storage_ptr__,
          uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  ushort uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  FDeltaCompressionBaseline *pFVar9;
  FInternalBaselineStateInfo *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  FInternalBaseline *pFVar16;
  uchar *puVar17;
  FBaselineReservation local_78;
  uchar *local_68;
  uint uStack_60;
  
  if (((this->BaselineSharingContext).ObjectInfoIndicesWithNewBaseline.BitCount == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaselineSharingContext.ObjectInfoIndicesWithNewBaseline.GetNumBits() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineManager.cpp"
                         ,0x188,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar9 = (FDeltaCompressionBaseline *)(*pcVar7)();
    return pFVar9;
  }
  pFVar13 = (this->DeltaCompressionEnabledObjects).Storage.AllocatorInstance.Data;
  __return_storage_ptr__->ChangeMask = (uint *)0x0;
  __return_storage_ptr__->StateBuffer = (uchar *)0x0;
  if (((this->DeltaCompressionEnabledObjects).BitCount <= param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar9 = (FDeltaCompressionBaseline *)(*pcVar7)();
    return pFVar9;
  }
  if ((*(uint *)(pFVar13 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) == 0) {
    return __return_storage_ptr__;
  }
  uVar12 = 0;
  if ((int)param_2 < (this->ObjectIndexToObjectInfoIndex).ArrayNum) {
    uVar12 = ~param_2 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar9 = (FDeltaCompressionBaseline *)(*pcVar7)();
    return pFVar9;
  }
  uVar5 = *(ushort *)
           ((this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data + (longlong)(int)param_2 * 2
           );
  if (uVar5 == 0) {
    return __return_storage_ptr__;
  }
  uVar12 = (uint)uVar5;
  uVar14 = (ulonglong)uVar12;
  sVar4 = 0;
  pFVar13 = (this->ObjectInfoStorage).AllocatorInstance.Data + uVar12 * this->BytesPerObjectInfo;
  pFVar16 = (FInternalBaseline *)
            (pFVar13 + (((ulonglong)param_3 + (ulonglong)param_1 * 2) * 2 + 3) * 8);
  if (pFVar16->BaselineStateInfoIndex != 0) {
    sVar4 = -1;
    ReleaseInternalBaseline(this,pFVar16);
  }
  bVar8 = FNetBitArray::GetBit
                    (&(this->BaselineSharingContext).ObjectInfoIndicesWithNewBaseline,uVar12);
  if (bVar8) {
    if (((this->BaselineSharingContext).ObjectInfoIndexToBaselineInfoIndex.ArrayNum <= (int)uVar12)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
          bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FDeltaCompressionBaseline *)(*pcVar7)();
      return pFVar9;
    }
    pFVar6 = (this->BaselineStorage).UsedBaselineStateInfos.Storage.AllocatorInstance.Data;
    uVar14 = (ulonglong)(int)uVar12;
    uVar15 = *(uint *)((this->BaselineSharingContext).ObjectInfoIndexToBaselineInfoIndex.
                       AllocatorInstance.Data + uVar14 * 4);
    if (((this->BaselineStorage).UsedBaselineStateInfos.BitCount <= uVar15) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FDeltaCompressionBaseline *)(*pcVar7)();
      return pFVar9;
    }
    if (((*(uint *)(pFVar6 + (ulonglong)(uVar15 >> 5) * 4) >> (uVar15 & 0x1f) & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("UsedBaselineStateInfos.GetBit(StateInfoIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                           ,0x9c,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FDeltaCompressionBaseline *)(*pcVar7)();
      return pFVar9;
    }
    pFVar10 = TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
              ::operator[](&(this->BaselineStorage).BaselineStateInfos,uVar15);
    if ((pFVar10->RefCount == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InternalBaselineInfo->RefCount > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                           ,0x9f,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FDeltaCompressionBaseline *)(*pcVar7)();
      return pFVar9;
    }
    local_68 = FReplicationStateStorage::GetState
                         ((this->BaselineStorage).ReplicationStateStorage,pFVar10->ObjectIndex,
                          CurrentSendState);
    uStack_60 = uVar15;
    puVar17 = local_68;
  }
  else {
    if (((this->BaselineCounts).ArrayNum <= (int)uVar12) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FDeltaCompressionBaseline *)(*pcVar7)();
      return pFVar9;
    }
    if (((*(short *)((this->BaselineCounts).AllocatorInstance.Data + uVar14 * 2) != 0) &&
        ((MinimumNumberOfFramesBetweenBaselines < 0 ||
         (this->FrameCounter - *(int *)(pFVar13 + 0xc) < (uint)MinimumNumberOfFramesBetweenBaselines
         )))) || (uVar15 = FDeltaCompressionBaselineStorage::AllocBaselineStateInfo
                                     (&this->BaselineStorage), uVar15 == 0)) goto LAB_144234608;
    FReplicationStateStorage::ReserveBaseline
              ((this->BaselineStorage).ReplicationStateStorage,&local_78,param_2,CurrentSendState);
    if (local_78.ReservedStorage == (uchar *)0x0) {
      FDeltaCompressionBaselineStorage::FreeBaselineStateInfo(&this->BaselineStorage,uVar15);
      goto LAB_144234608;
    }
    pFVar10 = TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
              ::operator[](&(this->BaselineStorage).BaselineStateInfos,uVar15);
    pFVar10->StateBuffer = local_78.ReservedStorage;
    pFVar10->ObjectIndex = param_2;
    if (local_78.BaselineBaseStorage == (uchar *)0x0) goto LAB_144234608;
    puVar1 = &(this->BaselineSharingContext).CreatedBaselineCount;
    *puVar1 = *puVar1 + 1;
    FNetBitArray::SetBit(&(this->BaselineSharingContext).ObjectInfoIndicesWithNewBaseline,uVar12);
    if (((this->BaselineSharingContext).ObjectInfoIndexToBaselineInfoIndex.ArrayNum <= (int)uVar12)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
          bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FDeltaCompressionBaseline *)(*pcVar7)();
      return pFVar9;
    }
    *(uint *)((this->BaselineSharingContext).ObjectInfoIndexToBaselineInfoIndex.AllocatorInstance.
              Data + uVar14 * 4) = uVar15;
    puVar17 = local_78.BaselineBaseStorage;
  }
  if (puVar17 != (uchar *)0x0) {
    *(uint *)(pFVar13 + 0xc) = this->FrameCounter;
    pFVar6 = (this->BaselineStorage).UsedBaselineStateInfos.Storage.AllocatorInstance.Data;
    if (((this->BaselineStorage).UsedBaselineStateInfos.BitCount <= uVar15) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FDeltaCompressionBaseline *)(*pcVar7)();
      return pFVar9;
    }
    if (((*(uint *)(pFVar6 + (ulonglong)(uVar15 >> 5) * 4) >> (uVar15 & 0x1f) & 1) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("UsedBaselineStateInfos.GetBit(StateInfoIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                           ,0x49,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FDeltaCompressionBaseline *)(*pcVar7)();
      return pFVar9;
    }
    pFVar10 = TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
              ::operator[](&(this->BaselineStorage).BaselineStateInfos,uVar15);
    sVar4 = sVar4 + 1;
    pFVar10->RefCount = pFVar10->RefCount + 1;
    pFVar16->BaselineStateInfoIndex = uVar15;
    pFVar16->ChangeMask =
         (uint *)(*(longlong *)pFVar13 +
                 (ulonglong)
                 ((this->MaxConnectionCount + param_1 * 2 + param_3) *
                 (uint)*(ushort *)(pFVar13 + 0x10)) * 4);
    uVar5 = *(ushort *)(pFVar13 + 0x10);
    uVar15 = 0;
    lVar2 = *(longlong *)pFVar13 + (ulonglong)(uVar5 * param_1) * 4;
    if (uVar5 != 0) {
      do {
        uVar11 = (ulonglong)uVar15;
        uVar15 = uVar15 + 1;
        lVar3 = uVar11 * 4;
        pFVar16->ChangeMask[uVar11] = *(uint *)(lVar3 + lVar2);
        *(undefined4 *)(lVar3 + lVar2) = 0;
      } while (uVar15 != uVar5);
    }
    __return_storage_ptr__->ChangeMask = pFVar16->ChangeMask;
    __return_storage_ptr__->StateBuffer = puVar17;
  }
LAB_144234608:
  if (0 < sVar4) {
    if (((this->BaselineCounts).ArrayNum <= (int)uVar12) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FDeltaCompressionBaseline *)(*pcVar7)();
      return pFVar9;
    }
    if (((short)(sVar4 + *(short *)((this->BaselineCounts).AllocatorInstance.Data + uVar14 * 2)) ==
         0) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("BaselineCountAdjustment <= 0 || (uint16(BaselineCounts[ObjectInfoIndex] + BaselineCountAdjustment) > 0)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineManager.cpp"
                                   ,0x1cf,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FDeltaCompressionBaseline *)(*pcVar7)();
      return pFVar9;
    }
  }
  if (((this->BaselineCounts).ArrayNum <= (int)uVar12) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar9 = (FDeltaCompressionBaseline *)(*pcVar7)();
    return pFVar9;
  }
  pFVar13 = (this->BaselineCounts).AllocatorInstance.Data + uVar14 * 2;
  *(short *)pFVar13 = *(short *)pFVar13 + sVar4;
  return __return_storage_ptr__;
}

// Deinit @ 144235960

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::Deinit(FDeltaCompressionBaselineManager *this)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  FInternalBaselineStateInfo *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int local_res8;
  
  pFVar11 = (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data;
  if (((this->UsedPerObjectInfos).BitCount == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)pFVar11 = *(uint *)pFVar11 & 0xfffffffe;
  uVar1 = (this->UsedPerObjectInfos).Storage.ArrayNum;
  uVar2 = (this->UsedPerObjectInfos).BitCount;
  uVar12 = 0;
  pFVar11 = (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data;
  uVar8 = 0;
  local_res8 = 0;
  if (uVar1 != 0) {
    do {
      uVar7 = 0xffffffff;
      if (uVar8 == uVar1 - 1) {
        uVar7 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      uVar9 = uVar12;
      for (uVar7 = uVar7 & *(uint *)pFVar11; uVar7 != 0; uVar7 = uVar7 >> 1) {
        if (((uVar7 & 1) != 0) &&
           (pvVar3 = *(void **)((this->ObjectInfoStorage).AllocatorInstance.Data +
                               (uVar9 & 0xffff) * this->BytesPerObjectInfo), pvVar3 != (void *)0x0))
        {
          FMemory::Free(pvVar3);
        }
        uVar9 = uVar9 + 1;
      }
      uVar8 = uVar8 + 1;
      pFVar11 = pFVar11 + 4;
      uVar12 = uVar12 + 0x20;
    } while (uVar8 < uVar1);
  }
  pFVar11 = (this->BaselineStorage).UsedBaselineStateInfos.Storage.AllocatorInstance.Data;
  if (((this->BaselineStorage).UsedBaselineStateInfos.BitCount == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)pFVar11 = *(uint *)pFVar11 & 0xfffffffe;
  uVar1 = (this->BaselineStorage).UsedBaselineStateInfos.Storage.ArrayNum;
  uVar8 = 0;
  uVar2 = (this->BaselineStorage).UsedBaselineStateInfos.BitCount;
  pFVar11 = (this->BaselineStorage).UsedBaselineStateInfos.Storage.AllocatorInstance.Data;
  if (uVar1 != 0) {
    do {
      uVar12 = 0xffffffff;
      if (uVar8 == uVar1 - 1) {
        uVar12 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      iVar10 = local_res8;
      for (uVar12 = uVar12 & *(uint *)pFVar11; uVar12 != 0; uVar12 = uVar12 >> 1) {
        if ((uVar12 & 1) != 0) {
          pFVar6 = TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
                   ::operator[](&(this->BaselineStorage).BaselineStateInfos,iVar10);
          if (pFVar6->StateBuffer != (uchar *)0x0) {
            FReplicationStateStorage::FreeBaseline
                      ((this->BaselineStorage).ReplicationStateStorage,pFVar6->ObjectIndex,
                       pFVar6->StateBuffer);
          }
        }
        iVar10 = iVar10 + 1;
      }
      uVar8 = uVar8 + 1;
      local_res8 = local_res8 + 0x20;
      pFVar11 = pFVar11 + 4;
    } while (uVar8 < uVar1);
  }
  memset((this->BaselineStorage).UsedBaselineStateInfos.Storage.AllocatorInstance.Data,0,
         (longlong)(this->BaselineStorage).UsedBaselineStateInfos.Storage.ArrayNum << 2);
  return;
}

// DestroyBaseline @ 144236860

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::DestroyBaseline
          (FDeltaCompressionBaselineManager *this,uint param_1,uint param_2,uint param_3,
          EChangeMaskBehavior param_4)

{
  uint *puVar1;
  ushort uVar2;
  uint *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  FPerObjectInfo *pFVar12;
  uint uVar13;
  
  if (param_3 == 2) {
    return;
  }
  uVar10 = 0;
  uVar13 = 0;
  if ((int)param_2 < (this->ObjectIndexToObjectInfoIndex).ArrayNum) {
    uVar13 = ~param_2 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(ushort *)
           ((this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data + (longlong)(int)param_2 * 2
           );
  if (uVar2 == 0) {
    return;
  }
  pFVar12 = (FPerObjectInfo *)
            ((this->ObjectInfoStorage).AllocatorInstance.Data +
            (uint)uVar2 * this->BytesPerObjectInfo);
  if (pFVar12 == (FPerObjectInfo *)0x0) {
    return;
  }
  if ((1 < param_3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaselineIndex < MaxBaselineCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineManager.cpp"
                         ,0x2bf,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pFVar12->BaselinesForConnections[param_1].Baselines[param_3].BaselineStateInfoIndex == 0) {
    return;
  }
  if (param_4 != Merge) goto LAB_144236a62;
  uVar13 = (uint)pFVar12->ChangeMaskStride;
  puVar3 = pFVar12->BaselinesForConnections[param_1].Baselines[param_3].ChangeMask;
  puVar1 = pFVar12->ChangeMasksForConnections + uVar13 * param_1;
  if (pFVar12->ChangeMaskStride == 0) goto LAB_144236a62;
  if ((1 < uVar13) && ((puVar3 + (uVar13 - 1) < puVar1 || (puVar1 + (uVar13 - 1) < puVar3)))) {
    if (uVar13 < 0x10) {
LAB_144236a1c:
      do {
        *(ulonglong *)(puVar1 + uVar10) =
             *(ulonglong *)(puVar3 + uVar10) | *(ulonglong *)(puVar1 + uVar10);
        uVar11 = (int)uVar10 + 2;
        uVar10 = (ulonglong)uVar11;
      } while (uVar11 != (uVar13 & 0xfffffffe));
    }
    else {
      uVar11 = 8;
      do {
        uVar5 = *(ulonglong *)((longlong)(puVar1 + uVar10) + 8);
        uVar8 = uVar11 - 4;
        uVar6 = *(ulonglong *)((longlong)(puVar3 + uVar10) + 8);
        *(ulonglong *)(puVar1 + uVar10) =
             *(ulonglong *)(puVar3 + uVar10) | *(ulonglong *)(puVar1 + uVar10);
        *(ulonglong *)((longlong)(puVar1 + uVar10) + 8) = uVar6 | uVar5;
        uVar9 = (int)uVar10 + 0x10;
        uVar10 = (ulonglong)uVar9;
        uVar5 = *(ulonglong *)((longlong)(puVar1 + uVar8) + 8);
        uVar6 = *(ulonglong *)((longlong)(puVar3 + uVar8) + 8);
        *(ulonglong *)(puVar1 + uVar8) =
             *(ulonglong *)(puVar3 + uVar8) | *(ulonglong *)(puVar1 + uVar8);
        *(ulonglong *)((longlong)(puVar1 + uVar8) + 8) = uVar6 | uVar5;
        uVar5 = *(ulonglong *)((longlong)(puVar1 + uVar11) + 8);
        uVar6 = *(ulonglong *)((longlong)(puVar3 + uVar11) + 8);
        *(ulonglong *)(puVar1 + uVar11) =
             *(ulonglong *)(puVar3 + uVar11) | *(ulonglong *)(puVar1 + uVar11);
        *(ulonglong *)((longlong)(puVar1 + uVar11) + 8) = uVar6 | uVar5;
        uVar8 = uVar11 + 4;
        uVar11 = uVar11 + 0x10;
        uVar5 = *(ulonglong *)((longlong)(puVar1 + uVar8) + 8);
        uVar6 = *(ulonglong *)((longlong)(puVar3 + uVar8) + 8);
        *(ulonglong *)(puVar1 + uVar8) =
             *(ulonglong *)(puVar3 + uVar8) | *(ulonglong *)(puVar1 + uVar8);
        *(ulonglong *)((longlong)(puVar1 + uVar8) + 8) = uVar6 | uVar5;
      } while (uVar9 != uVar13 - (uVar13 & 0xf));
      if (1 < (uVar13 & 0xf)) goto LAB_144236a1c;
    }
    if ((uint)uVar10 == uVar13) goto LAB_144236a62;
  }
  do {
    puVar1[uVar10] = puVar1[uVar10] | puVar3[uVar10];
    uVar11 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar11;
  } while (uVar11 != uVar13);
LAB_144236a62:
  ReleaseInternalBaseline(this,pFVar12->BaselinesForConnections[param_1].Baselines + param_3);
  AdjustBaselineCount(this,pFVar12,uVar2,-1);
  return;
}

// DestroyBaseline @ 144236ab0

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::DestroyBaseline
          (FDeltaCompressionBaselineManager *this,uint param_1,uint param_2,uint param_3)

{
  DestroyBaseline(this,param_1,param_2,param_3,Discard);
  return;
}

// DestructBaselineSharingContext @ 144237140

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::DestructBaselineSharingContext
          (FDeltaCompressionBaselineManager *this,FBaselineSharingContext *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  FBaselineSharingContext local_78;
  <lambda_1> local_48;
  
  local_48.__this = this;
  FNetBitArray::FNetBitArray
            (&local_48.SharingContext.ObjectInfoIndicesWithNewBaseline,
             &param_1->ObjectInfoIndicesWithNewBaseline);
  local_48.SharingContext.ObjectInfoIndexToBaselineInfoIndex.ArrayNum =
       (param_1->ObjectInfoIndexToBaselineInfoIndex).ArrayNum;
  lVar2 = (longlong)local_48.SharingContext.ObjectInfoIndexToBaselineInfoIndex.ArrayNum;
  pFVar1 = (param_1->ObjectInfoIndexToBaselineInfoIndex).AllocatorInstance.Data;
  local_48.SharingContext.ObjectInfoIndexToBaselineInfoIndex.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  if (local_48.SharingContext.ObjectInfoIndexToBaselineInfoIndex.ArrayNum == 0) {
    local_48.SharingContext.ObjectInfoIndexToBaselineInfoIndex.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_48.SharingContext.ObjectInfoIndexToBaselineInfoIndex.ArrayNum,0,
               &local_48.SharingContext.ObjectInfoIndexToBaselineInfoIndex.AllocatorInstance,
               local_48.SharingContext.ObjectInfoIndexToBaselineInfoIndex.ArrayNum,
               &local_48.SharingContext.ObjectInfoIndexToBaselineInfoIndex.ArrayMax);
    memcpy(local_48.SharingContext.ObjectInfoIndexToBaselineInfoIndex.AllocatorInstance.Data,pFVar1,
           lVar2 << 2);
  }
  local_48.SharingContext.CreatedBaselineCount = param_1->CreatedBaselineCount;
  if (local_48.SharingContext.CreatedBaselineCount != 0) {
    FNetBitArrayHelper::
    ForAllSetBits<_UE::Net::Private::FDeltaCompressionBaselineManager::DestructBaselineSharingContext_::__l2::<lambda_1>_&>
              ((uint *)(param_1->ObjectInfoIndicesWithNewBaseline).Storage.AllocatorInstance.Data,
               (param_1->ObjectInfoIndicesWithNewBaseline).Storage.ArrayNum,
               (param_1->ObjectInfoIndicesWithNewBaseline).BitCount,&local_48);
  }
  if (param_1 != &local_78) {
    pFVar1 = (param_1->ObjectInfoIndicesWithNewBaseline).Storage.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->ObjectInfoIndicesWithNewBaseline).Storage.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (param_1->ObjectInfoIndicesWithNewBaseline).Storage.ArrayNum = 0;
    (param_1->ObjectInfoIndicesWithNewBaseline).Storage.ArrayMax = 0;
  }
  pTVar3 = &param_1->ObjectInfoIndexToBaselineInfoIndex;
  (param_1->ObjectInfoIndicesWithNewBaseline).BitCount = 0;
  if (pTVar3 != &local_78.ObjectInfoIndexToBaselineInfoIndex) {
    pFVar1 = (pTVar3->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_1->ObjectInfoIndexToBaselineInfoIndex).ArrayNum = 0;
    (param_1->ObjectInfoIndexToBaselineInfoIndex).ArrayMax = 0;
  }
  param_1->CreatedBaselineCount = 0;
  if (local_48.SharingContext.ObjectInfoIndexToBaselineInfoIndex.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.SharingContext.ObjectInfoIndexToBaselineInfoIndex.AllocatorInstance.Data)
    ;
  }
  if (local_48.SharingContext.ObjectInfoIndicesWithNewBaseline.Storage.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.SharingContext.ObjectInfoIndicesWithNewBaseline.Storage.AllocatorInstance
                  .Data);
  }
  return;
}

// DestructPerObjectInfo @ 1442372c0

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::DestructPerObjectInfo
          (FDeltaCompressionBaselineManager *this,FPerObjectInfo *param_1)

{
  uint *puVar1;
  FLowLevelMemTracker *this_00;
  
  puVar1 = param_1->ChangeMasksForConnections;
  if (puVar1 == (uint *)0x0) {
    return;
  }
  if (puVar1 != (uint *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,puVar1);
  }
  return;
}

// DoesObjectSupportDeltaCompression @ 144237c10

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::DoesObjectSupportDeltaCompression
          (FDeltaCompressionBaselineManager *this,uint param_1)

{
  FReplicatedObjectData *pFVar1;
  
  pFVar1 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this->NetRefHandleManager,param_1);
  return (bool)((byte)(char)pFVar1->Protocol->ProtocolTraits >> 5 & 1);
}

// FreeAllPerObjectInfos @ 14423a8a0

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::FreeAllPerObjectInfos
          (FDeltaCompressionBaselineManager *this)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  pFVar10 = (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data;
  if (((this->UsedPerObjectInfos).BitCount == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)pFVar10 = *(uint *)pFVar10 & 0xfffffffe;
  uVar9 = 0;
  uVar1 = (this->UsedPerObjectInfos).Storage.ArrayNum;
  uVar2 = (this->UsedPerObjectInfos).BitCount;
  uVar7 = 0;
  pFVar10 = (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data;
  if (uVar1 != 0) {
    do {
      uVar6 = 0xffffffff;
      if (uVar7 == uVar1 - 1) {
        uVar6 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      uVar8 = uVar9;
      for (uVar6 = uVar6 & *(uint *)pFVar10; uVar6 != 0; uVar6 = uVar6 >> 1) {
        if (((uVar6 & 1) != 0) &&
           (pvVar3 = *(void **)((this->ObjectInfoStorage).AllocatorInstance.Data +
                               (uVar8 & 0xffff) * this->BytesPerObjectInfo), pvVar3 != (void *)0x0))
        {
          FMemory::Free(pvVar3);
        }
        uVar8 = uVar8 + 1;
      }
      uVar7 = uVar7 + 1;
      pFVar10 = pFVar10 + 4;
      uVar9 = uVar9 + 0x20;
    } while (uVar7 < uVar1);
  }
  return;
}

// FreePerObjectInfo @ 14423acc0

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::FreePerObjectInfo
          (FDeltaCompressionBaselineManager *this,ushort param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  
  pFVar1 = (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data;
  if ((this->UsedPerObjectInfos).BitCount <= (uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) =
       *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) & ~(1 << (param_1 & 0x1f));
  pvVar2 = *(void **)((this->ObjectInfoStorage).AllocatorInstance.Data +
                     (uint)param_1 * this->BytesPerObjectInfo);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return;
}

// FreePerObjectInfoForObject @ 14423add0

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::FreePerObjectInfoForObject
          (FDeltaCompressionBaselineManager *this,uint param_1)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data;
  uVar1 = *(ushort *)(pFVar2 + (ulonglong)param_1 * 2);
  if (uVar1 != 0) {
    FreePerObjectInfo(this,uVar1);
    *(undefined2 *)(pFVar2 + (ulonglong)param_1 * 2) = 0;
  }
  return;
}

// GetBaseline @ 14423afa0

FDeltaCompressionBaseline * __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::GetBaseline
          (FDeltaCompressionBaselineManager *this,FDeltaCompressionBaseline *__return_storage_ptr__,
          uint param_1,uint param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPerObjectInfo *pFVar5;
  FDeltaCompressionBaseline *pFVar6;
  uint uVar7;
  uint uVar8;
  
  __return_storage_ptr__->ChangeMask = (uint *)0x0;
  __return_storage_ptr__->StateBuffer = (uchar *)0x0;
  if ((param_3 != 2) &&
     (pFVar5 = GetPerObjectInfoForObject(this,param_2), pFVar5 != (FPerObjectInfo *)0x0)) {
    if ((1 < param_3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BaselineIndex < MaxBaselineCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineManager.cpp"
                           ,0x1ee,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDeltaCompressionBaseline *)(*pcVar2)();
      return pFVar6;
    }
    uVar7 = pFVar5->BaselinesForConnections[param_1].Baselines[param_3].BaselineStateInfoIndex;
    if (uVar7 != 0) {
      pFVar1 = (this->BaselineStorage).UsedBaselineStateInfos.Storage.AllocatorInstance.Data;
      if (((this->BaselineStorage).UsedBaselineStateInfos.BitCount <= uVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FDeltaCompressionBaseline *)(*pcVar2)();
        return pFVar6;
      }
      if (((*(uint *)(pFVar1 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("UsedBaselineStateInfos.GetBit(StateInfoIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                             ,0x5d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FDeltaCompressionBaseline *)(*pcVar2)();
        return pFVar6;
      }
      uVar4 = (int)(uVar7 + ((int)uVar7 >> 0x1f & 0xffU)) >> 8;
      uVar7 = uVar7 & 0x800000ff;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffff00) + 1;
      }
      uVar8 = 0;
      if ((int)uVar4 < (this->BaselineStorage).BaselineStateInfos.Chunks.Array.ArrayNum) {
        uVar8 = ~uVar4 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FDeltaCompressionBaseline *)(*pcVar2)();
        return pFVar6;
      }
      __return_storage_ptr__->ChangeMask =
           pFVar5->BaselinesForConnections[param_1].Baselines[param_3].ChangeMask;
      __return_storage_ptr__->StateBuffer =
           *(uchar **)
            (*(longlong *)
              ((this->BaselineStorage).BaselineStateInfos.Chunks.Array.AllocatorInstance.Data +
              (longlong)(int)uVar4 * 8) + (longlong)(int)uVar7 * 0x10);
    }
  }
  return __return_storage_ptr__;
}

// GetDeltaCompressionStatus @ 14423bd20

ENetObjectDeltaCompressionStatus __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::GetDeltaCompressionStatus
          (FDeltaCompressionBaselineManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ENetObjectDeltaCompressionStatus EVar4;
  
  pFVar1 = (this->DeltaCompressionEnabledObjects).Storage.AllocatorInstance.Data;
  if ((this->DeltaCompressionEnabledObjects).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  return (ENetObjectDeltaCompressionStatus)
         ((*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0);
}

// GetPerObjectInfoForObject @ 14423db50

FPerObjectInfo * __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::GetPerObjectInfoForObject
          (FDeltaCompressionBaselineManager *this,uint param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPerObjectInfo *pFVar5;
  
  uVar4 = 0;
  if ((int)param_1 < (this->ObjectIndexToObjectInfoIndex).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPerObjectInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar1 = *(ushort *)
           ((this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data + (longlong)(int)param_1 * 2
           );
  if (uVar1 != 0) {
    return (FPerObjectInfo *)
           ((this->ObjectInfoStorage).AllocatorInstance.Data +
           (uint)uVar1 * this->BytesPerObjectInfo);
  }
  return (FPerObjectInfo *)0x0;
}

// Init @ 14423fdb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::Init
          (FDeltaCompressionBaselineManager *this,
          FDeltaCompressionBaselineManagerInitParams *param_1)

{
  FScriptContainerElement *pFVar1;
  FReplicationStateStorage *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this->Connections = param_1->Connections;
  this->NetRefHandleManager = param_1->NetRefHandleManager;
  this->BaselineInvalidationTracker = param_1->BaselineInvalidationTracker;
  this->ReplicationSystem = param_1->ReplicationSystem;
  this->MaxConnectionCount = (param_1->Connections->ValidConnections).BitCount;
  uVar5 = param_1->MaxDeltaCompressedObjectCount;
  if (param_1->MaxNetObjectCount < param_1->MaxDeltaCompressedObjectCount) {
    uVar5 = param_1->MaxNetObjectCount;
  }
  this->MaxDeltaCompressedObjectCount = uVar5;
  FNetBitArray::Init(&this->DeltaCompressionEnabledObjects,param_1->MaxInternalNetRefIndex);
  if (0xfffe < this->MaxDeltaCompressedObjectCount) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxDeltaCompressedObjectCount < std::numeric_limits<ObjectInfoIndexType>::max()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineManager.cpp"
                       ,0x4e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FNetBitArray::Init(&this->UsedPerObjectInfos,this->MaxDeltaCompressedObjectCount + 1);
  pFVar1 = (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data;
  if ((this->UsedPerObjectInfos).BitCount == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2a2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(uint *)pFVar1 = *(uint *)pFVar1 | 1;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->ObjectIndexToObjectInfoIndex,param_1->MaxInternalNetRefIndex,Default);
  uVar5 = 1;
  if (1 < this->MaxConnectionCount) {
    uVar5 = this->MaxConnectionCount;
  }
  this->BytesPerObjectInfo = uVar5 * 0x20 + 0x18;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->BaselineCounts,this->MaxDeltaCompressedObjectCount + 1,Default);
  pFVar2 = param_1->ReplicationStateStorage;
  FNetBitArray::Init((FNetBitArray *)this,
                     this->MaxConnectionCount * param_1->MaxDeltaCompressedObjectCount * 2 + 1);
  pFVar1 = (this->BaselineStorage).UsedBaselineStateInfos.Storage.AllocatorInstance.Data;
  if ((this->BaselineStorage).UsedBaselineStateInfos.BitCount == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2a2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(uint *)pFVar1 = *(uint *)pFVar1 | 1;
  (this->BaselineStorage).ReplicationStateStorage = pFVar2;
  return;
}

// InvalidateBaselinesDueToModifiedConditionals @ 144243400

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::InvalidateBaselinesDueToModifiedConditionals
          (FDeltaCompressionBaselineManager *this)

{
  FNetBitArray *this_00;
  ushort uVar1;
  FReplicationConnections *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar9;
  uint uVar10;
  FPerObjectInfo *pFVar11;
  FInternalBaseline *pFVar12;
  ulonglong uVar13;
  uint *puVar14;
  FScriptContainerElement **ppFVar15;
  short sVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  bool bVar19;
  FNetBitArrayRangedForConstIterator local_a0;
  uint local_88 [2];
  undefined8 local_80;
  FScriptContainerElement *local_78;
  int local_70;
  FScriptContainerElement *local_68;
  FNetBitArrayRangedForConstIterator local_60;
  ulonglong uVar8;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId617,
               "DeltaCompressionBaselineManager_InvalidateBaselinesDueToModifiedConditionals",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineManager.cpp"
               ,0x269);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId617);
  }
  pFVar2 = this->Connections;
  uVar10 = (pFVar2->ValidConnections).Storage.ArrayNum;
  uVar13 = (ulonglong)uVar10;
  this_00 = &pFVar2->ValidConnections;
  do {
    if (uVar10 == 0) goto LAB_14424380a;
    uVar10 = (int)uVar13 - 1;
    uVar13 = (ulonglong)uVar10;
    uVar7 = *(uint *)((pFVar2->ValidConnections).Storage.AllocatorInstance.Data + uVar13 * 4);
  } while (uVar7 == 0);
  uVar13 = (ulonglong)uVar7 * 2 + 1;
  lVar4 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  if (uVar10 * 0x20 + (int)lVar4 != 0) {
    iVar9 = (this->BaselineInvalidationTracker->InvalidationInfos).ArrayNum;
    pFVar18 = (this->BaselineInvalidationTracker->InvalidationInfos).AllocatorInstance.Data;
    local_78 = pFVar18;
    if ((iVar9 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar17 = pFVar18 + (longlong)iVar9 * 8;
    local_68 = pFVar17;
    if (pFVar18 != pFVar17) {
      do {
        uVar10 = *(uint *)(pFVar18 + 4);
        uVar7 = 0;
        if ((int)uVar10 < (this->ObjectIndexToObjectInfoIndex).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar1 = *(ushort *)
                 ((this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data +
                 (longlong)(int)uVar10 * 2);
        if (uVar1 != 0) {
          uVar10 = (uint)uVar1;
          if (((this->BaselineCounts).ArrayNum <= (int)uVar10) &&
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
          if (*(short *)((this->BaselineCounts).AllocatorInstance.Data + (ulonglong)uVar10 * 2) != 0
             ) {
            sVar16 = 0;
            pFVar11 = (FPerObjectInfo *)
                      ((this->ObjectInfoStorage).AllocatorInstance.Data +
                      uVar10 * this->BytesPerObjectInfo);
            uVar10 = *(uint *)pFVar18;
            if (uVar10 == 0) {
              FNetBitArray::begin(this_00,&local_a0);
              FNetBitArray::end(this_00,&local_60);
              uVar13 = (ulonglong)local_a0.CurrentBitIndex;
              uVar10 = local_a0.CurrentWord;
LAB_144243625:
              uVar7 = (uint)uVar13;
              if ((local_a0.Data != local_60.Data) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("this->Data == It.Data",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                     ,0x6cb,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar17 = local_68;
              pFVar18 = local_78;
              if (uVar7 != local_60.CurrentBitIndex) {
                puVar14 = local_88;
                local_88[0] = 0;
                local_88[1] = 1;
                do {
                  pFVar12 = pFVar11->BaselinesForConnections[uVar13].Baselines + *puVar14;
                  if (pFVar12->BaselineStateInfoIndex != 0) {
                    sVar16 = sVar16 + -1;
                    ReleaseInternalBaseline(this,pFVar12);
                  }
                  puVar14 = puVar14 + 1;
                } while (puVar14 != local_88 + 2);
                uVar8 = uVar13 >> 5;
                while (uVar10 == 0) {
                  uVar7 = (int)uVar8 + 1;
                  uVar8 = (ulonglong)uVar7;
                  if (local_a0.WordCount <= uVar7) {
                    uVar13 = (ulonglong)local_a0.BitCount;
                    local_a0.CurrentBitIndex = local_a0.BitCount;
                    goto LAB_144243625;
                  }
                  uVar7 = (int)uVar13 + 0x20;
                  uVar13 = (ulonglong)uVar7;
                  uVar10 = local_a0.Data[uVar8];
                  local_a0.CurrentWord = uVar10;
                }
                local_70 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> local_70 & 1) == 0; local_70 = local_70 + 1) {
                  }
                }
                iVar9 = 0x20;
                if (uVar10 != 0) {
                  iVar9 = local_70;
                }
                uVar7 = iVar9 + (uVar7 & 0xffffffe0);
                local_a0.CurrentBitIndex = local_a0.BitCount;
                if (uVar7 < local_a0.BitCount) {
                  local_a0.CurrentBitIndex = uVar7;
                }
                uVar13 = (ulonglong)local_a0.CurrentBitIndex;
                uVar10 = uVar10 & uVar10 - 1;
                local_a0.CurrentWord = uVar10;
                goto LAB_144243625;
              }
            }
            else {
              pFVar3 = (this_00->Storage).AllocatorInstance.Data;
              if (((pFVar2->ValidConnections).BitCount <= uVar10) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index < BitCount",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                     ,0x2c1,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((*(uint *)(pFVar3 + (ulonglong)(uVar10 >> 5) * 4) >> (uVar10 & 0x1f) & 1) == 0)
              goto LAB_1442437cd;
              uVar10 = *(uint *)pFVar18;
              ppFVar15 = (FScriptContainerElement **)(local_88 + 2);
              local_80._0_4_ = 0;
              local_80._4_4_ = 1;
              do {
                pFVar12 = pFVar11->BaselinesForConnections[uVar10].Baselines + *(uint *)ppFVar15;
                if (pFVar12->BaselineStateInfoIndex != 0) {
                  sVar16 = sVar16 + -1;
                  ReleaseInternalBaseline(this,pFVar12);
                }
                ppFVar15 = (FScriptContainerElement **)((longlong)ppFVar15 + 4);
              } while (ppFVar15 != &local_78);
            }
            AdjustBaselineCount(this,pFVar11,uVar1,sVar16);
          }
        }
LAB_1442437cd:
        pFVar18 = pFVar18 + 8;
        local_78 = pFVar18;
      } while (pFVar18 != pFVar17);
    }
  }
LAB_14424380a:
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsAllowedToCreateBaselineForObject @ 1442439d0

bool __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::IsAllowedToCreateBaselineForObject
          (FDeltaCompressionBaselineManager *this,uint param_1,uint param_2,FPerObjectInfo *param_3,
          ushort param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->BaselineCounts).ArrayNum <= (int)(uint)param_4) {
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
  if (*(short *)((this->BaselineCounts).AllocatorInstance.Data + (ulonglong)param_4 * 2) != 0) {
    if (-1 < MinimumNumberOfFramesBetweenBaselines) {
      return (uint)MinimumNumberOfFramesBetweenBaselines <=
             this->FrameCounter - param_3->PrevBaselineCreationFrame;
    }
    return false;
  }
  return true;
}

// LostBaseline @ 144244340

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::LostBaseline
          (FDeltaCompressionBaselineManager *this,uint param_1,uint param_2,uint param_3)

{
  DestroyBaseline(this,param_1,param_2,param_3,Merge);
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 144246460

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::OnMaxInternalNetRefIndexIncreased
          (FDeltaCompressionBaselineManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  
  (this->DeltaCompressionEnabledObjects).BitCount = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->DeltaCompressionEnabledObjects).Storage,param_1 + 0x1f >> 5,No);
  uVar2 = (this->DeltaCompressionEnabledObjects).BitCount;
  if (uVar2 != 0) {
    pFVar1 = (this->DeltaCompressionEnabledObjects).Storage.AllocatorInstance.Data +
             (longlong)(this->DeltaCompressionEnabledObjects).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
  }
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->ObjectIndexToObjectInfoIndex,param_1,Default);
  return;
}

// PostSendUpdate @ 144247120

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::PostSendUpdate
          (FDeltaCompressionBaselineManager *this,
          FDeltaCompressionBaselineManagerPostSendUpdateParams *param_1)

{
  if (CpuChannel->Enabled < 0) {
    DestructBaselineSharingContext(this,&this->BaselineSharingContext);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId130,"DeltaCompressionBaselineManager_PostSendUpdate",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineManager.cpp"
             ,0x82);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId130);
  DestructBaselineSharingContext(this,&this->BaselineSharingContext);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// PreSendUpdate @ 144247510

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::PreSendUpdate
          (FDeltaCompressionBaselineManager *this,
          FDeltaCompressionBaselineManagerPreSendUpdateParams *param_1)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId115,"DeltaCompressionBaselineManager_PreSendUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineManager.cpp"
               ,0x73);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId115);
  }
  this->FrameCounter = this->FrameCounter + 1;
  UpdateScope(this);
  UpdateDirtyStateMasks(this,param_1->ChangeMaskCache);
  InvalidateBaselinesDueToModifiedConditionals(this);
  (this->BaselineSharingContext).CreatedBaselineCount = 0;
  FNetBitArray::Init(&(this->BaselineSharingContext).ObjectInfoIndicesWithNewBaseline,
                     (this->UsedPerObjectInfos).BitCount);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->BaselineSharingContext).ObjectInfoIndexToBaselineInfoIndex,
             (this->UsedPerObjectInfos).BitCount,Default);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PrintDeltaCompressionStatus @ 144248760

FString * __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::PrintDeltaCompressionStatus
          (FDeltaCompressionBaselineManager *this,FString *__return_storage_ptr__,uint param_1,
          uint param_2)

{
  FPerObjectInfo *pFVar1;
  
  pFVar1 = GetPerObjectInfoForObject(this,param_2);
  if (pFVar1 != (FPerObjectInfo *)0x0) {
    ::FString::PrintfImpl
              (__return_storage_ptr__,L"PrevBaselineCreationFrame: %u | ChangeMaskStride: %u");
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"No delta compression info for %u");
  return __return_storage_ptr__;
}

// ReleaseBaselinesForConnection @ 14424ce00

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::ReleaseBaselinesForConnection
          (FDeltaCompressionBaselineManager *this,uint param_1)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  ushort uVar7;
  FInternalBaseline *pFVar8;
  longlong lVar9;
  FScriptContainerElement **ppFVar10;
  uint uVar11;
  short sVar12;
  FPerObjectInfo *pFVar13;
  ushort uVar14;
  uint local_res8;
  undefined4 local_70;
  undefined4 local_6c;
  FScriptContainerElement *local_68;
  ForAnyElementType local_60;
  uint local_58;
  int local_54;
  uint local_50;
  
  local_58 = (this->UsedPerObjectInfos).Storage.ArrayNum;
  lVar9 = (longlong)(int)local_58;
  _Src = (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data;
  local_60.Data = (FScriptContainerElement *)0x0;
  if (local_58 == 0) {
    local_54 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_58,0,&local_60,local_58,&local_54);
    memcpy(local_60.Data,_Src,lVar9 << 2);
  }
  FVar6.Data = local_60.Data;
  local_50 = (this->UsedPerObjectInfos).BitCount;
  if ((local_50 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = local_58;
  *(uint *)FVar6.Data = *(uint *)FVar6.Data & 0xfffffffe;
  cVar3 = (char)local_50;
  uVar1 = local_58 - 1;
  uVar7 = 0;
  local_res8 = 0;
  FVar6.Data = local_60.Data;
  if (local_58 != 0) {
    do {
      uVar11 = 0xffffffff;
      if (local_res8 == uVar1) {
        uVar11 = 0xffffffff >> (-cVar3 & 0x1fU);
      }
      local_68 = FVar6.Data;
      uVar14 = uVar7;
      for (uVar11 = uVar11 & *(uint *)FVar6.Data; uVar11 != 0; uVar11 = uVar11 >> 1) {
        if ((uVar11 & 1) != 0) {
          sVar12 = 0;
          local_70 = 0;
          ppFVar10 = (FScriptContainerElement **)&local_70;
          local_6c = 1;
          pFVar13 = (FPerObjectInfo *)
                    ((this->ObjectInfoStorage).AllocatorInstance.Data +
                    (uint)uVar14 * this->BytesPerObjectInfo);
          do {
            pFVar8 = pFVar13->BaselinesForConnections[param_1].Baselines + *(uint *)ppFVar10;
            if (pFVar8->BaselineStateInfoIndex != 0) {
              ReleaseInternalBaseline(this,pFVar8);
              sVar12 = sVar12 + -1;
            }
            ppFVar10 = (FScriptContainerElement **)((longlong)ppFVar10 + 4);
          } while (ppFVar10 != &local_68);
          AdjustBaselineCount(this,pFVar13,uVar14,sVar12);
        }
        uVar14 = uVar14 + 1;
      }
      local_res8 = local_res8 + 1;
      local_68 = local_68 + 4;
      uVar7 = uVar7 + 0x20;
      FVar6.Data = local_68;
    } while (local_res8 < uVar4);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return;
}

// ReleaseInternalBaseline @ 14424d080

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::ReleaseInternalBaseline
          (FDeltaCompressionBaselineManager *this,FInternalBaseline *param_1)

{
  uint *puVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FInternalBaselineStateInfo *pFVar6;
  
  uVar2 = param_1->BaselineStateInfoIndex;
  pFVar3 = (this->BaselineStorage).UsedBaselineStateInfos.Storage.AllocatorInstance.Data;
  if ((this->BaselineStorage).UsedBaselineStateInfos.BitCount <= uVar2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((*(uint *)(pFVar3 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UsedBaselineStateInfos.GetBit(StateInfoIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                       ,0x51,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar6 = TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
           ::operator[](&(this->BaselineStorage).BaselineStateInfos,uVar2);
  if (pFVar6->RefCount == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InternalBaselineInfo->RefCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                       ,0x54,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar1 = &pFVar6->RefCount;
  *puVar1 = *puVar1 - 1;
  if (*puVar1 == 0) {
    FDeltaCompressionBaselineStorage::FreeBaselineStateInfo(&this->BaselineStorage,uVar2);
  }
  param_1->BaselineStateInfoIndex = 0;
  return;
}

// RemoveConnection @ 14424daa0

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::RemoveConnection
          (FDeltaCompressionBaselineManager *this,uint param_1)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  ushort uVar7;
  FInternalBaseline *pFVar8;
  longlong lVar9;
  FScriptContainerElement **ppFVar10;
  uint uVar11;
  short sVar12;
  FPerObjectInfo *pFVar13;
  ushort uVar14;
  uint uStackX_8;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *pFStack_68;
  ForAnyElementType FStack_60;
  uint uStack_58;
  int iStack_54;
  uint uStack_50;
  
  uStack_58 = (this->UsedPerObjectInfos).Storage.ArrayNum;
  lVar9 = (longlong)(int)uStack_58;
  _Src = (this->UsedPerObjectInfos).Storage.AllocatorInstance.Data;
  FStack_60.Data = (FScriptContainerElement *)0x0;
  if (uStack_58 == 0) {
    iStack_54 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uStack_58,0,&FStack_60,uStack_58,&iStack_54);
    memcpy(FStack_60.Data,_Src,lVar9 << 2);
  }
  FVar6.Data = FStack_60.Data;
  uStack_50 = (this->UsedPerObjectInfos).BitCount;
  if ((uStack_50 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = uStack_58;
  *(uint *)FVar6.Data = *(uint *)FVar6.Data & 0xfffffffe;
  cVar3 = (char)uStack_50;
  uVar1 = uStack_58 - 1;
  uVar7 = 0;
  uStackX_8 = 0;
  FVar6.Data = FStack_60.Data;
  if (uStack_58 != 0) {
    do {
      uVar11 = 0xffffffff;
      if (uStackX_8 == uVar1) {
        uVar11 = 0xffffffff >> (-cVar3 & 0x1fU);
      }
      pFStack_68 = FVar6.Data;
      uVar14 = uVar7;
      for (uVar11 = uVar11 & *(uint *)FVar6.Data; uVar11 != 0; uVar11 = uVar11 >> 1) {
        if ((uVar11 & 1) != 0) {
          sVar12 = 0;
          uStack_70 = 0;
          ppFVar10 = (FScriptContainerElement **)&uStack_70;
          uStack_6c = 1;
          pFVar13 = (FPerObjectInfo *)
                    ((this->ObjectInfoStorage).AllocatorInstance.Data +
                    (uint)uVar14 * this->BytesPerObjectInfo);
          do {
            pFVar8 = pFVar13->BaselinesForConnections[param_1].Baselines + *(uint *)ppFVar10;
            if (pFVar8->BaselineStateInfoIndex != 0) {
              ReleaseInternalBaseline(this,pFVar8);
              sVar12 = sVar12 + -1;
            }
            ppFVar10 = (FScriptContainerElement **)((longlong)ppFVar10 + 4);
          } while (ppFVar10 != &pFStack_68);
          AdjustBaselineCount(this,pFVar13,uVar14,sVar12);
        }
        uVar14 = uVar14 + 1;
      }
      uStackX_8 = uStackX_8 + 1;
      pFStack_68 = pFStack_68 + 4;
      uVar7 = uVar7 + 0x20;
      FVar6.Data = pFStack_68;
    } while (uStackX_8 < uVar4);
  }
  if (FStack_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_60.Data);
  }
  return;
}

// SetDeltaCompressionStatus @ 1442516c0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::SetDeltaCompressionStatus
          (FDeltaCompressionBaselineManager *this,uint param_1,
          ENetObjectDeltaCompressionStatus param_2)

{
  FReplicatedObjectData *pFVar1;
  bool bVar2;
  
  if ((param_2 == Allow) && (bIsDeltaCompressionEnabled)) {
    pFVar1 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this->NetRefHandleManager,param_1)
    ;
    if ((pFVar1->Protocol->ProtocolTraits & SupportsDeltaCompression) != None) {
      bVar2 = true;
      goto LAB_1442516fd;
    }
  }
  bVar2 = false;
LAB_1442516fd:
  FNetBitArrayHelper::SetBitValue
            ((uint *)(this->DeltaCompressionEnabledObjects).Storage.AllocatorInstance.Data,
             (this->DeltaCompressionEnabledObjects).BitCount,param_1,bVar2);
  return;
}

// UpdateDirtyStateMasks @ 144257260

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::UpdateDirtyStateMasks
          (FDeltaCompressionBaselineManager *this,FChangeMaskCache *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  uint *puVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo> FVar8;
  longlong lVar9;
  code *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ForElementType<unsigned_int> FVar29;
  FNetBitArray *this_00;
  bool bVar30;
  ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo> local_res10;
  undefined1 local_res20 [8];
  FNetBitArrayRangedForConstIterator local_a8;
  int *local_90;
  int local_88;
  int local_84;
  longlong local_80;
  FNetBitArray *local_78;
  ForElementType<unsigned_int> local_70;
  FNetBitArrayRangedForConstIterator local_68;
  
  bVar30 = -1 < CpuChannel->Enabled;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId229,"DeltaCompressionBaselineManager_UpdateDirtyStateMasks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineManager.cpp"
               ,0xe5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId229);
  }
  iVar6 = (param_1->Indices).ArrayNum;
  if (0 < iVar6) {
    this_00 = &this->Connections->ValidConnections;
    uVar24 = (this->Connections->ValidConnections).Storage.ArrayNum;
    uVar25 = (ulonglong)uVar24;
    do {
      local_78 = this_00;
      if (uVar24 == 0) goto LAB_14425771d;
      uVar24 = (int)uVar25 - 1;
      uVar25 = (ulonglong)uVar24;
      uVar16 = *(uint *)((this_00->Storage).AllocatorInstance.Data + uVar25 * 4);
    } while (uVar16 == 0);
    uVar25 = (ulonglong)uVar16 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_88 = (int)lVar9;
    if (uVar24 * 0x20 + local_88 != 0) {
      local_90 = &(param_1->Indices).ArrayNum;
      iVar7 = (param_1->Indices).ArrayNum;
      FVar8 = (param_1->Indices).AllocatorInstance.SecondaryData;
      FVar29 = (param_1->Storage).AllocatorInstance.SecondaryData;
      if (FVar29 == (ForElementType<unsigned_int>)0x0) {
        FVar29 = (ForElementType<unsigned_int>)&param_1->Storage;
      }
      if (FVar8 != (ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>)0x0) {
        param_1 = (FChangeMaskCache *)FVar8;
      }
      local_res10 = (ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>)param_1;
      local_70 = FVar29;
      while( true ) {
        if (*local_90 != iVar7) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<UE::Net::Private::FChangeMaskCache::FCachedInfo_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (local_res10 ==
            (ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>)
            ((longlong)param_1 + (longlong)iVar6 * 8)) break;
        if ((*(uint *)((longlong)local_res10 + 4) & 0x2000000) != 0) {
          uVar24 = *(uint *)local_res10;
          pFVar21 = (this->DeltaCompressionEnabledObjects).Storage.AllocatorInstance.Data;
          if (((this->DeltaCompressionEnabledObjects).BitCount <= uVar24) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < BitCount",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                  ,0x2c1,L""), bVar15)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if ((*(uint *)(pFVar21 + (ulonglong)(uVar24 >> 5) * 4) >> (uVar24 & 0x1f) & 1) != 0) {
            uVar24 = *(uint *)local_res10;
            uVar16 = 0;
            if ((int)uVar24 < (this->ObjectIndexToObjectInfoIndex).ArrayNum) {
              uVar16 = ~uVar24 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar5 = *(ushort *)
                     ((this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data +
                     (longlong)(int)uVar24 * 2);
            if ((uVar5 != 0) &&
               (pFVar21 = (this->ObjectInfoStorage).AllocatorInstance.Data +
                          (uint)uVar5 * this->BytesPerObjectInfo,
               pFVar21 != (FScriptContainerElement *)0x0)) {
              local_80 = *(longlong *)pFVar21;
              uVar5 = *(ushort *)(pFVar21 + 0x10);
              uVar25 = (longlong)FVar29 +
                       (ulonglong)(*(uint *)((longlong)local_res10 + 4) & 0xffffff) * 4;
              FNetBitArray::begin(this_00,&local_a8);
              FNetBitArray::end(this_00,&local_68);
              lVar9 = local_80;
              uVar14 = local_a8.WordCount;
              uVar16 = local_a8.BitCount;
              puVar13 = local_a8.Data;
              uVar24 = local_a8.CurrentWord;
LAB_1442574f0:
              uVar27 = local_a8.CurrentBitIndex;
              if ((puVar13 != local_68.Data) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("this->Data == It.Data",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                      ,0x6cb,L""), bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              FVar29 = local_70;
              this_00 = local_78;
              if (uVar27 != local_68.CurrentBitIndex) {
                uVar23 = lVar9 + (ulonglong)(uVar27 * uVar5) * 4;
                uVar19 = 0;
                uVar18 = (uint)uVar5;
                if (uVar5 != 0) {
                  uVar26 = (uint)uVar5;
                  if ((1 < uVar18) &&
                     ((uVar25 + (ulonglong)(uVar5 - 1) * 4 < uVar23 ||
                      (uVar23 + (ulonglong)(uVar5 - 1) * 4 < uVar25)))) {
                    if (uVar18 < 0x10) {
LAB_144257611:
                      do {
                        *(ulonglong *)(uVar23 + uVar19 * 4) =
                             *(ulonglong *)(uVar25 + uVar19 * 4) |
                             *(ulonglong *)(uVar23 + uVar19 * 4);
                        uVar18 = (int)uVar19 + 2;
                        uVar19 = (ulonglong)uVar18;
                      } while (uVar18 != (uVar26 & 0xfffffffe));
                    }
                    else {
                      uVar28 = 8;
                      do {
                        puVar1 = (ulonglong *)(uVar23 + uVar19 * 4);
                        uVar11 = puVar1[1];
                        uVar22 = (ulonglong)(uVar28 - 4);
                        puVar2 = (ulonglong *)(uVar25 + uVar19 * 4);
                        uVar12 = puVar2[1];
                        puVar3 = (ulonglong *)(uVar23 + uVar19 * 4);
                        *puVar3 = *puVar2 | *puVar1;
                        puVar3[1] = uVar12 | uVar11;
                        uVar17 = (int)uVar19 + 0x10;
                        uVar19 = (ulonglong)uVar17;
                        puVar1 = (ulonglong *)(uVar23 + uVar22 * 4);
                        uVar11 = puVar1[1];
                        puVar2 = (ulonglong *)(uVar25 + uVar22 * 4);
                        uVar12 = puVar2[1];
                        puVar3 = (ulonglong *)(uVar23 + uVar22 * 4);
                        *puVar3 = *puVar2 | *puVar1;
                        puVar3[1] = uVar12 | uVar11;
                        uVar22 = (ulonglong)uVar28;
                        puVar1 = (ulonglong *)(uVar23 + uVar22 * 4);
                        uVar11 = puVar1[1];
                        puVar2 = (ulonglong *)(uVar25 + uVar22 * 4);
                        uVar12 = puVar2[1];
                        puVar3 = (ulonglong *)(uVar23 + uVar22 * 4);
                        *puVar3 = *puVar2 | *puVar1;
                        puVar3[1] = uVar12 | uVar11;
                        uVar22 = (ulonglong)(uVar28 + 4);
                        uVar28 = uVar28 + 0x10;
                        puVar1 = (ulonglong *)(uVar23 + uVar22 * 4);
                        uVar11 = puVar1[1];
                        puVar2 = (ulonglong *)(uVar25 + uVar22 * 4);
                        uVar12 = puVar2[1];
                        puVar3 = (ulonglong *)(uVar23 + uVar22 * 4);
                        *puVar3 = *puVar2 | *puVar1;
                        puVar3[1] = uVar12 | uVar11;
                      } while (uVar17 != uVar26 - (uVar18 & 0xf));
                      if (1 < (uVar18 & 0xf)) goto LAB_144257611;
                    }
                    if ((uint)uVar19 == uVar26) goto LAB_144257650;
                  }
                  do {
                    puVar4 = (uint *)(uVar23 + uVar19 * 4);
                    *puVar4 = *puVar4 | *(uint *)(uVar25 + uVar19 * 4);
                    uVar18 = (int)uVar19 + 1;
                    uVar19 = (ulonglong)uVar18;
                  } while (uVar18 != uVar26);
                }
LAB_144257650:
                uVar23 = (ulonglong)(uVar27 >> 5);
                while (uVar24 == 0) {
                  uVar18 = (int)uVar23 + 1;
                  uVar23 = (ulonglong)uVar18;
                  if (uVar14 <= uVar18) {
                    local_a8.CurrentBitIndex = uVar16;
                    goto LAB_1442574f0;
                  }
                  uVar27 = uVar27 + 0x20;
                  uVar24 = puVar13[uVar23];
                  local_a8.CurrentWord = uVar24;
                }
                local_84 = 0;
                if (uVar24 != 0) {
                  for (; (uVar24 >> local_84 & 1) == 0; local_84 = local_84 + 1) {
                  }
                }
                iVar20 = 0x20;
                if (uVar24 != 0) {
                  iVar20 = local_84;
                }
                uVar27 = iVar20 + (uVar27 & 0xffffffe0);
                local_a8.CurrentBitIndex = uVar16;
                if (uVar27 < uVar16) {
                  local_a8.CurrentBitIndex = uVar27;
                }
                uVar24 = uVar24 & uVar24 - 1;
                local_a8.CurrentWord = uVar24;
                goto LAB_1442574f0;
              }
            }
          }
        }
        local_res10 = (ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>)
                      ((longlong)local_res10 + 8);
      }
    }
  }
LAB_14425771d:
  if (bVar30) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateScope @ 14425b990

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineManager::UpdateScope
          (FDeltaCompressionBaselineManager *this)

{
  FNetRefHandleManager *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  FReplicatedObjectData *pFVar7;
  void *_Dst;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  uint local_res10;
  FNetBitArrayView local_68;
  FNetBitArrayView local_58;
  int iVar12;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId161,"DeltaCompressionBaselineManager_UpdateScope",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineManager.cpp"
               ,0xa1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId161);
  }
  pFVar1 = this->NetRefHandleManager;
  if (((pFVar1->ScopeFrameData).bIsValid == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScopeFrameData.bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                         ,0xef,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FNetBitArrayView::FNetBitArrayView
            (&local_68,
             (uint *)(pFVar1->ScopeFrameData).CurrentFrameScopableInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar1->ScopeFrameData).CurrentFrameScopableInternalIndices.BitCount);
  pFVar1 = this->NetRefHandleManager;
  if (((pFVar1->ScopeFrameData).bIsValid == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScopeFrameData.bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.h"
                         ,0xf2,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FNetBitArrayView::FNetBitArrayView
            (&local_58,
             (uint *)(pFVar1->ScopeFrameData).PrevFrameScopableInternalIndices.Storage.
                     AllocatorInstance.Data,
             (pFVar1->ScopeFrameData).PrevFrameScopableInternalIndices.BitCount);
  uVar13 = 0;
  pFVar2 = (this->DeltaCompressionEnabledObjects).Storage.AllocatorInstance.Data;
  local_res10 = 0;
  if (local_68.WordCount != 0) {
    do {
      uVar11 = (uint)uVar13;
      uVar9 = local_68.Storage[uVar13];
      uVar10 = local_58.Storage[uVar13];
      uVar8 = *(uint *)(pFVar2 + uVar13 * 4);
      uVar16 = (uVar10 ^ uVar9) & uVar8;
      if (uVar8 != 0) {
        iVar15 = uVar11 * 0x20;
        *(uint *)(pFVar2 + uVar13 * 4) = uVar8 & uVar9;
        uVar10 = uVar16 & uVar10;
        while (uVar10 != 0) {
          uVar8 = -uVar10 & uVar10;
          uVar10 = uVar10 & uVar10 - 1;
          iVar3 = 0;
          if (uVar8 != 0) {
            for (; (uVar8 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
            }
          }
          iVar12 = 0x20;
          if (uVar8 != 0) {
            iVar12 = iVar3;
          }
          uVar11 = iVar12 + iVar15;
          uVar8 = 0;
          if ((int)uVar11 < (this->ObjectIndexToObjectInfoIndex).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
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
          pFVar14 = (this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data;
          uVar6 = *(ushort *)(pFVar14 + (longlong)(int)uVar11 * 2);
          pFVar14 = pFVar14 + (longlong)(int)uVar11 * 2;
          uVar11 = local_res10;
          if (uVar6 != 0) {
            if (((this->BaselineCounts).ArrayNum <= (int)(uint)uVar6) &&
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
            if (*(short *)((this->BaselineCounts).AllocatorInstance.Data + (ulonglong)uVar6 * 2) ==
                0) {
              FreePerObjectInfo(this,*(ushort *)pFVar14);
              *(ushort *)pFVar14 = 0;
            }
          }
        }
        uVar16 = uVar16 & uVar9;
joined_r0x00014425bc35:
        do {
          if (uVar16 == 0) break;
          uVar9 = -uVar16 & uVar16;
          uVar16 = uVar16 & uVar16 - 1;
          iVar3 = 0;
          if (uVar9 != 0) {
            for (; (uVar9 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
            }
          }
          iVar12 = 0x20;
          if (uVar9 != 0) {
            iVar12 = iVar3;
          }
          uVar9 = iVar12 + iVar15;
          uVar6 = AllocPerObjectInfo(this);
          *(ushort *)
           ((this->ObjectIndexToObjectInfoIndex).AllocatorInstance.Data + (ulonglong)uVar9 * 2) =
               uVar6;
          uVar11 = local_res10;
          if (uVar6 != 0) {
            pFVar14 = (this->ObjectInfoStorage).AllocatorInstance.Data +
                      (uint)uVar6 * this->BytesPerObjectInfo;
            *(uint *)(pFVar14 + 8) = uVar9;
            pFVar7 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                               (this->NetRefHandleManager,uVar9);
            uVar9 = pFVar7->Protocol->ChangeMaskBitCount + 0x1f;
            uVar10 = uVar9 >> 5;
            if (uVar10 < 0x10000) {
              if (uVar9 >> 5 == 0) goto joined_r0x00014425bc35;
            }
            else {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ChangeMaskStride < 65536U",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineManager.cpp"
                                 ,0x125,L"");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            uVar9 = uVar10 * this->MaxConnectionCount * 0xc;
            _Dst = FMemory::Malloc((ulonglong)uVar9,4);
            memset(_Dst,0,(ulonglong)uVar9);
            *(short *)(pFVar14 + 0x10) = (short)uVar10;
            *(void **)pFVar14 = _Dst;
          }
        } while( true );
      }
      local_res10 = uVar11 + 1;
      uVar13 = (ulonglong)local_res10;
    } while (local_res10 != local_68.WordCount);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    NetTraceNameId_224 = CreatePersistentNetDebugName(L"ReplicationSystem.ObjectWithDC",0x1e);
    _Init_thread_footer(&::_TSS0);
  }
  uVar9 = FNetBitArrayHelper::CountSetBits
                    ((uint *)(this->DeltaCompressionEnabledObjects).Storage.AllocatorInstance.Data,
                     (this->DeltaCompressionEnabledObjects).BitCount,0,0xffffffff);
  uVar10 = FNetTrace::TraceName(NetTraceNameId_224);
  FNetTrace::TraceFrameStatsCounter(this->ReplicationSystem->Id,uVar10,uVar9);
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

