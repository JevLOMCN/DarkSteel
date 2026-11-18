// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CableComponent
// Functions: 4

// Call @ 14f0157d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::TSTR_FSendCableDynamicData1251>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014f01581d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}

// Call @ 14f015830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FCableSceneProxy::FCableSceneProxy'::__l2::TSTR_InitCableResources119>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014f01587d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}

// Call @ 14f015890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCableSceneProxy::FCableSceneProxy'::__l2::<lambda_1>,void,FRHICommandList_&>::
Call(void *param_1,FRHICommandList *param_2)

{
  FScriptContainerElement *pFVar1;
  FCableSceneProxy *this;
  longlong lVar2;
  FRHIResource *this_00;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [8];
  FRayTracingGeometryInitializer FStack_120;
  FRayTracingGeometryInitializer FStack_a8;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x3e0) + 0x18))();
  this = *(FCableSceneProxy **)param_1;
  if (this->bSupportRayTracing) {
    FCableSceneProxy::CreateRayTracingGeometry_RenderingThread
              (this,&this->StaticRayTracingGeometry,(FRHICommandListBase *)param_2);
    *(byte *)(*(longlong *)param_1 + 0x658) = *(byte *)(*(longlong *)param_1 + 0x658) | 4;
    lVar2 = *(longlong *)param_1;
    if ((*(byte *)(lVar2 + 0x658) & 2) != 0) {
      FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
                (&FStack_a8,(FRayTracingGeometryInitializer *)(lVar2 + 0x6d0));
      iVar3 = FStack_a8.Segments.ArrayNum;
      pFVar1 = FStack_a8.Segments.AllocatorInstance.Data +
               (longlong)FStack_a8.Segments.ArrayNum * 0x28;
      FVar4.Data = FStack_a8.Segments.AllocatorInstance.Data;
      while( true ) {
        if (FStack_a8.Segments.ArrayNum != iVar3) {
          `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(auStack_128);
        }
        if (FVar4.Data == pFVar1) break;
        this_00 = *(FRHIResource **)FVar4.Data;
        if (this_00 != (FRHIResource *)0x0) {
          *(undefined8 *)FVar4.Data = 0;
          FRHIResource::Release(this_00);
        }
        FVar4.Data = FVar4.Data + 0x28;
      }
      FStack_120.IndexBuffer.Reference = FStack_a8.IndexBuffer.Reference;
      FStack_120.IndexBufferOffset = FStack_a8.IndexBufferOffset;
      FStack_120.GeometryType = FStack_a8.GeometryType;
      FStack_120.TotalPrimitiveCount = FStack_a8.TotalPrimitiveCount;
      FStack_120.bAllowCompaction = FStack_a8.bAllowCompaction;
      FStack_120.bTemplate = FStack_a8.bTemplate;
      FStack_120.Segments.AllocatorInstance.Data = FStack_a8.Segments.AllocatorInstance.Data;
      FStack_120.Segments.ArrayNum = FStack_a8.Segments.ArrayNum;
      FStack_120.Segments.ArrayMax = FStack_a8.Segments.ArrayMax;
      FStack_120.OfflineData = FStack_a8.OfflineData;
      FStack_120.SourceGeometry = FStack_a8.SourceGeometry;
      FStack_120.DebugName.Number = FStack_a8.DebugName.Number;
      FStack_120.OfflineDataHeader.Reserved[0] = FStack_a8.OfflineDataHeader.Reserved[0];
      FStack_120.OfflineDataHeader.Reserved[1] = FStack_a8.OfflineDataHeader.Reserved[1];
      FStack_120.OfflineDataHeader.Reserved[2] = FStack_a8.OfflineDataHeader.Reserved[2];
      FStack_120.OfflineDataHeader.Reserved[3] = FStack_a8.OfflineDataHeader.Reserved[3];
      FStack_120.OwnerName = FStack_a8.OwnerName;
      FStack_a8.bFastBuild = true;
      FStack_a8.bAllowUpdate = true;
      FStack_a8.Type = Rendering;
      FStack_a8.IndexBuffer.Reference = (FRHIBuffer *)0x0;
      FStack_120.bFastBuild = true;
      FStack_120.bAllowUpdate = true;
      FStack_120.Type = Rendering;
      FStack_a8.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_a8.Segments.ArrayNum = 0;
      FStack_a8.Segments.ArrayMax = 0;
      FStack_120.OfflineDataHeader.Reserved[4] = FStack_a8.OfflineDataHeader.Reserved[4];
      FStack_120.OfflineDataHeader.Reserved[5] = FStack_a8.OfflineDataHeader.Reserved[5];
      FStack_120.DebugName.Name = FStack_a8.DebugName.Name;
      FRayTracingGeometry::SetInitializer((FRayTracingGeometry *)(lVar2 + 0x760),&FStack_120);
      (**(code **)(*(longlong *)(lVar2 + 0x760) + 0x18))(lVar2 + 0x760,param_2);
      DestructItems<FRayTracingGeometrySegment,int>
                ((FRayTracingGeometrySegment *)FStack_a8.Segments.AllocatorInstance.Data,
                 FStack_a8.Segments.ArrayNum);
      if ((FRayTracingGeometrySegment *)FStack_a8.Segments.AllocatorInstance.Data !=
          (FRayTracingGeometrySegment *)0x0) {
        FMemory::Free(FStack_a8.Segments.AllocatorInstance.Data);
      }
      if (FStack_a8.IndexBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)FStack_a8.IndexBuffer.Reference);
      }
    }
  }
  return;
}

// Call @ 14f0158a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCableComponent::SendRenderDynamicData_Concurrent'::__l5::<lambda_1>,void,FRHICommandList_&>
::Call(void *param_1,FRHICommandList *param_2)

{
  EGeometryStateFlags *pEVar1;
  FCableDynamicData *pFVar2;
  FCableSceneProxy *this;
  FScriptContainerElement *pFVar3;
  
  pFVar2 = *(FCableDynamicData **)((longlong)param_1 + 8);
  this = *(FCableSceneProxy **)param_1;
  if (pFVar2 != (FCableDynamicData *)0x0) {
    FCableSceneProxy::BuildCableMesh(this,(FRHICommandListBase *)param_2,pFVar2);
    if ((int)(this->StaticRayTracingGeometry)._padding_ != -1) {
      pEVar1 = &(this->StaticRayTracingGeometry).GeometryState;
      *pEVar1 = *pEVar1 | RequiresBuild;
      this->bNeedsToUpdateRayTracingCache = true;
    }
    pFVar3 = (pFVar2->CablePoints).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar2,0x10);
  }
  return;
}

