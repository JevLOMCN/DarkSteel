// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// <lambda_invoker_cdecl> @ 148703560

void __cdecl
`FStaticMeshRayTracingProxyLOD::IssueRequest'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (EStatus param_1)

{
  if (0 < FRenderAssetStreamingSettings::ExtraIOLatencyRayTracing) {
    FWindowsPlatformProcess::Sleep
              ((float)FRenderAssetStreamingSettings::ExtraIOLatencyRayTracing * __real_3a83126f);
    return;
  }
  return;
}

// ~FStaticMeshRayTracingProxyLOD @ 148714540

void __thiscall
FStaticMeshRayTracingProxyLOD::~FStaticMeshRayTracingProxyLOD(FStaticMeshRayTracingProxyLOD *this)

{
  FRayTracingGeometry *pFVar1;
  FStaticMeshVertexBuffers *this_00;
  FRawStaticIndexBuffer *pFVar2;
  FStaticMeshSectionArray *pFVar3;
  
  this->_padding_ = (longlong)&___7FStaticMeshRayTracingProxyLOD__6B_;
  if ((this->bOwnsRayTracingGeometry) &&
     (pFVar1 = this->RayTracingGeometry, pFVar1 != (FRayTracingGeometry *)0x0)) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  if (this->bOwnsBuffers) {
    this_00 = this->VertexBuffers;
    if (this_00 != (FStaticMeshVertexBuffers *)0x0) {
      FColorVertexBuffer::~FColorVertexBuffer(&this_00->ColorVertexBuffer);
      FPositionVertexBuffer::~FPositionVertexBuffer(&this_00->PositionVertexBuffer);
      FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
      ::operator_delete(this_00,0x158);
    }
    pFVar2 = this->IndexBuffer;
    if (pFVar2 != (FRawStaticIndexBuffer *)0x0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
    pFVar3 = this->Sections;
    if (pFVar3 != (FStaticMeshSectionArray *)0x0) {
      if (*(void **)&pFVar3->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar3->field_0x20);
      }
      ::operator_delete(pFVar3,0x30);
    }
  }
  FBulkData::~FBulkData((FBulkData *)&this->StreamableData);
  return;
}

// operator() @ 14871a530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
`FStaticMeshRayTracingProxyLOD::InitResources'::__l20::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FStaticMeshRayTracingProxyLOD *this_00;
  FRayTracingGeometry *this_01;
  ForAnyElementType FVar1;
  int iVar2;
  undefined1 auStackY_158 [32];
  FRayTracingGeometryInitializer local_118;
  FDebugName local_a8;
  FRayTracingGeometryInitializer local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_98.bFastBuild = false;
  local_98.bAllowUpdate = false;
  local_98.bAllowCompaction = true;
  local_98.bTemplate = false;
  local_98.IndexBuffer.Reference = (FRHIBuffer *)0x0;
  local_98.IndexBufferOffset = 0;
  local_98.GeometryType = RTGT_Triangles;
  local_98.TotalPrimitiveCount = 0;
  local_98.Type = Rendering;
  local_98.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Segments.ArrayNum = 0;
  local_98.Segments.ArrayMax = 0;
  local_98.OfflineData = (FResourceArrayUploadInterface *)0x0;
  local_98.SourceGeometry = (FRHIRayTracingGeometry *)0x0;
  local_98.OfflineDataHeader.Reserved[0] = 0xffffffff;
  local_98.OfflineDataHeader.Reserved[1] = 0xffffffff;
  local_98.OfflineDataHeader.Reserved[2] = 0xffffffff;
  local_98.OfflineDataHeader.Reserved[3] = 0xffffffff;
  local_98.OfflineDataHeader.Reserved[4] = 0xffffffff;
  local_98.OfflineDataHeader.Reserved[5] = 0xffffffff;
  FDebugName::FDebugName(&local_98.DebugName);
  this_00 = *(FStaticMeshRayTracingProxyLOD **)this;
  local_98.OwnerName.ComparisonIndex.Value = 0;
  local_98.OwnerName.Number = 0;
  FDebugName::FDebugName(&local_a8,*(FName *)((longlong)this + 8));
  FStaticMeshRayTracingProxyLOD::SetupRayTracingGeometryInitializer
            (this_00,&local_98,&local_a8,(FName *)((longlong)this + 0x10));
  this_01 = *(FRayTracingGeometry **)(*(longlong *)this + 8);
  local_118.IndexBuffer.Reference = local_98.IndexBuffer.Reference;
  if (local_98.IndexBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_98.IndexBuffer.Reference);
  }
  FVar1.Data = local_98.Segments.AllocatorInstance.Data;
  iVar2 = local_98.Segments.ArrayNum;
  local_118.IndexBufferOffset = local_98.IndexBufferOffset;
  local_118.GeometryType = local_98.GeometryType;
  local_118.TotalPrimitiveCount = local_98.TotalPrimitiveCount;
  local_118.bFastBuild = local_98.bFastBuild;
  local_118.bAllowUpdate = local_98.bAllowUpdate;
  local_118.bAllowCompaction = local_98.bAllowCompaction;
  local_118.bTemplate = local_98.bTemplate;
  local_118.Type = local_98.Type;
  local_118.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Segments.ArrayNum = local_98.Segments.ArrayNum;
  if (local_98.Segments.ArrayNum == 0) {
    local_118.Segments.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,local_98.Segments.ArrayNum,0,&local_118.Segments.AllocatorInstance,
               local_98.Segments.ArrayNum,&local_118.Segments.ArrayMax);
    ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
              (local_118.Segments.AllocatorInstance.Data,(FRayTracingGeometrySegment *)FVar1.Data,
               iVar2);
  }
  local_118.OfflineData = local_98.OfflineData;
  local_118.SourceGeometry = local_98.SourceGeometry;
  local_118.DebugName.Number = local_98.DebugName.Number;
  local_118.OfflineDataHeader.Reserved[0] = local_98.OfflineDataHeader.Reserved[0];
  local_118.OfflineDataHeader.Reserved[1] = local_98.OfflineDataHeader.Reserved[1];
  local_118.OfflineDataHeader.Reserved[2] = local_98.OfflineDataHeader.Reserved[2];
  local_118.OfflineDataHeader.Reserved[3] = local_98.OfflineDataHeader.Reserved[3];
  local_118.OwnerName = local_98.OwnerName;
  local_118.OfflineDataHeader.Reserved[4] = local_98.OfflineDataHeader.Reserved[4];
  local_118.OfflineDataHeader.Reserved[5] = local_98.OfflineDataHeader.Reserved[5];
  local_118.DebugName.Name = local_98.DebugName.Name;
  FRayTracingGeometry::SetInitializer(this_01,&local_118);
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)local_98.Segments.AllocatorInstance.Data,
             local_98.Segments.ArrayNum);
  if ((FRayTracingGeometrySegment *)local_98.Segments.AllocatorInstance.Data !=
      (FRayTracingGeometrySegment *)0x0) {
    FMemory::Free(local_98.Segments.AllocatorInstance.Data);
  }
  if (local_98.IndexBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_98.IndexBuffer.Reference);
  }
  return;
}

// AreBuffersStreamedIn @ 1487225d0

bool __thiscall
FStaticMeshRayTracingProxyLOD::AreBuffersStreamedIn(FStaticMeshRayTracingProxyLOD *this)

{
  return this->bBuffersStreamedIn;
}

// DiscardCPUData @ 148730300

void __thiscall FStaticMeshRayTracingProxyLOD::DiscardCPUData(FStaticMeshRayTracingProxyLOD *this)

{
  if (this->bOwnsRayTracingGeometry) {
    (**(code **)((this->RayTracingGeometry->RawData)._padding_ + 0x18))();
  }
  if (this->bOwnsBuffers) {
    FStaticMeshVertexBuffer::CleanUp(&this->VertexBuffers->StaticMeshVertexBuffer);
    FPositionVertexBuffer::CleanUp(&this->VertexBuffers->PositionVertexBuffer);
    FColorVertexBuffer::CleanUp(&this->VertexBuffers->ColorVertexBuffer);
    FRawStaticIndexBuffer::Discard(this->IndexBuffer);
    return;
  }
  return;
}

// GetRequestSize @ 14873ed70

uint __thiscall FStaticMeshRayTracingProxyLOD::GetRequestSize(FStaticMeshRayTracingProxyLOD *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  uint uVar4;
  
  uVar4 = this->OfflineBVHSize + this->BuffersSize;
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&this->StreamableData);
  if (lVar3 <= (longlong)(ulonglong)uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequestSize < StreamableData.GetBulkDataSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x806,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  return uVar4;
}

// GetRequestSizeBVH @ 14873edc0

uint __thiscall
FStaticMeshRayTracingProxyLOD::GetRequestSizeBVH(FStaticMeshRayTracingProxyLOD *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long64 lVar4;
  
  uVar3 = this->OfflineBVHSize;
  lVar4 = FBulkData::GetBulkDataSize((FBulkData *)&this->StreamableData);
  if (lVar4 <= (longlong)(ulonglong)uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequestSize < StreamableData.GetBulkDataSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x80d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return uVar3;
}

// GetRequestSizeBuffers @ 14873ee10

uint __thiscall
FStaticMeshRayTracingProxyLOD::GetRequestSizeBuffers(FStaticMeshRayTracingProxyLOD *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long64 lVar4;
  
  uVar3 = this->BuffersSize;
  lVar4 = FBulkData::GetBulkDataSize((FBulkData *)&this->StreamableData);
  if (lVar4 <= (longlong)(ulonglong)uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RequestSize < StreamableData.GetBulkDataSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x814,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return uVar3;
}

// InitResources @ 148747a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStaticMeshRayTracingProxyLOD::InitResources
          (FStaticMeshRayTracingProxyLOD *this,UStaticMesh *param_1,int param_2)

{
  undefined8 uVar1;
  FName FVar2;
  FRawStaticIndexBuffer *pFVar3;
  FStaticMeshVertexBuffers *pFVar4;
  FRayTracingGeometry *pFVar5;
  bool bVar6;
  FString *pFVar7;
  FName *pFVar8;
  longlong lVar9;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar10;
  code **ppcVar11;
  int iVar12;
  code *pcVar13;
  ulonglong uVar14;
  code *pcVar15;
  undefined1 auStack_148 [32];
  FScriptContainerElement *local_128;
  int local_120;
  FName local_118;
  FString local_110;
  FString local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  FString local_d8;
  undefined1 local_c8 [16];
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  pcVar13 = (code *)0x0;
  local_118.ComparisonIndex.Value = 0;
  pcVar15 = pcVar13;
  if (param_1 != (UStaticMesh *)0x0) {
    pFVar7 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_d8,(UObject *)0x0)
    ;
    if ((pFVar7->Data).ArrayNum == 0) {
      pcVar15 = (code *)0x1;
    }
    else {
      pcVar15 = (code *)0x1;
    }
  }
  ::FString::PrintfImpl(&local_110,L"%s [LOD%d]");
  iVar12 = local_110.Data.ArrayNum + -1;
  if (local_110.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  pFVar8 = ::FName::FName(&local_118,iVar12,(wchar_t *)local_110.Data.AllocatorInstance.Data,
                          FNAME_Add);
  FVar2 = *pFVar8;
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if ((pcVar15 != (code *)0x0) &&
     (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (this->bOwnsBuffers) {
    pFVar3 = this->IndexBuffer;
    *(FName *)&pFVar3->_padding_ = FVar2;
    BeginInitResource((FRenderResource *)pFVar3,(FRenderCommandPipe *)0x0);
    pFVar4 = this->VertexBuffers;
    *(FName *)&(pFVar4->StaticMeshVertexBuffer)._padding_ = FVar2;
    BeginInitResource((FRenderResource *)pFVar4,(FRenderCommandPipe *)0x0);
    pFVar4 = this->VertexBuffers;
    (pFVar4->PositionVertexBuffer)._padding_ = (longlong)FVar2;
    BeginInitResource((FRenderResource *)&pFVar4->PositionVertexBuffer,(FRenderCommandPipe *)0x0);
    pFVar4 = this->VertexBuffers;
    (pFVar4->ColorVertexBuffer)._padding_ = (longlong)FVar2;
    BeginInitResource((FRenderResource *)&pFVar4->ColorVertexBuffer,(FRenderCommandPipe *)0x0);
  }
  if (((param_1 != (UStaticMesh *)0x0) && (param_1->bSupportRayTracing == '\0')) &&
     (this->RayTracingGeometry != (FRayTracingGeometry *)0x0)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_100,(UObject *)0x0);
    local_128 = (FScriptContainerElement *)L"";
    if (local_100.Data.ArrayNum != 0) {
      local_128 = local_100.Data.AllocatorInstance.Data;
    }
    local_120 = param_2;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RayTracingGeometry == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x703,
                       L"Unexpected RayTracingGeometry on \'%s\' ray tracing proxy LOD:%d (ray tracing support is disabled on this UStaticMesh)."
                      );
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  bVar6 = IsRayTracingAllowed();
  if (((bVar6) && (pFVar5 = this->RayTracingGeometry, pFVar5 != (FRayTracingGeometry *)0x0)) &&
     (this->bOwnsRayTracingGeometry)) {
    local_f0 = 0xffffffffffffffff;
    local_e8 = 0xffffffffffffffff;
    local_e0 = 0xffffffffffffffff;
    if ((((pFVar5->RawDataHeader).Reserved[0] != 0xffffffff) ||
        ((pFVar5->RawDataHeader).Reserved[1] != 0xffffffff)) ||
       (((pFVar5->RawDataHeader).Reserved[2] != 0xffffffff ||
        ((((pFVar5->RawDataHeader).Reserved[3] != 0xffffffff ||
          ((pFVar5->RawDataHeader).Reserved[4] != 0xffffffff)) ||
         ((pFVar5->RawDataHeader).Reserved[5] != 0xffffffff)))))) {
      lVar9 = (**(code **)(GDynamicRHI->_padding_ + 0x488))
                        (GDynamicRHI,local_c8,&pFVar5->RawDataHeader);
      uVar1 = *(undefined8 *)(lVar9 + 8);
      this->OfflineBVHSize = (uint)uVar1;
      this->OfflineBVHOffset = this->OfflineBVHOffset + (int)((ulonglong)uVar1 >> 0x20);
    }
    if (param_1 != (UStaticMesh *)0x0) {
      pcVar13 = (code *)param_1->_padding_;
    }
    local_b8[0] = (code *)0x0;
    local_90 = FMemory::Malloc(0x20,8);
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FStaticMeshRayTracingProxyLOD::InitResources'::`20'::<lambda_1>,1,1>
                         ::_vftable_;
    local_90[1] = (code *)this;
    local_90[2] = pcVar13;
    *(FName *)(local_90 + 3) = FVar2;
    if (local_90 + 1 != (code **)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FStaticMeshRayTracingProxyLOD::InitResources'::__l20::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FStaticMeshRayTracingProxyLOD::InitResources_::__l20::TSTR_InitStaticMeshRayTracingGeometry1809>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_88._0_8_ = local_b8[0];
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_88._16_8_ = local_a8[0];
      local_88._24_8_ = local_a8[1];
      local_88._32_8_ = local_a8[2];
      local_b8[0] = (code *)0x0;
      local_58 = 2;
      pFVar10 = (FRenderCommandTag *)
                TRenderCommandTag<`FStaticMeshRayTracingProxyLOD::InitResources'::__l20::TSTR_InitStaticMeshRayTracingGeometry1809>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar10);
      uVar14 = (ulonglong)local_58;
      if ((2 < uVar14) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar11 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar11 = local_60;
          }
          (**(code **)(*ppcVar11 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar11 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar11 = local_90;
      }
      (**(code **)(*ppcVar11 + 0x10))();
    }
  }
  return;
}

// InitWithStreamedData @ 148749140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FStaticMeshRayTracingProxyLOD::InitWithStreamedData
          (FStaticMeshRayTracingProxyLOD *this,FRHICommandListBase *param_1,
          TMemoryView<void_const_> *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  EGeometryStateFlags EVar3;
  FRayTracingGeometry *pFVar4;
  FStaticMeshVertexBuffers *this_00;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  ForAnyElementType FVar11;
  EGeometryStateFlags EVar12;
  TRefCountPtr<FBaseGraphTask> TVar13;
  FRHICommandListBase *pFVar14;
  undefined7 uVar15;
  void *_Dst;
  ulonglong _Size;
  ulonglong uVar16;
  undefined1 auStackY_1f8 [32];
  FRHIResourceReplaceBatcher local_1c8;
  FRHIRayTracingGeometry *local_1b0;
  FRHIResourceReplaceBatcher local_1a8;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  FTaggedMemory *pFStack_160;
  IRHICommandContext *local_158;
  IRHIComputeContext *pIStack_150;
  IRHICommandContext *local_148;
  IRHIComputeContext *pIStack_140;
  IRHICommandContext *local_138;
  IRHIComputeContext *pIStack_130;
  IRHIUploadContext *local_128;
  FRHICommandRHIThreadFence *pFStack_120;
  ForAnyElementType local_118;
  FRHICommandRHIThreadFence *pFStack_110;
  ForAnyElementType local_108;
  FSharedReferencer<1> FStack_100;
  ForAnyElementType local_f8;
  FSharedReferencer<1> FStack_f0;
  FRHIParallelRenderPassInfo *local_e8;
  FSharedReferencer<1> FStack_e0;
  TRefCountPtr<FBaseGraphTask> local_d8;
  FSharedReferencer<1> local_d0;
  TRefCountPtr<FBaseGraphTask> TStack_c8;
  ForAnyElementType local_c0;
  FRayTracingGeometryInitializer local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_170._8_8_ = (FMemMark *)0x0;
  pFStack_160 = (FTaggedMemory *)0x0;
  local_158 = (IRHICommandContext *)0x0;
  pIStack_150 = (IRHIComputeContext *)0x0;
  local_148 = (IRHICommandContext *)0x0;
  pIStack_140 = (IRHIComputeContext *)0x0;
  local_138 = (IRHICommandContext *)0x0;
  pIStack_130 = (IRHIComputeContext *)0x0;
  local_128 = (IRHIUploadContext *)0x0;
  pFStack_120 = (FRHICommandRHIThreadFence *)0x0;
  local_118.Data = (FScriptContainerElement *)0x0;
  pFStack_110 = (FRHICommandRHIThreadFence *)0x0;
  local_108.Data = (FScriptContainerElement *)0x0;
  FStack_100.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  FStack_f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e8 = (FRHIParallelRenderPassInfo *)0x0;
  FStack_e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar14 = param_1;
  FArchiveState::FArchiveState((FArchiveState *)(local_170 + 8));
  local_d0.ReferenceController = param_2->Data;
  TStack_c8.Reference = (FBaseGraphTask *)param_2->Size;
  local_170._8_8_ = &___7FMemoryReaderView__6B_;
  local_d8.Reference = (FBaseGraphTask *)0x0;
  uVar15 = (undefined7)((ulonglong)pFVar14 >> 8);
  local_c0.Data = (FScriptContainerElement *)0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)(local_170 + 8),true);
  (**(code **)&((FMemMark *)(local_170._8_8_ + 0xf0))->bPopped)(local_170 + 8,CONCAT71(uVar15,1));
  if (this->bOwnsBuffers) {
    if (((FMemMark *)(local_170._8_8_ + 0x28))->Mem == (FMemStackBase *)FMemoryArchive::Tell) {
      iVar8 = (int)local_d8.Reference;
    }
    else {
      iVar8 = (*(code *)((FMemMark *)(local_170._8_8_ + 0x28))->Mem)(local_170 + 8);
    }
    FPositionVertexBuffer::Serialize
              (&this->VertexBuffers->PositionVertexBuffer,(FArchive *)(local_170 + 8),false);
    FStaticMeshVertexBuffer::Serialize
              (&this->VertexBuffers->StaticMeshVertexBuffer,(FArchive *)(local_170 + 8),false);
    FColorVertexBuffer::Serialize
              (&this->VertexBuffers->ColorVertexBuffer,(FArchive *)(local_170 + 8),false);
    FRawStaticIndexBuffer::Serialize(this->IndexBuffer,(FArchive *)(local_170 + 8),false);
    if (((FMemMark *)(local_170._8_8_ + 0x28))->Mem == (FMemStackBase *)FMemoryArchive::Tell) {
      iVar9 = (int)local_d8.Reference;
    }
    else {
      iVar9 = (*(code *)((FMemMark *)(local_170._8_8_ + 0x28))->Mem)(local_170 + 8);
    }
    if (((ulonglong)pIStack_140 & 4) != 0) {
      this->BuffersSize = iVar9 - iVar8;
    }
  }
  if (this->bOwnsRayTracingGeometry) {
    uVar2 = this->OfflineBVHSize;
    if ((uVar2 != 0) && (!param_3)) {
      pFVar4 = this->RayTracingGeometry;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      puVar1 = (uint *)((longlong)&(pFVar4->RawData)._padding_ + 4);
      *(undefined4 *)&(pFVar4->RawData)._padding_ = 0;
      if (*puVar1 != uVar2) {
        UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (1,1,uVar2,(ForAnyElementType *)&(pFVar4->RawData)._padding_,0,(int *)puVar1);
      }
      pFVar4 = this->RayTracingGeometry;
      UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (1,1,this->OfflineBVHSize,(ForAnyElementType *)&(pFVar4->RawData)._padding_,
                 (int *)&(pFVar4->RawData)._padding_,
                 (int *)((longlong)&(pFVar4->RawData)._padding_ + 4));
      uVar16 = (ulonglong)this->OfflineBVHSize;
      plVar10 = &(this->RayTracingGeometry->RawData)._padding_;
      _Dst = (void *)*plVar10;
      if (((ulonglong)_Dst & 1) != 0) {
        _Dst = (void *)(((longlong)_Dst >> 0x18) + (longlong)plVar10);
      }
      if ((uVar16 != 0) && (((ulonglong)pIStack_140 & 0x200) == 0)) {
        if ((code *)((FMemMark *)(local_170._8_8_ + 0x28))->Top == FMemoryReaderView::TotalSize) {
          FVar11.Data = local_c0.Data;
          if ((longlong)TStack_c8.Reference < (longlong)local_c0.Data) {
            FVar11.Data = (FScriptContainerElement *)TStack_c8.Reference;
          }
        }
        else {
          FVar11.Data = (FScriptContainerElement *)
                        (*(code *)((FMemMark *)(local_170._8_8_ + 0x28))->Top)(local_170 + 8);
        }
        if ((longlong)FVar11.Data < (longlong)((longlong)&(local_d8.Reference)->field_0x0 + uVar16))
        {
          FArchiveState::SetError((FArchiveState *)(local_170 + 8));
        }
        else {
          TVar13.Reference = local_d8.Reference;
          if (TStack_c8.Reference < local_d8.Reference) {
            TVar13.Reference = TStack_c8.Reference;
          }
          plVar10 = &(local_d0.ReferenceController)->_padding_;
          _Size = uVar16;
          if ((ulonglong)((longlong)TStack_c8.Reference - (longlong)TVar13.Reference) < uVar16) {
            _Size = (longlong)TStack_c8.Reference - (longlong)TVar13.Reference;
          }
          if ((uVar16 < _Size) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InView.Size <= Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                                 ,0xdb,
                                 L"Failed to copy from a view of %llu bytes to a view of %llu bytes."
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (_Size != 0) {
            memcpy(_Dst,(void *)((longlong)
                                 &((FRHIParallelRenderPassInfo *)TVar13.Reference)->_padding_ +
                                (longlong)plVar10),_Size);
          }
          local_d8.Reference =
               (FBaseGraphTask *)
               ((longlong)&((FRHIParallelRenderPassInfo *)local_d8.Reference)->_padding_ + uVar16);
        }
      }
      if ((((ulonglong)pIStack_140 & 1) != 0) &&
         (bVar6 = RayTracing::ShouldForceRuntimeBLAS(), bVar6)) {
        (**(code **)((this->RayTracingGeometry->RawData)._padding_ + 0x18))();
      }
    }
  }
  if ((((ulonglong)pIStack_140 & 0x200) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Ar.IsError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                         ,0x859,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (this->bOwnsBuffers) {
    this_00 = this->VertexBuffers;
    FStaticMeshVertexBuffer::CreateTangentsRHIBuffer
              (&this_00->StaticMeshVertexBuffer,(FRHICommandListBase *)local_170);
    FStaticMeshVertexBuffer::CreateTexCoordRHIBuffer
              (&this_00->StaticMeshVertexBuffer,(FRHICommandListBase *)(local_180 + 8));
    FPositionVertexBuffer::CreateRHIBuffer
              (&this_00->PositionVertexBuffer,(FRHICommandListBase *)local_180);
    FColorVertexBuffer::CreateRHIBuffer
              (&this_00->ColorVertexBuffer,(FRHICommandListBase *)(local_190 + 8));
    FRawStaticIndexBuffer::CreateRHIBuffer(this->IndexBuffer,(FRHICommandListBase *)local_190);
    local_1c8.Infos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Infos.ArrayNum = 0;
    local_1c8.Infos.ArrayMax = 0;
    local_1c8.RHICmdList = param_1;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,1,&local_1c8.Infos.AllocatorInstance,0,&local_1c8.Infos.ArrayMax);
    FStaticMeshVertexBuffer::InitRHIForStreaming
              (&this_00->StaticMeshVertexBuffer,(FRHIBuffer *)local_170._0_8_,
               (FRHIBuffer *)local_180._8_8_,&local_1c8);
    FPositionVertexBuffer::InitRHIForStreaming
              (&this_00->PositionVertexBuffer,(FRHIBuffer *)local_180._0_8_,&local_1c8);
    FColorVertexBuffer::InitRHIForStreaming
              (&this_00->ColorVertexBuffer,(FRHIBuffer *)local_190._8_8_,&local_1c8);
    FRawStaticIndexBuffer::InitRHIForStreaming
              (this->IndexBuffer,(FRHIBuffer *)local_190._0_8_,&local_1c8);
    this->bBuffersStreamedIn = true;
    if (local_1c8.Infos.ArrayNum != 0) {
      (**(code **)(GDynamicRHI->_padding_ + 0x138))
                (GDynamicRHI,local_1c8.RHICmdList,&local_1c8.Infos);
    }
    if (local_1c8.Infos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Infos.AllocatorInstance.Data);
    }
    if ((FRHIBuffer *)local_190._0_8_ != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_190._0_8_);
    }
    if ((FRHIBuffer *)local_190._8_8_ != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_190._8_8_);
    }
    if ((FRHIBuffer *)local_180._0_8_ != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_180._0_8_);
    }
    if ((FRHIBuffer *)local_180._8_8_ != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_180._8_8_);
    }
    if ((FRHIBuffer *)local_170._0_8_ != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_170._0_8_);
    }
  }
  if ((this->bOwnsRayTracingGeometry) && (!param_3)) {
    local_1a8.Infos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Infos.ArrayNum = 0;
    local_1a8.Infos.ArrayMax = 0;
    local_1a8.RHICmdList = param_1;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,1,&local_1a8.Infos.AllocatorInstance,0,&local_1a8.Infos.ArrayMax);
    FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
              (&local_b8,&this->RayTracingGeometry->Initializer);
    local_b8.Type = StreamingSource;
    if ((int)(this->RayTracingGeometry->RawData)._padding_ != 0) {
      local_b8.OfflineData = (FResourceArrayUploadInterface *)&this->RayTracingGeometry->RawData;
    }
    (**(code **)(GDynamicRHI->_padding_ + 0x490))(GDynamicRHI,&local_1b0,param_1,&local_b8);
    pFVar4 = this->RayTracingGeometry;
    if (((FRHIBreadcrumbNode *)local_b8.OfflineData == (FRHIBreadcrumbNode *)0x0) ||
       (cVar7 = (**(code **)(local_1b0->_padding_ + 0x18))(), cVar7 != '\0')) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    EVar3 = pFVar4->GeometryState;
    EVar12 = EVar3 | RequiresBuild;
    if (!bVar6) {
      EVar12 = EVar3 & ~RequiresBuild;
    }
    pFVar4->GeometryState = EVar12;
    FRayTracingGeometry::InitRHIForStreaming(this->RayTracingGeometry,local_1b0,&local_1a8);
    if (local_1b0 != (FRHIRayTracingGeometry *)0x0) {
      FRHIResource::Release((FRHIResource *)local_1b0);
    }
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)local_b8.Segments.AllocatorInstance.Data,
               local_b8.Segments.ArrayNum);
    if ((FRHIBreadcrumbNode *)local_b8.Segments.AllocatorInstance.Data != (FRHIBreadcrumbNode *)0x0)
    {
      FMemory::Free(local_b8.Segments.AllocatorInstance.Data);
    }
    if (local_b8.IndexBuffer.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_b8.IndexBuffer.Reference);
    }
    if (local_1a8.Infos.ArrayNum != 0) {
      (**(code **)(GDynamicRHI->_padding_ + 0x138))
                (GDynamicRHI,local_1a8.RHICmdList,&local_1a8.Infos);
    }
    if (local_1a8.Infos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Infos.AllocatorInstance.Data);
    }
    if ((this->RayTracingGeometry->GeometryState & RequiresBuild) == Invalid) {
      (**(code **)((longlong)*GRayTracingGeometryManager + 0x50))
                (GRayTracingGeometryManager,this->RayTracingGeometry->GroupHandle);
    }
    FRayTracingGeometry::RequestBuildIfNeeded(this->RayTracingGeometry,param_1,Normal);
    this->bRayTracingGeometryStreamedIn = true;
  }
  FArchive::~FArchive((FArchive *)(local_170 + 8));
  return;
}

// IsBVHStreamedIn @ 14874b470

bool __thiscall FStaticMeshRayTracingProxyLOD::IsBVHStreamedIn(FStaticMeshRayTracingProxyLOD *this)

{
  return this->bRayTracingGeometryStreamedIn;
}

// IssueRequest @ 14874b7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FStaticMeshRayTracingProxyLOD::IssueRequest
          (FStaticMeshRayTracingProxyLOD *this,FBulkDataBatchRequest *param_1,FIoBuffer *param_2,
          bool param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TEventRef<unsigned_int> TVar6;
  FWriteBuffer *pFVar7;
  undefined ***pppuVar8;
  byte bVar9;
  undefined1 auStackY_1c8 [32];
  undefined8 local_194;
  FName local_18c;
  FBulkDataBatchRequest *local_180;
  FIoBuffer *local_178;
  FName local_170;
  undefined4 *local_168;
  longlong local_160;
  code *local_158 [2];
  undefined **local_148;
  code *local_140;
  undefined ***local_130;
  FScatterGatherBuilder local_128;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_180 = param_1;
  local_178 = param_2;
  bVar5 = FBulkData::IsBulkDataLoaded((FBulkData *)&this->StreamableData);
  if (bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!StreamableData.IsBulkDataLoaded()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x824,L"Bulk data should not be loaded yet!");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FBulkData::CanLoadFromDisk((FBulkData *)&this->StreamableData);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StreamableData.CanLoadFromDisk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x825,L"Bulk data is not loaded and cannot be loaded from disk!");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = FBulkData::IsStoredCompressedOnDisk((FBulkData *)&this->StreamableData);
  if (bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!StreamableData.IsStoredCompressedOnDisk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x826,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar1 = this->BuffersSize;
  if ((this->OfflineBVHSize == 0) || (param_3)) {
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
    local_194 = 0;
    TVar6 = (TEventRef<unsigned_int>)&local_194;
  }
  else {
    ::FName::FName(&local_18c,"StaticMeshRayTracingProxyLOD");
    TVar6 = FStringTrace::GetNameRef(&local_170);
  }
  uVar2 = *(undefined8 *)TVar6;
  bVar5 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>
              ((TLogScope<0> *)&local_168);
    bVar5 = true;
    *local_168 = (int)uVar2;
    *(undefined8 *)(local_160 + 0x28) = *(undefined8 *)(local_160 + 0x20);
  }
  FBulkDataBatchRequest::FScatterGatherBuilder::FScatterGatherBuilder
            (&local_128,(uint)(uVar1 != 0) + (uint)bVar9);
  if (uVar1 != 0) {
    FBulkDataBatchRequest::FScatterGatherBuilder::Read
              (&local_128,(FBulkData *)&this->StreamableData,0,(ulonglong)this->BuffersSize);
  }
  if (bVar9 != 0) {
    FBulkDataBatchRequest::FScatterGatherBuilder::Read
              (&local_128,(FBulkData *)&this->StreamableData,(ulonglong)this->OfflineBVHOffset,
               (ulonglong)this->OfflineBVHSize);
  }
  local_148 = &
              ___7__TFunction_OwnedObject_P6AXW4EStatus_FBulkDataRequest___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_130 = (undefined ***)0x0;
  local_140 = `FStaticMeshRayTracingProxyLOD::IssueRequest'::__l2::<lambda_1>::
              <lambda_invoker_cdecl>;
  local_158[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<void_(__cdecl*)(enum_FBulkDataRequest::EStatus),void,enum_FBulkDataRequest::EStatus>
                 ::Call;
  FBulkDataBatchRequest::FScatterGatherBuilder::Issue
            (&local_128,local_178,AIOP_Low,
             (TFunction<void___cdecl(FBulkDataRequest::EStatus)> *)local_158,local_180);
  if (local_158[0] != (code *)0x0) {
    pppuVar8 = &local_148;
    if (local_130 != (undefined ***)0x0) {
      pppuVar8 = local_130;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (local_128.Requests.AllocatorInstance.SecondaryData !=
      (ForElementType<FBulkDataBatchRequest::FScatterGatherBuilder::FRequest>)0x0) {
    FMemory::Free((void *)local_128.Requests.AllocatorInstance.SecondaryData);
  }
  FBulkDataBatchRequest::FBuilder::~FBuilder((FBuilder *)&local_128);
  if (bVar5) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar7 = *(FWriteBuffer **)(lVar3 + 0x20);
    if ((int)pFVar7 - *(int *)&pFVar7->Cursor < 1) {
      pFVar7 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar7->Cursor = '\n';
    pFVar7->Cursor = pFVar7->Cursor + 1;
    pFVar7->Committed = pFVar7->Cursor;
  }
  return;
}

// ReleaseBVHForStreaming @ 148751d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshRayTracingProxyLOD::ReleaseBVHForStreaming
          (FStaticMeshRayTracingProxyLOD *this,FRHIResourceReplaceBatcher *param_1)

{
  if (this->bOwnsRayTracingGeometry == true && this->bRayTracingGeometryStreamedIn == true) {
    FRayTracingGeometry::ReleaseRHIForStreaming(this->RayTracingGeometry,param_1);
    this->bRayTracingGeometryStreamedIn = false;
  }
  return;
}

// ReleaseBuffersForStreaming @ 148751da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshRayTracingProxyLOD::ReleaseBuffersForStreaming
          (FStaticMeshRayTracingProxyLOD *this,FRHIResourceReplaceBatcher *param_1)

{
  if (this->bOwnsBuffers == true && this->bBuffersStreamedIn == true) {
    FPositionVertexBuffer::ReleaseRHIForStreaming
              (&this->VertexBuffers->PositionVertexBuffer,param_1);
    FStaticMeshVertexBuffer::ReleaseRHIForStreaming
              (&this->VertexBuffers->StaticMeshVertexBuffer,param_1);
    FColorVertexBuffer::ReleaseRHIForStreaming(&this->VertexBuffers->ColorVertexBuffer,param_1);
    FRawStaticIndexBuffer::ReleaseRHIForStreaming(this->IndexBuffer,param_1);
    this->bBuffersStreamedIn = false;
  }
  return;
}

// ReleaseForStreaming @ 148751e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshRayTracingProxyLOD::ReleaseForStreaming
          (FStaticMeshRayTracingProxyLOD *this,FRHIResourceReplaceBatcher *param_1)

{
  (**(code **)(this->_padding_ + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x000148751e39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x48))(this,param_1);
  return;
}

// ReleaseResources @ 148752750

void __thiscall FStaticMeshRayTracingProxyLOD::ReleaseResources(FStaticMeshRayTracingProxyLOD *this)

{
  if (this->bOwnsRayTracingGeometry) {
    BeginReleaseResource((FRenderResource *)this->RayTracingGeometry,(FRenderCommandPipe *)0x0);
  }
  if (this->bOwnsBuffers) {
    BeginReleaseResource((FRenderResource *)this->IndexBuffer,(FRenderCommandPipe *)0x0);
    BeginReleaseResource((FRenderResource *)this->VertexBuffers,(FRenderCommandPipe *)0x0);
    BeginReleaseResource
              ((FRenderResource *)&this->VertexBuffers->PositionVertexBuffer,
               (FRenderCommandPipe *)0x0);
    BeginReleaseResource
              ((FRenderResource *)&this->VertexBuffers->ColorVertexBuffer,(FRenderCommandPipe *)0x0)
    ;
    return;
  }
  return;
}

// Serialize @ 148757770

void __thiscall
FStaticMeshRayTracingProxyLOD::Serialize
          (FStaticMeshRayTracingProxyLOD *this,FArchive *param_1,UObject *param_2,int param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong *puVar5;
  code *pcVar6;
  UClass *pUVar7;
  UStaticMesh *pUVar8;
  FRawStaticIndexBuffer *this_00;
  UStaticMesh *pUVar9;
  FRayTracingGeometry *this_01;
  UStaticMesh *pUVar10;
  UStaticMesh *pUVar11;
  bool bVar12;
  bool local_res8 [8];
  bool local_res10 [8];
  uint local_res18 [4];
  
  pUVar10 = (UStaticMesh *)0x0;
  if (param_2 == (UObject *)0x0) {
LAB_1487577bb:
    pUVar11 = pUVar10;
  }
  else {
    pUVar7 = UStaticMesh::StaticClass();
    iVar3 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar3) ||
       (pUVar11 = (UStaticMesh *)param_2,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
       &pUVar7->_padding_)) goto LAB_1487577bb;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  bVar12 = this->bOwnsBuffers;
  puVar1 = &param_1->field_0x28;
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    local_res18[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res18[0] = (uint)bVar12;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    if (1 < local_res18[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res18[0];
    if ((*puVar1 & 1) == 0) goto LAB_148757843;
  }
  else {
    uVar4 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
  }
  bVar12 = uVar4 != 0;
LAB_148757843:
  this->bOwnsBuffers = false;
  this->field_0x5c = this->field_0x5c | bVar12 * '\x02';
  if (bVar12 != false) {
    if (this->VertexBuffers == (FStaticMeshVertexBuffers *)0x0) {
      if (((*puVar1 & 1) == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ar.IsLoading()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                              ,0x75c,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar8 = ::operator_new(0x158);
      pUVar9 = pUVar10;
      if (pUVar8 != (UStaticMesh *)0x0) {
        memset(pUVar8,0,0x158);
        FStaticMeshVertexBuffer::FStaticMeshVertexBuffer((FStaticMeshVertexBuffer *)pUVar8);
        FPositionVertexBuffer::FPositionVertexBuffer((FPositionVertexBuffer *)&pUVar8->_padding_);
        FColorVertexBuffer::FColorVertexBuffer
                  ((FColorVertexBuffer *)&(pUVar8->MinQualityLevelLOD)._padding_);
        pUVar9 = pUVar8;
      }
      this->VertexBuffers = (FStaticMeshVertexBuffers *)pUVar9;
    }
    if (this->IndexBuffer == (FRawStaticIndexBuffer *)0x0) {
      if (((*puVar1 & 1) == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ar.IsLoading()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                              ,0x762,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = ::operator_new(0x50);
      pUVar9 = pUVar10;
      if (this_00 != (FRawStaticIndexBuffer *)0x0) {
        pUVar9 = (UStaticMesh *)FRawStaticIndexBuffer::FRawStaticIndexBuffer(this_00,false);
      }
      this->IndexBuffer = (FRawStaticIndexBuffer *)pUVar9;
    }
    pUVar9 = (UStaticMesh *)this->Sections;
    if (pUVar9 == (UStaticMesh *)0x0) {
      if (((*puVar1 & 1) == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ar.IsLoading()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                              ,0x768,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar8 = ::operator_new(0x30);
      pUVar9 = pUVar10;
      if (pUVar8 != (UStaticMesh *)0x0) {
        ((FStaticMeshVertexBuffer *)&pUVar8->_padding_)->_padding_ = 0;
        pUVar8->_padding_ = 0;
        pUVar8->_padding_ = 0;
        pUVar8->_padding_ = 0;
        *(undefined8 *)&pUVar8->_padding_ = 0;
        *(undefined4 *)&pUVar8->_padding_ = 0;
        *(undefined4 *)((longlong)&pUVar8->_padding_ + 4) = 1;
        pUVar9 = pUVar8;
      }
      this->Sections = (FStaticMeshSectionArray *)pUVar9;
    }
    TArrayPrivateFriend::
    Serialize<FStaticMeshSection,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              (param_1,(TArray<FStaticMeshSection,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                        *)pUVar9);
  }
  local_res8[0] = this->bOwnsRayTracingGeometry;
  ::operator<<(param_1,local_res8);
  this->bOwnsRayTracingGeometry = local_res8[0];
  if (((local_res8[0] & 1U) != 0) && (this->RayTracingGeometry == (FRayTracingGeometry *)0x0)) {
    if (((*puVar1 & 1) == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ar.IsLoading()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                            ,0x775,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_01 = ::operator_new(0x100);
    if (this_01 != (FRayTracingGeometry *)0x0) {
      memset(this_01,0,0x100);
      pUVar10 = (UStaticMesh *)FRayTracingGeometry::FRayTracingGeometry(this_01);
    }
    this->RayTracingGeometry = (FRayTracingGeometry *)pUVar10;
  }
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    local_res10[0] = true;
  }
  else {
    local_res10[0] = false;
  }
  ::operator<<(param_1,local_res10);
  this->bBuffersInlined = local_res10[0];
  if ((local_res10[0] & 1U) == 0) {
    FBulkData::Serialize((FBulkData *)&this->StreamableData,param_1,param_2,false,1,None);
  }
  else {
    SerializeBuffers(this,param_1,pUVar11,'\0');
    SerializeRayTracingGeometry(this,param_1,pUVar11,'\0');
  }
  SerializeMetaData(this,param_1);
  return;
}

// SerializeBuffers @ 14875a440

void __thiscall
FStaticMeshRayTracingProxyLOD::SerializeBuffers
          (FStaticMeshRayTracingProxyLOD *this,FArchive *param_1,UStaticMesh *param_2,uchar param_3)

{
  int iVar1;
  int iVar2;
  
  if (this->bOwnsBuffers) {
    iVar1 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    FPositionVertexBuffer::Serialize(&this->VertexBuffers->PositionVertexBuffer,param_1,false);
    FStaticMeshVertexBuffer::Serialize(&this->VertexBuffers->StaticMeshVertexBuffer,param_1,false);
    FColorVertexBuffer::Serialize(&this->VertexBuffers->ColorVertexBuffer,param_1,false);
    FRawStaticIndexBuffer::Serialize(this->IndexBuffer,param_1,false);
    iVar2 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    if ((param_1->field_0x28 & 4) != 0) {
      this->BuffersSize = iVar2 - iVar1;
    }
  }
  return;
}

// SerializeMetaData @ 14875a8d0

void __thiscall
FStaticMeshRayTracingProxyLOD::SerializeMetaData
          (FStaticMeshRayTracingProxyLOD *this,FArchive *param_1)

{
  uint *puVar1;
  uint *puVar2;
  FRayTracingGeometry *pFVar3;
  bool bVar4;
  
  if (this->bOwnsBuffers) {
    puVar1 = &this->BuffersSize;
    puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    FPositionVertexBuffer::SerializeMetaData(&this->VertexBuffers->PositionVertexBuffer,param_1);
    FStaticMeshVertexBuffer::SerializeMetaData(&this->VertexBuffers->StaticMeshVertexBuffer,param_1)
    ;
    FColorVertexBuffer::SerializeMetaData(&this->VertexBuffers->ColorVertexBuffer,param_1);
    FRawStaticIndexBuffer::SerializeMetaData(this->IndexBuffer,param_1);
  }
  if (this->bOwnsRayTracingGeometry) {
    puVar1 = &this->OfflineBVHOffset;
    puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar1 = &this->OfflineBVHSize;
    puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    ::operator<<(param_1,&this->RayTracingGeometry->RawDataHeader);
    if (((param_1->field_0x28 & 1) != 0) && (bVar4 = RayTracing::ShouldForceRuntimeBLAS(), bVar4)) {
      pFVar3 = this->RayTracingGeometry;
      (pFVar3->RawDataHeader).Reserved[0] = 0xffffffff;
      (pFVar3->RawDataHeader).Reserved[1] = 0xffffffff;
      (pFVar3->RawDataHeader).Reserved[2] = 0xffffffff;
      (pFVar3->RawDataHeader).Reserved[3] = 0xffffffff;
      (pFVar3->RawDataHeader).Reserved[4] = 0xffffffff;
      (pFVar3->RawDataHeader).Reserved[5] = 0xffffffff;
    }
  }
  return;
}

// SerializeRayTracingGeometry @ 14875aa80

void __thiscall
FStaticMeshRayTracingProxyLOD::SerializeRayTracingGeometry
          (FStaticMeshRayTracingProxyLOD *this,FArchive *param_1,UStaticMesh *param_2,uchar param_3)

{
  uint *puVar1;
  FRayTracingGeometry *pFVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined7 in_register_00000089;
  uint local_res8 [2];
  
  if (this->bOwnsRayTracingGeometry) {
    plVar6 = *(longlong **)&param_1->field_0x8;
    local_res8[0] = (uint)(this->RayTracingGeometry->RawData)._padding_;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,local_res8,4,CONCAT71(in_register_00000089,param_3));
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if ((param_1->field_0x28 & 1) != 0) {
      pFVar2 = this->RayTracingGeometry;
      if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
      }
      puVar1 = (uint *)((longlong)&(pFVar2->RawData)._padding_ + 4);
      *(undefined4 *)&(pFVar2->RawData)._padding_ = 0;
      if (*puVar1 != local_res8[0]) {
        UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (1,1,local_res8[0],(ForAnyElementType *)&(pFVar2->RawData)._padding_,0,
                   (int *)puVar1);
      }
      pFVar2 = this->RayTracingGeometry;
      UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (1,1,local_res8[0],(ForAnyElementType *)&(pFVar2->RawData)._padding_,
                 (int *)&(pFVar2->RawData)._padding_,
                 (int *)((longlong)&(pFVar2->RawData)._padding_ + 4));
    }
    uVar4 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    plVar6 = &(this->RayTracingGeometry->RawData)._padding_;
    uVar7 = *plVar6;
    if ((uVar7 & 1) != 0) {
      uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)plVar6;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,uVar7,local_res8[0]);
    iVar5 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    if ((param_1->field_0x28 & 4) != 0) {
      this->OfflineBVHOffset = uVar4;
      this->OfflineBVHSize = iVar5 - uVar4;
    }
    if ((param_1->field_0x28 & 1) != 0) {
      bVar3 = RayTracing::ShouldForceRuntimeBLAS();
      if (bVar3) {
        (**(code **)((this->RayTracingGeometry->RawData)._padding_ + 0x18))();
      }
    }
  }
  return;
}

// SetupRayTracingGeometryInitializer @ 14875c180

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FStaticMeshRayTracingProxyLOD::SetupRayTracingGeometryInitializer
          (FStaticMeshRayTracingProxyLOD *this,FRayTracingGeometryInitializer *param_1,
          FDebugName *param_2,FName *param_3)

{
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  FRHIBuffer *pFVar6;
  FRHIBuffer *this_00;
  FStaticMeshSectionArray *pFVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  int iVar11;
  FStaticMeshSectionArray *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  ForAnyElementType local_68;
  undefined8 local_60;
  FRayTracingGeometrySegment local_58;
  
  (param_1->DebugName).Name = param_2->Name;
  (param_1->DebugName).Number = param_2->Number;
  param_1->OwnerName = *param_3;
  pFVar6 = (param_1->IndexBuffer).Reference;
  this_00 = (FRHIBuffer *)this->IndexBuffer->_padding_;
  if (pFVar6 != this_00) {
    (param_1->IndexBuffer).Reference = this_00;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (pFVar6 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar6);
    }
  }
  local_60._0_4_ = 0;
  param_1->GeometryType = RTGT_Triangles;
  param_1->TotalPrimitiveCount = 0;
  param_1->bFastBuild = false;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  uVar4 = *(uint *)&this->Sections->field_0x28;
  if (-1 < (int)uVar4) {
    if (0 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar4,&local_68,0,(int *)((longlong)&local_60 + 4));
    }
    pFVar7 = this->Sections;
    iVar5 = *(int *)&pFVar7->field_0x28;
    pFVar12 = *(FStaticMeshSectionArray **)&pFVar7->field_0x20;
    if (*(FStaticMeshSectionArray **)&pFVar7->field_0x20 == (FStaticMeshSectionArray *)0x0) {
      pFVar12 = pFVar7;
    }
    pFVar13 = (FScriptContainerElement *)&pFVar12->field_0x16;
    iVar11 = (int)local_60;
    while( true ) {
      if (*(int *)&pFVar7->field_0x28 != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FStaticMeshSection,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
        iVar11 = (int)local_60;
      }
      if (pFVar13 + -0x16 ==
          (FScriptContainerElement *)(&pFVar12->field_0x0 + (longlong)iVar5 * 0x1c)) break;
      local_58.VertexBufferElementType = VET_Float3;
      local_58.VertexBufferOffset = 0;
      local_58.VertexBuffer.Reference = (FRHIBuffer *)0x0;
      local_58.FirstPrimitive = 0;
      local_58.NumPrimitives = 0;
      local_58.VertexBufferStride = 0xc;
      local_58.MaxVertices = 0;
      local_58.bForceOpaque = false;
      local_58.bAllowDuplicateAnyHitShaderInvocation = true;
      local_58.bEnabled = true;
      pFVar6 = (FRHIBuffer *)(this->VertexBuffers->PositionVertexBuffer)._padding_;
      if (pFVar6 != (FRHIBuffer *)0x0) {
        local_58.VertexBuffer.Reference = pFVar6;
        FRHIResource::AddRef((FRHIResource *)pFVar6);
        iVar11 = (int)local_60;
      }
      local_58.VertexBufferElementType = VET_Float3;
      local_58.VertexBufferOffset = 0;
      local_58.VertexBufferStride = (this->VertexBuffers->PositionVertexBuffer).Stride;
      local_58.MaxVertices = (this->VertexBuffers->PositionVertexBuffer).NumVertices;
      local_58.bEnabled = *(bool *)pFVar13;
      local_58.bForceOpaque = (bool)pFVar13[2];
      local_58.NumPrimitives = *(uint *)(pFVar13 + -0xe);
      local_58.FirstPrimitive = *(uint *)(pFVar13 + -0x12) / 3;
      if ((local_68.Data <= &local_58) &&
         (&local_58 <
          (FRayTracingGeometrySegment *)(local_68.Data + (longlong)local_60._4_4_ * 0x28))) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar11 = (int)local_60;
      }
      if (iVar11 == local_60._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&local_68,(int *)((longlong)&local_60 + 4));
      }
      local_60 = CONCAT44(local_60._4_4_,iVar11 + 1);
      *(undefined8 *)&local_68.Data[(longlong)iVar11 * 0x28].field_0x0 = 0;
      pFVar3 = local_68.Data + (longlong)iVar11 * 0x28;
      *(FRHIBuffer **)&pFVar3->field_0x0 = local_58.VertexBuffer.Reference;
      if (local_58.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_58.VertexBuffer.Reference);
      }
      *(EVertexElementType *)(pFVar3 + 8) = local_58.VertexBufferElementType;
      *(uint *)(pFVar3 + 0xc) = local_58.VertexBufferOffset;
      *(uint *)(pFVar3 + 0x10) = local_58.VertexBufferStride;
      *(uint *)(pFVar3 + 0x14) = local_58.MaxVertices;
      *(uint *)(pFVar3 + 0x18) = local_58.FirstPrimitive;
      *(uint *)(pFVar3 + 0x1c) = local_58.NumPrimitives;
      pFVar3[0x20] = (FScriptContainerElement)local_58.bForceOpaque;
      pFVar3[0x21] = (FScriptContainerElement)local_58.bAllowDuplicateAnyHitShaderInvocation;
      pFVar3[0x22] = (FScriptContainerElement)local_58.bEnabled;
      param_1->TotalPrimitiveCount = param_1->TotalPrimitiveCount + *(int *)(pFVar13 + -0xe);
      if (local_58.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_58.VertexBuffer.Reference);
      }
      pFVar13 = pFVar13 + 0x1c;
      iVar11 = (int)local_60;
    }
    pTVar1 = &param_1->Segments;
    if (pTVar1 != (TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *)&local_68) {
      DestructItems<FRayTracingGeometrySegment,int>
                ((FRayTracingGeometrySegment *)(pTVar1->AllocatorInstance).Data,
                 (param_1->Segments).ArrayNum);
      FVar9.Data = local_68.Data;
      iVar5 = (int)local_60;
      piVar2 = &(param_1->Segments).ArrayMax;
      (param_1->Segments).ArrayNum = (int)local_60;
      if (((int)local_60 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
        iVar11 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,(int)local_60,*piVar2,&pTVar1->AllocatorInstance,(int)local_60,piVar2);
        ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                  ((pTVar1->AllocatorInstance).Data,(FRayTracingGeometrySegment *)FVar9.Data,iVar5);
        iVar11 = (int)local_60;
      }
    }
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)local_68.Data,iVar11);
    if ((FRayTracingGeometrySegment *)local_68.Data != (FRayTracingGeometrySegment *)0x0) {
      FMemory::Free(local_68.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

