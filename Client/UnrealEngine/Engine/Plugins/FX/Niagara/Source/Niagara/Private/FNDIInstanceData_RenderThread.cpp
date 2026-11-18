// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// ~FNDIInstanceData_RenderThread @ 148ea6910

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
NDIDynamicMeshLocal::FNDIInstanceData_RenderThread::~FNDIInstanceData_RenderThread
          (FNDIInstanceData_RenderThread *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FRHIShaderResourceView *pFVar3;
  FRDGPooledBuffer *pFVar4;
  longlong lVar5;
  
  ReleaseData(this);
  pFVar2 = (this->MeshSections).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar3 = (this->VertexBufferColorSRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->VertexBufferTexCoordSRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->VertexBufferTangentBasisSRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->VertexBufferPositionSRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  FVertexBuffer::~FVertexBuffer(&this->VertexBuffer);
  pFVar3 = (this->IndexBufferSRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  FIndexBuffer::~FIndexBuffer(&this->IndexBuffer);
  pFVar4 = (this->VertexPooledBuffer).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar4 = (this->IndexPooledBuffer).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar4 = (this->SectionPooledBuffer).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar4 = (this->SectionDefaultPooledBuffer).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  return;
}

// ~FNDIInstanceData_RenderThread @ 148ea6a50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
NDIMemoryBufferLocal::FNDIInstanceData_RenderThread::~FNDIInstanceData_RenderThread
          (FNDIInstanceData_RenderThread *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  
  this->NumElements = 0;
  pFVar2 = (this->PooledBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->PooledBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->InitialCpuBufferData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar2 = (this->PooledBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  return;
}

// ReleaseData @ 148ece530

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
NDIDynamicMeshLocal::FNDIInstanceData_RenderThread::ReleaseData(FNDIInstanceData_RenderThread *this)

{
  uchar auVar1 [8];
  FName FVar2;
  longlong lVar3;
  FRHIShaderResourceView *pFVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_28;
  
  auVar1 = (uchar  [8])this->MemorySize;
  if (auVar1 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar5 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar5,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar6;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_28.StatData.Pad = auVar1;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  lVar3 = (this->IndexBuffer)._padding_;
  this->MemorySize = 0;
  (**(code **)(lVar3 + 0x20))();
  pFVar4 = (this->IndexBufferSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->IndexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  (**(code **)((this->VertexBuffer)._padding_ + 0x20))();
  pFVar4 = (this->VertexBufferPositionSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->VertexBufferPositionSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar4 = (this->VertexBufferTangentBasisSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->VertexBufferTangentBasisSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar4 = (this->VertexBufferTexCoordSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->VertexBufferTexCoordSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar4 = (this->VertexBufferColorSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->VertexBufferColorSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  this->NumTriangles = 0;
  this->NumVertices = 0;
  this->NumTexCoords = 0;
  this->VertexBufferSize = 0;
  this->PositionOffset = 0xffffffff;
  this->TangentBasisOffset = 0xffffffff;
  this->TexCoordOffset = 0xffffffff;
  this->ColorOffset = 0xffffffff;
  return;
}

// UpdateData @ 148ed56d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
NDIDynamicMeshLocal::FNDIInstanceData_RenderThread::UpdateData
          (FNDIInstanceData_RenderThread *this,FRHICommandListImmediate *param_1,
          FGameToRenderData *param_2)

{
  int *piVar1;
  TArray<FStaticMeshSection,TSizedDefaultAllocator<32>_> *pTVar2;
  TRefCountPtr<FRHIShaderResourceView> *pTVar3;
  longlong *plVar4;
  FRHIBuffer *pFVar5;
  FRHIBuffer *pFVar6;
  FRHIShaderResourceView *pFVar7;
  code *pcVar8;
  double dVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  FRDGBuffer *pFVar17;
  FRDGBuffer *pFVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  TRefCountPtr<FRHIShaderResourceView> TVar24;
  FShaderResourceViewInitializer *pFVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  void *pvVar28;
  longlong lVar29;
  FScriptContainerElement *pFVar30;
  longlong lVar31;
  undefined1 auStackY_978 [32];
  FRDGExternalAccessQueue local_938;
  longlong local_928;
  undefined1 local_920 [16];
  undefined1 local_910 [16];
  undefined8 local_900;
  undefined8 uStack_8f8;
  longlong local_8f0;
  FRDGBuffer *local_8e8;
  FRDGBuffer *local_8e0;
  int *local_8d8;
  void *local_8d0;
  FRHICommandListBase *local_8c8;
  ulonglong local_8c0;
  FRDGBuffer *local_8b8;
  undefined1 local_8b0 [16];
  longlong local_8a0;
  longlong local_898;
  FRDGBufferDesc local_890;
  FShaderResourceViewInitializer local_878;
  FShaderResourceViewInitializer local_860;
  FShaderResourceViewInitializer local_848;
  FShaderResourceViewInitializer local_830;
  undefined1 local_818 [2000];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_978;
  local_8c8 = (FRHICommandListBase *)param_1;
  ReleaseData(this);
  this->bGpuUsesDynamicAllocation = param_2->bGpuUsesDynamicAllocation;
  this->NumSections = (param_2->MeshSections).ArrayNum;
  this->NumTriangles = param_2->NumTriangles;
  this->NumVertices = param_2->NumVertices;
  this->NumTexCoords = param_2->NumTexCoords;
  dVar9 = (param_2->LocalBounds).Min.field0_0x0._s_0.Y;
  local_8a0 = 0;
  local_898 = 0;
  (this->LocalBounds).Min.field0_0x0._s_0.X = (param_2->LocalBounds).Min.field0_0x0._s_0.X;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = dVar9;
  dVar9 = (param_2->LocalBounds).Max.field0_0x0._s_0.X;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = (param_2->LocalBounds).Min.field0_0x0._s_0.Z;
  (this->LocalBounds).Max.field0_0x0._s_0.X = dVar9;
  dVar9 = (param_2->LocalBounds).Max.field0_0x0._s_0.Z;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = (param_2->LocalBounds).Max.field0_0x0._s_0.Y;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = dVar9;
  uVar10 = (param_2->LocalBounds).Pad[0];
  uVar11 = (param_2->LocalBounds).Pad[1];
  uVar12 = (param_2->LocalBounds).Pad[2];
  uVar13 = (param_2->LocalBounds).Pad[3];
  uVar14 = (param_2->LocalBounds).Pad[4];
  uVar15 = (param_2->LocalBounds).Pad[5];
  uVar16 = (param_2->LocalBounds).Pad[6];
  (this->LocalBounds).IsValid = (param_2->LocalBounds).IsValid;
  (this->LocalBounds).Pad[0] = uVar10;
  (this->LocalBounds).Pad[1] = uVar11;
  (this->LocalBounds).Pad[2] = uVar12;
  (this->LocalBounds).Pad[3] = uVar13;
  (this->LocalBounds).Pad[4] = uVar14;
  (this->LocalBounds).Pad[5] = uVar15;
  (this->LocalBounds).Pad[6] = uVar16;
  this->VertexBufferSize = param_2->VertexBufferSize;
  this->PositionOffset = param_2->PositionOffset;
  this->TangentBasisOffset = param_2->TangentBasisOffset;
  this->TexCoordOffset = param_2->TexCoordOffset;
  this->ColorOffset = param_2->ColorOffset;
  local_8b0._8_8_ = L"";
  FRDGBuilder::FRDGBuilder
            ((FRDGBuilder *)local_818,param_1,(FRDGEventName *)(local_8b0 + 8),None,
             GMaxRHIShaderPlatform);
  local_8f0 = 0;
  uStack_8f8 = CONCAT44(uStack_8f8._4_4_,0x4109);
  uVar21 = this->NumTriangles * 3;
  local_890.Metadata = (FShaderParametersMetadata *)0x0;
  local_890.NumElements = 1;
  if (1 < uVar21) {
    local_890.NumElements = uVar21;
  }
  local_900 = CONCAT44(local_890.NumElements,4);
  uVar26 = this->NumSections * 2;
  local_890.BytesPerElement = 4;
  uVar21 = 1;
  if (1 < uVar26) {
    uVar21 = uVar26;
  }
  local_890._12_4_ = uStack_8f8._4_4_;
  local_890.Usage = IndexBuffer|ShaderResource|UnorderedAccess|Static;
  local_8b8 = ResizeBufferIfNeeded
                        ((FRDGBuilder *)local_818,&this->SectionDefaultPooledBuffer,PF_R32_UINT,
                         uVar21,L"NiagaraDynamicMeshSectionBuffer");
  uVar26 = this->NumSections * 2;
  uVar21 = 1;
  if (1 < uVar26) {
    uVar21 = uVar26;
  }
  ResizeBufferIfNeeded
            ((FRDGBuilder *)local_818,&this->SectionPooledBuffer,PF_R32_UINT,uVar21,
             L"NiagaraDynamicMeshSectionBuffer");
  local_8e8 = ResizeBufferIfNeeded
                        ((FRDGBuilder *)local_818,&this->IndexPooledBuffer,&local_890,
                         L"NiagaraDynamicMeshIndexBuffer");
  uVar26 = param_2->VertexBufferSize >> 2;
  uVar21 = 1;
  if (1 < uVar26) {
    uVar21 = uVar26;
  }
  local_8e0 = ResizeBufferIfNeeded
                        ((FRDGBuilder *)local_818,&this->VertexPooledBuffer,PF_R32_UINT,uVar21,
                         L"NiagaraDynamicMeshVertexBuffer");
  uVar21 = (param_2->MeshSections).ArrayNum;
  pTVar2 = &this->MeshSections;
  iVar22 = (this->MeshSections).ArrayNum;
  piVar1 = &(this->MeshSections).ArrayNum;
  local_8d8 = piVar1;
  if (iVar22 < (int)uVar21) {
    iVar20 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1c,4,uVar21 - iVar22,&pTVar2->AllocatorInstance,piVar1,
                        &(this->MeshSections).ArrayMax);
    DefaultConstructItems<FStaticMeshSection,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar20 * 0x1c,uVar21 - iVar22);
  }
  else {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    if ((int)uVar21 < iVar22) {
      uVar26 = iVar22 - uVar21;
      if (((int)(uVar26 | uVar21) < 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar26 != 0) {
        pFVar30 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x1c;
        iVar22 = (*piVar1 - uVar21) - uVar26;
        if (iVar22 != 0) {
          memmove(pFVar30,pFVar30 + (longlong)(int)uVar26 * 0x1c,(longlong)iVar22 * 0x1c);
        }
        *piVar1 = *piVar1 - uVar26;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,&pTVar2->AllocatorInstance,*piVar1,&(this->MeshSections).ArrayMax);
      }
    }
  }
  if (this->NumSections != 0) {
    this->bNeedsGpuSectionUpdate = true;
    uVar21 = (param_2->MeshSections).ArrayNum << 3;
    local_8c0 = (ulonglong)uVar21;
    local_8d0 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),(ulonglong)uVar21,0x10);
    uVar21 = 0;
    if (0 < (this->MeshSections).ArrayNum) {
      lVar31 = 0;
      local_928 = 0;
      lVar29 = 0;
      do {
        uVar26 = 0;
        if ((int)uVar21 < (param_2->MeshSections).ArrayNum) {
          uVar26 = ~uVar21 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar30 = (param_2->MeshSections).AllocatorInstance.Data + lVar29;
        uVar26 = 0;
        if ((int)uVar21 < *local_8d8) {
          uVar26 = ~uVar21 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar27 = (this->MeshSections).AllocatorInstance.Data + local_928;
        *(int *)pFVar27 = *(int *)(pFVar30 + 0xc);
        *(int *)(pFVar27 + 4) = *(int *)pFVar30 * 3;
        lVar23 = 4;
        if (this->bGpuUsesDynamicAllocation == false) {
          lVar23 = 8;
        }
        local_928 = local_928 + 0x1c;
        uVar21 = uVar21 + 1;
        lVar29 = lVar29 + 0x10;
        *(int *)(pFVar27 + 8) = *(int *)(pFVar30 + lVar23);
        *(int *)(pFVar27 + 0xc) = 0;
        *(uint *)(pFVar27 + 0x10) = this->NumVertices;
        *(undefined2 *)(pFVar27 + 0x14) = 0;
        pFVar27[0x16] = (FScriptContainerElement)0x0;
        pFVar27[0x18] = (FScriptContainerElement)0x0;
        *(int *)((longlong)local_8d0 + lVar31 * 8) = *(int *)(pFVar30 + 4);
        *(int *)((longlong)local_8d0 + lVar31 * 8 + 4) = *(int *)(pFVar30 + 8);
        lVar31 = lVar31 + 1;
        param_1 = (FRHICommandListImmediate *)local_8c8;
      } while ((int)uVar21 < (this->MeshSections).ArrayNum);
    }
    FRDGBuilder::QueueBufferUpload((FRDGBuilder *)local_818,local_8b8,local_8d0,local_8c0,NoCopy);
  }
  pFVar17 = local_8e8;
  iVar22 = (int)(param_2->IndexData)._padding_;
  if (0 < iVar22) {
    pvVar28 = (void *)(param_2->IndexData)._padding_;
    if (((ulonglong)pvVar28 & 1) != 0) {
      pvVar28 = (void *)((longlong)(&param_2->LocalBounds + 1) + ((longlong)pvVar28 >> 0x18) + 0x20)
      ;
    }
    FRDGBuilder::QueueBufferUpload((FRDGBuilder *)local_818,local_8e8,pvVar28,(longlong)iVar22,None)
    ;
  }
  pFVar18 = local_8e0;
  iVar22 = (int)(param_2->VertexData)._padding_;
  if (0 < iVar22) {
    plVar4 = &(param_2->VertexData)._padding_;
    pvVar28 = (void *)*plVar4;
    if (((ulonglong)pvVar28 & 1) != 0) {
      pvVar28 = (void *)(((longlong)pvVar28 >> 0x18) + (longlong)plVar4);
    }
    FRDGBuilder::QueueBufferUpload((FRDGBuilder *)local_818,local_8e0,pvVar28,(longlong)iVar22,None)
    ;
  }
  local_938.Resources.AllocatorInstance.Data = (FResource *)0x0;
  local_938.Resources.ArrayNum = 0;
  local_938.Resources.ArrayMax = 0;
  if (pFVar17 != (FRDGBuffer *)0x0) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                       (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)&local_938,
                        &local_938.Resources.ArrayMax);
    local_938.Resources.ArrayNum = iVar22 + 1;
    local_938.Resources.AllocatorInstance.Data[iVar22].Resource = (FRDGViewableResource *)pFVar17;
    local_938.Resources.AllocatorInstance.Data[iVar22].Access = SRVMask|VertexOrIndexBuffer;
    local_938.Resources.AllocatorInstance.Data[iVar22].Pipelines = Graphics;
  }
  if (pFVar18 != (FRDGBuffer *)0x0) {
    if (local_938.Resources.ArrayNum == local_938.Resources.ArrayMax) {
      local_938.Resources.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                     (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)&local_938,
                      &local_938.Resources.ArrayMax);
    }
    local_938.Resources.AllocatorInstance.Data[local_938.Resources.ArrayNum].Resource =
         (FRDGViewableResource *)pFVar18;
    local_938.Resources.AllocatorInstance.Data[local_938.Resources.ArrayNum].Access =
         SRVMask|VertexOrIndexBuffer;
    local_938.Resources.AllocatorInstance.Data[local_938.Resources.ArrayNum].Pipelines = Graphics;
    local_938.Resources.ArrayNum = local_938.Resources.ArrayNum + 1;
  }
  FRDGExternalAccessQueue::Submit(&local_938,(FRDGBuilder *)local_818);
  FRDGBuilder::Execute((FRDGBuilder *)local_818);
  if ((local_938.Resources.ArrayNum != 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                          ,0x4fe,L"Submit must be called before destruction."), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FRDGBuilder::~FRDGBuilder((FRDGBuilder *)local_818);
  if (this->NumTriangles != 0) {
    this->bNeedsClearIndexBuffer = (int)(param_2->IndexData)._padding_ == 0;
    (**(code **)((this->IndexBuffer)._padding_ + 0x18))(&this->IndexBuffer,param_1);
    pFVar5 = (this->IndexBuffer).IndexBufferRHI.Reference;
    pFVar6 = (((this->IndexPooledBuffer).Reference)->Buffer).Reference;
    if (pFVar5 != pFVar6) {
      (this->IndexBuffer).IndexBufferRHI.Reference = pFVar6;
      if (pFVar6 != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar6);
      }
      if (pFVar5 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
    uStack_8f8 = 0;
    local_900 = 0x11c00;
    TVar24 = FRHICommandListBase::CreateShaderResourceView
                       ((FRHICommandListBase *)param_1,(FRHIBuffer *)local_8b0,
                        (FInitializer *)(this->IndexBuffer).IndexBufferRHI.Reference);
    pTVar3 = &this->IndexBufferSRV;
    if ((FRHIShaderResourceView *)pTVar3 != TVar24.Reference) {
      pFVar7 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar3->Reference = *TVar24.Reference;
      *(undefined8 *)TVar24.Reference = 0;
      if (pFVar7 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar7);
      }
    }
    if ((FRHIResource *)local_8b0._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_8b0._0_8_);
    }
  }
  if (this->NumVertices == 0) goto LAB_148ed5f84;
  (**(code **)((this->VertexBuffer)._padding_ + 0x18))(&this->VertexBuffer,param_1);
  pFVar5 = (this->VertexBuffer).VertexBufferRHI.Reference;
  pFVar6 = (((this->VertexPooledBuffer).Reference)->Buffer).Reference;
  if (pFVar5 != pFVar6) {
    (this->VertexBuffer).VertexBufferRHI.Reference = pFVar6;
    if (pFVar6 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar6);
    }
    if (pFVar5 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  pFVar25 = FShaderResourceViewInitializer::FShaderResourceViewInitializer
                      (&local_878,(this->VertexBuffer).VertexBufferRHI.Reference,PF_R32_FLOAT,
                       this->PositionOffset,this->NumVertices * 3);
  FRHICommandListBase::CreateShaderResourceView
            ((FRHICommandListBase *)param_1,(FRHIBuffer *)local_920,(FInitializer *)pFVar25->Buffer)
  ;
  pTVar3 = &this->VertexBufferPositionSRV;
  if (pTVar3 == (TRefCountPtr<FRHIShaderResourceView> *)local_920) {
LAB_148ed5e10:
    if ((FRHIShaderResourceView *)local_920._0_8_ != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_920._0_8_);
    }
  }
  else {
    pFVar7 = pTVar3->Reference;
    pTVar3->Reference = (FRHIShaderResourceView *)local_920._0_8_;
    local_920._0_8_ = (FRHIShaderResourceView *)0x0;
    if (pFVar7 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar7);
      goto LAB_148ed5e10;
    }
  }
  if (this->TangentBasisOffset != 0xffffffff) {
    pFVar25 = FShaderResourceViewInitializer::FShaderResourceViewInitializer
                        (&local_860,(this->VertexBuffer).VertexBufferRHI.Reference,PF_R8G8B8A8_SNORM
                         ,this->TangentBasisOffset,this->NumVertices * 2);
    FRHICommandListBase::CreateShaderResourceView
              ((FRHICommandListBase *)param_1,(FRHIBuffer *)(local_920 + 8),
               (FInitializer *)pFVar25->Buffer);
    pTVar3 = &this->VertexBufferTangentBasisSRV;
    if (pTVar3 != (TRefCountPtr<FRHIShaderResourceView> *)(local_920 + 8)) {
      pFVar7 = pTVar3->Reference;
      pTVar3->Reference = (FRHIShaderResourceView *)local_920._8_8_;
      local_920._8_8_ = (FRHIShaderResourceView *)0x0;
      if (pFVar7 == (FRHIShaderResourceView *)0x0) goto LAB_148ed5e96;
      FRHIResource::Release((FRHIResource *)pFVar7);
    }
    if ((FRHIShaderResourceView *)local_920._8_8_ != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_920._8_8_);
    }
  }
LAB_148ed5e96:
  if (this->TexCoordOffset != 0xffffffff) {
    pFVar25 = FShaderResourceViewInitializer::FShaderResourceViewInitializer
                        (&local_848,(this->VertexBuffer).VertexBufferRHI.Reference,PF_G32R32F,
                         this->TexCoordOffset,this->NumTexCoords * this->NumVertices);
    FRHICommandListBase::CreateShaderResourceView
              ((FRHICommandListBase *)param_1,(FRHIBuffer *)local_910,
               (FInitializer *)pFVar25->Buffer);
    pTVar3 = &this->VertexBufferTexCoordSRV;
    if (pTVar3 != (TRefCountPtr<FRHIShaderResourceView> *)local_910) {
      pFVar7 = pTVar3->Reference;
      pTVar3->Reference = (FRHIShaderResourceView *)local_910._0_8_;
      local_910._0_8_ = (FRHIShaderResourceView *)0x0;
      if (pFVar7 == (FRHIShaderResourceView *)0x0) goto LAB_148ed5f0f;
      FRHIResource::Release((FRHIResource *)pFVar7);
    }
    if ((FRHIShaderResourceView *)local_910._0_8_ != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_910._0_8_);
    }
  }
LAB_148ed5f0f:
  if (this->ColorOffset != 0xffffffff) {
    pFVar25 = FShaderResourceViewInitializer::FShaderResourceViewInitializer
                        (&local_830,(this->VertexBuffer).VertexBufferRHI.Reference,PF_R8G8B8A8,
                         this->ColorOffset,this->NumVertices);
    FRHICommandListBase::CreateShaderResourceView
              ((FRHICommandListBase *)param_1,(FRHIBuffer *)(local_910 + 8),
               (FInitializer *)pFVar25->Buffer);
    pTVar3 = &this->VertexBufferColorSRV;
    if (pTVar3 != (TRefCountPtr<FRHIShaderResourceView> *)(local_910 + 8)) {
      pFVar7 = pTVar3->Reference;
      pTVar3->Reference = (FRHIShaderResourceView *)local_910._8_8_;
      local_910._8_8_ = (FRHIShaderResourceView *)0x0;
      if (pFVar7 == (FRHIShaderResourceView *)0x0) goto LAB_148ed5f84;
      FRHIResource::Release((FRHIResource *)pFVar7);
    }
    if ((FRHIShaderResourceView *)local_910._8_8_ != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_910._8_8_);
    }
  }
LAB_148ed5f84:
  UpdateMemoryStats(this);
  return;
}

// UpdateData @ 148ed5fd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
NDIMemoryBufferLocal::FNDIInstanceData_RenderThread::UpdateData
          (FNDIInstanceData_RenderThread *this,FGameToRenderData *param_1)

{
  longlong *plVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  FRDGPooledBuffer *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  
  this->NumElements = 0;
  pFVar4 = (this->PooledBuffer).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    (this->PooledBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pTVar2 = &param_1->InitialCpuBufferData;
  this->NumElements = param_1->NumElements;
  pTVar3 = &this->InitialCpuBufferData;
  this->GpuSyncMode = param_1->GpuSyncMode;
  if (pTVar3 != pTVar2) {
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->InitialCpuBufferData).ArrayNum = (param_1->InitialCpuBufferData).ArrayNum;
    (this->InitialCpuBufferData).ArrayMax = (param_1->InitialCpuBufferData).ArrayMax;
    (param_1->InitialCpuBufferData).ArrayNum = 0;
    (param_1->InitialCpuBufferData).ArrayMax = 0;
  }
  if (&param_1->GpuPendingClear != &this->GpuPendingClear) {
    if ((param_1->GpuPendingClear).bIsSet == false) {
      if ((this->GpuPendingClear).bIsSet != false) {
        (this->GpuPendingClear).bIsSet = false;
      }
    }
    else {
      (this->GpuPendingClear).TypedValue = (param_1->GpuPendingClear).TypedValue;
      (this->GpuPendingClear).bIsSet = true;
    }
  }
  return;
}

// UpdateMemoryStats @ 148ed6b10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
NDIDynamicMeshLocal::FNDIInstanceData_RenderThread::UpdateMemoryStats
          (FNDIInstanceData_RenderThread *this)

{
  FName FVar1;
  FRHIBuffer *pFVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar4;
  FThreadStats *pFVar5;
  FThreadStatsPool *pFVar6;
  uchar auVar7 [8];
  FName local_res8;
  FStatMessage local_38;
  
  auVar7 = (uchar  [8])this->MemorySize;
  if (auVar7 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar3,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar7;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar7);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  pFVar2 = (this->IndexBuffer).IndexBufferRHI.Reference;
  auVar7[0] = '\0';
  auVar7[1] = '\0';
  auVar7[2] = '\0';
  auVar7[3] = '\0';
  auVar7[4] = '\0';
  auVar7[5] = '\0';
  auVar7[6] = '\0';
  auVar7[7] = '\0';
  this->MemorySize = 0;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    auVar7[4] = '\0';
    auVar7[5] = '\0';
    auVar7[6] = '\0';
    auVar7[7] = '\0';
    auVar7._0_4_ = (pFVar2->Desc).Size;
    this->MemorySize = (ulong64)auVar7;
  }
  pFVar2 = (this->VertexBuffer).VertexBufferRHI.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    auVar7 = (uchar  [8])((longlong)auVar7 + (ulonglong)(pFVar2->Desc).Size);
    this->MemorySize = (ulong64)auVar7;
  }
  if (auVar7 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar3,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar7;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar7);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  return;
}

