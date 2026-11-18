// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralMeshComponent
// Functions: 3

// Call @ 14d26a6a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UProceduralMeshComponent::SetMeshSectionVisible'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  lVar3 = *(longlong *)param_1;
  uVar1 = *(undefined1 *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)((longlong)param_1 + 8);
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\ProceduralMeshComponent.cpp"
                         ,300,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)uVar2 < *(int *)(lVar3 + 0x288)) {
    if (((int)uVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(longlong *)(*(longlong *)(lVar3 + 0x280) + (longlong)(int)uVar2 * 8) != 0) {
      uVar6 = 0;
      if ((int)uVar2 < *(int *)(lVar3 + 0x288)) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined1 *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x280) + (longlong)(int)uVar2 * 8) + 0x3d0) = uVar1;
    }
  }
  return;
}

// Call @ 14d26a6b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UProceduralMeshComponent::UpdateMeshSection'::__l49::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FProceduralMeshSceneProxy::UpdateSection_RenderThread
            (*(FProceduralMeshSceneProxy **)param_1,(FRHICommandListBase *)param_2,
             *(FProcMeshSectionUpdateData **)((longlong)param_1 + 8));
  return;
}

// Call @ 14d26a6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FProceduralMeshSceneProxy::FProceduralMeshSceneProxy'::__l15::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FScriptContainerElement *pFVar1;
  FRHIBuffer *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FRHIBuffer *this;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStackY_198 [32];
  FRayTracingGeometrySegment FStack_148;
  FRayTracingGeometryInitializer FStack_120;
  FRHIBuffer *pFStack_a8;
  undefined8 uStack_a0;
  uint uStack_98;
  undefined4 uStack_94;
  ERayTracingGeometryInitializerType EStack_90;
  ForAnyElementType FStack_88;
  undefined8 uStack_80;
  FResourceArrayUploadInterface *pFStack_78;
  uint auStack_70 [6];
  FRHIRayTracingGeometry *pFStack_58;
  FDebugName FStack_50;
  FName FStack_44;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uStack_94 = 0x10000;
  pFStack_a8 = (FRHIBuffer *)0x0;
  uStack_a0 = 0;
  uStack_98 = 0;
  EStack_90 = Rendering;
  FStack_88.Data = (FScriptContainerElement *)0x0;
  uStack_80 = 0;
  pFStack_78 = (FResourceArrayUploadInterface *)0x0;
  pFStack_58 = (FRHIRayTracingGeometry *)0x0;
  auStack_70[0] = 0xffffffff;
  auStack_70[1] = 0xffffffff;
  auStack_70[2] = 0xffffffff;
  auStack_70[3] = 0xffffffff;
  auStack_70[4] = 0xffffffff;
  auStack_70[5] = 0xffffffff;
  FDebugName::FDebugName(&FStack_50);
  FStack_44.ComparisonIndex.Value = 0;
  FStack_44.Number = 0;
  FDebugName::operator=(&FStack_50,*(FName *)((longlong)param_1 + 8));
  this = pFStack_a8;
  pFVar2 = *(FRHIBuffer **)(*(longlong *)((longlong)param_1 + 0x10) + 0x180);
  if (pFStack_a8 != pFVar2) {
    pFStack_a8 = pFVar2;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    if (this != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this);
    }
  }
  iVar7 = *(int *)(*(longlong *)((longlong)param_1 + 0x10) + 400);
  uStack_a0 = uStack_a0 & 0xffffffff;
  uStack_94 = CONCAT22(uStack_94._2_2_,1);
  uStack_98 = iVar7 / 3 + (iVar7 >> 0x1f) +
              (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f);
  FStack_148.VertexBuffer.Reference = (FRHIBuffer *)0x0;
  FStack_148.VertexBufferElementType = VET_Float3;
  FStack_148.VertexBufferOffset = 0;
  FStack_148.VertexBufferStride = 0xc;
  FStack_148.FirstPrimitive = 0;
  FStack_148.bForceOpaque = false;
  FStack_148.bAllowDuplicateAnyHitShaderInvocation = true;
  FStack_148.bEnabled = true;
  pFVar2 = *(FRHIBuffer **)(*(longlong *)((longlong)param_1 + 0x10) + 0xe0);
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FStack_148.VertexBuffer.Reference = pFVar2;
    FRHIResource::AddRef((FRHIResource *)pFVar2);
  }
  FStack_148.MaxVertices = *(uint *)(*(longlong *)((longlong)param_1 + 0x10) + 0x104);
  FStack_148.NumPrimitives = uStack_98;
  if (((FStack_88.Data <= &FStack_148) &&
      (&FStack_148 <
       (FRayTracingGeometrySegment *)(FStack_88.Data + (longlong)uStack_80._4_4_ * 0x28))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (int)uStack_80;
  if ((int)uStack_80 == uStack_80._4_4_) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&FStack_88,(int *)((longlong)&uStack_80 + 4));
  }
  uStack_80 = CONCAT44(uStack_80._4_4_,iVar7 + 1);
  pFVar1 = FStack_88.Data + (longlong)iVar7 * 0x28;
  *(undefined8 *)&pFVar1->field_0x0 = 0;
  *(FRHIBuffer **)&pFVar1->field_0x0 = FStack_148.VertexBuffer.Reference;
  if (FStack_148.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)FStack_148.VertexBuffer.Reference);
  }
  *(EVertexElementType *)(pFVar1 + 8) = FStack_148.VertexBufferElementType;
  *(uint *)(pFVar1 + 0xc) = FStack_148.VertexBufferOffset;
  *(uint *)(pFVar1 + 0x10) = FStack_148.VertexBufferStride;
  *(uint *)(pFVar1 + 0x14) = FStack_148.MaxVertices;
  *(uint *)(pFVar1 + 0x18) = FStack_148.FirstPrimitive;
  *(uint *)(pFVar1 + 0x1c) = FStack_148.NumPrimitives;
  pFVar1[0x20] = (FScriptContainerElement)FStack_148.bForceOpaque;
  pFVar1[0x21] = (FScriptContainerElement)FStack_148.bAllowDuplicateAnyHitShaderInvocation;
  pFVar1[0x22] = (FScriptContainerElement)FStack_148.bEnabled;
  lVar3 = *(longlong *)((longlong)param_1 + 0x10);
  FStack_120.IndexBuffer.Reference = pFStack_a8;
  if (pFStack_a8 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFStack_a8);
  }
  FVar5.Data = FStack_88.Data;
  iVar7 = (int)uStack_80;
  FStack_120.IndexBufferOffset = (uint)uStack_a0;
  FStack_120.GeometryType = uStack_a0._4_4_;
  FStack_120.TotalPrimitiveCount = uStack_98;
  FStack_120.bFastBuild = (bool)(undefined1)uStack_94;
  FStack_120.bAllowUpdate = (bool)uStack_94._1_1_;
  FStack_120.bAllowCompaction = (bool)uStack_94._2_1_;
  FStack_120.bTemplate = (bool)uStack_94._3_1_;
  FStack_120.Type = EStack_90;
  FStack_120.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_120.Segments.ArrayNum = (int)uStack_80;
  if ((int)uStack_80 == 0) {
    FStack_120.Segments.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(int)uStack_80,0,&FStack_120.Segments.AllocatorInstance,(int)uStack_80,
               &FStack_120.Segments.ArrayMax);
    ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
              (FStack_120.Segments.AllocatorInstance.Data,(FRayTracingGeometrySegment *)FVar5.Data,
               iVar7);
  }
  FStack_120.OfflineData = pFStack_78;
  FStack_120.SourceGeometry = pFStack_58;
  FStack_120.DebugName.Number = FStack_50.Number;
  FStack_120.OfflineDataHeader.Reserved[0] = auStack_70[0];
  FStack_120.OfflineDataHeader.Reserved[1] = auStack_70[1];
  FStack_120.OfflineDataHeader.Reserved[2] = auStack_70[2];
  FStack_120.OfflineDataHeader.Reserved[3] = auStack_70[3];
  FStack_120.OwnerName = FStack_44;
  FStack_120.OfflineDataHeader.Reserved[4] = auStack_70[4];
  FStack_120.OfflineDataHeader.Reserved[5] = auStack_70[5];
  FStack_120.DebugName.Name = FStack_50.Name;
  FRayTracingGeometry::SetInitializer((FRayTracingGeometry *)(lVar3 + 0x3d8),&FStack_120);
  plVar8 = (longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x3d8);
  (**(code **)(*plVar8 + 0x18))(plVar8,param_2);
  if (FStack_148.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)FStack_148.VertexBuffer.Reference);
  }
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)FStack_88.Data,(int)uStack_80);
  if ((FRayTracingGeometrySegment *)FStack_88.Data != (FRayTracingGeometrySegment *)0x0) {
    FMemory::Free(FStack_88.Data);
  }
  if (pFStack_a8 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFStack_a8);
  }
  return;
}

