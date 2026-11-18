// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 42

// FSkeletalMeshObjectGPUSkin @ 148621a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshObjectGPUSkin * __thiscall
FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectGPUSkin
          (FSkeletalMeshObjectGPUSkin *this,FSkinnedMeshSceneProxyDesc *param_1,
          FSkeletalMeshRenderData *param_2,Type param_3)

{
  TArray<FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong *plVar3;
  FSkeletalMeshRenderData *pFVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  FSkeletalMeshObjectGPUSkin *pFVar10;
  UMeshDeformerInstance *pUVar11;
  FMorphVertexBufferPool *pFVar12;
  FMorphVertexBufferPool *pFVar13;
  uint uVar14;
  undefined ***pppuVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  FSkeletalMeshObject *pFVar18;
  FScriptContainerElement FVar19;
  FSkeletalMeshObject *pFVar20;
  undefined1 auStackY_c8 [32];
  longlong local_90;
  longlong local_80;
  code *local_78 [2];
  undefined **local_68;
  FSkeletalMeshObjectGPUSkin *local_60;
  FSkeletalMeshObject *local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  FSkeletalMeshObject::FSkeletalMeshObject((FSkeletalMeshObject *)this,param_1,param_2,param_3);
  this->_padding_ = (longlong)&___7FSkeletalMeshObjectGPUSkin__6B_;
  FRayTracingGeometry::FRayTracingGeometry(&this->RayTracingGeometry);
  pFVar18 = (FSkeletalMeshObject *)0x0;
  pTVar1 = &this->LODs;
  (this->RayTracingDynamicVertexBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  piVar2 = &(this->LODs).ArrayMax;
  (this->RayTracingDynamicVertexBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->RayTracingDynamicVertexBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->RayTracingDynamicVertexBuffer).NumBytes = 0;
  (this->RayTracingDynamicVertexBuffer).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->RayTracingDynamicVertexBuffer).ClassName.Number = 0;
  (this->RayTracingDynamicVertexBuffer).OwnerName.Number = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->LODs).ArrayNum = 0;
  *piVar2 = 0;
  this->DynamicData = (FDynamicSkelMeshObjectDataGPUSkin *)0x0;
  (this->UpdateHandle).Index = 0xffffffff;
  this->GPUSkinCache = (FGPUSkinCache *)0x0;
  this->MorphVertexBuffer = (FMorphVertexBuffer *)0x0;
  this->LastRayTracingBoneTransformUpdate = 0xffffffff;
  this->bMorphResourcesInitialized = false;
  this->bMorphNeedsUpdate = false;
  pFVar20 = pFVar18;
  if ((param_1->PreviousMeshObject != (FSkeletalMeshObject *)0x0) &&
     (cVar7 = (**(code **)(param_1->PreviousMeshObject->_padding_ + 0x48))(),
     pFVar20 = (FSkeletalMeshObject *)0x0, cVar7 != '\0')) {
    pFVar20 = param_1->PreviousMeshObject;
    if ((pFVar20->SkeletalMeshRenderData == param_2) && (pFVar20->FeatureLevel == param_3)) {
      local_50 = (undefined ***)0x0;
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectGPUSkin'::`11'::<lambda_1>,1,0>
                  ::_vftable_;
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectGPUSkin'::__l11::<lambda_1>,void,FRHICommandList_&>
                    ::Call;
      local_60 = this;
      local_58 = pFVar20;
      FRenderCommandDispatcher::
      Enqueue<TRenderCommandTag<_FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectGPUSkin_::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources563>_>
                (&UE::RenderCommandPipe::SkeletalMesh,
                 (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_78);
      if (local_78[0] != (code *)0x0) {
        pppuVar15 = &local_68;
        if (local_50 != (undefined ***)0x0) {
          pppuVar15 = local_50;
        }
        (*(code *)(*pppuVar15)[2])();
      }
    }
    else {
      pFVar20 = (FSkeletalMeshObject *)0x0;
    }
  }
  uVar17 = *(uint *)(this->_padding_ + 8);
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  DestructItems<FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD,int>
            ((FSkeletalMeshObjectLOD *)(pTVar1->AllocatorInstance).Data,(this->LODs).ArrayNum);
  (this->LODs).ArrayNum = 0;
  if (*piVar2 != uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,8,uVar17,&pTVar1->AllocatorInstance,0,piVar2);
  }
  if (0 < *(int *)(this->_padding_ + 8)) {
    local_90 = 0;
    local_80 = 0;
    do {
      pFVar13 = (FMorphVertexBufferPool *)0x0;
      uVar17 = (uint)pFVar18;
      if (pFVar20 != (FSkeletalMeshObject *)0x0) {
        uVar9 = 0;
        if ((int)uVar17 < *(int *)&pFVar20[3].LODInfo.AllocatorInstance.Data) {
          uVar9 = ~uVar17 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FSkeletalMeshObjectGPUSkin *)(*pcVar5)();
          return pFVar10;
        }
        pFVar13 = *(FMorphVertexBufferPool **)(local_80 + 0x10 + pFVar20[3]._padding_);
      }
      plVar3 = (longlong *)this->_padding_;
      pUVar11 = FSkinnedMeshSceneProxyDesc::GetMeshDeformerInstanceForLOD(param_1,uVar17);
      if (pUVar11 == (UMeshDeformerInstance *)0x0) {
        FVar19 = (FScriptContainerElement)0x0;
        if (((GEnableGPUSkinCache != 0) &&
            (bVar8 = FSkinnedMeshSceneProxyDesc::IsSkinCacheAllowed(param_1,uVar17), bVar8)) &&
           (FVar19 = (FScriptContainerElement)0x1, param_3 == ES3_1)) {
          uVar9 = 0;
          if ((int)uVar17 < (int)plVar3[1]) {
            uVar9 = ~uVar17 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FSkeletalMeshObjectGPUSkin *)(*pcVar5)();
            return pFVar10;
          }
          FVar19 = (FScriptContainerElement)0x1;
          if (0xffff < (uint)(*(int *)(*(longlong *)(*plVar3 + local_90) + 300) * 3)) {
            FVar19 = (FScriptContainerElement)0x0;
          }
        }
      }
      else {
        FVar19 = (FScriptContainerElement)0x2;
      }
      uVar9 = (this->LODs).ArrayNum;
      if (uVar9 == (this->LODs).ArrayMax) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8b0,&pTVar1->AllocatorInstance,&(this->LODs).ArrayMax);
      }
      (this->LODs).ArrayNum = uVar9 + 1;
      uVar14 = 0;
      if ((int)uVar9 < (int)(uVar9 + 1)) {
        uVar14 = ~uVar9 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FSkeletalMeshObjectGPUSkin *)(*pcVar5)();
        return pFVar10;
      }
      pFVar16 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xb0;
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        pFVar4 = (FSkeletalMeshRenderData *)this->_padding_;
        *(uint *)(pFVar16 + 8) = uVar17;
        *(Type *)(pFVar16 + 0xc) = param_3;
        *(FSkeletalMeshRenderData **)pFVar16 = pFVar4;
        *(undefined8 *)(pFVar16 + 0x10) = 0;
        *(undefined8 *)(pFVar16 + 0x18) = 0;
        *(undefined8 *)(pFVar16 + 0x20) = 0;
        *(undefined8 *)(pFVar16 + 0x28) = 0;
        *(undefined8 *)(pFVar16 + 0x38) = 0;
        *(undefined8 *)(pFVar16 + 0x40) = 0;
        *(undefined8 *)(pFVar16 + 0x48) = 0;
        FMeshDeformerGeometry::FMeshDeformerGeometry((FMeshDeformerGeometry *)(pFVar16 + 0x50));
        pFVar16[0xa0] = FVar19;
        *(undefined4 *)(pFVar16 + 0xa4) = 0xffffffff;
        *(undefined4 *)(pFVar16 + 0xa8) = 0;
        if (pFVar13 == (FMorphVertexBufferPool *)0x0) {
          pFVar12 = ::operator_new(0xf8);
          pFVar13 = (FMorphVertexBufferPool *)0x0;
          if (pFVar12 != (FMorphVertexBufferPool *)0x0) {
            pFVar13 = FMorphVertexBufferPool::FMorphVertexBufferPool
                                (pFVar12,pFVar4,*(int *)(pFVar16 + 8),*(Type *)(pFVar16 + 0xc));
          }
          pFVar12 = *(FMorphVertexBufferPool **)(pFVar16 + 0x10);
          if (pFVar12 != pFVar13) {
            *(FMorphVertexBufferPool **)(pFVar16 + 0x10) = pFVar13;
            if (pFVar13 != (FMorphVertexBufferPool *)0x0) {
              LOCK();
              *(int *)&pFVar13->_padding_ = (int)pFVar13->_padding_ + 1;
              UNLOCK();
            }
            goto joined_r0x000148621e79;
          }
        }
        else {
          pFVar12 = *(FMorphVertexBufferPool **)(pFVar16 + 0x10);
          if (pFVar12 != pFVar13) {
            *(FMorphVertexBufferPool **)(pFVar16 + 0x10) = pFVar13;
            LOCK();
            *(int *)&pFVar13->_padding_ = (int)pFVar13->_padding_ + 1;
            UNLOCK();
joined_r0x000148621e79:
            if (pFVar12 != (FMorphVertexBufferPool *)0x0) {
              plVar3 = &pFVar12->_padding_;
              LOCK();
              lVar6 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if (((int)lVar6 == 1) && (plVar3 != (longlong *)0x0)) {
                (**(code **)pFVar12->_padding_)(pFVar12,1);
              }
            }
          }
        }
      }
      pFVar18 = (FSkeletalMeshObject *)(ulonglong)(uVar17 + 1);
      local_80 = local_80 + 0xb0;
      local_90 = local_90 + 8;
    } while ((int)(uVar17 + 1) < *(int *)(this->_padding_ + 8));
  }
  InitResources(this,param_1);
  return this;
}

// FSkeletalMeshObjectGPUSkin @ 148621f20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshObjectGPUSkin * __thiscall
FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectGPUSkin
          (FSkeletalMeshObjectGPUSkin *this,USkinnedMeshComponent *param_1,
          FSkeletalMeshRenderData *param_2,Type param_3)

{
  FSkinnedMeshSceneProxyDesc *pFVar1;
  FSkinnedMeshSceneProxyDesc local_198;
  
  pFVar1 = FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc(&local_198,param_1);
  FSkeletalMeshObjectGPUSkin(this,pFVar1,param_2,param_3);
  if (local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data);
  }
  FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)&local_198);
  this->_padding_ = (longlong)&___7FSkeletalMeshObjectGPUSkin__6B_;
  return this;
}

// ~FSkeletalMeshObjectGPUSkin @ 1486251d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::~FSkeletalMeshObjectGPUSkin(FSkeletalMeshObjectGPUSkin *this)

{
  FDynamicSkelMeshObjectDataGPUSkin *this_00;
  FSkeletalMeshUpdateChannel *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataGPUSkin,0,1> *this_01;
  
  this_00 = this->DynamicData;
  this->_padding_ = (longlong)&___7FSkeletalMeshObjectGPUSkin__6B_;
  if (this_00 != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) {
    iVar5 = FDynamicSkelMeshObjectDataGPUSkin::Reset(this_00);
    *(int *)&this_00->field_0x14 = iVar5;
    LOCK();
    TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataGPUSkin>::Pool.NumFreeBytes =
         TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataGPUSkin>::Pool.NumFreeBytes +
         (longlong)iVar5;
    UNLOCK();
    FSkeletalMeshDynamicDataPool::AddStatsMemory
              ((FSkeletalMeshDynamicDataPool *)
               &TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataGPUSkin>::Pool,
               *(int *)&this_00->field_0x10,iVar5);
    this_01 = (FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataGPUSkin,0,1> *)
              TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket
                        (*(int *)&this_00->field_0x10);
    FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataGPUSkin,0,1>::Push(this_01,this_00);
  }
  pFVar1 = (this->UpdateHandle).Channel;
  this->DynamicData = (FDynamicSkelMeshObjectDataGPUSkin *)0x0;
  if (pFVar1 != (FSkeletalMeshUpdateChannel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Channel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.h"
                       ,0x177,L"Call Release prior to destructing this handle");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  DestructItems<FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD,int>
            ((FSkeletalMeshObjectLOD *)(this->LODs).AllocatorInstance.Data,(this->LODs).ArrayNum);
  pFVar2 = (this->LODs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FRWBuffer::~FRWBuffer(&this->RayTracingDynamicVertexBuffer);
  FRayTracingGeometry::~FRayTracingGeometry(&this->RayTracingGeometry);
  this->_padding_ = (longlong)&___7FSkeletalMeshObject__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<FSkeletalMeshObject::FSkelMeshObjectLODInfo,int>
            ((FSkelMeshObjectLODInfo *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  return;
}

// operator() @ 148629260

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FSkeletalMeshObjectGPUSkin::Update'::__l8::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  int *piVar1;
  FName *pFVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar6;
  FNameEntryId FVar7;
  FNameEntryId FVar8;
  bool bVar9;
  LARGE_INTEGER local_res8;
  FStatMessage local_28;
  
  FVar7.Value = 0;
  bVar3 = false;
  bVar4 = false;
  pFVar2 = *(FName **)(*(longlong *)this + 0x68);
  FVar6 = *pFVar2;
  FVar8 = FVar6.ComparisonIndex.Value;
  uVar5 = FVar6.Number;
  if ((FVar8.Value == 0) && (uVar5 == 0)) {
    FSkeletalMeshObjectGPUSkin::UpdateDynamicData_RenderThread
              (*(FSkeletalMeshObjectGPUSkin **)this,param_1,
               *(FDynamicSkelMeshObjectDataGPUSkin **)((longlong)this + 8));
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8.s,(char *)pFVar2[2]);
      bVar3 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar5;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)pFVar2[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                   ,0x2fa);
        bVar3 = true;
        bVar4 = true;
      }
    }
    bVar9 = FThreadStats::bPrimaryEnable == false;
    if (bVar9) {
      FVar6.ComparisonIndex.Value = 0;
      FVar6.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar5;
      FThreadStats::AddMessage(FVar6,CycleScopeStart);
      FVar7.Value = FVar8.Value;
    }
    FSkeletalMeshObjectGPUSkin::UpdateDynamicData_RenderThread
              (*(FSkeletalMeshObjectGPUSkin **)this,param_1,
               *(FDynamicSkelMeshObjectDataGPUSkin **)((longlong)this + 8));
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar9) && (FVar6 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar6.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar7.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  }
  return;
}

// CreateVertexFactory @ 148635f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FSkeletalMeshObjectGPUSkin::CreateVertexFactory
          (FRHICommandList *param_1,
          TArray<TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_>,TSizedDefaultAllocator<32>_>
          *param_2,TUniquePtr<FGPUSkinPassthroughVertexFactory,TDefaultDelete<FGPUSkinPassthroughVertexFactory>_>
                   *param_3,FVertexFactoryBuffers *param_4,Type param_5,
          EVertexAttributeFlags param_6,uint param_7,uint param_8,uint param_9,bool param_10)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  GPUSkinBoneInfluenceType GVar4;
  int iVar5;
  FGPUBaseSkinVertexFactory *this;
  undefined1 auStack_238 [32];
  FGPUBaseSkinVertexFactory *local_1e8;
  FInitializer local_1e0;
  FGPUBaseSkinVertexFactory *local_1c8;
  FVertexFactoryBuffers local_1c0;
  FGPUSkinDataType local_188;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  GVar4 = FSkinWeightVertexBuffer::GetBoneInfluenceType(param_4->SkinWeightVertexBuffer);
  local_1e0.NumBones = param_7;
  local_1e0.BoneOffset = param_8;
  local_1e0.NumVertices = param_4->NumVertices;
  local_1e0.BaseVertexIndex = param_9;
  local_1e0.bUsedForPassthroughVertexFactory = param_10;
  local_1e0.FeatureLevel = param_5;
  if (GVar4 == DefaultBoneInfluence) {
    this = ::operator_new(0x1d0);
    if (this != (FGPUBaseSkinVertexFactory *)0x0) {
      FGPUBaseSkinVertexFactory::FGPUBaseSkinVertexFactory(this,&local_1e0);
      this->_padding_ = (longlong)&___7__TGPUSkinVertexFactory__0A___6B_;
      goto LAB_14863601d;
    }
  }
  else {
    this = ::operator_new(0x1d0);
    if (this != (FGPUBaseSkinVertexFactory *)0x0) {
      FGPUBaseSkinVertexFactory::FGPUBaseSkinVertexFactory(this,&local_1e0);
      this->_padding_ = (longlong)&___7__TGPUSkinVertexFactory__00__6B_;
      goto LAB_14863601d;
    }
  }
  this = (FGPUBaseSkinVertexFactory *)0x0;
LAB_14863601d:
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_1e8 = this;
  if ((pFVar1 <= (FScriptContainerElement *)&local_1e8) &&
     ((FScriptContainerElement *)&local_1e8 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = param_2->ArrayNum;
  if (iVar5 == param_2->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar5 + 1;
  *(FGPUBaseSkinVertexFactory **)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) =
       local_1e8;
  local_1c0.StaticVertexBuffers = param_4->StaticVertexBuffers;
  local_1c0.SkinWeightVertexBuffer = param_4->SkinWeightVertexBuffer;
  local_1c0.ColorVertexBuffer = param_4->ColorVertexBuffer;
  local_1c0.MorphVertexBufferPool = param_4->MorphVertexBufferPool;
  local_1c0.APEXClothVertexBuffer = param_4->APEXClothVertexBuffer;
  local_1c0.VertexOffsetVertexBuffers = param_4->VertexOffsetVertexBuffers;
  local_1c0.NumVertices = param_4->NumVertices;
  local_1c0._52_4_ = *(undefined4 *)&param_4->field_0x34;
  local_1c8 = this;
  FGPUSkinDataType::FGPUSkinDataType(&local_188);
  InitGPUSkinVertexFactoryComponents(&local_188,&local_1c0,this);
  (**(code **)(this->_padding_ + 0x58))(this,param_1,&local_188);
  (**(code **)(this->_padding_ + 0x18))(this,param_1);
  InitPassthroughVertexFactory_RenderThread(param_1,param_3,this,param_5,param_6);
  return;
}

// GetBaseSkinVertexFactory @ 148645300

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGPUBaseSkinVertexFactory * __thiscall
FSkeletalMeshObjectGPUSkin::GetBaseSkinVertexFactory
          (FSkeletalMeshObjectGPUSkin *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FGPUBaseSkinVertexFactory *pFVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < (this->LODs).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FGPUBaseSkinVertexFactory *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->LODs).AllocatorInstance.Data;
  uVar5 = 0;
  if (param_2 < *(int *)(pFVar1 + (longlong)param_1 * 0xb0 + 0x20)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FGPUBaseSkinVertexFactory *)(*pcVar2)();
      return pFVar4;
    }
  }
  return *(FGPUBaseSkinVertexFactory **)
          (*(longlong *)(pFVar1 + (longlong)param_1 * 0xb0 + 0x18) + (longlong)param_2 * 8);
}

// GetCachedGeometry @ 148645dd0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FSkeletalMeshObjectGPUSkin::GetCachedGeometry
          (FSkeletalMeshObjectGPUSkin *this,FRDGBuilder *param_1,FCachedGeometry *param_2)

{
  TArray<FCachedGeometry::Section,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  uint uVar3;
  FDynamicSkelMeshObjectDataGPUSkin *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  __m128d _Var9;
  __m128d _Var10;
  __m128d _Var11;
  __m128d _Var12;
  __m128d _Var13;
  __m128d _Var14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  FRWBuffer *pFVar20;
  FRWBuffer *pFVar21;
  longlong lVar22;
  longlong lVar23;
  int *piVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  ulonglong uVar27;
  uint uVar28;
  ForAnyElementType local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  double adStack_1e8 [2];
  double adStack_1d8 [2];
  double adStack_1c8 [2];
  double adStack_1b8 [2];
  double adStack_1a8 [2];
  double adStack_198 [2];
  TMatrix<double> local_188;
  TTransform<double> local_108 [2];
  
  _Var14.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  _Var13.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var12.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  _Var11.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  _Var10.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  pTVar1 = &param_2->Sections;
  local_200.Data = (FScriptContainerElement *)0x0;
  local_1f8 = 0;
  param_2->LODIndex = -1;
  adStack_1d8 = _Var10.m128d_f64;
  adStack_1c8 = _Var11.m128d_f64;
  adStack_1b8 = _Var12.m128d_f64;
  adStack_1a8 = _Var13.m128d_f64;
  adStack_198 = _Var14.m128d_f64;
  local_1f0 = 0;
  adStack_1e8 = _Var9.m128d_f64;
  if (pTVar1 != (TArray<FCachedGeometry::Section,TSizedDefaultAllocator<32>_> *)&local_200) {
    pFVar26 = (pTVar1->AllocatorInstance).Data;
    if (pFVar26 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar26);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_2->Sections).ArrayNum = 0;
    (param_2->Sections).ArrayMax = 0;
  }
  *&(param_2->LocalToWorld).Rotation.XY.m128d_f64 = _Var9.m128d_f64;
  *&(param_2->LocalToWorld).Rotation.ZW.m128d_f64 = _Var10.m128d_f64;
  *&(param_2->LocalToWorld).Translation.XY.m128d_f64 = _Var11.m128d_f64;
  *&(param_2->LocalToWorld).Translation.ZW.m128d_f64 = _Var12.m128d_f64;
  *&(param_2->LocalToWorld).Scale3D.XY.m128d_f64 = _Var13.m128d_f64;
  *&(param_2->LocalToWorld).Scale3D.ZW.m128d_f64 = _Var14.m128d_f64;
  pFVar4 = this->DynamicData;
  if ((pFVar4 != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) && (pFVar4->GPUSkinTechnique != Inline))
  {
    plVar5 = (longlong *)this->_padding_;
    uVar2 = pFVar4->LODIndex;
    uVar27 = (ulonglong)(int)uVar2;
    if ((plVar5 != (longlong *)0x0) && ((-1 < (int)uVar2 && ((int)uVar2 < (int)plVar5[1])))) {
      if (((int)uVar2 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        uVar16 = (*pcVar8)();
        return (bool)uVar16;
      }
      lVar6 = *(longlong *)(*plVar5 + uVar27 * 8);
      uVar17 = 0;
      if ((int)uVar2 < (this->LODs).ArrayNum) {
        uVar17 = ~uVar2 >> 0x1f;
      }
      uVar3 = *(uint *)(lVar6 + 0x18);
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        uVar16 = (*pcVar8)();
        return (bool)uVar16;
      }
      lVar23 = uVar27 * 0xb0;
      if (*(uint *)((this->LODs).AllocatorInstance.Data + lVar23 + 0x20) == uVar3) {
        FGPUSkinCache::AddAsyncComputeWait(param_1);
        uVar28 = 0;
        uVar17 = uVar2;
        if (uVar3 != 0) {
          do {
            piVar24 = &(param_2->Sections).ArrayMax;
            iVar18 = (param_2->Sections).ArrayNum;
            if (iVar18 == *piVar24) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x870,&pTVar1->AllocatorInstance,piVar24);
            }
            (param_2->Sections).ArrayNum = iVar18 + 1;
            pFVar26 = (pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 0x70;
            DefaultConstructItems<FCachedGeometry::Section,int>(pFVar26,1);
            if ((FGPUSkinCacheEntry *)this->_padding_ == (FGPUSkinCacheEntry *)0x0) {
              uVar17 = 0;
              if ((int)uVar27 < (this->LODs).ArrayNum) {
                uVar17 = ~uVar2 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar8 = (code *)swi(3);
                uVar16 = (*pcVar8)();
                return (bool)uVar16;
              }
              pFVar7 = (this->LODs).AllocatorInstance.Data;
              if (*(longlong *)(pFVar7 + lVar23 + 0x60) == 0) {
                (param_2->Sections).ArrayNum = 0;
                if (-1 < (param_2->Sections).ArrayMax) {
                  return false;
                }
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x70,8,0,&pTVar1->AllocatorInstance,0,&(param_2->Sections).ArrayMax);
                return false;
              }
              lVar25 = *(longlong *)(pFVar7 + lVar23 + 0x80);
              *(longlong *)(pFVar26 + 0x18) = lVar25;
              lVar22 = *(longlong *)(pFVar7 + lVar23 + 0x88);
              if (*(longlong *)(pFVar7 + lVar23 + 0x88) == 0) {
                lVar22 = lVar25;
              }
              *(longlong *)(pFVar26 + 0x20) = lVar22;
LAB_148646203:
              if ((*(longlong *)(lVar6 + 0x28) == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IndexBuffer != 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                      ,0x56,L""), bVar15)) {
                pcVar8 = (code *)swi(3);
                uVar16 = (*pcVar8)();
                return (bool)uVar16;
              }
              *(undefined8 *)(pFVar26 + 0x38) = *(undefined8 *)(*(longlong *)(lVar6 + 0x28) + 0x28);
              if ((*(longlong *)(lVar6 + 0x28) == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IndexBuffer != 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                      ,0x56,L""), bVar15)) {
                pcVar8 = (code *)swi(3);
                uVar16 = (*pcVar8)();
                return (bool)uVar16;
              }
              uVar19 = (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x50))();
              *(undefined4 *)(pFVar26 + 0x5c) = uVar19;
              *(undefined4 *)(pFVar26 + 0x58) = *(undefined4 *)(lVar6 + 300);
              *(undefined8 *)(pFVar26 + 0x30) = *(undefined8 *)(lVar6 + 0xb8);
              *(undefined4 *)(pFVar26 + 0x40) = 0;
              *(undefined4 *)(pFVar26 + 0x44) = *(undefined4 *)(lVar6 + 0xd8);
              uVar17 = 0;
              if ((int)uVar28 < *(int *)(lVar6 + 0x18)) {
                uVar17 = ~uVar28 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar8 = (code *)swi(3);
                uVar16 = (*pcVar8)();
                return (bool)uVar16;
              }
              lVar25 = (longlong)(int)uVar28 * 0x118 + *(longlong *)(lVar6 + 0x10);
              *(int *)(pFVar26 + 100) = (int)uVar27;
              *(uint *)(pFVar26 + 0x60) = uVar28;
              *(undefined4 *)(pFVar26 + 0x48) = *(undefined4 *)(lVar25 + 8);
              *(undefined4 *)(pFVar26 + 0x4c) = *(undefined4 *)(lVar25 + 0x48);
              *(undefined4 *)(pFVar26 + 0x54) = *(undefined4 *)(lVar25 + 4);
              *(undefined4 *)(pFVar26 + 0x50) = *(undefined4 *)(lVar25 + 0x10);
            }
            else {
              pFVar20 = FGPUSkinCache::GetPositionBuffer
                                  (param_1,(FGPUSkinCacheEntry *)this->_padding_,uVar28);
              if ((pFVar20 != (FRWBuffer *)0x0) &&
                 ((pFVar20->SRV).Reference != (FRHIShaderResourceView *)0x0)) {
                pFVar21 = FGPUSkinCache::GetPreviousPositionBuffer
                                    (param_1,(FGPUSkinCacheEntry *)this->_padding_,uVar28);
                *(FRHIShaderResourceView **)(pFVar26 + 0x18) = (pFVar20->SRV).Reference;
                if (pFVar21 == (FRWBuffer *)0x0) {
                  pFVar21 = pFVar20;
                }
                *(FRHIShaderResourceView **)(pFVar26 + 0x20) = (pFVar21->SRV).Reference;
                pFVar20 = FGPUSkinCache::GetTangentBuffer
                                    (param_1,(FGPUSkinCacheEntry *)this->_padding_,uVar28);
                if (pFVar20 == (FRWBuffer *)0x0) {
                  uVar27 = (ulonglong)uVar2;
                  *(undefined8 *)(pFVar26 + 0x28) = 0;
                }
                else {
                  uVar27 = (ulonglong)uVar2;
                  *(FRHIShaderResourceView **)(pFVar26 + 0x28) = (pFVar20->SRV).Reference;
                }
                goto LAB_148646203;
              }
              uVar27 = (ulonglong)uVar2;
              *(undefined8 *)pFVar26 = 0;
              *(undefined8 *)(pFVar26 + 8) = 0;
              *(undefined8 *)(pFVar26 + 0x10) = 0;
              *(undefined8 *)(pFVar26 + 0x18) = 0;
              *(undefined8 *)(pFVar26 + 0x20) = 0;
              *(undefined8 *)(pFVar26 + 0x28) = 0;
              *(undefined8 *)(pFVar26 + 0x30) = 0;
              *(undefined8 *)(pFVar26 + 0x38) = 0;
              *(undefined8 *)(pFVar26 + 0x40) = 0;
              *(undefined8 *)(pFVar26 + 0x48) = 0;
              *(undefined4 *)(pFVar26 + 0x50) = 0;
              *(undefined4 *)(pFVar26 + 0x54) = 0;
              *(undefined4 *)(pFVar26 + 0x58) = 0;
              *(undefined4 *)(pFVar26 + 0x5c) = 0;
              *(undefined8 *)(pFVar26 + 0x60) = 0xffffffff00000000;
              *(undefined8 *)(pFVar26 + 0x68) = 0;
              *(uint *)(pFVar26 + 0x60) = uVar28;
            }
            uVar17 = (uint)uVar27;
            uVar28 = uVar28 + 1;
          } while (uVar28 < uVar3);
        }
        param_2->LODIndex = uVar17;
        pFVar4 = this->DynamicData;
        if (pFVar4 == (FDynamicSkelMeshObjectDataGPUSkin *)0x0) {
          local_188.M[3][0]._0_4_ = 0;
          local_188.M[3][0]._4_4_ = 0;
          local_188.M[3][1]._0_4_ = 0;
          local_188.M[3][1]._4_4_ = 0;
          local_188.M[0][0] = 0.0;
          local_188.M[0][1] = 0.0;
          local_188.M[0][2] = 0.0;
          local_188.M[0][3] = 0.0;
          local_188.M[1][0] = 0.0;
          local_188.M[1][1] = 0.0;
          local_188.M[1][2] = 0.0;
          local_188.M[1][3] = 0.0;
          local_188.M[2][0] = 0.0;
          local_188.M[2][1] = 0.0;
          local_188.M[2][2] = 0.0;
          local_188.M[2][3] = 0.0;
          local_188.M[3][2] = 0.0;
          local_188.M[3][3] = 0.0;
        }
        else {
          local_188.M[0][2] = (pFVar4->LocalToWorld).M[0][2];
          local_188.M[0][3] = (pFVar4->LocalToWorld).M[0][3];
          local_188.M[0][0] = (pFVar4->LocalToWorld).M[0][0];
          local_188.M[0][1] = (pFVar4->LocalToWorld).M[0][1];
          local_188.M[1][2] = (pFVar4->LocalToWorld).M[1][2];
          local_188.M[1][3] = (pFVar4->LocalToWorld).M[1][3];
          local_188.M[1][0] = (pFVar4->LocalToWorld).M[1][0];
          local_188.M[1][1] = (pFVar4->LocalToWorld).M[1][1];
          local_188.M[2][2] = (pFVar4->LocalToWorld).M[2][2];
          local_188.M[2][3] = (pFVar4->LocalToWorld).M[2][3];
          local_188.M[2][0] = (pFVar4->LocalToWorld).M[2][0];
          local_188.M[2][1] = (pFVar4->LocalToWorld).M[2][1];
          local_188.M[3][2] = (pFVar4->LocalToWorld).M[3][2];
          local_188.M[3][3] = (pFVar4->LocalToWorld).M[3][3];
          local_188.M[3][0]._0_4_ = *(undefined4 *)(pFVar4->LocalToWorld).M[3];
          local_188.M[3][0]._4_4_ = *(undefined4 *)((longlong)(pFVar4->LocalToWorld).M[3] + 4);
          local_188.M[3][1]._0_4_ = *(undefined4 *)((pFVar4->LocalToWorld).M[3] + 1);
          local_188.M[3][1]._4_4_ = *(undefined4 *)((longlong)(pFVar4->LocalToWorld).M[3] + 0xc);
        }
        UE::Math::TTransform<double>::SetFromMatrix(local_108,&local_188);
        (param_2->LocalToWorld).Rotation.XY.m128d_f64[0] = local_108[0].Rotation.XY.m128d_f64[0];
        (param_2->LocalToWorld).Rotation.XY.m128d_f64[1] = local_108[0].Rotation.XY.m128d_f64[1];
        (param_2->LocalToWorld).Rotation.ZW.m128d_f64[0] = local_108[0].Rotation.ZW.m128d_f64[0];
        (param_2->LocalToWorld).Rotation.ZW.m128d_f64[1] = local_108[0].Rotation.ZW.m128d_f64[1];
        (param_2->LocalToWorld).Translation.XY.m128d_f64[0] =
             local_108[0].Translation.XY.m128d_f64[0];
        (param_2->LocalToWorld).Translation.XY.m128d_f64[1] =
             local_108[0].Translation.XY.m128d_f64[1];
        (param_2->LocalToWorld).Translation.ZW.m128d_f64[0] =
             local_108[0].Translation.ZW.m128d_f64[0];
        (param_2->LocalToWorld).Translation.ZW.m128d_f64[1] =
             local_108[0].Translation.ZW.m128d_f64[1];
        (param_2->LocalToWorld).Scale3D.XY.m128d_f64[0] = local_108[0].Scale3D.XY.m128d_f64[0];
        (param_2->LocalToWorld).Scale3D.XY.m128d_f64[1] = local_108[0].Scale3D.XY.m128d_f64[1];
        (param_2->LocalToWorld).Scale3D.ZW.m128d_f64[0] = local_108[0].Scale3D.ZW.m128d_f64[0];
        (param_2->LocalToWorld).Scale3D.ZW.m128d_f64[1] = local_108[0].Scale3D.ZW.m128d_f64[1];
        return true;
      }
    }
  }
  return false;
}

// GetComponentSpaceTransforms @ 148647910

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FSkeletalMeshObjectGPUSkin::GetComponentSpaceTransforms(FSkeletalMeshObjectGPUSkin *this)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0;
  if (this->DynamicData != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) {
    pTVar1 = &this->DynamicData->MeshComponentSpaceTransforms;
  }
  return pTVar1;
}

// GetDeformerGeometry @ 1486489f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMeshDeformerGeometry * __thiscall
FSkeletalMeshObjectGPUSkin::GetDeformerGeometry(FSkeletalMeshObjectGPUSkin *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMeshDeformerGeometry *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->LODs).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMeshDeformerGeometry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMeshDeformerGeometry *)
         ((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 0xb0 + 0x50);
}

// GetDynamicBoundsStartOffset @ 148648c10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FSkeletalMeshObjectGPUSkin::GetDynamicBoundsStartOffset
          (FSkeletalMeshObjectGPUSkin *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->LODs).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 0xb0 + 0xa4);
}

// GetGPUSkinTechnique @ 14864b180

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ESkeletalMeshGPUSkinTechnique __thiscall
FSkeletalMeshObjectGPUSkin::GetGPUSkinTechnique(FSkeletalMeshObjectGPUSkin *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ESkeletalMeshGPUSkinTechnique EVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->LODs).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return (ESkeletalMeshGPUSkinTechnique)
         (this->LODs).AllocatorInstance.Data[(longlong)param_1 * 0xb0 + 0xa0];
}

// GetLOD @ 14864b3c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FSkeletalMeshObjectGPUSkin::GetLOD(FSkeletalMeshObjectGPUSkin *this)

{
  if (this->DynamicData != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) {
    return this->DynamicData->LODIndex;
  }
  return 0;
}

// GetPrevReferenceToLocalMatrices @ 14864c990

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArrayView<UE::Math::TMatrix<float>_const_,int> * __thiscall
FSkeletalMeshObjectGPUSkin::GetPrevReferenceToLocalMatrices
          (FSkeletalMeshObjectGPUSkin *this,
          TArrayView<UE::Math::TMatrix<float>_const_,int> *__return_storage_ptr__)

{
  FDynamicSkelMeshObjectDataGPUSkin *pFVar1;
  
  pFVar1 = this->DynamicData;
  if (1 < pFVar1->RevisionNumber - pFVar1->PreviousRevisionNumber) {
    TArrayView<UE::Math::TMatrix<float>_const_,int>::
    TArrayView<UE::Math::TMatrix<float>_const_,int><TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
              (__return_storage_ptr__,&pFVar1->ReferenceToLocal);
    return __return_storage_ptr__;
  }
  TArrayView<UE::Math::TMatrix<float>_const_,int>::
  TArrayView<UE::Math::TMatrix<float>_const_,int><TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,&pFVar1->PreviousReferenceToLocal);
  return __return_storage_ptr__;
}

// GetRayTracingDynamicVertexBuffer @ 14864cdb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRWBuffer * __thiscall
FSkeletalMeshObjectGPUSkin::GetRayTracingDynamicVertexBuffer(FSkeletalMeshObjectGPUSkin *this)

{
  FRWBuffer *pFVar1;
  
  pFVar1 = &this->RayTracingDynamicVertexBuffer;
  if ((this->RayTracingDynamicVertexBuffer).NumBytes == 0) {
    pFVar1 = (FRWBuffer *)0x0;
  }
  return pFVar1;
}

// GetRayTracingGeometry @ 14864cdf0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRayTracingGeometry * __thiscall
FSkeletalMeshObjectGPUSkin::GetRayTracingGeometry(FSkeletalMeshObjectGPUSkin *this)

{
  bool bVar1;
  
  bVar1 = FRayTracingGeometry::HasValidInitializer(&this->RayTracingGeometry);
  if ((bVar1) && ((int)(this->RayTracingGeometry)._padding_ != -1)) {
    return &this->RayTracingGeometry;
  }
  return (FRayTracingGeometry *)0x0;
}

// GetRayTracingGeometry @ 14864ce40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRayTracingGeometry * __thiscall
FSkeletalMeshObjectGPUSkin::GetRayTracingGeometry(FSkeletalMeshObjectGPUSkin *this)

{
  bool bVar1;
  
  bVar1 = FRayTracingGeometry::HasValidInitializer(&this->RayTracingGeometry);
  if ((bVar1) && ((int)(this->RayTracingGeometry)._padding_ != -1)) {
    return &this->RayTracingGeometry;
  }
  return (FRayTracingGeometry *)0x0;
}

// GetRayTracingLOD @ 14864cf00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FSkeletalMeshObjectGPUSkin::GetRayTracingLOD(FSkeletalMeshObjectGPUSkin *this)

{
  if (this->DynamicData != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) {
    return this->DynamicData->RayTracingLODIndex;
  }
  return 0;
}

// GetReferenceToLocalMatrices @ 14864d090

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArrayView<UE::Math::TMatrix<float>_const_,int> * __thiscall
FSkeletalMeshObjectGPUSkin::GetReferenceToLocalMatrices
          (FSkeletalMeshObjectGPUSkin *this,
          TArrayView<UE::Math::TMatrix<float>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TMatrix<float>_const_,int> *pTVar4;
  
  iVar1 = (this->DynamicData->ReferenceToLocal).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TMatrix<float> *)(this->DynamicData->ReferenceToLocal).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::Math::TMatrix<float>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetResourceSizeEx @ 14864d790

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::GetResourceSizeEx
          (FSkeletalMeshObjectGPUSkin *this,FResourceSizeEx *param_1)

{
  FDynamicSkelMeshObjectDataGPUSkin *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  uint uVar9;
  longlong lVar10;
  
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x208);
  pFVar1 = this->DynamicData;
  if (pFVar1 != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) {
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x310);
    FResourceSizeEx::AddUnknownMemoryBytes
              (param_1,(longlong)(pFVar1->ReferenceToLocal).ArrayMax << 6);
    uVar9 = *(uint *)&(pFVar1->ActiveMorphTargets).field_0x48;
    if (uVar9 < 2) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)(int)uVar9 << 2;
    }
    FResourceSizeEx::AddUnknownMemoryBytes
              (param_1,lVar10 + (ulonglong)
                                ((*(int *)&(pFVar1->ActiveMorphTargets).field_0x2c + 0x1fU >> 5) <<
                                2) +
                       (longlong)*(int *)&(pFVar1->ActiveMorphTargets).field_0xc * 0x18);
  }
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)(this->LODs).ArrayMax * 0xb0);
  uVar9 = 0;
  if (0 < (this->LODs).ArrayNum) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->LODs).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
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
      pFVar2 = (this->LODs).AllocatorInstance.Data;
      lVar3 = *(longlong *)(pFVar2 + lVar10 + 0x10);
      uVar7 = FMorphVertexBuffer::GetResourceSize((FMorphVertexBuffer *)(lVar3 + 0x10));
      uVar8 = FMorphVertexBuffer::GetResourceSize((FMorphVertexBuffer *)(lVar3 + 0x78));
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,uVar8 + 0xf8 + uVar7);
      FResourceSizeEx::AddUnknownMemoryBytes
                (param_1,(longlong)*(int *)(pFVar2 + lVar10 + 0x24) << 3);
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0xb0;
    } while ((int)uVar9 < (this->LODs).ArrayNum);
  }
  return;
}

// GetSkinVertexFactory @ 14864e920

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FVertexFactory * __thiscall
FSkeletalMeshObjectGPUSkin::GetSkinVertexFactory
          (FSkeletalMeshObjectGPUSkin *this,FSceneView *param_1,int param_2,int param_3,
          ESkinVertexFactoryMode param_4)

{
  ESkeletalMeshGPUSkinTechnique EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FVertexFactory *pFVar7;
  FGPUBaseSkinVertexFactory *pFVar8;
  IConsoleManager *pIVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar6 = 0;
  if (param_2 < (this->LODs).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FVertexFactory *)(*pcVar3)();
    return pFVar7;
  }
  EVar1 = this->DynamicData->GPUSkinTechnique;
  pFVar2 = (this->LODs).AllocatorInstance.Data;
  if (EVar1 != MeshDeformer) {
    if (param_4 == RayTracing) {
      cVar5 = (**(code **)(this->_padding_ + 0xf0))(this);
      lVar11 = 0x58;
      lVar10 = 0x58;
      if (cVar5 == '\0') {
        lVar10 = 0x50;
      }
      if ((*(longlong *)((longlong)&this->_padding_ + lVar10) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetSkinCacheEntryForRayTracing()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                             ,0x76c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FVertexFactory *)(*pcVar3)();
        return pFVar7;
      }
      cVar5 = (**(code **)(this->_padding_ + 0xf0))(this);
      if (cVar5 == '\0') {
        lVar11 = 0x50;
      }
      bVar4 = FGPUSkinCache::IsEntryValid
                        (*(FGPUSkinCacheEntry **)((longlong)&this->_padding_ + lVar11),param_3);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FGPUSkinCache::IsEntryValid(GetSkinCacheEntryForRayTracing(), ChunkIdx)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                             ,0x76d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FVertexFactory *)(*pcVar3)();
        return pFVar7;
      }
    }
    else if ((EVar1 != GPUSkinCache) ||
            (bVar4 = FGPUSkinCache::IsEntryValid((FGPUSkinCacheEntry *)this->_padding_,param_3),
            !bVar4)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pIVar9 = IConsoleManager::Get();
        ::CVar = (IConsoleVariable *)
                 (**(code **)((longlong)*pIVar9 + 0xc0))
                           (pIVar9,L"r.SkinCache.SkipCompilingGPUSkinVF",1);
        _Init_thread_footer(&::_TSS0);
      }
      if ((((int)this->_padding_ == 1) || (::CVar == (IConsoleVariable *)0x0)) ||
         (cVar5 = (**(code **)(*(longlong *)::CVar + 0xc0))(), cVar5 != '\x01')) {
        pFVar8 = GetBaseSkinVertexFactory(this,param_2,param_3);
        return (FVertexFactory *)pFVar8;
      }
      if (3 < (byte)LogSkeletalMesh._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
        return *(FVertexFactory **)(pFVar2 + (longlong)param_2 * 0xb0 + 0x28);
      }
    }
  }
  return *(FVertexFactory **)(pFVar2 + (longlong)param_2 * 0xb0 + 0x28);
}

// GetSkinWeightVertexBuffer @ 14864ed20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinWeightVertexBuffer * __thiscall
FSkeletalMeshObjectGPUSkin::GetSkinWeightVertexBuffer(FSkeletalMeshObjectGPUSkin *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSkinWeightVertexBuffer *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->LODs).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSkinWeightVertexBuffer *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSkinWeightVertexBuffer **)
          ((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 0xb0 + 0x40);
}

// GetStaticSkinVertexFactory @ 14864fb20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FVertexFactory * __thiscall
FSkeletalMeshObjectGPUSkin::GetStaticSkinVertexFactory
          (FSkeletalMeshObjectGPUSkin *this,int param_1,int param_2,ESkinVertexFactoryMode param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FVertexFactory *pFVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < (this->LODs).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVertexFactory *)(*pcVar2)();
    return pFVar4;
  }
  pFVar1 = (this->LODs).AllocatorInstance.Data;
  if ((pFVar1[(longlong)param_1 * 0xb0 + 0xa0] == (FScriptContainerElement)0x0) &&
     (param_3 != RayTracing)) {
    uVar5 = 0;
    if (param_2 < *(int *)(pFVar1 + (longlong)param_1 * 0xb0 + 0x20)) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVertexFactory *)(*pcVar2)();
      return pFVar4;
    }
    pFVar4 = *(FVertexFactory **)
              (*(longlong *)(pFVar1 + (longlong)param_1 * 0xb0 + 0x18) + (longlong)param_2 * 8);
    if (((pFVar4 != (FVertexFactory *)0x0) &&
        (*(longlong *)(pFVar4[1].Streams.AllocatorInstance.InlineData + 0x40) == 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexFactory == nullptr || VertexFactory->IsReadyForStaticMeshCaching()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                           ,0x793,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVertexFactory *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    pFVar4 = *(FVertexFactory **)(pFVar1 + (longlong)param_1 * 0xb0 + 0x28);
  }
  return pFVar4;
}

// GetTransform @ 1486502c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TMatrix<double> * __thiscall
FSkeletalMeshObjectGPUSkin::GetTransform
          (FSkeletalMeshObjectGPUSkin *this,TMatrix<double> *__return_storage_ptr__)

{
  FDynamicSkelMeshObjectDataGPUSkin *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  pFVar1 = this->DynamicData;
  if (pFVar1 != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) {
    dVar2 = (pFVar1->LocalToWorld).M[0][1];
    dVar3 = (pFVar1->LocalToWorld).M[0][2];
    dVar4 = (pFVar1->LocalToWorld).M[0][3];
    __return_storage_ptr__->M[0][0] = (pFVar1->LocalToWorld).M[0][0];
    __return_storage_ptr__->M[0][1] = dVar2;
    dVar2 = (pFVar1->LocalToWorld).M[1][0];
    dVar5 = (pFVar1->LocalToWorld).M[1][1];
    __return_storage_ptr__->M[0][2] = dVar3;
    __return_storage_ptr__->M[0][3] = dVar4;
    dVar3 = (pFVar1->LocalToWorld).M[1][2];
    dVar4 = (pFVar1->LocalToWorld).M[1][3];
    __return_storage_ptr__->M[1][0] = dVar2;
    __return_storage_ptr__->M[1][1] = dVar5;
    dVar2 = (pFVar1->LocalToWorld).M[2][0];
    dVar5 = (pFVar1->LocalToWorld).M[2][1];
    __return_storage_ptr__->M[1][2] = dVar3;
    __return_storage_ptr__->M[1][3] = dVar4;
    dVar3 = (pFVar1->LocalToWorld).M[2][2];
    dVar4 = (pFVar1->LocalToWorld).M[2][3];
    __return_storage_ptr__->M[2][0] = dVar2;
    __return_storage_ptr__->M[2][1] = dVar5;
    dVar2 = (pFVar1->LocalToWorld).M[3][0];
    dVar5 = (pFVar1->LocalToWorld).M[3][1];
    __return_storage_ptr__->M[2][2] = dVar3;
    __return_storage_ptr__->M[2][3] = dVar4;
    dVar3 = (pFVar1->LocalToWorld).M[3][2];
    dVar4 = (pFVar1->LocalToWorld).M[3][3];
    __return_storage_ptr__->M[3][0] = dVar2;
    __return_storage_ptr__->M[3][1] = dVar5;
    __return_storage_ptr__->M[3][2] = dVar3;
    __return_storage_ptr__->M[3][3] = dVar4;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->M[0][0] = 0.0;
  __return_storage_ptr__->M[0][1] = 0.0;
  __return_storage_ptr__->M[0][2] = 0.0;
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][0] = 0.0;
  __return_storage_ptr__->M[1][1] = 0.0;
  __return_storage_ptr__->M[1][2] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][0] = 0.0;
  __return_storage_ptr__->M[2][1] = 0.0;
  __return_storage_ptr__->M[2][2] = 0.0;
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[3][0] = 0.0;
  __return_storage_ptr__->M[3][1] = 0.0;
  __return_storage_ptr__->M[3][2] = 0.0;
  __return_storage_ptr__->M[3][3] = 0.0;
  return __return_storage_ptr__;
}

// GetUsedVertexFactoryData @ 148650800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
FSkeletalMeshObjectGPUSkin::GetUsedVertexFactoryData
          (FSkeletalMeshRenderData *param_1,int param_2,USkinnedMeshComponent *param_3,
          FSkelMeshRenderSection *param_4,Type param_5,
          TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  FSkeletalMeshLODRenderData *pFVar3;
  code *pcVar4;
  FMorphVertexBufferPool *pFVar5;
  bool bVar6;
  uint uVar7;
  GPUSkinBoneInfluenceType GVar8;
  UMeshDeformerInstance *pUVar9;
  FMorphVertexBufferPool *pFVar10;
  FMorphVertexBufferPool *pFVar11;
  FPSOPrecacheVertexFactoryData *pFVar12;
  EShaderPlatform EVar13;
  uint uVar14;
  FVertexFactoryType *pFVar15;
  FSkelMeshComponentLODInfo *pFVar16;
  char cVar17;
  char cVar18;
  undefined1 auStackY_5a8 [32];
  FPSOPrecacheVertexFactoryData local_550;
  FSkeletalMeshRenderData *local_538;
  int local_530;
  Type local_52c;
  FMorphVertexBufferPool *local_528;
  TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_> *pTStack_520;
  undefined8 local_518;
  undefined8 *local_510;
  FSkinWeightVertexBuffer *local_500;
  undefined8 local_4f8;
  FColorVertexBuffer *pFStack_4f0;
  FMeshDeformerGeometry local_4e8;
  char local_498;
  undefined4 local_494;
  undefined4 local_490;
  FVertexFactoryBuffers local_488;
  FPSOPrecacheVertexFactoryData local_450;
  FPSOPrecacheVertexFactoryData local_440;
  FPSOPrecacheVertexFactoryData local_430;
  FDataType local_420;
  TArray<FVertexElement,TFixedAllocator<17>_> local_348;
  TArray<FVertexElement,TFixedAllocator<17>_> local_2b8;
  TArray<FVertexElement,TFixedAllocator<17>_> local_228;
  FGPUSkinDataType local_198;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  uVar14 = (uint)~param_2 >> 0x1f;
  uVar7 = 0;
  if (param_2 < (param_1->LODRenderData).Array.ArrayNum) {
    uVar7 = uVar14;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = (longlong)param_2 * 8;
  pFVar16 = (FSkelMeshComponentLODInfo *)0x0;
  pFVar3 = *(FSkeletalMeshLODRenderData **)
            ((param_1->LODRenderData).Array.AllocatorInstance.Data + lVar2);
  if (param_3 == (USkinnedMeshComponent *)0x0) {
    cVar18 = '\0';
  }
  else {
    if ((-1 < param_2) && (param_2 < (param_3->LODInfo).ArrayNum)) {
      uVar7 = 0;
      if (param_2 < (param_3->LODInfo).ArrayNum) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (FSkelMeshComponentLODInfo *)
                ((param_3->LODInfo).AllocatorInstance.Data + (longlong)param_2 * 0x28);
    }
    cVar18 = '\0';
    pUVar9 = USkinnedMeshComponent::GetMeshDeformerInstanceForLOD(param_3,param_2);
    if (pUVar9 == (UMeshDeformerInstance *)0x0) {
      if (((GEnableGPUSkinCache != 0) &&
          (bVar6 = USkinnedMeshComponent::IsSkinCacheAllowed(param_3,param_2), bVar6)) &&
         (cVar18 = '\x01', param_5 == ES3_1)) {
        uVar7 = 0;
        if (param_2 < (param_1->LODRenderData).Array.ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        cVar18 = (uint)(*(int *)(*(longlong *)
                                  ((param_1->LODRenderData).Array.AllocatorInstance.Data + lVar2) +
                                300) * 3) < 0x10000;
      }
    }
    else {
      cVar18 = '\x02';
    }
  }
  pFVar11 = (FMorphVertexBufferPool *)0x0;
  local_528 = (FMorphVertexBufferPool *)0x0;
  pTStack_520 = (TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_> *)
                0x0;
  local_4f8 = 0;
  pFStack_4f0 = (FColorVertexBuffer *)0x0;
  local_52c = param_5;
  local_518 = 0;
  local_510 = (undefined8 *)0x0;
  local_500 = (FSkinWeightVertexBuffer *)0x0;
  local_538 = param_1;
  local_530 = param_2;
  FMeshDeformerGeometry::FMeshDeformerGeometry(&local_4e8);
  local_494 = 0xffffffff;
  local_490 = 0;
  local_498 = cVar18;
  pFVar10 = ::operator_new(0xf8);
  if (pFVar10 != (FMorphVertexBufferPool *)0x0) {
    pFVar11 = FMorphVertexBufferPool::FMorphVertexBufferPool(pFVar10,param_1,local_530,local_52c);
  }
  pFVar10 = local_528;
  pFVar5 = local_528;
  if (local_528 != pFVar11) {
    if (pFVar11 != (FMorphVertexBufferPool *)0x0) {
      LOCK();
      *(int *)&pFVar11->_padding_ = (int)pFVar11->_padding_ + 1;
      UNLOCK();
    }
    pFVar5 = pFVar11;
    if (local_528 != (FMorphVertexBufferPool *)0x0) {
      plVar1 = &local_528->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
        plVar1 = &local_528->_padding_;
        local_528 = pFVar11;
        (**(code **)*plVar1)(pFVar10,1);
        pFVar5 = local_528;
      }
    }
  }
  local_528 = pFVar5;
  local_500 = FSkeletalMeshObject::GetSkinWeightVertexBuffer(pFVar3,pFVar16);
  if (((pFVar16 == (FSkelMeshComponentLODInfo *)0x0) ||
      (pFStack_4f0 = pFVar16->OverrideVertexColors, pFStack_4f0 == (FColorVertexBuffer *)0x0)) ||
     (pFStack_4f0->NumVertices != (pFVar3->StaticVertexBuffers).PositionVertexBuffer.NumVertices)) {
    pFStack_4f0 = &(pFVar3->StaticVertexBuffers).ColorVertexBuffer;
  }
  local_488.MorphVertexBufferPool = local_528;
  local_488.APEXClothVertexBuffer = &pFVar3->ClothVertexBuffer;
  local_488.NumVertices = (pFVar3->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
  local_488.VertexOffsetVertexBuffers = (FVertexOffsetBuffers *)0x0;
  local_488.StaticVertexBuffers = &pFVar3->StaticVertexBuffers;
  local_488.SkinWeightVertexBuffer = local_500;
  local_488.ColorVertexBuffer = pFStack_4f0;
  FGPUSkinDataType::FGPUSkinDataType(&local_198);
  InitGPUSkinVertexFactoryComponents(&local_198,&local_488,(FGPUBaseSkinVertexFactory *)0x0);
  if ((cVar18 != '\0') || (bVar6 = FGPUSkinCache::IsGPUSkinCacheRayTracingSupported(), bVar6)) {
    if (((FLocalVertexFactory::StaticType.Flags & SupportsManualVertexFetch) == None) ||
       (bVar6 = FVertexFactoryType::CheckManualVertexFetchSupport(GMaxRHIFeatureLevel), !bVar6)) {
      cVar17 = '\0';
    }
    else {
      cVar17 = '\x01';
    }
    if (cVar17 == '\0') {
      local_228.ArrayNum = 0;
      local_228.ArrayMax = 0x11;
      local_420._padding_ = 0;
      local_420._padding_ = 0;
      local_420._padding_ = 0;
      local_420._padding_ = 0;
      local_420._padding_ = 0;
      local_420._padding_ = 0;
      local_420._padding_ = 0;
      local_420._padding_ = 0;
      local_420._padding_ = 0;
      local_420._padding_ = 0;
      local_420._padding_._0_4_ = 0;
      local_420._padding_._4_4_ = 4;
      local_420._padding_ = 0;
      local_420._padding_ = 0;
      local_420._padding_ = 0;
      local_420._padding_ = 0;
      local_420._padding_._0_4_ = 0xffffffff;
      local_420._padding_._4_2_ = 0xff;
      local_420.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
      local_420.PreSkinPositionComponent.StreamOffset = 0;
      local_420.PreSkinPositionComponent.Offset = '\0';
      local_420.PreSkinPositionComponent.Stride = '\0';
      local_420.PreSkinPositionComponent.Type.Value = '\0';
      local_420.PreSkinPositionComponent.VertexStreamUsage = Default;
      local_420.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
      local_420._padding_._6_1_ = cVar17;
      FStaticMeshVertexBuffers::InitComponentVF
                (&pFVar3->StaticVertexBuffers,(FLocalVertexFactory *)0x0,0,false,&local_420);
      FGPUSkinPassthroughVertexFactory::GetVertexElements
                (GMaxRHIFeatureLevel,Default,false,&local_420,&local_228);
      pFVar12 = FPSOPrecacheVertexFactoryData::FPSOPrecacheVertexFactoryData
                          (&local_430,&FLocalVertexFactory::StaticType,&local_228);
    }
    else {
      local_550.CustomDefaultVertexDeclaration = (FRHIVertexDeclaration *)0x0;
      local_550.VertexFactoryType = &FLocalVertexFactory::StaticType;
      pFVar12 = &local_550;
    }
    TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
    AddUniqueImpl<FPSOPrecacheVertexFactoryData>(param_6,pFVar12);
    if (cVar18 == '\x02') goto LAB_148650d94;
  }
  if (param_5 == Num) {
    EVar13 = SP_NumPlatforms;
  }
  else {
    EVar13 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_5];
  }
  bVar6 = FGPUBaseSkinAPEXClothVertexFactory::IsClothEnabled(EVar13);
  if ((bVar6) && (bVar6 = FSkelMeshRenderSection::HasClothingData(param_4), bVar6)) {
    local_348.ArrayNum = 0;
    local_348.ArrayMax = 0x11;
    GVar8 = FSkinWeightVertexBuffer::GetBoneInfluenceType(&pFVar3->SkinWeightVertexBuffer);
    if (GVar8 == DefaultBoneInfluence) {
      pFVar15 = &TGPUSkinAPEXClothVertexFactory<0>::StaticType;
      TGPUSkinVertexFactory<0>::GetVertexElements(param_5,Default,&local_198,&local_348);
    }
    else {
      pFVar15 = &TGPUSkinAPEXClothVertexFactory<1>::StaticType;
      TGPUSkinVertexFactory<1>::GetVertexElements(param_5,Default,&local_198,&local_348);
    }
    FPSOPrecacheVertexFactoryData::FPSOPrecacheVertexFactoryData(&local_450,pFVar15,&local_348);
    pFVar12 = &local_450;
  }
  else {
    local_2b8.ArrayNum = 0;
    local_2b8.ArrayMax = 0x11;
    GVar8 = FSkinWeightVertexBuffer::GetBoneInfluenceType(&pFVar3->SkinWeightVertexBuffer);
    if (GVar8 == DefaultBoneInfluence) {
      pFVar15 = &TGPUSkinVertexFactory<0>::StaticType;
      TGPUSkinVertexFactory<0>::GetVertexElements(param_5,Default,&local_198,&local_2b8);
    }
    else {
      pFVar15 = &TGPUSkinVertexFactory<1>::StaticType;
      TGPUSkinVertexFactory<1>::GetVertexElements(param_5,Default,&local_198,&local_2b8);
    }
    FPSOPrecacheVertexFactoryData::FPSOPrecacheVertexFactoryData(&local_440,pFVar15,&local_2b8);
    pFVar12 = &local_440;
  }
  TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FPSOPrecacheVertexFactoryData>(param_6,pFVar12);
LAB_148650d94:
  FMeshDeformerGeometry::~FMeshDeformerGeometry(&local_4e8);
  if (local_510 != (undefined8 *)0x0) {
    (**(code **)*local_510)(local_510,1);
  }
  DestructItems<TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_>,int>
            (pTStack_520,(int)local_518);
  if (pTStack_520 !=
      (TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_> *)0x0) {
    FMemory::Free(pTStack_520);
  }
  if (local_528 != (FMorphVertexBufferPool *)0x0) {
    plVar1 = &local_528->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)local_528->_padding_)(local_528,1);
    }
  }
  return;
}

// HaveValidDynamicData @ 148651b40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FSkeletalMeshObjectGPUSkin::HaveValidDynamicData(FSkeletalMeshObjectGPUSkin *this)

{
  return this->DynamicData != (FDynamicSkelMeshObjectDataGPUSkin *)0x0;
}

// InitMorphResources @ 148654dd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSkeletalMeshObjectGPUSkin::InitMorphResources(FSkeletalMeshObjectGPUSkin *this)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  
  if (this->bMorphResourcesInitialized == false) {
    uVar8 = 0;
    if (0 < (this->LODs).ArrayNum) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this->LODs).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar9 = (this->LODs).AllocatorInstance.Data + lVar10;
        uVar7 = *(uint *)(pFVar9 + 8);
        plVar1 = *(longlong **)pFVar9;
        uVar6 = 0;
        if ((int)uVar7 < (int)plVar1[1]) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)(*(longlong *)(*plVar1 + (longlong)(int)uVar7 * 8) + 300) != 0) {
          uVar7 = 0;
          if ((int)uVar8 < (int)this->_padding_) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((*(longlong *)pFVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("SkelMeshRenderData",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                                 ,0x9cc,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((*(int *)(pFVar9 + 8) < 0) ||
              (*(int *)(*(longlong *)pFVar9 + 8) <= *(int *)(pFVar9 + 8))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("SkelMeshRenderData->LODRenderData.IsValidIndex(LODIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                                 ,0x9cd,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar7 = *(uint *)(pFVar9 + 8);
          plVar1 = *(longlong **)pFVar9;
          uVar6 = 0;
          if ((int)uVar7 < (int)plVar1[1]) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)(pFVar9 + 0x10);
          uVar3 = *(undefined8 *)(*(longlong *)(*plVar1 + (longlong)(int)uVar7 * 8) + 0x290);
          if (*(char *)(lVar2 + 0xe0) == '\0') {
            if ((*(longlong *)(lVar2 + 0x30) != 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!MorphVertexBuffers[0].VertexBufferRHI.IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                                   ,0xe8,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((*(longlong *)(lVar2 + 0x98) != 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!MorphVertexBuffers[1].VertexBufferRHI.IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                                   ,0xe9,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(undefined8 *)(lVar2 + 0x18) = uVar3;
            BeginInitResource((FRenderResource *)(lVar2 + 0x10),&UE::RenderCommandPipe::SkeletalMesh
                             );
            if (*(char *)(lVar2 + 0xe1) != '\0') {
              *(undefined8 *)(lVar2 + 0x80) = uVar3;
              BeginInitResource((FRenderResource *)(lVar2 + 0x78),
                                &UE::RenderCommandPipe::SkeletalMesh);
            }
            *(undefined1 *)(lVar2 + 0xe0) = 1;
          }
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0xb0;
      } while ((int)uVar8 < (this->LODs).ArrayNum);
    }
    this->bMorphResourcesInitialized = true;
  }
  return;
}

// InitResources @ 1486565f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::InitResources
          (FSkeletalMeshObjectGPUSkin *this,FSkinnedMeshSceneProxyDesc *param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  EVertexAttributeFlags EVar5;
  uint uVar6;
  longlong lVar7;
  FGPUSkinCache *pFVar8;
  FSkelMeshComponentLODInfo *pFVar9;
  UMeshDeformerInstance *pUVar10;
  EVertexAttributeFlags EVar11;
  uint uVar12;
  EVertexAttributeFlags EVar13;
  longlong lVar14;
  FSkeletalMeshObjectLOD *this_00;
  FSkeletalMeshUpdateHandle local_38;
  
  if ((longlong *)param_1->_padding_ != (longlong *)0x0) {
    lVar7 = (**(code **)(*(longlong *)param_1->_padding_ + 0x460))();
    if (lVar7 != 0) {
      if ((FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketGPUSkin>::Instance ==
           (TBackend<FSkeletalMeshUpdatePacketGPUSkin> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Instance",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.h"
                             ,0x260,L"Skeletal mesh backend instance was not instantiated."), bVar4)
         ) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar12 = *(uint *)&FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketGPUSkin>::
                         Instance->field_0x18;
      uVar6 = 0;
      if ((int)uVar12 < *(int *)(lVar7 + 0x20)) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FSkeletalMeshUpdateChannel::Create
                ((FSkeletalMeshUpdateChannel *)
                 ((longlong)(int)uVar12 * 0x88 + *(longlong *)(lVar7 + 0x18)),&local_38,
                 (FSkeletalMeshObject *)this);
      (this->UpdateHandle).Channel = local_38.Channel;
      (this->UpdateHandle).Index = local_38.Index;
      local_38.Index = 0xffffffff;
      local_38.Channel = (FSkeletalMeshUpdateChannel *)0x0;
    }
    pFVar8 = (FGPUSkinCache *)(**(code **)(*(longlong *)param_1->_padding_ + 0x458))();
    this->GPUSkinCache = pFVar8;
  }
  uVar12 = 0;
  if (0 < (this->LODs).ArrayNum) {
    lVar7 = 0;
    lVar14 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar12 < (this->LODs).ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = (FSkeletalMeshObjectLOD *)((this->LODs).AllocatorInstance.Data + lVar14);
      pFVar1 = this_00->SkelMeshRenderData;
      if (((pFVar1 != (FSkeletalMeshRenderData *)0x0) && (-1 < (int)uVar12)) &&
         ((int)uVar12 < (pFVar1->LODRenderData).Array.ArrayNum)) {
        if (((int)uVar12 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)(*(longlong *)((pFVar1->LODRenderData).Array.AllocatorInstance.Data + lVar7) +
                    300) != 0) {
          uVar6 = 0;
          if ((int)uVar12 < (int)this->_padding_) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if ((uVar6 == 0) &&
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
          lVar2 = this->_padding_;
          if ((int)uVar12 < (param_1->LODInfo).ArrayNum) {
            pFVar9 = TArrayView<FSkelMeshComponentLODInfo_const_,int>::operator[]
                               (&param_1->LODInfo,uVar12);
          }
          else {
            pFVar9 = (FSkelMeshComponentLODInfo *)0x0;
          }
          if (this_00->GPUSkinTechnique == MeshDeformer) {
            pUVar10 = FSkinnedMeshSceneProxyDesc::GetMeshDeformerInstanceForLOD(param_1,uVar12);
            EVar5 = (**(code **)(*(longlong *)pUVar10 + 0x2c8))(pUVar10);
            EVar11 = EVar5 & Position | Color;
            if ((EVar5 & Color) == None) {
              EVar11 = EVar5 & Position;
            }
            EVar13 = EVar11 | Tangent;
            if ((EVar5 & Tangent) == None) {
              EVar13 = EVar11;
            }
          }
          else if ((this_00->GPUSkinTechnique == GPUSkinCache) ||
                  ((bVar4 = FGPUSkinCache::IsGPUSkinCacheRayTracingSupported(), EVar13 = None, bVar4
                   && (this_00->SkelMeshRenderData->bSupportRayTracing != false)))) {
            EVar13 = Tangent|Position;
          }
          FSkeletalMeshObjectLOD::InitResources
                    (this_00,this->GPUSkinCache,
                     (FSkelMeshObjectLODInfo *)((longlong)(int)uVar12 * 0x20 + lVar2),pFVar9,
                     (Type)this->_padding_,EVar13);
        }
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0xb0;
      lVar7 = lVar7 + 8;
    } while ((int)uVar12 < (this->LODs).ArrayNum);
  }
  bVar4 = IsRayTracingEnabled();
  if ((bVar4) && (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
    BeginInitResource((FRenderResource *)&this->RayTracingGeometry,
                      &UE::RenderCommandPipe::SkeletalMesh);
    return;
  }
  return;
}

// IsExternalMorphSetActive @ 148659960

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FSkeletalMeshObjectGPUSkin::IsExternalMorphSetActive
          (FSkeletalMeshObjectGPUSkin *this,int param_1,FExternalMorphSet *param_2)

{
  FDynamicSkelMeshObjectDataGPUSkin *pFVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  pFVar1 = this->DynamicData;
  if (*(int *)&(pFVar1->ExternalMorphWeightData).MorphSets.field_0x8 !=
      *(int *)&(pFVar1->ExternalMorphWeightData).MorphSets.field_0x34) {
    puVar5 = *(undefined1 **)&(pFVar1->ExternalMorphWeightData).MorphSets.field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(pFVar1->ExternalMorphWeightData).MorphSets.field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(pFVar1->ExternalMorphWeightData).MorphSets.field_0x48 - 1U
                              & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar2 * 0x30 +
                        *(longlong *)&(pFVar1->ExternalMorphWeightData).MorphSets);
        if (*piVar3 == param_1) {
          piVar4 = piVar3 + 2;
          if (piVar3 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 == (int *)0x0) {
            return false;
          }
          if (piVar4[4] != (param_2->MorphBuffers).BatchesPerMorph.ArrayNum) {
            return false;
          }
          if (piVar4[6] < 1) {
            return false;
          }
          return true;
        }
        iVar2 = piVar3[10];
      } while (iVar2 != -1);
    }
  }
  return false;
}

// IsGPUSkinMesh @ 148659a20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FSkeletalMeshObjectGPUSkin::IsGPUSkinMesh(FSkeletalMeshObjectGPUSkin *this)

{
  return true;
}

// IsRayTracingSkinCacheUpdateNeeded @ 148659d20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FSkeletalMeshObjectGPUSkin::IsRayTracingSkinCacheUpdateNeeded(FSkeletalMeshObjectGPUSkin *this)

{
  int iVar1;
  int iVar2;
  
  if ((this->DynamicData->RayTracingLODIndex != -1) &&
     (this->DynamicData->GPUSkinTechnique != MeshDeformer)) {
    iVar1 = (**(code **)(this->_padding_ + 0xa0))();
    iVar2 = (**(code **)(this->_padding_ + 0xe8))(this);
    if ((iVar1 != iVar2) && (*(char *)(this->_padding_ + 0x1e) != '\0')) {
      return true;
    }
  }
  return false;
}

// IsSkinCacheEnabled @ 148659f50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FSkeletalMeshObjectGPUSkin::IsSkinCacheEnabled
          (FSkeletalMeshObjectGPUSkin *this,EGPUSkinCacheEntryMode param_1)

{
  ESkeletalMeshGPUSkinTechnique EVar1;
  
  if ((GEnableGPUSkinCache != 0) &&
     ((EVar1 = this->DynamicData->GPUSkinTechnique, EVar1 == GPUSkinCache ||
      ((EVar1 == Inline && (param_1 == RayTracing)))))) {
    return true;
  }
  return false;
}

// ProcessUpdatedDynamicData @ 14865c450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::ProcessUpdatedDynamicData
          (FSkeletalMeshObjectGPUSkin *this,FRHICommandList *param_1,EGPUSkinCacheEntryMode param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  Type TVar8;
  EPreviousBoneTransformUpdateMode EVar9;
  uint uVar10;
  FDynamicSkelMeshObjectDataGPUSkin *pFVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FGPUBaseSkinVertexFactory *this_00;
  undefined1 *puVar14;
  FGPUSkinCache *this_01;
  code *pcVar15;
  double dVar16;
  float afVar17 [4];
  float afVar18 [4];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  byte bVar26;
  bool bVar27;
  EShaderPlatform EVar28;
  longlong lVar29;
  TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *pTVar30;
  FMorphVertexBuffer *pFVar31;
  FScriptContainerElement *pFVar32;
  longlong lVar33;
  uint *puVar34;
  TMatrix<float> *pTVar35;
  int iVar36;
  uint uVar37;
  longlong *plVar38;
  FScriptContainerElement *pFVar39;
  undefined1 *puVar40;
  ForElementType<FGPUSkinCache::FProcessEntrySection> FVar41;
  uint *puVar42;
  uint uVar43;
  ClothShaderType *this_02;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  double dVar50;
  double dVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  float afVar59 [4];
  undefined1 auStackY_5a8 [32];
  longlong local_570;
  uint local_560;
  longlong local_538;
  FName local_518 [2];
  TVector<float> *local_508;
  uint uStack_500;
  undefined4 uStack_4fc;
  TVector<float> *local_4f8;
  uint uStack_4f0;
  undefined4 uStack_4ec;
  FProcessEntryInputs local_4e8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_488;
  TArrayView<UE::Math::TVector<float>_const_,int> local_478;
  undefined8 local_468;
  undefined8 uStack_460;
  double local_458;
  double dStack_450;
  FGPUBaseSkinVertexFactory *local_448;
  FScriptContainerElement *pFStack_440;
  uint local_438;
  undefined4 uStack_434;
  uint *puStack_430;
  ForElementType<FGPUSkinCache::FProcessEntrySection> local_3e8;
  int local_d8;
  int local_d4 [3];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  pFVar11 = this->DynamicData;
  lVar29 = 0x7c;
  if (param_2 != RayTracing) {
    lVar29 = 0x78;
  }
  uVar4 = *(uint *)(&pFVar11->field_0x0 + lVar29);
  uVar5 = pFVar11->BoneTransformFrameNumber;
  uVar6 = pFVar11->RevisionNumber;
  uVar43 = 0;
  if ((int)uVar4 < (this->LODs).ArrayNum) {
    uVar43 = ~uVar4 >> 0x1f;
  }
  if ((uVar43 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  plVar38 = (longlong *)this->_padding_;
  pFVar12 = (this->LODs).AllocatorInstance.Data;
  lVar29 = (longlong)(int)uVar4 * 0xb0;
  uVar43 = 0;
  if ((int)uVar4 < (int)plVar38[1]) {
    uVar43 = ~uVar4 >> 0x1f;
  }
  if ((uVar43 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar13 = *(longlong *)(*plVar38 + (longlong)(int)uVar4 * 8);
  pTVar30 = FSkeletalMeshObject::GetRenderSections((FSkeletalMeshObject *)this,uVar4);
  FSkeletalMeshObject::GetAssetPathName((FSkeletalMeshObject *)this,(int)local_518);
  pFVar11 = this->DynamicData;
  iVar7 = pFVar11->NumWeightedActiveMorphTargets;
  if (((pFVar11->ExternalMorphWeightData).NumActiveMorphTargets < 1) ||
     (bVar24 = true,
     *(int *)&(pFVar11->ExternalMorphWeightData).MorphSets.field_0x8 ==
     *(int *)&(pFVar11->ExternalMorphWeightData).MorphSets.field_0x34)) {
    bVar24 = false;
  }
  iVar36 = (int)this->_padding_;
  if (iVar36 == 5) {
    EVar28 = SP_NumPlatforms;
  }
  else {
    EVar28 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar36];
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar28].bContainsValidPlatformInfo == 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid(Platform)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                          ,0xe2,L""), bVar25)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  TVar8 = FGenericDataDrivenShaderPlatformInfo::Infos[EVar28].MaxFeatureLevel;
  bVar25 = false;
  local_560 = uVar6;
  if (param_2 == Raster) {
    EVar9 = this->DynamicData->PreviousBoneTransformUpdateMode;
    bVar25 = EVar9 != None;
    if (EVar9 == None) {
      local_560 = 0xffffffff;
    }
    else {
      local_560 = this->DynamicData->PreviousRevisionNumber;
    }
    if (((GEnableMorphTargets == false) || (*(int *)(lVar13 + 300) == 0)) ||
       ((iVar7 < 1 && (!bVar24)))) {
      this->MorphVertexBuffer = (FMorphVertexBuffer *)0x0;
      this->bMorphNeedsUpdate = false;
    }
    else {
      bVar26 = GForceUpdateMorphTargets != 0 | this->bMorphNeedsUpdate;
      this->bMorphNeedsUpdate = (bool)bVar26;
      if ((((bool)bVar26 != false) &&
          (lVar33 = *(longlong *)(pFVar12 + lVar29 + 0x10), *(char *)(lVar33 + 0xe1) != '\0')) &&
         (*(uint *)(lVar33 + 0xec) != uVar6)) {
        *(uint *)(lVar33 + 0xe8) = *(uint *)(lVar33 + 0xec);
        *(int *)(lVar33 + 0xe4) = 1 - *(int *)(lVar33 + 0xe4);
        *(uint *)(lVar33 + 0xec) = uVar6;
        bVar26 = this->bMorphNeedsUpdate;
      }
      pFVar31 = (FMorphVertexBuffer *)
                (*(longlong *)(pFVar12 + lVar29 + 0x10) + 0x10 +
                (ulonglong)*(uint *)(*(longlong *)(pFVar12 + lVar29 + 0x10) + 0xe4) * 0x68);
      this->MorphVertexBuffer = pFVar31;
      if (pFVar31->bHasBeenUpdated == false) {
        this->bMorphNeedsUpdate = true;
      }
      else if (bVar26 == 0) goto LAB_14865c748;
      *(uint *)(*(longlong *)(pFVar12 + lVar29 + 0x10) + 0xf0) = uVar5;
    }
  }
LAB_14865c748:
  if (((this->GPUSkinCache != (FGPUSkinCache *)0x0) && (GEnableGPUSkinCache != 0)) &&
     (this->DynamicData->GPUSkinTechnique == GPUSkinCache)) {
    local_3e8.SecondaryData = (ForElementType<FGPUSkinCache::FProcessEntrySection>)0x0;
    local_d8 = 0;
    local_d4[0] = 8;
    uVar43 = pTVar30->ArrayNum;
    if ((int)uVar43 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar43);
    }
    bVar23 = true;
    if (8 < (int)uVar43) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FGPUSkinCache::FProcessEntrySection>_>
                (0x60,0x10,uVar43,&local_3e8,0,local_d4);
      bVar23 = true;
    }
    goto LAB_14865c87e;
  }
  bVar23 = false;
  if (param_2 == Raster) {
    plVar38 = &this->_padding_;
    if (this->_padding_ != 0) goto LAB_14865c806;
  }
  else {
    if ((param_2 != RayTracing) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mode == EGPUSkinCacheEntryMode::RayTracing",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                            ,0x3f9,L""), bVar27)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    plVar38 = &this->_padding_;
    if (this->_padding_ == 0) {
      local_d4[0] = 8;
      local_3e8.SecondaryData = (ForElementType<FGPUSkinCache::FProcessEntrySection>)0x0;
      local_d8 = 0;
      goto LAB_14865c87e;
    }
LAB_14865c806:
    FGPUSkinCache::Release((FGPUSkinCacheEntry **)plVar38);
  }
  local_3e8.SecondaryData = (ForElementType<FGPUSkinCache::FProcessEntrySection>)0x0;
  local_d8 = 0;
  local_d4[0] = 8;
  bVar23 = false;
LAB_14865c87e:
  uVar43 = 0;
  iVar36 = pTVar30->ArrayNum;
  if (0 < iVar36) {
    local_570 = 0;
    local_538 = 0;
    do {
      uVar37 = 0;
      if ((int)uVar43 < iVar36) {
        uVar37 = ~uVar43 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar32 = (pTVar30->AllocatorInstance).Data + local_538;
      if ((*(int *)(pFVar32 + 8) != 0) && (pFVar32[0x110] == (FScriptContainerElement)0x0)) {
        uVar37 = 0;
        if ((int)uVar43 < *(int *)(pFVar12 + lVar29 + 0x20)) {
          uVar37 = ~uVar43 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        this_00 = *(FGPUBaseSkinVertexFactory **)
                   (*(longlong *)(pFVar12 + lVar29 + 0x18) + local_570 * 8);
        if ((this_00 == (FGPUBaseSkinVertexFactory *)0x0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("VertexFactory != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                                ,0x413,L""), bVar27)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        uVar37 = local_560;
        if (local_560 == 0xffffffff) {
          uVar37 = (this_00->ShaderData).CurrentRevisionNumber;
        }
        (this_00->ShaderData).PreviousRevisionNumber = uVar37;
        uVar37 = 1 - (this_00->ShaderData).CurrentBuffer;
        (this_00->ShaderData).CurrentRevisionNumber = uVar6;
        (this_00->ShaderData).UpdatedFrameNumber = (ulonglong)uVar5;
        (this_00->ShaderData).CurrentBuffer = uVar37;
        if (bVar25) {
          FGPUBaseSkinVertexFactory::FShaderDataType::AllocateBoneBuffer
                    (param_1,this_00->BoneBufferSize,
                     (this_00->ShaderData).BoneBuffer.Elements + ((ulonglong)uVar37 ^ 1));
        }
        FGPUBaseSkinVertexFactory::FShaderDataType::AllocateBoneBuffer
                  (param_1,this_00->BoneBufferSize,
                   (this_00->ShaderData).BoneBuffer.Elements + (this_00->ShaderData).CurrentBuffer);
        lVar33 = (**(code **)(this_00->_padding_ + 0x68))(this_00);
        this_02 = (ClothShaderType *)0x0;
        if ((GEnableCloth == false) || (lVar33 == 0)) {
          bVar27 = false;
        }
        else {
          bVar27 = true;
        }
        if (((param_2 != Raster) || (this->MorphVertexBuffer == (FMorphVertexBuffer *)0x0)) ||
           (bVar27)) {
LAB_14865caf2:
          FGPUBaseSkinVertexFactory::UpdateMorphState(this_00,(FRHICommandListBase *)param_1,false);
          fVar49 = UE::Math::TMatrix<float>::Identity.M[3][3];
          fVar46 = UE::Math::TMatrix<float>::Identity.M[3][2];
          fVar55 = UE::Math::TMatrix<float>::Identity.M[3][1];
          fVar54 = UE::Math::TMatrix<float>::Identity.M[3][0];
          afVar59 = UE::Math::TMatrix<float>::Identity.M[2];
          fVar48 = UE::Math::TMatrix<float>::Identity.M[1][3];
          fVar45 = UE::Math::TMatrix<float>::Identity.M[1][2];
          fVar57 = UE::Math::TMatrix<float>::Identity.M[1][1];
          fVar56 = UE::Math::TMatrix<float>::Identity.M[1][0];
          fVar47 = UE::Math::TMatrix<float>::Identity.M[0][3];
          fVar44 = UE::Math::TMatrix<float>::Identity.M[0][2];
          fVar53 = UE::Math::TMatrix<float>::Identity.M[0][1];
          fVar52 = UE::Math::TMatrix<float>::Identity.M[0][0];
          if (!bVar27) goto LAB_14865cbe3;
          pFVar11 = this->DynamicData;
          this_02 = (ClothShaderType *)(lVar33 + 0x10);
          puVar42 = (uint *)0x0;
          if (*(int *)&(pFVar11->ClothingSimData).field_0x8 !=
              *(int *)&(pFVar11->ClothingSimData).field_0x34) {
            puVar14 = *(undefined1 **)&(pFVar11->ClothingSimData).field_0x40;
            puVar40 = &(pFVar11->ClothingSimData).field_0x38;
            if (puVar14 != (undefined1 *)0x0) {
              puVar40 = puVar14;
            }
            uVar37 = *(uint *)(puVar40 +
                              (ulonglong)
                              (*(int *)&(pFVar11->ClothingSimData).field_0x48 - 1U &
                              (int)*(short *)(pFVar32 + 0x50)) * 4);
            puVar42 = (uint *)0x0;
            if (uVar37 != 0xffffffff) {
              do {
                puVar34 = (uint *)((longlong)(int)uVar37 * 0x110 +
                                  *(longlong *)&pFVar11->ClothingSimData);
                if (*puVar34 == (int)*(short *)(pFVar32 + 0x50)) {
                  puVar42 = puVar34 + 4;
                  if (puVar34 == (uint *)0x0) {
                    puVar42 = (uint *)0x0;
                  }
                  bVar27 = true;
                  if (puVar42 == (uint *)0x0) goto LAB_14865cce6;
                  if ((int)uVar4 < (int)puVar42[0x38]) {
                    puVar42 = (uint *)0x0;
                  }
                  break;
                }
                uVar37 = puVar34[0x40];
              } while (uVar37 != 0xffffffff);
            }
          }
          bVar27 = puVar42 == (uint *)0x0;
LAB_14865cce6:
          *(bool *)(lVar33 + 0x24) = !bVar27;
          if (puVar42 == (uint *)0x0) goto LAB_14865cbe8;
          local_458 = *(double *)(puVar42 + 0x24);
          dStack_450 = *(double *)(puVar42 + 0x26);
          dVar16 = *(double *)(puVar42 + 0x20);
          dVar22 = *(double *)(puVar42 + 0x22);
          dVar21 = dVar22 + dVar22;
          dVar51 = local_458 + local_458;
          dVar19 = dVar16 * (dVar16 + dVar16);
          auVar58 = blendpd(*(undefined1 (*) [16])(puVar42 + 0x30),
                            *(undefined1 (*) [16])(puVar42 + 0x34),2);
          dVar50 = dVar21 * *(double *)(puVar42 + 0x20);
          local_468 = *(undefined8 *)(puVar42 + 0x20);
          uStack_460 = *(undefined8 *)(puVar42 + 0x22);
          dVar16 = dStack_450 * (dVar16 + dVar16);
          dVar20 = *(double *)(puVar42 + 0x20) * dVar51;
          fVar44 = (float)(auVar58._0_8_ * (dVar20 - dVar21 * dStack_450));
          fVar47 = 0.0;
          fVar52 = (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                           (local_458 * dVar51 + dVar22 * dVar21)) * *(double *)(puVar42 + 0x30));
          fVar53 = (float)((dStack_450 * dVar51 + dVar50) * *(double *)(puVar42 + 0x30));
          fVar45 = (float)((dVar16 + dVar51 * *(double *)(puVar42 + 0x22)) *
                          *(double *)(puVar42 + 0x32));
          fVar48 = 0.0;
          fVar56 = (float)(SUB168(*(undefined1 (*) [16])(puVar42 + 0x30),8) *
                          (dVar50 - dStack_450 * dVar51));
          fVar57 = (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
                           (local_458 * dVar51 + dVar19)) * *(double *)(puVar42 + 0x32));
          afVar59[0] = (float)((dVar21 * dStack_450 + dVar20) * *(double *)(puVar42 + 0x34));
          afVar59[1] = (float)(*(double *)(puVar42 + 0x34) *
                              (dVar51 * *(double *)(puVar42 + 0x22) - dVar16));
          fVar54 = (float)*(double *)(puVar42 + 0x28);
          fVar55 = (float)*(double *)(puVar42 + 0x2a);
          afVar59[2] = (float)((GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] -
                               (dVar19 + dVar22 * dVar21)) * *(double *)(puVar42 + 0x34));
          afVar59[3] = 0.0;
          fVar46 = (float)*(double *)(puVar42 + 0x2c);
          fVar49 = (float)GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
          if (bVar23) goto LAB_14865cbf3;
          this_02->ClothBlendWeight = this->DynamicData->ClothBlendWeight;
          dVar16 = (double)this->_padding_;
          dVar19 = (double)this->_padding_;
          *(float *)(lVar33 + 0x14) = (float)(double)this->_padding_;
          *(float *)(lVar33 + 0x18) = (float)dVar16;
          *(float *)(lVar33 + 0x1c) = (float)dVar19;
          local_508 = *(TVector<float> **)(puVar42 + 4);
          uVar37 = puVar42[6];
          if (((int)uVar37 < 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar27)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          local_4f8 = *(TVector<float> **)puVar42;
          uVar10 = puVar42[2];
          uStack_500 = uVar37;
          if (((int)uVar10 < 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar27)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          local_488._12_4_ = uStack_4fc;
          local_488.ArrayNum = uStack_500;
          local_478._12_4_ = uStack_4ec;
          local_478.ArrayNum = uVar10;
          local_478.DataPtr = local_4f8;
          local_488.DataPtr = local_508;
          uStack_4f0 = uVar10;
          FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::UpdateClothSimulationData
                    (this_02,param_1,&local_478,&local_488,uVar6,local_518);
          pTVar35 = FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::GetClothToLocalForWriting
                              (this_02);
          afVar17[1] = fVar53;
          afVar17[0] = fVar52;
          afVar17[2] = fVar44;
          afVar17[3] = 0.0;
          pTVar35->M[0] = afVar17;
          afVar18[1] = fVar57;
          afVar18[0] = fVar56;
          afVar18[2] = fVar45;
          afVar18[3] = 0.0;
          pTVar35->M[1] = afVar18;
          pTVar35->M[2] = afVar59;
          pTVar35->M[3][0] = fVar54;
          pTVar35->M[3][1] = fVar55;
          pTVar35->M[3][2] = fVar46;
          pTVar35->M[3][3] = fVar49;
        }
        else {
          if (!bVar24) {
            if (0 < iVar7) {
              pFVar39 = (this->DynamicData->SectionIdsUseByActiveMorphTargets).AllocatorInstance.
                        Data;
              pFVar1 = pFVar39 + (longlong)
                                 (this->DynamicData->SectionIdsUseByActiveMorphTargets).ArrayNum * 4
              ;
              for (; pFVar39 != pFVar1; pFVar39 = pFVar39 + 4) {
                if (*(uint *)pFVar39 == uVar43) goto LAB_14865cbb5;
              }
            }
            goto LAB_14865caf2;
          }
LAB_14865cbb5:
          FGPUBaseSkinVertexFactory::UpdateMorphState(this_00,(FRHICommandListBase *)param_1,true);
LAB_14865cbe3:
          puVar42 = (uint *)0x0;
          fVar52 = UE::Math::TMatrix<float>::Identity.M[0][0];
          fVar53 = UE::Math::TMatrix<float>::Identity.M[0][1];
          fVar44 = UE::Math::TMatrix<float>::Identity.M[0][2];
          fVar47 = UE::Math::TMatrix<float>::Identity.M[0][3];
          fVar54 = UE::Math::TMatrix<float>::Identity.M[3][0];
          fVar55 = UE::Math::TMatrix<float>::Identity.M[3][1];
          fVar46 = UE::Math::TMatrix<float>::Identity.M[3][2];
          fVar49 = UE::Math::TMatrix<float>::Identity.M[3][3];
          fVar56 = UE::Math::TMatrix<float>::Identity.M[1][0];
          fVar57 = UE::Math::TMatrix<float>::Identity.M[1][1];
          fVar45 = UE::Math::TMatrix<float>::Identity.M[1][2];
          fVar48 = UE::Math::TMatrix<float>::Identity.M[1][3];
          afVar59 = UE::Math::TMatrix<float>::Identity.M[2];
LAB_14865cbe8:
          if (bVar23) {
LAB_14865cbf3:
            local_448 = this_00;
            pFStack_440 = pFVar32;
            local_438 = uVar43;
            puStack_430 = puVar42;
            if (local_d8 == local_d4[0]) {
              local_d8 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FGPUSkinCache::FProcessEntrySection>_>
                                   (0x1060,&local_3e8,local_d4);
            }
            FVar41 = (ForElementType<FGPUSkinCache::FProcessEntrySection>)&local_3e8;
            if (local_3e8.SecondaryData != (ForElementType<FGPUSkinCache::FProcessEntrySection>)0x0)
            {
              FVar41 = local_3e8.SecondaryData;
            }
            lVar33 = (longlong)local_d8 * 0x60;
            local_d8 = local_d8 + 1;
            *(undefined8 *)(lVar33 + (longlong)FVar41) = local_448;
            ((undefined8 *)(lVar33 + (longlong)FVar41))[1] = pFStack_440;
            puVar2 = (undefined8 *)(lVar33 + 0x10 + (longlong)FVar41);
            *puVar2 = CONCAT44(uStack_434,local_438);
            puVar2[1] = puStack_430;
            pfVar3 = (float *)(lVar33 + 0x20 + (longlong)FVar41);
            *pfVar3 = fVar52;
            pfVar3[1] = fVar53;
            pfVar3[2] = fVar44;
            pfVar3[3] = fVar47;
            pfVar3 = (float *)(lVar33 + 0x30 + (longlong)FVar41);
            *pfVar3 = fVar56;
            pfVar3[1] = fVar57;
            pfVar3[2] = fVar45;
            pfVar3[3] = fVar48;
            *(float (*) [4])(lVar33 + 0x40 + (longlong)FVar41) = afVar59;
            pfVar3 = (float *)(lVar33 + 0x50 + (longlong)FVar41);
            *pfVar3 = fVar54;
            pfVar3[1] = fVar55;
            pfVar3[2] = fVar46;
            pfVar3[3] = fVar49;
          }
        }
        if (((param_2 == Raster) && (this->DynamicData->GPUSkinTechnique != MeshDeformer)) &&
           (!bVar23)) {
          if ((this_00->UniformBuffer).Reference == (FRHIUniformBuffer *)0x0) {
            FGPUBaseSkinVertexFactory::UpdateUniformBuffer(this_00,(FRHICommandListBase *)param_1);
          }
          else {
            this_00->bUniformBufferDirty = true;
          }
          if ((puVar42 != (uint *)0x0) && (TVar8 != ES3_1)) {
            this_02->bDoubleBuffer = true;
          }
        }
      }
      local_570 = local_570 + 1;
      local_538 = local_538 + 0x118;
      uVar43 = uVar43 + 1;
      iVar36 = pTVar30->ArrayNum;
    } while ((int)uVar43 < iVar36);
  }
  iVar7 = local_d8;
  if (local_d8 != 0) {
    plVar38 = &this->_padding_;
    if (param_2 != RayTracing) {
      plVar38 = &this->_padding_;
    }
    this_01 = this->GPUSkinCache;
    local_4e8.Sections.DataPtr = (FProcessEntrySection *)&local_3e8;
    if (local_3e8.SecondaryData != (ForElementType<FGPUSkinCache::FProcessEntrySection>)0x0) {
      local_4e8.Sections.DataPtr = (FProcessEntrySection *)local_3e8.SecondaryData;
    }
    local_4e8.Mode = param_2;
    if ((local_d8 < 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar24)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    local_4e8.Sections.ArrayNum = iVar7;
    local_4e8.ClothWorldScale.field0_0x0._s_0.X = (float)(double)this->_padding_;
    local_4e8.TargetVertexFactory = *(FGPUSkinPassthroughVertexFactory **)(pFVar12 + lVar29 + 0x28);
    local_4e8.MorphVertexBuffer = this->MorphVertexBuffer;
    local_4e8.ClothVertexBuffer = (FSkeletalMeshVertexClothBuffer *)(lVar13 + 0x230);
    local_4e8.ClothWorldScale.field0_0x0._s_0.Y = (float)(double)this->_padding_;
    local_4e8.ClothWorldScale.field0_0x0._s_0.Z = (float)(double)this->_padding_;
    local_4e8.ClothBlendWeight = this->DynamicData->ClothBlendWeight;
    local_4e8.bRecreating = this->DynamicData->bRecreating;
    local_4e8.Skin = (FSkeletalMeshObject *)this;
    local_4e8.CurrentRevisionNumber = uVar6;
    local_4e8.LODIndex = uVar4;
    FGPUSkinCache::ProcessEntry(this_01,param_1,&local_4e8,(FGPUSkinCacheEntry **)plVar38);
  }
  if (param_2 == Raster) {
    if (((((this->MorphVertexBuffer != (FMorphVertexBuffer *)0x0) &&
          (lVar29 = *(longlong *)(pFVar12 + lVar29 + 0x10), *(char *)(lVar29 + 0xe1) == '\0')) &&
         (TVar8 != ES3_1)) && ((!bVar23 && (this->DynamicData->GPUSkinTechnique != MeshDeformer))))
       && (*(undefined1 *)(lVar29 + 0xe1) = 1, *(longlong *)(lVar29 + 0x98) == 0)) {
      FRenderResource::InitResource
                ((FRenderResource *)(lVar29 + 0x78),(FRHICommandListBase *)param_1);
    }
    *(undefined1 *)((longlong)&this->_padding_ + 6) = 1;
  }
  if (local_3e8.SecondaryData != (ForElementType<FGPUSkinCache::FProcessEntrySection>)0x0) {
    FMemory::Free((void *)local_3e8.SecondaryData);
  }
  return;
}

// RefreshClothingTransforms @ 14865e580

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::RefreshClothingTransforms
          (FSkeletalMeshObjectGPUSkin *this,TMatrix<double> *param_1,uint param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  FDynamicSkelMeshObjectDataGPUSkin *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 *puVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float afVar12 [4];
  float afVar13 [4];
  float afVar14 [4];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  bool bVar33;
  TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *pTVar34;
  longlong lVar35;
  uint *puVar36;
  TMatrix<float> *pTVar37;
  uint *puVar38;
  double *pdVar39;
  undefined1 *puVar40;
  undefined1 (*pauVar41) [16];
  uint uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  uint uVar45;
  uint uVar46;
  uint *puVar47;
  ulonglong uVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  
  pFVar5 = this->DynamicData;
  if ((pFVar5 != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) &&
     (0 < *(int *)&(pFVar5->ClothingSimData).field_0x8 -
          *(int *)&(pFVar5->ClothingSimData).field_0x34)) {
    uVar3 = pFVar5->LODIndex;
    uVar42 = 0;
    if ((int)uVar3 < (this->LODs).ArrayNum) {
      uVar42 = ~uVar3 >> 0x1f;
    }
    if ((uVar42 == 0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar6 = (this->LODs).AllocatorInstance.Data;
    pTVar34 = FSkeletalMeshObject::GetRenderSections
                        ((FSkeletalMeshObject *)this,this->DynamicData->LODIndex);
    dVar1 = param_1->M[0][1];
    uVar43 = 0;
    pFVar5 = this->DynamicData;
    iVar4 = pTVar34->ArrayNum;
    (pFVar5->ClothObjectLocalToWorld).M[0][0] = param_1->M[0][0];
    (pFVar5->ClothObjectLocalToWorld).M[0][1] = dVar1;
    dVar1 = param_1->M[0][3];
    (pFVar5->ClothObjectLocalToWorld).M[0][2] = param_1->M[0][2];
    (pFVar5->ClothObjectLocalToWorld).M[0][3] = dVar1;
    dVar1 = param_1->M[1][1];
    (pFVar5->ClothObjectLocalToWorld).M[1][0] = param_1->M[1][0];
    (pFVar5->ClothObjectLocalToWorld).M[1][1] = dVar1;
    dVar1 = param_1->M[1][3];
    (pFVar5->ClothObjectLocalToWorld).M[1][2] = param_1->M[1][2];
    (pFVar5->ClothObjectLocalToWorld).M[1][3] = dVar1;
    dVar1 = param_1->M[2][1];
    (pFVar5->ClothObjectLocalToWorld).M[2][0] = param_1->M[2][0];
    (pFVar5->ClothObjectLocalToWorld).M[2][1] = dVar1;
    dVar1 = param_1->M[2][3];
    (pFVar5->ClothObjectLocalToWorld).M[2][2] = param_1->M[2][2];
    (pFVar5->ClothObjectLocalToWorld).M[2][3] = dVar1;
    dVar1 = param_1->M[3][1];
    (pFVar5->ClothObjectLocalToWorld).M[3][0] = param_1->M[3][0];
    (pFVar5->ClothObjectLocalToWorld).M[3][1] = dVar1;
    dVar1 = param_1->M[3][3];
    (pFVar5->ClothObjectLocalToWorld).M[3][2] = param_1->M[3][2];
    (pFVar5->ClothObjectLocalToWorld).M[3][3] = dVar1;
    uVar44 = uVar43;
    uVar48 = uVar43;
    if (0 < (longlong)iVar4) {
      do {
        uVar42 = (uint)uVar43;
        if ((-1 < (int)uVar42) &&
           ((int)uVar42 < *(int *)(pFVar6 + (longlong)(int)uVar3 * 0xb0 + 0x20))) {
          uVar45 = ~uVar42 >> 0x1f;
          uVar46 = 0;
          if ((int)uVar42 < *(int *)(pFVar6 + (longlong)(int)uVar3 * 0xb0 + 0x20)) {
            uVar46 = uVar45;
          }
          if ((uVar46 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(longlong *)(*(longlong *)(pFVar6 + (longlong)(int)uVar3 * 0xb0 + 0x18) + uVar44 * 8)
              != 0) {
            uVar46 = 0;
            if ((int)uVar42 < *(int *)(pFVar6 + (longlong)(int)uVar3 * 0xb0 + 0x20)) {
              uVar46 = uVar45;
            }
            if ((uVar46 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar35 = (**(code **)(**(longlong **)
                                    (*(longlong *)(pFVar6 + (longlong)(int)uVar3 * 0xb0 + 0x18) +
                                    uVar44 * 8) + 0x68))();
            if (lVar35 != 0) {
              uVar46 = 0;
              if ((int)uVar42 < pTVar34->ArrayNum) {
                uVar46 = uVar45;
              }
              if ((uVar46 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              puVar47 = (uint *)0x0;
              pFVar5 = this->DynamicData;
              uVar46 = (uint)*(short *)((pTVar34->AllocatorInstance).Data + uVar48 + 0x50);
              puVar36 = puVar47;
              if (*(int *)&(pFVar5->ClothingSimData).field_0x8 !=
                  *(int *)&(pFVar5->ClothingSimData).field_0x34) {
                puVar7 = *(undefined1 **)&(pFVar5->ClothingSimData).field_0x40;
                puVar40 = &(pFVar5->ClothingSimData).field_0x38;
                if (puVar7 != (undefined1 *)0x0) {
                  puVar40 = puVar7;
                }
                uVar45 = *(uint *)(puVar40 +
                                  (ulonglong)
                                  (*(int *)&(pFVar5->ClothingSimData).field_0x48 - 1U & uVar46) * 4)
                ;
                if (uVar45 != 0xffffffff) {
                  do {
                    puVar36 = (uint *)((longlong)(int)uVar45 * 0x110 +
                                      *(longlong *)&pFVar5->ClothingSimData);
                    if (*puVar36 == uVar46) break;
                    uVar45 = puVar36[0x40];
                    puVar36 = puVar47;
                  } while (uVar45 != 0xffffffff);
                }
              }
              puVar38 = puVar36 + 4;
              if (puVar36 == (uint *)0x0) {
                puVar38 = puVar47;
              }
              if (puVar38 != (uint *)0x0) {
                pdVar39 = (double *)(puVar36 + 0x24);
                pauVar41 = (undefined1 (*) [16])(puVar36 + 0x34);
                if (puVar36 == (uint *)0x0) {
                  pdVar39 = (double *)&DAT_00000080;
                  pauVar41 = (undefined1 (*) [16])&DAT_000000c0;
                }
                dVar20 = pdVar39[2];
                dVar21 = pdVar39[3];
                dVar1 = *pdVar39;
                dVar22 = pdVar39[1];
                dVar23 = pdVar39[1];
                auVar2 = *pauVar41;
                dVar19 = dVar22 + dVar22;
                dVar50 = dVar20 + dVar20;
                dVar15 = (dVar1 + dVar1) * dVar1;
                dVar49 = dVar19 * *pdVar39;
                dVar16 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0];
                dVar17 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
                dVar24 = *(double *)*pauVar41;
                dVar25 = *(double *)(*pauVar41 + 8);
                dVar11 = dVar21 * (dVar1 + dVar1);
                dVar18 = *pdVar39 * dVar50;
                auVar51 = blendpd(auVar2,pauVar41[1],2);
                dVar1 = *(double *)pauVar41[1];
                dVar26 = *(double *)*pauVar41;
                dVar27 = *(double *)(*pauVar41 + 8);
                dVar9 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
                dVar28 = *(double *)pauVar41[1];
                dVar29 = *(double *)pauVar41[1];
                pdVar39 = (double *)(puVar36 + 0x2c);
                if (puVar36 == (uint *)0x0) {
                  pdVar39 = (double *)&DAT_000000a0;
                }
                dVar30 = pdVar39[2];
                dVar31 = *pdVar39;
                dVar32 = pdVar39[1];
                dVar10 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
                pTVar37 = FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::
                          GetClothToLocalForWriting((ClothShaderType *)(lVar35 + 0x10));
                afVar12[1] = (float)((dVar21 * dVar50 + dVar49) * dVar26);
                afVar12[0] = (float)((dVar16 - (dVar50 * dVar20 + dVar19 * dVar22)) * dVar24);
                afVar12[2] = (float)(auVar51._0_8_ * (dVar18 - dVar19 * dVar21));
                afVar12[3] = 0.0;
                pTVar37->M[0] = afVar12;
                afVar14[1] = (float)((dVar17 - (dVar50 * dVar20 + dVar15)) * dVar25);
                afVar14[0] = (float)(auVar2._8_8_ * (dVar49 - dVar21 * dVar50));
                afVar14[2] = (float)((dVar11 + dVar50 * dVar23) * dVar27);
                afVar14[3] = 0.0;
                pTVar37->M[1] = afVar14;
                afVar13[1] = (float)(dVar1 * (dVar50 * dVar23 - dVar11));
                afVar13[0] = (float)((dVar19 * dVar21 + dVar18) * dVar29);
                afVar13[2] = (float)((dVar9 - (dVar15 + dVar19 * dVar22)) * dVar28);
                afVar13[3] = 0.0;
                pTVar37->M[2] = afVar13;
                pTVar37->M[3][0] = (float)dVar31;
                pTVar37->M[3][1] = (float)dVar32;
                pTVar37->M[3][2] = (float)dVar30;
                pTVar37->M[3][3] = (float)dVar10;
              }
            }
          }
        }
        uVar43 = (ulonglong)(uVar42 + 1);
        uVar44 = uVar44 + 1;
        uVar48 = uVar48 + 0x118;
      } while ((longlong)uVar44 < (longlong)iVar4);
    }
  }
  return;
}

// ReleaseResources @ 14865fa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSkeletalMeshObjectGPUSkin::ReleaseResources(FSkeletalMeshObjectGPUSkin *this)

{
  int iVar1;
  FSkeletalMeshUpdateChannel *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined ***pppuVar5;
  code **ppcVar6;
  uint uVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  code *local_88 [2];
  undefined **local_78;
  FScriptContainerElement *local_70;
  FGPUSkinCache *local_68;
  undefined ***local_60;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this_00 = (this->UpdateHandle).Channel;
  if (this_00 != (FSkeletalMeshUpdateChannel *)0x0) {
    FSkeletalMeshUpdateChannel::Release(this_00,&this->UpdateHandle);
  }
  uVar7 = 0;
  if (0 < (this->LODs).ArrayNum) {
    do {
      iVar1 = (this->LODs).ArrayNum;
      uVar4 = 0;
      if ((int)uVar7 < iVar1) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
        local_98 = (longlong)(int)uVar7;
        local_90 = (longlong)iVar1;
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
      local_68 = this->GPUSkinCache;
      local_70 = (this->LODs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0xb0;
      local_60 = (undefined ***)0x0;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources'::`2'::<lambda_1>,1,0>
                  ::_vftable_;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources'::__l2::<lambda_1>,void,FRHICommandList_&>
                    ::Call;
      FRenderCommandDispatcher::
      Enqueue<TRenderCommandTag<_FSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources_::__l2::TSTR_FSkeletalMeshObjectLOD_ReleaseResources2493>_>
                (&UE::RenderCommandPipe::SkeletalMesh,
                 (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_88);
      if (local_88[0] != (code *)0x0) {
        pppuVar5 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar5 = local_60;
        }
        (*(code *)(*pppuVar5)[2])();
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->LODs).ArrayNum);
  }
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x20,8);
  *local_30 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FSkeletalMeshObjectGPUSkin::ReleaseResources'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_30[1] = (code *)this;
  local_30[2] = (code *)&this->_padding_;
  local_30[3] = (code *)&this->_padding_;
  if (local_30 + 1 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkeletalMeshObjectGPUSkin::ReleaseResources'::__l2::<lambda_1>,void,FRHICommandList_&>
                  ::Call;
  }
  FRenderCommandDispatcher::
  Enqueue<TRenderCommandTag<_FSkeletalMeshObjectGPUSkin::ReleaseResources_::__l2::TSTR_ReleaseSkeletalMeshSkinCacheResources679>_>
            (&UE::RenderCommandPipe::SkeletalMesh,
             (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_58);
  if (local_58[0] != (code *)0x0) {
    ppcVar6 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar6 = local_30;
    }
    (**(code **)(*ppcVar6 + 0x10))();
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    BeginReleaseResource
              ((FRenderResource *)&this->RayTracingGeometry,&UE::RenderCommandPipe::SkeletalMesh);
  }
  return;
}

// SetTransform @ 148668020

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::SetTransform
          (FSkeletalMeshObjectGPUSkin *this,TMatrix<double> *param_1,uint param_2)

{
  FDynamicSkelMeshObjectDataGPUSkin *pFVar1;
  double dVar2;
  
  pFVar1 = this->DynamicData;
  if (pFVar1 != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) {
    dVar2 = param_1->M[0][1];
    (pFVar1->LocalToWorld).M[0][0] = param_1->M[0][0];
    (pFVar1->LocalToWorld).M[0][1] = dVar2;
    dVar2 = param_1->M[0][3];
    (pFVar1->LocalToWorld).M[0][2] = param_1->M[0][2];
    (pFVar1->LocalToWorld).M[0][3] = dVar2;
    dVar2 = param_1->M[1][1];
    (pFVar1->LocalToWorld).M[1][0] = param_1->M[1][0];
    (pFVar1->LocalToWorld).M[1][1] = dVar2;
    dVar2 = param_1->M[1][3];
    (pFVar1->LocalToWorld).M[1][2] = param_1->M[1][2];
    (pFVar1->LocalToWorld).M[1][3] = dVar2;
    dVar2 = param_1->M[2][1];
    (pFVar1->LocalToWorld).M[2][0] = param_1->M[2][0];
    (pFVar1->LocalToWorld).M[2][1] = dVar2;
    dVar2 = param_1->M[2][3];
    (pFVar1->LocalToWorld).M[2][2] = param_1->M[2][2];
    (pFVar1->LocalToWorld).M[2][3] = dVar2;
    dVar2 = param_1->M[3][1];
    (pFVar1->LocalToWorld).M[3][0] = param_1->M[3][0];
    (pFVar1->LocalToWorld).M[3][1] = dVar2;
    dVar2 = param_1->M[3][3];
    (pFVar1->LocalToWorld).M[3][2] = param_1->M[3][2];
    (pFVar1->LocalToWorld).M[3][3] = dVar2;
  }
  return;
}

// Update @ 14866a120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::Update
          (FSkeletalMeshObjectGPUSkin *this,int param_1,FSkinnedMeshSceneProxyDynamicData *param_2,
          FPrimitiveSceneProxy *param_3,USkinnedAsset *param_4,
          TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
          *param_5,TArray<float,TSizedDefaultAllocator<32>_> *param_6,
          EPreviousBoneTransformUpdateMode param_7,FExternalMorphWeightData *param_8)

{
  FSkeletalMeshUpdateChannel *pFVar1;
  code *pcVar2;
  bool bVar3;
  FDynamicSkelMeshObjectDataGPUSkin *this_00;
  undefined ***pppuVar4;
  undefined1 auStackY_108 [32];
  FLLMScope local_a8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> *local_a0;
  FMemScope local_98 [2];
  code *local_88 [2];
  undefined **local_78;
  FSkeletalMeshObjectGPUSkin *local_70;
  FDynamicSkelMeshObjectDataGPUSkin *local_68;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_a0 = param_6;
  FLLMScope::FLLMScope(local_a8,SkeletalMesh,false,None,Default,true);
  FMemScope::FMemScope(local_98,SkeletalMesh,true);
  if ((*(int *)&param_5->field_0x8 != *(int *)&param_5->field_0x34) ||
     (*(int *)&(param_8->MorphSets).field_0x8 != *(int *)&(param_8->MorphSets).field_0x34)) {
    InitMorphResources(this);
  }
  this_00 = TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::Acquire
                      (&TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataGPUSkin>::Pool,
                       (param_2->ComponentSpaceTransforms).ArrayNum);
  FDynamicSkelMeshObjectDataGPUSkin::InitDynamicSkelMeshObjectDataGPUSkin
            (this_00,param_2,param_3,param_4,(FSkeletalMeshRenderData *)this->_padding_,this,param_1
             ,param_5,local_a0,param_7,param_8);
  pFVar1 = (this->UpdateHandle).Channel;
  if (pFVar1 != (FSkeletalMeshUpdateChannel *)0x0) {
    if ((FBackend *)FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketGPUSkin>::Instance
        != pFVar1->Backend) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Channel->IsChannelFor<SkeletalMeshMeshDynamicDataType>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.inl"
                         ,10,L"Provided MeshDynamicData is not the correct type for this handle.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar3 = FSkeletalMeshUpdateChannel::Update
                      ((this->UpdateHandle).Channel,&this->UpdateHandle,
                       (FSkeletalMeshDynamicData *)this_00);
    if (bVar3) goto LAB_14866a2e0;
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshObjectGPUSkin::Update'::`8'::<lambda_1>,1,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSkeletalMeshObjectGPUSkin::Update'::__l8::<lambda_1>,void,FRHICommandList_&>
                ::Call;
  local_70 = this;
  local_68 = this_00;
  FRenderCommandDispatcher::
  Enqueue<TRenderCommandTag<_FSkeletalMeshObjectGPUSkin::Update_::__l8::TSTR_SkelMeshObjectUpdateDataCommand759>_>
            (&UE::RenderCommandPipe::SkeletalMesh,
             (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
LAB_14866a2e0:
  FMemScope::~FMemScope(local_98);
  FLLMScope::~FLLMScope(local_a8);
  return;
}

// UpdateBufferData @ 14866a660

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::UpdateBufferData
          (FSkeletalMeshObjectGPUSkin *this,FRHICommandList *param_1,EGPUSkinCacheEntryMode param_2)

{
  int iVar1;
  FDynamicSkelMeshObjectDataGPUSkin *pFVar2;
  TMatrix<float> *pTVar3;
  FScriptContainerElement *pFVar4;
  FGPUBaseSkinVertexFactory *this_00;
  FRHIBuffer *pFVar5;
  ushort *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  FName local_res8;
  FRHICommandListBase *local_res10;
  int local_res18;
  FScriptContainerElement *local_res20;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_cc;
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  TArrayView<UE::Math::TMatrix<float>_const_,int> local_a8;
  TArrayView<unsigned_short_const_,int> local_98;
  TArrayView<UE::Math::TMatrix<float>_const_,int> local_88;
  TArrayView<unsigned_short_const_,int> local_78 [3];
  
  lVar16 = 0x7c;
  if (param_2 != RayTracing) {
    lVar16 = 0x78;
  }
  uVar15 = *(uint *)(&this->DynamicData->field_0x0 + lVar16);
  uVar12 = 0;
  if ((int)uVar15 < (this->LODs).ArrayNum) {
    uVar12 = ~uVar15 >> 0x1f;
  }
  local_res10 = (FRHICommandListBase *)param_1;
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar14 = (this->LODs).AllocatorInstance.Data + (longlong)(int)uVar15 * 0xb0 + 0x18;
  local_res20 = pFVar14;
  pTVar11 = FSkeletalMeshObject::GetRenderSections((FSkeletalMeshObject *)this,uVar15);
  FSkeletalMeshObject::GetAssetPathName((FSkeletalMeshObject *)this,(int)&local_res8);
  pFVar2 = this->DynamicData;
  local_e8 = (FScriptContainerElement *)0x0;
  local_res18 = 0;
  iStack_e0 = 0;
  if ((param_2 != RayTracing) || (lVar16 = 0x28, pFVar2->RayTracingLODIndex == pFVar2->LODIndex)) {
    lVar16 = 0x18;
  }
  pTVar3 = *(TMatrix<float> **)(&pFVar2->field_0x0 + lVar16);
  iVar1 = *(int *)(&pFVar2->field_0x8 + lVar16);
  if ((iVar1 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (param_2 == Raster) {
    pFVar2 = this->DynamicData;
    if (pFVar2->PreviousBoneTransformUpdateMode != None) {
      iStack_e0 = (pFVar2->PreviousReferenceToLocal).ArrayNum;
      local_e8 = (pFVar2->PreviousReferenceToLocal).AllocatorInstance.Data;
      local_res18 = iStack_e0;
      if ((iStack_e0 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uStack_dc = local_a8._12_4_;
    }
    UpdateMorphVertexBuffer(this,param_1);
  }
  uVar15 = 0;
  iVar13 = pTVar11->ArrayNum;
  if (0 < iVar13) {
    lVar16 = 0;
    lVar17 = 0;
    uVar9._4_4_ = uStack_cc;
    uVar9._0_4_ = iVar1;
    uVar8._4_4_ = uStack_dc;
    uVar8._0_4_ = iStack_e0;
    do {
      uVar12 = 0;
      if ((int)uVar15 < iVar13) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (pTVar11->AllocatorInstance).Data;
      if ((*(int *)(pFVar4 + lVar17 + 8) != 0) &&
         (pFVar4[lVar17 + 0x110] == (FScriptContainerElement)0x0)) {
        uVar12 = 0;
        if ((int)uVar15 < *(int *)(pFVar14 + 8)) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_00 = *(FGPUBaseSkinVertexFactory **)(*(longlong *)pFVar14 + lVar16 * 8);
        if (iStack_e0 != 0) {
          iVar1 = *(int *)(pFVar4 + lVar17 + 0x40);
          pFVar5 = (this_00->ShaderData).BoneBuffer.Elements
                   [(ulonglong)(this_00->ShaderData).CurrentBuffer ^ 1].VertexBufferRHI.Reference;
          puVar6 = *(ushort **)(pFVar4 + lVar17 + 0x38);
          if ((iVar1 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          param_1 = (FRHICommandList *)local_res10;
          local_98._12_4_ = uStack_bc;
          local_98.ArrayNum = iVar1;
          local_88.DataPtr = (TMatrix<float> *)local_e8;
          local_98.DataPtr = puVar6;
          local_88._8_8_ = uVar8;
          FGPUBaseSkinVertexFactory::FShaderDataType::UpdateBoneData
                    ((FRHICommandList *)local_res10,&local_res8,&local_88,&local_98,pFVar5);
        }
        iVar1 = *(int *)(pFVar4 + lVar17 + 0x40);
        pFVar5 = (this_00->ShaderData).BoneBuffer.Elements[(this_00->ShaderData).CurrentBuffer].
                 VertexBufferRHI.Reference;
        puVar6 = *(ushort **)(pFVar4 + lVar17 + 0x38);
        if ((iVar1 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_78[0]._12_4_ = uStack_ac;
        local_78[0].ArrayNum = iVar1;
        local_a8.DataPtr = pTVar3;
        local_a8._8_8_ = uVar9;
        local_78[0].DataPtr = puVar6;
        FGPUBaseSkinVertexFactory::FShaderDataType::UpdateBoneData
                  (param_1,&local_res8,&local_a8,local_78,pFVar5);
        pFVar14 = local_res20;
        if ((this_00->UniformBuffer).Reference != (FRHIUniformBuffer *)0x0) {
          FGPUBaseSkinVertexFactory::UpdateUniformBuffer(this_00,(FRHICommandListBase *)param_1);
          pFVar14 = local_res20;
        }
      }
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 1;
      lVar17 = lVar17 + 0x118;
      iVar13 = pTVar11->ArrayNum;
      iStack_e0 = local_res18;
    } while ((int)uVar15 < iVar13);
  }
  return;
}

// UpdateDynamicData_RenderThread @ 14866b730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::UpdateDynamicData_RenderThread
          (FSkeletalMeshObjectGPUSkin *this,FRHICommandList *param_1,
          FDynamicSkelMeshObjectDataGPUSkin *param_2)

{
  int *piVar1;
  FDynamicSkelMeshObjectDataGPUSkin *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FRHICommandList *pFVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_GPUSkinUpdateRTTime> FVar12;
  FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataGPUSkin,0,1> *this_00;
  longlong *plVar13;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  bool bVar17;
  undefined1 auStackY_1d8 [32];
  FColor_u_0 local_178 [2];
  LARGE_INTEGER local_170;
  FName local_168;
  FName local_160;
  FRHICommandList *local_150;
  FStatMessage local_148;
  FRayTracingGeometryInitializer local_138;
  FName local_c8 [2];
  FRHIBuffer *local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined4 local_a4;
  ERayTracingGeometryInitializerType local_a0;
  FRayTracingGeometrySegment *local_98;
  undefined8 local_90;
  FResourceArrayUploadInterface *local_88;
  uint local_80 [6];
  FRHIRayTracingGeometry *local_68;
  FDebugName local_60;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  bVar17 = -1 < CpuChannel->Enabled;
  local_150 = param_1;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId815,"GPUSkin::UpdateDynamicData_RT",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
               ,0x32f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId815);
  }
  FVar12 = StatPtr_STAT_GPUSkinUpdateRTTime;
  if (StatPtr_STAT_GPUSkinUpdateRTTime == (FThreadSafeStaticStat<FStat_STAT_GPUSkinUpdateRTTime>)0x0
     ) {
    pFVar11 = ::FName::FName(local_c8,"STAT_GPUSkinUpdateRTTime");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_GPUSkinUpdateRTTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSkinUpdateRTTime,*pFVar11,
                        L"Update GPU Skin","STATGROUP_SceneUpdate","STATCAT_Advanced",
                        L"Scene Update",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar4 = false;
  bVar6 = false;
  local_160.ComparisonIndex.Value = 0;
  local_160.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_168.ComparisonIndex.Value = FVar15.Value;
        local_168.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_168,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                   ,0x331);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_170.s.LowPart = FVar15.Value;
      local_170.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar5 = true;
      goto LAB_14866b8d6;
    }
  }
  bVar5 = false;
  FVar16 = local_160;
LAB_14866b8d6:
  if ((param_2 == (FDynamicSkelMeshObjectDataGPUSkin *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDynamicData != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                         ,0x332,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = this->DynamicData;
  if ((((pFVar2 == (FDynamicSkelMeshObjectDataGPUSkin *)0x0) ||
       (0 < (param_2->ExternalMorphWeightData).NumActiveMorphTargets)) ||
      (pFVar2->LODIndex != param_2->LODIndex)) ||
     (bVar8 = FDynamicSkelMeshObjectDataGPUSkin::ActiveMorphTargetsEqual
                        (pFVar2,&param_2->ActiveMorphTargets,&param_2->MorphTargetWeights), !bVar8))
  {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  pFVar2 = this->DynamicData;
  this->bMorphNeedsUpdate = bVar8;
  if (pFVar2 != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) {
    iVar10 = FDynamicSkelMeshObjectDataGPUSkin::Reset(pFVar2);
    *(int *)&pFVar2->field_0x14 = iVar10;
    LOCK();
    TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataGPUSkin>::Pool.NumFreeBytes =
         TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataGPUSkin>::Pool.NumFreeBytes +
         (longlong)iVar10;
    UNLOCK();
    FSkeletalMeshDynamicDataPool::AddStatsMemory
              ((FSkeletalMeshDynamicDataPool *)
               &TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataGPUSkin>::Pool,
               *(int *)&pFVar2->field_0x10,iVar10);
    this_00 = (FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataGPUSkin,0,1> *)
              TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket
                        (*(int *)&pFVar2->field_0x10);
    FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataGPUSkin,0,1>::Push(this_00,pFVar2);
  }
  pFVar7 = local_150;
  this->DynamicData = param_2;
  ProcessUpdatedDynamicData(this,local_150,Raster);
  UpdateBufferData(this,pFVar7,Raster);
  if (((this->GPUSkinCache == (FGPUSkinCache *)0x0) || (GEnableGPUSkinCache == 0)) ||
     ((bVar8 = FGPUSkinCache::IsGPUSkinCacheRayTracingSupported(), !bVar8 ||
      (bVar8 = IsRayTracingSkinCacheUpdateNeeded(this), !bVar8)))) {
    FGPUSkinCache::Release((FGPUSkinCacheEntry **)&this->_padding_);
  }
  else {
    ProcessUpdatedDynamicData(this,pFVar7,RayTracing);
    UpdateBufferData(this,pFVar7,RayTracing);
  }
  cVar9 = (**(code **)(this->_padding_ + 0xf0))(this);
  plVar13 = &this->_padding_;
  if (cVar9 == '\0') {
    plVar13 = &this->_padding_;
  }
  if ((*plVar13 == 0) && (this->DynamicData->GPUSkinTechnique != MeshDeformer)) {
    (**(code **)((this->RayTracingGeometry)._padding_ + 0x10))(&this->RayTracingGeometry);
    local_a4 = 0x10000;
    local_b8 = (FRHIBuffer *)0x0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = Rendering;
    local_98 = (FRayTracingGeometrySegment *)0x0;
    local_90 = 0;
    local_88 = (FResourceArrayUploadInterface *)0x0;
    local_68 = (FRHIRayTracingGeometry *)0x0;
    local_80[0] = 0xffffffff;
    local_80[1] = 0xffffffff;
    local_80[2] = 0xffffffff;
    local_80[3] = 0xffffffff;
    local_80[4] = 0xffffffff;
    local_80[5] = 0xffffffff;
    FDebugName::FDebugName(&local_60);
    local_138.IndexBuffer.Reference = local_b8;
    local_138.IndexBufferOffset = (uint)local_b0;
    local_138.GeometryType = local_b0._4_4_;
    local_138.TotalPrimitiveCount = local_a8;
    local_138.bFastBuild = (bool)(undefined1)local_a4;
    local_138.bAllowUpdate = (bool)local_a4._1_1_;
    local_138.bAllowCompaction = (bool)local_a4._2_1_;
    local_138.bTemplate = (bool)local_a4._3_1_;
    local_138.Type = local_a0;
    local_138.Segments.AllocatorInstance.Data = (FScriptContainerElement *)local_98;
    local_138.Segments.ArrayNum = (int)local_90;
    local_138.Segments.ArrayMax = local_90._4_4_;
    local_138.OfflineData = local_88;
    local_138.SourceGeometry = local_68;
    local_138.DebugName.Number = local_60.Number;
    local_138.OfflineDataHeader.Reserved[0] = local_80[0];
    local_138.OfflineDataHeader.Reserved[1] = local_80[1];
    local_138.OfflineDataHeader.Reserved[2] = local_80[2];
    local_138.OfflineDataHeader.Reserved[3] = local_80[3];
    local_138.OwnerName.ComparisonIndex.Value = 0;
    local_138.OwnerName.Number = 0;
    local_54 = 0;
    local_b8 = (FRHIBuffer *)0x0;
    local_98 = (FRayTracingGeometrySegment *)0x0;
    local_90 = 0;
    local_138.OfflineDataHeader.Reserved[4] = local_80[4];
    local_138.OfflineDataHeader.Reserved[5] = local_80[5];
    local_138.DebugName.Name = local_60.Name;
    FRayTracingGeometry::SetInitializer(&this->RayTracingGeometry,&local_138);
    DestructItems<FRayTracingGeometrySegment,int>(local_98,(int)local_90);
    if (local_98 != (FRayTracingGeometrySegment *)0x0) {
      FMemory::Free(local_98);
    }
    if (local_b8 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_b8);
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_148.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_148.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_170);
      local_148.StatData.Pad[4] = '\0';
      local_148.StatData.Pad[5] = '\0';
      local_148.StatData.Pad[6] = '\0';
      local_148.StatData.Pad[7] = '\0';
      local_148.StatData.Pad[0] = local_170.s.LowPart._0_1_;
      local_148.StatData.Pad[1] = local_170.s.LowPart._1_1_;
      local_148.StatData.Pad[2] = local_170.s.LowPart._2_1_;
      local_148.StatData.Pad[3] = local_170.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_148);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateMorphVertexBuffer @ 14866d360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::UpdateMorphVertexBuffer
          (FSkeletalMeshObjectGPUSkin *this,FRHICommandList *param_1)

{
  int *piVar1;
  TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
  *pTVar2;
  ulonglong uVar3;
  FMorphVertexBuffer *pFVar4;
  longlong *plVar5;
  FDynamicSkelMeshObjectDataGPUSkin *pFVar6;
  undefined1 *puVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
  *pTVar12;
  bool bVar13;
  uint uVar14;
  atomic<unsigned_int> aVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_MorphVertexBuffer_ApplyDelta> FVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint *puVar18;
  FRHIBreadcrumbAllocator *pFVar19;
  FRHIBreadcrumbNode *pFVar20;
  longlong lVar21;
  undefined1 *puVar22;
  int iVar23;
  FName FVar24;
  uint *puVar25;
  uint uVar26;
  longlong lVar27;
  int iVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  uint uVar30;
  undefined1 local_res8 [8];
  FRHICommandList *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  int local_2a0;
  FColor_u_0 local_29c;
  TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
  *local_298;
  TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
  *local_290;
  undefined8 uStack_288;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_280;
  uint uStack_278;
  int iStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  int local_268;
  undefined4 uStack_264;
  FName local_260;
  FSkeletalMeshObjectLOD *local_258;
  FName local_250;
  TIntVector4<unsigned_int>_u_0 local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_230;
  int local_210;
  int local_20c;
  int local_208;
  LARGE_INTEGER local_200;
  FName local_1f8;
  FName local_1f0;
  TBitArray<FDefaultBitArrayAllocator> *local_1e8;
  FStatMessage local_1e0;
  TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
  *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
  *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  FRHITransitionInfo local_170;
  FRHITransitionInfo local_140;
  char *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  wchar_t *pwStack_f8;
  TVector4<double>_u_0 local_e8;
  TVector4<double>_u_0 local_c8;
  FName local_a8;
  FRHIBreadcrumbScope local_a0;
  undefined1 local_90;
  FMetadataSerializer local_88;
  undefined4 local_4c;
  
  pFVar4 = this->MorphVertexBuffer;
  if (pFVar4 == (FMorphVertexBuffer *)0x0) {
    return;
  }
  local_res10 = param_1;
  if (this->bMorphNeedsUpdate == false) {
    if ((pFVar4->bNeedsInitialClear != false) &&
       ((pFVar4->UAVValue).Reference != (FRHIUnorderedAccessView *)0x0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        uStack_108 = 0x5d1;
        local_110 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
        ;
        local_100 = 0;
        pwStack_f8 = L"MorphInitialClear";
        ::Desc._padding_ = (longlong)u_MorphInitialCle;
        ::Desc._padding_._0_4_ = 0x51b27c40;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_._0_4_ = 0x5d1;
        ::Desc._padding_._4_4_ = uStack_104;
        ::Desc._padding_ = 0;
        ::Desc._padding_ = (longlong)u_MorphInitialCle;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``FSkeletalMeshObjectGPUSkin::UpdateMorphVertexBuffer'::__l51::<lambda_1>::
               operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar19 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
      pFVar20 = FMemStackBase::Alloc(&pFVar19->Inner,0x50,8);
      pFVar20->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
      pFVar20->Parent = FRHIBreadcrumbNode::Sentinel;
      pFVar20->ListLink = (FRHIBreadcrumbNode *)0x0;
      (pFVar20->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
      (pFVar20->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
      pFVar20->Data = (FRHIBreadcrumbData *)&::Desc;
      pFVar20->Allocator = pFVar19;
      pFVar20->TraceCpuSpecId = 0;
      pFVar20->TraceCpuMetadataId = 0;
      LOCK();
      UNLOCK();
      uVar26 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
      FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
      pFVar20->BeginPipes = (atomic<unsigned_char>)0x0;
      pFVar20->EndPipes = (atomic<unsigned_char>)0x0;
      pFVar20->ID = uVar26;
      pFVar20->_padding_ =
           (longlong)
           &
           ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BC___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
      ;
      pFVar20[1]._padding_ = (longlong)&::Desc;
      if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
         (bVar13 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar13)) {
        EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
        if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar15 = (atomic<unsigned_int>)
                   FCpuProfilerTrace::OutputEventType
                             ((wchar_t *)::Desc._padding_,
                              (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                              (uint)::Desc._padding_);
          LOCK();
          ::Desc.TraceCpuSpecId = aVar15;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_88);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)::Desc.TraceCpuSpecId,(wchar_t *)::Desc._padding_,
                     (wchar_t *)::Desc._padding_,&local_88.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_88);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      }
      pFVar20->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
      FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_a0,(FRHIComputeCommandList *)param_1,pFVar20);
      local_90 = 1;
      local_170.field1_0x8 = (FRHITransitionInfo_u_8)(this->MorphVertexBuffer->UAVValue).Reference;
      local_170._padding_._0_4_ = 0xffffffff;
      local_170._padding_._4_2_ = 0xffff;
      local_170.Type = UAV;
      local_170.AccessBefore = None;
      local_170.AccessAfter = UAVCompute;
      local_170.Flags = None;
      local_170.CommitInfo.bIsSet = false;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_170,None);
      local_240._0_8_ = 0;
      local_240._8_8_ = 0;
      FRHIComputeCommandList::ClearUAVUint
                ((FRHIComputeCommandList *)param_1,(this->MorphVertexBuffer->UAVValue).Reference,
                 (TIntVector4<unsigned_int> *)&local_240._s_0);
      local_140.field1_0x8 = (FRHITransitionInfo_u_8)(this->MorphVertexBuffer->UAVValue).Reference;
      local_140.AccessAfter = SRVMask;
      if (param_1->field_0x6a == '\x02') {
        local_140.AccessAfter = SRVCompute;
      }
      local_140._padding_._0_4_ = 0xffffffff;
      local_140._padding_._4_2_ = 0xffff;
      local_140.Type = UAV;
      local_140.AccessBefore = UAVCompute;
      local_140.Flags = None;
      local_140.CommitInfo.bIsSet = false;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_140,None);
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_a0);
    }
    goto LAB_14866e0a4;
  }
  plVar5 = (longlong *)this->_padding_;
  uVar26 = this->DynamicData->LODIndex;
  uVar30 = 0;
  if ((int)uVar26 < (int)plVar5[1]) {
    uVar30 = ~uVar26 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_298 = *(TMap<int,TSharedPtr<FExternalMorphSet,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FExternalMorphSet,1>,0>_>
                **)(*plVar5 + (longlong)(int)uVar26 * 8);
  uVar30 = 0;
  if ((int)uVar26 < (this->LODs).ArrayNum) {
    uVar30 = ~uVar26 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_258 = (FSkeletalMeshObjectLOD *)
              ((this->LODs).AllocatorInstance.Data + (longlong)(int)uVar26 * 0xb0);
  if ((GUseGPUMorphTargets == 0) || ((int)this->_padding_ < 3)) {
    if ((GEnableGPUSkinCache == 0) || (this->DynamicData->GPUSkinTechnique != GPUSkinCache)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    pFVar6 = this->DynamicData;
    FSkeletalMeshObjectLOD::UpdateMorphVertexBufferCPU
              (local_258,param_1,&pFVar6->ActiveMorphTargets,&pFVar6->MorphTargetWeights,
               &pFVar6->SectionIdsUseByActiveMorphTargets,bVar13,this->MorphVertexBuffer);
    goto LAB_14866e0a4;
  }
  pFVar6 = this->DynamicData;
  local_2a0 = 1;
  local_res20 = 1;
  local_230._padding_._0_4_ = 0;
  pTVar2 = &pFVar6->ExternalMorphSets;
  local_230._padding_._4_4_ = 1;
  puVar7 = &(pFVar6->ExternalMorphSets).field_0x10;
  local_230.UnvisitedBitMask = 0xffffffff;
  local_230.CurrentBitIndex = 0;
  local_230.BaseBitIndex = 0;
  local_230.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar7;
  if (*(int *)&(pFVar6->ExternalMorphSets).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_230);
  }
  uVar26 = *(uint *)&(pFVar6->ExternalMorphSets).field_0x28;
  local_268 = *(int *)&(pFVar6->ExternalMorphSets).field_0x8 -
              *(int *)&(pFVar6->ExternalMorphSets).field_0x34;
  uStack_288 = CONCAT44(local_230._padding_._4_4_,(undefined4)local_230._padding_);
  iStack_274 = local_230.CurrentBitIndex;
  uStack_278 = local_230.UnvisitedBitMask;
  uStack_26c = local_230._28_4_;
  iStack_270 = local_230.BaseBitIndex;
  uVar30 = uVar26 & 0xffffffe0;
  pTStack_280 = local_230.Array;
  iVar23 = (int)uVar26 >> 5;
  uStack_1a8 = CONCAT44(uStack_264,local_268);
  TStack_1c8.Array = local_230.Array;
  local_290 = pTVar2;
  local_1d0 = pTVar2;
  TStack_1c8._padding_ = uStack_288;
  TStack_1c8._16_8_ = _uStack_278;
  TStack_1c8._24_8_ = _iStack_270;
  if (((int)uVar26 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar14 = *(uint *)&(pFVar6->ExternalMorphSets).field_0x28;
  iVar28 = local_res20;
  if (uVar26 != uVar14) {
    puVar22 = *(undefined1 **)&(pFVar6->ExternalMorphSets).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar7;
    }
    uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar23 * 4);
    while (uVar26 == 0) {
      lVar21 = (longlong)iVar23;
      uVar30 = uVar30 + 0x20;
      iVar23 = iVar23 + 1;
      uVar26 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
      goto LAB_14866d5e0;
      uVar26 = *(uint *)(puVar22 + lVar21 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_210 = (int)lVar21;
    uVar26 = local_210 + -1 + uVar30;
    if ((int)uVar14 < (int)uVar26) {
      uVar26 = uVar14;
    }
  }
LAB_14866d5e0:
  while( true ) {
    pTVar12 = local_1d0;
    if (*(int *)&local_1d0->field_0x8 - *(int *)&local_1d0->field_0x34 != (int)uStack_1a8) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_1c8.CurrentBitIndex == uVar26) &&
        (TStack_1c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar7)) && (pTVar12 == pTVar2)
       ) break;
    lVar21 = *(longlong *)pTVar12;
    lVar27 = (longlong)TStack_1c8.CurrentBitIndex * 0x20;
    if ((*(longlong *)(lVar27 + 8 + lVar21) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    bVar13 = IsExternalMorphSetActive
                       (this,*(int *)(lVar27 + lVar21),*(FExternalMorphSet **)(lVar27 + 8 + lVar21))
    ;
    iVar23 = iVar28 + 1;
    if (!bVar13) {
      iVar23 = iVar28;
    }
    TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
    iVar28 = iVar23;
  }
  local_c8._s_0.X = 0.0;
  local_c8._s_0.Y = 0.0;
  local_c8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_c8._s_0.W = _UNK_15061cbc8;
  local_e8._s_0.X = 0.0;
  local_e8._s_0.Y = 0.0;
  local_e8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_e8._s_0.W = _UNK_15061cbc8;
  FVar17 = StatPtr_STAT_MorphVertexBuffer_ApplyDelta;
  local_res20 = iVar28;
  if (StatPtr_STAT_MorphVertexBuffer_ApplyDelta ==
      (FThreadSafeStaticStat<FStat_STAT_MorphVertexBuffer_ApplyDelta>)0x0) {
    pFVar16 = ::FName::FName(&local_a8,"STAT_MorphVertexBuffer_ApplyDelta");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_MorphVertexBuffer_ApplyDelta>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MorphVertexBuffer_ApplyDelta,
                        *pFVar16,L"Morph Vertex Buffer Apply Delta","STATGROUP_MorphTarget",
                        "STATCAT_Advanced",L"Morph",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar17;
  bVar13 = false;
  bVar11 = false;
  local_250.ComparisonIndex.Value = 0;
  local_250.Number = 0;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_14866d7d2:
    bVar10 = false;
    FVar24 = local_250;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_29c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_29c._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar13 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_260.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_260.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_260,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                   ,0x591);
        bVar13 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14866d7d2;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar10 = true;
  }
  pTVar2 = local_298;
  pFVar6 = this->DynamicData;
  CalculateMorphDeltaBoundsIncludingExternalMorphs
            (&pFVar6->MorphTargetWeights,
             (FMorphTargetVertexInfoBuffers *)((longlong)(local_298 + 8) + 8),
             &pFVar6->ExternalMorphSets,&(pFVar6->ExternalMorphWeightData).MorphSets,
             (TVector4<double> *)&local_c8._s_0,(TVector4<double> *)&local_e8._s_0);
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar10) && (FVar24 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1e0.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
      local_1e0.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_200);
      local_1e0.StatData.Pad[4] = '\0';
      local_1e0.StatData.Pad[5] = '\0';
      local_1e0.StatData.Pad[6] = '\0';
      local_1e0.StatData.Pad[7] = '\0';
      local_1e0.StatData.Pad[0] = local_200.s.LowPart._0_1_;
      local_1e0.StatData.Pad[1] = local_200.s.LowPart._1_1_;
      local_1e0.StatData.Pad[2] = local_200.s.LowPart._2_1_;
      local_1e0.StatData.Pad[3] = local_200.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1e0);
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
  if (((this->DynamicData->MorphTargetWeights).ArrayNum !=
       (int)*(longlong *)((longlong)(pTVar2 + 9) + 0x40)) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_1673415667652491876>,true,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                          ,0x59c,
                          "DynamicData->MorphTargetWeights.Num() == LODData.MorphTargetVertexInfoBuffers.GetNumMorphs()"
                         ), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_1f8 = (FName)this->_padding_;
  FSkeletalMeshObjectLOD::UpdateMorphVertexBufferGPU
            (local_258,local_res10,&this->DynamicData->MorphTargetWeights,
             (FMorphTargetVertexInfoBuffers *)((longlong)(pTVar2 + 8) + 8),
             &this->DynamicData->SectionIdsUseByActiveMorphTargets,&local_1f8,Raster,
             this->MorphVertexBuffer,true,local_res20 == 1,(TVector4<double> *)&local_c8._s_0,
             (TVector4<double> *)&local_e8._s_0);
  pFVar6 = this->DynamicData;
  iVar28 = 0;
  uVar26 = 1;
  iStack_270 = 0;
  pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar6->ExternalMorphSets).field_0x10;
  iVar23 = *(int *)&(pFVar6->ExternalMorphSets).field_0x28;
  local_298 = &pFVar6->ExternalMorphSets;
  iStack_274 = 0;
  if (iVar23 != 0) {
    puVar18 = *(uint **)&(pFVar6->ExternalMorphSets).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)pTVar29;
    }
    uVar30 = *puVar18;
    while (uVar30 == 0) {
      lVar21 = (longlong)iVar28;
      iStack_270 = iStack_270 + 0x20;
      iVar28 = iVar28 + 1;
      iStack_274 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar28) goto LAB_14866da4d;
      uVar30 = puVar18[lVar21 + 1];
    }
    uVar26 = -uVar30 & uVar30;
    uVar3 = (ulonglong)uVar26 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_20c = (int)lVar21;
    iStack_274 = iStack_270 + -1 + local_20c;
    if (iVar23 < iStack_274) {
      iStack_274 = iVar23;
    }
  }
LAB_14866da4d:
  local_290 = &pFVar6->ExternalMorphSets;
  local_268 = *(int *)&(pFVar6->ExternalMorphSets).field_0x8 -
              *(int *)&(pFVar6->ExternalMorphSets).field_0x34;
  uVar30 = *(uint *)&(pFVar6->ExternalMorphSets).field_0x28;
  uStack_278 = 0xffffffff;
  uStack_288 = CONCAT44(uVar26,iVar28);
  uVar26 = uVar30 & 0xffffffe0;
  uStack_26c = local_4c;
  TStack_198._padding_ = uStack_288;
  iVar28 = (int)uVar30 >> 5;
  uStack_178 = CONCAT44(uStack_264,local_268);
  TStack_198.BaseBitIndex = iStack_270;
  TStack_198._28_4_ = local_4c;
  TStack_198.UnvisitedBitMask = 0xffffffff;
  TStack_198.CurrentBitIndex = iStack_274;
  pTStack_280 = pTVar29;
  local_1e8 = pTVar29;
  local_1a0 = local_290;
  TStack_198.Array = pTVar29;
  if ((((int)uVar30 < 0) || (iVar23 < (int)uVar30)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar14 = *(uint *)&(pFVar6->ExternalMorphSets).field_0x28;
  if (uVar30 != uVar14) {
    puVar7 = *(undefined1 **)&(pFVar6->ExternalMorphSets).field_0x20;
    puVar22 = (undefined1 *)pTVar29;
    if (puVar7 != (undefined1 *)0x0) {
      puVar22 = puVar7;
    }
    uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar28 * 4);
    while (uVar30 == 0) {
      lVar21 = (longlong)iVar28;
      uVar26 = uVar26 + 0x20;
      iVar28 = iVar28 + 1;
      uVar30 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
      goto LAB_14866db80;
      uVar30 = *(uint *)(puVar22 + lVar21 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_208 = (int)lVar21;
    uVar30 = (uVar26 - 1) + local_208;
    if ((int)uVar14 < (int)uVar30) {
      uVar30 = uVar14;
    }
  }
LAB_14866db80:
  while( true ) {
    pTVar2 = local_1a0;
    if (*(int *)&local_1a0->field_0x8 - *(int *)&local_1a0->field_0x34 != (int)uStack_178) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FExternalMorphSet,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_198.CurrentBitIndex == uVar30) && (TStack_198.Array == pTVar29)) &&
       (pTVar2 == local_298)) break;
    lVar21 = *(longlong *)pTVar2;
    lVar27 = (longlong)TStack_198.CurrentBitIndex * 0x20;
    uVar26 = *(uint *)(lVar27 + lVar21);
    if ((*(longlong *)(lVar27 + 8 + lVar21) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar6 = this->DynamicData;
    lVar8 = *(longlong *)(lVar27 + 8 + lVar21);
    if (*(int *)&(pFVar6->ExternalMorphWeightData).MorphSets.field_0x8 !=
        *(int *)&(pFVar6->ExternalMorphWeightData).MorphSets.field_0x34) {
      puVar7 = *(undefined1 **)&(pFVar6->ExternalMorphWeightData).MorphSets.field_0x40;
      puVar22 = &(pFVar6->ExternalMorphWeightData).MorphSets.field_0x38;
      if (puVar7 != (undefined1 *)0x0) {
        puVar22 = puVar7;
      }
      uVar14 = *(uint *)(puVar22 +
                        (ulonglong)
                        (*(int *)&(pFVar6->ExternalMorphWeightData).MorphSets.field_0x48 - 1U &
                        uVar26) * 4);
      if (uVar14 != 0xffffffff) {
        do {
          puVar18 = (uint *)((longlong)(int)uVar14 * 0x30 +
                            *(longlong *)&(pFVar6->ExternalMorphWeightData).MorphSets);
          if (*puVar18 == uVar26) {
            puVar25 = puVar18 + 2;
            if (puVar18 == (uint *)0x0) {
              puVar25 = (uint *)0x0;
            }
            if (puVar25 == (uint *)0x0) goto LAB_14866dc71;
            goto LAB_14866dc97;
          }
          uVar14 = puVar18[10];
        } while (uVar14 != 0xffffffff);
      }
    }
    puVar25 = (uint *)0x0;
LAB_14866dc71:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("WeightData",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                        ,0x5b2,L"");
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
LAB_14866dc97:
    if ((*(longlong *)(lVar27 + 8 + lVar21) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    bVar13 = IsExternalMorphSetActive(this,uVar26,*(FExternalMorphSet **)(lVar27 + 8 + lVar21));
    if (bVar13) {
      local_1f0 = (FName)this->_padding_;
      FSkeletalMeshObjectLOD::UpdateMorphVertexBufferGPU
                (local_258,local_res10,(TArray<float,TSizedDefaultAllocator<32>_> *)(puVar25 + 2),
                 (FMorphTargetVertexInfoBuffers *)(lVar8 + 8),
                 &this->DynamicData->SectionIdsUseByActiveMorphTargets,&local_1f0,Raster,
                 this->MorphVertexBuffer,false,local_2a0 == local_res20 + -1,
                 (TVector4<double> *)&local_c8._s_0,(TVector4<double> *)&local_e8._s_0);
      local_2a0 = local_2a0 + 1;
    }
    TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
    pTVar29 = local_1e8;
  }
  if ((local_res20 != local_2a0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumMorphSets == MorphSetIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                          ,0x5c6,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14866e0a4:
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->MorphVertexBuffer->SectionIds,
             &this->DynamicData->SectionIdsUseByActiveMorphTargets);
  this->MorphVertexBuffer->bNeedsInitialClear = false;
  this->MorphVertexBuffer->bHasBeenUpdated = true;
  this->bMorphNeedsUpdate = false;
  return;
}

// UpdateRayTracingGeometry @ 148670710

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::UpdateRayTracingGeometry
          (FSkeletalMeshObjectGPUSkin *this,FRHICommandListBase *param_1,
          FSkeletalMeshLODRenderData *param_2,uint param_3,
          TArray<TRefCountPtr<FRHIBuffer>,TSizedDefaultAllocator<32>_> *param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (this->DynamicData != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) {
    bVar1 = this->DynamicData->bAnySegmentUsesWorldPositionOffset;
  }
  UpdateRayTracingGeometry_Internal
            (param_2,param_3,param_4,&this->RayTracingGeometry,bVar1,(FSkeletalMeshObject *)this);
  return;
}

// UpdateRayTracingGeometry_Internal @ 148670760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __cdecl
FSkeletalMeshObjectGPUSkin::UpdateRayTracingGeometry_Internal
          (FSkeletalMeshLODRenderData *param_1,uint param_2,
          TArray<TRefCountPtr<FRHIBuffer>,TSizedDefaultAllocator<32>_> *param_3,
          FRayTracingGeometry *param_4,bool param_5,FSkeletalMeshObject *param_6)

{
  byte *pbVar1;
  FRHIResource *pFVar2;
  FRHIRayTracingGeometry *pFVar3;
  FRHIResource *pFVar4;
  code *pcVar5;
  FSkeletalMeshObject *this;
  FRHIBuffer *this_00;
  bool bVar6;
  int iVar7;
  FRayTracingGeometry *pFVar8;
  FName FVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  FSkeletalMeshLODRenderData *this_01;
  longlong lVar13;
  uint uVar14;
  int *piVar15;
  ulonglong uVar16;
  FRayTracingGeometry *pFVar17;
  schar sVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8 [8];
  FRayTracingGeometry *local_1b0;
  undefined1 local_1a8 [4];
  uint local_1a4;
  FRHIResource *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined2 local_180;
  FScriptContainerElement local_17e;
  TArray<TRefCountPtr<FRHIBuffer>,TSizedDefaultAllocator<32>_> *local_178;
  uint local_170;
  uint local_16c;
  FSkeletalMeshLODRenderData *local_168;
  uint local_160;
  int iStack_15c;
  FSkeletalMeshObject *local_158;
  longlong local_150;
  FRayTracingGeometryInitializer local_148;
  undefined1 local_d8 [16];
  FRHIBuffer *local_c8;
  undefined8 local_c0;
  uint local_b8;
  undefined4 local_b4;
  ERayTracingGeometryInitializerType local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FResourceArrayUploadInterface *local_98;
  uint local_90 [6];
  FRHIRayTracingGeometry *local_78;
  FDebugName local_70;
  FName local_64;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_158 = param_6;
  local_1b0 = param_4;
  local_1a4 = param_2;
  local_178 = param_3;
  local_168 = param_1;
  bVar6 = IsRayTracingEnabled();
  if ((bVar6) && (param_6->bSupportRayTracing != false)) {
    if ((param_2 == (int)param_4->LODIndex) &&
       ((param_6->bHiddenMaterialVisibilityDirtyForRayTracing == false &&
        ((param_4->Initializer).Segments.ArrayNum != 0)))) {
      iVar7 = (param_4->Initializer).Segments.ArrayNum;
      bVar6 = false;
      pFVar11 = (param_4->Initializer).Segments.AllocatorInstance.Data;
      pFVar19 = pFVar11 + (longlong)iVar7 * 0x28;
      pFVar8 = local_1b0;
      while( true ) {
        if ((pFVar8->Initializer).Segments.ArrayNum != iVar7) {
          local_1b8[0] = 0;
          `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_1b8);
          pFVar8 = local_1b0;
        }
        pFVar17 = local_1b0;
        if (pFVar11 == pFVar19) goto LAB_148670865;
        if (*(longlong *)pFVar11 == 0) break;
        pFVar11 = pFVar11 + 0x28;
      }
      bVar6 = true;
    }
    else {
      bVar6 = true;
      pFVar17 = param_4;
    }
LAB_148670865:
    piVar15 = &(param_4->Initializer).Segments.ArrayNum;
    param_6->bHiddenMaterialVisibilityDirtyForRayTracing = false;
    if (bVar6) {
      if (((param_1->MultiSizeIndexContainer).IndexBuffer ==
           (FRawStaticIndexBuffer16or32Interface *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IndexBuffer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                             ,0x51,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_01 = (FSkeletalMeshLODRenderData *)
                ((param_1->MultiSizeIndexContainer).IndexBuffer)->_padding_;
      local_168 = this_01;
      if (this_01 != (FSkeletalMeshLODRenderData *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_01);
      }
      local_16c = (param_1->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
      uVar12 = 0;
      local_170 = (param_1->StaticVertexBuffers).PositionVertexBuffer.Stride;
      local_c8 = (FRHIBuffer *)0x0;
      local_c0 = 0;
      local_b8 = 0;
      local_b4 = 0x10000;
      local_b0 = Rendering;
      local_a8.Data = (FScriptContainerElement *)0x0;
      local_a0 = 0;
      local_98 = (FResourceArrayUploadInterface *)0x0;
      local_90[0] = 0xffffffff;
      local_90[1] = 0xffffffff;
      local_90[2] = 0xffffffff;
      local_90[3] = 0xffffffff;
      local_90[4] = 0xffffffff;
      local_90[5] = 0xffffffff;
      local_78 = (FRHIRayTracingGeometry *)0x0;
      FDebugName::FDebugName(&local_70);
      this = local_158;
      local_64.ComparisonIndex.Value = 0;
      local_64.Number = 0;
      bVar6 = ::FName::IsWithinBounds((FNameEntryId)(local_158->DebugName).ComparisonIndex.Value);
      if (bVar6) {
        FVar9 = this->DebugName;
      }
      else {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
          ::FName::FName(&DefaultDebugName,"FSkeletalMeshObject");
          _Init_thread_footer(&::_TSS1);
        }
        iStack_15c = DebugNumber;
        local_160 = DefaultDebugName.ComparisonIndex.Value;
        FVar9.Number = DebugNumber;
        FVar9.ComparisonIndex.Value = DefaultDebugName.ComparisonIndex.Value;
        DebugNumber = DebugNumber + 1;
      }
      FDebugName::operator=(&local_70,FVar9);
      sVar18 = (schar)local_1a4;
      local_64 = FSkeletalMeshObject::GetAssetPathName(this,(int)local_d8);
      this_00 = local_c8;
      local_64 = *(FName *)local_64;
      if ((FSkeletalMeshLODRenderData *)local_c8 != this_01) {
        local_c8 = (FRHIBuffer *)this_01;
        if (this_01 != (FSkeletalMeshLODRenderData *)0x0) {
          FRHIResource::AddRef((FRHIResource *)this_01);
        }
        if (this_00 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00);
        }
      }
      uVar10 = (param_1->RenderSections).ArrayNum;
      local_c0 = local_c0 & 0xffffffff;
      local_b4 = CONCAT22(local_b4._2_2_,0x101);
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if (local_a0._4_4_ < (int)uVar10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,uVar10,&local_a8,(int)local_a0,(int *)((longlong)&local_a0 + 4));
      }
      if (0 < (param_1->RenderSections).ArrayNum) {
        local_150 = 0;
        uVar16 = uVar12;
        do {
          lVar13 = local_150;
          uVar14 = (uint)uVar16;
          uVar10 = 0;
          if ((int)uVar14 < (param_1->RenderSections).ArrayNum) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar19 = (param_1->RenderSections).AllocatorInstance.Data + lVar13;
          local_1a0 = (FRHIResource *)0x0;
          local_198 = 3;
          local_190 = 0xc;
          local_188 = 0;
          uVar10 = 0;
          if ((int)uVar14 < local_178->ArrayNum) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          local_180 = 0x100;
          local_17e = (FScriptContainerElement)0x1;
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = local_1a0;
          pFVar2 = *(FRHIResource **)((local_178->AllocatorInstance).Data + uVar12 * 8);
          if (local_1a0 != pFVar2) {
            local_1a0 = pFVar2;
            if (pFVar2 != (FRHIResource *)0x0) {
              FRHIResource::AddRef(pFVar2);
            }
            if (pFVar4 != (FRHIResource *)0x0) {
              FRHIResource::Release(pFVar4);
            }
          }
          local_190 = CONCAT44(local_16c,local_170);
          local_198 = 3;
          local_188 = CONCAT44(*(undefined4 *)(pFVar19 + 8),*(uint *)(pFVar19 + 4) / 3);
          bVar6 = FSkeletalMeshObject::IsMaterialHidden
                            (local_158,local_1a4,(uint)*(ushort *)pFVar19);
          if ((((bVar6) || (*(int *)(pFVar19 + 8) == 0)) ||
              (pFVar19[0x110] != (FScriptContainerElement)0x0)) ||
             (pFVar19[0xe] == (FScriptContainerElement)0x0)) {
            local_17e = (FScriptContainerElement)0x0;
            if ((local_1a0 == (FRHIResource *)0x0) &&
               (pFVar2 = (FRHIResource *)
                         (param_1->StaticVertexBuffers).PositionVertexBuffer._padding_,
               pFVar2 != (FRHIResource *)0x0)) {
              local_1a0 = pFVar2;
              FRHIResource::AddRef(pFVar2);
            }
          }
          else {
            local_17e = (FScriptContainerElement)0x1;
            if ((local_1a0 == (FRHIResource *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Segment.VertexBuffer != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                                   ,0x4df,
                                   L"Must provide valid vertex buffer when segment is enabled."),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (((local_a8.Data <= (FScriptContainerElement *)&local_1a0) &&
              ((FScriptContainerElement *)&local_1a0 <
               local_a8.Data + (longlong)local_a0._4_4_ * 0x28)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar7 = (int)local_a0;
          if ((int)local_a0 == local_a0._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&local_a8,(int *)((longlong)&local_a0 + 4));
          }
          local_a0 = CONCAT44(local_a0._4_4_,iVar7 + 1);
          pFVar19 = local_a8.Data + (longlong)iVar7 * 0x28;
          *(undefined8 *)pFVar19 = 0;
          *(FRHIResource **)pFVar19 = local_1a0;
          if (local_1a0 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(local_1a0);
          }
          *(undefined4 *)(pFVar19 + 8) = (undefined4)local_198;
          *(undefined4 *)(pFVar19 + 0xc) = local_198._4_4_;
          *(undefined4 *)(pFVar19 + 0x10) = (undefined4)local_190;
          *(undefined4 *)(pFVar19 + 0x14) = local_190._4_4_;
          *(undefined4 *)(pFVar19 + 0x18) = (undefined4)local_188;
          *(int *)(pFVar19 + 0x1c) = local_188._4_4_;
          pFVar19[0x20] = local_180._0_1_;
          pFVar19[0x21] = local_180._1_1_;
          pFVar19[0x22] = local_17e;
          local_b8 = local_b8 + local_188._4_4_;
          if (local_1a0 != (FRHIResource *)0x0) {
            FRHIResource::Release(local_1a0);
          }
          uVar16 = (ulonglong)(uVar14 + 1);
          local_150 = local_150 + 0x118;
          uVar12 = uVar12 + 1;
        } while ((int)(uVar14 + 1) < (param_1->RenderSections).ArrayNum);
        sVar18 = (schar)local_1a4;
        this_01 = local_168;
      }
      pFVar8 = local_1b0;
      pFVar3 = (local_1b0->RayTracingGeometryRHI).Reference;
      if (pFVar3 != (FRHIRayTracingGeometry *)0x0) {
        uVar10 = (uint)pFVar3->_padding_;
        if (((uVar10 >> 0x1e & 1) != 0) || ((uVar10 & 0x3fffffff) == 0)) {
          `FRHIResource::DisableLifetimeExtension'::__l2::<lambda_1>::operator()(local_1a8);
        }
        pbVar1 = (byte *)((longlong)&pFVar3->_padding_ + 5);
        *pbVar1 = *pbVar1 & 0xfd;
        (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8);
      }
      local_148.SourceGeometry = (param_1->SourceRayTracingGeometry).RayTracingGeometryRHI.Reference
      ;
      local_148.IndexBuffer.Reference = local_c8;
      local_148.IndexBufferOffset = (uint)local_c0;
      local_148.GeometryType = local_c0._4_4_;
      local_148.TotalPrimitiveCount = local_b8;
      local_148.bFastBuild = (bool)(undefined1)local_b4;
      local_148.bAllowUpdate = (bool)local_b4._1_1_;
      local_148.bAllowCompaction = (bool)local_b4._2_1_;
      local_148.bTemplate = (bool)local_b4._3_1_;
      local_148.Type = local_b0;
      local_148.Segments.AllocatorInstance.Data = local_a8.Data;
      local_148.Segments.ArrayNum = (int)local_a0;
      local_148.Segments.ArrayMax = local_a0._4_4_;
      local_148.OfflineData = local_98;
      local_148.DebugName.Number = local_70.Number;
      local_148.OfflineDataHeader.Reserved[0] = local_90[0];
      local_148.OfflineDataHeader.Reserved[1] = local_90[1];
      local_148.OfflineDataHeader.Reserved[2] = local_90[2];
      local_148.OfflineDataHeader.Reserved[3] = local_90[3];
      local_148.OwnerName = local_64;
      pFVar8->LODIndex = sVar18;
      local_c8 = (FRHIBuffer *)0x0;
      local_a8.Data = (FScriptContainerElement *)0x0;
      local_a0 = 0;
      local_148.OfflineDataHeader.Reserved[4] = local_90[4];
      local_148.OfflineDataHeader.Reserved[5] = local_90[5];
      local_148.DebugName.Name = local_70.Name;
      local_78 = local_148.SourceGeometry;
      FRayTracingGeometry::SetInitializer(pFVar8,&local_148);
      DestructItems<FRayTracingGeometrySegment,int>
                ((FRayTracingGeometrySegment *)local_a8.Data,(int)local_a0);
      if ((FRayTracingGeometrySegment *)local_a8.Data != (FRayTracingGeometrySegment *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      if (local_c8 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_c8);
      }
      if (this_01 != (FSkeletalMeshLODRenderData *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    else {
      pFVar8 = local_1b0;
      if (!param_5) {
        if (((param_1->RenderSections).ArrayNum != *piVar15) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("LODModel.RenderSections.Num() == RayTracingGeometry.Initializer.Segments.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                               ,0x501,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar10 = 0;
        pFVar8 = local_1b0;
        if (0 < (param_1->RenderSections).ArrayNum) {
          lVar20 = 0;
          lVar13 = 0;
          do {
            uVar14 = 0;
            if ((int)uVar10 < *piVar15) {
              uVar14 = ~uVar10 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar19 = (pFVar17->Initializer).Segments.AllocatorInstance.Data;
            uVar14 = 0;
            if ((int)uVar10 < local_178->ArrayNum) {
              uVar14 = ~uVar10 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar2 = *(FRHIResource **)(pFVar19 + lVar13);
            pFVar4 = *(FRHIResource **)((local_178->AllocatorInstance).Data + lVar20 * 8);
            if (pFVar2 != pFVar4) {
              *(FRHIResource **)(pFVar19 + lVar13) = pFVar4;
              if (pFVar4 != (FRHIResource *)0x0) {
                FRHIResource::AddRef(pFVar4);
              }
              if (pFVar2 != (FRHIResource *)0x0) {
                FRHIResource::Release(pFVar2);
              }
            }
            uVar10 = uVar10 + 1;
            *(undefined4 *)(pFVar19 + lVar13 + 0xc) = 0;
            lVar20 = lVar20 + 1;
            lVar13 = lVar13 + 0x28;
            pFVar17 = local_1b0;
            pFVar8 = local_1b0;
          } while ((int)uVar10 < (local_168->RenderSections).ArrayNum);
        }
      }
    }
    pFVar8->GeometryState = pFVar8->GeometryState | RequiresUpdate;
  }
  return;
}

// UpdateSkinWeightBuffer @ 148673010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectGPUSkin::UpdateSkinWeightBuffer
          (FSkeletalMeshObjectGPUSkin *this,
          TArrayView<FSkelMeshComponentLODInfo_const_,int> *param_1)

{
  int iVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined ***pppuVar6;
  FSkelMeshComponentLODInfo *pFVar7;
  uint uVar8;
  FSkeletalMeshObjectLOD *this_00;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  code *local_78 [2];
  undefined **local_68;
  FSkeletalMeshObjectGPUSkin *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar8 = 0;
  if (0 < (this->LODs).ArrayNum) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      iVar1 = (this->LODs).ArrayNum;
      uVar5 = 0;
      if ((int)uVar8 < iVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_88 = (longlong)(int)uVar8;
        local_80 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this_00 = (FSkeletalMeshObjectLOD *)((this->LODs).AllocatorInstance.Data + lVar10);
      pFVar2 = this_00->SkelMeshRenderData;
      iVar1 = (pFVar2->LODRenderData).Array.ArrayNum;
      uVar5 = 0;
      if ((int)uVar8 < iVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (local_88 = lVar9, local_80 = (longlong)iVar1,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)(*(longlong *)((pFVar2->LODRenderData).Array.AllocatorInstance.Data + lVar9 * 8) +
                  300) != 0) {
        if (((int)uVar8 < 0) || (param_1->ArrayNum <= (int)uVar8)) {
          pFVar7 = (FSkelMeshComponentLODInfo *)0x0;
        }
        else {
          if ((int)uVar8 < 0) {
            local_88 = (longlong)(int)uVar8;
            local_80 = (longlong)param_1->ArrayNum;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pFVar7 = param_1->DataPtr + (int)uVar8;
        }
        FSkeletalMeshObjectLOD::UpdateSkinWeights(this_00,pFVar7);
        local_50 = (undefined ***)0x0;
        local_68 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FSkeletalMeshObjectGPUSkin::UpdateSkinWeightBuffer'::`7'::<lambda_1>,1,0>
                    ::_vftable_;
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FSkeletalMeshObjectGPUSkin::UpdateSkinWeightBuffer'::__l7::<lambda_1>,void,FRHICommandList_&>
                      ::Call;
        local_60 = this;
        FRenderCommandDispatcher::
        Enqueue<TRenderCommandTag<_FSkeletalMeshObjectGPUSkin::UpdateSkinWeightBuffer_::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer781>_>
                  (&UE::RenderCommandPipe::SkeletalMesh,
                   (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_78);
        if (local_78[0] != (code *)0x0) {
          pppuVar6 = &local_68;
          if (local_50 != (undefined ***)0x0) {
            pppuVar6 = local_50;
          }
          (*(code *)(*pppuVar6)[2])();
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0xb0;
    } while ((int)uVar8 < (this->LODs).ArrayNum);
  }
  return;
}

