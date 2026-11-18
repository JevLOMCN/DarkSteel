// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 22

// InitRHI @ 14501c150

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
Nanite::FRayTracingManager::InitRHI(FRayTracingManager *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRDGPooledBuffer> *pTVar2;
  TArray<Nanite::FRayTracingManager::FReadbackData,TSizedDefaultAllocator<32>_> *this_00;
  FName FVar3;
  code *pcVar4;
  longlong lVar5;
  TAlignedBytes<8,8> TVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  TRefCountPtr<FRDGPooledBuffer> TVar11;
  int *piVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingAuxiliaryDataBuffer> FVar14;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FRHIGPUBufferReadback *pFVar15;
  FScriptContainerElement *pFVar16;
  uchar auVar17 [8];
  FNameEntryId FVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  FRDGPooledBuffer *pFVar21;
  uint local_res8;
  uint uStackX_c;
  undefined8 *local_res18;
  FName local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_68;
  undefined8 local_58;
  uchar local_50 [8];
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_68.NameAndInfo.Index.Value = 0x10119;
  local_58 = 0;
  local_68.StatData.Pad[0] = '\x04';
  local_68.StatData.Pad[1] = '\0';
  local_68.StatData.Pad[2] = '\0';
  local_68.StatData.Pad[3] = '\0';
  bVar7 = NaniteAssembliesSupported();
  local_40 = local_58;
  iVar8 = (bVar7 + 1) * 8;
  local_68.StatData.Pad._4_4_ = iVar8;
  TVar6.Pad = local_68.StatData.Pad;
  uStack_48 = CONCAT44(local_68.NameAndInfo.Number,local_68.NameAndInfo.Index.Value);
  local_68.StatData.Pad[4] = (uchar)iVar8;
  local_68.StatData.Pad[5] = (uchar)((uint)iVar8 >> 8);
  local_68.StatData.Pad[6] = (uchar)((uint)iVar8 >> 0x10);
  local_68.StatData.Pad[7] = (uchar)((uint)iVar8 >> 0x18);
  local_50[0] = local_68.StatData.Pad[0];
  local_50[1] = local_68.StatData.Pad[1];
  local_50[2] = local_68.StatData.Pad[2];
  local_50[3] = local_68.StatData.Pad[3];
  local_50[4] = local_68.StatData.Pad[4];
  local_50[5] = local_68.StatData.Pad[5];
  local_50[6] = local_68.StatData.Pad[6];
  local_50[7] = local_68.StatData.Pad[7];
  local_68.StatData.Pad = TVar6.Pad;
  TVar11 = AllocatePooledBuffer((FRDGBufferDesc *)&local_res18,(wchar_t *)local_50,0xc0);
  pTVar2 = &this->AuxiliaryDataBuffer;
  if ((FRDGPooledBuffer *)pTVar2 != TVar11.Reference) {
    pFVar21 = pTVar2->Reference;
    pTVar2->Reference = (FRDGPooledBuffer *)(TVar11.Reference)->_padding_;
    (TVar11.Reference)->_padding_ = 0;
    if (pFVar21 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar21->_padding_;
      LOCK();
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        if (plVar1 == (longlong *)0x0) {
          pFVar21 = (FRDGPooledBuffer *)0x0;
        }
        if (pFVar21 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar21->_padding_)(pFVar21,1);
        }
      }
    }
  }
  if (local_res18 != (undefined8 *)0x0) {
    piVar12 = (int *)(local_res18 + 1);
    LOCK();
    iVar8 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      if (piVar12 == (int *)0x0) {
        local_res18 = (undefined8 *)0x0;
      }
      if (local_res18 != (undefined8 *)0x0) {
        (**(code **)*local_res18)(local_res18,1);
      }
    }
  }
  FVar14 = StatPtr_STAT_NaniteRayTracingAuxiliaryDataBuffer;
  if (StatPtr_STAT_NaniteRayTracingAuxiliaryDataBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingAuxiliaryDataBuffer>)0x0) {
    pFVar13 = ::FName::FName(&local_78,"STAT_NaniteRayTracingAuxiliaryDataBuffer");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingAuxiliaryDataBuffer>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NaniteRayTracingAuxiliaryDataBuffer,*pFVar13,
                        L"Auxiliary Data Buffer","STATGROUP_NaniteRayTracing","STATCAT_Advanced",
                        L"Nanite RayTracing",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar3 = *(FName *)FVar14;
  FVar18 = FVar3.ComparisonIndex.Value;
  uVar9 = FVar3.Number;
  auVar17._0_4_ = (pTVar2->Reference->Desc).NumElements * (pTVar2->Reference->Desc).BytesPerElement;
  auVar17[4] = '\0';
  auVar17[5] = '\0';
  auVar17[6] = '\0';
  auVar17[7] = '\0';
  local_res8 = FVar18.Value;
  uStackX_c = uVar9;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    local_68.NameAndInfo.Number = uVar9 & 0xffff8fff | 0x8000;
    local_res20 = FVar3;
    local_68.StatData.Pad = auVar17;
    local_68.NameAndInfo.Index.Value = FVar18.Value;
    FThreadStats::AddStatMessage(this_01,&local_68);
    FStatsTrace::Set(&local_res20,(long64)auVar17);
    if (this_01->ScopeCount == 0) {
      FThreadStats::Flush(this_01,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_01,false,false);
    }
  }
  bVar7 = DoesPlatformSupportNanite(GMaxRHIShaderPlatform,true);
  if (bVar7) {
    uVar9 = this->MaxReadbackBuffers;
    this_00 = &this->ReadbackBuffers;
    iVar8 = (this->ReadbackBuffers).ArrayNum;
    piVar12 = &(this->ReadbackBuffers).ArrayNum;
    if (iVar8 < (int)uVar9) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x20,8,uVar9 - iVar8,&this_00->AllocatorInstance,piVar12,
                          &(this->ReadbackBuffers).ArrayMax);
      DefaultConstructItems<Nanite::FRayTracingManager::FReadbackData,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar10 * 0x20,uVar9 - iVar8);
    }
    else {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if ((int)uVar9 < iVar8) {
        uVar20 = iVar8 - uVar9;
        if ((int)(uVar9 | uVar20) < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar20 != 0) {
          TArray<Nanite::FRayTracingManager::FReadbackData,TSizedDefaultAllocator<32>_>::
          RemoveAtImpl(this_00,uVar9,uVar20);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&this_00->AllocatorInstance,*piVar12,&(this->ReadbackBuffers).ArrayMax);
        }
      }
    }
    pFVar16 = (this_00->AllocatorInstance).Data;
    iVar8 = *piVar12;
    pFVar19 = pFVar16 + (longlong)iVar8 * 0x20;
    while( true ) {
      if (*piVar12 != iVar8) {
        `TCheckedPointerIterator<Nanite::FRayTracingManager::FReadbackData,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar16 == pFVar19) break;
      pFVar15 = ::operator_new(0x58);
      if (pFVar15 == (FRHIGPUBufferReadback *)0x0) {
        *(undefined8 *)pFVar16 = 0;
        pFVar16 = pFVar16 + 0x20;
      }
      else {
        pFVar13 = ::FName::FName(&local_70,L"NaniteRayTracing.MeshDataReadbackBuffer");
        pFVar15 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar15,*pFVar13);
        *(FRHIGPUBufferReadback **)pFVar16 = pFVar15;
        pFVar16 = pFVar16 + 0x20;
      }
    }
    this->bInitialized = true;
  }
  return;
}

// ReleaseRHI @ 14501c530

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall Nanite::FRayTracingManager::ReleaseRHI(FRayTracingManager *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  TArray<Nanite::FRayTracingManager::FReadbackData,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FRDGPooledBuffer *pFVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  
  pFVar5 = (this->AuxiliaryDataBuffer).Reference;
  if (pFVar5 != (FRDGPooledBuffer *)0x0) {
    (this->AuxiliaryDataBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar5->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  if (this->bInitialized != false) {
    this->bInitialized = false;
    pFVar5 = (this->VertexBuffer).Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      (this->VertexBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar5->_padding_;
      LOCK();
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
    pFVar5 = (this->IndexBuffer).Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      (this->IndexBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar5->_padding_;
      LOCK();
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
    pTVar3 = &this->ReadbackBuffers;
    iVar4 = (this->ReadbackBuffers).ArrayNum;
    pFVar10 = (pTVar3->AllocatorInstance).Data;
    pFVar9 = pFVar10 + (longlong)iVar4 * 0x20;
    while( true ) {
      if ((this->ReadbackBuffers).ArrayNum != iVar4) {
        `TCheckedPointerIterator<Nanite::FRayTracingManager::FReadbackData,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res10);
      }
      if (pFVar10 == pFVar9) break;
      puVar6 = *(undefined8 **)pFVar10;
      if (puVar6 != (undefined8 *)0x0) {
        puVar8 = puVar6 + 0xb;
        lVar7 = 8;
        do {
          puVar2 = puVar8 + -1;
          puVar8 = puVar8 + -1;
          lVar7 = lVar7 + -1;
          if ((FRHIResource *)*puVar2 != (FRHIResource *)0x0) {
            FRHIResource::Release((FRHIResource *)*puVar2);
          }
        } while (lVar7 != 0);
        *puVar6 = &___7FRHIGPUMemoryReadback__6B_;
        if ((FRHIResource *)puVar6[1] != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)puVar6[1]);
        }
        ::operator_delete(puVar6,0x58);
      }
      *(undefined8 *)pFVar10 = 0;
      pFVar10 = pFVar10 + 0x20;
    }
    DestructItems<Nanite::FRayTracingManager::FReadbackData,int>
              ((FReadbackData *)(pTVar3->AllocatorInstance).Data,(this->ReadbackBuffers).ArrayNum);
    (this->ReadbackBuffers).ArrayNum = 0;
    if ((this->ReadbackBuffers).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&pTVar3->AllocatorInstance,0,&(this->ReadbackBuffers).ArrayMax);
    }
    pFVar5 = (this->StagingAuxiliaryDataBuffer).Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      (this->StagingAuxiliaryDataBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar5->_padding_;
      LOCK();
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
  }
  return;
}

// FRayTracingManager @ 1450372e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRayTracingManager * __thiscall
Nanite::FRayTracingManager::FRayTracingManager(FRayTracingManager *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FRayTracingManager_Nanite__6B_;
  *(undefined8 *)&this->ResourceToRayTracingIdMap = 0;
  *(undefined8 *)&(this->ResourceToRayTracingIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->ResourceToRayTracingIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->ResourceToRayTracingIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->ResourceToRayTracingIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ResourceToRayTracingIdMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResourceToRayTracingIdMap).field_0x34 = 0;
  *(undefined8 *)&(this->ResourceToRayTracingIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->ResourceToRayTracingIdMap).field_0x48 = 0;
  *(undefined8 *)&this->Geometries = 0;
  *(undefined8 *)&(this->Geometries).field_0x8 = 0;
  *(undefined8 *)&(this->Geometries).field_0x20 = 0;
  *(undefined4 *)&(this->Geometries).field_0x28 = 0;
  *(undefined4 *)&(this->Geometries).field_0x2c = 0x80;
  *(undefined4 *)&(this->Geometries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Geometries).field_0x34 = 0;
  *(undefined8 *)&(this->UpdateRequests).Elements = 0;
  *(undefined8 *)&(this->UpdateRequests).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UpdateRequests).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UpdateRequests).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UpdateRequests).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UpdateRequests).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UpdateRequests).Elements.field_0x34 = 0;
  (this->UpdateRequests).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UpdateRequests).HashSize = 0;
  *(undefined8 *)&(this->VisibleGeometries).Elements = 0;
  *(undefined8 *)&(this->VisibleGeometries).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VisibleGeometries).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VisibleGeometries).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VisibleGeometries).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VisibleGeometries).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisibleGeometries).Elements.field_0x34 = 0;
  (this->VisibleGeometries).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VisibleGeometries).HashSize = 0;
  *(undefined8 *)&(this->VisiblePrimitives).Elements = 0;
  *(undefined8 *)&(this->VisiblePrimitives).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VisiblePrimitives).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x34 = 0;
  (this->VisiblePrimitives).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VisiblePrimitives).HashSize = 0;
  *(undefined8 *)&(this->PendingRemoves).Elements = 0;
  *(undefined8 *)&(this->PendingRemoves).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingRemoves).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingRemoves).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingRemoves).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingRemoves).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingRemoves).Elements.field_0x34 = 0;
  (this->PendingRemoves).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingRemoves).HashSize = 0;
  (this->AuxiliaryDataBuffer).Reference = (FRDGPooledBuffer *)0x0;
  FSpanAllocator::FSpanAllocator(&this->AuxiliaryDataAllocator,false);
  (this->StagingAuxiliaryDataBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->VertexBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->IndexBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->ReadbackBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadbackBuffers).ArrayNum = 0;
  (this->ReadbackBuffers).ArrayMax = 0;
  (this->ScheduledBuilds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScheduledBuilds).ArrayNum = 0;
  (this->ScheduledBuilds).ArrayMax = 0;
  this->ScheduledBuildsNumPrimitives = 0;
  (this->PendingBuilds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingBuilds).ArrayNum = 0;
  (this->PendingBuilds).ArrayMax = 0;
  this->MaxReadbackBuffers = 4;
  this->bPrevMode = Fallback;
  this->bCurrentMode = Fallback;
  this->bUpdating = false;
  this->bInitialized = false;
  (this->ScreenMessageDelegate).ID = 0;
  this->NumVerticesHighWaterMark = 0;
  this->NumIndicesHighWaterMark = 0;
  this->StagingBufferSizeHighWaterMark = 0;
  this->NumVerticesHighWaterMarkPrev = 0;
  this->NumIndicesHighWaterMarkPrev = 0;
  this->StagingBufferSizeHighWaterMarkPrev = 0;
  return this;
}

// ~FRayTracingManager @ 145038a70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall Nanite::FRayTracingManager::~FRayTracingManager(FRayTracingManager *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FRDGPooledBuffer *pFVar3;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar4;
  ForElementType<FSetElementId> FVar5;
  void *pvVar6;
  longlong lVar7;
  
  this->_padding_ = (longlong)&___7FRayTracingManager_Nanite__6B_;
  DestructItems<Nanite::FRayTracingManager::FPendingBuild,int>
            ((FPendingBuild *)(this->PendingBuilds).AllocatorInstance.Data,
             (this->PendingBuilds).ArrayNum);
  pFVar2 = (this->PendingBuilds).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ScheduledBuilds).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Nanite::FRayTracingManager::FReadbackData,int>
            ((FReadbackData *)(this->ReadbackBuffers).AllocatorInstance.Data,
             (this->ReadbackBuffers).ArrayNum);
  pFVar2 = (this->ReadbackBuffers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar3 = (this->IndexBuffer).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->VertexBuffer).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->StagingAuxiliaryDataBuffer).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  FVar4 = (this->AuxiliaryDataAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar4 = (this->AuxiliaryDataAllocator).FreeSpans.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar3 = (this->AuxiliaryDataBuffer).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  (this->PendingRemoves).HashSize = 0;
  FVar5 = (this->PendingRemoves).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingRemoves).Elements);
  (this->VisiblePrimitives).HashSize = 0;
  FVar5 = (this->VisiblePrimitives).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->VisiblePrimitives).Elements);
  (this->VisibleGeometries).HashSize = 0;
  FVar5 = (this->VisibleGeometries).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->VisibleGeometries).Elements);
  (this->UpdateRequests).HashSize = 0;
  FVar5 = (this->UpdateRequests).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UpdateRequests).Elements);
  TSparseArray<Nanite::FRayTracingManager::FInternalData_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<Nanite::FRayTracingManager::FInternalData_*,FDefaultSparseArrayAllocator>
            (&this->Geometries);
  *(undefined4 *)&(this->ResourceToRayTracingIdMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->ResourceToRayTracingIdMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResourceToRayTracingIdMap);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// operator() @ 14503c310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Nanite::FRayTracingManager::Initialize'::__l2::<lambda_1>::operator()
          (void *this,
          TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
          *param_1)

{
  FText *pFVar1;
  EOnScreenMessageSeverity local_res8 [8];
  FString local_28;
  FText local_18;
  
  if (GNaniteRayTracingMaxNumVertices <= *(int *)(*(longlong *)this + 0x338)) {
    ::FString::PrintfImpl
              (&local_28,
               L"Nanite Ray Tracing vertex buffer overflow detected, increase \'r.RayTracing.Nanite.StreamOut.MaxNumVertices\' to avoid rendering artifacts."
              );
    pFVar1 = FText::FromString(&local_18,&local_28);
    local_res8[0] = Warning;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_28,L" Required max num vertices for update = %d, currently = %d");
    pFVar1 = FText::FromString(&local_18,&local_28);
    local_res8[0] = Warning;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (*(int *)(*(longlong *)this + 0x348) < *(int *)(*(longlong *)this + 0x338)) {
      if (2 < (byte)LogRenderer._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      }
      *(undefined4 *)(*(longlong *)this + 0x348) = *(undefined4 *)(*(longlong *)this + 0x338);
    }
  }
  if (GNaniteRayTracingMaxNumIndices <= *(int *)(*(longlong *)this + 0x33c)) {
    ::FString::PrintfImpl
              (&local_28,
               L"Nanite Ray Tracing index buffer overflow detected, increase \'r.RayTracing.Nanite.StreamOut.MaxNumIndices\' to avoid rendering artifacts."
              );
    pFVar1 = FText::FromString(&local_18,&local_28);
    local_res8[0] = Warning;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_28,L" Required max num indices for update = %d, currently = %d");
    pFVar1 = FText::FromString(&local_18,&local_28);
    local_res8[0] = Warning;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (*(int *)(*(longlong *)this + 0x34c) < *(int *)(*(longlong *)this + 0x33c)) {
      if (2 < (byte)LogRenderer._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      }
      *(undefined4 *)(*(longlong *)this + 0x34c) = *(undefined4 *)(*(longlong *)this + 0x33c);
    }
  }
  if ((ulonglong)((longlong)GNaniteRayTracingMaxStagingBufferSizeMB << 0x14) <=
      *(ulonglong *)(*(longlong *)this + 0x340)) {
    ::FString::PrintfImpl
              (&local_28,
               L"Nanite Ray Tracing staging buffer overflow detected, increase \'r.RayTracing.Nanite.MaxStagingBufferSizeMB\' to avoid rendering artifacts."
              );
    pFVar1 = FText::FromString(&local_18,&local_28);
    local_res8[0] = Warning;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_28,L" Required for update = %d, currently = %d");
    pFVar1 = FText::FromString(&local_18,&local_28);
    local_res8[0] = Warning;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (*(ulonglong *)(*(longlong *)this + 0x350) < *(ulonglong *)(*(longlong *)this + 0x340)) {
      if (2 < (byte)LogRenderer._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      }
      *(undefined8 *)(*(longlong *)this + 0x350) = *(undefined8 *)(*(longlong *)this + 0x340);
    }
  }
  return;
}

// operator() @ 145040800

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
`Nanite::FRayTracingManager::ProcessBuildRequests'::__l36::<lambda_2>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  int iVar1;
  longlong lVar2;
  FRDGResource *this_00;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_3c;
  TArrayView<FRayTracingGeometryBuildParams_const_,int> local_38;
  FRHIBufferRange local_28;
  
  lVar2 = *(longlong *)this;
  local_28.Size = 0;
  if (*(longlong *)(lVar2 + 0x20) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x183,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = *(FRDGResource **)(lVar2 + 0x20);
  FRDGResource::ValidateRHIAccess(this_00);
  local_28.Buffer = (FRHIBuffer *)this_00->ResourceRHI;
  iVar1 = *(int *)((longlong)this + 0x10);
  local_38.DataPtr = *(FRayTracingGeometryBuildParams **)((longlong)this + 8);
  local_28.Offset = 0;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar1;
  FRHIComputeCommandList::BuildAccelerationStructures(param_2,&local_38,&local_28);
  return;
}

// operator() @ 1450408e0

void __thiscall
`Nanite::FRayTracingManager::ProcessUpdateRequests'::__l103::<lambda_2>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FRDGResource *this_00;
  FRHIGPUBufferReadback *this_01;
  
  this_00 = *(FRDGResource **)((longlong)this + 8);
  this_01 = *(FRHIGPUBufferReadback **)this;
  FRDGResource::ValidateRHIAccess(this_00);
  FRHIGPUBufferReadback::EnqueueCopy(this_01,param_2,(FRHIBuffer *)this_00->ResourceRHI,0);
  return;
}

// Add @ 1450462f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
Nanite::FRayTracingManager::Add(FRayTracingManager *this,FPrimitiveSceneInfo *param_1)

{
  bool *pbVar1;
  FPrimitiveSceneProxy *pFVar2;
  code *pcVar3;
  bool bVar4;
  ERayTracingMode EVar5;
  uint uVar6;
  int iVar7;
  FInternalData *pFVar8;
  uint *puVar9;
  undefined1 *puVar10;
  FInternalData *this_00;
  FPrimitiveSceneInfo *local_res10;
  undefined4 local_res18 [2];
  int local_res20 [2];
  uint local_a8 [2];
  uint local_a0;
  undefined1 local_9c [4];
  FInternalData *local_98;
  uint local_90;
  uint local_8c;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_78;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  bool local_4c;
  FName local_48;
  uint local_40;
  uint *local_38;
  undefined4 *local_30;
  
  local_res10 = param_1;
  bVar4 = IsRayTracingEnabled();
  if ((bVar4) && (EVar5 = GetRayTracingMode(), EVar5 != Fallback)) {
    pFVar2 = param_1->Proxy;
    (**(code **)(pFVar2->_padding_ + 0x260))(pFVar2,&local_90);
    this_00 = (FInternalData *)0x0;
    local_res18[0] = 0xffffffff;
    if (*(int *)&(this->ResourceToRayTracingIdMap).field_0x8 !=
        *(int *)&(this->ResourceToRayTracingIdMap).field_0x34) {
      puVar10 = *(undefined1 **)&(this->ResourceToRayTracingIdMap).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->ResourceToRayTracingIdMap).field_0x38;
      }
      uVar6 = *(uint *)(puVar10 +
                       (ulonglong)
                       (*(int *)&(this->ResourceToRayTracingIdMap).field_0x48 - 1U & local_90) * 4);
      if (uVar6 != 0xffffffff) {
        do {
          puVar9 = (uint *)((longlong)(int)uVar6 * 0x10 +
                           *(longlong *)&this->ResourceToRayTracingIdMap);
          if (*puVar9 == local_90) {
            if (puVar9 != (uint *)0x0) goto LAB_1450463e0;
            break;
          }
          uVar6 = puVar9[2];
        } while (uVar6 != 0xffffffff);
      }
    }
    local_38 = &local_90;
    local_30 = local_res18;
    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
              ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->ResourceToRayTracingIdMap,(uint)local_res20,
               (TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)(ulonglong)local_90,
               (bool *)&local_38);
    puVar9 = (uint *)((longlong)local_res20[0] * 0x10 +
                     *(longlong *)&this->ResourceToRayTracingIdMap);
LAB_1450463e0:
    pbVar1 = (bool *)(puVar9 + 1);
    if (puVar9[1] == 0xffffffff) {
      (**(code **)(pFVar2->_padding_ + 600))(pFVar2,&local_78);
      if ((local_68 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("MeshInfo.NumClusters",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteRayTracing.cpp"
                             ,0x1aa,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = ::operator_new(0xc0);
      if (pFVar8 != (FInternalData *)0x0) {
        *(undefined8 *)&(pFVar8->Primitives).Elements = 0;
        *(undefined8 *)&(pFVar8->Primitives).Elements.field_0x8 = 0;
        *(undefined8 *)&(pFVar8->Primitives).Elements.field_0x20 = 0;
        *(undefined4 *)&(pFVar8->Primitives).Elements.field_0x28 = 0;
        *(undefined4 *)&(pFVar8->Primitives).Elements.field_0x2c = 0x80;
        *(undefined4 *)&(pFVar8->Primitives).Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(pFVar8->Primitives).Elements.field_0x34 = 0;
        (pFVar8->Primitives).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        (pFVar8->Primitives).HashSize = 0;
        (pFVar8->SegmentMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar8->SegmentMapping).ArrayNum = 0;
        (pFVar8->SegmentMapping).ArrayMax = 0;
        FDebugName::FDebugName(&pFVar8->DebugName);
        (pFVar8->RayTracingGeometryRHI).Reference = (FRHIRayTracingGeometry *)0x0;
        pFVar8->AuxiliaryDataOffset = 0xffffffff;
        pFVar8->AuxiliaryDataSize = 0;
        pFVar8->StagingAuxiliaryDataOffset = 0xffffffff;
        pFVar8->BaseMeshDataOffset = -1;
        pFVar8->bUpdating = false;
        this_00 = pFVar8;
      }
      this_00->ResourceId = local_90;
      this_00->HierarchyOffset = local_8c;
      this_00->NumClusters = local_68;
      this_00->NumNodes = local_64;
      this_00->NumVertices = local_60;
      this_00->NumTriangles = local_5c;
      this_00->NumMaterials = local_58;
      this_00->NumSegments = local_54;
      local_98 = this_00;
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
                (&this_00->SegmentMapping,&local_78);
      this_00->bAssembly = local_4c;
      (this_00->DebugName).Name = local_48;
      (this_00->DebugName).Number = local_40;
      this_00->NumResidentClusters = 0;
      this_00->NumResidentClustersUpdate = local_50;
      this_00->PrimitiveId = 0xffffffff;
      iVar7 = TSparseArray<Nanite::FRayTracingManager::FInternalData_*,FDefaultSparseArrayAllocator>
              ::Add(&this->Geometries,&local_98);
      *(int *)pbVar1 = iVar7;
      if (this_00->NumResidentClustersUpdate != 0) {
        TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
        Emplace<unsigned_int_const_&>(&this->UpdateRequests,&local_a0,pbVar1);
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
    }
    else {
      this_00 = *(FInternalData **)(*(longlong *)&this->Geometries + (longlong)(int)puVar9[1] * 8);
    }
    TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::
    Emplace<FPrimitiveSceneInfo_*_const_&>
              (&this_00->Primitives,(FPrimitiveSceneInfo **)local_9c,(bool *)&local_res10);
    local_a8[0] = *(uint *)pbVar1;
    if (*(int *)&(this->PendingRemoves).Elements.field_0x8 !=
        *(int *)&(this->PendingRemoves).Elements.field_0x34) {
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
      RemoveImpl<unsigned_int>(&this->PendingRemoves,local_a8[0],local_a8);
    }
    *(undefined4 *)((longlong)&pFVar2[1].SimpleStreamableAssetManagerIndex.Object + 4) =
         *(undefined4 *)pbVar1;
    *(uint *)&pFVar2[1].SimpleStreamableAssetManagerIndex.SharedReferenceCount.ReferenceController =
         this_00->AuxiliaryDataOffset;
  }
  return;
}

// AddVisiblePrimitive @ 145048b00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
Nanite::FRayTracingManager::AddVisiblePrimitive
          (FRayTracingManager *this,FPrimitiveSceneInfo *param_1)

{
  int iVar1;
  code *pcVar2;
  ERayTracingMode EVar3;
  bool bVar4;
  int local_res8 [2];
  FPrimitiveSceneInfo *local_res10;
  uint local_res18 [2];
  FPrimitiveSceneInfo *local_res20;
  
  local_res10 = param_1;
  EVar3 = GetRayTracingMode();
  if (EVar3 == Fallback) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetRayTracingMode() != ERayTracingMode::Fallback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteRayTracing.cpp"
                       ,0x20b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)&param_1->Proxy[1].SimpleStreamableAssetManagerIndex.Object + 4);
  local_res8[0] = iVar1;
  if (iVar1 == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Id != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteRayTracing.cpp"
                       ,0x210,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(int *)(*(longlong *)(*(longlong *)&this->Geometries + (longlong)iVar1 * 8) + 0x7c) =
       (param_1->PersistentIndex).Index;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Emplace<unsigned_int_const_&>(&this->VisibleGeometries,local_res18,(bool *)local_res8);
  TSet<FPrimitiveSceneInfo_const_*,DefaultKeyFuncs<FPrimitiveSceneInfo_const_*,0>,FDefaultSetAllocator>
  ::Emplace<FPrimitiveSceneInfo_const_*_const_&>
            (&this->VisiblePrimitives,&local_res20,(bool *)&local_res10);
  return;
}

// CheckModeChanged @ 14504c2e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall Nanite::FRayTracingManager::CheckModeChanged(FRayTracingManager *this)

{
  ERayTracingMode EVar1;
  
  this->bPrevMode = this->bCurrentMode;
  EVar1 = GetRayTracingMode();
  this->bCurrentMode = EVar1;
  return this->bPrevMode != EVar1;
}

// EndFrame @ 1450592f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall Nanite::FRayTracingManager::EndFrame(FRayTracingManager *this)

{
  this->UniformBuffer = (TRDGUniformBuffer<FNaniteRayTracingUniformParameters> *)0x0;
  return;
}

// GetCutError @ 1450635c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

float __thiscall Nanite::FRayTracingManager::GetCutError(FRayTracingManager *this)

{
  return GNaniteRayTracingCutError;
}

// GetRayTracingGeometry @ 145064130

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRHIRayTracingGeometry * __thiscall
Nanite::FRayTracingManager::GetRayTracingGeometry
          (FRayTracingManager *this,FPrimitiveSceneInfo *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)&param_1->Proxy[1].SimpleStreamableAssetManagerIndex.Object + 4);
  if (iVar1 == -1) {
    return (FRHIRayTracingGeometry *)0x0;
  }
  return *(FRHIRayTracingGeometry **)
          (*(longlong *)(*(longlong *)&this->Geometries + (longlong)iVar1 * 8) + 0xa0);
}

// Initialize @ 14506ad00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall Nanite::FRayTracingManager::Initialize(FRayTracingManager *this)

{
  FRendererOnScreenNotification *lpCriticalSection;
  FDelegateHandle local_res10;
  
  lpCriticalSection = FRendererOnScreenNotification::Get();
  if (lpCriticalSection != (FRendererOnScreenNotification *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
    ::AddLambda<_Nanite::FRayTracingManager::Initialize_::__l2::<lambda_1>_>
              (&lpCriticalSection->ProxyDelegate,(<lambda_1> *)&local_res10);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->ScreenMessageDelegate).ID = local_res10.ID;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ProcessBuildRequests @ 14506f8e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

bool __thiscall
Nanite::FRayTracingManager::ProcessBuildRequests(FRayTracingManager *this,FRDGBuilder *param_1)

{
  int *piVar1;
  char cVar2;
  FName FVar3;
  FRHIRayTracingGeometry *this_00;
  code *pcVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  ERayTracingMode EVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  FRDGBuffer *pFVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingAuxiliaryDataBuffer> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  longlong lVar17;
  FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingInFlightUpdates> FVar18;
  FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingScheduledBuilds> FVar19;
  FRDGScope *this_01;
  undefined8 *puVar20;
  FRDGEventName *pFVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  FScriptContainerElement *pFVar26;
  undefined8 *puVar27;
  FNaniteRayTracingPrimitivesParams *pFVar28;
  FNameEntryId FVar29;
  FScriptContainerElement *pFVar30;
  uchar auVar31 [8];
  uint local_res8;
  uint uStackX_c;
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  FStatMessage local_1a8;
  undefined8 *local_198;
  uint local_190;
  FRayTracingGeometryBuildParams local_188;
  uint local_168;
  uint uStack_164;
  FRDGBuffer *local_160;
  <lambda_2> local_158;
  FName local_140;
  FName local_138;
  FRDGBuffer *local_130;
  FScriptContainerElement *local_128;
  FName local_120;
  FStatMessage local_118;
  FStatMessage local_108;
  TRDGEventScopeGuard<FRDGScope_RHI> local_f8;
  char local_e8;
  FRDGBufferDesc local_e0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18>_const_*,std::tuple<>_> local_b0;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  FRDGEventName local_80;
  undefined1 local_68 [40];
  undefined8 local_40;
  
  if (this->bInitialized == false) {
    return false;
  }
  EVar7 = GetRayTracingMode();
  uVar23 = 8;
  if (EVar7 != Fallback) {
    uVar23 = 0x400000;
  }
  lVar24 = 0x1f8;
  if ((this->AuxiliaryDataAllocator).bGrowOnly == false) {
    lVar24 = 500;
  }
  uVar11 = *(uint *)((longlong)&this->_padding_ + lVar24);
  bVar8 = NaniteAssembliesSupported();
  if (uVar23 < uVar11) {
    uVar23 = uVar11;
  }
  pFVar12 = ResizeByteAddressBufferIfNeeded
                      (param_1,&this->AuxiliaryDataBuffer,(bVar8 + 1) * uVar23 * 4,
                       L"NaniteRayTracing.AuxiliaryDataBuffer",true,EVar7 == Fallback);
  FVar14 = StatPtr_STAT_NaniteRayTracingAuxiliaryDataBuffer;
  local_130 = pFVar12;
  if (StatPtr_STAT_NaniteRayTracingAuxiliaryDataBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingAuxiliaryDataBuffer>)0x0) {
    pFVar13 = ::FName::FName(&local_c8,"STAT_NaniteRayTracingAuxiliaryDataBuffer");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingAuxiliaryDataBuffer>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NaniteRayTracingAuxiliaryDataBuffer,*pFVar13,
                        L"Auxiliary Data Buffer","STATGROUP_NaniteRayTracing","STATCAT_Advanced",
                        L"Nanite RayTracing",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar3 = *(FName *)FVar14;
  auVar31._0_4_ = (pFVar12->Desc).NumElements * (pFVar12->Desc).BytesPerElement;
  auVar31[4] = '\0';
  auVar31[5] = '\0';
  auVar31[6] = '\0';
  auVar31[7] = '\0';
  uVar23 = FVar3.Number;
  FVar29 = FVar3.ComparisonIndex.Value;
  local_res8 = FVar29.Value;
  uStackX_c = uVar23;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    local_118.NameAndInfo.Number = uVar23 & 0xffff8fff | 0x8000;
    local_140 = FVar3;
    local_118.StatData.Pad = auVar31;
    local_118.NameAndInfo.Index.Value = FVar29.Value;
    FThreadStats::AddStatMessage(pFVar15,&local_118);
    FStatsTrace::Set(&local_140,(long64)auVar31);
    if (pFVar15->ScopeCount == 0) {
      FThreadStats::Flush(pFVar15,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar15,false,false);
    }
  }
  if ((this->ScheduledBuilds).ArrayNum == 0) {
    local_160 = (FRDGBuffer *)0x0;
  }
  else {
    local_160 = FRDGBuilder::RegisterExternalBuffer(param_1,&this->StagingAuxiliaryDataBuffer,None);
  }
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = 0;
  bVar8 = NaniteAssembliesSupported();
  iVar22 = (uint)bVar8 * 4 + 4;
  uVar23 = (this->ScheduledBuilds).ArrayNum;
  uVar25 = (ulonglong)(int)uVar23;
  pFVar30 = (this->ScheduledBuilds).AllocatorInstance.Data;
  local_128 = pFVar30 + uVar25 * 4;
  uVar11 = 0;
  while( true ) {
    pFVar26 = local_128;
    if ((this->ScheduledBuilds).ArrayNum != (int)uVar25) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar30 == pFVar26) break;
    lVar24 = *(longlong *)(*(longlong *)&this->Geometries + (longlong)*(int *)pFVar30 * 8);
    local_188.Geometry.Reference = (FRHIRayTracingGeometry *)0x0;
    local_188.BuildMode = Build;
    local_188.Segments.DataPtr = (FRayTracingGeometrySegment *)0x0;
    local_188.Segments.ArrayNum = 0;
    this_00 = *(FRHIRayTracingGeometry **)(lVar24 + 0xa0);
    if (this_00 != (FRHIRayTracingGeometry *)0x0) {
      local_188.Geometry.Reference = this_00;
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    local_188.BuildMode = Build;
    if (((local_1b8.Data <= &local_188) &&
        (&local_188 <
         (FRayTracingGeometryBuildParams *)(local_1b8.Data + (longlong)local_1b0._4_4_ * 0x20))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    iVar10 = (int)local_1b0;
    if ((int)local_1b0 == local_1b0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_1b8,(int *)((longlong)&local_1b0 + 4));
    }
    local_1b0 = CONCAT44(local_1b0._4_4_,iVar10 + 1);
    pFVar26 = local_1b8.Data + (longlong)iVar10 * 0x20;
    *(undefined8 *)&pFVar26->field_0x0 = 0;
    *(FRHIRayTracingGeometry **)&pFVar26->field_0x0 = local_188.Geometry.Reference;
    if (local_188.Geometry.Reference != (FRHIRayTracingGeometry *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_188.Geometry.Reference);
    }
    *(EAccelerationStructureBuildMode *)(pFVar26 + 8) = local_188.BuildMode;
    *(undefined4 *)(pFVar26 + 0x10) = local_188.Segments.DataPtr._0_4_;
    *(undefined4 *)(pFVar26 + 0x14) = local_188.Segments.DataPtr._4_4_;
    *(int *)(pFVar26 + 0x18) = local_188.Segments.ArrayNum;
    *(undefined4 *)(pFVar26 + 0x1c) = local_188.Segments._12_4_;
    lVar17 = (**(code **)(GDynamicRHI->_padding_ + 0x478))(GDynamicRHI,local_68);
    uVar5 = GRHIGlobals.RayTracing.ScratchBufferAlignment;
    local_40 = *(undefined8 *)(lVar17 + 0x10);
    iVar10 = *(int *)(lVar17 + 8) + -1 + GRHIGlobals.RayTracing.ScratchBufferAlignment;
    *(undefined1 *)(lVar24 + 0xb8) = 0;
    *(undefined4 *)(lVar24 + 0xb4) = 0xffffffff;
    local_190 = uVar11 + iVar10 & -uVar5;
    FVar18 = StatPtr_STAT_NaniteRayTracingInFlightUpdates;
    if (StatPtr_STAT_NaniteRayTracingInFlightUpdates ==
        (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingInFlightUpdates>)0x0) {
      pFVar13 = ::FName::FName(&local_c0,"STAT_NaniteRayTracingInFlightUpdates");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingInFlightUpdates>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteRayTracingInFlightUpdates
                          ,*pFVar13,L"In-flight Updates","STATGROUP_NaniteRayTracing",
                          "STATCAT_Advanced",L"Nanite RayTracing",true,false,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar3 = *(FName *)FVar18;
    FVar29 = FVar3.ComparisonIndex.Value;
    uVar11 = FVar3.Number;
    local_168 = FVar29.Value;
    uStack_164 = uVar11;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar15 == (FThreadStats *)0x0) {
        pFVar16 = FThreadStatsPool::Get();
        pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
      }
      local_108.NameAndInfo.Number = uVar11 & 0xffffbfff | 0xb000;
      local_108.StatData.Pad[0] = '\x01';
      local_108.StatData.Pad[1] = '\0';
      local_108.StatData.Pad[2] = '\0';
      local_108.StatData.Pad[3] = '\0';
      local_108.StatData.Pad[4] = '\0';
      local_108.StatData.Pad[5] = '\0';
      local_108.StatData.Pad[6] = '\0';
      local_108.StatData.Pad[7] = '\0';
      local_138 = FVar3;
      local_108.NameAndInfo.Index.Value = FVar29.Value;
      FThreadStats::AddStatMessage(pFVar15,&local_108);
      FStatsTrace::Add(&local_138,-1);
      if (pFVar15->ScopeCount == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
    AddCopyBufferPass(param_1,local_130,(ulonglong)(uint)(iVar22 * *(int *)(lVar24 + 0xa8)),
                      local_160,(ulonglong)(uint)(iVar22 * *(int *)(lVar24 + 0xb0)),
                      (ulonglong)(uint)(iVar22 * *(int *)(lVar24 + 0xac)));
    *(undefined4 *)(lVar24 + 0xb0) = 0xffffffff;
    if (local_188.Geometry.Reference != (FRHIRayTracingGeometry *)0x0) {
      FRHIResource::Release((FRHIResource *)local_188.Geometry.Reference);
    }
    uVar25 = (ulonglong)uVar23;
    pFVar30 = pFVar30 + 4;
    uVar11 = local_190;
  }
  auVar31 = (uchar  [8])(longlong)(this->ScheduledBuilds).ArrayNum;
  iVar22 = 1;
  if (1 < GNaniteRayTracingBLASScratchSizeMultipleMB) {
    iVar22 = GNaniteRayTracingBLASScratchSizeMultipleMB;
  }
  uVar23 = iVar22 * 0x100000;
  if ((auVar31 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar19 = StatPtr_STAT_NaniteRayTracingScheduledBuilds;
    if (StatPtr_STAT_NaniteRayTracingScheduledBuilds ==
        (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingScheduledBuilds>)0x0) {
      pFVar13 = ::FName::FName(&local_b8,"STAT_NaniteRayTracingScheduledBuilds");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingScheduledBuilds>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteRayTracingScheduledBuilds
                          ,*pFVar13,L"Scheduled Builds","STATGROUP_NaniteRayTracing",
                          "STATCAT_Advanced",L"Nanite RayTracing",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar3 = *(FName *)FVar19;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar15 == (FThreadStats *)0x0) {
        pFVar16 = FThreadStatsPool::Get();
        pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
      }
      local_1a8.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_1a8.StatData.Pad = auVar31;
      local_1a8.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      local_120 = FVar3;
      FThreadStats::AddStatMessage(pFVar15,&local_1a8);
      FStatsTrace::Add(&local_120,(long64)auVar31);
      if (pFVar15->ScopeCount == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  puVar27 = (undefined8 *)0x0;
  piVar1 = &(this->ScheduledBuilds).ArrayMax;
  (this->ScheduledBuilds).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ScheduledBuilds).AllocatorInstance,0,piVar1);
  }
  bVar8 = false;
  this->ScheduledBuildsNumPrimitives = 0;
  if (0 < (int)local_1b0) {
    cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_e8 = '\0';
    if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0x4ed;
        local_90 = 0x54bd0be0;
        uStack_8c = 1;
        ::Desc._padding_._0_4_ = 0x54bd0be0;
        ::Desc._padding_._4_4_ = uStack_94;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)u_RebuildNaniteBL;
        ::Desc._padding_ = (longlong)u_RebuildNaniteBL;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```Nanite::FRayTracingManager::ProcessBuildRequests'::__l41::Desc::operator()<>'::
               __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_b0._Myfirst._Val = &::Desc;
      local_f8.State = (FRDGScopeState *)param_1;
      this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_01;
      local_f8.Scope = this_01;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18>_const_*,std::tuple<>_>_>
                (&(this_01->Impl).Impl,(FRDGScopeState *)param_1,&local_b0);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_e8 = '\x01';
    }
    local_e0.BytesPerElement = GRHIGlobals.RayTracing.ScratchBufferAlignment;
    local_e0.Metadata = (FShaderParametersMetadata *)0x0;
    local_e0.Usage = 0x90008;
    local_e0.NumElements =
         ((GRHIGlobals.RayTracing.ScratchBufferAlignment - 1) +
         (((uVar23 - 1) + uVar11) / uVar23) * uVar23) /
         GRHIGlobals.RayTracing.ScratchBufferAlignment;
    auVar31 = (uchar  [8])
              FRDGBuilder::CreateBuffer
                        (param_1,&local_e0,L"NaniteRayTracing.BLASSharedScratchBuffer",None);
    puVar20 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x40,0x10);
    if (puVar20 == (undefined8 *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
    }
    else {
      puVar20[2] = 0;
      *puVar20 = &___7__TObject_VFNaniteRayTracingPrimitivesParams_Nanite___FRDGAllocator__6B_;
      *(undefined4 *)(puVar20 + 3) = 0x10;
      puVar20[4] = 0;
      *(undefined4 *)(puVar20 + 5) = 0x10;
      puVar20[6] = 0;
      *(undefined4 *)(puVar20 + 7) = 0x400;
      puVar27 = puVar20;
    }
    local_198 = puVar27;
    if ((((undefined8 **)param_1->_padding_ <= &local_198) &&
        (&local_198 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    iVar22 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar22 == *piVar1) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar22 + 1;
    pFVar28 = (FNaniteRayTracingPrimitivesParams *)(puVar27 + 2);
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar22 * 8) = local_198;
    *(undefined8 *)&pFVar28->Buffer0 = 0;
    puVar27[3] = CONCAT44(local_1a8.NameAndInfo.Number,0x10);
    local_1a8.NameAndInfo.Index.Value = 0x400;
    puVar27[4] = 0;
    puVar27[5] = CONCAT44(local_1a8.NameAndInfo.Number,0x10);
    *(uchar (*) [8])(puVar27 + 6) = auVar31;
    puVar27[7] = CONCAT44(local_1a8.NameAndInfo.Number,0x400);
    local_158.BuildParams.AllocatorInstance.Data = local_1b8.Data;
    local_158.BuildParams.ArrayNum = (int)local_1b0;
    local_158.BuildParams.ArrayMax = local_1b0._4_4_;
    local_1b0 = 0;
    local_1b8.Data = (FScriptContainerElement *)0x0;
    local_1a8.StatData.Pad = auVar31;
    local_158.PassParams = pFVar28;
    pFVar21 = FRDGEventName::FRDGEventName(&local_80,1,L"NaniteRayTracing::UpdateBLASes");
    FRDGBuilder::
    AddPass<Nanite::FNaniteRayTracingPrimitivesParams,_Nanite::FRayTracingManager::ProcessBuildRequests_::__l36::<lambda_2>_>
              (param_1,pFVar21,pFVar28,NeverCull|Compute,&local_158);
    if (local_80.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.FormattedEventName.Data.AllocatorInstance.Data);
    }
    FVar6.Data = local_158.BuildParams.AllocatorInstance.Data;
    DestructItems<FRayTracingGeometryBuildParams,int>
              ((FRayTracingGeometryBuildParams *)local_158.BuildParams.AllocatorInstance.Data,
               local_158.BuildParams.ArrayNum);
    if ((FRayTracingGeometryBuildParams *)FVar6.Data != (FRayTracingGeometryBuildParams *)0x0) {
      FMemory::Free(FVar6.Data);
    }
    bVar8 = true;
    if (local_e8 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_f8);
    }
  }
  if ((this->ReadbackBuffersNumPending == 0) && ((this->PendingBuilds).ArrayNum == 0)) {
    this->bUpdating = false;
  }
  DestructItems<FRayTracingGeometryBuildParams,int>
            ((FRayTracingGeometryBuildParams *)local_1b8.Data,(int)local_1b0);
  if ((FRayTracingGeometryBuildParams *)local_1b8.Data != (FRayTracingGeometryBuildParams *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  return bVar8;
}

// ProcessUpdateRequests @ 145070440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
Nanite::FRayTracingManager::ProcessUpdateRequests
          (FRayTracingManager *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2)

{
  int *piVar1;
  FReadbackBufferParameters *pFVar2;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar3;
  undefined1 *puVar4;
  char cVar5;
  ForElementType<FSetElementId> FVar6;
  FName FVar7;
  code *pcVar8;
  int iVar9;
  float fVar10;
  FRDGBuilder *pFVar11;
  uchar auVar12 [8];
  undefined4 uVar13;
  int iVar14;
  ERayTracingMode EVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar20;
  FRDGScope *this_00;
  longlong lVar21;
  TStatId TVar22;
  ulong64 uVar23;
  FRDGBufferUAV *pFVar24;
  FRayTracingManager *pFVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingStagingAuxiliaryDataBuffer> FVar27;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FRDGBuffer *pFVar28;
  FRDGBuffer *pFVar29;
  FGlobalShaderMap *pFVar30;
  FRDGEventName *pFVar31;
  undefined8 *puVar32;
  ForAnyElementType FVar33;
  byte bVar34;
  Type TVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ForElementType<FSetElementId> FVar38;
  longlong lVar39;
  uint uVar40;
  uint *puVar41;
  uint *puVar42;
  FScriptContainerElement *pFVar43;
  uint uVar44;
  ulonglong uVar45;
  uchar auVar46 [8];
  ulonglong uVar47;
  bool bVar48;
  undefined1 auStackY_498 [32];
  undefined1 local_428;
  undefined1 local_427 [3];
  int local_424;
  FName local_420;
  undefined1 local_418 [4];
  uint local_414;
  uint local_410;
  uint local_40c;
  uint local_408;
  FName local_400;
  FRDGBuilder *local_3f8;
  FRDGEventName local_3f0;
  uint local_3d8;
  int local_3d4;
  undefined8 *local_3d0;
  FRDGBuffer *local_3c8;
  uchar local_3c0 [8];
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_3b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3b0;
  int local_390;
  undefined4 uStack_38c;
  uint local_388 [2];
  uint local_380;
  FRayTracingManager *local_378;
  longlong local_370;
  FScriptContainerElement *local_368;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_360;
  undefined8 uStack_358;
  FName FStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  int local_338;
  undefined4 uStack_334;
  int local_330;
  uint uStack_32c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_328;
  undefined4 local_320;
  uint uStack_31c;
  int iStack_318;
  undefined4 uStack_314;
  FStatMessage local_310;
  FRDGBufferUAVDesc local_300;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2d0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_2b0;
  char local_2a0;
  FSceneUniformBuffer *local_298;
  longlong *local_290;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_288;
  uint local_268;
  int local_264;
  FName local_260;
  undefined1 local_258 [12];
  uint uStack_24c;
  TBitArray<FDefaultBitArrayAllocator> *local_248;
  undefined8 uStack_240;
  longlong local_238;
  int iStack_230;
  undefined4 uStack_22c;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_228;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_220;
  undefined8 uStack_200;
  <lambda_2> local_1f8;
  FRDGBufferDesc local_1e8;
  FRDGBufferDesc local_1c8;
  FRDGBufferDesc local_1a8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<50>_const_*,std::tuple<>_> local_188;
  FName local_178 [3];
  TRangedForIterator local_160;
  uint uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  undefined4 local_b4;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  ForAnyElementType local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_498;
  uVar37 = 0;
  pTVar3 = &this->VisibleGeometries;
  iVar18 = 0x800;
  if (GNaniteRayTracingMaxStagingBufferSizeMB < 0x800) {
    iVar18 = GNaniteRayTracingMaxStagingBufferSizeMB;
  }
  GNaniteRayTracingMaxStagingBufferSizeMB = iVar18;
  local_3f8 = param_1;
  local_378 = this;
  local_298 = param_2;
  if (GNaniteRayTracingForceUpdateVisible) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Append<FDefaultSetAllocator>(&this->UpdateRequests,pTVar3);
    GNaniteRayTracingForceUpdateVisible = false;
  }
  if ((((GNaniteRayTracingUpdate == false) || (EVar15 = GetRayTracingMode(), EVar15 == Fallback)) ||
      (this->bUpdating != false)) ||
     (*(int *)&(this->UpdateRequests).Elements.field_0x8 ==
      *(int *)&(this->UpdateRequests).Elements.field_0x34)) {
    bVar16 = 1 < (this->VisibleGeometries).HashSize;
    if (!bVar16) {
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements
                (pTVar3);
    }
    puVar4 = &(this->VisibleGeometries).Elements.field_0xc;
    *(undefined4 *)&(this->VisibleGeometries).Elements.field_0x8 = 0;
    if (*(int *)puVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)pTVar3,0,(int *)puVar4);
    }
    *(undefined4 *)&(this->VisibleGeometries).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->VisibleGeometries).Elements.field_0x34 = 0;
    iVar18 = *(int *)&(this->VisibleGeometries).Elements.field_0x2c;
    *(undefined4 *)&(this->VisibleGeometries).Elements.field_0x28 = 0;
    if ((iVar18 < 0) || (0x80 < iVar18)) {
      *(undefined4 *)&(this->VisibleGeometries).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->VisibleGeometries).Elements.field_0x10,0);
    }
    if (bVar16) {
      (this->VisibleGeometries).HashSize = 1;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash(pTVar3);
    }
  }
  else {
    local_a8._0_8_ = (FScriptContainerElement *)0x0;
    local_a8._8_8_ = 0;
    local_88 = (uint *)0x0;
    local_80 = 0;
    local_7c = 0x80;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    local_408 = 0;
    local_40c = 0;
    local_410 = 0;
    bVar16 = NaniteAssembliesSupported();
    puVar4 = &(this->VisibleGeometries).Elements.field_0x10;
    local_2f0._padding_._4_4_ = 1;
    local_2f0.UnvisitedBitMask = 0xffffffff;
    local_420 = (FName)((ulonglong)bVar16 * 4 + 4);
    local_2f0._padding_._0_4_ = 0;
    local_2f0.CurrentBitIndex = 0;
    local_2f0.BaseBitIndex = 0;
    local_2f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
    if (*(int *)&(this->VisibleGeometries).Elements.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2f0);
    }
    TStack_3b0._padding_ = CONCAT44(local_2f0._padding_._4_4_,(undefined4)local_2f0._padding_);
    TStack_3b0._16_8_ = CONCAT44(local_2f0.CurrentBitIndex,local_2f0.UnvisitedBitMask);
    TStack_3b0._24_8_ = CONCAT44(local_2f0._28_4_,local_2f0.BaseBitIndex);
    local_390 = *(int *)&(this->VisibleGeometries).Elements.field_0x8 -
                *(int *)&(this->VisibleGeometries).Elements.field_0x34;
    TStack_3b0.Array = local_2f0.Array;
    local_248 = local_2f0.Array;
    uStack_22c = uStack_38c;
    local_3b8 = pTVar3;
    local_258._0_8_ = pTVar3;
    unique0x10002649 = TStack_3b0._padding_;
    uStack_240 = TStack_3b0._16_8_;
    local_238 = TStack_3b0._24_8_;
    iStack_230 = local_390;
    pTVar20 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_110,(TBitArray<FDefaultBitArrayAllocator> *)puVar4,
                         *(int *)&(this->VisibleGeometries).Elements.field_0x28);
    TStack_3b0._padding_ = pTVar20->_padding_;
    TStack_3b0.Array = pTVar20->Array;
    TStack_3b0.UnvisitedBitMask = pTVar20->UnvisitedBitMask;
    TStack_3b0.CurrentBitIndex = pTVar20->CurrentBitIndex;
    TStack_3b0._24_8_ = *(undefined8 *)&pTVar20->BaseBitIndex;
    local_390 = *(int *)&(this->VisibleGeometries).Elements.field_0x8 -
                *(int *)&(this->VisibleGeometries).Elements.field_0x34;
    local_160.InitialNum = local_390;
    local_160._44_4_ = uStack_38c;
    local_3b8 = pTVar3;
    local_160._padding_ = (longlong)pTVar3;
    local_160._padding_ = TStack_3b0._padding_;
    local_160._padding_ = (longlong)TStack_3b0.Array;
    local_160._padding_ = TStack_3b0._16_8_;
    local_160._padding_ = TStack_3b0._24_8_;
    bVar16 = TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=((TRangedForIterator *)local_258,&local_160);
    uVar45 = uVar37;
    uVar47 = uVar37;
    uVar44 = local_410;
    uVar40 = local_408;
    if (bVar16) {
      do {
        uVar19 = *(uint *)(*(longlong *)
                            (TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_258._0_8_ + (longlong)uStack_240._4_4_ * 0xc);
        local_414 = uVar19;
        if (*(int *)&(this->UpdateRequests).Elements.field_0x8 !=
            *(int *)&(this->UpdateRequests).Elements.field_0x34) {
          FVar6 = (this->UpdateRequests).Hash.SecondaryData;
          FVar38 = (ForElementType<FSetElementId>)&(this->UpdateRequests).Hash;
          if (FVar6 != (ForElementType<FSetElementId>)0x0) {
            FVar38 = FVar6;
          }
          iVar18 = *(int *)((longlong)FVar38 +
                           (ulonglong)((this->UpdateRequests).HashSize - 1U & uVar19) * 4);
          if (iVar18 != -1) {
            lVar39 = *(longlong *)&(this->UpdateRequests).Elements;
            do {
              if (*(uint *)(lVar39 + (longlong)iVar18 * 0xc) == uVar19) {
                lVar39 = *(longlong *)(*(longlong *)&this->Geometries + (longlong)(int)uVar19 * 8);
                if ((*(int *)(lVar39 + 0x78) == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Data.NumResidentClustersUpdate > 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteRayTracing.cpp"
                                        ,0x312,L""), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if (*(char *)(lVar39 + 0x70) == '\0') {
                  uVar44 = *(int *)(lVar39 + 0x78) << 7;
                }
                else {
                  uVar44 = *(uint *)(lVar39 + 100);
                }
                uVar45 = (uVar45 & 0xffffffff) + (ulonglong)uVar44;
                uVar36 = (ulonglong)uVar44 * (longlong)local_420;
                if (uVar36 < this->StagingBufferSizeHighWaterMark) {
                  uVar36 = this->StagingBufferSizeHighWaterMark;
                }
                this->StagingBufferSizeHighWaterMark = uVar36;
                uVar40 = (uint)uVar37;
                uVar37 = uVar47;
                uVar44 = (uint)uVar47;
                if ((ulonglong)((longlong)GNaniteRayTracingMaxStagingBufferSizeMB << 0x14) <=
                    uVar45 * (longlong)local_420) goto LAB_145070940;
                if ((0x80000000 < uVar45 * (longlong)local_420) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("NewAuxiliaryDataBufferSize <= (1u << 31)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteRayTracing.cpp"
                                        ,0x324,L""), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if ((GNaniteRayTracingProfileStreamOut == false) &&
                   (local_388[0] = uVar19,
                   *(int *)&(this->UpdateRequests).Elements.field_0x8 !=
                   *(int *)&(this->UpdateRequests).Elements.field_0x34)) {
                  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
                  RemoveImpl<unsigned_int>(&this->UpdateRequests,uVar19,local_388);
                }
                TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
                Emplace<unsigned_int_const_&>
                          ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
                            *)local_a8,&local_268,(bool *)&local_414);
                *(undefined4 *)(lVar39 + 0x74) = *(undefined4 *)(lVar39 + 0x78);
                if ((*(char *)(lVar39 + 0xb8) != '\0') &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!Data.bUpdating",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteRayTracing.cpp"
                                        ,0x32e,L""), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                *(undefined1 *)(lVar39 + 0xb8) = 1;
                if ((*(int *)(lVar39 + 0xb4) != -1) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Data.BaseMeshDataOffset == -1",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteRayTracing.cpp"
                                        ,0x331,L""), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                *(uint *)(lVar39 + 0xb4) = uVar40;
                if ((*(int *)(lVar39 + 0xb0) != -1) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Data.StagingAuxiliaryDataOffset == INDEX_NONE",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteRayTracing.cpp"
                                        ,0x334,L""), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                *(uint *)(lVar39 + 0xb0) = local_40c;
                local_40c = (uint)uVar45;
                uVar37 = (ulonglong)(uVar40 + *(int *)(lVar39 + 0x6c) * 8 + 0x14);
                uVar47 = (ulonglong)((uint)uVar47 + *(int *)(lVar39 + 0x88));
                break;
              }
              iVar18 = *(int *)(lVar39 + 4 + (longlong)iVar18 * 0xc);
            } while (iVar18 != -1);
          }
        }
        uStack_240 = CONCAT44(uStack_240._4_4_,(uint)uStack_240 & ~uStack_24c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_258 + 8));
        bVar16 = TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_258,&local_160);
      } while (bVar16);
      uVar40 = (uint)uVar37;
      uVar37 = uVar47;
      uVar44 = (uint)uVar47;
    }
LAB_145070940:
    local_408 = uVar40;
    local_410 = uVar44;
    pTVar3 = &this->VisibleGeometries;
    if ((this->VisibleGeometries).HashSize < 2) {
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements
                (pTVar3);
      TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(&pTVar3->Elements,0);
    }
    else {
      TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(&pTVar3->Elements,0);
      (this->VisibleGeometries).HashSize = 1;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash(pTVar3);
    }
    if (local_a8._8_4_ != local_74) {
      cVar5 = *(char *)((longlong)&param_1->_padding_ + 6);
      local_2a0 = '\0';
      if ((cVar5 != '\0') && ((cVar5 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          local_120 = 0;
          uStack_11c = 0;
          ::Desc._12_8_ = ZEXT48(uStack_124);
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)u_Nanite__FRayTra;
          ::Desc._padding_ = (longlong)u_Nanite__FRayTra;
          ::Desc._padding_._0_4_ = 0x344;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```Nanite::FRayTracingManager::ProcessUpdateRequests'::__l64::Desc::operator()<>'::
                 __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        local_188._Myfirst._Val = &::Desc;
        local_2b0.State = (FRDGScopeState *)param_1;
        this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
        param_1->_padding_ = (longlong)this_00;
        local_2b0.Scope = this_00;
        TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
        Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<50>_const_*,std::tuple<>_>_>
                  (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_188);
        if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
          FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
          FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
        }
        local_2a0 = '\x01';
      }
      uVar44 = this->ReadbackBuffersWriteIndex;
      this->bUpdating = true;
      uVar40 = 0;
      if ((int)uVar44 < (this->ReadbackBuffers).ArrayNum) {
        uVar40 = ~uVar44 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_368 = (this->ReadbackBuffers).AllocatorInstance.Data;
      local_370 = (longlong)(int)uVar44 * 0x20;
      if ((*(int *)(local_368 + local_370 + 0x18) != 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ReadbackData.Entries.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteRayTracing.cpp"
                              ,0x349,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar44 = local_a8._8_4_ - local_74;
      uVar45 = (ulonglong)uVar44;
      local_380 = uVar44;
      local_3c8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,uVar45 * 0x18,4);
      if (((int)uVar44 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_3c0 = (uchar  [8])
                  FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,uVar37 << 2,4);
      if (((int)uVar37 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_2d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_a8 + 0x10);
      uVar44 = 0;
      local_2d0._padding_._4_4_ = 1;
      uVar40 = 0;
      local_2d0._padding_._0_4_ = 0;
      local_3d8 = 0;
      local_2d0.UnvisitedBitMask = 0xffffffff;
      local_2d0.CurrentBitIndex = 0;
      local_2d0.BaseBitIndex = 0;
      if (local_80 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2d0);
      }
      uStack_358 = CONCAT44(local_2d0._padding_._4_4_,(undefined4)local_2d0._padding_);
      local_360 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                  local_a8;
      uStack_348._4_4_ = local_2d0.CurrentBitIndex;
      uStack_348._0_4_ = local_2d0.UnvisitedBitMask;
      uStack_340._4_4_ = local_2d0._28_4_;
      uStack_340._0_4_ = local_2d0.BaseBitIndex;
      local_338 = local_a8._8_4_ - local_74;
      FStack_350 = (FName)local_2d0.Array;
      uStack_200 = CONCAT44(uStack_334,local_338);
      TStack_220.Array = local_2d0.Array;
      local_228 = local_360;
      TStack_220._padding_ = uStack_358;
      TStack_220._16_8_ = uStack_348;
      TStack_220._24_8_ = uStack_340;
      pTVar20 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_f0,(TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),
                           local_80);
      uStack_358 = pTVar20->_padding_;
      local_400 = (FName)pTVar20->Array;
      uStack_348._0_4_ = pTVar20->UnvisitedBitMask;
      uStack_348._4_4_ = pTVar20->CurrentBitIndex;
      uStack_340 = *(longlong *)&pTVar20->BaseBitIndex;
      local_3d4 = uStack_348._4_4_;
      FStack_350 = local_400;
      while( true ) {
        pTVar3 = local_228;
        iVar18 = local_3d4;
        uVar19 = (uint)uVar45;
        if (*(int *)&(local_228->Elements).field_0x8 - *(int *)&(local_228->Elements).field_0x34 !=
            (int)uStack_200) {
          local_428 = 0;
          `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_428);
        }
        if (((TStack_220.CurrentBitIndex == iVar18) && ((FName)TStack_220.Array == local_400)) &&
           (pTVar3 == (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                      local_a8)) break;
        local_424 = *(int *)(*(longlong *)&pTVar3->Elements +
                            (longlong)TStack_220.CurrentBitIndex * 0xc);
        lVar39 = *(longlong *)(*(longlong *)&this->Geometries + (longlong)local_424 * 8);
        uVar17 = 0;
        if ((int)uVar40 < (int)uVar19) {
          uVar17 = ~uVar40 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar19 = local_410;
        ((FStreamOutRequest *)((longlong)local_3c8 + (longlong)(int)uVar40 * 0x18))->PrimitiveId =
             *(uint *)(lVar39 + 0x7c);
        ((FStreamOutRequest *)((longlong)local_3c8 + (longlong)(int)uVar40 * 0x18))->NumMaterials =
             *(uint *)(lVar39 + 0x68);
        ((FStreamOutRequest *)((longlong)local_3c8 + (longlong)(int)uVar40 * 0x18))->NumSegments =
             *(uint *)(lVar39 + 0x6c);
        ((FStreamOutRequest *)((longlong)local_3c8 + (longlong)(int)uVar40 * 0x18))->
        SegmentMappingOffset = uVar44;
        ((FStreamOutRequest *)((longlong)local_3c8 + (longlong)(int)uVar40 * 0x18))->
        AuxiliaryDataOffset = *(uint *)(lVar39 + 0xb0);
        ((FStreamOutRequest *)((longlong)local_3c8 + (longlong)(int)uVar40 * 0x18))->MeshDataOffset
             = *(uint *)(lVar39 + 0xb4);
        puVar41 = *(uint **)(lVar39 + 0x80);
        iVar18 = *(int *)(lVar39 + 0x88);
        puVar42 = puVar41 + iVar18;
        while( true ) {
          if (*(int *)(lVar39 + 0x88) != iVar18) {
            local_427[0] = 0;
            `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_427);
          }
          pFVar43 = local_368;
          lVar21 = local_370;
          this = local_378;
          if (puVar41 == puVar42) break;
          uVar40 = *puVar41;
          uVar17 = 0;
          if ((int)uVar44 < (int)uVar19) {
            uVar17 = ~uVar44 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar16)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar21 = (longlong)(int)uVar44;
          uVar44 = uVar44 + 1;
          puVar41 = puVar41 + 1;
          *(uint *)((longlong)local_3c0 + lVar21 * 4) = uVar40;
        }
        if (((*(int **)(local_368 + local_370 + 0x10) <= &local_424) &&
            (&local_424 <
             *(int **)(local_368 + local_370 + 0x10) + *(int *)(local_368 + local_370 + 0x1c))) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar18 = *(int *)(pFVar43 + lVar21 + 0x18);
        if (iVar18 == *(int *)(pFVar43 + lVar21 + 0x1c)) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)(pFVar43 + lVar21 + 0x10),
                              (int *)(pFVar43 + lVar21 + 0x1c));
        }
        uVar40 = local_3d8 + 1;
        *(int *)(pFVar43 + lVar21 + 0x18) = iVar18 + 1;
        *(int *)(*(longlong *)(pFVar43 + lVar21 + 0x10) + (longlong)iVar18 * 4) = local_424;
        TStack_220.UnvisitedBitMask = TStack_220.UnvisitedBitMask & ~TStack_220._padding_._4_4_;
        local_3d8 = uVar40;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_220);
        uVar45 = (ulonglong)local_380;
      }
      iVar18 = local_a8._8_4_ - local_74;
      if (iVar18 != 0) {
        TVar22 = FThreadSafeStaticStatInner<FStat_STAT_NaniteRayTracingInFlightUpdates,1>::GetStatId
                           ((FThreadSafeStaticStatInner<FStat_STAT_NaniteRayTracingInFlightUpdates,1>
                             *)&StatPtr_STAT_NaniteRayTracingInFlightUpdates);
        local_400 = *(FName *)(TVar22.StatIdPtr)->Name;
        FThreadStats::AddMessage<__int64>(local_400,Add,(longlong)iVar18,false);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FStreamOutRequest>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FStreamOutRequest>_const&___ptr64)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FStreamOutRequest>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FStreamOutRequest>_const&___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__),
         `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FStreamOutRequest>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FStreamOutRequest>_const&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FStreamOutRequest>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FStreamOutRequest>_const&___ptr64)'
        ::__l2::DummyElement.PrimitiveId = 0;
        `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FStreamOutRequest>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FStreamOutRequest>_const&___ptr64)'
        ::__l2::DummyElement.NumMaterials = 0;
        `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FStreamOutRequest>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FStreamOutRequest>_const&___ptr64)'
        ::__l2::DummyElement.NumSegments = 0;
        `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FStreamOutRequest>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FStreamOutRequest>_const&___ptr64)'
        ::__l2::DummyElement.SegmentMappingOffset = 0;
        `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FStreamOutRequest>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FStreamOutRequest>_const&___ptr64)'
        ::__l2::DummyElement.AuxiliaryDataOffset = 0;
        `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FStreamOutRequest>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FStreamOutRequest>_const&___ptr64)'
        ::__l2::DummyElement.MeshDataOffset = 0;
        _Init_thread_footer(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FStreamOutRequest>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FStreamOutRequest>_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      if (uVar19 == 0) {
        uVar19 = 1;
        uVar23 = 0x18;
        pFVar28 = (FRDGBuffer *)
                  &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FStreamOutRequest>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FStreamOutRequest>_const&___ptr64)'
                   ::__l2::DummyElement;
      }
      else {
        uVar23 = (ulong64)(int)(uVar19 * 0x18);
        pFVar28 = local_3c8;
      }
      local_400 = (FName)CreateStructuredBuffer
                                   (local_3f8,L"NaniteRayTracing.RequestBuffer",0x18,uVar19,pFVar28,
                                    uVar23,NoCopy);
      pFVar11 = local_3f8;
      if (local_410 == 0) {
        uVar23 = 4;
        auVar46 = (uchar  [8])
                  &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<unsigned_int>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<unsigned_int>_const&___ptr64)'
                   ::__l2::DummyElement;
        uVar44 = 1;
      }
      else {
        uVar23 = (ulong64)(int)(local_410 * 4);
        auVar46 = local_3c0;
        uVar44 = local_410;
      }
      local_3c8 = CreateStructuredBuffer
                            (local_3f8,L"NaniteRayTracing.SegmentMappingBuffer",4,uVar44,
                             (void *)auVar46,uVar23,NoCopy);
      local_3f0.FormattedEventName.Data.AllocatorInstance.Data._0_4_ = 0x10109;
      local_3f0.EventFormat._0_4_ = 4;
      local_3f0.EventFormat._4_4_ = 0x20;
      if (0x20 < local_408) {
        local_3f0.EventFormat._4_4_ = local_408;
      }
      local_1e8.NumElements = local_3f0.EventFormat._4_4_;
      local_1e8.BytesPerElement = 4;
      local_3f0.FormattedEventName.Data.ArrayNum = 0;
      local_3f0.FormattedEventName.Data.ArrayMax = 0;
      local_1e8._12_4_ = local_3f0.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
      local_1e8.Usage = StructuredBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
      local_1e8.Metadata = (FShaderParametersMetadata *)0x0;
      local_3c0 = (uchar  [8])
                  FRDGBuilder::CreateBuffer
                            (pFVar11,&local_1e8,L"NaniteRayTracing.MeshDataBuffer",None);
      local_300._padding_._2_1_ = 0;
      bVar34 = 0;
      if ((*(undefined1 *)((longlong)local_3c0 + 0x88) & DrawIndirect) != None) {
        bVar34 = 0x1c;
      }
      local_300._padding_._0_2_ = (ushort)bVar34;
      local_300.Buffer = (FRDGBuffer *)local_3c0;
      pFVar24 = FRDGBuilder::CreateUAV(pFVar11,&local_300,None);
      AddClearUAVPass(pFVar11,pFVar24,0,Compute);
      uVar44 = 0x400000;
      if (0x400000 < local_40c) {
        uVar44 = local_40c;
      }
      pFVar25 = (FRayTracingManager *)
                ResizeByteAddressBufferIfNeeded
                          (pFVar11,&this->StagingAuxiliaryDataBuffer,
                           uVar44 * local_420.ComparisonIndex.Value,
                           L"NaniteRayTracing.StagingAuxiliaryDataBuffer",false,Default);
      FVar27 = StatPtr_STAT_NaniteRayTracingStagingAuxiliaryDataBuffer;
      local_378 = pFVar25;
      if (StatPtr_STAT_NaniteRayTracingStagingAuxiliaryDataBuffer ==
          (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingStagingAuxiliaryDataBuffer>)0x0) {
        pFVar26 = ::FName::FName(local_178,"STAT_NaniteRayTracingStagingAuxiliaryDataBuffer");
        FVar27 = (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingStagingAuxiliaryDataBuffer>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_NaniteRayTracingStagingAuxiliaryDataBuffer,*pFVar26,
                            L"Staging Auxiliary Data Buffer","STATGROUP_NaniteRayTracing",
                            "STATCAT_Advanced",L"Nanite RayTracing",true,false,ST_int64,false,false,
                            MCR_Physical);
      }
      FVar7 = *(FName *)FVar27;
      auVar46._0_4_ =
           *(uint *)&(pFVar25->Geometries).field_0x14 *
           ((FRDGBufferDesc *)&(pFVar25->Geometries).field_0x10)->BytesPerElement;
      auVar46[4] = '\0';
      auVar46[5] = '\0';
      auVar46[6] = '\0';
      auVar46[7] = '\0';
      local_420 = FVar7;
      if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        local_310.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
        local_310.StatData.Pad = auVar46;
        local_310.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
        local_260 = FVar7;
        FThreadStats::AddStatMessage(this_01,&local_310);
        FStatsTrace::Set(&local_260,(long64)auVar46);
        if (this_01->ScopeCount == 0) {
          FThreadStats::Flush(this_01,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
      }
      local_3f0.FormattedEventName.Data.AllocatorInstance.Data._0_4_ = 0x10109;
      local_3f0.EventFormat._0_4_ = 4;
      local_3f0.FormattedEventName.Data.ArrayNum = 0;
      local_3f0.FormattedEventName.Data.ArrayMax = 0;
      local_3f0.EventFormat._4_4_ = GNaniteRayTracingMaxNumVertices * 3;
      local_1c8.NumElements = local_3f0.EventFormat._4_4_;
      local_1c8.BytesPerElement = 4;
      local_1c8._12_4_ = local_3f0.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
      local_1c8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
      local_1c8.Metadata = (FShaderParametersMetadata *)0x0;
      pFVar28 = ResizeBufferIfNeeded
                          (pFVar11,&this->VertexBuffer,&local_1c8,L"NaniteRayTracing.VertexBuffer",
                           false,Default);
      local_3f0.EventFormat._4_4_ = GNaniteRayTracingMaxNumIndices;
      local_3f0.FormattedEventName.Data.AllocatorInstance.Data._0_4_ = 0x10109;
      local_3f0.EventFormat._0_4_ = 4;
      local_1a8.NumElements = GNaniteRayTracingMaxNumIndices;
      local_1a8.BytesPerElement = 4;
      local_1a8._12_4_ = local_3f0.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
      local_1a8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
      local_3f0.FormattedEventName.Data.ArrayNum = 0;
      local_3f0.FormattedEventName.Data.ArrayMax = 0;
      local_1a8.Metadata = (FShaderParametersMetadata *)0x0;
      pFVar29 = ResizeBufferIfNeeded
                          (pFVar11,&this->IndexBuffer,&local_1a8,L"NaniteRayTracing.IndexBuffer",
                           false,Default);
      iVar14 = local_74;
      fVar10 = GNaniteRayTracingCutError;
      iVar9 = GNaniteRayTracingMaxNumIndices;
      iVar18 = GNaniteRayTracingMaxNumVertices;
      bVar34 = *(byte *)((longlong)&this->_padding_ + 4);
      TVar35 = (uint)bVar34;
      if (bVar34 == 5) {
        TVar35 = GMaxRHIFeatureLevel;
      }
      uVar13 = local_a8._8_4_;
      pFVar30 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar35]);
      auVar46 = local_3c0;
      StreamOutData(local_3f8,pFVar30,local_298,fVar10,uVar13 - iVar14,(FRDGBuffer *)local_400,
                    local_3c8,(FRDGBuffer *)local_3c0,(FRDGBuffer *)local_378,pFVar28,iVar18,pFVar29
                    ,iVar9);
      iVar18 = local_a8._8_4_ - local_74;
      if ((iVar18 != 0) && (FThreadStats::bPrimaryEnable != false)) {
        TVar22 = FThreadSafeStaticStatInner<FStat_STAT_NaniteRayTracingStreamOutRequests,1>::
                 GetStatId((FThreadSafeStaticStatInner<FStat_STAT_NaniteRayTracingStreamOutRequests,1>
                            *)&StatPtr_STAT_NaniteRayTracingStreamOutRequests);
        local_420 = *(FName *)(TVar22.StatIdPtr)->Name;
        FThreadStats::AddMessage<__int64>(local_420,Add,(longlong)iVar18,false);
      }
      uVar44 = local_80;
      pFVar43 = local_368;
      lVar39 = local_370;
      if (GNaniteRayTracingProfileStreamOut == false) {
        local_1f8.MeshDataBuffer = (FRDGBuffer *)auVar46;
        local_1f8.MeshDataReadbackBuffer = *(FRHIGPUBufferReadback **)(local_368 + local_370);
        pFVar31 = FRDGEventName::FRDGEventName(&local_3f0,1,L"NaniteRayTracing::Readback");
        pFVar11 = local_3f8;
        puVar32 = FMemStackBase::Alloc((FMemStackBase *)&local_3f8->_padding_,0x20,0x10);
        if (puVar32 == (undefined8 *)0x0) {
          puVar32 = (undefined8 *)0x0;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          if (bVar16) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else {
          puVar32[2] = 0;
          *puVar32 = &___7__TObject_VFReadbackBufferParameters___FRDGAllocator__6B_;
          *(undefined4 *)(puVar32 + 3) = 0x80;
        }
        local_3d0 = puVar32;
        if ((((undefined8 **)pFVar11->_padding_ <= &local_3d0) &&
            (&local_3d0 <
             (undefined8 **)pFVar11->_padding_ + *(int *)((longlong)&pFVar11->_padding_ + 4))) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar18 = (int)pFVar11->_padding_;
        piVar1 = (int *)((longlong)&pFVar11->_padding_ + 4);
        if (iVar18 == *piVar1) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&pFVar11->_padding_,piVar1);
        }
        auVar12 = local_3c0;
        *(int *)&pFVar11->_padding_ = iVar18 + 1;
        local_3c0[0] = auVar46[0];
        local_3c0[1] = auVar46[1];
        local_3c0[2] = auVar46[2];
        local_3c0[3] = auVar46[3];
        local_3c0[4] = auVar46[4];
        local_3c0[5] = auVar46[5];
        local_3c0[6] = auVar46[6];
        local_3c0[7] = auVar46[7];
        local_310.StatData.Pad[0] = local_3c0[0];
        local_310.StatData.Pad[1] = local_3c0[1];
        local_310.StatData.Pad[2] = local_3c0[2];
        local_310.StatData.Pad[3] = local_3c0[3];
        local_310.StatData.Pad[4] = local_3c0[4];
        local_310.StatData.Pad[5] = local_3c0[5];
        local_310.StatData.Pad[6] = local_3c0[6];
        local_310.StatData.Pad[7] = local_3c0[7];
        *(undefined8 **)(pFVar11->_padding_ + (longlong)iVar18 * 8) = local_3d0;
        pFVar2 = (FReadbackBufferParameters *)(puVar32 + 2);
        local_310.NameAndInfo.Index.Value = 0x80;
        local_3c0[0] = auVar46[0];
        local_3c0[1] = auVar46[1];
        local_3c0[2] = auVar46[2];
        local_3c0[3] = auVar46[3];
        local_3c0[4] = auVar46[4];
        local_3c0[5] = auVar46[5];
        local_3c0[6] = auVar46[6];
        local_3c0[7] = auVar46[7];
        (pFVar2->Buffer).field_0x0 = local_3c0[0];
        (pFVar2->Buffer).field_0x1 = local_3c0[1];
        (pFVar2->Buffer).field_0x2 = local_3c0[2];
        (pFVar2->Buffer).field_0x3 = local_3c0[3];
        (pFVar2->Buffer).field_0x4 = local_3c0[4];
        (pFVar2->Buffer).field_0x5 = local_3c0[5];
        (pFVar2->Buffer).field_0x6 = local_3c0[6];
        (pFVar2->Buffer).field_0x7 = local_3c0[7];
        puVar32[3] = CONCAT44(local_310.NameAndInfo.Number,0x80);
        local_3c0 = auVar12;
        FRDGBuilder::
        AddPass<FReadbackBufferParameters,_Nanite::FRayTracingManager::ProcessUpdateRequests_::__l103::<lambda_2>_>
                  (pFVar11,pFVar31,pFVar2,Readback,&local_1f8);
        if ((void *)CONCAT44(local_3f0.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                             local_3f0.FormattedEventName.Data.AllocatorInstance.Data._0_4_) !=
            (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_3f0.FormattedEventName.Data.AllocatorInstance.Data.
                                         _4_4_,local_3f0.FormattedEventName.Data.AllocatorInstance.
                                               Data._0_4_));
        }
        *(uint *)(pFVar43 + lVar39 + 8) = local_408;
        uVar44 = this->MaxReadbackBuffers;
        uVar40 = this->ReadbackBuffersNumPending + 1;
        this->ReadbackBuffersWriteIndex = (this->ReadbackBuffersWriteIndex + 1) % uVar44;
        if (uVar40 < uVar44) {
          uVar44 = uVar40;
        }
        this->ReadbackBuffersNumPending = uVar44;
      }
      else {
        iVar18 = 0;
        uVar40 = 0;
        this->bUpdating = false;
        uVar19 = 1;
        TStack_3b0.CurrentBitIndex = uVar40;
        if (local_80 != 0) {
          puVar42 = (uint *)(local_a8 + 0x10);
          if (local_88 != (uint *)0x0) {
            puVar42 = local_88;
          }
          uVar17 = *puVar42;
          uVar40 = 0;
          while (uVar17 == 0) {
            lVar39 = (longlong)iVar18;
            uVar40 = uVar40 + 0x20;
            iVar18 = iVar18 + 1;
            TStack_3b0.CurrentBitIndex = local_80;
            if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
            goto LAB_145071633;
            uVar17 = (puVar42 + 1)[lVar39];
          }
          uVar19 = -uVar17 & uVar17;
          uVar37 = (ulonglong)uVar19 * 2 + 1;
          lVar39 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          local_264 = (int)lVar39;
          TStack_3b0.CurrentBitIndex = local_264 + -1 + uVar40;
          if ((int)local_80 < TStack_3b0.CurrentBitIndex) {
            TStack_3b0.CurrentBitIndex = local_80;
          }
        }
LAB_145071633:
        local_338 = local_a8._8_4_ - local_74;
        local_3b8 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                    local_a8;
        TStack_3b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_a8 + 0x10);
        uStack_358 = CONCAT44(uVar19,iVar18);
        uStack_348 = CONCAT44(TStack_3b0.CurrentBitIndex,0xffffffff);
        uVar19 = local_80 & 0xffffffe0;
        TStack_3b0._padding_ = uStack_358;
        uStack_340 = CONCAT44(local_b4,uVar40);
        uStack_38c = uStack_334;
        local_390 = local_338;
        iVar18 = (int)local_80 >> 5;
        bVar34 = (byte)local_80;
        TStack_3b0._24_8_ = uStack_340;
        TStack_3b0.UnvisitedBitMask = 0xffffffff;
        local_360 = local_3b8;
        FStack_350 = (FName)TStack_3b0.Array;
        if (((int)local_80 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (uVar44 != local_80) {
          puVar42 = (uint *)(local_a8 + 0x10);
          if (local_88 != (uint *)0x0) {
            puVar42 = local_88;
          }
          uVar44 = -1 << (bVar34 & 0x1f) & puVar42[iVar18];
          while (uVar44 == 0) {
            lVar39 = (longlong)iVar18;
            uVar19 = uVar19 + 0x20;
            iVar18 = iVar18 + 1;
            uVar44 = local_80;
            if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
            goto LAB_14507173d;
            uVar44 = (puVar42 + 1)[lVar39];
          }
          uVar37 = (ulonglong)(-uVar44 & uVar44) * 2 + 1;
          lVar39 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          uVar44 = (uVar19 - 1) + (int)lVar39;
          if ((int)local_80 < (int)uVar44) {
            uVar44 = local_80;
          }
        }
LAB_14507173d:
        while( true ) {
          pTVar3 = local_3b8;
          if (*(int *)&(local_3b8->Elements).field_0x8 - *(int *)&(local_3b8->Elements).field_0x34
              != local_390) {
            `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_418);
          }
          if (((TStack_3b0.CurrentBitIndex == uVar44) &&
              (TStack_3b0.Array ==
               (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_a8 + 0x10))) &&
             (pTVar3 == (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                        local_a8)) break;
          lVar39 = *(longlong *)
                    (*(longlong *)&this->Geometries +
                    (longlong)
                    *(int *)(*(longlong *)&pTVar3->Elements +
                            (longlong)TStack_3b0.CurrentBitIndex * 0xc) * 8);
          TStack_3b0.UnvisitedBitMask = TStack_3b0.UnvisitedBitMask & ~TStack_3b0._padding_._4_4_;
          *(undefined1 *)(lVar39 + 0xb8) = 0;
          *(undefined8 *)(lVar39 + 0xb0) = 0xffffffffffffffff;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3b0);
        }
        pFVar43 = local_368 + local_370 + 0x10;
        *(undefined4 *)&pFVar43[8].field_0x0 = 0;
        if (*(int *)(pFVar43 + 0xc) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)pFVar43,0,(int *)(pFVar43 + 0xc));
        }
      }
      bVar16 = 1 < local_60;
      if (!bVar16) {
        TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements
                  ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                   local_a8);
      }
      bVar48 = local_a8._12_4_ != 0;
      local_a8._8_8_ = (ulonglong)(uint)local_a8._12_4_ << 0x20;
      if (bVar48) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
      }
      local_78 = 0xffffffff;
      local_74 = 0;
      local_80 = 0;
      if (0x80 < local_7c) {
        local_7c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
      }
      if (bVar16) {
        local_60 = 1;
        if (((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0) &&
           (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4),
           (ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0)) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
        }
        FVar33.Data = (FScriptContainerElement *)local_70;
        if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0) {
          FVar33.Data = local_68.Data;
        }
        *(undefined4 *)FVar33.Data = 0xffffffff;
        if (local_60 != 0) {
          pTStack_328 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
          local_330 = 0;
          uStack_32c = 1;
          uStack_31c = 0;
          iStack_318 = 0;
          if (local_80 != 0) {
            puVar42 = (uint *)(local_a8 + 0x10);
            if (local_88 != (uint *)0x0) {
              puVar42 = local_88;
            }
            uVar44 = *puVar42;
            iStack_318 = 0;
            local_330 = 0;
            while (uVar44 == 0) {
              iStack_318 = iStack_318 + 0x20;
              lVar39 = (longlong)local_330;
              local_330 = local_330 + 1;
              if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < local_330)
              goto LAB_1450719cd;
              uVar44 = (puVar42 + 1)[lVar39];
            }
            uStack_32c = -uVar44 & uVar44;
            uVar37 = (ulonglong)uStack_32c * 2 + 1;
            lVar39 = 0x3f;
            if (uVar37 != 0) {
              for (; uVar37 >> lVar39 == 0; lVar39 = lVar39 + -1) {
              }
            }
            uStack_31c = iStack_318 + -1 + (int)lVar39;
            if ((int)local_80 < (int)uStack_31c) {
LAB_1450719cd:
              uStack_31c = local_80;
            }
          }
          local_320 = 0xffffffff;
          local_290 = (longlong *)local_a8;
          local_288._padding_ = CONCAT44(uStack_32c,local_330);
          local_288.CurrentBitIndex = uStack_31c;
          local_288.UnvisitedBitMask = 0xffffffff;
          local_288._28_4_ = uStack_314;
          local_288.BaseBitIndex = iStack_318;
          uVar44 = uStack_31c;
          local_288.Array = pTStack_328;
          if ((int)uStack_31c < (int)local_80) {
            do {
              lVar39 = *local_290;
              lVar21 = (longlong)(int)uVar44;
              uVar40 = local_60 - 1U & *(uint *)(lVar39 + lVar21 * 0xc);
              *(uint *)(lVar39 + 8 + lVar21 * 0xc) = uVar40;
              FVar33.Data = (FScriptContainerElement *)local_70;
              if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar33.Data = local_68.Data;
              }
              uVar37 = (longlong)local_60 - 1U & (longlong)(int)uVar40;
              *(undefined4 *)(lVar39 + 4 + lVar21 * 0xc) =
                   *(undefined4 *)((longlong)FVar33.Data + uVar37 * 4);
              *(uint *)((longlong)FVar33.Data + uVar37 * 4) = uVar44;
              local_288.UnvisitedBitMask = local_288.UnvisitedBitMask & ~local_288._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_288);
              uVar44 = local_288.CurrentBitIndex;
            } while (local_288.CurrentBitIndex < (local_288.Array)->NumBits);
          }
        }
      }
      if (local_2a0 != '\0') {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_2b0);
      }
    }
    local_60 = 0;
    if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free(local_68.Data);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
  }
  return;
}

// Remove @ 145073560

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
Nanite::FRayTracingManager::Remove(FRayTracingManager *this,FPrimitiveSceneInfo *param_1)

{
  FPrimitiveSceneProxy *pFVar1;
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator> *this_00
  ;
  code *pcVar2;
  bool bVar3;
  int local_res18 [2];
  uint local_res20 [2];
  
  bVar3 = IsRayTracingAllowed();
  if (bVar3) {
    pFVar1 = param_1->Proxy;
    local_res18[0] = *(int *)((longlong)&pFVar1[1].SimpleStreamableAssetManagerIndex.Object + 4);
    if (local_res18[0] == -1) {
      if ((*(int *)&pFVar1[1].SimpleStreamableAssetManagerIndex.SharedReferenceCount.
                    ReferenceController != -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NaniteProxy->GetRayTracingDataOffset() == INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteRayTracing.cpp"
                             ,0x1e2,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      this_00 = *(TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>
                  **)(*(longlong *)&this->Geometries + (longlong)local_res18[0] * 8);
      TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::
      Remove(this_00,param_1);
      if (*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34) {
        TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
        Emplace<unsigned_int_const_&>(&this->PendingRemoves,local_res20,(bool *)local_res18);
      }
      *(undefined8 *)((longlong)&pFVar1[1].SimpleStreamableAssetManagerIndex.Object + 4) =
           0xffffffffffffffff;
    }
  }
  return;
}

// RequestUpdates @ 1450755b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
Nanite::FRayTracingManager::RequestUpdates
          (FRayTracingManager *this,
          TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
          *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *pTVar5;
  bool bVar6;
  ERayTracingMode EVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  bool *pbVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res18 [8];
  int local_res20;
  uint local_a4;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  bVar6 = IsRayTracingEnabled();
  if ((bVar6) && (EVar7 = GetRayTracingMode(), EVar7 != Fallback)) {
    iVar3 = *(int *)&param_1->field_0x28;
    iStack_98 = 0;
    uStack_94 = 1;
    puVar2 = &param_1->field_0x10;
    local_80 = 0;
    iStack_84 = 0;
    if (iVar3 != 0) {
      puVar16 = *(uint **)&param_1->field_0x20;
      if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
        puVar16 = (uint *)puVar2;
      }
      uVar14 = *puVar16;
      local_80 = 0;
      while (uVar14 == 0) {
        lVar10 = (longlong)iStack_98;
        local_80 = local_80 + 0x20;
        iStack_98 = iStack_98 + 1;
        iStack_84 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14507568d;
        uVar14 = puVar16[lVar10 + 1];
      }
      uStack_94 = -uVar14 & uVar14;
      uVar1 = (ulonglong)uStack_94 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res20 = (int)lVar10;
      iStack_84 = local_80 + -1 + local_res20;
      if (iVar3 < iStack_84) {
        iStack_84 = iVar3;
      }
    }
LAB_14507568d:
    uVar14 = *(uint *)&param_1->field_0x28;
    uVar17 = uVar14 & 0xffffffe0;
    iStack_78 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
    uStack_88 = 0xffffffff;
    TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
    TStack_68.CurrentBitIndex = iStack_84;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar14 >> 5;
    TStack_68._28_4_ = iStack_84;
    TStack_68.BaseBitIndex = local_80;
    uStack_48 = CONCAT44(uStack_74,iStack_78);
    local_a0 = param_1;
    local_90 = puVar2;
    iStack_7c = iStack_84;
    local_70 = param_1;
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = *(uint *)&param_1->field_0x28;
    if (uVar14 != uVar8) {
      puVar15 = *(undefined1 **)&param_1->field_0x20;
      if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
        puVar15 = puVar2;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar12;
        uVar17 = uVar17 + 0x20;
        iVar12 = iVar12 + 1;
        uVar14 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14507578f;
        uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar14 = (int)lVar10 + -1 + uVar17;
      if ((int)uVar8 < (int)uVar14) {
        uVar14 = uVar8;
      }
    }
LAB_14507578f:
    while( true ) {
      pTVar5 = local_70;
      if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_68.CurrentBitIndex == uVar14) &&
          (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar5 == param_1)) break;
      puVar16 = (uint *)((longlong)TStack_68.CurrentBitIndex * 0x10 + *(longlong *)pTVar5);
      uVar17 = *puVar16;
      if (*(int *)&(this->ResourceToRayTracingIdMap).field_0x8 !=
          *(int *)&(this->ResourceToRayTracingIdMap).field_0x34) {
        puVar15 = *(undefined1 **)&(this->ResourceToRayTracingIdMap).field_0x40;
        puVar11 = &(this->ResourceToRayTracingIdMap).field_0x38;
        if (puVar15 != (undefined1 *)0x0) {
          puVar11 = puVar15;
        }
        uVar8 = *(uint *)(puVar11 +
                         (ulonglong)
                         (*(int *)&(this->ResourceToRayTracingIdMap).field_0x48 - 1U & uVar17) * 4);
        if (uVar8 != 0xffffffff) {
          do {
            puVar9 = (uint *)((longlong)(int)uVar8 * 0x10 +
                             *(longlong *)&this->ResourceToRayTracingIdMap);
            if (*puVar9 == uVar17) {
              pbVar13 = (bool *)(puVar9 + 1);
              if (puVar9 == (uint *)0x0) {
                pbVar13 = (bool *)0x0;
              }
              if (pbVar13 != (bool *)0x0) {
                uVar17 = puVar16[1];
                *(uint *)(*(longlong *)
                           (*(longlong *)&this->Geometries + (longlong)*(int *)pbVar13 * 8) + 0x78)
                     = uVar17;
                if ((uVar17 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Data.NumResidentClustersUpdate > 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteRayTracing.cpp"
                                       ,0x202,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
                Emplace<unsigned_int_const_&>(&this->UpdateRequests,&local_a4,pbVar13);
              }
              break;
            }
            uVar8 = puVar9[2];
          } while (uVar8 != 0xffffffff);
        }
      }
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
  }
  return;
}

// Shutdown @ 14507a5d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall Nanite::FRayTracingManager::Shutdown(FRayTracingManager *this)

{
  FDelegateHandle FVar1;
  FRendererOnScreenNotification *lpCriticalSection;
  
  lpCriticalSection = FRendererOnScreenNotification::Get();
  FVar1.ID = (this->ScreenMessageDelegate).ID;
  if (lpCriticalSection != (FRendererOnScreenNotification *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
    ::Remove(&lpCriticalSection->ProxyDelegate,FVar1);
                    /* WARNING: Could not recover jumptable at 0x00014507a613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Update @ 14507f5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall Nanite::FRayTracingManager::Update(FRayTracingManager *this)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  uchar *puVar3;
  TArray<Nanite::FRayTracingManager::FPendingBuild,TSizedDefaultAllocator<32>_> *pTVar4;
  FRayTracingGeometrySegment *_Dst;
  longlong lVar5;
  FRDGPooledBuffer *pFVar6;
  TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  FRHIResource *pFVar7;
  FRHIResource *this_01;
  undefined1 *puVar8;
  FRHIBuffer *pFVar9;
  FRHIBuffer *pFVar10;
  code *pcVar11;
  byte bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ForElementType<FSetElementId> FVar21;
  FRayTracingManager *pFVar22;
  FName FVar23;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar24;
  void *pvVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ERayTracingMode EVar28;
  bool bVar29;
  char cVar30;
  undefined4 uVar31;
  int iVar32;
  uint uVar33;
  TStatId TVar34;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar35;
  ulonglong uVar36;
  FName *pFVar37;
  FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingPendingBuilds> FVar38;
  FThreadStats *pFVar39;
  FThreadStatsPool *pFVar40;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar41;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar42;
  FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingInFlightUpdates> FVar43;
  FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingFailedStreamOutRequests> FVar44;
  FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingScheduledBuildsNumPrimitives> FVar45;
  undefined1 *puVar46;
  longlong lVar47;
  ulonglong uVar48;
  int iVar49;
  longlong *plVar50;
  FName FVar51;
  FScriptContainerElement *pFVar52;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar53;
  uint uVar54;
  uint uVar55;
  FNameEntryId FVar56;
  uchar auVar57 [8];
  uint *puVar58;
  uint uVar59;
  uint uVar60;
  undefined1 *puVar61;
  FSpanAllocator *this_02;
  int iVar62;
  uint *puVar63;
  FName FVar64;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar65;
  uint uVar66;
  uchar auVar67 [8];
  undefined1 auStackY_458 [32];
  undefined1 local_3f7;
  undefined1 local_3f6;
  undefined1 local_3f5;
  int local_3f4;
  FRayTracingManager *local_3f0;
  uint *local_3e8;
  FName local_3e0;
  uint local_3d8;
  FName local_3d0;
  FRHIResource *local_3c8;
  int local_3c0 [2];
  FName local_3b8;
  int local_3b0;
  int iStack_3ac;
  int local_3a8;
  int iStack_3a4;
  int local_3a0;
  int iStack_39c;
  FRHIResource *local_398;
  int local_390;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_388;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_380;
  int local_360;
  undefined4 uStack_35c;
  int local_358;
  uint local_350;
  uint uStack_34c;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_348;
  undefined8 uStack_340;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  int local_320;
  undefined4 uStack_31c;
  uint local_318;
  uint uStack_314;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_310;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2f0;
  ForElementType<FSpanAllocator::FLinearAllocation> local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_2b8;
  FName local_2b0;
  FName local_2a8;
  FName local_2a0;
  FScriptContainerElement *local_298;
  void *local_290;
  FName local_288;
  uint local_280 [2];
  FStatMessage local_278;
  FStatMessage local_268;
  FStatMessage local_258;
  FStatMessage local_248;
  FStatMessage local_238;
  int local_228;
  int local_224;
  int local_220;
  FName local_218;
  undefined1 local_210 [12];
  uint uStack_204;
  TBitArray<FDefaultBitArrayAllocator> *local_200;
  undefined8 uStack_1f8;
  longlong local_1f0;
  int iStack_1e8;
  undefined4 uStack_1e4;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  FName local_1b0;
  FName local_1a8 [2];
  FName local_198;
  FName local_190;
  FName local_188;
  TRangedForIterator local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  undefined4 local_114;
  FRHIBuffer *local_108;
  undefined8 local_100;
  int local_f8;
  uint3 local_f4;
  undefined1 uStack_f1;
  undefined1 local_f0;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FDebugName local_b0;
  undefined8 local_a4;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_458;
  local_3f0 = this;
  EVar28 = GetRayTracingMode();
  if ((EVar28 == Fallback) && (this->bUpdating == false)) {
    pFVar6 = (this->StagingAuxiliaryDataBuffer).Reference;
    if (pFVar6 != (FRDGPooledBuffer *)0x0) {
      (this->StagingAuxiliaryDataBuffer).Reference = (FRDGPooledBuffer *)0x0;
      FRefCountBase::Release((FRefCountBase *)pFVar6);
    }
    TVar34 = FThreadSafeStaticStatInner<FStat_STAT_NaniteRayTracingStagingAuxiliaryDataBuffer,1>::
             GetStatId((FThreadSafeStaticStatInner<FStat_STAT_NaniteRayTracingStagingAuxiliaryDataBuffer,1>
                        *)&StatPtr_STAT_NaniteRayTracingStagingAuxiliaryDataBuffer);
    FVar64 = *(FName *)(TVar34.StatIdPtr)->Name;
    local_350 = (uint)FVar64.ComparisonIndex.Value;
    uStack_34c = FVar64.Number;
    FThreadStats::AddMessage<__int64>(FVar64,Set,0,false);
    pFVar6 = (this->VertexBuffer).Reference;
    if (pFVar6 != (FRDGPooledBuffer *)0x0) {
      (this->VertexBuffer).Reference = (FRDGPooledBuffer *)0x0;
      FRefCountBase::Release((FRefCountBase *)pFVar6);
    }
    pFVar6 = (this->IndexBuffer).Reference;
    if (pFVar6 != (FRDGPooledBuffer *)0x0) {
      (this->IndexBuffer).Reference = (FRDGPooledBuffer *)0x0;
      FRefCountBase::Release((FRefCountBase *)pFVar6);
    }
    this->NumVerticesHighWaterMark = 0;
    this->NumIndicesHighWaterMark = 0;
    this->StagingBufferSizeHighWaterMark = 0;
  }
  local_98.Elements._0_8_ = 0;
  FVar64 = (FName)&this->PendingRemoves;
  local_98.Elements._8_8_ = 0;
  puVar61 = &(this->PendingRemoves).Elements.field_0x10;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_8_ = 0x8000000000;
  local_98.Elements._48_8_ = 0xffffffff;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98._72_8_ = (ulonglong)(uint)local_98._76_4_ << 0x20;
  local_310._padding_._0_4_ = 0;
  local_310._padding_._4_4_ = 1;
  local_310.UnvisitedBitMask = 0xffffffff;
  local_310.CurrentBitIndex = 0;
  local_310.BaseBitIndex = 0;
  local_3e0 = FVar64;
  local_310.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar61;
  if (*(int *)&(this->PendingRemoves).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_310);
  }
  TStack_380._padding_ = CONCAT44(local_310._padding_._4_4_,(undefined4)local_310._padding_);
  TStack_380._16_8_ = CONCAT44(local_310.CurrentBitIndex,local_310.UnvisitedBitMask);
  TStack_380._24_8_ = CONCAT44(local_310._28_4_,local_310.BaseBitIndex);
  local_360 = *(int *)&(this->PendingRemoves).Elements.field_0x8 -
              *(int *)&(this->PendingRemoves).Elements.field_0x34;
  TStack_380.Array = local_310.Array;
  local_200 = local_310.Array;
  uStack_1e4 = uStack_35c;
  local_388 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64;
  local_210._0_8_ = FVar64;
  unique0x10003ca4 = TStack_380._padding_;
  uStack_1f8 = TStack_380._16_8_;
  local_1f0 = TStack_380._24_8_;
  iStack_1e8 = local_360;
  pTVar35 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_150,(TBitArray<FDefaultBitArrayAllocator> *)puVar61,
                       *(int *)&(this->PendingRemoves).Elements.field_0x28);
  TStack_380._padding_ = pTVar35->_padding_;
  TStack_380.Array = pTVar35->Array;
  TStack_380.UnvisitedBitMask = pTVar35->UnvisitedBitMask;
  TStack_380.CurrentBitIndex = pTVar35->CurrentBitIndex;
  TStack_380._24_8_ = *(undefined8 *)&pTVar35->BaseBitIndex;
  local_360 = *(int *)&(this->PendingRemoves).Elements.field_0x8 -
              *(int *)&(this->PendingRemoves).Elements.field_0x34;
  local_180.InitialNum = local_360;
  local_180._44_4_ = uStack_35c;
  local_388 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64;
  local_180._padding_ = (longlong)FVar64;
  local_180._padding_ = TStack_380._padding_;
  local_180._padding_ = (longlong)TStack_380.Array;
  local_180._padding_ = TStack_380._16_8_;
  local_180._padding_ = TStack_380._24_8_;
  bVar29 = TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_210,&local_180);
  if (bVar29) {
    do {
      iVar32 = *(int *)(*(longlong *)
                         (TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_210._0_8_ + (longlong)uStack_1f8._4_4_ * 0xc);
      this_00 = *(TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  **)(*(longlong *)&this->Geometries + (longlong)iVar32 * 8);
      local_3c0[0] = iVar32;
      if (this_00[3].field_0x10 == '\0') {
        iVar49 = *(int *)(this_00 + 3);
        if (iVar49 != -1) {
          FVar42 = (this->AuxiliaryDataAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
          FVar53 = (ForElementType<FSpanAllocator::FLinearAllocation>)
                   &(this->AuxiliaryDataAllocator).PendingFreeSpans;
          iVar62 = *(int *)&this_00[3].field_0x4;
          FVar41 = FVar42;
          if (FVar42 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
            FVar41 = FVar53;
          }
          local_3b0 = iVar49;
          iStack_3ac = iVar62;
          if ((ulonglong)FVar41 <= &local_3b0) {
            if (FVar42 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
              FVar42 = FVar53;
            }
            if ((&local_3b0 <
                 (int *)((longlong)FVar42 +
                        (longlong)(this->AuxiliaryDataAllocator).PendingFreeSpans.ArrayMax * 8)) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar29)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          iVar49 = (this->AuxiliaryDataAllocator).PendingFreeSpans.ArrayNum;
          piVar1 = &(this->AuxiliaryDataAllocator).PendingFreeSpans.ArrayMax;
          if (iVar49 == *piVar1) {
            iVar49 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
                               (0x408,(ForElementType<FSpanAllocator::FLinearAllocation> *)FVar53,
                                piVar1);
          }
          (this->AuxiliaryDataAllocator).PendingFreeSpans.ArrayNum = iVar49 + 1;
          FVar42 = (this->AuxiliaryDataAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
          if (FVar42 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
            FVar53 = FVar42;
          }
          *(ulonglong *)((longlong)FVar53 + (longlong)iVar49 * 8) = CONCAT44(iStack_3ac,local_3b0);
          (this->AuxiliaryDataAllocator).CurrentSize =
               (this->AuxiliaryDataAllocator).CurrentSize - iVar62;
        }
        TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
        ::Remove((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                  *)&this->ResourceToRayTracingIdMap,*(uint *)&this_00[1].field_0x18);
        pFVar22 = local_3f0;
        lVar47 = *(longlong *)&this->Geometries;
        bVar12 = (byte)iVar32 & 0x1f;
        uVar54 = 1 << bVar12 | 1U >> 0x20 - bVar12;
        puVar61 = &(local_3f0->Geometries).field_0x10;
        if (((iVar32 < 0) || (*(int *)&(local_3f0->Geometries).field_0x28 <= iVar32)) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar29)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        puVar8 = *(undefined1 **)&(pFVar22->Geometries).field_0x20;
        puVar46 = puVar61;
        if (puVar8 != (undefined1 *)0x0) {
          puVar46 = puVar8;
        }
        iVar49 = iVar32;
        if (iVar32 < 0) {
          iVar49 = iVar32 + 0x1f;
        }
        lVar5 = (longlong)(iVar49 >> 5) * 4;
        if (((*(uint *)(puVar46 + lVar5) & uVar54) == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("AllocationFlags[Index]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                ,0xc5,L""), bVar29)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this = local_3f0;
        if (*(int *)&(local_3f0->Geometries).field_0x34 != 0) {
          *(int *)(lVar47 + (longlong)*(int *)&(local_3f0->Geometries).field_0x30 * 8) = iVar32;
        }
        *(undefined4 *)(lVar47 + (longlong)iVar32 * 8) = 0xffffffff;
        if (*(int *)&(local_3f0->Geometries).field_0x34 < 1) {
          uVar31 = 0xffffffff;
        }
        else {
          uVar31 = *(undefined4 *)&(local_3f0->Geometries).field_0x30;
        }
        *(undefined4 *)(lVar47 + 4 + (longlong)iVar32 * 8) = uVar31;
        puVar8 = &(local_3f0->Geometries).field_0x34;
        *(int *)puVar8 = *(int *)puVar8 + 1;
        *(int *)&(local_3f0->Geometries).field_0x30 = iVar32;
        if (((iVar32 < 0) || (*(int *)&(pFVar22->Geometries).field_0x28 <= iVar32)) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar29)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        puVar8 = *(undefined1 **)&(pFVar22->Geometries).field_0x20;
        if (puVar8 != (undefined1 *)0x0) {
          puVar61 = puVar8;
        }
        *(uint *)(puVar61 + lVar5) = *(uint *)(puVar61 + lVar5) & ~uVar54;
        if (*(FRHIResource **)&this_00[2].field_0x30 != (FRHIResource *)0x0) {
          FRHIResource::Release(*(FRHIResource **)&this_00[2].field_0x30);
        }
        if (*(void **)&this_00[2].field_0x10 != (void *)0x0) {
          FMemory::Free(*(void **)&this_00[2].field_0x10);
        }
        *(undefined4 *)&this_00[1].field_0x10 = 0;
        if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
          FMemory::Free(*(void **)&this_00[1].field_0x8);
        }
        TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (this_00);
        ::operator_delete(this_00,0xc0);
      }
      else {
        TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
        Emplace<unsigned_int_const_&>(&local_98,local_280,(bool *)local_3c0);
      }
      uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(uint)uStack_1f8 & ~uStack_204);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_210 + 8));
      bVar29 = TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_210,&local_180);
      FVar64 = local_3e0;
    } while (bVar29);
  }
  uVar26 = local_98._72_8_;
  uVar13 = *(undefined8 *)
            &((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->
             Elements;
  uVar14 = *(undefined8 *)
            &(((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->
             Elements).field_0x8;
  uVar15 = *(undefined8 *)
            &(((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->
             Elements).field_0x10;
  uVar16 = *(undefined8 *)
            &(((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->
             Elements).field_0x18;
  uVar17 = *(undefined8 *)
            &(((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->
             Elements).field_0x20;
  uVar18 = *(undefined8 *)
            &(((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->
             Elements).field_0x28;
  uVar19 = *(undefined8 *)
            &(((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->
             Elements).field_0x30;
  uVar20._0_1_ = (((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64
                  )->Hash).InlineData[0];
  uVar20._1_1_ = (((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64
                  )->Hash).InlineData[1];
  uVar20._2_1_ = (((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64
                  )->Hash).InlineData[2];
  uVar20._3_1_ = (((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64
                  )->Hash).InlineData[3];
  uVar20._4_4_ = (((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64
                  )->Hash)._padding_;
  FVar21 = (((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->
           Hash).SecondaryData;
  uVar36 = *(ulonglong *)
            &((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->
             HashSize;
  *(undefined8 *)
   &((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->Elements =
       local_98.Elements._0_8_;
  *(undefined8 *)
   &(((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->Elements).
    field_0x8 = local_98.Elements._8_8_;
  *(undefined8 *)
   &(((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->Elements).
    field_0x10 = local_98.Elements._16_8_;
  *(undefined8 *)
   &(((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->Elements).
    field_0x18 = local_98.Elements._24_8_;
  *(undefined8 *)
   &(((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->Elements).
    field_0x20 = local_98.Elements._32_8_;
  *(undefined8 *)
   &(((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->Elements).
    field_0x28 = local_98.Elements._40_8_;
  local_98._72_8_ = uVar36 & 0xffffffff00000000;
  uVar27 = local_98._72_8_;
  *(undefined8 *)
   &(((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->Elements).
    field_0x30 = local_98.Elements._48_8_;
  (((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->Hash).
  InlineData[0] = local_98.Hash.InlineData[0];
  (((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->Hash).
  InlineData[1] = local_98.Hash.InlineData[1];
  (((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->Hash).
  InlineData[2] = local_98.Hash.InlineData[2];
  (((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->Hash).
  InlineData[3] = local_98.Hash.InlineData[3];
  (((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->Hash).
  _padding_ = local_98.Hash._padding_;
  (((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->Hash).
  SecondaryData = local_98.Hash.SecondaryData;
  local_98.HashSize = (int)uVar26;
  local_98._76_4_ = SUB84(uVar26,4);
  ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->HashSize =
       local_98.HashSize;
  *(undefined4 *)
   &((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)FVar64)->field_0x4c
       = local_98._76_4_;
  local_98.Elements._0_8_ = uVar13;
  local_98.Elements._8_8_ = uVar14;
  local_98.Elements._16_8_ = uVar15;
  local_98.Elements._24_8_ = uVar16;
  local_98.Elements._32_8_ = uVar17;
  local_98.Elements._40_8_ = uVar18;
  local_98.Elements._48_8_ = uVar19;
  local_98.Hash._0_8_ = uVar20;
  local_98.Hash.SecondaryData = FVar21;
  local_98._72_8_ = uVar27;
  if (FVar21 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar21);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  local_358 = this->ScheduledBuildsNumPrimitives;
  FVar51 = (FName)(this->PendingBuilds).AllocatorInstance.Data;
  local_3d8 = (this->PendingBuilds).ArrayNum;
  uVar36 = (ulonglong)(int)local_3d8;
  local_3e8 = (uint *)CONCAT44(local_3e8._4_4_,(this->ScheduledBuilds).ArrayNum);
  FVar64 = (FName)((longlong)FVar51 + 8);
  local_3e0 = (FName)(uVar36 * 0x10 + (longlong)FVar51);
  while( true ) {
    FVar23 = local_3e0;
    local_3d0 = FVar64;
    local_3b8 = FVar51;
    if ((this->PendingBuilds).ArrayNum != (int)uVar36) {
      local_3f7 = 0;
      `TCheckedPointerIterator<Nanite::FRayTracingManager::FPendingBuild,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_3f7);
    }
    if ((FVar51 == FVar23) ||
       (GNaniteRayTracingMaxBuiltPrimitivesPerFrame <= this->ScheduledBuildsNumPrimitives)) break;
    pTVar65 = *(TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> **)
               (*(longlong *)&this->Geometries + (longlong)*(int *)FVar64 * 8);
    pFVar7 = *(FRHIResource **)FVar51;
    this_01 = *(FRHIResource **)(pTVar65 + 2);
    if (this_01 != pFVar7) {
      *(FRHIResource **)(pTVar65 + 2) = pFVar7;
      if (pFVar7 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar7);
      }
      if (this_01 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_01);
      }
    }
    lVar47 = *(longlong *)(pTVar65 + 2);
    this->ScheduledBuildsNumPrimitives =
         this->ScheduledBuildsNumPrimitives + *(int *)(lVar47 + 0xf0);
    iVar32 = *(int *)((longlong)(pTVar65 + 2) + 8);
    if (iVar32 != -1) {
      FVar42 = (this->AuxiliaryDataAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
      FVar53 = (ForElementType<FSpanAllocator::FLinearAllocation>)
               &(this->AuxiliaryDataAllocator).PendingFreeSpans;
      iVar49 = *(int *)((longlong)(pTVar65 + 2) + 0xc);
      FVar41 = FVar42;
      if (FVar42 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
        FVar41 = FVar53;
      }
      local_3a8 = iVar32;
      iStack_3a4 = iVar49;
      if ((ulonglong)FVar41 <= &local_3a8) {
        if (FVar42 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
          FVar42 = FVar53;
        }
        if ((&local_3a8 <
             (int *)((longlong)FVar42 +
                    (longlong)(this->AuxiliaryDataAllocator).PendingFreeSpans.ArrayMax * 8)) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar29)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      iVar32 = (this->AuxiliaryDataAllocator).PendingFreeSpans.ArrayNum;
      piVar1 = &(this->AuxiliaryDataAllocator).PendingFreeSpans.ArrayMax;
      if (iVar32 == *piVar1) {
        iVar32 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
                           (0x408,(ForElementType<FSpanAllocator::FLinearAllocation> *)FVar53,piVar1
                           );
      }
      (this->AuxiliaryDataAllocator).PendingFreeSpans.ArrayNum = iVar32 + 1;
      FVar42 = (this->AuxiliaryDataAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
      if (FVar42 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
        FVar53 = FVar42;
      }
      *(ulonglong *)((longlong)FVar53 + (longlong)iVar32 * 8) = CONCAT44(iStack_3a4,local_3a8);
      (this->AuxiliaryDataAllocator).CurrentSize =
           (this->AuxiliaryDataAllocator).CurrentSize - iVar49;
    }
    iVar32 = *(int *)(lVar47 + 0xf0);
    *(int *)((longlong)(pTVar65 + 2) + 0xc) = iVar32;
    iVar32 = FSpanAllocator::Allocate(&this->AuxiliaryDataAllocator,iVar32);
    *(int *)((longlong)(pTVar65 + 2) + 8) = iVar32;
    puVar61 = &(pTVar65->Elements).field_0x10;
    local_2f0._padding_._0_4_ = 0;
    local_2f0._padding_._4_4_ = 1;
    local_2f0.UnvisitedBitMask = 0xffffffff;
    local_2f0.CurrentBitIndex = 0;
    local_2f0.BaseBitIndex = 0;
    local_2f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar61;
    if (*(int *)&(pTVar65->Elements).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2f0);
    }
    uVar54 = *(uint *)&(pTVar65->Elements).field_0x28;
    uStack_340 = CONCAT44(local_2f0._padding_._4_4_,(undefined4)local_2f0._padding_);
    uStack_330 = CONCAT44(local_2f0.CurrentBitIndex,local_2f0.UnvisitedBitMask);
    uStack_328 = CONCAT44(local_2f0._28_4_,local_2f0.BaseBitIndex);
    local_320 = *(int *)&(pTVar65->Elements).field_0x8 - *(int *)&(pTVar65->Elements).field_0x34;
    pTStack_338 = local_2f0.Array;
    uVar66 = uVar54 & 0xffffffe0;
    iVar32 = (int)uVar54 >> 5;
    uStack_1b8 = CONCAT44(uStack_31c,local_320);
    TStack_1d8.Array = local_2f0.Array;
    local_348 = pTVar65;
    local_1e0 = pTVar65;
    TStack_1d8._padding_ = uStack_340;
    TStack_1d8._16_8_ = uStack_330;
    TStack_1d8._24_8_ = uStack_328;
    if (((int)uVar54 < 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar29)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar55 = *(uint *)&(pTVar65->Elements).field_0x28;
    if (uVar54 != uVar55) {
      puVar8 = *(undefined1 **)&(pTVar65->Elements).field_0x20;
      puVar46 = puVar61;
      if (puVar8 != (undefined1 *)0x0) {
        puVar46 = puVar8;
      }
      uVar54 = -1 << ((byte)uVar54 & 0x1f) & *(uint *)(puVar46 + (longlong)iVar32 * 4);
      while (uVar54 == 0) {
        lVar47 = (longlong)iVar32;
        uVar66 = uVar66 + 0x20;
        iVar32 = iVar32 + 1;
        uVar54 = uVar55;
        if ((int)((uVar55 - 1) + ((int)(uVar55 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32)
        goto LAB_14507feb0;
        uVar54 = *(uint *)(puVar46 + lVar47 * 4 + 4);
      }
      uVar36 = (ulonglong)(-uVar54 & uVar54) * 2 + 1;
      lVar47 = 0x3f;
      if (uVar36 != 0) {
        for (; uVar36 >> lVar47 == 0; lVar47 = lVar47 + -1) {
        }
      }
      local_228 = (int)lVar47;
      uVar54 = (uVar66 - 1) + local_228;
      if ((int)uVar55 < (int)uVar54) {
        uVar54 = uVar55;
      }
    }
LAB_14507feb0:
    while( true ) {
      pTVar24 = local_1e0;
      if (*(int *)&(local_1e0->Elements).field_0x8 - *(int *)&(local_1e0->Elements).field_0x34 !=
          (int)uStack_1b8) {
        local_3f6 = 0;
        `TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3f6);
      }
      FVar23 = local_3d0;
      this = local_3f0;
      if (((TStack_1d8.CurrentBitIndex == uVar54) &&
          (TStack_1d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar61)) &&
         (pTVar24 == pTVar65)) break;
      plVar50 = (longlong *)
                ((longlong)TStack_1d8.CurrentBitIndex * 0x10 + *(longlong *)&pTVar24->Elements);
      if (EVar28 != Fallback) {
        FPrimitiveSceneInfo::SetCachedRayTracingInstanceGeometryRHI
                  ((FPrimitiveSceneInfo *)*plVar50,*(FRHIRayTracingGeometry **)(pTVar65 + 2),
                   *(uint *)((((TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                                *)((TRefCountPtr<FRDGPooledBuffer> *)(pTVar65 + 1) + 3))->
                             AllocatorInstance).InlineData + 4));
      }
      *(undefined4 *)(*(longlong *)(*plVar50 + 8) + 0x2a8) =
           *(undefined4 *)((longlong)(pTVar65 + 2) + 8);
      FGPUScene::AddPrimitiveToUpdate
                ((FGPUScene *)(*(longlong *)(*plVar50 + 0x178) + 0x3500),
                 (FPersistentPrimitiveIndex)*(int *)(*plVar50 + 0x18c),ChangedOther);
      TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
    }
    pTVar2 = &local_3f0->ScheduledBuilds;
    FVar64 = (FName)(pTVar2->AllocatorInstance).Data;
    if ((((ulonglong)FVar64 <= (ulonglong)local_3d0) &&
        ((ulonglong)local_3d0 <
         (ulonglong)((longlong)FVar64 + (longlong)(local_3f0->ScheduledBuilds).ArrayMax * 4))) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar29)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar32 = (this->ScheduledBuilds).ArrayNum;
    piVar1 = &(this->ScheduledBuilds).ArrayMax;
    if (iVar32 == *piVar1) {
      iVar32 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ScheduledBuilds).ArrayNum = iVar32 + 1;
    FVar51 = (FName)((longlong)local_3b8 + 0x10);
    FVar64 = (FName)((longlong)FVar23 + 0x10);
    *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar32 * 4) = *(int *)FVar23;
    uVar36 = (ulonglong)local_3d8;
  }
  iVar32 = (int)local_3e8;
  uVar66 = (this->ScheduledBuilds).ArrayNum - (int)local_3e8;
  uVar54 = 0;
  if ((int)uVar66 <= (this->PendingBuilds).ArrayNum) {
    uVar54 = ~uVar66 >> 0x1f;
  }
  if ((uVar54 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         ), bVar29)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (uVar66 != 0) {
    TArray<Nanite::FRayTracingManager::FPendingBuild,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (&this->PendingBuilds,0,uVar66);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->PendingBuilds).AllocatorInstance,(this->PendingBuilds).ArrayNum,
               &(this->PendingBuilds).ArrayMax);
  }
  uVar54 = (this->ScheduledBuilds).ArrayNum - iVar32;
  auVar57[4] = '\0';
  auVar57[5] = '\0';
  auVar57[6] = '\0';
  auVar57[7] = '\0';
  auVar57._0_4_ = uVar54;
  if (uVar54 != 0) {
    FVar38 = StatPtr_STAT_NaniteRayTracingPendingBuilds;
    if (StatPtr_STAT_NaniteRayTracingPendingBuilds ==
        (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingPendingBuilds>)0x0) {
      pFVar37 = ::FName::FName(&local_198,"STAT_NaniteRayTracingPendingBuilds");
      FVar38 = (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingPendingBuilds>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteRayTracingPendingBuilds,
                          *pFVar37,L"Pending Builds","STATGROUP_NaniteRayTracing","STATCAT_Advanced"
                          ,L"Nanite RayTracing",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar64 = *(FName *)FVar38;
    local_3d0 = FVar64;
    if (((FVar64 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar39 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar39 == (FThreadStats *)0x0) {
        pFVar40 = FThreadStatsPool::Get();
        pFVar39 = FThreadStatsPool::GetFromPool(pFVar40);
      }
      local_278.NameAndInfo.Number = FVar64.Number & 0xffffbfff | 0xb000;
      local_278.StatData.Pad = auVar57;
      local_278.NameAndInfo.Index.Value = FVar64.ComparisonIndex.Value.Value;
      local_218 = FVar64;
      FThreadStats::AddStatMessage(pFVar39,&local_278);
      FStatsTrace::Add(&local_218,-(longlong)auVar57);
      if (pFVar39->ScopeCount == 0) {
        FThreadStats::Flush(pFVar39,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar39,false,false);
      }
    }
  }
  uVar54 = this->ReadbackBuffersNumPending;
  while (uVar54 != 0) {
    uVar66 = ((this->MaxReadbackBuffers - uVar54) + this->ReadbackBuffersWriteIndex) %
             this->MaxReadbackBuffers;
    uVar54 = 0;
    if ((int)uVar66 < (this->ReadbackBuffers).ArrayNum) {
      uVar54 = ~uVar66 >> 0x1f;
    }
    if ((uVar54 == 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar29)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar52 = (this->ReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar66 * 0x20;
    lVar47 = *(longlong *)(*(longlong *)pFVar52 + 8);
    local_298 = pFVar52;
    if ((lVar47 != 0) &&
       ((*(int *)(lVar47 + 0x18) != 0 ||
        (cVar30 = (**(code **)(**(longlong **)(*(longlong *)pFVar52 + 8) + 0x20))(), cVar30 == '\0')
        ))) break;
    this->ReadbackBuffersNumPending = this->ReadbackBuffersNumPending - 1;
    local_290 = FRHIGPUBufferReadback::Lock
                          (*(FRHIGPUBufferReadback **)pFVar52,*(int *)(pFVar52 + 8) << 2);
    local_3d8 = 0;
    local_3e0.ComparisonIndex.Value = 0;
    local_3e0.Number = 0;
    if (0 < *(int *)(pFVar52 + 0x18)) {
      do {
        pvVar25 = local_290;
        FVar64 = local_3e0;
        uVar54 = 0;
        if ((int)local_3d8 < *(int *)(pFVar52 + 0x18)) {
          uVar54 = ~local_3d8 >> 0x1f;
        }
        if ((uVar54 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_3f4 = *(int *)(*(longlong *)(pFVar52 + 0x10) + (longlong)FVar64 * 4);
        pTVar65 = *(TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> **)
                   (*(longlong *)&this->Geometries + (longlong)local_3f4 * 8);
        puVar63 = (uint *)((longlong)pvVar25 +
                          (longlong)*(int *)((longlong)(pTVar65 + 2) + 0x14) * 4);
        puVar58 = puVar63 + 5;
        local_3e8 = puVar58;
        local_2b8 = pTVar65;
        if (((*(uchar *)((TRefCountPtr<FRDGPooledBuffer> *)(pTVar65 + 1) + 4) == '\0') &&
            (*(uint *)((longlong)((TRefCountPtr<FRDGPooledBuffer> *)(pTVar65 + 1) + 4) + 4) <
             *puVar63)) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("Header->NumClusters <= Data.NumResidentClusters",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteRayTracing.cpp"
                                ,0x433,L""), bVar29)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar54 = puVar63[1];
        uVar66 = puVar63[2];
        uVar55 = puVar63[3];
        if ((uVar54 == 0xffffffff) || (uVar66 == 0xffffffff)) {
          iVar32 = *(int *)((longlong)(pTVar65 + 2) + 0x10);
          *(undefined1 *)((longlong)(pTVar65 + 2) + 0x18) = 0;
          pTVar65[2].Elements.field_0x14 = 0xff;
          pTVar65[2].Elements.field_0x15 = 0xff;
          pTVar65[2].Elements.field_0x16 = 0xff;
          pTVar65[2].Elements.field_0x17 = 0xff;
          if ((iVar32 == -1) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Data.StagingAuxiliaryDataOffset != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteRayTracing.cpp"
                                  ,0x440,L""), bVar29)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          this = local_3f0;
          pTVar65[2].Elements.field_0x10 = 0xff;
          pTVar65[2].Elements.field_0x11 = 0xff;
          pTVar65[2].Elements.field_0x12 = 0xff;
          pTVar65[2].Elements.field_0x13 = 0xff;
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
          Emplace<unsigned_int_const_&>(&local_3f0->UpdateRequests,&local_350,(bool *)&local_3f4);
          FVar43 = StatPtr_STAT_NaniteRayTracingInFlightUpdates;
          if (StatPtr_STAT_NaniteRayTracingInFlightUpdates ==
              (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingInFlightUpdates>)0x0) {
            pFVar37 = ::FName::FName(&local_188,"STAT_NaniteRayTracingInFlightUpdates");
            FVar43 = (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingInFlightUpdates>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_NaniteRayTracingInFlightUpdates,*pFVar37,
                                L"In-flight Updates","STATGROUP_NaniteRayTracing","STATCAT_Advanced"
                                ,L"Nanite RayTracing",true,false,ST_int64,false,false,MCR_Invalid);
          }
          FVar64 = *(FName *)FVar43;
          local_3b8 = FVar64;
          if (((FVar64 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar39 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar39 == (FThreadStats *)0x0) {
              pFVar40 = FThreadStatsPool::Get();
              pFVar39 = FThreadStatsPool::GetFromPool(pFVar40);
            }
            local_258.NameAndInfo.Number = FVar64.Number & 0xffffbfff | 0xb000;
            local_258.StatData.Pad[0] = '\x01';
            local_258.StatData.Pad[1] = '\0';
            local_258.StatData.Pad[2] = '\0';
            local_258.StatData.Pad[3] = '\0';
            local_258.StatData.Pad[4] = '\0';
            local_258.StatData.Pad[5] = '\0';
            local_258.StatData.Pad[6] = '\0';
            local_258.StatData.Pad[7] = '\0';
            local_2a8 = FVar64;
            local_258.NameAndInfo.Index.Value = FVar64.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar39,&local_258);
            FStatsTrace::Add(&local_2a8,-1);
            if (pFVar39->ScopeCount == 0) {
              FThreadStats::Flush(pFVar39,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar39,false,false);
            }
          }
          if (FThreadStats::bPrimaryEnable != false) {
            FVar44 = StatPtr_STAT_NaniteRayTracingFailedStreamOutRequests;
            if (StatPtr_STAT_NaniteRayTracingFailedStreamOutRequests ==
                (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingFailedStreamOutRequests>)0x0) {
              pFVar37 = ::FName::FName(&local_1b0,"STAT_NaniteRayTracingFailedStreamOutRequests");
              FVar44 = (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingFailedStreamOutRequests>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_NaniteRayTracingFailedStreamOutRequests,*pFVar37,
                                  L"Failed Stream Out Requests","STATGROUP_NaniteRayTracing",
                                  "STATCAT_Advanced",L"Nanite RayTracing",true,true,ST_int64,false,
                                  false,MCR_Invalid);
            }
            FVar64 = *(FName *)FVar44;
            FVar56 = FVar64.ComparisonIndex.Value;
            uVar54 = FVar64.Number;
            local_318 = FVar56.Value;
            uStack_314 = uVar54;
            if (((FVar64 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar39 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar39 == (FThreadStats *)0x0) {
                pFVar40 = FThreadStatsPool::Get();
                pFVar39 = FThreadStatsPool::GetFromPool(pFVar40);
              }
              local_248.NameAndInfo.Number = uVar54 & 0xffffafff | 0xa000;
              local_248.StatData.Pad[0] = '\x01';
              local_248.StatData.Pad[1] = '\0';
              local_248.StatData.Pad[2] = '\0';
              local_248.StatData.Pad[3] = '\0';
              local_248.StatData.Pad[4] = '\0';
              local_248.StatData.Pad[5] = '\0';
              local_248.StatData.Pad[6] = '\0';
              local_248.StatData.Pad[7] = '\0';
              local_2a0 = FVar64;
              local_248.NameAndInfo.Index.Value = FVar56.Value;
              FThreadStats::AddStatMessage(pFVar39,&local_248);
              FStatsTrace::Add(&local_2a0,1);
              if (pFVar39->ScopeCount == 0) {
                FThreadStats::Flush(pFVar39,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar39,false,false);
              }
            }
          }
          uVar54 = puVar63[3];
          if ((int)puVar63[3] < this->NumVerticesHighWaterMark) {
            uVar54 = this->NumVerticesHighWaterMark;
          }
          this->NumVerticesHighWaterMark = uVar54;
          uVar54 = puVar63[4];
          if ((int)puVar63[4] < this->NumIndicesHighWaterMark) {
            uVar54 = this->NumIndicesHighWaterMark;
          }
          this->NumIndicesHighWaterMark = uVar54;
        }
        else {
          uVar36 = 0;
          _local_f4 = 0x10000;
          local_108 = (FRHIBuffer *)0x0;
          local_100 = 0;
          local_f8 = 0;
          local_f0 = 0;
          local_e8.Data = (FScriptContainerElement *)0x0;
          local_e0 = 0;
          local_d8 = 0;
          local_b8 = 0;
          local_d0 = 0xffffffffffffffff;
          local_c8 = 0xffffffffffffffff;
          local_c0 = 0xffffffffffffffff;
          FDebugName::FDebugName(&local_b0);
          pFVar10 = local_108;
          local_a4 = 0;
          local_b0.Name = *(FName *)((TRefCountPtr<FRDGPooledBuffer> *)(pTVar65 + 1) + 8);
          local_b0.Number = *(uint *)((TRefCountPtr<FRDGPooledBuffer> *)(pTVar65 + 1) + 9);
          local_f4 = (uint3)(ushort)local_f4;
          pFVar9 = (((local_3f0->IndexBuffer).Reference)->Buffer).Reference;
          if (local_108 != pFVar9) {
            local_108 = pFVar9;
            if (pFVar9 != (FRHIBuffer *)0x0) {
              FRHIResource::AddRef((FRHIResource *)pFVar9);
            }
            if (pFVar10 != (FRHIBuffer *)0x0) {
              FRHIResource::Release((FRHIResource *)pFVar10);
            }
          }
          uVar48 = (ulonglong)(int)local_e0;
          local_100 = CONCAT44(local_100._4_4_,uVar66 * 4);
          local_f8 = 0;
          uVar66 = *(uint *)((((TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                                *)((TRefCountPtr<FRDGPooledBuffer> *)(pTVar65 + 1) + 3))->
                             AllocatorInstance).InlineData + 4);
          if ((int)local_e0 < (int)uVar66) {
            iVar49 = uVar66 - (int)local_e0;
            iVar32 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x28,8,iVar49,&local_e8,(int *)&local_e0,
                                (int *)((longlong)&local_e0 + 4));
            DefaultConstructItems<FRayTracingGeometrySegment,int>
                      (local_e8.Data + (longlong)iVar32 * 0x28,iVar49);
LAB_145080607:
            uVar48 = local_e0 & 0xffffffff;
          }
          else {
            if ((int)uVar66 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar66);
            }
            if ((int)uVar66 < (int)local_e0) {
              uVar59 = (int)local_e0 - uVar66;
              if ((int)(uVar66 | uVar59) < 0) {
                bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   );
                if (bVar29) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uVar48 = local_e0 & 0xffffffff;
              }
              if (uVar59 != 0) {
                _Dst = (FRayTracingGeometrySegment *)(local_e8.Data + (longlong)(int)uVar66 * 0x28);
                DestructItems<FRayTracingGeometrySegment,int>(_Dst,uVar59);
                iVar32 = ((int)local_e0 - uVar66) - uVar59;
                if (iVar32 != 0) {
                  memmove(_Dst,_Dst + (int)uVar59,(longlong)iVar32 * 0x28);
                }
                iVar32 = (int)local_e0 - uVar59;
                local_e0 = CONCAT44(local_e0._4_4_,iVar32);
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x28,8,&local_e8,iVar32,(int *)((longlong)&local_e0 + 4));
                puVar58 = local_3e8;
                goto LAB_145080607;
              }
            }
          }
          if (*(int *)((((TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                          *)((TRefCountPtr<FRDGPooledBuffer> *)(pTVar65 + 1) + 3))->
                       AllocatorInstance).InlineData + 4) != 0) {
            while( true ) {
              uVar60 = (uint)uVar36;
              uVar66 = puVar58[uVar36 * 2];
              uVar59 = local_3e8[uVar36 * 2 + 1];
              uVar33 = 0;
              if ((int)uVar60 < (int)uVar48) {
                uVar33 = ~uVar60 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar52 = local_e8.Data + (longlong)(int)uVar60 * 0x28;
              *(uint *)(pFVar52 + 0x18) = uVar59 / 3;
              *(uint *)(pFVar52 + 0x1c) = uVar66 / 3;
              pFVar9 = *(FRHIBuffer **)&pFVar52->field_0x0;
              pFVar10 = (((local_3f0->VertexBuffer).Reference)->Buffer).Reference;
              if (pFVar9 != pFVar10) {
                *(FRHIBuffer **)&pFVar52->field_0x0 = pFVar10;
                if (pFVar10 != (FRHIBuffer *)0x0) {
                  FRHIResource::AddRef((FRHIResource *)pFVar10);
                }
                if (pFVar9 != (FRHIBuffer *)0x0) {
                  FRHIResource::Release((FRHIResource *)pFVar9);
                }
              }
              uVar36 = (ulonglong)(uVar60 + 1);
              *(uint *)(pFVar52 + 0xc) = uVar54 * 0xc;
              *(uint *)(pFVar52 + 0x14) = uVar55;
              local_f8 = local_f8 + *(int *)(pFVar52 + 0x1c);
              if (*(uint *)((((TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                               *)((TRefCountPtr<FRDGPooledBuffer> *)(pTVar65 + 1) + 3))->
                            AllocatorInstance).InlineData + 4) <= uVar60 + 1) break;
              uVar48 = local_e0 & 0xffffffff;
              puVar58 = local_3e8;
            }
          }
          (**(code **)(GDynamicRHI->_padding_ + 0x490))(GDynamicRHI,&local_3c8,0x154be5ed0);
          this = local_3f0;
          if (local_3f0->ScheduledBuildsNumPrimitives < GNaniteRayTracingMaxBuiltPrimitivesPerFrame)
          {
            local_3f0->ScheduledBuildsNumPrimitives =
                 local_3f0->ScheduledBuildsNumPrimitives + (int)local_3c8[10]._padding_;
            puVar3 = (uchar *)(pTVar65 + 2);
            if ((FRHIResource **)puVar3 != &local_3c8) {
              pFVar7 = *(FRHIResource **)puVar3;
              *(FRHIResource **)puVar3 = local_3c8;
              local_3c8 = (FRHIResource *)0x0;
              if (pFVar7 != (FRHIResource *)0x0) {
                FRHIResource::Release(pFVar7);
              }
            }
            iVar32 = *(int *)((longlong)(pTVar65 + 2) + 8);
            if (iVar32 != -1) {
              FVar42 = (this->AuxiliaryDataAllocator).PendingFreeSpans.AllocatorInstance.
                       SecondaryData;
              FVar53 = (ForElementType<FSpanAllocator::FLinearAllocation>)
                       &(this->AuxiliaryDataAllocator).PendingFreeSpans;
              iVar49 = *(int *)((longlong)(pTVar65 + 2) + 0xc);
              FVar41 = FVar42;
              if (FVar42 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
                FVar41 = FVar53;
              }
              local_3a0 = iVar32;
              iStack_39c = iVar49;
              if ((ulonglong)FVar41 <= &local_3a0) {
                if (FVar42 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
                  FVar42 = FVar53;
                }
                if ((&local_3a0 <
                     (int *)((longlong)FVar42 +
                            (longlong)(this->AuxiliaryDataAllocator).PendingFreeSpans.ArrayMax * 8))
                   && (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar29)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              iVar32 = (this->AuxiliaryDataAllocator).PendingFreeSpans.ArrayNum;
              piVar1 = &(this->AuxiliaryDataAllocator).PendingFreeSpans.ArrayMax;
              if (iVar32 == *piVar1) {
                iVar32 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
                                   (0x408,(ForElementType<FSpanAllocator::FLinearAllocation> *)
                                          FVar53,piVar1);
              }
              (this->AuxiliaryDataAllocator).PendingFreeSpans.ArrayNum = iVar32 + 1;
              FVar42 = (this->AuxiliaryDataAllocator).PendingFreeSpans.AllocatorInstance.
                       SecondaryData;
              if (FVar42 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
                FVar53 = FVar42;
              }
              *(ulonglong *)((longlong)FVar53 + (longlong)iVar32 * 8) =
                   CONCAT44(iStack_39c,local_3a0);
              (this->AuxiliaryDataAllocator).CurrentSize =
                   (this->AuxiliaryDataAllocator).CurrentSize - iVar49;
            }
            iVar32 = local_f8;
            pFVar22 = local_3f0;
            *(int *)((longlong)(pTVar65 + 2) + 0xc) = local_f8;
            this_02 = &local_3f0->AuxiliaryDataAllocator;
            uVar54 = FSpanAllocator::SearchFreeList
                               (this_02,local_f8,
                                (local_3f0->AuxiliaryDataAllocator).FirstNonEmptySpan);
            if ((uVar54 == 0xffffffff) &&
               ((pFVar22->AuxiliaryDataAllocator).PendingFreeSpans.ArrayNum != 0)) {
              FSpanAllocator::Consolidate(this_02);
              uVar54 = FSpanAllocator::SearchFreeList
                                 (this_02,iVar32,(pFVar22->AuxiliaryDataAllocator).FirstNonEmptySpan
                                 );
            }
            this_02->CurrentSize = this_02->CurrentSize + iVar32;
            if (uVar54 == 0xffffffff) {
              uVar54 = (pFVar22->AuxiliaryDataAllocator).CurrentMaxSize;
              uVar36 = (ulonglong)uVar54;
              iVar32 = iVar32 + uVar54;
              (pFVar22->AuxiliaryDataAllocator).CurrentMaxSize = iVar32;
              if (iVar32 < (pFVar22->AuxiliaryDataAllocator).PeakMaxSize) {
                iVar32 = (pFVar22->AuxiliaryDataAllocator).PeakMaxSize;
              }
              (pFVar22->AuxiliaryDataAllocator).PeakMaxSize = iVar32;
            }
            else {
              FVar53 = (ForElementType<FSpanAllocator::FLinearAllocation>)
                       &(pFVar22->AuxiliaryDataAllocator).FreeSpans;
              uVar66 = 0;
              if ((int)uVar54 < (pFVar22->AuxiliaryDataAllocator).FreeSpans.ArrayNum) {
                uVar66 = ~uVar54 >> 0x1f;
              }
              local_2d0 = FVar53;
              if ((uVar66 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              FVar42 = (pFVar22->AuxiliaryDataAllocator).FreeSpans.AllocatorInstance.SecondaryData;
              if (FVar42 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
                FVar53 = FVar42;
              }
              local_2c0 = (longlong)(int)uVar54 * 8;
              uVar36 = *(ulonglong *)((longlong)FVar53 + local_2c0);
              iVar49 = (int)(uVar36 >> 0x20);
              local_2c8 = CONCAT44(iVar49 - iVar32,(int)uVar36 + iVar32);
              uVar66 = 0;
              if ((int)uVar54 < (pFVar22->AuxiliaryDataAllocator).FreeSpans.ArrayNum) {
                uVar66 = ~uVar54 >> 0x1f;
              }
              if ((uVar66 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              FVar53 = *(ForElementType<FSpanAllocator::FLinearAllocation> *)
                        ((longlong)local_2d0 + 0x50);
              if (FVar53 == (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
                FVar53 = local_2d0;
              }
              *(undefined8 *)((longlong)FVar53 + local_2c0) = local_2c8;
              pTVar65 = local_2b8;
              if ((iVar49 == iVar32) &&
                 ((pFVar22->AuxiliaryDataAllocator).FirstNonEmptySpan == uVar54)) {
                (pFVar22->AuxiliaryDataAllocator).FirstNonEmptySpan = uVar54 + 1;
              }
            }
            *(int *)((longlong)(pTVar65 + 2) + 8) = (int)uVar36;
            TStack_380.Array =
                 (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar65->Elements).field_0x10;
            iVar32 = *(int *)&(pTVar65->Elements).field_0x28;
            iVar49 = 0;
            iVar62 = 0;
            uVar54 = 1;
            TStack_380.CurrentBitIndex = 0;
            if (iVar32 != 0) {
              puVar58 = *(uint **)&(pTVar65->Elements).field_0x20;
              puVar63 = (uint *)TStack_380.Array;
              if (puVar58 != (uint *)0x0) {
                puVar63 = puVar58;
              }
              uVar66 = *puVar63;
              while (uVar66 == 0) {
                lVar47 = (longlong)iVar49;
                iVar62 = iVar62 + 0x20;
                iVar49 = iVar49 + 1;
                TStack_380.CurrentBitIndex = iVar32;
                if ((int)(iVar32 + -1 + (iVar32 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar49)
                goto LAB_145080a80;
                uVar66 = puVar63[lVar47 + 1];
              }
              uVar54 = -uVar66 & uVar66;
              uVar36 = (ulonglong)uVar54 * 2 + 1;
              lVar47 = 0x3f;
              if (uVar36 != 0) {
                for (; uVar36 >> lVar47 == 0; lVar47 = lVar47 + -1) {
                }
              }
              local_224 = (int)lVar47;
              TStack_380.CurrentBitIndex = iVar62 + -1 + local_224;
              if (iVar32 < TStack_380.CurrentBitIndex) {
                TStack_380.CurrentBitIndex = iVar32;
              }
            }
LAB_145080a80:
            uVar66 = *(uint *)&(pTVar65->Elements).field_0x28;
            puVar61 = &(pTVar65->Elements).field_0x10;
            local_320 = *(int *)&(pTVar65->Elements).field_0x8 -
                        *(int *)&(pTVar65->Elements).field_0x34;
            uVar55 = uVar66 & 0xffffffe0;
            uStack_340 = CONCAT44(uVar54,iVar49);
            uStack_330 = CONCAT44(TStack_380.CurrentBitIndex,0xffffffff);
            uStack_328 = CONCAT44(local_114,iVar62);
            TStack_380._padding_ = uStack_340;
            iVar32 = (int)uVar66 >> 5;
            uStack_35c = uStack_31c;
            local_360 = local_320;
            TStack_380.UnvisitedBitMask = 0xffffffff;
            TStack_380._24_8_ = uStack_328;
            local_388 = pTVar65;
            local_348 = pTVar65;
            pTStack_338 = TStack_380.Array;
            if (((int)uVar66 < 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar29)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar54 = *(uint *)&(pTVar65->Elements).field_0x28;
            if (uVar66 != uVar54) {
              puVar8 = *(undefined1 **)&(pTVar65->Elements).field_0x20;
              puVar46 = puVar61;
              if (puVar8 != (undefined1 *)0x0) {
                puVar46 = puVar8;
              }
              uVar66 = -1 << ((byte)uVar66 & 0x1f) & *(uint *)(puVar46 + (longlong)iVar32 * 4);
              while (uVar66 == 0) {
                lVar47 = (longlong)iVar32;
                uVar55 = uVar55 + 0x20;
                iVar32 = iVar32 + 1;
                uVar66 = uVar54;
                if ((int)((uVar54 - 1) + ((int)(uVar54 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32)
                goto LAB_145080b90;
                uVar66 = *(uint *)(puVar46 + lVar47 * 4 + 4);
              }
              uVar36 = (ulonglong)(-uVar66 & uVar66) * 2 + 1;
              lVar47 = 0x3f;
              if (uVar36 != 0) {
                for (; uVar36 >> lVar47 == 0; lVar47 = lVar47 + -1) {
                }
              }
              local_220 = (int)lVar47;
              uVar66 = local_220 + -1 + uVar55;
              if ((int)uVar54 < (int)uVar66) {
                uVar66 = uVar54;
              }
            }
LAB_145080b90:
            while( true ) {
              pTVar24 = local_388;
              if (*(int *)&(local_388->Elements).field_0x8 -
                  *(int *)&(local_388->Elements).field_0x34 != local_360) {
                local_3f5 = 0;
                `TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3f5);
              }
              this = local_3f0;
              if (((TStack_380.CurrentBitIndex == uVar66) &&
                  (TStack_380.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar61)) &&
                 (pTVar24 == pTVar65)) break;
              plVar50 = (longlong *)
                        ((longlong)TStack_380.CurrentBitIndex * 0x10 +
                        *(longlong *)&pTVar24->Elements);
              if (EVar28 != Fallback) {
                FPrimitiveSceneInfo::SetCachedRayTracingInstanceGeometryRHI
                          ((FPrimitiveSceneInfo *)*plVar50,*(FRHIRayTracingGeometry **)(pTVar65 + 2)
                           ,*(uint *)((((TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                                         *)((TRefCountPtr<FRDGPooledBuffer> *)(pTVar65 + 1) + 3))->
                                      AllocatorInstance).InlineData + 4));
              }
              *(undefined4 *)(*(longlong *)(*plVar50 + 8) + 0x2a8) =
                   *(undefined4 *)((longlong)(pTVar65 + 2) + 8);
              FGPUScene::AddPrimitiveToUpdate
                        ((FGPUScene *)(*(longlong *)(*plVar50 + 0x178) + 0x3500),
                         (FPersistentPrimitiveIndex)*(int *)(*plVar50 + 0x18c),ChangedOther);
              TStack_380.UnvisitedBitMask =
                   TStack_380.UnvisitedBitMask & ~TStack_380._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_380);
            }
            pTVar2 = &local_3f0->ScheduledBuilds;
            pFVar52 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar52 <= (FScriptContainerElement *)&local_3f4) &&
                ((FScriptContainerElement *)&local_3f4 <
                 pFVar52 + (longlong)(local_3f0->ScheduledBuilds).ArrayMax * 4)) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar29)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            iVar32 = (this->ScheduledBuilds).ArrayNum;
            piVar1 = &(this->ScheduledBuilds).ArrayMax;
            if (iVar32 == *piVar1) {
              iVar32 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->ScheduledBuilds).ArrayNum = iVar32 + 1;
            *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar32 * 4) = local_3f4;
          }
          else {
            pTVar4 = &local_3f0->PendingBuilds;
            pFVar52 = (pTVar4->AllocatorInstance).Data;
            local_390 = local_3f4;
            local_398 = local_3c8;
            local_3c8 = (FRHIResource *)0x0;
            if (((pFVar52 <= (FScriptContainerElement *)&local_398) &&
                ((FScriptContainerElement *)&local_398 <
                 pFVar52 + (longlong)(local_3f0->PendingBuilds).ArrayMax * 0x10)) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar29)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            iVar32 = (this->PendingBuilds).ArrayNum;
            piVar1 = &(this->PendingBuilds).ArrayMax;
            if (iVar32 == *piVar1) {
              iVar32 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar4->AllocatorInstance,piVar1);
            }
            (this->PendingBuilds).ArrayNum = iVar32 + 1;
            pFVar52 = (pTVar4->AllocatorInstance).Data + (longlong)iVar32 * 0x10;
            *(undefined8 *)pFVar52 = 0;
            *(FRHIResource **)pFVar52 = local_398;
            local_398 = (FRHIResource *)0x0;
            *(int *)(pFVar52 + 8) = local_390;
            FVar38 = StatPtr_STAT_NaniteRayTracingPendingBuilds;
            if (StatPtr_STAT_NaniteRayTracingPendingBuilds ==
                (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingPendingBuilds>)0x0) {
              pFVar37 = ::FName::FName(&local_190,"STAT_NaniteRayTracingPendingBuilds");
              FVar38 = (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingPendingBuilds>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_NaniteRayTracingPendingBuilds,*pFVar37,
                                  L"Pending Builds","STATGROUP_NaniteRayTracing","STATCAT_Advanced",
                                  L"Nanite RayTracing",true,false,ST_int64,false,false,MCR_Invalid);
            }
            FVar64 = *(FName *)FVar38;
            local_3d0 = FVar64;
            if (((FVar64 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar39 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar39 == (FThreadStats *)0x0) {
                pFVar40 = FThreadStatsPool::Get();
                pFVar39 = FThreadStatsPool::GetFromPool(pFVar40);
              }
              local_268.NameAndInfo.Number = FVar64.Number & 0xffffafff | 0xa000;
              local_268.StatData.Pad[0] = '\x01';
              local_268.StatData.Pad[1] = '\0';
              local_268.StatData.Pad[2] = '\0';
              local_268.StatData.Pad[3] = '\0';
              local_268.StatData.Pad[4] = '\0';
              local_268.StatData.Pad[5] = '\0';
              local_268.StatData.Pad[6] = '\0';
              local_268.StatData.Pad[7] = '\0';
              local_2b0 = FVar64;
              local_268.NameAndInfo.Index.Value = FVar64.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(pFVar39,&local_268);
              FStatsTrace::Add(&local_2b0,1);
              if (pFVar39->ScopeCount == 0) {
                FThreadStats::Flush(pFVar39,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar39,false,false);
              }
            }
            if (local_398 != (FRHIResource *)0x0) {
              FRHIResource::Release(local_398);
            }
          }
          if (local_3c8 != (FRHIResource *)0x0) {
            FRHIResource::Release(local_3c8);
          }
          DestructItems<FRayTracingGeometrySegment,int>
                    ((FRayTracingGeometrySegment *)local_e8.Data,(int)local_e0);
          if ((FRayTracingGeometrySegment *)local_e8.Data != (FRayTracingGeometrySegment *)0x0) {
            FMemory::Free(local_e8.Data);
          }
          if (local_108 != (FRHIBuffer *)0x0) {
            FRHIResource::Release((FRHIResource *)local_108);
          }
        }
        local_3d8 = local_3d8 + 1;
        local_3e0 = (FName)((longlong)local_3e0 + 1);
        pFVar52 = local_298;
      } while ((int)local_3d8 < *(int *)(local_298 + 0x18));
    }
    *(undefined4 *)(pFVar52 + 0x18) = 0;
    if (*(int *)(pFVar52 + 0x1c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(pFVar52 + 0x10),0,(int *)(pFVar52 + 0x1c));
    }
    FRHIGPUBufferReadback::Unlock(*(FRHIGPUBufferReadback **)pFVar52);
    uVar54 = this->ReadbackBuffersNumPending;
  }
  auVar67._0_4_ = this->ScheduledBuildsNumPrimitives - local_358;
  auVar67[4] = '\0';
  auVar67[5] = '\0';
  auVar67[6] = '\0';
  auVar67[7] = '\0';
  if ((auVar67._0_4_ != 0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar45 = StatPtr_STAT_NaniteRayTracingScheduledBuildsNumPrimitives;
    if (StatPtr_STAT_NaniteRayTracingScheduledBuildsNumPrimitives ==
        (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingScheduledBuildsNumPrimitives>)0x0) {
      pFVar37 = ::FName::FName(local_1a8,"STAT_NaniteRayTracingScheduledBuildsNumPrimitives");
      FVar45 = (FThreadSafeStaticStat<FStat_STAT_NaniteRayTracingScheduledBuildsNumPrimitives>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_NaniteRayTracingScheduledBuildsNumPrimitives,*pFVar37,
                          L"Scheduled Builds - Num Primitives","STATGROUP_NaniteRayTracing",
                          "STATCAT_Advanced",L"Nanite RayTracing",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar64 = *(FName *)FVar45;
    if (((FVar64 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_3e0 = FVar64;
      pFVar39 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar39 == (FThreadStats *)0x0) {
        pFVar40 = FThreadStatsPool::Get();
        pFVar39 = FThreadStatsPool::GetFromPool(pFVar40);
      }
      local_238.NameAndInfo.Number = FVar64.Number & 0xffffafff | 0xa000;
      local_288 = FVar64;
      local_238.StatData.Pad = auVar67;
      local_238.NameAndInfo.Index.Value = FVar64.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar39,&local_238);
      FStatsTrace::Add(&local_288,(long64)auVar67);
      if (pFVar39->ScopeCount == 0) {
        FThreadStats::Flush(pFVar39,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar39,false,false);
      }
    }
  }
  return;
}

// UpdateStreaming @ 1450816a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
Nanite::FRayTracingManager::UpdateStreaming
          (FRayTracingManager *this,FRDGBuilder *param_1,TArrayView<FViewInfo_const_,int> *param_2,
          FSceneUniformBuffer *param_3,TIntPoint<int> param_4)

{
  TSet<FPrimitiveSceneInfo_const_*,DefaultKeyFuncs<FPrimitiveSceneInfo_const_*,0>,FDefaultSetAllocator>
  *pTVar1;
  char cVar2;
  FPackedItem *pFVar3;
  FPackedBatch *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  TConsoleVariableData<float> *pTVar11;
  undefined4 uVar12;
  FRDGBuilder *this_00;
  TRefCountPtr<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FData>
  TVar13;
  TSet<FPrimitiveSceneInfo_const_*,DefaultKeyFuncs<FPrimitiveSceneInfo_const_*,0>,FDefaultSetAllocator>
  *pTVar14;
  undefined8 *puVar15;
  bool bVar16;
  byte bVar17;
  Type TVar18;
  FRDGScope *this_01;
  FViewInfo *pFVar19;
  FPackedView *pFVar20;
  FPackedView *pFVar21;
  undefined8 *puVar22;
  ulong64 uVar23;
  FGlobalShaderMap *pFVar24;
  FRDGBuffer *pFVar25;
  FRDGBufferUAV *pFVar26;
  FRDGBufferSRV *pFVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  longlong lVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  undefined1 *puVar38;
  uint *puVar39;
  ulonglong uVar40;
  undefined1 *puVar41;
  int iVar42;
  float fVar44;
  float fVar45;
  undefined1 auStackY_e38 [32];
  undefined1 local_de8 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34>_const_*,std::tuple<>_> local_de0;
  undefined8 local_dd0;
  FPackedView *local_dc8;
  FPackedView *local_dc0;
  FRayTracingManager *local_db8;
  FRDGBuilder *local_db0;
  FRDGBufferUAVDesc local_da8;
  FRDGBufferUAVDesc local_d98;
  FRDGBufferUAVDesc local_d88;
  TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  local_d78;
  int local_d58;
  FSceneUniformBuffer *local_d50;
  TRDGEventScopeGuard<FRDGScope_RHI> local_d48;
  char local_d38;
  TSet<FPrimitiveSceneInfo_const_*,DefaultKeyFuncs<FPrimitiveSceneInfo_const_*,0>,FDefaultSetAllocator>
  *local_d30;
  uint uStack_d28;
  uint uStack_d24;
  undefined1 *local_d20;
  undefined4 uStack_d18;
  uint uStack_d14;
  uint local_d10;
  undefined4 uStack_d0c;
  int iStack_d08;
  undefined4 uStack_d04;
  TSet<FPrimitiveSceneInfo_const_*,DefaultKeyFuncs<FPrimitiveSceneInfo_const_*,0>,FDefaultSetAllocator>
  *local_d00;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_cf8;
  undefined8 uStack_cd8;
  FRDGBufferSRVDesc local_cd0;
  FRayTracingQueueParameters local_ca8;
  FRDGBufferDesc local_c88;
  FRDGBufferDesc local_c70;
  undefined1 local_c58 [16];
  FShaderParametersMetadata *local_c48;
  undefined4 uStack_c34;
  undefined4 local_c30;
  undefined4 uStack_c2c;
  undefined4 local_c04;
  undefined8 local_bf8 [122];
  FPackedView local_828;
  FPackedView local_458;
  ulonglong local_88;
  ulonglong uVar37;
  ulonglong uVar43;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_e38;
  local_db8 = this;
  local_db0 = param_1;
  local_d50 = param_3;
  if (((GNaniteRayTracingStreaming) && (param_2->ArrayNum != 0)) &&
     (*(int *)&(this->VisiblePrimitives).Elements.field_0x8 !=
      *(int *)&(this->VisiblePrimitives).Elements.field_0x34)) {
    cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
    uVar37 = 0;
    local_d38 = '\0';
    if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0x2a8;
        local_c30 = 0x54bd0b70;
        uStack_c2c = 1;
        ::Desc._padding_._0_4_ = 0x54bd0b70;
        ::Desc._padding_._4_4_ = uStack_c34;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)::u_NaniteRayTracin;
        ::Desc._padding_ = (longlong)::u_NaniteRayTracin;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```Nanite::FRayTracingManager::UpdateStreaming'::__l10::Desc::operator()<>'::__l3::
               <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_de0._Myfirst._Val = &::Desc;
      local_d48.State = (FRDGScopeState *)param_1;
      this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_01;
      local_d48.Scope = this_01;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34>_const_*,std::tuple<>_>_>
                (&(this_01->Impl).Impl,(FRDGScopeState *)param_1,&local_de0);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_d38 = '\x01';
    }
    pTVar11 = CVarNaniteRayTracingStreamingLodBias.Ref;
    bVar16 = IsInParallelRenderingThread();
    if ((!bVar16) &&
       (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar45 = __real_40000000;
    uVar35 = __xmm_80000000800000008000000080000000;
    fVar44 = powf(__real_40000000,
                  (float)((uint)pTVar11->ShadowedValue[1] ^ __xmm_80000000800000008000000080000000))
    ;
    pTVar11 = CVarNaniteRayTracingStreamingOffscreenLodBias.Ref;
    bVar16 = IsInParallelRenderingThread();
    if ((!bVar16) &&
       (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar12 = GStreamingManager._992_4_;
    fVar10 = __real_3f800000;
    fVar44 = __real_3f800000 / ((float)GStreamingManager._992_4_ * fVar44);
    fVar45 = powf(fVar45,(float)((uint)pTVar11->ShadowedValue[1] ^ uVar35));
    iVar31 = param_2->ArrayNum;
    uVar35 = iVar31 * 2;
    local_dc8 = FMemStackBase::Alloc
                          ((FMemStackBase *)&param_1->_padding_,(ulonglong)uVar35 * 0x3d0,0x10);
    if (((int)uVar35 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar36 = 0;
    uVar34 = uVar37;
    uVar40 = uVar37;
    uVar43 = uVar37;
    pFVar20 = local_dc8;
    if (0 < param_2->ArrayNum) {
      do {
        local_dc0 = pFVar20;
        iVar42 = (int)uVar43;
        pFVar19 = TArrayView<FViewInfo_const_,int>::operator[](param_2,iVar42);
        pFVar20 = CreatePackedViewFromViewInfo
                            (&local_828,pFVar19,param_4,2,3,0.0,fVar44,(TIntRect<int> *)0x0,false);
        lVar30 = 7;
        puVar15 = local_bf8;
        do {
          puVar28 = puVar15;
          pFVar21 = pFVar20;
          uVar6 = *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[0] + 2);
          uVar7 = *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[1];
          uVar8 = *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[1] + 2);
          *puVar28 = *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[0];
          puVar28[1] = uVar6;
          uVar6 = *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[2];
          uVar9 = *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[2] + 2);
          puVar28[2] = uVar7;
          puVar28[3] = uVar8;
          uVar7 = *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[3];
          uVar8 = *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[3] + 2);
          puVar28[4] = uVar6;
          puVar28[5] = uVar9;
          uVar6 = *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[0];
          uVar9 = *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[0] + 2);
          puVar28[6] = uVar7;
          puVar28[7] = uVar8;
          uVar7 = *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[1];
          uVar8 = *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[1] + 2);
          puVar28[8] = uVar6;
          puVar28[9] = uVar9;
          uVar6 = *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[2];
          uVar9 = *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[2] + 2);
          puVar28[10] = uVar7;
          puVar28[0xb] = uVar8;
          uVar7 = *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[3];
          uVar8 = *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[3] + 2);
          puVar28[0xc] = uVar6;
          puVar28[0xd] = uVar9;
          puVar28[0xe] = uVar7;
          puVar28[0xf] = uVar8;
          lVar30 = lVar30 + -1;
          pFVar20 = (FPackedView *)&pFVar21->TranslatedWorldToView;
          puVar15 = puVar28 + 0x10;
        } while (lVar30 != 0);
        uVar6 = *(undefined8 *)((pFVar21->TranslatedWorldToView).M[0] + 2);
        uVar7 = *(undefined8 *)(pFVar21->TranslatedWorldToView).M[1];
        uVar8 = *(undefined8 *)((pFVar21->TranslatedWorldToView).M[1] + 2);
        puVar28[0x10] = *(undefined8 *)(pFVar21->TranslatedWorldToView).M[0];
        puVar28[0x11] = uVar6;
        uVar6 = *(undefined8 *)(pFVar21->TranslatedWorldToView).M[2];
        uVar9 = *(undefined8 *)((pFVar21->TranslatedWorldToView).M[2] + 2);
        puVar28[0x12] = uVar7;
        puVar28[0x13] = uVar8;
        uVar7 = *(undefined8 *)(pFVar21->TranslatedWorldToView).M[3];
        uVar8 = *(undefined8 *)((pFVar21->TranslatedWorldToView).M[3] + 2);
        puVar28[0x14] = uVar6;
        puVar28[0x15] = uVar9;
        uVar6 = *(undefined8 *)(pFVar21->TranslatedWorldToClip).M[0];
        uVar9 = *(undefined8 *)((pFVar21->TranslatedWorldToClip).M[0] + 2);
        puVar28[0x16] = uVar7;
        puVar28[0x17] = uVar8;
        puVar28[0x18] = uVar6;
        puVar28[0x19] = uVar9;
        uVar32 = (uint)uVar34;
        uVar33 = uVar36;
        if ((int)uVar32 < (int)uVar35) {
          uVar33 = ~uVar32 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar30 = 7;
        pFVar20 = local_dc0;
        puVar15 = local_bf8;
        do {
          puVar28 = puVar15;
          pFVar21 = pFVar20;
          uVar6 = puVar28[1];
          uVar7 = puVar28[2];
          uVar8 = puVar28[3];
          *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[0] = *puVar28;
          *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[0] + 2) = uVar6;
          uVar6 = puVar28[4];
          uVar9 = puVar28[5];
          *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[1] = uVar7;
          *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[1] + 2) = uVar8;
          uVar7 = puVar28[6];
          uVar8 = puVar28[7];
          *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[2] = uVar6;
          *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[2] + 2) = uVar9;
          uVar6 = puVar28[8];
          uVar9 = puVar28[9];
          *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[3] = uVar7;
          *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[3] + 2) = uVar8;
          uVar7 = puVar28[10];
          uVar8 = puVar28[0xb];
          *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[0] = uVar6;
          *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[0] + 2) = uVar9;
          uVar6 = puVar28[0xc];
          uVar9 = puVar28[0xd];
          *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[1] = uVar7;
          *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[1] + 2) = uVar8;
          uVar7 = puVar28[0xe];
          uVar8 = puVar28[0xf];
          *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[2] = uVar6;
          *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[2] + 2) = uVar9;
          *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[3] = uVar7;
          *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[3] + 2) = uVar8;
          lVar30 = lVar30 + -1;
          pFVar20 = (FPackedView *)&pFVar21->TranslatedWorldToView;
          puVar15 = puVar28 + 0x10;
        } while (lVar30 != 0);
        uVar6 = puVar28[0x11];
        uVar7 = puVar28[0x12];
        uVar8 = puVar28[0x13];
        *(undefined8 *)(pFVar21->TranslatedWorldToView).M[0] = puVar28[0x10];
        *(undefined8 *)((pFVar21->TranslatedWorldToView).M[0] + 2) = uVar6;
        uVar6 = puVar28[0x14];
        uVar9 = puVar28[0x15];
        *(undefined8 *)(pFVar21->TranslatedWorldToView).M[1] = uVar7;
        *(undefined8 *)((pFVar21->TranslatedWorldToView).M[1] + 2) = uVar8;
        uVar7 = puVar28[0x16];
        uVar8 = puVar28[0x17];
        *(undefined8 *)(pFVar21->TranslatedWorldToView).M[2] = uVar6;
        *(undefined8 *)((pFVar21->TranslatedWorldToView).M[2] + 2) = uVar9;
        uVar6 = puVar28[0x18];
        uVar9 = puVar28[0x19];
        *(undefined8 *)(pFVar21->TranslatedWorldToView).M[3] = uVar7;
        *(undefined8 *)((pFVar21->TranslatedWorldToView).M[3] + 2) = uVar8;
        *(undefined8 *)(pFVar21->TranslatedWorldToClip).M[0] = uVar6;
        *(undefined8 *)((pFVar21->TranslatedWorldToClip).M[0] + 2) = uVar9;
        pFVar19 = TArrayView<FViewInfo_const_,int>::operator[](param_2,iVar42);
        pFVar20 = CreatePackedViewFromViewInfo
                            (&local_458,pFVar19,param_4,2,0,0.0,fVar10 / (fVar45 * (float)uVar12),
                             (TIntRect<int> *)0x0,false);
        lVar30 = 7;
        puVar15 = local_bf8;
        do {
          puVar28 = puVar15;
          pFVar21 = pFVar20;
          uVar6 = *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[0] + 2);
          uVar7 = *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[1];
          uVar8 = *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[1] + 2);
          *puVar28 = *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[0];
          puVar28[1] = uVar6;
          uVar6 = *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[2];
          uVar9 = *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[2] + 2);
          puVar28[2] = uVar7;
          puVar28[3] = uVar8;
          uVar7 = *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[3];
          uVar8 = *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[3] + 2);
          puVar28[4] = uVar6;
          puVar28[5] = uVar9;
          uVar6 = *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[0];
          uVar9 = *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[0] + 2);
          puVar28[6] = uVar7;
          puVar28[7] = uVar8;
          uVar7 = *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[1];
          uVar8 = *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[1] + 2);
          puVar28[8] = uVar6;
          puVar28[9] = uVar9;
          uVar6 = *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[2];
          uVar9 = *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[2] + 2);
          puVar28[10] = uVar7;
          puVar28[0xb] = uVar8;
          uVar7 = *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[3];
          uVar8 = *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[3] + 2);
          puVar28[0xc] = uVar6;
          puVar28[0xd] = uVar9;
          puVar28[0xe] = uVar7;
          puVar28[0xf] = uVar8;
          lVar30 = lVar30 + -1;
          pFVar20 = (FPackedView *)&pFVar21->TranslatedWorldToView;
          puVar15 = puVar28 + 0x10;
        } while (lVar30 != 0);
        uVar6 = *(undefined8 *)((pFVar21->TranslatedWorldToView).M[0] + 2);
        uVar7 = *(undefined8 *)(pFVar21->TranslatedWorldToView).M[1];
        uVar8 = *(undefined8 *)((pFVar21->TranslatedWorldToView).M[1] + 2);
        puVar28[0x10] = *(undefined8 *)(pFVar21->TranslatedWorldToView).M[0];
        puVar28[0x11] = uVar6;
        uVar6 = *(undefined8 *)(pFVar21->TranslatedWorldToView).M[2];
        uVar9 = *(undefined8 *)((pFVar21->TranslatedWorldToView).M[2] + 2);
        puVar28[0x12] = uVar7;
        puVar28[0x13] = uVar8;
        uVar7 = *(undefined8 *)(pFVar21->TranslatedWorldToView).M[3];
        uVar8 = *(undefined8 *)((pFVar21->TranslatedWorldToView).M[3] + 2);
        puVar28[0x14] = uVar6;
        puVar28[0x15] = uVar9;
        uVar6 = *(undefined8 *)(pFVar21->TranslatedWorldToClip).M[0];
        uVar9 = *(undefined8 *)((pFVar21->TranslatedWorldToClip).M[0] + 2);
        puVar28[0x16] = uVar7;
        puVar28[0x17] = uVar8;
        puVar28[0x18] = uVar6;
        puVar28[0x19] = uVar9;
        uVar33 = uVar36;
        if ((int)(uVar32 + 1) < (int)uVar35) {
          uVar33 = ~(uVar32 + 1) >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar30 = 7;
        puVar15 = (undefined8 *)((longlong)local_dc8[1].SVPositionToTranslatedWorld.M[0] + uVar40);
        puVar28 = local_bf8;
        do {
          puVar29 = puVar28;
          puVar22 = puVar15;
          uVar6 = puVar29[1];
          uVar7 = puVar29[2];
          uVar8 = puVar29[3];
          *puVar22 = *puVar29;
          puVar22[1] = uVar6;
          uVar6 = puVar29[4];
          uVar9 = puVar29[5];
          puVar22[2] = uVar7;
          puVar22[3] = uVar8;
          uVar7 = puVar29[6];
          uVar8 = puVar29[7];
          puVar22[4] = uVar6;
          puVar22[5] = uVar9;
          uVar6 = puVar29[8];
          uVar9 = puVar29[9];
          puVar22[6] = uVar7;
          puVar22[7] = uVar8;
          uVar7 = puVar29[10];
          uVar8 = puVar29[0xb];
          puVar22[8] = uVar6;
          puVar22[9] = uVar9;
          uVar6 = puVar29[0xc];
          uVar9 = puVar29[0xd];
          puVar22[10] = uVar7;
          puVar22[0xb] = uVar8;
          uVar7 = puVar29[0xe];
          uVar8 = puVar29[0xf];
          puVar22[0xc] = uVar6;
          puVar22[0xd] = uVar9;
          puVar22[0xe] = uVar7;
          puVar22[0xf] = uVar8;
          lVar30 = lVar30 + -1;
          puVar15 = puVar22 + 0x10;
          puVar28 = puVar29 + 0x10;
        } while (lVar30 != 0);
        uVar6 = puVar29[0x11];
        local_dc0 = local_dc0 + 2;
        uVar7 = puVar29[0x12];
        uVar8 = puVar29[0x13];
        puVar22[0x10] = puVar29[0x10];
        puVar22[0x11] = uVar6;
        uVar6 = puVar29[0x14];
        uVar9 = puVar29[0x15];
        puVar22[0x12] = uVar7;
        puVar22[0x13] = uVar8;
        uVar7 = puVar29[0x16];
        uVar8 = puVar29[0x17];
        puVar22[0x14] = uVar6;
        puVar22[0x15] = uVar9;
        uVar6 = puVar29[0x18];
        uVar9 = puVar29[0x19];
        puVar22[0x16] = uVar7;
        puVar22[0x17] = uVar8;
        puVar22[0x18] = uVar6;
        puVar22[0x19] = uVar9;
        param_1 = local_db0;
        uVar34 = (ulonglong)(uVar32 + 2);
        this = local_db8;
        uVar40 = uVar40 + 0x7a0;
        uVar43 = (ulonglong)(iVar42 + 1U);
        pFVar20 = local_dc0;
      } while ((int)(iVar42 + 1U) < param_2->ArrayNum);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      memset(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
              ::__l2::DummyElement,0,0x290);
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.PreViewTranslationLow.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement._840_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.PreViewTranslationHigh.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement._728_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.PrevPreViewTranslationHigh.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement._744_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.PrevPreViewTranslationLow.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement._760_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.ViewOriginLow.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement._776_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.CullingViewOriginTranslatedWorld.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement._792_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.ViewForward.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement._808_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.ViewSizeAndInvSize.field0_0x0 =
           (TVector4<float>_u_0)(TVector4<float>_u_0)___xmm_3f800000000000000000000000000000;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.ClipSpaceScaleOffset.field0_0x0 =
           (TVector4<float>_u_0)(TVector4<float>_u_0)___xmm_3f800000000000000000000000000000;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.MaterialCacheUnwrapMinAndInvSize.field0_0x0 =
           (TVector4<float>_u_0)(TVector4<float>_u_0)___xmm_3f800000000000000000000000000000;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.MaterialCachePageOffsetAndInvSize.field0_0x0 =
           (TVector4<float>_u_0)(TVector4<float>_u_0)___xmm_3f800000000000000000000000000000;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.TranslatedGlobalClipPlane.field0_0x0 =
           (TVector4<float>_u_0)(TVector4<float>_u_0)___xmm_3f800000000000000000000000000000;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.LODScales.field0_0x0 = (TVector2<float>_u_0)(TVector2<float>_u_0_s_0)0x0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.InstanceOcclusionQueryMask = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.StreamingPriorityCategory_AndFlags = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.TargetLayerIdX_AndMipLevelY_AndNumMipLevelsZ.field0_0x0 =
           (TIntVector4<int>_u_0)ZEXT816(0);
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.HZBTestViewRect.field0_0x0 = (TIntVector4<int>_u_0)ZEXT816(0);
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.FirstPersonTransformRowsExceptRow2Z.field0_0x0 =
           (TIntVector4<unsigned_int>_u_0)ZEXT816(0);
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.PrevPreViewTranslationHZBHigh.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement._920_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.PrevPreViewTranslationHZBLow.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement._936_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.PrevFirstPersonTransformRowsExceptRow2Z.field0_0x0 =
           (TIntVector4<unsigned_int>_u_0)ZEXT816(0);
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.DynamicDepthCullRange.field0_0x0 =
           (TVector2<float>_u_0)(TVector2<float>_u_0_s_0)0x0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.LightingChannelMask = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
      ::__l2::DummyElement.SceneRendererPrimaryViewId = 0;
      _Init_thread_footer(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if (uVar35 == 0) {
      uVar35 = 1;
      uVar23 = 0x3d0;
      pFVar20 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,FRDGUploadData<Nanite::FPackedView>_const&___ptr64)'
                 ::__l2::DummyElement;
    }
    else {
      uVar23 = (ulong64)(iVar31 * 0x7a0);
      pFVar20 = local_dc8;
    }
    local_dc0 = (FPackedView *)
                CreateStructuredBuffer
                          (param_1,L"NaniteRayTracing.Views",0x3d0,uVar35,pFVar20,uVar23,NoCopy);
    local_d78.Data.Reference = ::operator_new(0x28);
    if (local_d78.Data.Reference == (FData *)0x0) {
      local_d78.Data.Reference = (FData *)0x0;
    }
    else {
      *(undefined4 *)&(local_d78.Data.Reference)->_padding_ = 0;
      ((local_d78.Data.Reference)->Batches).AllocatorInstance.Data = (FPackedBatch *)0x0;
      ((local_d78.Data.Reference)->Batches).ArrayNum = 0;
      ((local_d78.Data.Reference)->Batches).ArrayMax = 0;
      ((local_d78.Data.Reference)->Items).AllocatorInstance.Data = (FPackedItem *)0x0;
      ((local_d78.Data.Reference)->Items).ArrayNum = 0;
      ((local_d78.Data.Reference)->Items).ArrayMax = 0;
      LOCK();
      *(int *)&(local_d78.Data.Reference)->_padding_ =
           (int)(local_d78.Data.Reference)->_padding_ + 1;
      UNLOCK();
    }
    pTVar1 = &this->VisiblePrimitives;
    local_d78.CurrentBatchPrefixSum = 0;
    local_d78.CurrentBatchNumItems = 0;
    puVar41 = &(this->VisiblePrimitives).Elements.field_0x10;
    local_d78.CurrentBatchPackedPrefixSum = 0;
    local_d78.CurrentBatchFirstItem = 0;
    local_d78.TotalInstances = 0;
    uStack_d24 = 1;
    uVar35 = *(uint *)&(this->VisiblePrimitives).Elements.field_0x28;
    uStack_d14 = uVar36;
    local_d10 = uVar36;
    if (uVar35 != 0) {
      puVar39 = *(uint **)&(this->VisiblePrimitives).Elements.field_0x20;
      if (puVar39 == (uint *)0x0) {
        puVar39 = (uint *)puVar41;
      }
      uVar33 = *puVar39;
      uVar34 = uVar37;
      local_d10 = 0;
      uVar36 = 0;
      while (uVar33 == 0) {
        iVar31 = (int)uVar37;
        local_d10 = (int)uVar34 + 0x20;
        uVar34 = (ulonglong)local_d10;
        uVar36 = iVar31 + 1;
        uVar37 = (ulonglong)uVar36;
        uStack_d14 = uVar35;
        if ((int)((uVar35 - 1) + ((int)(uVar35 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar36)
        goto LAB_145081e1e;
        uVar33 = puVar39[(longlong)iVar31 + 1];
      }
      uStack_d24 = ~(uVar33 - 1) & uVar33;
      uVar37 = (ulonglong)uStack_d24 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      local_d58 = (int)lVar30;
      uStack_d14 = (local_d10 - 1) + local_d58;
      if ((int)uVar35 < (int)uStack_d14) {
        uStack_d14 = uVar35;
      }
    }
LAB_145081e1e:
    uStack_d0c = local_c04;
    uVar35 = *(uint *)&(local_db8->VisiblePrimitives).Elements.field_0x28;
    uVar33 = uVar35 & 0xffffffe0;
    iStack_d08 = *(int *)&(local_db8->VisiblePrimitives).Elements.field_0x8 -
                 *(int *)&(local_db8->VisiblePrimitives).Elements.field_0x34;
    TStack_cf8._padding_ = CONCAT44(uStack_d24,uVar36);
    uStack_d18 = 0xffffffff;
    TStack_cf8.CurrentBitIndex = uStack_d14;
    TStack_cf8.UnvisitedBitMask = 0xffffffff;
    iVar31 = (int)uVar35 >> 5;
    TStack_cf8._28_4_ = local_c04;
    TStack_cf8.BaseBitIndex = local_d10;
    uStack_cd8 = CONCAT44(uStack_d04,iStack_d08);
    local_d30 = pTVar1;
    uStack_d28 = uVar36;
    local_d20 = puVar41;
    local_d00 = pTVar1;
    TStack_cf8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar41;
    if (((int)uVar35 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar36 = *(uint *)&(this->VisiblePrimitives).Elements.field_0x28;
    if (uVar35 != uVar36) {
      puVar38 = *(undefined1 **)&(this->VisiblePrimitives).Elements.field_0x20;
      if (puVar38 == (undefined1 *)0x0) {
        puVar38 = puVar41;
      }
      uVar35 = -1 << ((byte)uVar35 & 0x1f) & *(uint *)(puVar38 + (longlong)iVar31 * 4);
      while (uVar35 == 0) {
        lVar30 = (longlong)iVar31;
        uVar33 = uVar33 + 0x20;
        iVar31 = iVar31 + 1;
        uVar35 = uVar36;
        if ((int)((uVar36 - 1) + ((int)(uVar36 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
        goto LAB_145081f30;
        uVar35 = *(uint *)(puVar38 + lVar30 * 4 + 4);
      }
      uVar37 = (ulonglong)(~(uVar35 - 1) & uVar35) * 2 + 1;
      lVar30 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      uVar35 = (uVar33 - 1) + (int)lVar30;
      if ((int)uVar36 < (int)uVar35) {
        uVar35 = uVar36;
      }
    }
LAB_145081f30:
    while( true ) {
      pTVar14 = local_d00;
      if (*(int *)&(local_d00->Elements).field_0x8 - *(int *)&(local_d00->Elements).field_0x34 !=
          (int)uStack_cd8) {
        `TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_de8);
      }
      if (((TStack_cf8.CurrentBitIndex == uVar35) &&
          (TStack_cf8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar41)) &&
         (pTVar14 == pTVar1)) break;
      lVar30 = *(longlong *)
                (*(longlong *)&pTVar14->Elements + (longlong)TStack_cf8.CurrentBitIndex * 0x10);
      if (*(uint *)(lVar30 + 0x228) != 0) {
        TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
        ::Add(&local_d78,*(uint *)(lVar30 + 0x224),*(uint *)(lVar30 + 0x228),
              *(uint *)(lVar30 + 0x18c));
      }
      TStack_cf8.UnvisitedBitMask = TStack_cf8.UnvisitedBitMask & ~TStack_cf8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_cf8);
    }
    bVar17 = *(byte *)((longlong)&local_db8->_padding_ + 4);
    TVar18 = (uint)bVar17;
    if (bVar17 == 5) {
      TVar18 = GMaxRHIFeatureLevel;
    }
    pFVar24 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar18]);
    this_00 = local_db0;
    local_de0._Myfirst._Val._0_4_ = 0x10109;
    local_de0._padding_._0_4_ = 0x34;
    local_de0._padding_._4_4_ = 1;
    local_c70.BytesPerElement = 0x34;
    local_c70.NumElements = 1;
    local_dd0 = 0;
    uVar35 = GNaniteMaxNodes & 0xfffffff0;
    local_c70.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_c70._12_4_ = local_de0._Myfirst._Val._4_4_;
    local_c70.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar25 = FRDGBuilder::CreateBuffer(local_db0,&local_c70,L"NaniteRayTracing.QueueState",None);
    local_de0._padding_._4_4_ = uVar35 * 2;
    local_de0._Myfirst._Val._0_4_ = 0x10109;
    local_de0._padding_._0_4_ = 4;
    local_c88.NumElements = local_de0._padding_._4_4_;
    local_c88.BytesPerElement = 4;
    local_dd0 = 0;
    local_c88._12_4_ = local_de0._Myfirst._Val._4_4_;
    local_c88.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
    local_c88.Metadata = (FShaderParametersMetadata *)0x0;
    local_d98.Buffer =
         FRDGBuilder::CreateBuffer(this_00,&local_c88,L"NaniteRayTracing.NodesBuffer",None);
    local_da8._padding_._2_1_ = 0;
    bVar17 = 0;
    if (((pFVar25->Desc).Usage & DrawIndirect) != None) {
      bVar17 = 0x1c;
    }
    local_da8._padding_._0_2_ = (ushort)bVar17;
    local_da8.Buffer = pFVar25;
    local_ca8.QueueState = FRDGBuilder::CreateUAV(this_00,&local_da8,None);
    bVar17 = 0;
    local_d98._padding_._2_1_ = 0;
    if ((((local_d98.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar17 = 0x1c;
    }
    local_d98._padding_._0_2_ = (ushort)bVar17;
    local_ca8.Nodes = FRDGBuilder::CreateUAV(this_00,&local_d98,None);
    local_de0._Myfirst._Val._0_4_ = 0x10109;
    local_de0._padding_._4_4_ = 2;
    local_de0._padding_._0_4_ = 4;
    local_c58._0_4_ = 4;
    local_c58._4_4_ = 2;
    local_dd0 = 0;
    local_c58._8_8_ = local_de0._Myfirst._Val;
    local_ca8.CandidateClusters = (FRDGBufferUAV *)0x0;
    local_ca8.MaxCandidateClusters = 0;
    local_c48 = (FShaderParametersMetadata *)0x0;
    local_ca8.MaxNodes = uVar35;
    local_d88.Buffer =
         FRDGBuilder::CreateBuffer
                   (this_00,(FRDGBufferDesc *)local_c58,
                    L"NaniteStreamOut.VertexAndIndexAllocatorBuffer",None);
    bVar17 = 0;
    local_d88._padding_._2_1_ = 0;
    if ((((local_d88.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar17 = 0x1c;
    }
    local_d88._padding_._0_2_ = (ushort)bVar17;
    pFVar26 = FRDGBuilder::CreateUAV(this_00,&local_d88,None);
    AddClearUAVPass(this_00,pFVar26,0,Compute);
    local_cd0.Buffer = (FRDGBuffer *)local_dc0;
    local_cd0._padding_._0_1_ = 0;
    local_cd0._padding_._4_4_ = 0;
    local_cd0._padding_._0_4_ = 0xffffffff;
    local_cd0._padding_ = 0;
    if ((((FRDGBufferDesc *)&local_dc0->TranslatedWorldToView)->Usage & DrawIndirect) != None) {
      local_cd0._padding_._0_1_ = 0x1c;
    }
    pFVar27 = FRDGBuilder::CreateSRV(this_00,&local_cd0);
    AddPass_StreamingTraversal
              (this_00,pFVar24,local_d50,GNaniteRayTracingStreamingOffscreenMinCutError,&local_d78,
               pFVar27,&local_ca8);
    bVar16 = 1 < (this->VisiblePrimitives).HashSize;
    if (!bVar16) {
      TSet<FPrimitiveSceneInfo_const_*,DefaultKeyFuncs<FPrimitiveSceneInfo_const_*,0>,FDefaultSetAllocator>
      ::UnhashElements(pTVar1);
    }
    puVar41 = &(this->VisiblePrimitives).Elements.field_0xc;
    *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x8 = 0;
    if (*(int *)puVar41 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)pTVar1,0,(int *)puVar41);
    }
    *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x28 = 0;
    *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x30 = 0xffffffff;
    iVar31 = *(int *)&(this->VisiblePrimitives).Elements.field_0x2c;
    if ((iVar31 < 0) || (0x80 < iVar31)) {
      *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->VisiblePrimitives).Elements.field_0x10,0);
    }
    if (bVar16) {
      (this->VisiblePrimitives).HashSize = 1;
      TSet<FPrimitiveSceneInfo_const_*,DefaultKeyFuncs<FPrimitiveSceneInfo_const_*,0>,FDefaultSetAllocator>
      ::Rehash(pTVar1);
    }
    TVar13.Reference = local_d78.Data.Reference;
    if (local_d78.Data.Reference != (FData *)0x0) {
      LOCK();
      lVar30 = (local_d78.Data.Reference)->_padding_;
      *(int *)&(local_d78.Data.Reference)->_padding_ =
           (int)(local_d78.Data.Reference)->_padding_ + -1;
      UNLOCK();
      if ((int)lVar30 == 1) {
        pFVar3 = ((local_d78.Data.Reference)->Items).AllocatorInstance.Data;
        if (pFVar3 != (FPackedItem *)0x0) {
          TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar3);
        }
        pFVar4 = ((TVar13.Reference)->Batches).AllocatorInstance.Data;
        if (pFVar4 != (FPackedBatch *)0x0) {
          TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar4);
        }
        ::operator_delete(TVar13.Reference,0x28);
      }
    }
    if (local_d38 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_d48);
    }
  }
  else {
    pTVar1 = &this->VisiblePrimitives;
    bVar16 = 1 < (this->VisiblePrimitives).HashSize;
    if (!bVar16) {
      TSet<FPrimitiveSceneInfo_const_*,DefaultKeyFuncs<FPrimitiveSceneInfo_const_*,0>,FDefaultSetAllocator>
      ::UnhashElements(pTVar1);
    }
    puVar41 = &(this->VisiblePrimitives).Elements.field_0xc;
    *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x8 = 0;
    if (*(int *)puVar41 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)pTVar1,0,(int *)puVar41);
    }
    *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x34 = 0;
    iVar31 = *(int *)&(this->VisiblePrimitives).Elements.field_0x2c;
    *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x28 = 0;
    if ((iVar31 < 0) || (0x80 < iVar31)) {
      *(undefined4 *)&(this->VisiblePrimitives).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->VisiblePrimitives).Elements.field_0x10,0);
    }
    if (bVar16) {
      (this->VisiblePrimitives).HashSize = 1;
      TSet<FPrimitiveSceneInfo_const_*,DefaultKeyFuncs<FPrimitiveSceneInfo_const_*,0>,FDefaultSetAllocator>
      ::Rehash(pTVar1);
    }
  }
  return;
}

// UpdateUniformBuffer @ 145082530

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
Nanite::FRayTracingManager::UpdateUniformBuffer
          (FRayTracingManager *this,FRDGBuilder *param_1,bool param_2)

{
  int *piVar1;
  FNaniteRayTracingUniformParameters *pFVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  FRDGBufferSRV *pFVar8;
  FShaderParametersMetadata *pFVar9;
  TRDGUniformBuffer<FNaniteRayTracingUniformParameters> *pTVar10;
  FRDGBufferSRVDesc *pFVar11;
  undefined8 *puVar12;
  undefined8 *local_b8;
  FRDGBufferSRVDesc local_b0;
  FRDGBufferSRVDesc local_90;
  FRDGBufferSRVDesc local_70;
  FRDGBufferSRVDesc local_50;
  
  puVar7 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x40,0x10);
  puVar12 = (undefined8 *)0x0;
  if (puVar7 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    puVar7[5] = 0;
    *puVar7 = &___7__TObject_VFNaniteRayTracingUniformParameters___FRDGAllocator__6B_;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar12 = puVar7;
  }
  local_b8 = puVar12;
  if ((((undefined8 **)param_1->_padding_ <= &local_b8) &&
      (&local_b8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar6 + 1;
  pFVar2 = (FNaniteRayTracingUniformParameters *)(puVar12 + 2);
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar6 * 8) = local_b8;
  if ((param_2) && (this->bCurrentMode != Fallback)) {
    (pFVar2->PageConstants).field0_0x0._s_0.X = 0;
    *(undefined4 *)((longlong)puVar12 + 0x14) = GStreamingManager._956_4_;
    *(uint *)(puVar12 + 4) = GNaniteMaxNodes & 0xfffffff0;
    pFVar8 = FStreamingManager::GetClusterPageDataSRV
                       ((FStreamingManager *)&GStreamingManager,param_1);
    puVar12[5] = pFVar8;
    pFVar8 = FStreamingManager::GetHierarchySRV((FStreamingManager *)&GStreamingManager,param_1);
    puVar12[6] = pFVar8;
    local_b0.Buffer =
         FRDGBuilder::RegisterExternalBuffer
                   (param_1,(TRefCountPtr<FRDGPooledBuffer> *)&GRayTracingManager.field_0x1e8,None);
    pFVar11 = &local_b0;
    local_b0._padding_._4_4_ = 0;
    local_b0._padding_._0_4_ = 0xffffffff;
    local_b0._padding_ = 0;
    local_b0._padding_._0_1_ = 0;
    if ((((local_b0.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_b0._padding_._0_1_ = 0x1c;
    }
  }
  else {
    *(undefined8 *)&(pFVar2->PageConstants).field0_0x0 = 0;
    *(undefined4 *)(puVar12 + 4) = 0;
    local_90.Buffer =
         FSystemTextures::GetDefaultByteAddressBuffer((FSystemTextures *)&GSystemTextures,param_1,4)
    ;
    local_90._padding_._4_4_ = 0;
    local_90._padding_._0_4_ = 0xffffffff;
    local_90._padding_ = 0;
    local_90._padding_._0_1_ = 0;
    if ((((local_90.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_90._padding_._0_1_ = 0x1c;
    }
    pFVar8 = FRDGBuilder::CreateSRV(param_1,&local_90);
    puVar12[5] = pFVar8;
    local_70.Buffer =
         FSystemTextures::GetDefaultByteAddressBuffer((FSystemTextures *)&GSystemTextures,param_1,4)
    ;
    local_70._padding_._0_1_ = 0;
    local_70._padding_._4_4_ = 0;
    local_70._padding_._0_4_ = 0xffffffff;
    local_70._padding_ = 0;
    if ((((local_70.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_70._padding_._0_1_ = 0x1c;
    }
    pFVar8 = FRDGBuilder::CreateSRV(param_1,&local_70);
    puVar12[6] = pFVar8;
    local_50.Buffer =
         FSystemTextures::GetDefaultByteAddressBuffer((FSystemTextures *)&GSystemTextures,param_1,8)
    ;
    local_50._padding_._0_1_ = 0;
    pFVar11 = &local_50;
    local_50._padding_._4_4_ = 0;
    local_50._padding_._0_4_ = 0xffffffff;
    local_50._padding_ = 0;
    if ((((local_50.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_50._padding_._0_1_ = 0x1c;
    }
  }
  pFVar8 = FRDGBuilder::CreateSRV(param_1,pFVar11);
  puVar12[7] = pFVar8;
  pFVar9 = FNaniteRayTracingUniformParameters::GetStructMetadata();
  FRDGUserValidation::ValidateCreateUniformBuffer(&param_1->UserValidation,pFVar2,pFVar9);
  pFVar9 = FNaniteRayTracingUniformParameters::GetStructMetadata();
  pwVar3 = pFVar9->ShaderVariableName;
  pTVar10 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
  pTVar10 = TRDGUniformBuffer<FNaniteRayTracingUniformParameters>::
            TRDGUniformBuffer<FNaniteRayTracingUniformParameters>(pTVar10,pFVar2,pwVar3);
  piVar1 = &(param_1->UniformBuffers).Array.ArrayMax;
  iVar6 = (param_1->UniformBuffers).Array.ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGUniformBuffer_*>_>
                      (0x808,(ForElementType<FRDGUniformBuffer_*> *)&param_1->UniformBuffers,piVar1)
    ;
  }
  (param_1->UniformBuffers).Array.ArrayNum = iVar6 + 1;
  (param_1->UniformBuffers).Array.AllocatorInstance.Data[iVar6] = (FRDGUniformBuffer *)pTVar10;
  *(int *)&pTVar10->_padding_ = (param_1->UniformBuffers).Array.ArrayNum + -1;
  FRDGUserValidation::ValidateCreateUniformBuffer
            (&param_1->UserValidation,(FRDGUniformBuffer *)pTVar10);
  this->UniformBuffer = pTVar10;
  return;
}

