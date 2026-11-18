// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 17

// FWN_ISKM_Proxy @ 14a83e950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FWN_ISKM_Proxy * __thiscall
FWN_ISKM_Proxy::FWN_ISKM_Proxy(FWN_ISKM_Proxy *this,UWN_ISKM_ISKMComponent *param_1,FName param_2)

{
  int *piVar1;
  int *piVar2;
  TSharedPtr<FWN_ISKM_MeshRenderData,1> *pTVar3;
  TArray<FMaterialRenderProxy_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  byte *pbVar5;
  void *_Dst;
  code *pcVar6;
  UWN_ISKM_Profile *pUVar7;
  FScriptContainerElement *pFVar8;
  char cVar9;
  bool bVar10;
  EShaderPlatform EVar11;
  uint uVar12;
  int iVar13;
  FSkeletalMeshRenderData *pFVar14;
  UMaterial *pUVar15;
  undefined8 uVar16;
  FWN_ISKM_Proxy *pFVar17;
  uint uVar18;
  ForElementType<FMaterialRenderProxy_*> FVar19;
  ForElementType<FMaterialRenderProxy_*> FVar20;
  FSharedReferencer<1> FVar21;
  uint uVar22;
  FWN_ISKM_MeshRenderData *pFVar23;
  longlong lVar24;
  FName local_res8;
  FName local_res10;
  FWN_ISKM_MeshRenderData *local_98;
  FSharedReferencer<1> FStack_90;
  FString local_88;
  FString local_78;
  FWN_ISKM_MeshRenderData *local_68;
  TReferenceControllerBase<1> *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,param_2);
  this->_padding_ = (longlong)&___7FWN_ISKM_Proxy__6B_;
  pcVar6 = *(code **)(*(longlong *)param_1 + 0xaa8);
  EVar11 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
  (*pcVar6)(param_1,&this->MaterialRelevance,EVar11);
  (this->MaterialProxies).AllocatorInstance.SecondaryData =
       (ForElementType<FMaterialRenderProxy_*>)0x0;
  piVar1 = &(this->MaterialProxies).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(this->MaterialProxies).ArrayMax;
  *piVar2 = 0x10;
  this->LODDatas[0].NumSectionsTriangles = 0;
  this->LODDatas[0].NumSectionsVertices = 0;
  this->LODDatas[1].NumSectionsTriangles = 0;
  this->LODDatas[1].NumSectionsVertices = 0;
  this->LODDatas[2].NumSectionsTriangles = 0;
  this->LODDatas[2].NumSectionsVertices = 0;
  this->LODDatas[3].NumSectionsTriangles = 0;
  this->LODDatas[3].NumSectionsVertices = 0;
  this->LODDatas[4].NumSectionsTriangles = 0;
  this->LODDatas[4].NumSectionsVertices = 0;
  this->LODDatas[5].NumSectionsTriangles = 0;
  this->LODDatas[5].NumSectionsVertices = 0;
  this->LODDatas[6].NumSectionsTriangles = 0;
  this->LODDatas[6].NumSectionsVertices = 0;
  this->LODDatas[7].NumSectionsTriangles = 0;
  this->LODDatas[7].NumSectionsVertices = 0;
  this->Profile = (UWN_ISKM_Profile *)(param_1->Profile).field0_0x0;
  this->SkeletalMesh = (USkeletalMesh *)(param_1->SkeletalMesh).field0_0x0;
  pFVar14 = (FSkeletalMeshRenderData *)
            (**(code **)(((param_1->SkeletalMesh).field0_0x0.DebugPtr)->_padding_ + 0x398))();
  pTVar3 = &this->MeshRenderDataPtr;
  this->bHasAnyTranslucentMaterial = false;
  this->SkeletalMeshRenderData = pFVar14;
  pTVar3->Object = (FWN_ISKM_MeshRenderData *)0x0;
  (this->MeshRenderDataPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->NumCustomDataFloats = 0;
  this->DynamicData = (FWN_ISKM_DynamicData *)0x0;
  this->UpdatedDynamicData = (FWN_ISKM_DynamicData *)0x0;
  (this->LodInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LodInfos).ArrayNum = 0;
  (this->LodInfos).ArrayMax = 0;
  (this->BuffersPtr).Object = (FWN_ISKM_Buffers *)0x0;
  (this->BuffersPtr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FInstanceSceneDataBuffers::FInstanceSceneDataBuffers(&this->InstanceSceneDataBuffersImpl);
  FPrimitiveSceneProxy::EnableGPUSceneSupportFlags((FPrimitiveSceneProxy *)this);
  UWN_ISKM_Profile::__InitRenderDatas(this->Profile);
  pUVar7 = this->Profile;
  uVar12 = TArray<FWN_ISKM_SkeletalMeshInfo,TSizedDefaultAllocator<32>_>::
           FindLastByPredicate<_UWN_ISKM_Profile::FindISKMMeshRenderDataPtr_::__l2::<lambda_1>_>
                     (&pUVar7->SkeletalMeshInfos,this->SkeletalMesh,
                      (pUVar7->SkeletalMeshInfos).ArrayNum);
  if (uVar12 == 0xffffffff) {
    local_58 = 0;
    uStack_50 = 0;
    pFVar23 = (FWN_ISKM_MeshRenderData *)0x0;
    local_98 = (FWN_ISKM_MeshRenderData *)0x0;
    FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FVar21.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar22 = 0;
    if ((int)uVar12 < (pUVar7->MeshRenderDataPtrs).ArrayNum) {
      uVar22 = ~uVar12 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar17 = (FWN_ISKM_Proxy *)(*pcVar6)();
      return pFVar17;
    }
    pFVar8 = (pUVar7->MeshRenderDataPtrs).AllocatorInstance.Data;
    FVar21.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar8 + (longlong)(int)uVar12 * 0x10 + 8);
    pFVar23 = *(FWN_ISKM_MeshRenderData **)(pFVar8 + (longlong)(int)uVar12 * 0x10);
    if (FVar21.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar21.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar21.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (FVar21.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar21.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_98 = pFVar23;
    FStack_90.ReferenceController = FVar21.ReferenceController;
    local_68 = pFVar23;
    local_60 = FVar21.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar21.ReferenceController);
  }
  if (pTVar3 != (TSharedPtr<FWN_ISKM_MeshRenderData,1> *)&local_98) {
    pTVar3->Object = pFVar23;
    local_98 = (FWN_ISKM_MeshRenderData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MeshRenderDataPtr).SharedReferenceCount,&FStack_90);
    FVar21.ReferenceController = FStack_90.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar21.ReferenceController);
  uVar12 = (**(code **)(*(longlong *)param_1 + 0x810))(param_1);
  iVar13 = (this->MaterialProxies).ArrayNum;
  pTVar4 = &this->MaterialProxies;
  if (iVar13 < (int)uVar12) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_*>_>
              (8,8,uVar12 - iVar13,&pTVar4->AllocatorInstance,piVar1,piVar2);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar13) {
      uVar22 = iVar13 - uVar12;
      if (((int)(uVar12 | uVar22) < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar17 = (FWN_ISKM_Proxy *)(*pcVar6)();
        return pFVar17;
      }
      if (uVar22 != 0) {
        FVar19 = (this->MaterialProxies).AllocatorInstance.SecondaryData;
        if (FVar19 == (ForElementType<FMaterialRenderProxy_*>)0x0) {
          FVar19 = (ForElementType<FMaterialRenderProxy_*>)pTVar4;
        }
        _Dst = (void *)((longlong)FVar19 + (longlong)(int)uVar12 * 8);
        iVar13 = ((this->MaterialProxies).ArrayNum - uVar22) - uVar12;
        if (iVar13 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar22 * 8),(longlong)iVar13 << 3);
        }
        piVar1 = &(this->MaterialProxies).ArrayNum;
        *piVar1 = *piVar1 - uVar22;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_*>_>
                  (8,8,&pTVar4->AllocatorInstance,(this->MaterialProxies).ArrayNum,piVar2);
      }
    }
  }
  uVar22 = 0;
  if (0 < (int)uVar12) {
    lVar24 = 0;
    do {
      pUVar15 = (UMaterial *)(**(code **)(*(longlong *)param_1 + 0x690))(param_1,uVar22);
      if (pUVar15 == (UMaterial *)0x0) {
LAB_14a83eda9:
        pUVar15 = UMaterial::GetDefaultMaterial(MD_Surface);
      }
      else {
        cVar9 = (**(code **)(pUVar15->_padding_ + 0x378))(pUVar15,0);
        if (cVar9 == '\0') {
          if (1 < (byte)ISKM._0_1_) {
            local_res8 = (FName)this->SkeletalMesh->_padding_;
            ::FName::ToString(&local_res8,&local_78);
            local_res10 = (FName)pUVar15->_padding_;
            ::FName::ToString(&local_res10,&local_88);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&ISKM);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_14a83eda9;
        }
      }
      uVar16 = (**(code **)(pUVar15->_padding_ + 0x310))();
      uVar18 = 0;
      if ((int)uVar22 < (this->MaterialProxies).ArrayNum) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar17 = (FWN_ISKM_Proxy *)(*pcVar6)();
        return pFVar17;
      }
      FVar19 = (this->MaterialProxies).AllocatorInstance.SecondaryData;
      FVar20 = (ForElementType<FMaterialRenderProxy_*>)pTVar4;
      if (FVar19 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
        FVar20 = FVar19;
      }
      uVar22 = uVar22 + 1;
      *(undefined8 *)((longlong)FVar20 + lVar24 * 8) = uVar16;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)uVar12);
  }
  pbVar5 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar5 = *pbVar5 | 0x80;
  pbVar5 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar5 = *pbVar5 & 0x7f;
  pbVar5 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar5 = *pbVar5 & 0xdf;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x40;
  FPrimitiveSceneProxy::SetupInstanceSceneDataBuffers
            ((FPrimitiveSceneProxy *)this,&this->InstanceSceneDataBuffersImpl);
  UpdateInstanceSceneDataBuffersImpl(this,param_1->DynamicDataToRender);
  return this;
}

// ~FWN_ISKM_Proxy @ 14a83fe00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FWN_ISKM_Proxy::~FWN_ISKM_Proxy(FWN_ISKM_Proxy *this)

{
  FWN_ISKM_DynamicData *this_00;
  FScriptContainerElement *pFVar1;
  ForElementType<FMaterialRenderProxy_*> FVar2;
  
  this_00 = this->DynamicData;
  this->_padding_ = (longlong)&___7FWN_ISKM_Proxy__6B_;
  if (this_00 != (FWN_ISKM_DynamicData *)0x0) {
    FWN_ISKM_DynamicData::~FWN_ISKM_DynamicData(this_00);
    ::operator_delete(this_00,0x28);
    this->DynamicData = (FWN_ISKM_DynamicData *)0x0;
  }
  FInstanceSceneDataBuffers::~FInstanceSceneDataBuffers(&this->InstanceSceneDataBuffersImpl);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BuffersPtr).SharedReferenceCount.ReferenceController);
  DestructItems<FWN_ISKM_LodInfo,int>
            ((FWN_ISKM_LodInfo *)(this->LodInfos).AllocatorInstance.Data,(this->LodInfos).ArrayNum);
  pFVar1 = (this->LodInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MeshRenderDataPtr).SharedReferenceCount.ReferenceController);
  FVar2 = (this->MaterialProxies).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// operator() @ 14a840320

int __thiscall
`FWN_ISKM_Proxy::CreateBuffers'::__l2::<lambda_1>::operator()(void *this,bool param_1)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ForAnyElementType *pFVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ushort *puVar15;
  float fVar16;
  int local_48;
  int iStack_44;
  
  fVar5 = __real_3fb8aa3b;
  iVar13 = 0;
  iVar14 = -1;
  iVar8 = *(int *)(*(longlong *)((longlong)this + 8) + 0x10);
  if (iVar8 < 1) {
    return -1;
  }
  lVar12 = 0;
  puVar15 = (ushort *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 8) + 2);
  do {
    uVar2 = *puVar15;
    if (uVar2 == 0) {
      return iVar14;
    }
    if (((ushort)!param_1 * 2 + 1 & uVar2) != 0) {
      fVar16 = logf((float)(uVar2 >> 8));
      lVar3 = *(longlong *)this;
      uVar10 = (uint)(fVar16 * fVar5);
      if (param_1) {
        uVar7 = 0;
        if ((int)uVar10 < *(int *)(lVar3 + 0x3c0)) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar8 = (*pcVar4)();
          return iVar8;
        }
        pFVar11 = (ForAnyElementType *)
                  (*(longlong *)(lVar3 + 0x3b8) + (longlong)(int)uVar10 * 0x20 + 0x10);
      }
      else {
        uVar7 = 0;
        if ((int)uVar10 < *(int *)(lVar3 + 0x3c0)) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar8 = (*pcVar4)();
          return iVar8;
        }
        pFVar11 = (ForAnyElementType *)((longlong)(int)uVar10 * 0x20 + *(longlong *)(lVar3 + 0x3b8))
        ;
      }
      iVar9 = *(int *)&pFVar11[1].Data;
      iVar14 = iVar13;
      if (iVar9 != 0) {
        uVar10 = 0;
        if ((int)(iVar9 - 1U) < iVar9) {
          uVar10 = ~(iVar9 - 1U) >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar8 = (*pcVar4)();
          return iVar8;
        }
        if (*(int *)(pFVar11->Data + (longlong)*(int *)&pFVar11[1].Data * 8 + -4) + 1 == iVar13) {
          *(int *)(pFVar11->Data + (longlong)*(int *)&pFVar11[1].Data * 8 + -4) = iVar13;
          goto LAB_14a840597;
        }
      }
      local_48 = iVar13;
      iStack_44 = iVar13;
      if (((pFVar11->Data <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 <
           pFVar11->Data + (longlong)*(int *)((longlong)&pFVar11[1].Data + 4) * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
      iVar9 = *(int *)&pFVar11[1].Data;
      piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar11,piVar1);
      }
      *(int *)&pFVar11[1].Data = iVar9 + 1;
      *(ulonglong *)(pFVar11->Data + (longlong)iVar9 * 8) = CONCAT44(iStack_44,local_48);
    }
LAB_14a840597:
    iVar13 = iVar13 + 1;
    lVar12 = lVar12 + 1;
    puVar15 = puVar15 + 0x40;
    if (iVar8 <= lVar12) {
      return iVar14;
    }
  } while( true );
}

// AcceptOcclusionResults @ 14a8421a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FWN_ISKM_Proxy::AcceptOcclusionResults
          (FWN_ISKM_Proxy *this,FSceneView *param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4)

{
  return;
}

// CanBeOccluded @ 14a844980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FWN_ISKM_Proxy::CanBeOccluded(FWN_ISKM_Proxy *this)

{
  bool bVar1;
  
  if ((*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) & 4) == 0) {
    bVar1 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// CreateBuffers @ 14a8454c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FWN_ISKM_Proxy::CreateBuffers(FWN_ISKM_Proxy *this,FRHICommandListBase *param_1)

{
  TArray<FWN_ISKM_LodInfo,TSizedDefaultAllocator<32>_> *this_00;
  size_t _Size;
  int *piVar1;
  FWN_ISKM_Buffers *pFVar2;
  FRHIBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  FWN_ISKM_DynamicData *pFVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_ISKM_CreateBuffers> FVar14;
  TSharedPtr<FWN_ISKM_Buffers,1> *pTVar15;
  uint *puVar16;
  float *pfVar17;
  FTlsAutoCleanup *pFVar18;
  FWN_ISKM_DynamicData *pFVar19;
  longlong lVar20;
  FName FVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  FWN_ISKM_DynamicData *_Src;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  TSharedPtr<FWN_ISKM_Buffers,1> *pTVar29;
  ulonglong uVar30;
  ulong64 uVar31;
  longlong lVar32;
  undefined1 local_res20 [8];
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165;
  undefined1 local_164 [4];
  FWN_ISKM_DynamicData *local_160;
  void *local_158;
  FColor_u_0 local_150;
  int local_14c;
  FName local_148;
  longlong local_140;
  FMemMark local_138;
  FName local_110;
  FName local_108;
  longlong local_f8;
  TSharedPtr<FWN_ISKM_Buffers,1> *local_e8;
  void *local_e0;
  FWN_ISKM_Proxy *local_d8;
  FWN_ISKM_DynamicData *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  code *local_88;
  undefined1 *local_80;
  code *local_78;
  undefined1 *local_70;
  FName local_68;
  TSharedPtr<FWN_ISKM_Buffers,1> local_60 [2];
  
  FVar14 = StatPtr_STAT_ISKM_CreateBuffers;
  if (StatPtr_STAT_ISKM_CreateBuffers == (FThreadSafeStaticStat<FStat_STAT_ISKM_CreateBuffers>)0x0)
  {
    pFVar13 = ::FName::FName(&local_68,"STAT_ISKM_CreateBuffers");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_ISKM_CreateBuffers>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ISKM_CreateBuffers,*pFVar13,
                        L"CreateBuffers","STATGROUP_ISKM","STATCAT_Advanced",L"ISKM",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar14;
  bVar6 = false;
  bVar5 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  bVar10 = false;
  bVar9 = false;
  if ((FVar21.ComparisonIndex.Value.Value != 0) || (FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_150.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_150._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_110.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_110.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_110,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Renderer.cpp"
                   ,0x24c);
        bVar6 = true;
        bVar5 = true;
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_148 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar9 = true;
      goto LAB_14a84562e;
    }
  }
  bVar6 = bVar10;
  bVar5 = bVar9;
  bVar9 = false;
  local_148 = local_108;
  FVar21 = local_108;
LAB_14a84562e:
  local_160 = this->UpdatedDynamicData;
  if (local_160 != (FWN_ISKM_DynamicData *)0x0) {
    this_00 = &this->LodInfos;
    iVar12 = (this->LodInfos).ArrayNum;
    piVar1 = &(this->LodInfos).ArrayNum;
    uVar22 = (this->SkeletalMeshRenderData->LODRenderData).Array.ArrayNum;
    if (iVar12 < (int)uVar22) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x20,8,uVar22 - iVar12,&this_00->AllocatorInstance,piVar1,
                          &(this->LodInfos).ArrayMax);
      DefaultConstructItems<FWN_ISKM_LodInfo,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar11 * 0x20,uVar22 - iVar12);
    }
    else {
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      if ((int)uVar22 < iVar12) {
        uVar24 = iVar12 - uVar22;
        if (((int)(uVar22 | uVar24) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar24 != 0) {
          TArray<FWN_ISKM_LodInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar22,uVar24);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&this_00->AllocatorInstance,*piVar1,&(this->LodInfos).ArrayMax);
        }
      }
    }
    uVar23 = 0;
    uVar27 = uVar23;
    uVar30 = uVar23;
    local_158 = (void *)(longlong)(int)uVar22;
    if (0 < (int)uVar22) {
      do {
        uVar24 = (uint)uVar23;
        uVar22 = 0;
        if ((int)uVar24 < *piVar1) {
          uVar22 = ~uVar24 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar25 = (this_00->AllocatorInstance).Data + uVar30;
        *(undefined4 *)&pFVar25[8].field_0x0 = 0;
        if (*(int *)(pFVar25 + 0xc) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,(ForAnyElementType *)pFVar25,0,(int *)(pFVar25 + 0xc));
        }
        uVar22 = 0;
        if ((int)uVar24 < *piVar1) {
          uVar22 = ~uVar24 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar25 = (this_00->AllocatorInstance).Data + uVar30 + 0x10;
        *(undefined4 *)&pFVar25[8].field_0x0 = 0;
        if (*(int *)(pFVar25 + 0xc) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,(ForAnyElementType *)pFVar25,0,(int *)(pFVar25 + 0xc));
        }
        uVar23 = (ulonglong)(uVar24 + 1);
        uVar27 = uVar27 + 1;
        FVar21 = local_148;
        uVar30 = uVar30 + 0x20;
      } while ((longlong)uVar27 < (longlong)local_158);
    }
    pFVar8 = local_160;
    uVar31 = 8;
    local_d0 = local_160;
    local_d8 = this;
    iVar12 = `FWN_ISKM_Proxy::CreateBuffers'::__l2::<lambda_1>::operator()(&local_d8,false);
    `FWN_ISKM_Proxy::CreateBuffers'::__l2::<lambda_1>::operator()(&local_d8,true);
    if (iVar12 != -1) {
      pTVar15 = FWN_ISKM_Buffers::Create(local_60,param_1,iVar12 + 1,this->NumCustomDataFloats);
      pTVar29 = &this->BuffersPtr;
      local_e8 = pTVar29;
      if (pTVar29 != pTVar15) {
        pTVar29->Object = pTVar15->Object;
        pTVar15->Object = (FWN_ISKM_Buffers *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->BuffersPtr).SharedReferenceCount,&pTVar15->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60[0].SharedReferenceCount.ReferenceController);
      if ((pTVar29->Object == (FWN_ISKM_Buffers *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = pTVar29->Object;
      if ((((pFVar2->MappedGlobalFrameIndices_A != (uint *)0x0) ||
           (pFVar2->MappedGlobalFrameIndices_B != (uint *)0x0)) ||
          (pFVar2->MappedAnimBlendingWeights != (uint *)0x0)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(MappedGlobalFrameIndices_A == nullptr) && (MappedGlobalFrameIndices_B == nullptr) && (MappedAnimBlendingWeights == nullptr)"
                              ,
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                              ,0x123,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar16 = FRHICommandListBase::LockBuffer
                          ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                           (pFVar2->GlobalFrameIndicesVB_A).Reference,0,pFVar2->NumInstances << 2,
                           RLM_WriteOnly);
      pFVar3 = (pFVar2->GlobalFrameIndicesVB_B).Reference;
      pFVar2->MappedGlobalFrameIndices_A = puVar16;
      puVar16 = FRHICommandListBase::LockBuffer
                          ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar3,0,
                           pFVar2->NumInstances << 2,RLM_WriteOnly);
      pFVar3 = (pFVar2->AnimBlendingWeightsVB).Reference;
      pFVar2->MappedGlobalFrameIndices_B = puVar16;
      puVar16 = FRHICommandListBase::LockBuffer
                          ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar3,0,
                           pFVar2->NumInstances << 2,RLM_WriteOnly);
      pFVar2->MappedAnimBlendingWeights = puVar16;
      if (pFVar2->NumCustomDataFloats != 0) {
        pfVar17 = FRHICommandListBase::LockBuffer
                            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                             (pFVar2->CustomDataFloatsVB).Reference,0,
                             pFVar2->NumCustomDataFloats * pFVar2->NumInstances * 4,RLM_WriteOnly);
        pFVar2->MappedCustomDataFloats = pfVar17;
      }
      puVar16 = TThreadSingleton<FMemStack>::GetTlsSlot();
      local_c0 = local_res20;
      local_c8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar18 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_c8,puVar16);
      local_138.Mem = (FMemStackBase *)(pFVar18 + 2);
      local_138.Top = (local_138.Mem)->Top;
      local_138.SavedChunk = *(FTaggedMemory **)(pFVar18 + 4);
      local_138.bPopped = false;
      local_138.NextTopmostMark = *(FMemMark **)(pFVar18 + 5);
      pFVar18[5] = (FTlsAutoCleanup)&local_138;
      *(int *)(pFVar18 + 6) = *(int *)(pFVar18 + 6) + 1;
      puVar16 = TThreadSingleton<FMemStack>::GetTlsSlot();
      local_b0 = &local_168;
      local_b8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar18 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_b8,puVar16);
      local_14c = *(int *)(pFVar18 + 6);
      puVar16 = TThreadSingleton<FMemStack>::GetTlsSlot();
      local_a0 = &local_167;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar18 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a8,puVar16);
      local_140 = (longlong)iVar12 + 1;
      uVar27 = local_140 * 4;
      if (0xf < uVar27) {
        uVar31 = 0x10;
      }
      local_158 = FMemStackBase::Alloc((FMemStackBase *)(pFVar18 + 2),uVar27,uVar31);
      puVar16 = TThreadSingleton<FMemStack>::GetTlsSlot();
      local_90 = &local_166;
      local_98 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar18 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,puVar16);
      pFVar19 = FMemStackBase::Alloc((FMemStackBase *)(pFVar18 + 2),uVar27,uVar31);
      local_160 = pFVar19;
      puVar16 = TThreadSingleton<FMemStack>::GetTlsSlot();
      local_80 = &local_165;
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar18 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,puVar16);
      local_e0 = FMemStackBase::Alloc((FMemStackBase *)(pFVar18 + 2),uVar27,uVar31);
      uVar22 = 0;
      _Src = pFVar19;
      if (0 < local_140) {
        lVar32 = 0;
        lVar20 = (longlong)local_158 - (longlong)pFVar19;
        lVar28 = (longlong)local_e0 - (longlong)pFVar19;
        lVar26 = local_140;
        local_f8 = lVar20;
        do {
          uVar24 = 0;
          if ((int)uVar22 < (pFVar8->InstanceDatas).ArrayNum) {
            uVar24 = ~uVar22 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar25 = (pFVar8->InstanceDatas).AllocatorInstance.Data;
          uVar22 = uVar22 + 1;
          *(undefined4 *)((longlong)pFVar19 + lVar20) = *(undefined4 *)(pFVar25 + lVar32 + 4);
          pFVar19->CreationFrameNumber = *(uint *)(pFVar25 + lVar32 + 8);
          lVar7 = lVar32 + 0xc;
          lVar32 = lVar32 + 0x80;
          *(undefined4 *)((longlong)pFVar19 + lVar28) = *(undefined4 *)(pFVar25 + lVar7);
          pFVar19 = (FWN_ISKM_DynamicData *)&pFVar19->field_0x4;
          lVar26 = lVar26 + -1;
          FVar21 = local_148;
          _Src = local_160;
          pTVar29 = local_e8;
        } while (lVar26 != 0);
      }
      lVar26 = local_140;
      if ((pTVar29->Object == (FWN_ISKM_Buffers *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      _Size = lVar26 * 4;
      memcpy(pTVar29->Object->MappedGlobalFrameIndices_A,local_158,_Size);
      if ((pTVar29->Object == (FWN_ISKM_Buffers *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      memcpy(pTVar29->Object->MappedGlobalFrameIndices_B,_Src,_Size);
      if ((pTVar29->Object == (FWN_ISKM_Buffers *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      memcpy(pTVar29->Object->MappedAnimBlendingWeights,local_e0,_Size);
      iVar12 = this->NumCustomDataFloats;
      if (0 < iVar12) {
        pFVar25 = (pFVar8->CustomDatas).AllocatorInstance.Data;
        if ((pTVar29->Object == (FWN_ISKM_Buffers *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        memcpy(pTVar29->Object->MappedCustomDataFloats,pFVar25,iVar12 * lVar26 * 4);
      }
      puVar16 = TThreadSingleton<FMemStack>::GetTlsSlot();
      local_70 = local_164;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar18 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,puVar16);
      if ((*(int *)(pFVar18 + 6) != local_14c) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FMemStack::Get().GetNumMarks() == numMarks",
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Renderer.cpp"
                              ,0x2be,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_138.bPopped == false) {
        if (((local_138.Mem)->TopMark != &local_138) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mem.TopMark == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                ,0x215,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_138.bPopped = true;
        (local_138.Mem)->NumMarks = (local_138.Mem)->NumMarks + -1;
        if (local_138.SavedChunk != (local_138.Mem)->TopChunk) {
          FMemStackBase::FreeChunks(local_138.Mem,local_138.SavedChunk);
        }
        (local_138.Mem)->Top = local_138.Top;
        (local_138.Mem)->TopMark = local_138.NextTopmostMark;
        local_138.Top = (uchar *)0x0;
      }
      if ((pTVar29->Object == (FWN_ISKM_Buffers *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = pTVar29->Object;
      if ((pFVar2->MappedGlobalFrameIndices_A == (uint *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLocked()",
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                              ,0x131,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FRHICommandListBase::UnlockBuffer
                ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                 (pFVar2->GlobalFrameIndicesVB_A).Reference);
      FRHICommandListBase::UnlockBuffer
                ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                 (pFVar2->GlobalFrameIndicesVB_B).Reference);
      FRHICommandListBase::UnlockBuffer
                ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                 (pFVar2->AnimBlendingWeightsVB).Reference);
      if (pFVar2->NumCustomDataFloats != 0) {
        FRHICommandListBase::UnlockBuffer
                  ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                   (pFVar2->CustomDataFloatsVB).Reference);
      }
      pFVar2->MappedGlobalFrameIndices_A = (uint *)0x0;
      pFVar2->MappedGlobalFrameIndices_B = (uint *)0x0;
      pFVar2->MappedAnimBlendingWeights = (uint *)0x0;
      pFVar2->MappedCustomDataFloats = (float *)0x0;
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return;
}

// CreateRenderThreadResources @ 14a8467c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_ISKM_Proxy::CreateRenderThreadResources(FWN_ISKM_Proxy *this,FRHICommandListBase *param_1)

{
  ushort uVar1;
  int iVar2;
  FSkeletalMeshRenderData *pFVar3;
  longlong lVar4;
  ForElementType<FMaterialRenderProxy_*> FVar5;
  FMaterialRenderProxy *pFVar6;
  FMaterialRenderProxy *this_00;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  longlong lVar10;
  FMaterial *this_01;
  uint uVar11;
  ForElementType<FMaterialRenderProxy_*> FVar12;
  longlong lVar13;
  uint uVar14;
  FWN_ISKM_ProxyLODData *pFVar15;
  ushort *puVar16;
  longlong lVar17;
  uint local_res18;
  longlong local_68;
  
  if (((this->MeshRenderDataPtr).Object != (FWN_ISKM_MeshRenderData *)0x0) &&
     (this->SkeletalMeshRenderData != (FSkeletalMeshRenderData *)0x0)) {
    lVar10 = (longlong)(this->SkeletalMeshRenderData->LODRenderData).Array.ArrayNum;
    local_res18 = 0;
    if (0 < lVar10) {
      pFVar15 = this->LODDatas;
      local_68 = 0;
      do {
        pFVar3 = this->SkeletalMeshRenderData;
        uVar14 = 0;
        if ((int)local_res18 < (pFVar3->LODRenderData).Array.ArrayNum) {
          uVar14 = ~local_res18 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar4 = *(longlong *)((pFVar3->LODRenderData).Array.AllocatorInstance.Data + local_68 * 8);
        if ((*(int *)(lVar4 + 0x18) < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("skmLODRenderData.RenderSections.Num() > 0",
                               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Renderer.cpp"
                               ,0x1d0,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar15->bAnySectionCastShadow = 0;
        pFVar15->bAllMaterialsSame = 1;
        pFVar15->bAllSectionsCastShadow = 1;
        pFVar15->bUseUnifiedMesh = 1;
        pFVar15->NumSectionsTriangles = 0;
        pFVar15->NumSectionsVertices = 0;
        iVar2 = *(int *)(lVar4 + 0x18);
        lVar13 = (longlong)iVar2;
        if ((iVar2 < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar1 = **(ushort **)(lVar4 + 0x10);
        if (((this->MaterialProxies).ArrayNum <= (int)(uint)uVar1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar5 = (this->MaterialProxies).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FMaterialRenderProxy_*>)&this->MaterialProxies;
        if (FVar5 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
          FVar12 = FVar5;
        }
        uVar14 = 0;
        pFVar6 = *(FMaterialRenderProxy **)((longlong)FVar12 + (ulonglong)uVar1 * 8);
        if (0 < iVar2) {
          lVar17 = 0;
          do {
            uVar11 = 0;
            if ((int)uVar14 < *(int *)(lVar4 + 0x18)) {
              uVar11 = ~uVar14 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            puVar16 = (ushort *)(*(longlong *)(lVar4 + 0x10) + lVar17);
            uVar1 = *puVar16;
            if (((this->MaterialProxies).ArrayNum <= (int)(uint)uVar1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar5 = (this->MaterialProxies).AllocatorInstance.SecondaryData;
            FVar12 = (ForElementType<FMaterialRenderProxy_*>)&this->MaterialProxies;
            if (FVar5 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
              FVar12 = FVar5;
            }
            this_00 = *(FMaterialRenderProxy **)((longlong)FVar12 + (ulonglong)uVar1 * 8);
            if ((this_00 == (FMaterialRenderProxy *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("materialProxy",
                                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Renderer.cpp"
                                   ,0x1e0,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            this_01 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                                (this_00,*(Type *)(this->_padding_ + 8));
            uVar11 = ((uint)*(byte *)((longlong)puVar16 + 0xd) << 3 | *(uint *)pFVar15) & 8 ^
                     *(uint *)pFVar15 & 0xfffffff7;
            *(uint *)pFVar15 = uVar11;
            uVar11 = ((uint)*(byte *)((longlong)puVar16 + 0xd) << 2 | 0xfffffffb) & uVar11;
            *(uint *)pFVar15 = uVar11;
            pFVar15->NumSectionsTriangles = pFVar15->NumSectionsTriangles + *(int *)(puVar16 + 4);
            pFVar15->NumSectionsVertices = pFVar15->NumSectionsVertices + *(int *)(puVar16 + 0x24);
            if (uVar14 != 0) {
              *(uint *)pFVar15 = (this_00 == pFVar6 | 0xfffffffe) & uVar11;
              bVar8 = FMaterial::WritesEveryPixel(this_01,false);
              if ((bVar8) &&
                 (cVar9 = (**(code **)(this_01->_padding_ + 0x48))(this_01), cVar9 == '\0')) {
                bVar8 = FMaterial::MaterialModifiesMeshPosition_RenderThread(this_01);
                uVar11 = 0xffffffff;
                if (bVar8) goto LAB_14a846af8;
              }
              else {
LAB_14a846af8:
                uVar11 = 0xfffffffd;
              }
              *(uint *)pFVar15 = *(uint *)pFVar15 & uVar11;
            }
            uVar14 = uVar14 + 1;
            lVar17 = lVar17 + 0x118;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        pFVar15 = pFVar15 + 1;
        local_res18 = local_res18 + 1;
        local_68 = local_68 + 1;
      } while (local_68 < lVar10);
    }
    CreateBuffers(this,param_1);
  }
  return;
}

// DestroyRenderThreadResources @ 14a847990

void __thiscall FWN_ISKM_Proxy::DestroyRenderThreadResources(FWN_ISKM_Proxy *this)

{
  return;
}

// GetDynamicMeshElements @ 14a84a240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_ISKM_Proxy::GetDynamicMeshElements
          (FWN_ISKM_Proxy *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  FSceneView *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_ISKM_GetDynamicMeshElements> FVar12;
  FPrimitiveDrawInterface *pFVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  FName local_c0;
  FColor_u_0 local_b8 [2];
  FName local_b0;
  FName local_a8;
  FWN_ISKM_MeshGenerator local_98;
  FName local_48 [2];
  
  uVar15 = 0;
  FVar12 = StatPtr_STAT_ISKM_GetDynamicMeshElements;
  if (StatPtr_STAT_ISKM_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<FStat_STAT_ISKM_GetDynamicMeshElements>)0x0) {
    pFVar11 = ::FName::FName(local_48,"STAT_ISKM_GetDynamicMeshElements");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_ISKM_GetDynamicMeshElements>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ISKM_GetDynamicMeshElements,
                        *pFVar11,L"GetDynamicMeshElements","STATGROUP_ISKM","STATCAT_Advanced",
                        L"ISKM",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_c0 = *(FName *)FVar12;
  bVar4 = false;
  bVar6 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  bVar8 = false;
  bVar9 = false;
  if ((local_c0.ComparisonIndex.Value.Value != 0) ||
     (bVar3 = bVar4, bVar5 = bVar6, local_c0.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar6 = true;
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b0.ComparisonIndex.Value = local_c0.ComparisonIndex.Value.Value;
        local_b0.Number = local_c0.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Renderer.cpp"
                   ,0x181);
        bVar4 = true;
        bVar6 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    bVar3 = bVar4;
    bVar5 = bVar6;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_c0,CycleScopeStart);
      bVar8 = true;
      goto LAB_14a84a3b6;
    }
  }
  bVar6 = bVar9;
  bVar4 = bVar8;
  bVar8 = false;
  local_c0 = local_a8;
LAB_14a84a3b6:
  if (((((this->MeshRenderDataPtr).Object != (FWN_ISKM_MeshRenderData *)0x0) &&
       (this->SkeletalMeshRenderData != (FSkeletalMeshRenderData *)0x0)) &&
      (this->DynamicData != (FWN_ISKM_DynamicData *)0x0)) &&
     (0 < (this->DynamicData->InstanceDatas).ArrayNum)) {
    iVar14 = param_1->ArrayNum;
    local_98.Collector = param_4;
    local_98.WireframeMaterialProxy = (FColoredMaterialRenderProxy *)0x0;
    local_98.UniformBuffer = (TUniformBufferRef<FWN_ISKM_VertexFactoryParameters>)0x0;
    local_98.bForShadow = false;
    local_98.View = (FSceneView *)0x0;
    local_98.ViewIndex = -1;
    local_98.InstanceUniformBuffer =
         (TUniformBufferRef<FInstancedStaticMeshVertexFactoryUniformShaderParameters>)0x0;
    local_98.Proxy = this;
    local_98.ViewFamily = param_2;
    if (0 < iVar14) {
      uVar18 = 1;
      uVar17 = uVar15;
      do {
        uVar16 = (uint)uVar15;
        if ((param_3 & uVar18) != 0) {
          uVar10 = 0;
          if ((int)uVar16 < iVar14) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = *(FSceneView **)((param_1->AllocatorInstance).Data + uVar17);
          if (pFVar1->DynamicMeshElementsShadowCullFrustum == (FConvexVolume *)0x0) {
            if ((pFVar1->bIsInstancedStereoEnabled == false) ||
               (pFVar1->StereoPass != eSSP_SECONDARY)) {
              FWN_ISKM_MeshGenerator::GenerateBatches(&local_98,false,pFVar1,uVar16);
            }
            lVar7 = this->_padding_;
            pFVar13 = FMeshElementCollector::GetPDI(param_4,uVar16);
            FPrimitiveSceneProxy::RenderBounds
                      ((FPrimitiveSceneProxy *)this,pFVar13,&param_2->EngineShowFlags,
                       (TBoxSphereBounds<double,double> *)&this->_padding_,(lVar7 & 0x600) != 0);
          }
          else {
            if ((param_1->ArrayNum != 1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InViews.Num() == 1",
                                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Renderer.cpp"
                                   ,0x198,L""), bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FWN_ISKM_MeshGenerator::GenerateBatches(&local_98,true,pFVar1,uVar16);
          }
        }
        iVar14 = param_1->ArrayNum;
        uVar15 = (ulonglong)(uVar16 + 1);
        uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
        uVar17 = uVar17 + 8;
        bVar3 = bVar4;
        bVar5 = bVar6;
      } while ((int)(uVar16 + 1) < iVar14);
    }
    if (local_98.InstanceUniformBuffer !=
        (TUniformBufferRef<FInstancedStaticMeshVertexFactoryUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)local_98.InstanceUniformBuffer);
    }
    if (local_98.UniformBuffer != (TUniformBufferRef<FWN_ISKM_VertexFactoryParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)local_98.UniformBuffer);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(local_c0,CycleScopeEnd);
  }
  return;
}

// GetLightRelevance @ 14a84ab10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FWN_ISKM_Proxy::GetLightRelevance
          (FWN_ISKM_Proxy *this,FLightSceneProxy *param_1,bool *param_2,bool *param_3,bool *param_4,
          bool *param_5)

{
  *param_2 = true;
  *param_3 = true;
  *param_4 = false;
  *param_5 = true;
  return;
}

// GetMemoryFootprint @ 14a84adc0

uint __thiscall FWN_ISKM_Proxy::GetMemoryFootprint(FWN_ISKM_Proxy *this)

{
  return *(int *)((longlong)&this->_padding_ + 4) * 4 + 0x4f0;
}

// GetOcclusionQueries @ 14a84ae30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> * __thiscall
FWN_ISKM_Proxy::GetOcclusionQueries(FWN_ISKM_Proxy *this,FSceneView *param_1)

{
  return (TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetTypeHash @ 14a84b9a0

ulong64 __thiscall FWN_ISKM_Proxy::GetTypeHash(FWN_ISKM_Proxy *this)

{
  return 0x1552c8bb8;
}

// GetViewRelevance @ 14a84bf50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FWN_ISKM_Proxy::GetViewRelevance
          (FWN_ISKM_Proxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,FSceneView *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar4 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  uVar6 = 0;
  if ((!bVar4) || (uVar5 = 4, (param_1->Family->EngineShowFlags).SkeletalMeshes == 0)) {
    uVar5 = uVar6;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar5;
  bVar4 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 3 | 2;
  uVar5 = -(uint)((this->_padding_ & 0xc000000) != 0);
  uVar7 = uVar5 & 0x40 | *(uint *)&__return_storage_ptr__->field_0x8 & 0xffffffbf;
  __return_storage_ptr__->bRenderInDepthPass = uVar5 >> 6;
  uVar7 = ((uint)*(byte *)((longlong)&this->_padding_ + 3) << 4 ^ uVar7) & 0x80 ^ uVar7;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar7;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
    uVar6 = 0x2000;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar6 | uVar7 & 0xffffdfff;
  bVar4 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 5;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 ^
       ((uint)*(byte *)((longlong)&this->_padding_ + 7) << 0xe ^
       *(uint *)&__return_storage_ptr__->field_0x8) & 0x4000;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  cVar2 = (char)this->_padding_;
  if (((((cVar2 == '\x02') || (cVar2 == '\x01')) || ((this->_padding_ & 0x1000000000000) != 0)) ||
      ((bVar3 = *(byte *)((longlong)&this->_padding_ + 2), (char)bVar3 < '\0' ||
       (uVar6 = 0, (bVar3 & 0x72) != 0)))) &&
     ((uVar6 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar6 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar6;
  return __return_storage_ptr__;
}

// HasSubprimitiveOcclusionQueries @ 14a84c100

bool __thiscall FWN_ISKM_Proxy::HasSubprimitiveOcclusionQueries(FWN_ISKM_Proxy *this)

{
  return false;
}

// SetDynamicData_RenderThread @ 14a853fc0

void __thiscall
FWN_ISKM_Proxy::SetDynamicData_RenderThread(FWN_ISKM_Proxy *this,FWN_ISKM_DynamicData *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != this->UpdatedDynamicData) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDynamicData == UpdatedDynamicData",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Renderer.cpp"
                       ,0x172,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->DynamicData != (FWN_ISKM_DynamicData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicData == nullptr",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Renderer.cpp"
                       ,0x173,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->CreationFrameNumber = GFrameNumberRenderThread;
  this->DynamicData = param_1;
  return;
}

// UpdateInstanceSceneDataBuffersImpl @ 14a857f40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FWN_ISKM_Proxy::UpdateInstanceSceneDataBuffersImpl
          (FWN_ISKM_Proxy *this,FWN_ISKM_DynamicData *param_1)

{
  FCurrentWriterTag *pFVar1;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  FAccessTag FVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int *piVar29;
  longlong lVar30;
  uint uVar31;
  ulong64 uVar32;
  longlong lVar33;
  longlong lVar34;
  uint uVar35;
  atomic<unsigned_int> aVar36;
  longlong lVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  byte local_e8;
  
  if (param_1 == (FWN_ISKM_DynamicData *)0x0) {
LAB_14a857f7a:
    bVar23 = false;
    if (param_1 != (FWN_ISKM_DynamicData *)0x0) goto LAB_14a857f82;
  }
  else {
    if (this->UpdatedDynamicData == param_1) {
      return;
    }
    if ((param_1->InstanceDatas).ArrayNum < 1) goto LAB_14a857f7a;
    bVar23 = true;
LAB_14a857f82:
    local_e8 = 1;
    if (0 < (param_1->CustomDatas).ArrayNum) goto LAB_14a857f92;
  }
  local_e8 = 0;
LAB_14a857f92:
  uVar27 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  uVar32 = 1;
  uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
  aVar36 = (atomic<unsigned_int>)(uVar27 >> 0x10 ^ uVar27);
  FVar12.Kind = Writer;
  FVar12.WriterTag = (uint)aVar36;
  if ((aVar36 == (atomic<unsigned_int>)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("AccessTag.Kind == FAccessTag::EKind::Writer && AccessTag.WriterTag != 0u"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0xf8,L""), bVar22)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar1 = &(this->InstanceSceneDataBuffersImpl).CurrentWriterTag;
  LOCK();
  bVar22 = pFVar1->Value == (atomic<unsigned_int>)0x0;
  if (bVar22) {
    pFVar1->Value = aVar36;
  }
  UNLOCK();
  if ((!bVar22) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentWriterTag.Value.compare_exchange_strong(PrevTagValue, AccessTag.WriterTag)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0xfb,L""), bVar22)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = &(this->InstanceSceneDataBuffersImpl).PrevInstanceToPrimitiveRelative;
  pTVar2 = &(this->InstanceSceneDataBuffersImpl).InstanceLocalBounds;
  (this->InstanceSceneDataBuffersImpl).Flags.Packed =
       (ushort)(local_e8 | 0x12) * 2 | (this->InstanceSceneDataBuffersImpl).Flags.Packed & 0xfffd;
  iVar28 = 0;
  if ((bVar23) &&
     (uVar32 = (ulong64)(uint)(param_1->InstanceDatas).ArrayNum, iVar28 = 0, local_e8 != 0)) {
    iVar28 = (param_1->CustomDatas).ArrayNum;
  }
  FInstanceSceneDataBuffers::SetPrimitiveLocalToWorld
            (&this->InstanceSceneDataBuffersImpl,&UE::Math::TMatrix<double>::Identity,FVar12);
  iVar25 = (this->InstanceSceneDataBuffersImpl).InstanceToPrimitiveRelative.ArrayMax;
  (this->InstanceSceneDataBuffersImpl).InstanceToPrimitiveRelative.ArrayNum = 0;
  if (iVar25 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,0,&(this->InstanceSceneDataBuffersImpl).InstanceToPrimitiveRelative.
                         AllocatorInstance,0,
               &(this->InstanceSceneDataBuffersImpl).InstanceToPrimitiveRelative.ArrayMax);
  }
  uVar27 = (uint)uVar32;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNum
            (&(this->InstanceSceneDataBuffersImpl).InstanceToPrimitiveRelative,uVar27,Default);
  iVar25 = (this->InstanceSceneDataBuffersImpl).PrevInstanceToPrimitiveRelative.ArrayMax;
  (this->InstanceSceneDataBuffersImpl).PrevInstanceToPrimitiveRelative.ArrayNum = 0;
  if (iVar25 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,0,&this_00->AllocatorInstance,0,
               &(this->InstanceSceneDataBuffersImpl).PrevInstanceToPrimitiveRelative.ArrayMax);
  }
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar27,Default);
  iVar25 = (this->InstanceSceneDataBuffersImpl).InstanceLocalBounds.ArrayMax;
  (this->InstanceSceneDataBuffersImpl).InstanceLocalBounds.ArrayNum = 0;
  if (iVar25 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&pTVar2->AllocatorInstance,0,
               &(this->InstanceSceneDataBuffersImpl).InstanceLocalBounds.ArrayMax);
  }
  piVar29 = &(this->InstanceSceneDataBuffersImpl).InstanceLocalBounds.ArrayNum;
  iVar25 = *piVar29;
  if (iVar25 < (int)uVar27) {
    iVar24 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x18,4,uVar27 - iVar25,&pTVar2->AllocatorInstance,piVar29,
                        &(this->InstanceSceneDataBuffersImpl).InstanceLocalBounds.ArrayMax);
    DefaultConstructItems<FRenderBounds,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar24 * 0x18,uVar27 - iVar25);
  }
  else {
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar32);
    }
    if ((int)uVar27 < iVar25) {
      uVar35 = iVar25 - uVar27;
      if (((int)(uVar35 | uVar27) < 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar35 != 0) {
        pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar27 * 0x18;
        iVar25 = ((this->InstanceSceneDataBuffersImpl).InstanceLocalBounds.ArrayNum - uVar35) -
                 uVar27;
        if (iVar25 != 0) {
          memmove(pFVar3,pFVar3 + (longlong)(int)uVar35 * 0x18,(longlong)iVar25 * 0x18);
        }
        iVar25 = (this->InstanceSceneDataBuffersImpl).InstanceLocalBounds.ArrayNum - uVar35;
        (this->InstanceSceneDataBuffersImpl).InstanceLocalBounds.ArrayNum = iVar25;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,&pTVar2->AllocatorInstance,iVar25,
                   &(this->InstanceSceneDataBuffersImpl).InstanceLocalBounds.ArrayMax);
      }
    }
  }
  iVar25 = (this->InstanceSceneDataBuffersImpl).InstanceCustomData.ArrayMax;
  (this->InstanceSceneDataBuffersImpl).InstanceCustomData.ArrayNum = 0;
  if (iVar25 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->InstanceSceneDataBuffersImpl).InstanceCustomData.AllocatorInstance,0,
               &(this->InstanceSceneDataBuffersImpl).InstanceCustomData.ArrayMax);
  }
  if (local_e8 != 0) {
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum
              (&(this->InstanceSceneDataBuffersImpl).InstanceCustomData,iVar28,Default);
  }
  uVar21 = FRenderTransform::Identity.Origin.field0_0x0._4_8_;
  uVar20 = FRenderTransform::Identity._32_8_;
  uVar19 = FRenderTransform::Identity.TransformRows[2].field0_0x0._0_8_;
  uVar18 = FRenderTransform::Identity.TransformRows[1].field0_0x0._4_8_;
  uVar17 = FRenderTransform::Identity.TransformRows._8_8_;
  uVar16 = FRenderTransform::Identity.TransformRows[0].field0_0x0._0_8_;
  fVar15 = __real_bf99999a;
  fVar14 = __real_3f99999a;
  fVar13 = __real_400ccccd;
  if (bVar23) {
    uVar35 = 0;
    if (0 < (int)uVar27) {
      lVar37 = 0;
      lVar33 = 0;
      lVar34 = 0;
      lVar30 = 0;
      do {
        uVar31 = ~uVar35 >> 0x1f;
        uVar26 = 0;
        if ((int)uVar35 < (param_1->InstanceDatas).ArrayNum) {
          uVar26 = uVar31;
        }
        if ((uVar26 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (param_1->InstanceDatas).AllocatorInstance.Data;
        pFVar3 = pFVar5 + lVar30 + 0x40;
        fVar4 = *(float *)pFVar3;
        fVar44 = *(float *)(pFVar3 + 4);
        fVar7 = *(float *)(pFVar3 + 8);
        fVar8 = *(float *)(pFVar3 + 0xc);
        fVar38 = fVar44 + fVar44;
        fVar39 = fVar7 + fVar7;
        auVar45 = blendps(*(undefined1 (*) [16])(pFVar5 + lVar30 + 0x50),
                          (undefined1  [16])GlobalVectorConstants::FloatOne,8);
        fVar43 = (fVar4 + fVar4) * fVar4;
        fVar42 = fVar8 * (fVar4 + fVar4);
        pFVar3 = pFVar5 + lVar30 + 0x60;
        fVar9 = *(float *)pFVar3;
        fVar10 = *(float *)(pFVar3 + 4);
        fVar11 = *(float *)(pFVar3 + 8);
        uVar26 = 0;
        if ((int)uVar35 < (this->InstanceSceneDataBuffersImpl).InstanceToPrimitiveRelative.ArrayNum)
        {
          uVar26 = uVar31;
        }
        auVar40._0_4_ =
             (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar39 * fVar7 + fVar38 * fVar44)) *
             fVar9;
        auVar40._4_4_ =
             (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar39 * fVar7 + fVar43)) * fVar10;
        auVar40._8_4_ =
             (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar38 * fVar44 + fVar43)) * fVar11;
        auVar40._12_4_ =
             (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar43 + fVar43)) *
             *(float *)(pFVar3 + 0xc);
        auVar40 = insertps(auVar40,auVar40,8);
        if ((uVar26 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = (this->InstanceSceneDataBuffersImpl).InstanceToPrimitiveRelative.AllocatorInstance.
                 Data;
        *(int *)(pFVar3 + lVar34) = auVar40._0_4_;
        *(float *)(pFVar3 + lVar34 + 4) = (fVar8 * fVar39 + fVar38 * fVar4) * fVar9;
        *(float *)(pFVar3 + lVar34 + 8) = fVar9 * (fVar39 * fVar4 - fVar8 * fVar38);
        *(float *)(pFVar3 + lVar34 + 0xc) = fVar10 * (fVar38 * fVar4 - fVar8 * fVar39);
        *(int *)(pFVar3 + lVar34 + 0x10) = auVar40._4_4_;
        *(float *)(pFVar3 + lVar34 + 0x14) = (fVar42 + fVar39 * fVar44) * fVar10;
        *(float *)(pFVar3 + lVar34 + 0x18) = (fVar8 * fVar38 + fVar39 * fVar4) * fVar11;
        *(float *)(pFVar3 + lVar34 + 0x1c) = fVar11 * (fVar39 * fVar44 - fVar42);
        *(int *)(pFVar3 + lVar34 + 0x20) = auVar40._8_4_;
        *(int *)(pFVar3 + lVar34 + 0x24) = auVar45._0_4_;
        *(int *)(pFVar3 + lVar34 + 0x28) = auVar45._4_4_;
        *(int *)(pFVar3 + lVar34 + 0x2c) = auVar45._8_4_;
        pFVar3 = pFVar5 + lVar30 + 0x10;
        fVar4 = *(float *)pFVar3;
        fVar44 = *(float *)(pFVar3 + 4);
        fVar7 = *(float *)(pFVar3 + 8);
        fVar8 = *(float *)(pFVar3 + 0xc);
        auVar45 = blendps(*(undefined1 (*) [16])(pFVar5 + lVar30 + 0x20),
                          (undefined1  [16])GlobalVectorConstants::FloatOne,8);
        fVar38 = fVar44 + fVar44;
        fVar39 = fVar7 + fVar7;
        fVar43 = (fVar4 + fVar4) * fVar4;
        fVar42 = fVar8 * (fVar4 + fVar4);
        pFVar3 = pFVar5 + lVar30 + 0x30;
        fVar9 = *(float *)pFVar3;
        fVar10 = *(float *)(pFVar3 + 4);
        fVar11 = *(float *)(pFVar3 + 8);
        uVar26 = 0;
        if ((int)uVar35 <
            (this->InstanceSceneDataBuffersImpl).PrevInstanceToPrimitiveRelative.ArrayNum) {
          uVar26 = uVar31;
        }
        auVar41._0_4_ =
             (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar39 * fVar7 + fVar38 * fVar44)) *
             fVar9;
        auVar41._4_4_ =
             (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar39 * fVar7 + fVar43)) * fVar10;
        auVar41._8_4_ =
             (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar38 * fVar44 + fVar43)) * fVar11;
        auVar41._12_4_ =
             (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar43 + fVar43)) *
             *(float *)(pFVar3 + 0xc);
        auVar40 = insertps(auVar41,auVar41,8);
        if ((uVar26 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = (this_00->AllocatorInstance).Data;
        *(int *)(pFVar3 + lVar34) = auVar40._0_4_;
        *(float *)(pFVar3 + lVar34 + 4) = (fVar8 * fVar39 + fVar38 * fVar4) * fVar9;
        *(float *)(pFVar3 + lVar34 + 8) = fVar9 * (fVar39 * fVar4 - fVar8 * fVar38);
        *(float *)(pFVar3 + lVar34 + 0xc) = fVar10 * (fVar38 * fVar4 - fVar8 * fVar39);
        *(int *)(pFVar3 + lVar34 + 0x10) = auVar40._4_4_;
        *(float *)(pFVar3 + lVar34 + 0x14) = (fVar42 + fVar39 * fVar44) * fVar10;
        *(float *)(pFVar3 + lVar34 + 0x18) = (fVar8 * fVar38 + fVar39 * fVar4) * fVar11;
        *(float *)(pFVar3 + lVar34 + 0x1c) = fVar11 * (fVar39 * fVar44 - fVar42);
        *(int *)(pFVar3 + lVar34 + 0x20) = auVar40._8_4_;
        *(int *)(pFVar3 + lVar34 + 0x24) = auVar45._0_4_;
        *(int *)(pFVar3 + lVar34 + 0x28) = auVar45._4_4_;
        *(int *)(pFVar3 + lVar34 + 0x2c) = auVar45._8_4_;
        fVar4 = *(float *)(pFVar5 + lVar30 + 0x74);
        fVar44 = fVar4 * fVar14;
        uVar26 = 0;
        if ((int)uVar35 < (this->InstanceSceneDataBuffersImpl).InstanceLocalBounds.ArrayNum) {
          uVar26 = uVar31;
        }
        if ((uVar26 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        uVar35 = uVar35 + 1;
        lVar37 = lVar37 + 1;
        lVar30 = lVar30 + 0x80;
        lVar34 = lVar34 + 0x30;
        *(float *)(pFVar3 + lVar33) = fVar4 * fVar15;
        *(float *)(pFVar3 + lVar33 + 4) = fVar4 * fVar15;
        *(float *)(pFVar3 + lVar33 + 8) = fVar4 - fVar44;
        *(float *)(pFVar3 + lVar33 + 0xc) = fVar44;
        *(float *)(pFVar3 + lVar33 + 0x10) = fVar44;
        *(float *)(pFVar3 + lVar33 + 0x14) = fVar4 * fVar13;
        lVar33 = lVar33 + 0x18;
      } while (lVar37 < (int)uVar27);
    }
    if (local_e8 != 0) {
      memcpy((this->InstanceSceneDataBuffersImpl).InstanceCustomData.AllocatorInstance.Data,
             (param_1->CustomDatas).AllocatorInstance.Data,(longlong)iVar28 << 2);
    }
  }
  else {
    if (((this->InstanceSceneDataBuffersImpl).InstanceToPrimitiveRelative.ArrayNum < 1) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (this->InstanceSceneDataBuffersImpl).InstanceToPrimitiveRelative.AllocatorInstance.Data
    ;
    *(undefined8 *)pFVar3 = uVar16;
    *(undefined8 *)(pFVar3 + 8) = uVar17;
    *(undefined8 *)(pFVar3 + 0x10) = uVar18;
    *(undefined8 *)(pFVar3 + 0x18) = uVar19;
    *(undefined8 *)(pFVar3 + 0x20) = uVar20;
    *(undefined8 *)(pFVar3 + 0x28) = uVar21;
    uVar21 = FRenderTransform::Identity.Origin.field0_0x0._4_8_;
    uVar20 = FRenderTransform::Identity._32_8_;
    uVar19 = FRenderTransform::Identity.TransformRows[2].field0_0x0._0_8_;
    uVar18 = FRenderTransform::Identity.TransformRows[1].field0_0x0._4_8_;
    uVar17 = FRenderTransform::Identity.TransformRows._8_8_;
    uVar16 = FRenderTransform::Identity.TransformRows[0].field0_0x0._0_8_;
    if (((this->InstanceSceneDataBuffersImpl).PrevInstanceToPrimitiveRelative.ArrayNum < 1) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (this->InstanceSceneDataBuffersImpl).PrevInstanceToPrimitiveRelative.AllocatorInstance.
             Data;
    *(undefined8 *)pFVar3 = uVar16;
    *(undefined8 *)(pFVar3 + 8) = uVar17;
    *(undefined8 *)(pFVar3 + 0x10) = uVar18;
    *(undefined8 *)(pFVar3 + 0x18) = uVar19;
    *(undefined8 *)(pFVar3 + 0x20) = uVar20;
    *(undefined8 *)(pFVar3 + 0x28) = uVar21;
    if (((this->InstanceSceneDataBuffersImpl).InstanceLocalBounds.ArrayNum < 1) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    *(undefined4 *)pFVar3 = 0xba83126f;
    *(undefined4 *)(pFVar3 + 4) = 0xba83126f;
    *(undefined4 *)(pFVar3 + 8) = 0xba83126f;
    *(undefined4 *)(pFVar3 + 0xc) = 0x3a83126f;
    *(undefined4 *)(pFVar3 + 0x10) = 0x3a83126f;
    *(undefined4 *)(pFVar3 + 0x14) = 0x3a83126f;
  }
  if ((this->InstanceSceneDataBuffersImpl).bInstanceDataIsGPUOnly) {
    iVar28 = (this->InstanceSceneDataBuffersImpl).InstanceToPrimitiveRelative.ArrayNum;
  }
  else {
    iVar28 = (this->InstanceSceneDataBuffersImpl).NumInstancesGPUOnly;
  }
  if ((iVar28 != 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("bInstanceDataIsGPUOnly ? InstanceToPrimitiveRelative.IsEmpty() : (NumInstancesGPUOnly == 0)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0x117,L""), bVar23)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((aVar36 == (atomic<unsigned_int>)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("AccessTag.Kind == FAccessTag::EKind::Writer && AccessTag.WriterTag != 0u"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0x118,L""), bVar23)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar1 = &(this->InstanceSceneDataBuffersImpl).CurrentWriterTag;
  LOCK();
  bVar23 = aVar36 == pFVar1->Value;
  if (bVar23) {
    pFVar1->Value = (atomic<unsigned_int>)0x0;
  }
  UNLOCK();
  if ((!bVar23) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentWriterTag.Value.compare_exchange_strong(PrevTagValue, 0U)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                          ,0x11b,L""), bVar23)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->UpdatedDynamicData = param_1;
  return;
}

