// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// FResources @ 1483e56c0

FResources * __thiscall Nanite::FResources::FResources(FResources *this)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  
  (this->RootData).ArrayNum = 0;
  (this->RootData).ArrayMax = 0;
  *(undefined8 *)&this->StreamablePages = 0;
  (this->RootData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->StreamablePages).field_0x8 = 0;
  *(undefined8 *)&(this->StreamablePages).field_0x10 = 0;
  *(undefined4 *)&(this->StreamablePages).field_0xd = 0xffffffff;
  (this->StreamablePages).field_0x11 = 0xff;
  uVar1 = FIoChunkId::InvalidChunkId.Id[1];
  uVar2 = FIoChunkId::InvalidChunkId.Id[2];
  uVar3 = FIoChunkId::InvalidChunkId.Id[3];
  uVar4 = FIoChunkId::InvalidChunkId.Id[4];
  uVar5 = FIoChunkId::InvalidChunkId.Id[5];
  uVar6 = FIoChunkId::InvalidChunkId.Id[6];
  uVar7 = FIoChunkId::InvalidChunkId.Id[7];
  (this->StreamablePages).field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (this->StreamablePages).field_0x19 = uVar1;
  (this->StreamablePages).field_0x1a = uVar2;
  (this->StreamablePages).field_0x1b = uVar3;
  (this->StreamablePages).field_0x1c = uVar4;
  (this->StreamablePages).field_0x1d = uVar5;
  (this->StreamablePages).field_0x1e = uVar6;
  (this->StreamablePages).field_0x1f = uVar7;
  uVar1 = FIoChunkId::InvalidChunkId.Id[9];
  uVar2 = FIoChunkId::InvalidChunkId.Id[10];
  uVar3 = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->StreamablePages).field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (this->StreamablePages).field_0x21 = uVar1;
  (this->StreamablePages).field_0x22 = uVar2;
  (this->StreamablePages).field_0x23 = uVar3;
  (this->ImposterAtlas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImposterAtlas).ArrayNum = 0;
  (this->ImposterAtlas).ArrayMax = 0;
  (this->HierarchyNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HierarchyNodes).ArrayNum = 0;
  (this->HierarchyNodes).ArrayMax = 0;
  (this->HierarchyRootOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HierarchyRootOffsets).ArrayNum = 0;
  (this->HierarchyRootOffsets).ArrayMax = 0;
  (this->PageStreamingStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PageStreamingStates).ArrayNum = 0;
  (this->PageStreamingStates).ArrayMax = 0;
  (this->PageDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PageDependencies).ArrayNum = 0;
  (this->PageDependencies).ArrayMax = 0;
  (this->AssemblyTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssemblyTransforms).ArrayNum = 0;
  (this->AssemblyTransforms).ArrayMax = 0;
  (this->AssemblyBoneAttachmentData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssemblyBoneAttachmentData).ArrayNum = 0;
  (this->AssemblyBoneAttachmentData).ArrayMax = 0;
  (this->PageRangeLookup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PageRangeLookup).ArrayNum = 0;
  (this->PageRangeLookup).ArrayMax = 0;
  *(undefined8 *)&(this->MeshBounds).Origin.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->MeshBounds).Origin.field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->MeshBounds).BoxExtent.field0_0x0 + 4) = 0;
  *(undefined8 *)&(this->MeshBounds).SphereRadius = 0;
  this->PositionPrecision = 0;
  this->NormalPrecision = 0;
  this->TangentPrecision = 0;
  this->NumInputTriangles = 0;
  this->NumInputVertices = 0;
  this->NumClusters = 0;
  this->ResourceFlags = 0;
  this->VoxelMaterialsMask = 0;
  this->RuntimeResourceID = 0xffffffff;
  this->HierarchyOffset = 0xffffffff;
  this->AssemblyTransformOffset = 0xffffffff;
  this->RootPageIndex = -1;
  this->ImposterIndex = -1;
  this->NumHierarchyNodes = 0;
  this->NumHierarchyDwords = 0;
  this->NumResidentClusters = 0;
  this->PersistentHash = 0;
  return this;
}

// ~FResources @ 1483e8d10

void __thiscall Nanite::FResources::~FResources(FResources *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PageRangeLookup).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssemblyBoneAttachmentData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssemblyTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PageDependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PageStreamingStates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HierarchyRootOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HierarchyNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ImposterAtlas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBulkData::~FBulkData((FBulkData *)&this->StreamablePages);
  pFVar1 = (this->RootData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1483e9930

FResources * __thiscall Nanite::FResources::operator=(FResources *this,FResources *param_1)

{
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Nanite::FPackedHierarchyNode,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Nanite::FPackedHierarchyNode,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Nanite::FPageStreamingState,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<Nanite::FPageStreamingState,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FMatrix3x4,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FMatrix3x4,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<Nanite::FPageRangeKey,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<Nanite::FPageRangeKey,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  undefined8 uVar14;
  
  if (this != param_1) {
    pFVar13 = (this->RootData).AllocatorInstance.Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (this->RootData).AllocatorInstance.Data = (param_1->RootData).AllocatorInstance.Data;
    (param_1->RootData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RootData).ArrayNum = (param_1->RootData).ArrayNum;
    (this->RootData).ArrayMax = (param_1->RootData).ArrayMax;
    (param_1->RootData).ArrayNum = 0;
    (param_1->RootData).ArrayMax = 0;
  }
  FBulkData::operator=((FBulkData *)&this->StreamablePages,(FBulkData *)&param_1->StreamablePages);
  pTVar1 = &param_1->ImposterAtlas;
  pTVar2 = &this->ImposterAtlas;
  if (pTVar2 != pTVar1) {
    pFVar13 = (pTVar2->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ImposterAtlas).ArrayNum = (param_1->ImposterAtlas).ArrayNum;
    (this->ImposterAtlas).ArrayMax = (param_1->ImposterAtlas).ArrayMax;
    (param_1->ImposterAtlas).ArrayNum = 0;
    (param_1->ImposterAtlas).ArrayMax = 0;
  }
  pTVar3 = &param_1->HierarchyNodes;
  pTVar4 = &this->HierarchyNodes;
  if (pTVar4 != pTVar3) {
    pFVar13 = (pTVar4->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->HierarchyNodes).ArrayNum = (param_1->HierarchyNodes).ArrayNum;
    (this->HierarchyNodes).ArrayMax = (param_1->HierarchyNodes).ArrayMax;
    (param_1->HierarchyNodes).ArrayNum = 0;
    (param_1->HierarchyNodes).ArrayMax = 0;
  }
  pTVar5 = &param_1->HierarchyRootOffsets;
  pTVar6 = &this->HierarchyRootOffsets;
  if (pTVar6 != pTVar5) {
    pFVar13 = (pTVar6->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->HierarchyRootOffsets).ArrayNum = (param_1->HierarchyRootOffsets).ArrayNum;
    (this->HierarchyRootOffsets).ArrayMax = (param_1->HierarchyRootOffsets).ArrayMax;
    (param_1->HierarchyRootOffsets).ArrayNum = 0;
    (param_1->HierarchyRootOffsets).ArrayMax = 0;
  }
  pTVar7 = &param_1->PageStreamingStates;
  pTVar8 = &this->PageStreamingStates;
  if (pTVar8 != pTVar7) {
    pFVar13 = (pTVar8->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PageStreamingStates).ArrayNum = (param_1->PageStreamingStates).ArrayNum;
    (this->PageStreamingStates).ArrayMax = (param_1->PageStreamingStates).ArrayMax;
    (param_1->PageStreamingStates).ArrayNum = 0;
    (param_1->PageStreamingStates).ArrayMax = 0;
  }
  pTVar1 = &param_1->PageDependencies;
  pTVar2 = &this->PageDependencies;
  if (pTVar2 != pTVar1) {
    pFVar13 = (pTVar2->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PageDependencies).ArrayNum = (param_1->PageDependencies).ArrayNum;
    (this->PageDependencies).ArrayMax = (param_1->PageDependencies).ArrayMax;
    (param_1->PageDependencies).ArrayNum = 0;
    (param_1->PageDependencies).ArrayMax = 0;
  }
  pTVar9 = &param_1->AssemblyTransforms;
  pTVar10 = &this->AssemblyTransforms;
  if (pTVar10 != pTVar9) {
    pFVar13 = (pTVar10->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AssemblyTransforms).ArrayNum = (param_1->AssemblyTransforms).ArrayNum;
    (this->AssemblyTransforms).ArrayMax = (param_1->AssemblyTransforms).ArrayMax;
    (param_1->AssemblyTransforms).ArrayNum = 0;
    (param_1->AssemblyTransforms).ArrayMax = 0;
  }
  pTVar5 = &param_1->AssemblyBoneAttachmentData;
  pTVar6 = &this->AssemblyBoneAttachmentData;
  if (pTVar6 != pTVar5) {
    pFVar13 = (pTVar6->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AssemblyBoneAttachmentData).ArrayNum = (param_1->AssemblyBoneAttachmentData).ArrayNum;
    (this->AssemblyBoneAttachmentData).ArrayMax = (param_1->AssemblyBoneAttachmentData).ArrayMax;
    (param_1->AssemblyBoneAttachmentData).ArrayNum = 0;
    (param_1->AssemblyBoneAttachmentData).ArrayMax = 0;
  }
  pTVar11 = &param_1->PageRangeLookup;
  pTVar12 = &this->PageRangeLookup;
  if (pTVar12 != pTVar11) {
    pFVar13 = (pTVar12->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PageRangeLookup).ArrayNum = (param_1->PageRangeLookup).ArrayNum;
    (this->PageRangeLookup).ArrayMax = (param_1->PageRangeLookup).ArrayMax;
    (param_1->PageRangeLookup).ArrayNum = 0;
    (param_1->PageRangeLookup).ArrayMax = 0;
  }
  uVar14 = *(undefined8 *)((longlong)&(param_1->MeshBounds).Origin.field0_0x0 + 8);
  *(undefined8 *)&(this->MeshBounds).Origin.field0_0x0 =
       *(undefined8 *)&(param_1->MeshBounds).Origin.field0_0x0;
  *(undefined8 *)((longlong)&(this->MeshBounds).Origin.field0_0x0 + 8) = uVar14;
  *(undefined8 *)((longlong)&(this->MeshBounds).BoxExtent.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->MeshBounds).BoxExtent.field0_0x0 + 4);
  (this->MeshBounds).SphereRadius = (param_1->MeshBounds).SphereRadius;
  this->NumRootPages = param_1->NumRootPages;
  this->PositionPrecision = param_1->PositionPrecision;
  this->NormalPrecision = param_1->NormalPrecision;
  this->TangentPrecision = param_1->TangentPrecision;
  this->NumInputTriangles = param_1->NumInputTriangles;
  this->NumInputVertices = param_1->NumInputVertices;
  this->NumClusters = param_1->NumClusters;
  this->ResourceFlags = param_1->ResourceFlags;
  this->VoxelMaterialsMask = param_1->VoxelMaterialsMask;
  this->RuntimeResourceID = param_1->RuntimeResourceID;
  this->HierarchyOffset = param_1->HierarchyOffset;
  this->AssemblyTransformOffset = param_1->AssemblyTransformOffset;
  this->RootPageIndex = param_1->RootPageIndex;
  this->ImposterIndex = param_1->ImposterIndex;
  this->NumHierarchyNodes = param_1->NumHierarchyNodes;
  this->NumHierarchyDwords = param_1->NumHierarchyDwords;
  this->NumResidentClusters = param_1->NumResidentClusters;
  this->PersistentHash = param_1->PersistentHash;
  return this;
}

// GetResourceSizeEx @ 14840a8f0

void __thiscall Nanite::FResources::GetResourceSizeEx(FResources *this,FResourceSizeEx *param_1)

{
  bool bVar1;
  ulong64 uVar2;
  
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x128);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(this->RootData).ArrayMax);
  bVar1 = FBulkData::IsBulkDataLoaded((FBulkData *)&this->StreamablePages);
  if (bVar1) {
    uVar2 = FBulkData::GetBulkDataSize((FBulkData *)&this->StreamablePages);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,uVar2);
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->ImposterAtlas).ArrayMax * 2);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->HierarchyNodes).ArrayMax * 0xe0);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->HierarchyRootOffsets).ArrayMax << 2);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->PageStreamingStates).ArrayMax * 0x14);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->PageDependencies).ArrayMax * 2);
  return;
}

// HasStreamingData @ 14840bec0

bool __thiscall Nanite::FResources::HasStreamingData(FResources *this)

{
  return this->NumRootPages < (uint)(this->PageStreamingStates).ArrayNum;
}

// InitResources @ 14840df80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall Nanite::FResources::InitResources(FResources *this,UObject *param_1)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  uint uVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined1 auStack_c8 [32];
  FName local_a8;
  FString local_a0;
  code *local_88 [2];
  undefined **local_78;
  FResources *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FResources *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar3 = DoesPlatformSupportNanite(GMaxRHIShaderPlatform,true);
  if ((bVar3) && ((this->PageStreamingStates).ArrayNum != 0)) {
    if (((this->RootData).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootData.Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                           ,0x11c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_a8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_a8.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_a8,&local_a0);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_a0.Data.ArrayNum != 0) {
      FVar9.Data = local_a0.Data.AllocatorInstance.Data;
    }
    uVar8 = 0xffffffff;
    uVar7 = 0xffffffff;
    wVar1 = *(wchar_t *)FVar9.Data;
    while (wVar1 != L'\0') {
      FVar9.Data = FVar9.Data + 2;
      uVar7 = FCrc::CRCTablesSB8[1][uVar8 >> 0x10 & 0xff] ^
              FCrc::CRCTablesSB8[2][((ushort)wVar1 ^ uVar8) >> 8 & 0xff] ^
              FCrc::CRCTablesSB8[0][uVar8 >> 0x18] ^
              FCrc::CRCTablesSB8[3][((ushort)wVar1 ^ uVar8) & 0xff];
      uVar8 = (ulonglong)uVar7;
      wVar1 = *(wchar_t *)FVar9.Data;
    }
    uVar4 = 1;
    if (1 < ~uVar7) {
      uVar4 = ~uVar7;
    }
    this->PersistentHash = uVar4;
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Nanite::FResources::InitResources'::`2'::<lambda_1>,1,0>::
                _vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Nanite::FResources::InitResources'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_Nanite::FResources::InitResources_::__l2::TSTR_InitNaniteResources290>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`Nanite::FResources::InitResources'::__l2::TSTR_InitNaniteResources290>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar5);
      uVar8 = (ulonglong)local_28;
      if ((2 < uVar8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar6 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar6 = local_30;
          }
          (*(code *)(*pppuVar6)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar6 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar6 = local_60;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  return;
}

// IsValidPageRangeKey @ 14840fed0

bool __thiscall Nanite::FResources::IsValidPageRangeKey(FResources *this,FPageRangeKey param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1.Value & 0x1f) != 0) {
    uVar1 = param_1.Value >> 5 & 0x1ffffff;
    if ((int)param_1.Value < 0) {
      iVar2 = (this->PageRangeLookup).ArrayNum;
    }
    else {
      iVar2 = (this->PageStreamingStates).ArrayNum;
    }
    if ((iVar2 <= (int)uVar1) || (iVar2 < (int)(uVar1 + (param_1.Value & 0x1f)))) {
      return false;
    }
  }
  return true;
}

// ReleaseResources @ 14841f6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall Nanite::FResources::ReleaseResources(FResources *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FResources *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FResources *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = DoesPlatformSupportNanite(GMaxRHIShaderPlatform,true);
  if ((bVar2) && ((this->PageStreamingStates).ArrayNum != 0)) {
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Nanite::FResources::ReleaseResources'::`2'::<lambda_1>,1,0>::
                _vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Nanite::FResources::ReleaseResources'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_Nanite::FResources::ReleaseResources_::__l2::TSTR_ReleaseNaniteResources311>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`Nanite::FResources::ReleaseResources'::__l2::TSTR_ReleaseNaniteResources311>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// Serialize @ 148423430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Nanite::FResources::Serialize(FResources *this,FArchive *param_1,UObject *param_2,bool param_3)

{
  bool bVar1;
  ITargetPlatform *pIVar2;
  undefined1 auStackY_1a8 [32];
  FStripDataFlags local_178 [2];
  FLLMScope local_174;
  FName local_170;
  FMemScope local_168 [2];
  FResources local_158;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  FLLMScope::FLLMScope(&local_174,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_170 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(local_168,&local_170,true);
  FStripDataFlags::FStripDataFlags(local_178,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  if ((local_178[0].GlobalStripFlags & 2) == 0) {
    if ((((param_1->field_0x28 & 4) == 0) || (!param_3)) || (*(longlong *)&param_1->field_0x68 == 0)
       ) {
      pIVar2 = (ITargetPlatform *)0x0;
    }
    else {
      pIVar2 = *(ITargetPlatform **)(*(longlong *)&param_1->field_0x68 + 8);
    }
    if ((0 < (this->PageStreamingStates).ArrayNum) && (pIVar2 != (ITargetPlatform *)0x0)) {
      bVar1 = DoesTargetPlatformSupportNanite(pIVar2);
      if (!bVar1) {
        FResources(&local_158);
        SerializeInternal(&local_158,param_1,param_2,param_3);
        ~FResources(&local_158);
        goto LAB_148423527;
      }
    }
    SerializeInternal(this,param_1,param_2,param_3);
  }
LAB_148423527:
  FMemScope::~FMemScope(local_168);
  FLLMScope::~FLLMScope(&local_174);
  return;
}

// SerializeInternal @ 148423570

void __thiscall
Nanite::FResources::SerializeInternal
          (FResources *this,FArchive *param_1,UObject *param_2,bool param_3)

{
  float *pfVar1;
  int *piVar2;
  ulong64 *puVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  float *pfVar6;
  uint *puVar7;
  int *piVar8;
  uint *puVar9;
  ulong64 *puVar10;
  code *pcVar11;
  bool bVar12;
  FArchive *pFVar13;
  long64 lVar14;
  uint local_res8 [2];
  
  if (((param_1->field_0x28 & 4) == 0) || (!param_3)) {
    puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ResourceFlags,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&this->ResourceFlags);
      }
    }
    else {
      this->ResourceFlags = *puVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    local_res8[0] = this->ResourceFlags;
  }
  else {
    plVar5 = *(longlong **)&param_1->field_0x8;
    local_res8[0] = this->ResourceFlags & 0xfffffffe;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
  }
  if ((local_res8[0] & 1) == 0) {
    FBulkData::Serialize((FBulkData *)&this->StreamablePages,param_1,param_2,false,1,None);
  }
  else {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                        ,0x168,L"DDC streaming should only happen in editor");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&this->RootData)
  ;
  TArrayPrivateFriend::Serialize<Nanite::FPageStreamingState,TSizedDefaultAllocator<32>_>
            (param_1,&this->PageStreamingStates);
  TArrayPrivateFriend::Serialize<Nanite::FPackedHierarchyNode,TSizedDefaultAllocator<32>_>
            (param_1,&this->HierarchyNodes);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&this->HierarchyRootOffsets);
  TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>
            (param_1,&this->PageDependencies);
  TArrayPrivateFriend::Serialize<FMatrix3x4,TSizedDefaultAllocator<32>_>
            (param_1,&this->AssemblyTransforms);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&this->AssemblyBoneAttachmentData);
  TArrayPrivateFriend::Serialize<Nanite::FPageRangeKey,TSizedDefaultAllocator<32>_>
            (param_1,&this->PageRangeLookup);
  pfVar1 = &(this->MeshBounds).SphereRadius;
  pFVar13 = UE::Math::operator<<(param_1,&(this->MeshBounds).Origin);
  pFVar13 = UE::Math::operator<<(pFVar13,&(this->MeshBounds).BoxExtent);
  pfVar6 = (float *)**(undefined8 **)&pFVar13->field_0x8;
  if ((float *)(*(undefined8 **)&pFVar13->field_0x8)[1] < pfVar6 + 1) {
    if ((pFVar13->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar13 + 0x188))(pFVar13,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar13,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&pFVar13->field_0x8 = **(longlong **)&pFVar13->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>
            (param_1,&this->ImposterAtlas);
  puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumRootPages,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->NumRootPages);
    }
  }
  else {
    this->NumRootPages = *puVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &this->PositionPrecision;
  puVar4 = &param_1->field_0x2a;
  piVar8 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar8 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &this->NormalPrecision;
  piVar8 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar8 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar7 = &this->NumInputTriangles;
  puVar9 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar7,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar7);
    }
  }
  else {
    *puVar7 = *puVar9;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar7 = &this->NumInputVertices;
  puVar9 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar7,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar7);
    }
  }
  else {
    *puVar7 = *puVar9;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar7 = &this->NumClusters;
  puVar9 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar9 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar7,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar7);
    }
  }
  else {
    *puVar7 = *puVar9;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = &this->VoxelMaterialsMask;
  puVar10 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar10 + 1) {
    if ((*puVar4 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar10;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  if (this->NumRootPages < (uint)(this->PageStreamingStates).ArrayNum) {
    lVar14 = FBulkData::GetBulkDataSize((FBulkData *)&this->StreamablePages);
    if (lVar14 < 1) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!HasStreamingData() || StreamablePages.GetBulkDataSize() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\NaniteResources.cpp"
                          ,0x183,L"");
      if (bVar12) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
  return;
}

// FResources @ 1487103d0

FResources * __thiscall UE::SVT::FResources::FResources(FResources *this)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  
  (this->Header).VirtualVolumeAABBMin.field0_0x0._s_0.X = 0x7fffffff;
  *(undefined8 *)&(this->Header).VirtualVolumeResolution.field0_0x0 = 0;
  (this->Header).VirtualVolumeResolution.field0_0x0._s_0.Z = 0;
  *(undefined8 *)&(this->Header).PageTableVolumeResolution.field0_0x0 = 0;
  (this->Header).PageTableVolumeResolution.field0_0x0._s_0.Z = 0;
  (this->Header).VirtualVolumeAABBMin.field0_0x0._s_0.Y = 0x7fffffff;
  (this->Header).VirtualVolumeAABBMin.field0_0x0._s_0.Z = 0x7fffffff;
  (this->Header).VirtualVolumeAABBMax.field0_0x0._s_0.X = -0x80000000;
  (this->Header).VirtualVolumeAABBMax.field0_0x0._s_0.Y = -0x80000000;
  (this->Header).VirtualVolumeAABBMax.field0_0x0._s_0.Z = -0x80000000;
  (this->Header).PageTableVolumeAABBMin.field0_0x0._s_0.X = 0x7fffffff;
  (this->Header).PageTableVolumeAABBMin.field0_0x0._s_0.Y = 0x7fffffff;
  (this->Header).PageTableVolumeAABBMin.field0_0x0._s_0.Z = 0x7fffffff;
  (this->Header).PageTableVolumeAABBMax.field0_0x0._s_0.X = -0x80000000;
  (this->Header).PageTableVolumeAABBMax.field0_0x0._s_0.Y = -0x80000000;
  (this->Header).PageTableVolumeAABBMax.field0_0x0._s_0.Z = -0x80000000;
  *(undefined2 *)(this->Header).AttributesFormats.Elements = 0;
  *(undefined8 *)&(this->Header).FallbackValues.Elements[0].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Header).FallbackValues.Elements[0].field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->Header).FallbackValues.Elements[1].field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Header).FallbackValues.Elements[1].field0_0x0 + 8) = 0;
  this->ResourceFlags = 0;
  this->NumMipLevels = 0;
  (this->StreamingMetaData).TileDataOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingMetaData).TileDataOffsets.ArrayNum = 0;
  (this->StreamingMetaData).TileDataOffsets.ArrayMax = 0;
  (this->StreamingMetaData).NumVoxelsA.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingMetaData).NumVoxelsA.ArrayNum = 0;
  (this->StreamingMetaData).NumVoxelsA.ArrayMax = 0;
  (this->RootData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootData).ArrayNum = 0;
  (this->RootData).ArrayMax = 0;
  *(undefined8 *)&this->StreamableMipLevels = 0;
  *(undefined8 *)&(this->StreamableMipLevels).field_0x8 = 0;
  *(undefined8 *)&(this->StreamableMipLevels).field_0x10 = 0;
  *(undefined4 *)&(this->StreamableMipLevels).field_0xd = 0xffffffff;
  (this->StreamableMipLevels).field_0x11 = 0xff;
  uVar1 = FIoChunkId::InvalidChunkId.Id[1];
  uVar2 = FIoChunkId::InvalidChunkId.Id[2];
  uVar3 = FIoChunkId::InvalidChunkId.Id[3];
  uVar4 = FIoChunkId::InvalidChunkId.Id[4];
  uVar5 = FIoChunkId::InvalidChunkId.Id[5];
  uVar6 = FIoChunkId::InvalidChunkId.Id[6];
  uVar7 = FIoChunkId::InvalidChunkId.Id[7];
  (this->StreamableMipLevels).field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (this->StreamableMipLevels).field_0x19 = uVar1;
  (this->StreamableMipLevels).field_0x1a = uVar2;
  (this->StreamableMipLevels).field_0x1b = uVar3;
  (this->StreamableMipLevels).field_0x1c = uVar4;
  (this->StreamableMipLevels).field_0x1d = uVar5;
  (this->StreamableMipLevels).field_0x1e = uVar6;
  (this->StreamableMipLevels).field_0x1f = uVar7;
  uVar1 = FIoChunkId::InvalidChunkId.Id[9];
  uVar2 = FIoChunkId::InvalidChunkId.Id[10];
  uVar3 = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->StreamableMipLevels).field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (this->StreamableMipLevels).field_0x21 = uVar1;
  (this->StreamableMipLevels).field_0x22 = uVar2;
  (this->StreamableMipLevels).field_0x23 = uVar3;
  (this->Topology).MipInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Topology).MipInfo.ArrayNum = 0;
  (this->Topology).MipInfo.ArrayMax = 0;
  (this->Topology).PackedPageTableCoords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Topology).PackedPageTableCoords.ArrayNum = 0;
  (this->Topology).PackedPageTableCoords.ArrayMax = 0;
  (this->Topology).TileIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Topology).TileIndices.ArrayNum = 0;
  (this->Topology).TileIndices.ArrayMax = 0;
  (this->Topology).ParentIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Topology).ParentIndices.ArrayNum = 0;
  (this->Topology).ParentIndices.ArrayMax = 0;
  return this;
}

// ~FResources @ 148714090

void __thiscall UE::SVT::FResources::~FResources(FResources *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Topology).ParentIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Topology).TileIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Topology).PackedPageTableCoords.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Topology).MipInfo.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBulkData::~FBulkData((FBulkData *)&this->StreamableMipLevels);
  pFVar1 = (this->RootData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StreamingMetaData).NumVoxelsA.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StreamingMetaData).TileDataOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 1487181c0

void __thiscall
`UE::SVT::FResources::CompressTiles'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  short *psVar1;
  longlong lVar2;
  size_t _Size;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_res18;
  
  lVar9 = 0;
  lVar10 = (longlong)param_1;
  local_res18 = 2;
  lVar11 = lVar9;
  do {
    uVar8 = 0;
    if (*(char *)(lVar9 + *(longlong *)this) != '\0') {
      lVar2 = *(longlong *)((longlong)this + 8);
      uVar5 = 0;
      if (param_1 < *(int *)(lVar2 + 8 + lVar11)) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined2 *)(*(longlong *)(lVar2 + lVar11) + lVar10 * 2) = 0;
      do {
        _Size = *(size_t *)(*(longlong *)((longlong)this + 0x18) + lVar9 * 8);
        iVar6 = memcmp((void *)(((longlong)(param_1 * 0x16c8) + uVar8) * _Size +
                               *(longlong *)(*(longlong *)((longlong)this + 0x10) + lVar9 * 8)),
                       (void *)(*(longlong *)((longlong)this + 0x20) + lVar11),_Size);
        if (iVar6 != 0) {
          lVar7 = (uVar8 >> 5) + lVar10 * 0xb7;
          lVar2 = *(longlong *)(*(longlong *)((longlong)this + 0x28) + lVar9 * 8);
          *(uint *)(lVar2 + lVar7 * 4) = *(uint *)(lVar2 + lVar7 * 4) | 1 << ((uint)uVar8 & 0x1f);
          lVar2 = *(longlong *)((longlong)this + 8);
          uVar5 = 0;
          if (param_1 < *(int *)(lVar2 + 8 + lVar11)) {
            uVar5 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          psVar1 = (short *)(*(longlong *)(lVar2 + lVar11) + lVar10 * 2);
          *psVar1 = *psVar1 + 1;
        }
        uVar8 = uVar8 + 1;
      } while ((longlong)uVar8 < 0x16c8);
    }
    lVar11 = lVar11 + 0x10;
    lVar9 = lVar9 + 1;
    local_res18 = local_res18 + -1;
    if (local_res18 == 0) {
      return;
    }
  } while( true );
}

// operator() @ 14871aef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::SVT::FResources::CompressTiles'::__l2::<lambda_2>::operator()(void *this,uint param_1)

{
  longlong *plVar1;
  size_t _Size;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStackY_98 [32];
  FTileInfo local_68;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_98;
  plVar1 = *(longlong **)this;
  if (param_1 < *(uint *)(plVar1 + 4)) {
    puVar10 = (undefined8 *)**(undefined8 **)((longlong)this + 0x18);
  }
  else {
    uVar6 = 0;
    if ((int)param_1 < (int)plVar1[1]) {
      uVar6 = ~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar10 = (undefined8 *)
              (((ulonglong)*(uint *)(*plVar1 + (longlong)(int)param_1 * 4) -
               (ulonglong)**(uint **)((longlong)this + 0x10)) + **(longlong **)((longlong)this + 8))
    ;
  }
  UE::SVT::FTileStreamingMetaData::GetTileInfo
            (*(FTileStreamingMetaData **)this,&local_68,param_1,**(uint **)((longlong)this + 0x20),
             (*(uint **)((longlong)this + 0x20))[2]);
  lVar8 = 5;
  puVar11 = puVar10;
  if (**(char **)((longlong)this + 0x28) != '\0') {
    if (puVar10 !=
        (undefined8 *)((ulonglong)local_68.OccupancyBitsOffsets.Elements[0] + (longlong)puVar10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WritePtr == (BaseWritePtr + TileInfo.OccupancyBitsOffsets[AttributesIdx])"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                         ,0x343,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar7 = 5;
    puVar11 = (undefined8 *)
              (**(longlong **)((longlong)this + 0x30) + (ulonglong)(param_1 * 0xb7) * 4);
    puVar4 = puVar10;
    do {
      puVar13 = puVar4;
      puVar12 = puVar11;
      uVar3 = puVar12[1];
      *puVar13 = *puVar12;
      puVar13[1] = uVar3;
      uVar3 = puVar12[3];
      puVar13[2] = puVar12[2];
      puVar13[3] = uVar3;
      uVar3 = puVar12[5];
      puVar13[4] = puVar12[4];
      puVar13[5] = uVar3;
      uVar3 = puVar12[7];
      puVar13[6] = puVar12[6];
      puVar13[7] = uVar3;
      uVar3 = puVar12[9];
      puVar13[8] = puVar12[8];
      puVar13[9] = uVar3;
      uVar3 = puVar12[0xb];
      puVar13[10] = puVar12[10];
      puVar13[0xb] = uVar3;
      uVar3 = puVar12[0xd];
      puVar13[0xc] = puVar12[0xc];
      puVar13[0xd] = uVar3;
      uVar3 = puVar12[0xf];
      puVar13[0xe] = puVar12[0xe];
      puVar13[0xf] = uVar3;
      lVar7 = lVar7 + -1;
      puVar11 = puVar12 + 0x10;
      puVar4 = puVar13 + 0x10;
    } while (lVar7 != 0);
    uVar3 = puVar12[0x11];
    puVar11 = (undefined8 *)((longlong)puVar10 + 0x2dc);
    puVar13[0x10] = puVar12[0x10];
    puVar13[0x11] = uVar3;
    uVar3 = puVar12[0x13];
    puVar13[0x12] = puVar12[0x12];
    puVar13[0x13] = uVar3;
    uVar3 = puVar12[0x15];
    puVar13[0x14] = puVar12[0x14];
    puVar13[0x15] = uVar3;
    uVar3 = puVar12[0x17];
    puVar13[0x16] = puVar12[0x16];
    puVar13[0x17] = uVar3;
    uVar3 = puVar12[0x19];
    puVar13[0x18] = puVar12[0x18];
    puVar13[0x19] = uVar3;
    puVar13[0x1a] = puVar12[0x1a];
    *(undefined4 *)(puVar13 + 0x1b) = *(undefined4 *)(puVar12 + 0x1b);
  }
  if (*(char *)(*(longlong *)((longlong)this + 0x28) + 1) != '\0') {
    if (puVar11 !=
        (undefined8 *)((ulonglong)local_68.OccupancyBitsOffsets.Elements[1] + (longlong)puVar10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WritePtr == (BaseWritePtr + TileInfo.OccupancyBitsOffsets[AttributesIdx])"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                         ,0x343,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar4 = puVar11;
    puVar12 = (undefined8 *)
              (*(longlong *)(*(longlong *)((longlong)this + 0x30) + 8) +
              (ulonglong)(param_1 * 0xb7) * 4);
    do {
      puVar14 = puVar12;
      puVar13 = puVar4;
      uVar3 = puVar14[1];
      *puVar13 = *puVar14;
      puVar13[1] = uVar3;
      uVar3 = puVar14[3];
      puVar13[2] = puVar14[2];
      puVar13[3] = uVar3;
      uVar3 = puVar14[5];
      puVar13[4] = puVar14[4];
      puVar13[5] = uVar3;
      uVar3 = puVar14[7];
      puVar13[6] = puVar14[6];
      puVar13[7] = uVar3;
      uVar3 = puVar14[9];
      puVar13[8] = puVar14[8];
      puVar13[9] = uVar3;
      uVar3 = puVar14[0xb];
      puVar13[10] = puVar14[10];
      puVar13[0xb] = uVar3;
      uVar3 = puVar14[0xd];
      puVar13[0xc] = puVar14[0xc];
      puVar13[0xd] = uVar3;
      uVar3 = puVar14[0xf];
      puVar13[0xe] = puVar14[0xe];
      puVar13[0xf] = uVar3;
      lVar8 = lVar8 + -1;
      puVar4 = puVar13 + 0x10;
      puVar12 = puVar14 + 0x10;
    } while (lVar8 != 0);
    uVar3 = puVar14[0x11];
    puVar11 = (undefined8 *)((longlong)puVar11 + 0x2dc);
    puVar13[0x10] = puVar14[0x10];
    puVar13[0x11] = uVar3;
    uVar3 = puVar14[0x13];
    puVar13[0x12] = puVar14[0x12];
    puVar13[0x13] = uVar3;
    uVar3 = puVar14[0x15];
    puVar13[0x14] = puVar14[0x14];
    puVar13[0x15] = uVar3;
    uVar3 = puVar14[0x17];
    puVar13[0x16] = puVar14[0x16];
    puVar13[0x17] = uVar3;
    uVar3 = puVar14[0x19];
    puVar13[0x18] = puVar14[0x18];
    puVar13[0x19] = uVar3;
    puVar13[0x1a] = puVar14[0x1a];
    *(undefined4 *)(puVar13 + 0x1b) = *(undefined4 *)(puVar14 + 0x1b);
  }
  lVar8 = 0;
  do {
    if (*(char *)(lVar8 + *(longlong *)((longlong)this + 0x28)) != '\0') {
      if (puVar11 !=
          (undefined8 *)((ulonglong)local_68.VoxelDataOffsets.Elements[lVar8] + (longlong)puVar10))
      {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("WritePtr == (BaseWritePtr + TileInfo.VoxelDataOffsets[AttributesIdx])",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                           ,0x34e,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar9 = 0;
      lVar7 = *(longlong *)(*(longlong *)((longlong)this + 0x30) + lVar8 * 8);
      do {
        if ((*(uint *)(lVar7 + (ulonglong)(param_1 * 0xb7) * 4 + (uVar9 >> 5) * 4) >>
             ((uint)uVar9 & 0x1f) & 1) != 0) {
          _Size = *(size_t *)(*(longlong *)((longlong)this + 0x20) + lVar8 * 8);
          memcpy(puVar11,(void *)((param_1 * 0x16c8 + uVar9) * _Size +
                                 *(longlong *)(*(longlong *)((longlong)this + 0x38) + lVar8 * 8)),
                 _Size);
          puVar11 = (undefined8 *)
                    ((longlong)puVar11 +
                    *(longlong *)(*(longlong *)((longlong)this + 0x20) + lVar8 * 8));
        }
        uVar9 = uVar9 + 1;
      } while ((longlong)uVar9 < 0x16c8);
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 < 2);
  if ((longlong)puVar11 - (longlong)puVar10 != (ulonglong)local_68.Size) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(WritePtr - BaseWritePtr) == TileInfo.Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                       ,0x35e,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// CompressTiles @ 14872a7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FTileStreamingMetaData * __cdecl
UE::SVT::FResources::CompressTiles
          (FTileStreamingMetaData *__return_storage_ptr__,FPageTopology *param_1,
          FDerivedTextureData *param_2,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_4)

{
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar1;
  uchar *puVar2;
  uint uVar3;
  code *pcVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FTileStreamingMetaData *pFVar11;
  uint uVar12;
  uint uVar13;
  uchar *puVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStackY_218 [32];
  <lambda_1> local_1d8;
  EPixelFormat local_1d7;
  FTileStreamingMetaData local_1d0;
  FTileStreamingMetaData *local_1a8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_1a0;
  FPageTopology *local_190;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_188;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *local_180;
  FScriptContainerElement *local_178;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  FScriptContainerElement *local_158;
  FScriptContainerElement *local_150;
  TArrayView<std::nullptr_t,int> local_148;
  code *local_138;
  <lambda_1> **local_130;
  TArrayView<std::nullptr_t,int> local_128;
  code *local_118;
  FTileStreamingMetaData **local_110;
  <lambda_1> *local_108;
  ForAnyElementType *local_100;
  FScriptContainerElement **local_f8;
  int *local_f0;
  uchar *local_e8;
  FScriptContainerElement **local_e0;
  FTileStreamingMetaData *local_d8;
  FScriptContainerElement **local_d0;
  undefined1 *local_c8;
  FScriptContainerElement **local_c0;
  int *local_b8;
  <lambda_1> *local_b0;
  FScriptContainerElement **local_a8;
  FScriptContainerElement **local_a0;
  ForAnyElementType local_98;
  int local_90 [2];
  ForAnyElementType local_88;
  int local_80 [2];
  uchar local_78 [32];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_180 = param_4;
  bVar18 = -1 < CpuChannel->Enabled;
  local_1a8 = __return_storage_ptr__;
  local_190 = param_1;
  local_188 = param_3;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId726,"SVT::FResources::Build::CompressTiles",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
               ,0x2d6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId726);
  }
  local_1d8 = (<lambda_1>)(param_2->Header).AttributesFormats.Elements[0];
  local_1d7 = (param_2->Header).AttributesFormats.Elements[1];
  pFVar10 = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_1d0.NumVoxelsA._8_8_ = SEXT48(GPixelFormats[(byte)local_1d8].BlockBytes);
  local_1d0._32_8_ = SEXT48(GPixelFormats[local_1d7].BlockBytes);
  bVar19 = local_1d8 != (<lambda_1>)0x0;
  if (bVar19) {
    WriteVoxel(0,local_78,(EPixelFormat)local_1d8,(param_2->Header).FallbackValues.Elements,-1);
  }
  uVar15 = (uint)bVar19;
  if (local_1d7 != PF_Unknown) {
    uVar15 = uVar15 + 1;
    WriteVoxel(0,local_78 + 0x10,(param_2->Header).AttributesFormats.Elements[1],
               (param_2->Header).FallbackValues.Elements + 1,-1);
  }
  local_158 = (param_2->PhysicalTileDataA).AllocatorInstance.Data;
  uVar3 = param_2->NumPhysicalTiles;
  local_150 = (param_2->PhysicalTileDataB).AllocatorInstance.Data;
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = 0;
  local_1a0.ArrayMax = 0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&local_1a0,uVar3 * 0xb7 * uVar15,Default);
  local_168 = pFVar10;
  if (local_1d0.NumVoxelsA._8_8_ != 0) {
    local_168 = local_1a0.AllocatorInstance.Data;
  }
  if (local_1d0._32_8_ != 0) {
    if (local_1d0.NumVoxelsA._8_8_ != 0) {
      pFVar10 = (FScriptContainerElement *)(ulonglong)(uVar3 * 0xb7);
    }
    pFVar10 = local_1a0.AllocatorInstance.Data + (longlong)pFVar10 * 4;
  }
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80[0] = 0;
  local_80[1] = 0;
  local_160 = pFVar10;
  if ((int)uVar3 < 1) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
  }
  else {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar3,&local_98,local_90,local_90 + 1);
    memset(local_98.Data + (longlong)iVar7 * 2,0,(longlong)(int)uVar3 * 2);
    iVar7 = local_80[0];
  }
  uVar12 = 0;
  if (0 < (longlong)local_1d0._32_8_) {
    uVar12 = uVar3;
  }
  if (iVar7 < (int)uVar12) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar12 - iVar7,&local_88,local_80,local_80 + 1);
    memset(local_88.Data + (longlong)iVar8 * 2,0,(longlong)(int)(uVar12 - iVar7) * 2);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar7) {
      uVar13 = iVar7 - uVar12;
      if ((int)(uVar13 | uVar12) < 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar19) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
          return pFVar11;
        }
        iVar7 = local_80[0];
      }
      if (uVar13 != 0) {
        iVar8 = (iVar7 - uVar13) - uVar12;
        if (iVar8 != 0) {
          memmove(local_88.Data + (longlong)(int)uVar12 * 2,
                  local_88.Data + (longlong)(int)uVar12 * 2 + (longlong)(int)uVar13 * 2,
                  (longlong)iVar8 * 2);
          iVar7 = local_80[0];
        }
        local_80[0] = iVar7 - uVar13;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,&local_88,iVar7 - uVar13,local_80 + 1);
      }
    }
  }
  local_108 = &local_1d8;
  local_148.DataPtr = (void **)0x0;
  local_100 = &local_98;
  local_148.ArrayNum = 0;
  local_f8 = &local_158;
  local_f0 = &local_1d0.NumVoxelsA.ArrayNum;
  local_e8 = local_78;
  local_e0 = &local_168;
  local_138 = Core::Private::Function::
              TFunctionRefCaller<`UE::SVT::FResources::CompressTiles'::__l2::<lambda_1>,void,int>::
              Call;
  local_130 = &local_108;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar3,1,(TFunctionRef<void___cdecl(int)> *)&local_138,local_1d8,
             None,&local_148);
  iVar7 = 0;
  local_1d0.TileDataOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar12 = uVar3 + 1;
  local_1d0.TileDataOffsets.ArrayNum = 0;
  local_1d0.TileDataOffsets.ArrayMax = 0;
  if ((int)uVar12 < 1) {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
  }
  else {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar12,(ForAnyElementType *)&local_1d0,
                       &local_1d0.TileDataOffsets.ArrayNum,&local_1d0.TileDataOffsets.ArrayMax);
    memset(local_1d0.TileDataOffsets.AllocatorInstance.Data + (longlong)iVar7 * 4,0,
           (longlong)(int)uVar12 << 2);
    iVar7 = local_1d0.TileDataOffsets.ArrayNum;
  }
  uVar12 = 0;
  uVar13 = 0;
  if (uVar3 != 0) {
    do {
      uVar16 = ~uVar13 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < iVar7) {
        uVar9 = uVar16;
      }
      local_1d0.NumVoxelsA.AllocatorInstance.Data._0_4_ = uVar12;
      if ((uVar9 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
        return pFVar11;
      }
      lVar17 = (longlong)(int)uVar13;
      *(uint *)(local_1d0.TileDataOffsets.AllocatorInstance.Data + lVar17 * 4) = uVar12;
      uVar12 = uVar12 + uVar15 * 0x2dc;
      if (local_1d8 != (<lambda_1>)0x0) {
        uVar9 = 0;
        if ((int)uVar13 < local_90[0]) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
          return pFVar11;
        }
        uVar12 = uVar12 + (uint)*(ushort *)(local_98.Data + lVar17 * 2) *
                          local_1d0.NumVoxelsA.ArrayNum;
      }
      if (local_1d7 != PF_Unknown) {
        uVar9 = 0;
        if ((int)uVar13 < local_80[0]) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
          return pFVar11;
        }
        uVar12 = uVar12 + *(ushort *)(local_88.Data + lVar17 * 2) *
                          local_1d0.FirstStreamingTileIndex;
      }
      if ((uVar12 <= (uint)local_1d0.NumVoxelsA.AllocatorInstance.Data) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("PrevOffset < CurrentOffset",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                              ,0x31c,L"SVT streaming data overflowed the uint32 range!"), bVar19)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
        return pFVar11;
      }
      uVar13 = uVar13 + 1;
      param_1 = local_190;
      iVar7 = local_1d0.TileDataOffsets.ArrayNum;
    } while (uVar13 < uVar3);
  }
  lVar17 = 2;
  uVar15 = 0;
  if ((int)uVar3 < iVar7) {
    uVar15 = ~uVar3 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
    return pFVar11;
  }
  pTVar1 = &local_1a8->NumVoxelsA;
  *(uint *)(local_1d0.TileDataOffsets.AllocatorInstance.Data + (longlong)(int)uVar3 * 4) = uVar12;
  (local_1a8->TileDataOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (local_1a8->TileDataOffsets).ArrayNum = 0;
  (local_1a8->TileDataOffsets).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (local_1a8->NumVoxelsA).ArrayNum = 0;
  (local_1a8->NumVoxelsA).ArrayMax = 0;
  if (local_1a8 != &local_1d0) {
    (local_1a8->TileDataOffsets).AllocatorInstance.Data =
         local_1d0.TileDataOffsets.AllocatorInstance.Data;
    (local_1a8->TileDataOffsets).ArrayNum = local_1d0.TileDataOffsets.ArrayNum;
    (local_1a8->TileDataOffsets).ArrayMax = local_1d0.TileDataOffsets.ArrayMax;
    local_1d0.TileDataOffsets.ArrayNum = 0;
    local_1d0.TileDataOffsets.ArrayMax = 0;
    local_1d0.TileDataOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (pTVar1 != (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)&local_98) {
    (pTVar1->AllocatorInstance).Data = local_98.Data;
    (local_1a8->NumVoxelsA).ArrayNum = local_90[0];
    (local_1a8->NumVoxelsA).ArrayMax = local_90[1];
    local_90[0] = 0;
    local_90[1] = 0;
    local_98.Data = (FScriptContainerElement *)0x0;
  }
  iVar7 = (param_1->MipInfo).ArrayNum;
  uVar13 = iVar7 - 1;
  uVar15 = 0;
  if ((int)uVar13 < iVar7) {
    uVar15 = ~uVar13 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
    return pFVar11;
  }
  iVar7 = (param_1->MipInfo).ArrayNum;
  pFVar10 = (param_1->MipInfo).AllocatorInstance.Data;
  uVar13 = iVar7 - 1;
  uVar15 = 0;
  if ((int)uVar13 < iVar7) {
    uVar15 = ~uVar13 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
    return pFVar11;
  }
  local_1a8->FirstStreamingTileIndex =
       *(int *)((param_1->MipInfo).AllocatorInstance.Data +
               (longlong)(param_1->MipInfo).ArrayNum * 8 + -8) +
       *(int *)(pFVar10 + (longlong)(int)uVar13 * 8 + 4);
  iVar7 = (param_1->MipInfo).ArrayNum;
  uVar13 = iVar7 - 1;
  uVar15 = 0;
  if ((int)uVar13 < iVar7) {
    uVar15 = ~uVar13 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
    return pFVar11;
  }
  if ((*(int *)((param_1->MipInfo).AllocatorInstance.Data +
               (longlong)(param_1->MipInfo).ArrayNum * 8 + -8) != 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Topology.MipInfo.Last().PageOffset == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                          ,0x329,L""), bVar19)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
    return pFVar11;
  }
  iVar7 = (param_1->MipInfo).ArrayNum;
  uVar13 = iVar7 - 1;
  uVar15 = 0;
  if ((int)uVar13 < iVar7) {
    uVar15 = ~uVar13 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
    return pFVar11;
  }
  if ((1 < *(uint *)((param_1->MipInfo).AllocatorInstance.Data +
                    (longlong)(param_1->MipInfo).ArrayNum * 8 + -4)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Topology.MipInfo.Last().PageCount <= 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                          ,0x32a,L""), bVar19)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
    return pFVar11;
  }
  iVar7 = (param_1->MipInfo).ArrayNum;
  uVar13 = iVar7 - 1;
  uVar15 = 0;
  if ((int)uVar13 < iVar7) {
    uVar15 = ~uVar13 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
    return pFVar11;
  }
  if (*(int *)((param_1->MipInfo).AllocatorInstance.Data +
              (longlong)(param_1->MipInfo).ArrayNum * 8 + -4) != 0) {
    if (((param_1->TileIndices).ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
      return pFVar11;
    }
    if ((*(int *)(param_1->TileIndices).AllocatorInstance.Data != 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Topology.MipInfo.Last().PageCount == 0 || Topology.TileIndices[0] == 0"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                            ,0x32b,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
      return pFVar11;
    }
  }
  pFVar11 = local_1a8;
  if (((local_1a8->TileDataOffsets).ArrayNum < 1) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
    return pFVar11;
  }
  uVar15 = pFVar11->FirstStreamingTileIndex;
  pFVar10 = (pFVar11->TileDataOffsets).AllocatorInstance.Data;
  uVar13 = 0;
  if ((int)uVar15 < (pFVar11->TileDataOffsets).ArrayNum) {
    uVar13 = ~uVar15 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FTileStreamingMetaData *)(*pcVar4)();
    return pFVar11;
  }
  pTVar5 = local_188;
  local_1d0.NumVoxelsA.AllocatorInstance.Data._4_4_ =
       *(int *)((pFVar11->TileDataOffsets).AllocatorInstance.Data + (longlong)(int)uVar15 * 4) -
       *(int *)pFVar10;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum
            (local_188,local_1d0.NumVoxelsA.AllocatorInstance.Data._4_4_,Default);
  pTVar6 = local_180;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum
            (local_180,(ulonglong)(uVar12 - local_1d0.NumVoxelsA.AllocatorInstance.Data._4_4_),
             Default);
  local_170 = (pTVar5->AllocatorInstance).Data;
  local_178 = (pTVar6->AllocatorInstance).Data;
  local_d0 = &local_178;
  local_128.DataPtr = (void **)0x0;
  local_c8 = (undefined1 *)((longlong)&local_1d0.NumVoxelsA.AllocatorInstance.Data + 4);
  local_c0 = &local_170;
  local_b8 = &local_1d0.NumVoxelsA.ArrayNum;
  local_b0 = &local_1d8;
  local_a8 = &local_168;
  local_a0 = &local_158;
  local_118 = Core::Private::Function::
              TFunctionRefCaller<`UE::SVT::FResources::CompressTiles'::__l2::<lambda_2>,void,int>::
              Call;
  local_110 = &local_d8;
  local_128.ArrayNum = 0;
  local_d8 = pFVar11;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar3,1,(TFunctionRef<void___cdecl(int)> *)&local_118,local_1d8,
             None,&local_128);
  if (local_1d0.TileDataOffsets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.TileDataOffsets.AllocatorInstance.Data);
  }
  puVar14 = local_78;
  do {
    puVar2 = puVar14 + -0x10;
    puVar14 = puVar14 + -0x10;
    lVar17 = lVar17 + -1;
    if (*(void **)puVar2 != (void *)0x0) {
      FMemory::Free(*(void **)puVar2);
    }
  } while (lVar17 != 0);
  if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.AllocatorInstance.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar11;
}

// HasStreamingData @ 148742b50

bool __thiscall UE::SVT::FResources::HasStreamingData(FResources *this)

{
  return (this->StreamingMetaData).NumVoxelsA.ArrayNum !=
         (this->StreamingMetaData).FirstStreamingTileIndex;
}

// Serialize @ 148756b80

void __thiscall
UE::SVT::FResources::Serialize(FResources *this,FArchive *param_1,UObject *param_2,bool param_3)

{
  longlong *plVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  long64 lVar5;
  FStripDataFlags local_28 [2];
  uint local_24 [3];
  
  FStripDataFlags::FStripDataFlags(local_28,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  if ((local_28[0].GlobalStripFlags & 2) == 0) {
    ::operator<<(param_1,&this->Header);
    if (((param_1->field_0x28 & 4) == 0) || (!param_3)) {
      ::operator<<(param_1,&this->ResourceFlags);
      local_24[0] = this->ResourceFlags;
    }
    else {
      plVar1 = *(longlong **)&param_1->field_0x8;
      local_24[0] = this->ResourceFlags & 0xfffffffe;
      if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_24,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_24);
        }
      }
      else {
        local_24[0] = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
    }
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              (param_1,&(this->StreamingMetaData).TileDataOffsets);
    TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>
              (param_1,&(this->StreamingMetaData).NumVoxelsA);
    puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      puVar2 = &(this->StreamingMetaData).FirstStreamingTileIndex;
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar2);
      }
    }
    else {
      (this->StreamingMetaData).FirstStreamingTileIndex = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              (param_1,&this->RootData);
    TArrayPrivateFriend::Serialize<UE::SVT::FPageTopology::FMip,TSizedDefaultAllocator<32>_>
              (param_1,&(this->Topology).MipInfo);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              (param_1,&(this->Topology).PackedPageTableCoords);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              (param_1,&(this->Topology).TileIndices);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              (param_1,&(this->Topology).ParentIndices);
    if ((local_24[0] & 1) == 0) {
      FBulkData::Serialize((FBulkData *)&this->StreamableMipLevels,param_1,param_2,false,1,None);
    }
    else {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                         ,0x131,
                         L"UE::SVT::FResources was serialized with EResourceFlag_StreamingDataInDDC in a cooked build!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((((this->StreamingMetaData).NumVoxelsA.ArrayNum !=
          (this->StreamingMetaData).FirstStreamingTileIndex) &&
        (lVar5 = FBulkData::GetBulkDataSize((FBulkData *)&this->StreamableMipLevels), lVar5 < 1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasStreamingData() || StreamableMipLevels.GetBulkDataSize() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTexture.cpp"
                           ,0x13a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

