// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// FSkeletalMeshRenderData @ 148622010

FSkeletalMeshRenderData * __thiscall
FSkeletalMeshRenderData::FSkeletalMeshRenderData(FSkeletalMeshRenderData *this)

{
  (this->LODRenderData).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODRenderData).Array.ArrayNum = 0;
  (this->LODRenderData).Array.ArrayMax = 0;
  this->bReadyForStreaming = false;
  this->NumInlinedLODs = '\0';
  this->NumNonOptionalLODs = '\0';
  this->CurrentFirstLODIdx = '\0';
  this->PendingFirstLODIdx = '\0';
  this->LODBiasModifier = '\0';
  (this->NaniteResourcesPtr).Ptr = (FResources *)0x0;
  this->bSupportRayTracing = true;
  (this->OwnerName).ComparisonIndex = 0;
  (this->OwnerName).Number = 0;
  this->RayTracingGeometryGroupHandle = -1;
  this->bInitialized = false;
  ClearNaniteResources(&this->NaniteResourcesPtr);
  return this;
}

// ~FSkeletalMeshRenderData @ 148625300

void __thiscall FSkeletalMeshRenderData::~FSkeletalMeshRenderData(FSkeletalMeshRenderData *this)

{
  int *piVar1;
  FResources *pFVar2;
  undefined8 *puVar3;
  uint uVar4;
  FScriptContainerElement *pFVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined8 *puVar5;
  
  FRenderResource::SetScopeName((FName)local_res8);
  iVar7 = (this->LODRenderData).Array.ArrayNum;
  pFVar6 = (this->LODRenderData).Array.AllocatorInstance.Data;
  puVar5 = (undefined8 *)0x0;
  if (0 < iVar7) {
    do {
      puVar3 = *(undefined8 **)pFVar6;
      piVar1 = (int *)(puVar3 + 1);
      LOCK();
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        if (piVar1 == (int *)0x0) {
          puVar3 = (undefined8 *)0x0;
        }
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      *(longlong *)pFVar6 = 0;
      uVar4 = (int)puVar5 + 1;
      puVar5 = (undefined8 *)(ulonglong)uVar4;
      iVar7 = (this->LODRenderData).Array.ArrayNum;
      pFVar6 = pFVar6 + 8;
    } while ((int)uVar4 < iVar7);
  }
  pFVar6 = (this->LODRenderData).Array.AllocatorInstance.Data;
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar5 = *(undefined8 **)pFVar6;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    pFVar6 = pFVar6 + 8;
  }
  piVar1 = &(this->LODRenderData).Array.ArrayMax;
  (this->LODRenderData).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  FRenderResource::SetScopeName((FName)local_res8);
  pFVar2 = (this->NaniteResourcesPtr).Ptr;
  if (pFVar2 != (FResources *)0x0) {
    (**(code **)&pFVar2[-1].NumHierarchyDwords)(&pFVar2[-1].NumHierarchyDwords);
  }
  pFVar6 = (this->LODRenderData).Array.AllocatorInstance.Data;
  for (iVar7 = (this->LODRenderData).Array.ArrayNum; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar5 = *(undefined8 **)pFVar6;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    pFVar6 = pFVar6 + 8;
  }
  (this->LODRenderData).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar6 = (this->LODRenderData).Array.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return;
}

// operator() @ 148628b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
`FSkeletalMeshRenderData::InitStaticRayTracingGeometry'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FRHIBuffer *pFVar3;
  longlong *plVar4;
  FRayTracingGeometry *this_00;
  code *pcVar5;
  longlong lVar6;
  int iVar7;
  ForAnyElementType FVar8;
  TRefCountPtr<FRHIBuffer> this_01;
  bool bVar9;
  FDebugName *pFVar10;
  FRayTracingGeometryInitializer *pFVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [8];
  ForAnyElementType local_170;
  int local_168;
  int iStack_164;
  FRayTracingGeometrySegment local_160;
  FDebugName local_138;
  FRayTracingGeometryInitializer local_128;
  FRayTracingGeometryInitializer local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_b8.bFastBuild = false;
  local_b8.bAllowUpdate = false;
  local_b8.bAllowCompaction = true;
  local_b8.bTemplate = false;
  local_b8.IndexBuffer.Reference = (FRHIBuffer *)0x0;
  local_b8.IndexBufferOffset = 0;
  local_b8.GeometryType = RTGT_Triangles;
  local_b8.TotalPrimitiveCount = 0;
  local_b8.Type = Rendering;
  local_b8.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Segments.ArrayNum = 0;
  local_b8.Segments.ArrayMax = 0;
  local_b8.OfflineData = (FResourceArrayUploadInterface *)0x0;
  local_b8.SourceGeometry = (FRHIRayTracingGeometry *)0x0;
  local_b8.OfflineDataHeader.Reserved[0] = 0xffffffff;
  local_b8.OfflineDataHeader.Reserved[1] = 0xffffffff;
  local_b8.OfflineDataHeader.Reserved[2] = 0xffffffff;
  local_b8.OfflineDataHeader.Reserved[3] = 0xffffffff;
  local_b8.OfflineDataHeader.Reserved[4] = 0xffffffff;
  local_b8.OfflineDataHeader.Reserved[5] = 0xffffffff;
  FDebugName::FDebugName(&local_b8.DebugName);
  local_b8.OwnerName.ComparisonIndex.Value = 0;
  local_b8.OwnerName.Number = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::DebugName,"FSkeletalMeshLODRenderData_Static");
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar7 = DebugNumber;
  DebugNumber = DebugNumber + 1;
  pFVar10 = FDebugName::FDebugName(&local_138,::DebugName,iVar7);
  this_01.Reference = local_b8.IndexBuffer.Reference;
  local_b8.DebugName.Name = pFVar10->Name;
  local_b8.DebugName.Number = pFVar10->Number;
  pFVar3 = *(FRHIBuffer **)(*(longlong *)((longlong)this + 8) + 0x20);
  if (local_b8.IndexBuffer.Reference != pFVar3) {
    local_b8.IndexBuffer.Reference = pFVar3;
    if (pFVar3 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar3);
    }
    if (this_01.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01.Reference);
    }
  }
  local_b8.TotalPrimitiveCount = *(uint *)((longlong)this + 0x10);
  local_b8._8_8_ = local_b8._8_8_ & 0xffffffff;
  local_b8._20_4_ = local_b8._20_4_ & 0xffffff00;
  local_170.Data = (FScriptContainerElement *)0x0;
  local_168 = 0;
  iStack_164 = 0;
  uVar2 = *(uint *)(*(longlong *)((longlong)this + 0x18) + 8);
  if (-1 < (int)uVar2) {
    if (0 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar2,&local_170,0,&iStack_164);
    }
    plVar4 = *(longlong **)((longlong)this + 0x18);
    lVar6 = plVar4[1];
    lVar13 = *plVar4;
    lVar14 = (longlong)(int)lVar6 * 0x118 + lVar13;
    while( true ) {
      if ((int)plVar4[1] != (int)lVar6) {
        local_178[0] = 0;
        `TCheckedPointerIterator<FSkelMeshRenderSection,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_178);
      }
      if (lVar13 == lVar14) break;
      local_160.VertexBuffer.Reference = (FRHIBuffer *)0x0;
      local_160.VertexBufferElementType = VET_Float3;
      local_160.VertexBufferOffset = 0;
      local_160.VertexBufferStride = 0xc;
      local_160.MaxVertices = 0;
      local_160.FirstPrimitive = 0;
      local_160.NumPrimitives = 0;
      local_160.bForceOpaque = false;
      local_160.bAllowDuplicateAnyHitShaderInvocation = true;
      local_160.bEnabled = true;
      pFVar3 = *(FRHIBuffer **)(*(longlong *)this + 0x20);
      if (pFVar3 != (FRHIBuffer *)0x0) {
        local_160.VertexBuffer.Reference = pFVar3;
        FRHIResource::AddRef((FRHIResource *)pFVar3);
      }
      local_160.VertexBufferElementType = VET_Float3;
      local_160.VertexBufferOffset = 0;
      local_160._16_8_ = *(undefined8 *)(*(longlong *)this + 0x40);
      local_160.NumPrimitives = *(uint *)(lVar13 + 8);
      local_160.FirstPrimitive = *(uint *)(lVar13 + 4) / 3;
      if ((*(char *)(lVar13 + 0x110) != '\0') ||
         (local_160.bEnabled = true, *(char *)(lVar13 + 0xe) == '\0')) {
        local_160.bEnabled = false;
      }
      if ((local_170.Data <= &local_160) &&
         (&local_160 < (FRayTracingGeometrySegment *)(local_170.Data + (longlong)iStack_164 * 0x28))
         ) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (local_168 == iStack_164) {
        local_168 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&local_170,&iStack_164);
      }
      lVar12 = (longlong)local_168;
      local_168 = local_168 + 1;
      *(undefined8 *)&local_170.Data[lVar12 * 0x28].field_0x0 = 0;
      pFVar1 = local_170.Data + lVar12 * 0x28;
      *(FRHIBuffer **)&pFVar1->field_0x0 = local_160.VertexBuffer.Reference;
      if (local_160.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_160.VertexBuffer.Reference);
      }
      *(EVertexElementType *)(pFVar1 + 8) = local_160.VertexBufferElementType;
      *(uint *)(pFVar1 + 0xc) = local_160.VertexBufferOffset;
      *(uint *)(pFVar1 + 0x10) = local_160.VertexBufferStride;
      *(uint *)(pFVar1 + 0x14) = local_160.MaxVertices;
      *(uint *)(pFVar1 + 0x18) = local_160.FirstPrimitive;
      *(uint *)(pFVar1 + 0x1c) = local_160.NumPrimitives;
      pFVar1[0x20] = (FScriptContainerElement)local_160.bForceOpaque;
      pFVar1[0x21] = (FScriptContainerElement)local_160.bAllowDuplicateAnyHitShaderInvocation;
      pFVar1[0x22] = (FScriptContainerElement)local_160.bEnabled;
      if (local_160.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_160.VertexBuffer.Reference);
      }
      lVar13 = lVar13 + 0x118;
    }
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)local_b8.Segments.AllocatorInstance.Data,
               local_b8.Segments.ArrayNum);
    iVar7 = local_168;
    FVar8.Data = local_170.Data;
    local_b8.Segments.ArrayNum = local_168;
    if ((local_168 == 0) && (local_b8.Segments.ArrayMax == 0)) {
      local_b8.Segments.ArrayNum = 0;
      local_b8.Segments.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_168,local_b8.Segments.ArrayMax,&local_b8.Segments.AllocatorInstance,
                 local_168,&local_b8.Segments.ArrayMax);
      ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                (local_b8.Segments.AllocatorInstance.Data,(FRayTracingGeometrySegment *)FVar8.Data,
                 iVar7);
    }
    if (*(int *)((longlong)this + 0x20) <
        (int)(uint)*(byte *)(*(longlong *)((longlong)this + 0x28) + 0x1b)) {
      local_b8.Type = StreamingDestination;
    }
    local_b8.SourceGeometry =
         *(FRHIRayTracingGeometry **)(*(longlong *)((longlong)this + 0x38) + 0xe8);
    *(undefined4 *)(*(longlong *)((longlong)this + 0x30) + 0xe0) =
         *(undefined4 *)(*(longlong *)((longlong)this + 0x28) + 0x28);
    *(undefined1 *)(*(longlong *)((longlong)this + 0x30) + 0xe4) =
         *(undefined1 *)((longlong)this + 0x20);
    this_00 = *(FRayTracingGeometry **)((longlong)this + 0x30);
    pFVar11 = FRayTracingGeometryInitializer::FRayTracingGeometryInitializer(&local_128,&local_b8);
    FRayTracingGeometry::SetInitializer(this_00,pFVar11);
    (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x18))
              (*(longlong **)((longlong)this + 0x30),param_1);
    **(undefined1 **)((longlong)this + 0x40) = 1;
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)local_170.Data,local_168);
    if ((FRayTracingGeometrySegment *)local_170.Data != (FRayTracingGeometrySegment *)0x0) {
      FMemory::Free(local_170.Data);
    }
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)local_b8.Segments.AllocatorInstance.Data,
               local_b8.Segments.ArrayNum);
    if ((FRayTracingGeometrySegment *)local_b8.Segments.AllocatorInstance.Data !=
        (FRayTracingGeometrySegment *)0x0) {
      FMemory::Free(local_b8.Segments.AllocatorInstance.Data);
    }
    if (local_b8.IndexBuffer.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_b8.IndexBuffer.Reference);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// AnyRenderSectionCastsShadows @ 14862f0c0

bool __thiscall
FSkeletalMeshRenderData::AnyRenderSectionCastsShadows(FSkeletalMeshRenderData *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 local_res10 [8];
  
  iVar10 = (this->LODRenderData).Array.ArrayNum;
  uVar9 = (ulonglong)param_1;
  if (param_1 < iVar10) {
    lVar11 = uVar9 * 8;
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar10) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      lVar1 = *(longlong *)((this->LODRenderData).Array.AllocatorInstance.Data + lVar11);
      iVar10 = *(int *)(lVar1 + 0x18);
      lVar6 = *(longlong *)(lVar1 + 0x10);
      lVar7 = (longlong)iVar10 * 0x118 + lVar6;
      while( true ) {
        if (*(int *)(lVar1 + 0x18) != iVar10) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FSkelMeshRenderSection_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (lVar6 == lVar7) break;
        if (*(char *)(lVar6 + 0xd) != '\0') {
          return true;
        }
        lVar6 = lVar6 + 0x118;
      }
      iVar10 = (this->LODRenderData).Array.ArrayNum;
      uVar9 = (ulonglong)(uVar8 + 1);
      lVar11 = lVar11 + 8;
    } while ((int)(uVar8 + 1) < iVar10);
  }
  return false;
}

// GetCPUAccessMemoryOverhead @ 148645bc0

ulong64 __thiscall
FSkeletalMeshRenderData::GetCPUAccessMemoryOverhead(FSkeletalMeshRenderData *this)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  
  iVar8 = (this->LODRenderData).Array.ArrayNum;
  uVar10 = 0;
  uVar17 = 0;
  if (0 < iVar8) {
    lVar16 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar17 < iVar8) {
        uVar9 = ~uVar17 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return uVar10;
      }
      lVar15 = 0;
      lVar3 = *(longlong *)((this->LODRenderData).Array.AllocatorInstance.Data + lVar16);
      plVar4 = *(longlong **)(lVar3 + 0x28);
      if (plVar4 != (longlong *)0x0) {
        cVar7 = (**(code **)(*plVar4 + 0x48))(plVar4);
        if (cVar7 == '\0') {
          iVar8 = 0;
        }
        else {
          iVar8 = (**(code **)(*plVar4 + 0x88))(plVar4);
        }
        lVar15 = (longlong)iVar8;
      }
      if ((((*(longlong **)(lVar3 + 0xa0) == (longlong *)0x0) || (*(longlong *)(lVar3 + 0xb0) == 0))
          || (cVar7 = (**(code **)(**(longlong **)(lVar3 + 0xa0) + 0x58))(), cVar7 == '\0')) ||
         (cVar7 = (**(code **)(**(longlong **)(lVar3 + 0xb0) + 0x58))(), cVar7 == '\0')) {
        uVar11 = 0;
      }
      else {
        uVar11 = (ulonglong)
                 (uint)((*(int *)(lVar3 + 0xd8) * *(int *)(lVar3 + 0xd4) + *(int *)(lVar3 + 0xd0)) *
                       *(int *)(lVar3 + 0xdc));
      }
      bVar6 = FPositionVertexBuffer::GetAllowCPUAccess((FPositionVertexBuffer *)(lVar3 + 0xe8));
      if (bVar6) {
        uVar12 = (ulonglong)(uint)(*(int *)(lVar3 + 300) * *(int *)(lVar3 + 0x128));
      }
      else {
        uVar12 = 0;
      }
      bVar6 = FColorVertexBuffer::GetAllowCPUAccess((FColorVertexBuffer *)(lVar3 + 0x138));
      if (bVar6) {
        uVar9 = FColorVertexBuffer::GetAllocatedSize((FColorVertexBuffer *)(lVar3 + 0x138));
      }
      else {
        uVar9 = 0;
      }
      if (*(char *)(lVar3 + 0x1b8) == '\0') {
        uVar14 = 0;
      }
      else {
        uVar14 = (ulonglong)
                 (((uint)(*(char *)(lVar3 + 0x1c1) != '\0') + (*(char *)(lVar3 + 0x1c0) != '\0') + 2
                  ) * *(int *)(lVar3 + 0x1dc) + *(int *)(lVar3 + 0x228) * 4);
      }
      iVar1 = *(int *)(lVar3 + 0x284);
      iVar2 = *(int *)(lVar3 + 0x280);
      uVar13 = FSkinWeightProfilesData::GetCPUAccessMemoryOverhead
                         ((FSkinWeightProfilesData *)(lVar3 + 0x328));
      iVar8 = (this->LODRenderData).Array.ArrayNum;
      uVar17 = uVar17 + 1;
      uVar10 = uVar10 + uVar14 + (ulonglong)(uint)(iVar1 * iVar2) +
                                 lVar15 + uVar11 + uVar12 + (ulonglong)uVar9 + uVar13;
      lVar16 = lVar16 + 8;
    } while ((int)uVar17 < iVar8);
  }
  return uVar10;
}

// GetFirstValidLODIdx @ 14864b040

int __thiscall
FSkeletalMeshRenderData::GetFirstValidLODIdx(FSkeletalMeshRenderData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->LODRenderData).Array.ArrayNum;
  if (iVar4 == 0) {
    return -1;
  }
  uVar3 = iVar4 - 1U;
  if (param_1 < (int)(iVar4 - 1U)) {
    uVar3 = param_1;
  }
  uVar5 = 0;
  if (0 < (int)uVar3) {
    uVar5 = uVar3;
  }
  if ((int)uVar5 < iVar4) {
    lVar6 = (longlong)(int)uVar5;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->LODRenderData).Array.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(int *)(*(longlong *)((this->LODRenderData).Array.AllocatorInstance.Data + lVar6 * 8) +
                  300) != 0) break;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  uVar3 = 0xffffffff;
  if ((int)uVar5 < iVar4) {
    uVar3 = uVar5;
  }
  return uVar3;
}

// GetMaxBonesPerSection @ 14864b4f0

int __thiscall
FSkeletalMeshRenderData::GetMaxBonesPerSection(FSkeletalMeshRenderData *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  iVar4 = (this->LODRenderData).Array.ArrayNum;
  iVar7 = 0;
  uVar10 = (ulonglong)param_1;
  if (param_1 < iVar4) {
    lVar11 = uVar10 * 8;
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < iVar4) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      uVar6 = 0;
      lVar1 = *(longlong *)((this->LODRenderData).Array.AllocatorInstance.Data + lVar11);
      if (0 < *(int *)(lVar1 + 0x18)) {
        lVar8 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar6 < *(int *)(lVar1 + 0x18)) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
          iVar4 = *(int *)(lVar8 + 0x40 + *(longlong *)(lVar1 + 0x10));
          if (iVar4 < iVar7) {
            iVar4 = iVar7;
          }
          iVar7 = iVar4;
          uVar6 = uVar6 + 1;
          lVar8 = lVar8 + 0x118;
        } while ((int)uVar6 < *(int *)(lVar1 + 0x18));
      }
      iVar4 = (this->LODRenderData).Array.ArrayNum;
      uVar10 = (ulonglong)(uVar9 + 1);
      lVar11 = lVar11 + 8;
    } while ((int)(uVar9 + 1) < iVar4);
  }
  return iVar7;
}

// GetMaxBonesPerSection @ 14864b640

int __thiscall FSkeletalMeshRenderData::GetMaxBonesPerSection(FSkeletalMeshRenderData *this)

{
  int iVar1;
  
  iVar1 = GetMaxBonesPerSection(this,0);
  return iVar1;
}

// GetNumBoneInfluences @ 14864c150

uint __thiscall
FSkeletalMeshRenderData::GetNumBoneInfluences(FSkeletalMeshRenderData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar7 = (ulonglong)param_1;
  uVar4 = 0;
  iVar5 = (this->LODRenderData).Array.ArrayNum;
  if (param_1 < iVar5) {
    lVar8 = uVar7 * 8;
    do {
      uVar6 = (uint)uVar7;
      uVar3 = 0;
      if ((int)uVar6 < iVar5) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar3 = *(uint *)(*(longlong *)((this->LODRenderData).Array.AllocatorInstance.Data + lVar8) +
                       0x1bc);
      if (uVar3 < uVar4) {
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
      uVar7 = (ulonglong)(uVar6 + 1);
      lVar8 = lVar8 + 8;
      iVar5 = (this->LODRenderData).Array.ArrayNum;
    } while ((int)(uVar6 + 1) < iVar5);
  }
  return uVar4;
}

// GetNumBoneInfluences @ 14864c210

uint __thiscall FSkeletalMeshRenderData::GetNumBoneInfluences(FSkeletalMeshRenderData *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar5 = (this->LODRenderData).Array.ArrayNum;
  uVar4 = 0;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < iVar5) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar3 = *(uint *)(*(longlong *)((this->LODRenderData).Array.AllocatorInstance.Data + lVar7) +
                       0x1bc);
      if (uVar3 < uVar4) {
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
      iVar5 = (this->LODRenderData).Array.ArrayNum;
    } while ((int)uVar6 < iVar5);
  }
  return uVar4;
}

// GetNumNonOptionalLODs @ 14864c2c0

/* WARNING: Type propagation algorithm not settling */

int __thiscall FSkeletalMeshRenderData::GetNumNonOptionalLODs(FSkeletalMeshRenderData *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = 0;
  uVar5 = (this->LODRenderData).Array.ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 8;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->LODRenderData).Array.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if ((*(byte *)(*(longlong *)((this->LODRenderData).Array.AllocatorInstance.Data + lVar6) +
                    0x658) & 1) == 0) {
        uVar3 = 0;
        if ((int)uVar5 < (this->LODRenderData).Array.ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        if ((*(byte *)(*(longlong *)((this->LODRenderData).Array.AllocatorInstance.Data + lVar6) +
                      0x658) & 2) != 0) break;
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  if ((this->LODRenderData).Array.ArrayNum == 0) {
    return 0;
  }
  return 1;
}

// GetNumNonStreamingLODs @ 14864c400

/* WARNING: Type propagation algorithm not settling */

int __thiscall FSkeletalMeshRenderData::GetNumNonStreamingLODs(FSkeletalMeshRenderData *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = 0;
  uVar5 = (this->LODRenderData).Array.ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 8;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->LODRenderData).Array.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if ((*(byte *)(*(longlong *)((this->LODRenderData).Array.AllocatorInstance.Data + lVar6) +
                    0x658) & 1) == 0) break;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  if ((this->LODRenderData).Array.ArrayNum == 0) {
    return 0;
  }
  return 1;
}

// GetPendingFirstLOD @ 14864c6a0

FSkeletalMeshLODRenderData * __thiscall
FSkeletalMeshRenderData::GetPendingFirstLOD(FSkeletalMeshRenderData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSkeletalMeshLODRenderData *pFVar4;
  uint uVar5;
  
  if (param_1 < (int)(uint)this->PendingFirstLODIdx) {
    param_1 = (uint)this->PendingFirstLODIdx;
  }
  uVar3 = GetFirstValidLODIdx(this,param_1);
  if (uVar3 == 0xffffffff) {
    return (FSkeletalMeshLODRenderData *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->LODRenderData).Array.ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSkeletalMeshLODRenderData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSkeletalMeshLODRenderData **)
          ((this->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
}

// GetResourceSizeEx @ 14864d930

void __thiscall
FSkeletalMeshRenderData::GetResourceSizeEx(FSkeletalMeshRenderData *this,FResourceSizeEx *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = (this->LODRenderData).Array.ArrayNum;
  uVar4 = 0;
  if (0 < iVar6) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < iVar6) {
        uVar3 = ~uVar4 >> 0x1f;
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
      FSkeletalMeshLODRenderData::GetResourceSizeEx
                (*(FSkeletalMeshLODRenderData **)
                  ((this->LODRenderData).Array.AllocatorInstance.Data + lVar5),param_1);
      iVar6 = (this->LODRenderData).Array.ArrayNum;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < iVar6);
  }
  GetNaniteResourcesSizeEx(&this->NaniteResourcesPtr,param_1);
  return;
}

// HasValidNaniteData @ 148651ad0

bool __thiscall FSkeletalMeshRenderData::HasValidNaniteData(FSkeletalMeshRenderData *this)

{
  return 0 < (((this->NaniteResourcesPtr).Ptr)->PageStreamingStates).ArrayNum;
}

// InitResources @ 148657900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkeletalMeshRenderData::InitResources
          (FSkeletalMeshRenderData *this,bool param_1,USkinnedAsset *param_2)

{
  FSkeletalMeshLODRenderData *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined ***pppuVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined4 local_8c;
  code *local_88 [2];
  undefined **local_78;
  FSkeletalMeshRenderData *local_70;
  int local_68;
  undefined4 local_64;
  undefined ***local_60;
  code *local_58 [2];
  undefined **local_48;
  FSkeletalMeshRenderData *local_40;
  USkinnedAsset *local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (this->bInitialized == false) {
    bVar2 = IsRayTracingAllowed();
    if (bVar2) {
      local_60 = (undefined ***)0x0;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FSkeletalMeshRenderData::InitResources'::`8'::<lambda_1>,1,0>
                  ::_vftable_;
      local_68 = (this->LODRenderData).Array.ArrayNum;
      local_64 = local_8c;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSkeletalMeshRenderData::InitResources'::__l8::<lambda_1>,void>
                    ::Call;
      local_70 = this;
      FRenderCommandDispatcher::
      Enqueue<TRenderCommandTag<_FSkeletalMeshRenderData::InitResources_::__l8::TSTR_SkeletalMeshInitRayTracingGeometryGroup636>_>
                (&UE::RenderCommandPipe::SkeletalMesh,
                 (TUniqueFunction<void___cdecl(void)> *)local_88);
      if (local_88[0] != (code *)0x0) {
        pppuVar4 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar4 = local_60;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    iVar5 = (this->LODRenderData).Array.ArrayNum;
    uVar6 = 0;
    if (0 < iVar5) {
      lVar7 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar6 < iVar5) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if (uVar3 == 0) {
          local_a0 = (longlong)iVar5;
          local_a8 = (longlong)(int)uVar6;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        this_00 = *(FSkeletalMeshLODRenderData **)
                   ((this->LODRenderData).Array.AllocatorInstance.Data + lVar7);
        if ((this_00->StaticVertexBuffers).PositionVertexBuffer.NumVertices != 0) {
          FSkeletalMeshLODRenderData::InitResources(this_00,param_1,uVar6,param_2);
        }
        iVar5 = (this->LODRenderData).Array.ArrayNum;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < iVar5);
    }
    if (((this->NaniteResourcesPtr).Ptr == (FResources *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NaniteResourcesPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshRenderData.cpp"
                           ,0x28f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    Nanite::FResources::InitResources((this->NaniteResourcesPtr).Ptr,(UObject *)param_2);
    local_30 = (undefined ***)0x0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FSkeletalMeshRenderData::InitResources'::`5'::<lambda_2>,1,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkeletalMeshRenderData::InitResources'::__l5::<lambda_2>,void>
                  ::Call;
    local_40 = this;
    local_38 = param_2;
    FRenderCommandDispatcher::
    Enqueue<TRenderCommandTag<_FSkeletalMeshRenderData::InitResources_::__l5::TSTR_CmdSetSkeletalMeshReadyForStreaming658>_>
              (&UE::RenderCommandPipe::SkeletalMesh,(TUniqueFunction<void___cdecl(void)> *)local_58)
    ;
    if (local_58[0] != (code *)0x0) {
      pppuVar4 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar4 = local_30;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    this->bInitialized = true;
  }
  return;
}

// InitStaticRayTracingGeometry @ 148657b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkeletalMeshRenderData::InitStaticRayTracingGeometry(FSkeletalMeshRenderData *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  code **ppcVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  code *local_c8;
  code *pcStack_c0;
  int local_b8;
  undefined4 uStack_b4;
  code *pcStack_b0;
  int local_a8;
  undefined4 uStack_a4;
  FSkeletalMeshRenderData *pFStack_a0;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  iVar6 = (this->LODRenderData).Array.ArrayNum;
  uVar8 = 0;
  if (param_1 < iVar6) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (local_d8 = (longlong)param_1, local_d0 = (longlong)iVar6,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)((this->LODRenderData).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
  if (*(int *)(lVar1 + 0x65c) == 0) {
    if ((*(longlong *)(lVar1 + 0x28) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                           ,0x51,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = *(code **)(lVar1 + 0x28);
    iVar6 = 0;
    uVar8 = 0;
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar8 < *(int *)(lVar1 + 0x18)) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          local_d8 = (longlong)(int)uVar8;
          local_d0 = (longlong)*(int *)(lVar1 + 0x18);
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar8 = uVar8 + 1;
        iVar6 = iVar6 + *(int *)(lVar7 + 8 + *(longlong *)(lVar1 + 0x10));
        lVar7 = lVar7 + 0x118;
      } while ((int)uVar8 < *(int *)(lVar1 + 0x18));
    }
    pcStack_b0 = (code *)(lVar1 + 0x10);
    local_98 = (code *)(lVar1 + 0x668);
    pcStack_90 = (code *)(lVar1 + 0x530);
    local_88 = (code *)(lVar1 + 0x660);
    local_78[0] = (code *)0x0;
    local_c8 = (code *)(lVar1 + 0xe8);
    pcStack_c0 = pcVar2;
    local_b8 = iVar6;
    local_a8 = param_1;
    pFStack_a0 = this;
    local_50 = FMemory::Malloc(0x50,8);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FSkeletalMeshRenderData::InitStaticRayTracingGeometry'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_50[1] = local_c8;
    local_50[2] = pcStack_c0;
    local_50[3] = (code *)CONCAT44(uStack_b4,local_b8);
    local_50[4] = pcStack_b0;
    local_50[5] = (code *)CONCAT44(uStack_a4,local_a8);
    local_50[6] = (code *)pFStack_a0;
    local_50[7] = local_98;
    local_50[8] = pcStack_90;
    local_50[9] = local_88;
    if (local_50 + 1 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSkeletalMeshRenderData::InitStaticRayTracingGeometry'::__l5::<lambda_1>,void,FRHICommandList_&>
                    ::Call;
    }
    FRenderCommandDispatcher::
    Enqueue<TRenderCommandTag<_FSkeletalMeshRenderData::InitStaticRayTracingGeometry_::__l5::TSTR_InitSkeletalRenderStaticRayTracingGeometry715>_>
              (&UE::RenderCommandPipe::SkeletalMesh,
               (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_78);
    if (local_78[0] != (code *)0x0) {
      ppcVar5 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar5 = local_50;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
  }
  *(int *)(lVar1 + 0x65c) = *(int *)(lVar1 + 0x65c) + 1;
  return;
}

// ReleaseResources @ 14865ff10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSkeletalMeshRenderData::ReleaseResources(FSkeletalMeshRenderData *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined ***pppuVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  code *local_48 [2];
  undefined **local_38;
  FSkeletalMeshRenderData *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (this->bInitialized != false) {
    iVar5 = (this->LODRenderData).Array.ArrayNum;
    uVar6 = 0;
    if (0 < iVar5) {
      lVar7 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar6 < iVar5) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if (uVar3 == 0) {
          local_50 = (longlong)iVar5;
          local_58 = (longlong)(int)uVar6;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        FSkeletalMeshLODRenderData::ReleaseResources
                  (*(FSkeletalMeshLODRenderData **)
                    ((this->LODRenderData).Array.AllocatorInstance.Data + lVar7));
        iVar5 = (this->LODRenderData).Array.ArrayNum;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < iVar5);
    }
    bVar2 = IsRayTracingAllowed();
    if (bVar2) {
      local_20 = (undefined ***)0x0;
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FSkeletalMeshRenderData::ReleaseResources'::`10'::<lambda_1>,1,0>
                  ::_vftable_;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSkeletalMeshRenderData::ReleaseResources'::__l10::<lambda_1>,void>
                    ::Call;
      local_30 = this;
      FRenderCommandDispatcher::
      Enqueue<TRenderCommandTag<_FSkeletalMeshRenderData::ReleaseResources_::__l10::TSTR_SkeletalMeshReleaseRayTracingGeometryGroup681>_>
                (&UE::RenderCommandPipe::SkeletalMesh,
                 (TUniqueFunction<void___cdecl(void)> *)local_48);
      if (local_48[0] != (code *)0x0) {
        pppuVar4 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar4 = local_20;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    if (((this->NaniteResourcesPtr).Ptr == (FResources *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NaniteResourcesPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshRenderData.cpp"
                           ,0x2b2,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    Nanite::FResources::ReleaseResources((this->NaniteResourcesPtr).Ptr);
    this->bInitialized = false;
  }
  return;
}

// ReleaseStaticRayTracingGeometry @ 148660080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSkeletalMeshRenderData::ReleaseStaticRayTracingGeometry(FSkeletalMeshRenderData *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined ***pppuVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  code *local_48 [2];
  undefined **local_38;
  longlong local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  iVar5 = (this->LODRenderData).Array.ArrayNum;
  uVar4 = 0;
  if (param_1 < iVar5) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    local_58 = (longlong)param_1;
    local_50 = (longlong)iVar5;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)((this->LODRenderData).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
  if ((0 < *(int *)(lVar1 + 0x65c)) &&
     (iVar5 = *(int *)(lVar1 + 0x65c) + -1, *(int *)(lVar1 + 0x65c) = iVar5, iVar5 == 0)) {
    local_30 = lVar1 + 0x660;
    local_20 = (undefined ***)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FSkeletalMeshRenderData::ReleaseStaticRayTracingGeometry'::`8'::<lambda_1>,1,0>
                ::_vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkeletalMeshRenderData::ReleaseStaticRayTracingGeometry'::__l8::<lambda_1>,void>
                  ::Call;
    FRenderCommandDispatcher::
    Enqueue<TRenderCommandTag<_FSkeletalMeshRenderData::ReleaseStaticRayTracingGeometry_::__l8::TSTR_ResetStaticRayTracingGeometryFlag783>_>
              (&UE::RenderCommandPipe::SkeletalMesh,(TUniqueFunction<void___cdecl(void)> *)local_48)
    ;
    if (local_48[0] != (code *)0x0) {
      pppuVar6 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar6 = local_20;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    BeginReleaseResource((FRenderResource *)(lVar1 + 0x668),&UE::RenderCommandPipe::SkeletalMesh);
  }
  return;
}

// RequiresCPUSkinning @ 1486604c0

bool __thiscall
FSkeletalMeshRenderData::RequiresCPUSkinning(FSkeletalMeshRenderData *this,Type param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)0x0);
  iVar2 = GetMaxBonesPerSection(this,0);
  return iVar1 < iVar2;
}

// RequiresCPUSkinning @ 148660500

bool __thiscall
FSkeletalMeshRenderData::RequiresCPUSkinning(FSkeletalMeshRenderData *this,Type param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)0x0);
  iVar2 = GetMaxBonesPerSection(this,param_2);
  return iVar1 < iVar2;
}

// Serialize @ 148662b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkeletalMeshRenderData::Serialize
          (FSkeletalMeshRenderData *this,FArchive *param_1,USkinnedAsset *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uchar uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FSkeletalMeshRenderData::Serialize(FArchive_&,USkinnedAsset_*)_::_2_::FStat_STAT_SkeletalMeshRenderData_Serialize>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_SkeletalMeshRenderData_Serialize ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FSkeletalMeshRenderData::Serialize(FArchive_&,USkinnedAsset_*)_::_2_::FStat_STAT_SkeletalMeshRenderData_Serialize>
           )0x0) {
        pFVar10 = ::FName::FName(&local_68,"STAT_SkeletalMeshRenderData_Serialize");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshRenderData_Serialize,
                   *pFVar10,L"FSkeletalMeshRenderData::Serialize","STATGROUP_LoadTime",
                   "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_STAT_SkeletalMeshRenderData_Serialize;
  if (StatPtr_STAT_SkeletalMeshRenderData_Serialize ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FSkeletalMeshRenderData::Serialize(FArchive_&,USkinnedAsset_*)_::_2_::FStat_STAT_SkeletalMeshRenderData_Serialize>
       )0x0) {
    pFVar10 = ::FName::FName(&local_60,"STAT_SkeletalMeshRenderData_Serialize");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FSkeletalMeshRenderData::Serialize(FArchive_&,USkinnedAsset_*)_::_2_::FStat_STAT_SkeletalMeshRenderData_Serialize>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SkeletalMeshRenderData_Serialize,*pFVar10,
                          L"FSkeletalMeshRenderData::Serialize","STATGROUP_LoadTime",
                          "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar13.Value;
        local_res18.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshRenderData.cpp"
                   ,0x220);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar13.Value;
      uStackX_c = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_148662c91;
    }
  }
  bVar6 = false;
  FVar14 = local_58;
LAB_148662c91:
  if (((param_1->field_0x2b & 0x10) != 0) &&
     (local_res8 = 0, GSkeletalMeshKeepMobileMinLODSettingOnDesktop != 0)) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_res8);
      }
    }
    else {
      local_res8 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if (((param_1->field_0x28 & 1) != 0) && (GMaxRHIFeatureLevel == ES3_1)) {
      this->LODBiasModifier = (uchar)local_res8;
    }
  }
  TIndirectArray<FSkeletalMeshLODRenderData,TSizedDefaultAllocator<32>_>::Serialize
            (&this->LODRenderData,param_1,(UObject *)param_2);
  if ((this->NaniteResourcesPtr).Ptr == (FResources *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NaniteResourcesPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshRenderData.cpp"
                       ,0x24d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  Nanite::FResources::Serialize((this->NaniteResourcesPtr).Ptr,param_1,(UObject *)param_2,false);
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumInlinedLODs,1);
  }
  else {
    this->NumInlinedLODs = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1);
  }
  else {
    this->NumNonOptionalLODs = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  if ((this->LODRenderData).Array.ArrayNum < (int)(uint)this->NumInlinedLODs) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6957528199802650016>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshRenderData.cpp"
                       ,0x260,"LODRenderData.Num() >= NumInlinedLODs");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar9 = (char)(this->LODRenderData).Array.ArrayNum - this->NumInlinedLODs;
  this->CurrentFirstLODIdx = uVar9;
  this->PendingFirstLODIdx = uVar9;
  bVar8 = (bool)(**(code **)(*(longlong *)param_2 + 0x368))(param_2);
  this->bSupportRayTracing = bVar8;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

