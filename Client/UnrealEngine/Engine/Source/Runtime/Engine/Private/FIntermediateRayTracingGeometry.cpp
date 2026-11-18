// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// FIntermediateRayTracingGeometry @ 14733f780

FIntermediateRayTracingGeometry * __thiscall
FSkeletalMeshStreamIn::FIntermediateRayTracingGeometry::FIntermediateRayTracingGeometry
          (FIntermediateRayTracingGeometry *this)

{
  FRayTracingGeometryInitializer::FRayTracingGeometryInitializer(&this->Initializer);
  (this->RayTracingGeometryRHI).Reference = (FRHIRayTracingGeometry *)0x0;
  this->bRequiresBuild = false;
  return this;
}

// ~FIntermediateRayTracingGeometry @ 147341bc0

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FSkeletalMeshStreamIn::FIntermediateRayTracingGeometry::~FIntermediateRayTracingGeometry
          (FIntermediateRayTracingGeometry *this)

{
  FRHIRayTracingGeometry *this_00;
  FScriptContainerElement *pFVar1;
  FRHIBuffer *this_01;
  
  this_00 = (this->RayTracingGeometryRHI).Reference;
  if (this_00 != (FRHIRayTracingGeometry *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)(this->Initializer).Segments.AllocatorInstance.Data,
             (this->Initializer).Segments.ArrayNum);
  pFVar1 = (this->Initializer).Segments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_01 = (this->Initializer).IndexBuffer.Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

// CreateFromCPUData @ 147349460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FSkeletalMeshStreamIn::FIntermediateRayTracingGeometry::CreateFromCPUData
          (FIntermediateRayTracingGeometry *this,FRHICommandListBase *param_1,
          FRayTracingGeometry *param_2)

{
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TRefCountPtr<FRHIRayTracingGeometry> *pTVar3;
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  int iVar6;
  FRHIBuffer *this_00;
  FRHIBuffer *this_01;
  FRayTracingGeometrySegment *pFVar7;
  FRHIRayTracingGeometry *this_02;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  TRefCountPtr<FRHIRayTracingGeometry> local_28 [2];
  
  this_00 = (param_2->Initializer).IndexBuffer.Reference;
  this_01 = (this->Initializer).IndexBuffer.Reference;
  if (this_01 != this_00) {
    (this->Initializer).IndexBuffer.Reference = this_00;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  pTVar4 = &(param_2->Initializer).Segments;
  (this->Initializer).IndexBufferOffset = (param_2->Initializer).IndexBufferOffset;
  pTVar1 = &(this->Initializer).Segments;
  (this->Initializer).GeometryType = (param_2->Initializer).GeometryType;
  (this->Initializer).TotalPrimitiveCount = (param_2->Initializer).TotalPrimitiveCount;
  (this->Initializer).bFastBuild = (param_2->Initializer).bFastBuild;
  (this->Initializer).bAllowUpdate = (param_2->Initializer).bAllowUpdate;
  (this->Initializer).bAllowCompaction = (param_2->Initializer).bAllowCompaction;
  (this->Initializer).bTemplate = (param_2->Initializer).bTemplate;
  (this->Initializer).Type = (param_2->Initializer).Type;
  if (pTVar1 != pTVar4) {
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)(pTVar1->AllocatorInstance).Data,
               (this->Initializer).Segments.ArrayNum);
    iVar5 = (param_2->Initializer).Segments.ArrayNum;
    piVar2 = &(this->Initializer).Segments.ArrayMax;
    pFVar7 = (FRayTracingGeometrySegment *)(pTVar4->AllocatorInstance).Data;
    iVar6 = *piVar2;
    (this->Initializer).Segments.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar6 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar5,iVar6,&pTVar1->AllocatorInstance,iVar5,piVar2);
      ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                ((pTVar1->AllocatorInstance).Data,pFVar7,iVar5);
    }
  }
  (this->Initializer).OfflineData = (param_2->Initializer).OfflineData;
  uVar9 = *(undefined8 *)((param_2->Initializer).OfflineDataHeader.Reserved + 2);
  *(undefined8 *)(this->Initializer).OfflineDataHeader.Reserved =
       *(undefined8 *)(param_2->Initializer).OfflineDataHeader.Reserved;
  *(undefined8 *)((this->Initializer).OfflineDataHeader.Reserved + 2) = uVar9;
  *(undefined8 *)((this->Initializer).OfflineDataHeader.Reserved + 4) =
       *(undefined8 *)((param_2->Initializer).OfflineDataHeader.Reserved + 4);
  (this->Initializer).SourceGeometry = (param_2->Initializer).SourceGeometry;
  (this->Initializer).DebugName.Name = (param_2->Initializer).DebugName.Name;
  (this->Initializer).DebugName.Number = (param_2->Initializer).DebugName.Number;
  (this->Initializer).OwnerName = (param_2->Initializer).OwnerName;
  (this->Initializer).Type = StreamingSource;
  if ((int)(param_2->RawData)._padding_ != 0) {
    bVar10 = RayTracing::ShouldForceRuntimeBLAS();
    if ((bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!RayTracing::ShouldForceRuntimeBLAS()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                            ,0x5a,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((this->Initializer).OfflineData != (FResourceArrayUploadInterface *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Initializer.OfflineData == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                            ,0x5b,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (this->Initializer).OfflineData = (FResourceArrayUploadInterface *)&param_2->RawData;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x490))(GDynamicRHI,local_28,param_1,this);
  pTVar3 = &this->RayTracingGeometryRHI;
  if (pTVar3 != local_28) {
    this_02 = pTVar3->Reference;
    pTVar3->Reference = local_28[0].Reference;
    local_28[0].Reference = (FRHIRayTracingGeometry *)0x0;
    if (this_02 == (FRHIRayTracingGeometry *)0x0) goto LAB_147349685;
    FRHIResource::Release((FRHIResource *)this_02);
  }
  if (local_28[0].Reference != (FRHIRayTracingGeometry *)0x0) {
    FRHIResource::Release((FRHIResource *)local_28[0].Reference);
  }
LAB_147349685:
  if (((this->Initializer).OfflineData != (FResourceArrayUploadInterface *)0x0) &&
     (cVar11 = (**(code **)(pTVar3->Reference->_padding_ + 0x18))(), cVar11 == '\0')) {
    this->bRequiresBuild = false;
    return;
  }
  this->bRequiresBuild = true;
  return;
}

// SafeRelease @ 147356160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FSkeletalMeshStreamIn::FIntermediateRayTracingGeometry::SafeRelease
          (FIntermediateRayTracingGeometry *this)

{
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *pTVar1;
  FRHIBuffer *this_00;
  FScriptContainerElement *pFVar2;
  FRHIRayTracingGeometry *this_01;
  int iVar3;
  undefined1 auStack_a8 [32];
  FIntermediateRayTracingGeometry local_88;
  
  local_88.RayTracingGeometryRHI.Reference =
       (FRHIRayTracingGeometry *)(__security_cookie.value ^ (ulonglong)auStack_a8);
  local_88.Initializer.bFastBuild = false;
  local_88.Initializer.bAllowUpdate = false;
  local_88.Initializer.bAllowCompaction = true;
  local_88.Initializer.bTemplate = false;
  local_88.Initializer.IndexBuffer.Reference = (FRHIBuffer *)0x0;
  local_88.Initializer.IndexBufferOffset = 0;
  local_88.Initializer.GeometryType = RTGT_Triangles;
  local_88.Initializer.TotalPrimitiveCount = 0;
  local_88.Initializer.Type = Rendering;
  local_88.Initializer.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Initializer.Segments.ArrayNum = 0;
  local_88.Initializer.Segments.ArrayMax = 0;
  local_88.Initializer.OfflineData = (FResourceArrayUploadInterface *)0x0;
  local_88.Initializer.SourceGeometry = (FRHIRayTracingGeometry *)0x0;
  local_88.Initializer.OfflineDataHeader.Reserved[0] = 0xffffffff;
  local_88.Initializer.OfflineDataHeader.Reserved[1] = 0xffffffff;
  local_88.Initializer.OfflineDataHeader.Reserved[2] = 0xffffffff;
  local_88.Initializer.OfflineDataHeader.Reserved[3] = 0xffffffff;
  local_88.Initializer.OfflineDataHeader.Reserved[4] = 0xffffffff;
  local_88.Initializer.OfflineDataHeader.Reserved[5] = 0xffffffff;
  FDebugName::FDebugName(&local_88.Initializer.DebugName);
  local_88.Initializer.OwnerName.ComparisonIndex.Value = 0;
  local_88.Initializer.OwnerName.Number = 0;
  if (this != &local_88) {
    this_00 = (this->Initializer).IndexBuffer.Reference;
    (this->Initializer).IndexBuffer.Reference = local_88.Initializer.IndexBuffer.Reference;
    local_88.Initializer.IndexBuffer.Reference = (FRHIBuffer *)0x0;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  pTVar1 = &(this->Initializer).Segments;
  (this->Initializer).IndexBufferOffset = local_88.Initializer.IndexBufferOffset;
  (this->Initializer).GeometryType = local_88.Initializer.GeometryType;
  (this->Initializer).TotalPrimitiveCount = local_88.Initializer.TotalPrimitiveCount;
  (this->Initializer).bFastBuild = local_88.Initializer.bFastBuild;
  (this->Initializer).bAllowUpdate = local_88.Initializer.bAllowUpdate;
  (this->Initializer).bAllowCompaction = local_88.Initializer.bAllowCompaction;
  (this->Initializer).bTemplate = local_88.Initializer.bTemplate;
  (this->Initializer).Type = local_88.Initializer.Type;
  if (pTVar1 == &local_88.Initializer.Segments) {
    iVar3 = local_88.Initializer.Segments.ArrayNum;
  }
  else {
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)(pTVar1->AllocatorInstance).Data,
               (this->Initializer).Segments.ArrayNum);
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = local_88.Initializer.Segments.AllocatorInstance.Data;
    (this->Initializer).Segments.ArrayNum = local_88.Initializer.Segments.ArrayNum;
    (this->Initializer).Segments.ArrayMax = local_88.Initializer.Segments.ArrayMax;
    local_88.Initializer.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Initializer.Segments.ArrayNum = 0;
    local_88.Initializer.Segments.ArrayMax = 0;
    iVar3 = 0;
  }
  (this->Initializer).OfflineData = local_88.Initializer.OfflineData;
  *(undefined8 *)(this->Initializer).OfflineDataHeader.Reserved =
       local_88.Initializer.OfflineDataHeader.Reserved._0_8_;
  *(undefined8 *)((this->Initializer).OfflineDataHeader.Reserved + 2) =
       local_88.Initializer.OfflineDataHeader.Reserved._8_8_;
  (this->Initializer).SourceGeometry = local_88.Initializer.SourceGeometry;
  (this->Initializer).DebugName.Name = local_88.Initializer.DebugName.Name;
  (this->Initializer).DebugName.Number = local_88.Initializer.DebugName.Number;
  (this->Initializer).OwnerName = local_88.Initializer.OwnerName;
  *(undefined8 *)((this->Initializer).OfflineDataHeader.Reserved + 4) =
       local_88.Initializer.OfflineDataHeader.Reserved._16_8_;
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)local_88.Initializer.Segments.AllocatorInstance.Data,
             iVar3);
  if ((FRayTracingGeometrySegment *)local_88.Initializer.Segments.AllocatorInstance.Data !=
      (FRayTracingGeometrySegment *)0x0) {
    FMemory::Free(local_88.Initializer.Segments.AllocatorInstance.Data);
  }
  if (local_88.Initializer.IndexBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_88.Initializer.IndexBuffer.Reference);
  }
  this_01 = (this->RayTracingGeometryRHI).Reference;
  if (this_01 != (FRHIRayTracingGeometry *)0x0) {
    (this->RayTracingGeometryRHI).Reference = (FRHIRayTracingGeometry *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  return;
}

// TransferRayTracingGeometry @ 14735a6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshStreamIn::FIntermediateRayTracingGeometry::TransferRayTracingGeometry
          (FIntermediateRayTracingGeometry *this,FRayTracingGeometry *param_1,
          FRHIResourceReplaceBatcher *param_2)

{
  bool bVar1;
  EGeometryStateFlags EVar2;
  undefined1 local_res8 [8];
  
  if (((this->RayTracingGeometryRHI).Reference == (FRHIRayTracingGeometry *)0x0) &&
     (bVar1 = `FSkeletalMeshStreamIn::FIntermediateRayTracingGeometry::TransferRayTracingGeometry'::
              __l3::<lambda_1>::operator()(local_res8), !bVar1)) {
    return;
  }
  FRayTracingGeometry::InitRHIForStreaming(param_1,(this->RayTracingGeometryRHI).Reference,param_2);
  if (this->bRequiresBuild == false) {
    EVar2 = param_1->GeometryState & ~RequiresBuild;
  }
  else {
    EVar2 = param_1->GeometryState | RequiresBuild;
  }
  param_1->GeometryState = EVar2;
  return;
}

// FIntermediateRayTracingGeometry @ 148776e30

FIntermediateRayTracingGeometry * __thiscall
FStaticMeshStreamIn::FIntermediateRayTracingGeometry::FIntermediateRayTracingGeometry
          (FIntermediateRayTracingGeometry *this)

{
  FRayTracingGeometryInitializer::FRayTracingGeometryInitializer(&this->Initializer);
  (this->RayTracingGeometryRHI).Reference = (FRHIRayTracingGeometry *)0x0;
  this->bRequiresBuild = false;
  return this;
}

// ~FIntermediateRayTracingGeometry @ 14877ed60

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FStaticMeshStreamIn::FIntermediateRayTracingGeometry::~FIntermediateRayTracingGeometry
          (FIntermediateRayTracingGeometry *this)

{
  FRHIRayTracingGeometry *this_00;
  FScriptContainerElement *pFVar1;
  FRHIBuffer *this_01;
  
  this_00 = (this->RayTracingGeometryRHI).Reference;
  if (this_00 != (FRHIRayTracingGeometry *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)(this->Initializer).Segments.AllocatorInstance.Data,
             (this->Initializer).Segments.ArrayNum);
  pFVar1 = (this->Initializer).Segments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_01 = (this->Initializer).IndexBuffer.Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

// CreateFromCPUData @ 1487912f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FStaticMeshStreamIn::FIntermediateRayTracingGeometry::CreateFromCPUData
          (FIntermediateRayTracingGeometry *this,FRHICommandListBase *param_1,
          FRayTracingGeometry *param_2)

{
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TRefCountPtr<FRHIRayTracingGeometry> *pTVar3;
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  int iVar6;
  FRHIBuffer *this_00;
  FRHIBuffer *this_01;
  FRayTracingGeometrySegment *pFVar7;
  FRHIRayTracingGeometry *this_02;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  TRefCountPtr<FRHIRayTracingGeometry> local_28 [2];
  
  this_00 = (param_2->Initializer).IndexBuffer.Reference;
  this_01 = (this->Initializer).IndexBuffer.Reference;
  if (this_01 != this_00) {
    (this->Initializer).IndexBuffer.Reference = this_00;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  pTVar4 = &(param_2->Initializer).Segments;
  (this->Initializer).IndexBufferOffset = (param_2->Initializer).IndexBufferOffset;
  pTVar1 = &(this->Initializer).Segments;
  (this->Initializer).GeometryType = (param_2->Initializer).GeometryType;
  (this->Initializer).TotalPrimitiveCount = (param_2->Initializer).TotalPrimitiveCount;
  (this->Initializer).bFastBuild = (param_2->Initializer).bFastBuild;
  (this->Initializer).bAllowUpdate = (param_2->Initializer).bAllowUpdate;
  (this->Initializer).bAllowCompaction = (param_2->Initializer).bAllowCompaction;
  (this->Initializer).bTemplate = (param_2->Initializer).bTemplate;
  (this->Initializer).Type = (param_2->Initializer).Type;
  if (pTVar1 != pTVar4) {
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)(pTVar1->AllocatorInstance).Data,
               (this->Initializer).Segments.ArrayNum);
    iVar5 = (param_2->Initializer).Segments.ArrayNum;
    piVar2 = &(this->Initializer).Segments.ArrayMax;
    pFVar7 = (FRayTracingGeometrySegment *)(pTVar4->AllocatorInstance).Data;
    iVar6 = *piVar2;
    (this->Initializer).Segments.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar6 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar5,iVar6,&pTVar1->AllocatorInstance,iVar5,piVar2);
      ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                ((pTVar1->AllocatorInstance).Data,pFVar7,iVar5);
    }
  }
  (this->Initializer).OfflineData = (param_2->Initializer).OfflineData;
  uVar9 = *(undefined8 *)((param_2->Initializer).OfflineDataHeader.Reserved + 2);
  *(undefined8 *)(this->Initializer).OfflineDataHeader.Reserved =
       *(undefined8 *)(param_2->Initializer).OfflineDataHeader.Reserved;
  *(undefined8 *)((this->Initializer).OfflineDataHeader.Reserved + 2) = uVar9;
  *(undefined8 *)((this->Initializer).OfflineDataHeader.Reserved + 4) =
       *(undefined8 *)((param_2->Initializer).OfflineDataHeader.Reserved + 4);
  (this->Initializer).SourceGeometry = (param_2->Initializer).SourceGeometry;
  (this->Initializer).DebugName.Name = (param_2->Initializer).DebugName.Name;
  (this->Initializer).DebugName.Number = (param_2->Initializer).DebugName.Number;
  (this->Initializer).OwnerName = (param_2->Initializer).OwnerName;
  (this->Initializer).Type = StreamingSource;
  if ((int)(param_2->RawData)._padding_ != 0) {
    bVar10 = RayTracing::ShouldForceRuntimeBLAS();
    if ((bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!RayTracing::ShouldForceRuntimeBLAS()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                            ,0x67,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((this->Initializer).OfflineData != (FResourceArrayUploadInterface *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Initializer.OfflineData == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                            ,0x68,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (this->Initializer).OfflineData = (FResourceArrayUploadInterface *)&param_2->RawData;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x490))(GDynamicRHI,local_28,param_1,this);
  pTVar3 = &this->RayTracingGeometryRHI;
  if (pTVar3 != local_28) {
    this_02 = pTVar3->Reference;
    pTVar3->Reference = local_28[0].Reference;
    local_28[0].Reference = (FRHIRayTracingGeometry *)0x0;
    if (this_02 == (FRHIRayTracingGeometry *)0x0) goto LAB_148791515;
    FRHIResource::Release((FRHIResource *)this_02);
  }
  if (local_28[0].Reference != (FRHIRayTracingGeometry *)0x0) {
    FRHIResource::Release((FRHIResource *)local_28[0].Reference);
  }
LAB_148791515:
  if (((this->Initializer).OfflineData != (FResourceArrayUploadInterface *)0x0) &&
     (cVar11 = (**(code **)(pTVar3->Reference->_padding_ + 0x18))(), cVar11 == '\0')) {
    this->bRequiresBuild = false;
    return;
  }
  this->bRequiresBuild = true;
  return;
}

// SafeRelease @ 1487c05d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FStaticMeshStreamIn::FIntermediateRayTracingGeometry::SafeRelease
          (FIntermediateRayTracingGeometry *this)

{
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *pTVar1;
  FRHIBuffer *this_00;
  FScriptContainerElement *pFVar2;
  FRHIRayTracingGeometry *this_01;
  int iVar3;
  undefined1 auStack_a8 [32];
  FIntermediateRayTracingGeometry local_88;
  
  local_88.RayTracingGeometryRHI.Reference =
       (FRHIRayTracingGeometry *)(__security_cookie.value ^ (ulonglong)auStack_a8);
  local_88.Initializer.bFastBuild = false;
  local_88.Initializer.bAllowUpdate = false;
  local_88.Initializer.bAllowCompaction = true;
  local_88.Initializer.bTemplate = false;
  local_88.Initializer.IndexBuffer.Reference = (FRHIBuffer *)0x0;
  local_88.Initializer.IndexBufferOffset = 0;
  local_88.Initializer.GeometryType = RTGT_Triangles;
  local_88.Initializer.TotalPrimitiveCount = 0;
  local_88.Initializer.Type = Rendering;
  local_88.Initializer.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Initializer.Segments.ArrayNum = 0;
  local_88.Initializer.Segments.ArrayMax = 0;
  local_88.Initializer.OfflineData = (FResourceArrayUploadInterface *)0x0;
  local_88.Initializer.SourceGeometry = (FRHIRayTracingGeometry *)0x0;
  local_88.Initializer.OfflineDataHeader.Reserved[0] = 0xffffffff;
  local_88.Initializer.OfflineDataHeader.Reserved[1] = 0xffffffff;
  local_88.Initializer.OfflineDataHeader.Reserved[2] = 0xffffffff;
  local_88.Initializer.OfflineDataHeader.Reserved[3] = 0xffffffff;
  local_88.Initializer.OfflineDataHeader.Reserved[4] = 0xffffffff;
  local_88.Initializer.OfflineDataHeader.Reserved[5] = 0xffffffff;
  FDebugName::FDebugName(&local_88.Initializer.DebugName);
  local_88.Initializer.OwnerName.ComparisonIndex.Value = 0;
  local_88.Initializer.OwnerName.Number = 0;
  if (this != &local_88) {
    this_00 = (this->Initializer).IndexBuffer.Reference;
    (this->Initializer).IndexBuffer.Reference = local_88.Initializer.IndexBuffer.Reference;
    local_88.Initializer.IndexBuffer.Reference = (FRHIBuffer *)0x0;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  pTVar1 = &(this->Initializer).Segments;
  (this->Initializer).IndexBufferOffset = local_88.Initializer.IndexBufferOffset;
  (this->Initializer).GeometryType = local_88.Initializer.GeometryType;
  (this->Initializer).TotalPrimitiveCount = local_88.Initializer.TotalPrimitiveCount;
  (this->Initializer).bFastBuild = local_88.Initializer.bFastBuild;
  (this->Initializer).bAllowUpdate = local_88.Initializer.bAllowUpdate;
  (this->Initializer).bAllowCompaction = local_88.Initializer.bAllowCompaction;
  (this->Initializer).bTemplate = local_88.Initializer.bTemplate;
  (this->Initializer).Type = local_88.Initializer.Type;
  if (pTVar1 == &local_88.Initializer.Segments) {
    iVar3 = local_88.Initializer.Segments.ArrayNum;
  }
  else {
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)(pTVar1->AllocatorInstance).Data,
               (this->Initializer).Segments.ArrayNum);
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = local_88.Initializer.Segments.AllocatorInstance.Data;
    (this->Initializer).Segments.ArrayNum = local_88.Initializer.Segments.ArrayNum;
    (this->Initializer).Segments.ArrayMax = local_88.Initializer.Segments.ArrayMax;
    local_88.Initializer.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Initializer.Segments.ArrayNum = 0;
    local_88.Initializer.Segments.ArrayMax = 0;
    iVar3 = 0;
  }
  (this->Initializer).OfflineData = local_88.Initializer.OfflineData;
  *(undefined8 *)(this->Initializer).OfflineDataHeader.Reserved =
       local_88.Initializer.OfflineDataHeader.Reserved._0_8_;
  *(undefined8 *)((this->Initializer).OfflineDataHeader.Reserved + 2) =
       local_88.Initializer.OfflineDataHeader.Reserved._8_8_;
  (this->Initializer).SourceGeometry = local_88.Initializer.SourceGeometry;
  (this->Initializer).DebugName.Name = local_88.Initializer.DebugName.Name;
  (this->Initializer).DebugName.Number = local_88.Initializer.DebugName.Number;
  (this->Initializer).OwnerName = local_88.Initializer.OwnerName;
  *(undefined8 *)((this->Initializer).OfflineDataHeader.Reserved + 4) =
       local_88.Initializer.OfflineDataHeader.Reserved._16_8_;
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)local_88.Initializer.Segments.AllocatorInstance.Data,
             iVar3);
  if ((FRayTracingGeometrySegment *)local_88.Initializer.Segments.AllocatorInstance.Data !=
      (FRayTracingGeometrySegment *)0x0) {
    FMemory::Free(local_88.Initializer.Segments.AllocatorInstance.Data);
  }
  if (local_88.Initializer.IndexBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_88.Initializer.IndexBuffer.Reference);
  }
  this_01 = (this->RayTracingGeometryRHI).Reference;
  if (this_01 != (FRHIRayTracingGeometry *)0x0) {
    (this->RayTracingGeometryRHI).Reference = (FRHIRayTracingGeometry *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  return;
}

// TransferRayTracingGeometry @ 1487ca260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshStreamIn::FIntermediateRayTracingGeometry::TransferRayTracingGeometry
          (FIntermediateRayTracingGeometry *this,FRayTracingGeometry *param_1,
          FRHIResourceReplaceBatcher *param_2)

{
  bool bVar1;
  EGeometryStateFlags EVar2;
  undefined1 local_res8 [8];
  
  if (((this->RayTracingGeometryRHI).Reference == (FRHIRayTracingGeometry *)0x0) &&
     (bVar1 = `FStaticMeshStreamIn::FIntermediateRayTracingGeometry::TransferRayTracingGeometry'::
              __l3::<lambda_1>::operator()(local_res8), !bVar1)) {
    return;
  }
  FRayTracingGeometry::InitRHIForStreaming(param_1,(this->RayTracingGeometryRHI).Reference,param_2);
  if (this->bRequiresBuild == false) {
    EVar2 = param_1->GeometryState & ~RequiresBuild;
  }
  else {
    EVar2 = param_1->GeometryState | RequiresBuild;
  }
  param_1->GeometryState = EVar2;
  return;
}

// operator() @ 1505063d0

bool __thiscall
`FSkeletalMeshStreamIn::FIntermediateRayTracingGeometry::TransferRayTracingGeometry'::__l3::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6453310030073561196>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6453310030073561196>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150530e40

bool __thiscall
`FStaticMeshStreamIn::FIntermediateRayTracingGeometry::TransferRayTracingGeometry'::__l3::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4353875937855537273>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4353875937855537273>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

