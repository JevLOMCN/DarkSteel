// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FStreamingInfo @ 148712120

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FStreamingInfo * __thiscall
UE::SVT::FStreamingManager::FStreamingInfo::FStreamingInfo(FStreamingInfo *this)

{
  this->SVTHandle = 0xffff;
  (this->SVTName).ComparisonIndex = 0;
  (this->SVTName).Number = 0;
  this->FormatA = PF_Unknown;
  this->FormatB = PF_Unknown;
  this->PrefetchPercentageStepSize = 0.0;
  this->PrefetchPercentageBias = 0.0;
  (this->PerFrameInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerFrameInfo).ArrayNum = 0;
  (this->PerFrameInfo).ArrayMax = 0;
  (this->StreamingInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingInstances).ArrayNum = 0;
  (this->StreamingInstances).ArrayMax = 0;
  (this->MipLevelStreamingSize).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  *(undefined8 *)&(this->FallbackValueA).field0_0x0 = 0;
  (this->FallbackValueA).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->FallbackValueB).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->FallbackValueA).field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->FallbackValueB).field0_0x0 + 0xc) = 0x3f800000;
  (this->MipLevelStreamingSize).ArrayNum = 0;
  *(undefined8 *)&(this->MipLevelStreamingSize).ArrayMax = 0x10;
  (this->TileAllocator).FreeHeap.HeapSize = 0;
  (this->TileAllocator).FreeHeap.IndexSize = 0;
  (this->TileAllocator).FreeHeap.Heap = (uint *)0x0;
  (this->TileAllocator).FreeHeap.Keys = (ulong64 *)0x0;
  (this->TileAllocator).FreeHeap.HeapIndexes = (uint *)0x0;
  (this->TileAllocator).Allocations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileAllocator).Allocations.ArrayNum = 0;
  (this->TileAllocator).Allocations.ArrayMax = 0;
  *(undefined8 *)&(this->TileAllocator).ResolutionInTiles.field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->TileAllocator).ResolutionInTiles.field0_0x0._s_0.Z =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  (this->TileAllocator).TileCapacity = 0;
  (this->TileAllocator).NumAllocated = 0;
  (this->TileDataTexture).Ptr = (FTileDataTexture *)0x0;
  return this;
}

// GetAllocatedSize @ 148738740

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ulong64 __thiscall
UE::SVT::FStreamingManager::FStreamingInfo::GetAllocatedSize(FStreamingInfo *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PerFrameInfo).ArrayNum;
  lVar5 = 0;
  pFVar4 = (this->PerFrameInfo).AllocatorInstance.Data;
  pFVar6 = pFVar4 + (longlong)iVar1 * 0x100;
  lVar7 = lVar5;
  while( true ) {
    if ((this->PerFrameInfo).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::SVT::FStreamingManager::FFrameInfo_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar6) break;
    lVar3 = (longlong)*(int *)(pFVar4 + 0x24);
    if (1 < *(uint *)(pFVar4 + 0xf0)) {
      lVar3 = (int)*(uint *)(pFVar4 + 0xf0) + lVar3;
    }
    lVar7 = lVar7 + (ulonglong)((*(int *)(pFVar4 + 0x44) + 0x1fU >> 5) << 2) +
            (ulonglong)((*(int *)(pFVar4 + 0xd4) + 0x1fU >> 5) << 2) +
            (lVar3 + (longlong)*(int *)(pFVar4 + 0xb4) * 4) * 4 +
            (ulonglong)((*(int *)(pFVar4 + 0xa4) + 0x1fU >> 5) << 2) +
            (ulonglong)((*(int *)(pFVar4 + 0x84) + 0x1fU >> 5) << 2) +
            (ulonglong)((*(int *)(pFVar4 + 100) + 0x1fU >> 5) << 2);
    pFVar4 = pFVar4 + 0x100;
  }
  uVar2 = (this->MipLevelStreamingSize).ArrayMax;
  if (0x10 < uVar2) {
    lVar5 = (longlong)(int)uVar2 << 2;
  }
  return lVar7 + ((longlong)(this->PerFrameInfo).ArrayMax * 0x20 +
                  (longlong)(this->StreamingInstances).ArrayNum * 0xb +
                 (longlong)(this->StreamingInstances).ArrayMax) * 8 +
         ((ulonglong)(this->TileAllocator).FreeHeap.IndexSize * 3 +
          ((longlong)(this->TileAllocator).Allocations.ArrayMax + 0x10) * 2 +
         (ulonglong)(this->TileAllocator).FreeHeap.HeapSize) * 4 + lVar5;
}

// GetAndUpdateStreamingInstance @ 148738b80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FStreamingInstance * __thiscall
UE::SVT::FStreamingManager::FStreamingInfo::GetAndUpdateStreamingInstance
          (FStreamingInfo *this,ulong64 param_1,FStreamingInstanceRequest *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  FStreamingInstance *pFVar9;
  FStreamingInstance *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  float fVar13;
  float fVar14;
  undefined1 local_res8 [8];
  TArrayView<unsigned_int,int> local_68 [4];
  
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_322bcc77;
  pFVar12 = (this->StreamingInstances).AllocatorInstance.Data;
  iVar3 = (this->StreamingInstances).ArrayNum;
  pFVar2 = pFVar12 + (longlong)iVar3 * 8;
  do {
    if ((this->StreamingInstances).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::SVT::FStreamingInstance,TDefaultDelete<UE::SVT::FStreamingInstance>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar2) goto LAB_148738c5d;
    fVar14 = param_2->FrameIndex;
    if (0.0 <= fVar14) {
      iVar4 = *(int *)(*(longlong *)pFVar12 + 0x14);
      if (fVar14 < (float)iVar4) {
        fVar13 = FStreamingInstance::GetShortestWrappedDistance
                           (*(float *)(*(longlong *)pFVar12 + 0x38),fVar14,iVar4);
        fVar14 = GSVTStreamingInstanceWindowSize;
        if (GSVTStreamingInstanceWindowSize <= fVar6) {
          fVar14 = fVar6;
        }
        if (((float)((uint)fVar13 & uVar8) <= fVar14) &&
           (pFVar9 = *(FStreamingInstance **)pFVar12, param_1 == pFVar9->Key)) {
          FStreamingInstance::AddRequest(pFVar9,param_2);
          if (pFVar9 == (FStreamingInstance *)0x0) {
LAB_148738c5d:
            local_68[0].DataPtr =
                 *(uint **)&(this->MipLevelStreamingSize).AllocatorInstance.SecondaryData;
            iVar3 = (this->MipLevelStreamingSize).ArrayNum;
            if ((ForElementType<unsigned_int>)local_68[0].DataPtr ==
                (ForElementType<unsigned_int>)0x0) {
              local_68[0].DataPtr = (uint *)&this->MipLevelStreamingSize;
            }
            if ((iVar3 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              pFVar9 = (FStreamingInstance *)(*pcVar5)();
              return pFVar9;
            }
            iVar4 = (this->PerFrameInfo).ArrayNum;
            local_68[0].ArrayNum = iVar3;
            pFVar9 = ::operator_new(0x58);
            pFVar10 = (FStreamingInstance *)0x0;
            if (pFVar9 != (FStreamingInstance *)0x0) {
              pFVar10 = FStreamingInstance::FStreamingInstance
                                  (pFVar9,(uint)param_1,iVar4,local_68,param_2);
            }
            uVar8 = (this->StreamingInstances).ArrayNum;
            piVar1 = &(this->StreamingInstances).ArrayMax;
            if (uVar8 == *piVar1) {
              uVar8 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&(this->StreamingInstances).AllocatorInstance,piVar1);
            }
            (this->StreamingInstances).ArrayNum = uVar8 + 1;
            *(FStreamingInstance **)
             ((this->StreamingInstances).AllocatorInstance.Data + (longlong)(int)uVar8 * 8) =
                 pFVar10;
            uVar11 = 0;
            if ((int)uVar8 < (this->StreamingInstances).ArrayNum) {
              uVar11 = ~uVar8 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              pFVar9 = (FStreamingInstance *)(*pcVar5)();
              return pFVar9;
            }
            pFVar9 = *(FStreamingInstance **)
                      ((this->StreamingInstances).AllocatorInstance.Data + (longlong)(int)uVar8 * 8)
            ;
            ::operator_delete((void *)0x0,0x58);
          }
          return pFVar9;
        }
      }
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

