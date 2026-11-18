// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// FPCGStaticMeshDataProviderProxy @ 149739310

FPCGStaticMeshDataProviderProxy * __thiscall
FPCGStaticMeshDataProviderProxy::FPCGStaticMeshDataProviderProxy
          (FPCGStaticMeshDataProviderProxy *this,UStaticMesh *param_1)

{
  longlong *plVar1;
  FStaticMeshLODResources *pFVar2;
  FStaticMeshLODResources *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined4 uVar6;
  longlong lVar7;
  bool bVar8;
  FStaticMeshRenderData *pFVar9;
  FPCGStaticMeshDataProviderProxy *pFVar10;
  
  this->_padding_ = (longlong)&___7FPCGStaticMeshDataProviderProxy__6B_;
  (this->MeshName).ComparisonIndex = 0;
  (this->MeshName).Number = 0;
  (this->LODResources).Reference = (FStaticMeshLODResources *)0x0;
  (this->Bounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).SphereRadius = 0.0;
  (this->IndexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  if (param_1 == (UStaticMesh *)0x0) {
    return this;
  }
  pFVar9 = UStaticMesh::GetRenderData(param_1);
  if ((pFVar9 != (FStaticMeshRenderData *)0x0) && ((pFVar9->LODResources).Array.ArrayNum != 0)) {
    uVar6 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    (this->MeshName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
    (this->MeshName).Number = uVar6;
    if ((pFVar9->LODResources).Array.ArrayNum < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FPCGStaticMeshDataProviderProxy *)(*pcVar4)();
        return pFVar10;
      }
    }
    pFVar2 = (this->LODResources).Reference;
    pFVar3 = *(FStaticMeshLODResources **)(pFVar9->LODResources).Array.AllocatorInstance.Data;
    if (pFVar2 != pFVar3) {
      (this->LODResources).Reference = pFVar3;
      if (pFVar3 != (FStaticMeshLODResources *)0x0) {
        LOCK();
        *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar2 != (FStaticMeshLODResources *)0x0) {
        plVar1 = &pFVar2->_padding_;
        LOCK();
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar2->_padding_)(pFVar2,1);
        }
      }
    }
    dVar5 = (pFVar9->Bounds).Origin.field0_0x0._s_0.Y;
    (this->Bounds).Origin.field0_0x0._s_0.X = (pFVar9->Bounds).Origin.field0_0x0._s_0.X;
    (this->Bounds).Origin.field0_0x0._s_0.Y = dVar5;
    dVar5 = (pFVar9->Bounds).BoxExtent.field0_0x0._s_0.X;
    (this->Bounds).Origin.field0_0x0._s_0.Z = (pFVar9->Bounds).Origin.field0_0x0._s_0.Z;
    (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar5;
    dVar5 = (pFVar9->Bounds).BoxExtent.field0_0x0._s_0.Z;
    (this->Bounds).BoxExtent.field0_0x0._s_0.Y = (pFVar9->Bounds).BoxExtent.field0_0x0._s_0.Y;
    (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar5;
    (this->Bounds).SphereRadius = (pFVar9->Bounds).SphereRadius;
  }
  return this;
}

// ~FPCGStaticMeshDataProviderProxy @ 14973d7e0

void __thiscall
FPCGStaticMeshDataProviderProxy::~FPCGStaticMeshDataProviderProxy
          (FPCGStaticMeshDataProviderProxy *this)

{
  longlong *plVar1;
  FRHIShaderResourceView *pFVar2;
  FStaticMeshLODResources *pFVar3;
  longlong lVar4;
  
  this->_padding_ = (longlong)&___7FPCGStaticMeshDataProviderProxy__6B_;
  pFVar2 = (this->IndexBufferSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->IndexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->IndexBufferSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->LODResources).Reference;
  if (pFVar3 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FComputeDataProviderRenderProxy__6B_;
  return;
}

// AllocateResources @ 149747f10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FPCGStaticMeshDataProviderProxy::AllocateResources
          (FPCGStaticMeshDataProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2)

{
  FStaticMeshLODResources *pFVar1;
  longlong lVar2;
  FRHIShaderResourceView *this_00;
  char cVar3;
  bool bVar4;
  byte bVar5;
  FRHIResource *this_01;
  TRefCountPtr<FRHIShaderResourceView> *pTVar6;
  FName local_res8;
  FLLMScope local_res20 [2];
  TRefCountPtr<FRHIShaderResourceView> local_48;
  FMemScope local_40;
  FMemScope local_38;
  FString local_30;
  
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res8 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_38,&local_res8,true);
  pFVar1 = (this->LODResources).Reference;
  if (pFVar1 == (FStaticMeshLODResources *)0x0) {
    this_01 = (FRHIResource *)0x0;
  }
  else {
    this_01 = (FRHIResource *)(pFVar1->IndexBuffer)._padding_;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_01);
      FRHIResource::AddRef(this_01);
      FRHIResource::Release(this_01);
    }
  }
  pFVar1 = (this->LODResources).Reference;
  if (pFVar1 == (FStaticMeshLODResources *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)((pFVar1->IndexBuffer).IndexStorage._padding_ + 0x30))();
  }
  if (((this_01 == (FRHIResource *)0x0) || (((uint)this_01[9].AtomicFlags.Packed & 0x100) == 0)) ||
     ((bVar4 = AreBufferSRVsAlwaysCreatedByDefault(GMaxRHIShaderPlatform), !bVar4 && (cVar3 == '\0')
      ))) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&this->MeshName,&local_30);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
    if (this_01 == (FRHIResource *)0x0) goto LAB_14974814f;
  }
  else {
    lVar2 = param_1->_padding_;
    local_30.Data.ArrayNum = 0;
    local_30.Data.ArrayMax = 0;
    bVar5 = 0x20;
    if ((((this->LODResources).Reference)->IndexBuffer).b32Bit != false) {
      bVar5 = 0x1c;
    }
    local_30.Data.AllocatorInstance.Data._0_2_ = (ushort)bVar5 << 8;
    local_30.Data.AllocatorInstance.Data._2_1_ = 1;
    local_30.Data.AllocatorInstance.Data._3_5_ = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
      _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              ((FLLMScope *)&local_res8,
               `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
               ::__l2::LLMScope_Name977,false,None,Default,true);
    FMemScope::FMemScope
              (&local_40,
               &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name977,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_48,lVar2,this_01,&local_30);
    FMemScope::~FMemScope(&local_40);
    FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
    pTVar6 = &this->IndexBufferSRV;
    if (pTVar6 != &local_48) {
      this_00 = pTVar6->Reference;
      pTVar6->Reference = local_48.Reference;
      local_48.Reference = (FRHIShaderResourceView *)0x0;
      if (this_00 == (FRHIShaderResourceView *)0x0) goto LAB_149748147;
      FRHIResource::Release((FRHIResource *)this_00);
    }
    if (local_48.Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_48.Reference);
    }
  }
LAB_149748147:
  FRHIResource::Release(this_01);
LAB_14974814f:
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// GatherDispatchData @ 149752780

void __thiscall
FPCGStaticMeshDataProviderProxy::GatherDispatchData
          (FPCGStaticMeshDataProviderProxy *this,FDispatchData *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  FStaticMeshLODResources *pFVar5;
  FRHIShaderResourceView *this_00;
  FRHIShaderResourceView *this_01;
  FRHIShaderResourceView *this_02;
  FRHIShaderResourceView *this_03;
  uchar *puVar6;
  FStaticMeshLODResources *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FRHIShaderResourceView *pFVar13;
  int iVar14;
  float fVar15;
  float *pfVar16;
  int local_a0;
  FRHIShaderResourceView *local_88;
  FRHIShaderResourceView *local_80;
  FRHIShaderResourceView *local_70;
  FRHIShaderResourceView *local_68;
  FRHIShaderResourceView *local_60;
  FRHIShaderResourceView *local_58;
  
  bVar10 = false;
  bVar9 = false;
  if (((this->LODResources).Reference == (FStaticMeshLODResources *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODResources",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGStaticMeshDataInterface.cpp"
                          ,0xe7,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar5 = (this->LODResources).Reference;
  this_00 = (pFVar5->VertexBuffers).PositionVertexBuffer.PositionComponentSRV.Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this_01 = (pFVar5->VertexBuffers).StaticMeshVertexBuffer.TangentsSRV.Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
  }
  this_02 = (pFVar5->VertexBuffers).StaticMeshVertexBuffer.TextureCoordinatesSRV.Reference;
  if (this_02 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_02);
  }
  this_03 = (pFVar5->VertexBuffers).ColorVertexBuffer.ColorComponentsSRV.Reference;
  if (this_03 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_03);
  }
  iVar3 = param_1->NumInvocations;
  iVar14 = param_1->ParameterBufferOffset;
  puVar6 = param_1->ParameterBuffer;
  iVar4 = param_1->ParameterBufferStride;
  if ((iVar3 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumElements >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x3f,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((iVar4 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("BytesBetweenElements >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x40,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((((longlong)iVar4 & 0xfU) != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("BytesBetweenElements % alignof(ElementType) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x41,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_a0 = 0;
  if (0 < iVar3) {
    pfVar16 = (float *)(puVar6 + (longlong)iVar14 + 0x48);
    do {
      if ((local_a0 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                              ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((this->IndexBufferSRV).Reference == (FRHIShaderResourceView *)0x0) {
        fVar15 = 0.0;
      }
      else {
        pFVar7 = (this->LODResources).Reference;
        iVar14 = (pFVar7->IndexBuffer).CachedNumIndices;
        if (iVar14 < 0) {
          iVar14 = (int)(pFVar7->IndexBuffer).IndexStorage._padding_;
          if ((pFVar7->IndexBuffer).b32Bit == false) {
            iVar14 = iVar14 / 2;
          }
          else {
            iVar14 = (int)((iVar14 >> 0x1f & 3U) + iVar14) >> 2;
          }
        }
        fVar15 = (float)(iVar14 / 3 + (iVar14 >> 0x1f) +
                        (int)(((longlong)iVar14 / 3 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >>
                             0x1f));
      }
      pfVar16[-0x11] = fVar15;
      if (this_00 == (FRHIShaderResourceView *)0x0) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = (float)(pFVar5->VertexBuffers).PositionVertexBuffer.NumVertices;
      }
      pfVar16[-0x12] = fVar15;
      if (this_02 == (FRHIShaderResourceView *)0x0) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = (float)(pFVar5->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
      }
      pfVar16[-0x10] = fVar15;
      pfVar16[-0xf] = (float)(uint)(this_03 != (FRHIShaderResourceView *)0x0);
      *(FRHIShaderResourceView **)(pfVar16 + -0xe) = (this->IndexBufferSRV).Reference;
      *(FRHIShaderResourceView **)(pfVar16 + -0xc) = this_00;
      if (this_01 == (FRHIShaderResourceView *)0x0) {
        bVar9 = true;
        pFVar13 = PCGComputeDummies::GetDummyFloat4Buffer();
        local_68 = pFVar13;
        if (pFVar13 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar13);
        }
      }
      else {
        bVar10 = true;
        FRHIResource::AddRef((FRHIResource *)this_01);
        pFVar13 = this_01;
        local_70 = this_01;
      }
      *(FRHIShaderResourceView **)(pfVar16 + -10) = pFVar13;
      if ((bVar9) && (bVar9 = false, local_68 != (FRHIShaderResourceView *)0x0)) {
        FRHIResource::Release((FRHIResource *)local_68);
      }
      if ((bVar10) && (bVar10 = false, local_70 != (FRHIShaderResourceView *)0x0)) {
        FRHIResource::Release((FRHIResource *)local_70);
      }
      if (this_02 == (FRHIShaderResourceView *)0x0) {
        pFVar13 = PCGComputeDummies::GetDummyFloat2Buffer();
        if (pFVar13 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar13);
        }
        bVar11 = false;
        bVar12 = true;
        local_60 = pFVar13;
      }
      else {
        FRHIResource::AddRef((FRHIResource *)this_02);
        bVar11 = true;
        bVar12 = false;
        pFVar13 = this_02;
        local_88 = this_02;
      }
      *(FRHIShaderResourceView **)(pfVar16 + -8) = pFVar13;
      if ((bVar12) && (local_60 != (FRHIShaderResourceView *)0x0)) {
        FRHIResource::Release((FRHIResource *)local_60);
      }
      if ((bVar11) && (local_88 != (FRHIShaderResourceView *)0x0)) {
        FRHIResource::Release((FRHIResource *)local_88);
      }
      if (this_03 == (FRHIShaderResourceView *)0x0) {
        pFVar13 = PCGComputeDummies::GetDummyFloat4Buffer();
        if (pFVar13 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar13);
        }
        bVar11 = false;
        bVar12 = true;
        local_58 = pFVar13;
      }
      else {
        FRHIResource::AddRef((FRHIResource *)this_03);
        bVar11 = true;
        bVar12 = false;
        pFVar13 = this_03;
        local_80 = this_03;
      }
      *(FRHIShaderResourceView **)(pfVar16 + -6) = pFVar13;
      if ((bVar12) && (local_58 != (FRHIShaderResourceView *)0x0)) {
        FRHIResource::Release((FRHIResource *)local_58);
      }
      if ((bVar11) && (local_80 != (FRHIShaderResourceView *)0x0)) {
        FRHIResource::Release((FRHIResource *)local_80);
      }
      local_a0 = local_a0 + 1;
      dVar1 = (this->Bounds).BoxExtent.field0_0x0._s_0.Y;
      dVar2 = (this->Bounds).BoxExtent.field0_0x0._s_0.Z;
      pfVar16[-2] = (float)(this->Bounds).BoxExtent.field0_0x0._s_0.X;
      pfVar16[-1] = (float)dVar1;
      *pfVar16 = (float)dVar2;
      pfVar16 = (float *)((longlong)pfVar16 + (longlong)iVar4);
    } while (local_a0 < iVar3);
  }
  if (this_03 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_03);
  }
  if (this_02 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_02);
  }
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

// IsValid @ 14976c1d0

bool __thiscall
FPCGStaticMeshDataProviderProxy::IsValid
          (FPCGStaticMeshDataProviderProxy *this,FValidationData *param_1)

{
  if ((param_1->ParameterStructSize == 0x50) &&
     ((this->LODResources).Reference != (FStaticMeshLODResources *)0x0)) {
    return true;
  }
  return false;
}

