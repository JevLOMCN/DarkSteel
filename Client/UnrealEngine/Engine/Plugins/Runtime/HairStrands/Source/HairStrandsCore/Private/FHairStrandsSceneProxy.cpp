// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 15

// FHairStrandsSceneProxy @ 14dfeec00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsSceneProxy * __thiscall
FHairStrandsSceneProxy::FHairStrandsSceneProxy
          (FHairStrandsSceneProxy *this,UGroomComponent *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte *pbVar4;
  TArray<TRefCountPtr<FHairGroupInstance>,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  TObjectPtr<UMaterialInterface>_u_0 TVar7;
  FHairGroupInstance *pFVar8;
  FHairStrandsRestResource *pFVar9;
  UGroomAsset *pUVar10;
  bool bVar11;
  bool bVar12;
  EShaderPlatform EVar13;
  EShaderPlatform EVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  FHairStrandsSceneProxy *pFVar18;
  TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *pTVar19;
  TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_> *pTVar20;
  FHairStrandsVertexFactory *this_00;
  FHairCardsVertexFactory *pFVar21;
  TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> *pTVar22;
  UMaterialInterface *pUVar23;
  undefined8 uVar24;
  TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_> *pTVar25;
  UMaterialInterface *pUVar26;
  TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> *pTVar27;
  FSceneInterface *pFVar28;
  TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_> *pTVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  ulonglong uVar32;
  FScriptContainerElement *pFVar33;
  longlong lVar34;
  longlong lVar35;
  uint uVar36;
  longlong lVar37;
  TArray<FHairStrandsSceneProxy::FHairGroupMaterialProxy,TSizedDefaultAllocator<32>_> *pTVar38;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined1 local_a3 [3];
  uint local_a0;
  uint local_9c;
  longlong local_98;
  Type local_90;
  uint local_8c;
  FScriptContainerElement *local_88;
  TArray<FHairStrandsSceneProxy::FHairGroupMaterialProxy,TSizedDefaultAllocator<32>_> *local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  
  local_60 = 0;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  this->CurveResourceData = (FRenderCurveResourceData *)0x0;
  pTVar38 = &this->HairGroupMaterialProxies;
  pTVar5 = &this->HairGroupInstances;
  this->_padding_ = (longlong)&___7FHairStrandsSceneProxy__6B_;
  piVar1 = &(this->HairGroupInstances).ArrayMax;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->HairGroupMaterialProxies).ArrayNum;
  (this->HairGroupInstances).ArrayNum = 0;
  piVar3 = &(this->HairGroupMaterialProxies).ArrayMax;
  *piVar1 = 0;
  (pTVar38->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar3 = 0;
  this->ComponentId = 0;
  pcVar6 = *(code **)(*(longlong *)param_1 + 0xaa8);
  local_80 = pTVar38;
  FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
  (*pcVar6)(param_1,&this->MaterialRelevance);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x40;
  pbVar4 = (byte *)((longlong)&this->_padding_ + 7);
  *pbVar4 = *pbVar4 | 4;
  this->Strands_DebugMaterial = (UMaterialInterface *)0x0;
  uVar17 = (param_1->HairGroupInstances).ArrayNum;
  iVar16 = *piVar2;
  if (iVar16 < (int)uVar17) {
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x28,8,uVar17 - iVar16,&pTVar38->AllocatorInstance,piVar2,piVar3);
    DefaultConstructItems<FHairStrandsSceneProxy::FHairGroupMaterialProxy,int>
              ((pTVar38->AllocatorInstance).Data + (longlong)iVar15 * 0x28,uVar17 - iVar16);
  }
  else {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if ((int)uVar17 < iVar16) {
      uVar30 = iVar16 - uVar17;
      if (((int)(uVar17 | uVar30) < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
        return pFVar18;
      }
      if (uVar30 != 0) {
        TArray<FHairStrandsSceneProxy::FHairGroupMaterialProxy,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(pTVar38,uVar17,uVar30);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&pTVar38->AllocatorInstance,*piVar2,piVar3);
      }
    }
  }
  if (pTVar5 != &param_1->HairGroupInstances) {
    DestructItems<TRefCountPtr<FHairGroupInstance>,int>
              ((TRefCountPtr<FHairGroupInstance> *)(pTVar5->AllocatorInstance).Data,
               (this->HairGroupInstances).ArrayNum);
    iVar16 = (param_1->HairGroupInstances).ArrayNum;
    pFVar31 = (param_1->HairGroupInstances).AllocatorInstance.Data;
    (this->HairGroupInstances).ArrayNum = iVar16;
    if ((iVar16 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar16,*piVar1,&pTVar5->AllocatorInstance,iVar16,piVar1);
      ConstructItems<TRefCountPtr<FHairGroupInstance>,TRefCountPtr<FHairGroupInstance>,int>
                ((pTVar5->AllocatorInstance).Data,(TRefCountPtr<FHairGroupInstance> *)pFVar31,iVar16
                );
    }
  }
  if (((param_1->GroomAsset).field0_0x0.DebugPtr == (UGroomAsset *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Component->GroomAsset",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                          ,0x1cd,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
    return pFVar18;
  }
  iVar16 = UGroomAsset::GetNumHairGroups((param_1->GroomAsset).field0_0x0.DebugPtr);
  if ((iVar16 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Component->GroomAsset->GetNumHairGroups() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                          ,0x1ce,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
    return pFVar18;
  }
  this->ComponentId = *(uint *)&param_1->field_0x344;
  TVar7 = (param_1->Strands_DebugMaterial).field0_0x0;
  pbVar4 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar4 = *pbVar4 & 0x7f;
  this->Strands_DebugMaterial = (UMaterialInterface *)TVar7;
  bVar11 = IsHairStrandsBindingEnable();
  if (((bVar11) && (param_1->RegisteredMeshComponent != (UMeshComponent *)0x0)) ||
     (0 < GHairStrands_ForceVelocityOutput)) {
    pbVar4 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar4 = *pbVar4 | 0x80;
  }
  if (((this->HairGroupInstances).ArrayNum == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("HairGroupInstances.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                          ,0x1d7,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
    return pFVar18;
  }
  local_90 = ((FSceneInterface *)this->_padding_)->FeatureLevel;
  EVar13 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
  iVar16 = UGroomAsset::GetNumHairGroups((param_1->GroomAsset).field0_0x0.DebugPtr);
  pTVar19 = UGroomAsset::GetHairGroupsPlatformData((param_1->GroomAsset).field0_0x0.DebugPtr);
  if ((pTVar19->ArrayNum != (this->HairGroupInstances).ArrayNum) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Component->GroomAsset->GetHairGroupsPlatformData().Num() == HairGroupInstances.Num()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                          ,0x1dd,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
    return pFVar18;
  }
  local_a0 = 0;
  if (0 < iVar16) {
    local_98 = 0;
    local_58 = (longlong)iVar16;
    do {
      lVar37 = local_98;
      uVar17 = local_a0;
      pTVar20 = UGroomAsset::GetHairGroupsInfo((param_1->GroomAsset).field0_0x0.DebugPtr);
      uVar36 = ~uVar17 >> 0x1f;
      uVar30 = 0;
      if ((int)uVar17 < pTVar20->ArrayNum) {
        uVar30 = uVar36;
      }
      local_9c = uVar36;
      if ((uVar30 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
        return pFVar18;
      }
      pTVar19 = UGroomAsset::GetHairGroupsPlatformData((param_1->GroomAsset).field0_0x0.DebugPtr);
      uVar30 = 0;
      if ((int)uVar17 < pTVar19->ArrayNum) {
        uVar30 = uVar36;
      }
      if ((uVar30 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
        return pFVar18;
      }
      pFVar31 = (pTVar19->AllocatorInstance).Data;
      pTVar19 = UGroomAsset::GetHairGroupsPlatformData((param_1->GroomAsset).field0_0x0.DebugPtr);
      uVar30 = 0;
      if ((int)uVar17 < pTVar19->ArrayNum) {
        uVar30 = uVar36;
      }
      if ((uVar30 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
        return pFVar18;
      }
      local_88 = (pTVar19->AllocatorInstance).Data + lVar37 * 2000;
      uVar30 = 0;
      if ((int)uVar17 < (this->HairGroupInstances).ArrayNum) {
        uVar30 = uVar36;
      }
      if ((uVar30 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
        return pFVar18;
      }
      pFVar8 = *(FHairGroupInstance **)
                ((this->HairGroupInstances).AllocatorInstance.Data + lVar37 * 8);
      if ((pFVar8->HairGroupPublicData == (FHairGroupPublicData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("HairInstance->HairGroupPublicData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                              ,0x1e5,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
        return pFVar18;
      }
      pFVar8->bForceCards = param_1->bUseCards;
      pFVar9 = (pFVar8->Strands).RestResource;
      pFVar8->bUpdatePositionOffset = param_1->RegisteredMeshComponent != (UMeshComponent *)0x0;
      if ((pFVar9 != (FHairStrandsRestResource *)0x0) &&
         ((pFVar8->Strands).VertexFactory == (FHairStrandsVertexFactory *)0x0)) {
        this_00 = ::operator_new(0x158);
        if (this_00 == (FHairStrandsVertexFactory *)0x0) {
          this_00 = (FHairStrandsVertexFactory *)0x0;
        }
        else {
          FRenderResource::FRenderResource((FRenderResource *)this_00,local_90);
          this_00->_padding_ = 0;
          *(undefined4 *)&this_00->_padding_ = 0;
          *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 8;
          this_00->_padding_ = 0;
          *(undefined4 *)&this_00->_padding_ = 0;
          *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 2;
          this_00->_padding_ = 0;
          *(undefined4 *)&this_00->_padding_ = 0;
          *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 3;
          this_00->_padding_ = 0;
          this_00->_padding_ = 0;
          this_00->_padding_ = 0;
          *(undefined4 *)&this_00->_padding_ = 0x1ffffff;
          this_00->_padding_ = (longlong)&___7FHairStrandsVertexFactory__6B_;
          (this_00->DebugName).DebugName = "FStrandsHairSceneProxy";
          this_00->bIsInitialized = false;
          (this_00->Data).Instance = pFVar8;
        }
        (pFVar8->Strands).VertexFactory = this_00;
      }
      this->CurveResourceData = (FRenderCurveResourceData *)0x0;
      bVar11 = IsRenderCurveEnabled();
      if (((bVar11) && ((pFVar8->Strands).RestResource != (FHairStrandsRestResource *)0x0)) &&
         (uVar17 == 0)) {
        this->CurveResourceData = (FRenderCurveResourceData *)(pFVar31 + lVar37 * 2000 + 0x710);
      }
      iVar16 = (pFVar8->Cards).LODs.ArrayNum;
      pFVar31 = (pFVar8->Cards).LODs.AllocatorInstance.Data;
      pFVar33 = pFVar31 + (longlong)iVar16 * 0x68;
      while( true ) {
        if ((pFVar8->Cards).LODs.ArrayNum != iVar16) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FHairGroupInstance::FCards::FLOD_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res18);
        }
        if (pFVar31 == pFVar33) goto LAB_14dfef3e7;
        if (*(longlong *)pFVar31 != 0) break;
        pFVar31 = pFVar31 + 0x68;
      }
      uVar17 = (pFVar8->Cards).LODs.ArrayNum;
      uVar30 = 0;
      if (uVar17 != 0) {
        do {
          if ((-1 < (int)uVar30) && ((int)uVar30 < (pFVar8->Cards).LODs.ArrayNum)) {
            if (((int)uVar30 < 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
              return pFVar18;
            }
            lVar37 = (longlong)(int)uVar30 * 0x68;
            if (*(longlong *)((pFVar8->Cards).LODs.AllocatorInstance.Data + lVar37) != 0) {
              uVar36 = 0;
              if ((int)uVar30 < (pFVar8->Cards).LODs.ArrayNum) {
                uVar36 = ~uVar30 >> 0x1f;
              }
              if ((uVar36 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
                return pFVar18;
              }
              if (*(longlong *)((pFVar8->Cards).LODs.AllocatorInstance.Data + lVar37 + 0x60) == 0) {
                pFVar21 = ::operator_new(0x238);
                if (pFVar21 == (FHairCardsVertexFactory *)0x0) {
                  pFVar21 = (FHairCardsVertexFactory *)0x0;
                }
                else {
                  pFVar21 = FHairCardsVertexFactory::FHairCardsVertexFactory
                                      (pFVar21,pFVar8,uVar30,Cards,EVar13,local_90,
                                       "HairCardsVertexFactory");
                }
                uVar36 = 0;
                if ((int)uVar30 < (pFVar8->Cards).LODs.ArrayNum) {
                  uVar36 = ~uVar30 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
                  return pFVar18;
                }
                *(FHairCardsVertexFactory **)
                 ((pFVar8->Cards).LODs.AllocatorInstance.Data + lVar37 + 0x60) = pFVar21;
              }
            }
          }
          uVar30 = uVar30 + 1;
          lVar37 = local_98;
        } while (uVar30 < uVar17);
      }
LAB_14dfef3e7:
      iVar16 = (pFVar8->Meshes).LODs.ArrayNum;
      pFVar31 = (pFVar8->Meshes).LODs.AllocatorInstance.Data;
      pFVar33 = pFVar31 + (longlong)iVar16 * 0x30;
      while( true ) {
        if ((pFVar8->Meshes).LODs.ArrayNum != iVar16) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FHairGroupInstance::FMeshes::FLOD_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar31 == pFVar33) goto LAB_14dfef5bf;
        if (*(longlong *)pFVar31 != 0) break;
        pFVar31 = pFVar31 + 0x30;
      }
      uVar17 = (pFVar8->Meshes).LODs.ArrayNum;
      uVar30 = 0;
      if (uVar17 != 0) {
        do {
          if ((-1 < (int)uVar30) && ((int)uVar30 < (pFVar8->Meshes).LODs.ArrayNum)) {
            if (((int)uVar30 < 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
              return pFVar18;
            }
            lVar37 = (longlong)(int)uVar30;
            if (*(longlong *)((pFVar8->Meshes).LODs.AllocatorInstance.Data + lVar37 * 0x30) != 0) {
              uVar36 = 0;
              if ((int)uVar30 < (pFVar8->Meshes).LODs.ArrayNum) {
                uVar36 = ~uVar30 >> 0x1f;
              }
              if ((uVar36 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
                return pFVar18;
              }
              if (*(longlong *)((pFVar8->Meshes).LODs.AllocatorInstance.Data + lVar37 * 0x30 + 0x28)
                  == 0) {
                pFVar21 = ::operator_new(0x238);
                if (pFVar21 == (FHairCardsVertexFactory *)0x0) {
                  pFVar21 = (FHairCardsVertexFactory *)0x0;
                }
                else {
                  pFVar21 = FHairCardsVertexFactory::FHairCardsVertexFactory
                                      (pFVar21,pFVar8,uVar30,Meshes,EVar13,local_90,
                                       "HairMeshesVertexFactory");
                }
                uVar36 = 0;
                if ((int)uVar30 < (pFVar8->Meshes).LODs.ArrayNum) {
                  uVar36 = ~uVar30 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
                  return pFVar18;
                }
                *(FHairCardsVertexFactory **)
                 ((pFVar8->Meshes).LODs.AllocatorInstance.Data + lVar37 * 0x30 + 0x28) = pFVar21;
              }
            }
          }
          uVar30 = uVar30 + 1;
          lVar37 = local_98;
        } while (uVar30 < uVar17);
      }
LAB_14dfef5bf:
      bVar11 = IsHairStrandsSimulationEnable();
      if (((bVar11) && ((pFVar8->Guides).RestResource != (FHairStrandsRestResource *)0x0)) &&
         (((pFVar8->Guides).bIsSimulationEnable != false ||
          (((pFVar8->Guides).bIsDeformationEnable != false ||
           ((pFVar8->Guides).bIsSimulationCacheEnable != false)))))) {
        pbVar4 = (byte *)((longlong)&this->_padding_ + 2);
        *pbVar4 = *pbVar4 | 0x80;
      }
      bVar11 = IsHairStrandsEnabled(Strands,EVar13);
      pTVar38 = local_80;
      uVar30 = local_9c;
      uVar17 = local_a0;
      if (bVar11) {
        pUVar10 = (param_1->GroomAsset).field0_0x0.DebugPtr;
        pTVar22 = UGroomAsset::GetHairGroupsRendering(pUVar10);
        uVar30 = local_9c;
        uVar17 = local_a0;
        uVar36 = 0;
        if ((int)local_a0 < pTVar22->ArrayNum) {
          uVar36 = local_9c;
        }
        if ((uVar36 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
          return pFVar18;
        }
        iVar15 = UGroomAsset::GetMaterialIndex
                           (pUVar10,*(FName *)((pTVar22->AllocatorInstance).Data + lVar37 * 0x30));
        iVar16 = 0;
        if (iVar15 != -1) {
          iVar16 = iVar15;
        }
        UGroomComponent::CheckHairStrandsUsage(param_1,iVar16);
        pUVar23 = UGroomComponent::GetMaterial(param_1,iVar16,Strands,true);
        if (pUVar23 == (UMaterialInterface *)0x0) {
          uVar24 = 0;
        }
        else {
          uVar24 = (**(code **)(pUVar23->_padding_ + 0x310))(pUVar23);
        }
        pTVar38 = local_80;
        uVar36 = 0;
        if ((int)uVar17 < local_80->ArrayNum) {
          uVar36 = uVar30;
        }
        if ((uVar36 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
          return pFVar18;
        }
        *(undefined8 *)((pTVar38->AllocatorInstance).Data + lVar37 * 0x28) = uVar24;
      }
      uVar36 = 0;
      if ((int)uVar17 < pTVar38->ArrayNum) {
        uVar36 = uVar30;
      }
      if ((uVar36 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
        return pFVar18;
      }
      pFVar31 = (pTVar38->AllocatorInstance).Data;
      uVar30 = *(uint *)(local_88 + 0x768);
      uVar32 = (ulonglong)uVar30;
      local_78 = 0;
      if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar32);
      }
      pFVar33 = pFVar31 + lVar37 * 0x28 + 0x14;
      *(undefined4 *)(pFVar31 + lVar37 * 0x28 + 0x10) = 0;
      if (*(uint *)pFVar33 != uVar30) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar30,(ForAnyElementType *)(pFVar31 + lVar37 * 0x28 + 8),0,(int *)pFVar33);
      }
      if (0 < (int)uVar30) {
        do {
          if (((*(undefined8 **)(pFVar31 + lVar37 * 0x28 + 8) <= &local_78) &&
              (&local_78 < *(undefined8 **)(pFVar31 + lVar37 * 0x28 + 8) + (int)*(uint *)pFVar33))
             && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
            pcVar6 = (code *)swi(3);
            pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
            return pFVar18;
          }
          uVar30 = *(uint *)(pFVar31 + lVar37 * 0x28 + 0x10);
          if (uVar30 == *(uint *)pFVar33) {
            uVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)(pFVar31 + lVar37 * 0x28 + 8),
                                (int *)pFVar33);
          }
          *(uint *)(pFVar31 + lVar37 * 0x28 + 0x10) = uVar30 + 1;
          *(undefined8 *)(*(longlong *)(pFVar31 + lVar37 * 0x28 + 8) + (longlong)(int)uVar30 * 8) =
               local_78;
          uVar32 = uVar32 - 1;
        } while (uVar32 != 0);
      }
      bVar11 = IsHairStrandsEnabled(Cards,EVar13);
      pFVar31 = local_88;
      if (bVar11) {
        local_8c = *(uint *)(local_88 + 0x768);
        uVar32 = (ulonglong)(int)local_8c;
        uVar30 = 0;
        lVar34 = *(longlong *)(local_88 + 0x760);
        local_68 = local_98 * 0x28;
        lVar35 = uVar32 * 0x428 + lVar34;
        while( true ) {
          if (*(int *)(pFVar31 + 0x768) != (int)uVar32) {
            local_a6 = 0;
            `TCheckedPointerIterator<FHairGroupPlatformData::FCards::FLOD_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(&local_a6);
          }
          lVar37 = local_98;
          pTVar38 = local_80;
          if (lVar34 == lVar35) break;
          if (0 < *(int *)(lVar34 + 0x28)) {
            uVar17 = 0xffffffff;
            pTVar25 = UGroomAsset::GetHairGroupsCards((param_1->GroomAsset).field0_0x0.DebugPtr);
            iVar16 = pTVar25->ArrayNum;
            pFVar31 = (pTVar25->AllocatorInstance).Data;
            pFVar33 = pFVar31 + (longlong)iVar16 * 0xa0;
            while( true ) {
              if (pTVar25->ArrayNum != iVar16) {
                local_a5 = 0;
                `TCheckedPointerIterator<FHairGroupsCardsSourceDescription,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(&local_a5);
              }
              if (pFVar31 == pFVar33) goto LAB_14dfef986;
              if ((*(uint *)(pFVar31 + 0x80) == local_a0) && (*(uint *)(pFVar31 + 0x84) == uVar30))
              break;
              pFVar31 = pFVar31 + 0xa0;
            }
            uVar17 = UGroomAsset::GetMaterialIndex
                               ((param_1->GroomAsset).field0_0x0.DebugPtr,*(FName *)(pFVar31 + 8));
LAB_14dfef986:
            uVar36 = 0;
            if (uVar17 != 0xffffffff) {
              uVar36 = uVar17;
            }
            UGroomComponent::CheckHairStrandsUsage(param_1,uVar36);
            pUVar26 = UMeshComponent::GetMaterial((UMeshComponent *)param_1,uVar36);
            bVar11 = false;
            pUVar23 = pUVar26;
            if (((pUVar26 == (UMaterialInterface *)0x0) &&
                (pUVar10 = (param_1->GroomAsset).field0_0x0.DebugPtr, pUVar10 != (UGroomAsset *)0x0)
                ) && (pTVar27 = UGroomAsset::GetHairGroupsMaterials(pUVar10),
                     (int)uVar36 < pTVar27->ArrayNum)) {
              pTVar27 = UGroomAsset::GetHairGroupsMaterials
                                  ((param_1->GroomAsset).field0_0x0.DebugPtr);
              uVar17 = 0;
              if ((int)uVar36 < pTVar27->ArrayNum) {
                uVar17 = ~uVar36 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar6 = (code *)swi(3);
                pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
                return pFVar18;
              }
              pUVar23 = *(UMaterialInterface **)
                         ((pTVar27->AllocatorInstance).Data + (longlong)(int)uVar36 * 0x10);
              if (pUVar23 == (UMaterialInterface *)0x0) {
                bVar11 = true;
                pUVar23 = pUVar26;
              }
            }
            pFVar28 = UActorComponent::GetScene((UActorComponent *)param_1);
            if (pFVar28 == (FSceneInterface *)0x0) {
LAB_14dfefa74:
              if (bVar11) goto LAB_14dfefa79;
            }
            else {
              pFVar28 = UActorComponent::GetScene((UActorComponent *)param_1);
              EVar14 = FSceneInterface::GetShaderPlatform(pFVar28);
              if ((EVar14 == SP_NumPlatforms) || (pUVar23 != (UMaterialInterface *)0x0))
              goto LAB_14dfefa74;
LAB_14dfefa79:
              pUVar23 = (param_1->Cards_DefaultMaterial).field0_0x0.DebugPtr;
            }
            uVar24 = 0;
            if (pUVar23 != (UMaterialInterface *)0x0) {
              uVar24 = (**(code **)(pUVar23->_padding_ + 0x310))(pUVar23);
            }
            pTVar38 = local_80;
            uVar17 = local_a0;
            uVar36 = 0;
            if ((int)local_a0 < local_80->ArrayNum) {
              uVar36 = local_9c;
            }
            if ((uVar36 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
              return pFVar18;
            }
            lVar37 = local_68;
            pFVar31 = (pTVar38->AllocatorInstance).Data;
            uVar36 = 0;
            if ((int)uVar30 < *(int *)(pFVar31 + local_68 + 0x10)) {
              uVar36 = ~uVar30 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
              return pFVar18;
            }
            *(undefined8 *)(*(longlong *)(pFVar31 + lVar37 + 8) + (longlong)(int)uVar30 * 8) =
                 uVar24;
            pFVar31 = local_88;
          }
          uVar32 = (ulonglong)local_8c;
          uVar30 = uVar30 + 1;
          lVar34 = lVar34 + 0x428;
        }
      }
      uVar30 = 0;
      if ((int)uVar17 < pTVar38->ArrayNum) {
        uVar30 = local_9c;
      }
      if ((uVar30 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
        return pFVar18;
      }
      pFVar33 = (pTVar38->AllocatorInstance).Data;
      uVar30 = *(uint *)(pFVar31 + 0x778);
      uVar32 = (ulonglong)uVar30;
      local_70 = 0;
      if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar32);
      }
      pFVar31 = pFVar33 + lVar37 * 0x28 + 0x24;
      *(undefined4 *)(pFVar33 + lVar37 * 0x28 + 0x20) = 0;
      if (*(uint *)pFVar31 != uVar30) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar30,(ForAnyElementType *)(pFVar33 + lVar37 * 0x28 + 0x18),0,(int *)pFVar31
                  );
      }
      if (0 < (int)uVar30) {
        do {
          if (((*(undefined8 **)(pFVar33 + lVar37 * 0x28 + 0x18) <= &local_70) &&
              (&local_70 < *(undefined8 **)(pFVar33 + lVar37 * 0x28 + 0x18) + (int)*(uint *)pFVar31)
              ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
            pcVar6 = (code *)swi(3);
            pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
            return pFVar18;
          }
          uVar30 = *(uint *)(pFVar33 + lVar37 * 0x28 + 0x20);
          if (uVar30 == *(uint *)pFVar31) {
            uVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)(pFVar33 + lVar37 * 0x28 + 0x18),
                                (int *)pFVar31);
          }
          *(uint *)(pFVar33 + lVar37 * 0x28 + 0x20) = uVar30 + 1;
          *(undefined8 *)(*(longlong *)(pFVar33 + lVar37 * 0x28 + 0x18) + (longlong)(int)uVar30 * 8)
               = local_70;
          uVar32 = uVar32 - 1;
        } while (uVar32 != 0);
      }
      bVar11 = IsHairStrandsEnabled(Meshes,EVar13);
      if (bVar11) {
        uVar30 = 0;
        local_8c = *(uint *)(local_88 + 0x778);
        uVar32 = (ulonglong)(int)local_8c;
        lVar34 = *(longlong *)(local_88 + 0x770);
        local_68 = local_98 * 0x28;
        lVar35 = uVar32 * 0x98 + lVar34;
        while( true ) {
          if (*(int *)(local_88 + 0x778) != (int)uVar32) {
            local_a4 = 0;
            `TCheckedPointerIterator<FHairGroupPlatformData::FMeshes::FLOD_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_a4);
          }
          lVar37 = local_98;
          if (lVar34 == lVar35) break;
          if (0 < *(int *)(lVar34 + 8)) {
            uVar17 = 0xffffffff;
            pTVar29 = UGroomAsset::GetHairGroupsMeshes((param_1->GroomAsset).field0_0x0.DebugPtr);
            iVar16 = pTVar29->ArrayNum;
            pFVar31 = (pTVar29->AllocatorInstance).Data;
            pFVar33 = pFVar31 + (longlong)iVar16 * 0x80;
            while( true ) {
              if (pTVar29->ArrayNum != iVar16) {
                local_a3[0] = 0;
                `TCheckedPointerIterator<FHairGroupsMeshesSourceDescription,int,0>::operator!='::
                __l2::<lambda_1>::operator()(local_a3);
              }
              if (pFVar31 == pFVar33) goto LAB_14dfefdc9;
              if ((*(uint *)(pFVar31 + 0x68) == local_a0) && (*(uint *)(pFVar31 + 0x6c) == uVar30))
              break;
              pFVar31 = pFVar31 + 0x80;
            }
            uVar17 = UGroomAsset::GetMaterialIndex
                               ((param_1->GroomAsset).field0_0x0.DebugPtr,*(FName *)(pFVar31 + 8));
LAB_14dfefdc9:
            uVar36 = 0;
            if (uVar17 != 0xffffffff) {
              uVar36 = uVar17;
            }
            UGroomComponent::CheckHairStrandsUsage(param_1,uVar36);
            pUVar26 = UMeshComponent::GetMaterial((UMeshComponent *)param_1,uVar36);
            bVar11 = false;
            pUVar23 = pUVar26;
            if (((pUVar26 == (UMaterialInterface *)0x0) &&
                (pUVar10 = (param_1->GroomAsset).field0_0x0.DebugPtr, pUVar10 != (UGroomAsset *)0x0)
                ) && (pTVar27 = UGroomAsset::GetHairGroupsMaterials(pUVar10),
                     (int)uVar36 < pTVar27->ArrayNum)) {
              pTVar27 = UGroomAsset::GetHairGroupsMaterials
                                  ((param_1->GroomAsset).field0_0x0.DebugPtr);
              uVar17 = 0;
              if ((int)uVar36 < pTVar27->ArrayNum) {
                uVar17 = ~uVar36 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar6 = (code *)swi(3);
                pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
                return pFVar18;
              }
              pUVar23 = *(UMaterialInterface **)
                         ((pTVar27->AllocatorInstance).Data + (longlong)(int)uVar36 * 0x10);
              if (pUVar23 == (UMaterialInterface *)0x0) {
                bVar11 = true;
                pUVar23 = pUVar26;
              }
            }
            pFVar28 = UActorComponent::GetScene((UActorComponent *)param_1);
            if (pFVar28 == (FSceneInterface *)0x0) {
LAB_14dfefeb3:
              if (bVar11) goto LAB_14dfefeb8;
            }
            else {
              pFVar28 = UActorComponent::GetScene((UActorComponent *)param_1);
              EVar14 = FSceneInterface::GetShaderPlatform(pFVar28);
              if ((EVar14 == SP_NumPlatforms) || (pUVar23 != (UMaterialInterface *)0x0))
              goto LAB_14dfefeb3;
LAB_14dfefeb8:
              pUVar23 = (param_1->Meshes_DefaultMaterial).field0_0x0.DebugPtr;
            }
            uVar24 = 0;
            if (pUVar23 != (UMaterialInterface *)0x0) {
              uVar24 = (**(code **)(pUVar23->_padding_ + 0x310))(pUVar23);
            }
            pTVar38 = local_80;
            uVar17 = local_a0;
            uVar36 = 0;
            if ((int)local_a0 < local_80->ArrayNum) {
              uVar36 = local_9c;
            }
            if ((uVar36 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
              return pFVar18;
            }
            lVar37 = local_68;
            pFVar31 = (pTVar38->AllocatorInstance).Data;
            uVar36 = 0;
            if ((int)uVar30 < *(int *)(pFVar31 + local_68 + 0x20)) {
              uVar36 = ~uVar30 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              pFVar18 = (FHairStrandsSceneProxy *)(*pcVar6)();
              return pFVar18;
            }
            *(undefined8 *)(*(longlong *)(pFVar31 + lVar37 + 0x18) + (longlong)(int)uVar30 * 8) =
                 uVar24;
          }
          uVar32 = (ulonglong)local_8c;
          uVar30 = uVar30 + 1;
          lVar34 = lVar34 + 0x98;
        }
      }
      local_a0 = uVar17 + 1;
      local_98 = lVar37 + 1;
    } while (local_98 < local_58);
  }
  return this;
}

// ~FHairStrandsSceneProxy @ 14dff2760

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FHairStrandsSceneProxy::~FHairStrandsSceneProxy(FHairStrandsSceneProxy *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FHairStrandsSceneProxy__6B_;
  DestructItems<FHairStrandsSceneProxy::FHairGroupMaterialProxy,int>
            ((FHairGroupMaterialProxy *)(this->HairGroupMaterialProxies).AllocatorInstance.Data,
             (this->HairGroupMaterialProxies).ArrayNum);
  pFVar1 = (this->HairGroupMaterialProxies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<FHairGroupInstance>,int>
            ((TRefCountPtr<FHairGroupInstance> *)(this->HairGroupInstances).AllocatorInstance.Data,
             (this->HairGroupInstances).ArrayNum);
  pFVar1 = (this->HairGroupInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// CreateMeshBatch @ 14e006420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FMeshBatch * __thiscall
FHairStrandsSceneProxy::CreateMeshBatch
          (FHairStrandsSceneProxy *this,FSceneViewFamily *param_1,FMeshElementCollector *param_2,
          EHairMeshBatchType param_3,FHairGroupInstance *param_4,uint param_5,
          FMaterialRenderProxy *param_6)

{
  FMeshes *this_00;
  float fVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  EHairGeometryType EVar6;
  FScriptContainerElement *pFVar7;
  UMaterial *pUVar8;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double *pdVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  TTransform<double> *pTVar32;
  bool bVar33;
  FNameEntryId FVar34;
  int iVar35;
  FMeshBatch *pFVar36;
  FColoredMaterialRenderProxy *this_01;
  undefined4 extraout_var;
  FMaterialRenderProxy *pFVar37;
  ForElementType<FMeshBatchElement> FVar38;
  TMatrix<double> *pTVar39;
  float *pfVar40;
  VectorRegister4Double *pVVar41;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar42;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar43;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar44;
  FPrimitiveUniformShaderParameters *pFVar45;
  undefined8 *puVar46;
  undefined8 *puVar47;
  uint uVar48;
  uint uVar49;
  TTransform<double> *pTVar50;
  FRHIBuffer *pFVar51;
  uint uVar52;
  FPrimitiveUniformShaderParametersBuilder *pFVar53;
  byte bVar54;
  FPrimitiveUniformShaderParameters *pFVar55;
  TUniformBuffer<FPrimitiveUniformShaderParameters> *this_02;
  uint uVar56;
  uint uVar57;
  longlong lVar58;
  uint uVar59;
  ForElementType<FMeshBatchElement> FVar60;
  longlong lVar61;
  FMeshElementCollector *pFVar62;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auStack_a78 [32];
  undefined1 *local_a58;
  byte *local_a50;
  char local_a48;
  byte local_a47;
  char local_a46;
  Type local_a44;
  undefined1 local_a40 [4];
  EPrimitiveIdMode local_a3c;
  EHairGeometryType local_a38;
  undefined8 local_a28;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  uint local_a18;
  FHairStrandsVertexFactory *local_a10;
  FMeshElementCollector *local_a08;
  FName local_a00;
  EHairMeshBatchType local_9f8;
  undefined8 local_9e8;
  undefined4 uStack_9e0;
  undefined4 uStack_9dc;
  undefined1 local_9d8 [4];
  undefined1 local_9d4 [12];
  undefined4 local_9c8;
  undefined4 uStack_9c4;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  undefined4 local_9b8;
  undefined4 uStack_9b4;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  double local_9a8;
  double dStack_9a0;
  undefined1 local_998 [16];
  undefined1 local_988 [16];
  double local_978;
  FLinearColor_u_0 local_970;
  undefined4 local_958;
  undefined4 uStack_954;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined4 local_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined4 local_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined4 local_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  double local_918;
  double dStack_910;
  double dStack_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  double dStack_8f0;
  double local_8e8;
  undefined1 local_8e0 [16];
  double local_8d0;
  double dStack_8c8;
  double local_8c0;
  double dStack_8b8;
  double local_8b0;
  TTransform<double> local_8a8;
  TMatrix<double> local_848;
  TMatrix<double> local_7c8;
  TMatrix<double> local_748;
  TMatrix<double> local_6c8;
  TMatrix<double> local_648;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  double local_588;
  double dStack_580;
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  undefined1 local_548 [664];
  float local_2b0 [34];
  undefined4 local_228;
  undefined4 uStack_224;
  double dStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  uint local_f4;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_a78;
  lVar61 = (longlong)(int)param_5;
  EVar6 = param_4->GeometryType;
  if (EVar6 == NoneGeometry) {
    return (FMeshBatch *)(ForElementType<FMeshBatchElement>)0x0;
  }
  local_a38 = EVar6;
  local_a08 = param_2;
  local_9f8 = param_3;
  local_9e8 = param_1;
  if ((*(int *)&param_4->field_0x8 == 0) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("Instance->GetRefCount()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                          ,0x39e,L""), bVar33)) {
    pcVar10 = (code *)swi(3);
    pFVar36 = (FMeshBatch *)(*pcVar10)();
    return pFVar36;
  }
  local_a28 = 0;
  fVar1 = param_4->HairGroupPublicData->LODIndex;
  local_a46 = param_4->HairGroupPublicData->bLODVisibility;
  uVar59 = (int)ROUND((fVar1 + fVar1) - __real_3f000000) >> 1;
  if ((int)uVar59 < 0) {
    uVar59 = 0;
  }
  local_a44 = FSceneViewFamily::GetFeatureLevel(param_1);
  if (EVar6 == Meshes) {
    this_00 = &param_4->Meshes;
    bVar33 = FHairGroupInstance::FMeshes::IsValid(this_00,uVar59);
    if (!bVar33) {
      return (FMeshBatch *)(ForElementType<FMeshBatchElement>)0x0;
    }
    iVar35 = (param_4->Meshes).LODs.ArrayNum;
    uVar56 = ~uVar59 >> 0x1f;
    uVar57 = 0;
    if ((int)uVar59 < iVar35) {
      uVar57 = uVar56;
    }
    local_a18 = uVar56;
    if (uVar57 == 0) {
      local_a58 = (undefined1 *)(longlong)(int)uVar59;
      local_a50 = (byte *)(longlong)iVar35;
      bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar33) {
        pcVar10 = (code *)swi(3);
        pFVar36 = (FMeshBatch *)(*pcVar10)();
        return pFVar36;
      }
    }
    local_a28 = (longlong)(int)uVar59 * 0x30;
    local_a10 = *(FHairStrandsVertexFactory **)
                 ((this_00->LODs).AllocatorInstance.Data + local_a28 + 0x28);
    if ((local_a10 == (FHairStrandsVertexFactory *)0x0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("VertexFactory",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                            ,0x3b5,L""), bVar33)) {
      pcVar10 = (code *)swi(3);
      pFVar36 = (FMeshBatch *)(*pcVar10)();
      return pFVar36;
    }
    iVar35 = (param_4->Meshes).LODs.ArrayNum;
    uVar57 = 0;
    if ((int)uVar59 < iVar35) {
      uVar57 = uVar56;
    }
    if ((uVar57 == 0) &&
       (local_a58 = (undefined1 *)(longlong)(int)uVar59, local_a50 = (byte *)(longlong)iVar35,
       bVar33 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar10 = (code *)swi(3);
      pFVar36 = (FMeshBatch *)(*pcVar10)();
      return pFVar36;
    }
    local_a3c = FHairCardsVertexFactory::GetPrimitiveIdMode
                          (*(FHairCardsVertexFactory **)
                            ((this_00->LODs).AllocatorInstance.Data + local_a28 + 0x28),local_a44);
    iVar35 = (param_4->Meshes).LODs.ArrayNum;
    uVar57 = 0;
    if ((int)uVar59 < iVar35) {
      uVar57 = uVar56;
    }
    if (uVar57 == 0) {
      local_a58 = (undefined1 *)(longlong)(int)uVar59;
      local_a50 = (byte *)(longlong)iVar35;
      bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar33) {
        pcVar10 = (code *)swi(3);
        pFVar36 = (FMeshBatch *)(*pcVar10)();
        return pFVar36;
      }
    }
    iVar35 = *(int *)(*(longlong *)
                       (*(longlong *)((this_00->LODs).AllocatorInstance.Data + local_a28) + 0x1a0) +
                     0x48);
    local_a44 = (iVar35 / 3 + (iVar35 >> 0x1f) +
                (int)(((longlong)iVar35 / 3 + ((longlong)iVar35 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                3;
    iVar35 = (param_4->Meshes).LODs.ArrayNum;
    uVar57 = local_a44 / 3;
    uVar56 = 0;
    if ((int)uVar59 < iVar35) {
      uVar56 = local_a18;
    }
    if (uVar56 == 0) {
      local_a58 = (undefined1 *)(longlong)(int)uVar59;
      local_a50 = (byte *)(longlong)iVar35;
      bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar33) {
        pcVar10 = (code *)swi(3);
        pFVar36 = (FMeshBatch *)(*pcVar10)();
        return pFVar36;
      }
    }
    local_a48 = '\0';
    local_a28 = *(longlong *)((this_00->LODs).AllocatorInstance.Data + local_a28) + 0x98;
    if (param_6 == (FMaterialRenderProxy *)0x0) {
      iVar35 = (this->HairGroupMaterialProxies).ArrayNum;
      uVar56 = 0;
      if ((int)param_5 < iVar35) {
        uVar56 = ~param_5 >> 0x1f;
      }
      if ((uVar56 == 0) &&
         (local_a58 = (undefined1 *)lVar61, local_a50 = (byte *)(longlong)iVar35,
         bVar33 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar10 = (code *)swi(3);
        pFVar36 = (FMeshBatch *)(*pcVar10)();
        return pFVar36;
      }
      pFVar7 = (this->HairGroupMaterialProxies).AllocatorInstance.Data;
      iVar35 = *(int *)(pFVar7 + lVar61 * 0x28 + 0x20);
      uVar56 = 0;
      if ((int)uVar59 < iVar35) {
        uVar56 = local_a18;
      }
      if (uVar56 == 0) {
        local_a58 = (undefined1 *)(longlong)(int)uVar59;
        local_a50 = (byte *)(longlong)iVar35;
        bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar33) {
          pcVar10 = (code *)swi(3);
          pFVar36 = (FMeshBatch *)(*pcVar10)();
          return pFVar36;
        }
      }
      param_6 = *(FMaterialRenderProxy **)
                 (*(longlong *)(pFVar7 + lVar61 * 0x28 + 0x18) + (longlong)(int)uVar59 * 8);
    }
  }
  else if (EVar6 == Cards) {
    bVar33 = FHairGroupInstance::FCards::IsValid(&param_4->Cards,uVar59);
    if (!bVar33) {
      return (FMeshBatch *)(ForElementType<FMeshBatchElement>)0x0;
    }
    iVar35 = (param_4->Cards).LODs.ArrayNum;
    uVar56 = ~uVar59 >> 0x1f;
    uVar57 = 0;
    if ((int)uVar59 < iVar35) {
      uVar57 = uVar56;
    }
    if (uVar57 == 0) {
      local_a58 = (undefined1 *)(longlong)(int)uVar59;
      local_a50 = (byte *)(longlong)iVar35;
      bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar33) {
        pcVar10 = (code *)swi(3);
        pFVar36 = (FMeshBatch *)(*pcVar10)();
        return pFVar36;
      }
    }
    lVar58 = (longlong)(int)uVar59;
    local_a28 = lVar58 * 0x68;
    local_a10 = *(FHairStrandsVertexFactory **)
                 ((param_4->Cards).LODs.AllocatorInstance.Data + local_a28 + 0x60);
    if ((local_a10 == (FHairStrandsVertexFactory *)0x0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("VertexFactory",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                            ,0x3ca,L""), bVar33)) {
      pcVar10 = (code *)swi(3);
      pFVar36 = (FMeshBatch *)(*pcVar10)();
      return pFVar36;
    }
    iVar35 = (param_4->Meshes).LODs.ArrayNum;
    uVar57 = 0;
    if ((int)uVar59 < iVar35) {
      uVar57 = uVar56;
    }
    if ((uVar57 == 0) &&
       (local_a58 = (undefined1 *)lVar58, local_a50 = (byte *)(longlong)iVar35,
       bVar33 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar10 = (code *)swi(3);
      pFVar36 = (FMeshBatch *)(*pcVar10)();
      return pFVar36;
    }
    local_a3c = FHairCardsVertexFactory::GetPrimitiveIdMode
                          (*(FHairCardsVertexFactory **)
                            ((param_4->Meshes).LODs.AllocatorInstance.Data + lVar58 * 0x30 + 0x28),
                           local_a44);
    iVar35 = (param_4->Cards).LODs.ArrayNum;
    uVar57 = 0;
    if ((int)uVar59 < iVar35) {
      uVar57 = uVar56;
    }
    if ((uVar57 == 0) &&
       (local_a58 = (undefined1 *)lVar58, local_a50 = (byte *)(longlong)iVar35,
       bVar33 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar10 = (code *)swi(3);
      pFVar36 = (FMeshBatch *)(*pcVar10)();
      return pFVar36;
    }
    iVar35 = *(int *)(*(longlong *)
                       (*(longlong *)((param_4->Cards).LODs.AllocatorInstance.Data + local_a28) +
                       0x1d8) + 0x78);
    local_a44 = (iVar35 / 3 + (iVar35 >> 0x1f) +
                (int)(((longlong)iVar35 / 3 + ((longlong)iVar35 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                3;
    iVar35 = (param_4->Cards).LODs.ArrayNum;
    uVar57 = local_a44 / 3;
    uVar48 = 0;
    if ((int)uVar59 < iVar35) {
      uVar48 = uVar56;
    }
    if (uVar48 == 0) {
      local_a58 = (undefined1 *)(longlong)(int)uVar59;
      local_a50 = (byte *)(longlong)iVar35;
      bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar33) {
        pcVar10 = (code *)swi(3);
        pFVar36 = (FMeshBatch *)(*pcVar10)();
        return pFVar36;
      }
    }
    local_a48 = '\0';
    local_a28 = *(longlong *)((param_4->Cards).LODs.AllocatorInstance.Data + local_a28) + 0x98;
    if (param_6 == (FMaterialRenderProxy *)0x0) {
      iVar35 = (this->HairGroupMaterialProxies).ArrayNum;
      uVar48 = 0;
      if ((int)param_5 < iVar35) {
        uVar48 = ~param_5 >> 0x1f;
      }
      if ((uVar48 == 0) &&
         (local_a58 = (undefined1 *)lVar61, local_a50 = (byte *)(longlong)iVar35,
         bVar33 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar10 = (code *)swi(3);
        pFVar36 = (FMeshBatch *)(*pcVar10)();
        return pFVar36;
      }
      pFVar7 = (this->HairGroupMaterialProxies).AllocatorInstance.Data;
      iVar35 = *(int *)(pFVar7 + lVar61 * 0x28 + 0x10);
      uVar48 = 0;
      if ((int)uVar59 < iVar35) {
        uVar48 = uVar56;
      }
      if (uVar48 == 0) {
        local_a58 = (undefined1 *)(longlong)(int)uVar59;
        local_a50 = (byte *)(longlong)iVar35;
        bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar33) {
          pcVar10 = (code *)swi(3);
          pFVar36 = (FMeshBatch *)(*pcVar10)();
          return pFVar36;
        }
      }
      param_6 = *(FMaterialRenderProxy **)
                 (*(longlong *)(pFVar7 + lVar61 * 0x28 + 8) + (longlong)(int)uVar59 * 8);
    }
  }
  else {
    local_a10 = (param_4->Strands).VertexFactory;
    local_a3c = FHairStrandsVertexFactory::GetPrimitiveIdMode(local_a10,local_a44);
    uVar56 = FHairGroupPublicData::GetActiveStrandsPointCount(param_4->HairGroupPublicData,false);
    bVar33 = GetHairStrandsUsesTriangleStrips();
    local_a48 = (param_4->Strands).bCullingEnable;
    local_a44 = ((bVar33 ^ 1) * 4 + 2) * uVar56;
    uVar57 = 0;
    if ((bool)local_a48 == false) {
      uVar57 = uVar56 * 2;
    }
    if (param_6 == (FMaterialRenderProxy *)0x0) {
      iVar35 = (this->HairGroupMaterialProxies).ArrayNum;
      uVar56 = 0;
      if ((int)param_5 < iVar35) {
        uVar56 = ~param_5 >> 0x1f;
      }
      if ((uVar56 == 0) &&
         (local_a58 = (undefined1 *)lVar61, local_a50 = (byte *)(longlong)iVar35,
         bVar33 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar10 = (code *)swi(3);
        pFVar36 = (FMeshBatch *)(*pcVar10)();
        return pFVar36;
      }
      param_6 = *(FMaterialRenderProxy **)
                 ((this->HairGroupMaterialProxies).AllocatorInstance.Data + lVar61 * 0x28);
    }
  }
  bVar33 = AllowDebugViewmodes();
  if ((bVar33) && ((local_9e8->EngineShowFlags).Wireframe != 0)) {
    bVar54 = 1;
  }
  else {
    bVar54 = 0;
  }
  if ((FColoredMaterialRenderProxy *)param_6 == (FColoredMaterialRenderProxy *)0x0) {
    return (FMeshBatch *)(ForElementType<FMeshBatchElement>)0x0;
  }
  if (local_a46 == '\0') {
    return (FMeshBatch *)(ForElementType<FMeshBatchElement>)0x0;
  }
  if ((uVar57 == 0) && (local_a48 == '\0')) {
    return (FMeshBatch *)(ForElementType<FMeshBatchElement>)0x0;
  }
  pFVar62 = local_a08;
  if (bVar54 != 0) {
    this_01 = ::operator_new(0xe0);
    pFVar62 = local_a08;
    if (this_01 == (FColoredMaterialRenderProxy *)0x0) {
      param_6 = (FMaterialRenderProxy *)0x0;
      FMeshElementCollector::RegisterOneFrameMaterialProxy(local_a08,(FMaterialRenderProxy *)0x0);
    }
    else {
      FVar34 = FNameEntryId::FromValidEName((EName)local_9d8);
      local_a00.Number = 0;
      local_a00.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar34.Value);
      local_970._0_8_ = ___xmm_3f800000000000003f0000003f800000;
      local_970._8_8_ = _UNK_151040098;
      pUVar8 = (GEngine->WireframeMaterial).field0_0x0.DebugPtr;
      if (pUVar8 == (UMaterial *)0x0) {
        pFVar37 = (FMaterialRenderProxy *)0x0;
      }
      else {
        pFVar37 = (FMaterialRenderProxy *)(**(code **)(pUVar8->_padding_ + 0x310))();
      }
      param_6 = (FMaterialRenderProxy *)
                FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                          (this_01,pFVar37,(FLinearColor *)&local_970._s_0,local_a00);
      pFVar62 = local_a08;
      FMeshElementCollector::RegisterOneFrameMaterialProxy(local_a08,param_6);
    }
  }
  FVar38 = (ForElementType<FMeshBatchElement>)FMeshElementCollector::AllocateMesh(pFVar62);
  uVar56 = *(uint *)((longlong)FVar38 + 0xd4);
  local_a46 = local_a38 - Cards < 2;
  *(uint *)((longlong)FVar38 + 0xd4) = uVar56 & 0xfffffffb | (uint)(byte)local_a46 * 4;
  if (((local_9f8 == Raytracing) || ((bool)local_a46)) && ((this->_padding_ & 0x20000000000) != 0))
  {
    uVar48 = 0x800000;
  }
  else {
    uVar48 = 0;
  }
  if ((local_9f8 == Raytracing) || ((bool)local_a46)) {
    uVar49 = 8;
  }
  else {
    uVar49 = 0;
  }
  *(int *)((longlong)FVar38 + 0xcc) = 0;
  *(schar *)((longlong)FVar38 + 0xd9) = (schar)uVar59;
  *(uint *)((longlong)FVar38 + 0xd4) =
       uVar56 & 0xff7fffe3 | (uint)(byte)local_a46 * 4 | uVar48 | uVar49 |
       (uint)(byte)local_a46 << 4;
  local_a50 = (byte *)(longlong)*(int *)((longlong)FVar38 + 0xa0);
  if (*(int *)((longlong)FVar38 + 0xa0) < 1) {
    local_a58 = (undefined1 *)0x0;
    bVar33 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar33) {
      pcVar10 = (code *)swi(3);
      pFVar36 = (FMeshBatch *)(*pcVar10)();
      return pFVar36;
    }
  }
  local_a50 = &local_a47;
  local_a58 = local_9d4;
  FVar60 = FVar38;
  if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar38 + 0x98) !=
      (ForElementType<FMeshBatchElement>)0x0) {
    FVar60 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar38 + 0x98);
  }
  *(longlong *)((longlong)FVar60 + 0x18) = local_a28;
  *(uint *)((longlong)FVar38 + 0xd4) = *(uint *)((longlong)FVar38 + 0xd4) & 0xffffffbf;
  *(FMaterialRenderProxy **)((longlong)FVar38 + 0xb0) = param_6;
  *(uint *)((longlong)FVar38 + 0xd4) = *(uint *)((longlong)FVar38 + 0xd4) | (uint)bVar54 << 6;
  *(FHairStrandsVertexFactory **)((longlong)FVar38 + 0xa8) = local_a10;
  local_a10 = (FHairStrandsVertexFactory *)this->_padding_;
  local_a47 = local_a38 - Cards < 2;
  (**(code **)(*(longlong *)this->_padding_ + 0x250))
            ((longlong *)this->_padding_,local_a10,local_a40,&local_5c8);
  if (0 < GHairStrands_ForceVelocityOutput) {
    local_a47 = 1;
  }
  if ((GUseProxyLocalToWorld == false) || (param_4->BindingType == Skinning)) {
    bVar33 = false;
  }
  else {
    bVar33 = true;
  }
  if (bVar33) {
    pTVar39 = &local_848;
    local_848.M[0][0] = (double)this->_padding_;
    local_848.M[0][1] = (double)this->_padding_;
    local_848.M[0][2] = (double)this->_padding_;
    local_848.M[0][3] = (double)this->_padding_;
    local_848.M[1][0] = (double)this->_padding_;
    local_848.M[1][1] = (double)this->_padding_;
    local_848.M[1][2] = (double)this->_padding_;
    local_848.M[1][3] = (double)this->_padding_;
    local_848.M[2][0] = (double)this->_padding_;
    local_848.M[2][1] = (double)this->_padding_;
    local_848.M[2][2] = (double)this->_padding_;
    local_848.M[2][3] = (double)this->_padding_;
    local_848.M[3][0] = (double)this->_padding_;
    local_848.M[3][1] = (double)this->_padding_;
    local_848.M[3][2] = (double)this->_padding_;
    local_848.M[3][3] = (double)this->_padding_;
  }
  else {
    pTVar50 = &(param_4->Debug).SkinningCurrentLocalToWorld;
    if (param_4->BindingType != Skinning) {
      pTVar50 = &(param_4->Debug).RigidCurrentLocalToWorld;
    }
    pTVar39 = UE::Math::TTransform<double>::ToMatrixWithScale(pTVar50,&local_6c8);
  }
  local_9e8._0_4_ = *(undefined4 *)pTVar39->M[0];
  local_9e8._4_4_ = *(undefined4 *)((longlong)pTVar39->M[0] + 4);
  uStack_9e0 = *(undefined4 *)(pTVar39->M[0] + 1);
  uStack_9dc = *(undefined4 *)((longlong)pTVar39->M[0] + 0xc);
  local_a28._0_4_ = *(undefined4 *)(pTVar39->M[0] + 2);
  local_a28._4_4_ = *(undefined4 *)((longlong)pTVar39->M[0] + 0x14);
  uStack_a20 = *(undefined4 *)(pTVar39->M[0] + 3);
  uStack_a1c = *(undefined4 *)((longlong)pTVar39->M[0] + 0x1c);
  local_9c8 = *(undefined4 *)pTVar39->M[1];
  uStack_9c4 = *(undefined4 *)((longlong)pTVar39->M[1] + 4);
  uStack_9c0 = *(undefined4 *)(pTVar39->M[1] + 1);
  uStack_9bc = *(undefined4 *)((longlong)pTVar39->M[1] + 0xc);
  local_9b8 = *(undefined4 *)(pTVar39->M[1] + 2);
  uStack_9b4 = *(undefined4 *)((longlong)pTVar39->M[1] + 0x14);
  uStack_9b0 = *(undefined4 *)(pTVar39->M[1] + 3);
  uStack_9ac = *(undefined4 *)((longlong)pTVar39->M[1] + 0x1c);
  uVar12 = *(undefined4 *)pTVar39->M[2];
  uVar13 = *(undefined4 *)((longlong)pTVar39->M[2] + 4);
  auVar3._0_8_ = pTVar39->M[2][0];
  pdVar15 = pTVar39->M[2] + 1;
  uVar14 = *(undefined4 *)pdVar15;
  uVar16 = *(undefined4 *)((longlong)pTVar39->M[2] + 0xc);
  auVar4._0_8_ = *pdVar15;
  pdVar15 = pTVar39->M[2] + 2;
  uVar17 = *(undefined4 *)pdVar15;
  uVar18 = *(undefined4 *)((longlong)pTVar39->M[2] + 0x14);
  auVar3._8_8_ = *pdVar15;
  pdVar15 = pTVar39->M[2] + 3;
  uVar19 = *(undefined4 *)pdVar15;
  uVar20 = *(undefined4 *)((longlong)pTVar39->M[2] + 0x1c);
  auVar4._8_8_ = *pdVar15;
  uVar21 = *(undefined4 *)pTVar39->M[3];
  uVar22 = *(undefined4 *)((longlong)pTVar39->M[3] + 4);
  dVar2 = pTVar39->M[3][0];
  pdVar15 = pTVar39->M[3] + 1;
  uVar23 = *(undefined4 *)pdVar15;
  uVar24 = *(undefined4 *)((longlong)pTVar39->M[3] + 0xc);
  dVar63 = *pdVar15;
  pdVar15 = pTVar39->M[3] + 2;
  uVar25 = *(undefined4 *)pdVar15;
  uVar26 = *(undefined4 *)((longlong)pTVar39->M[3] + 0x14);
  dVar30 = *pdVar15;
  pdVar15 = pTVar39->M[3] + 3;
  uVar27 = *(undefined4 *)pdVar15;
  uVar28 = *(undefined4 *)((longlong)pTVar39->M[3] + 0x1c);
  dVar31 = *pdVar15;
  local_958 = uVar12;
  uStack_954 = uVar13;
  uStack_950 = uVar14;
  uStack_94c = uVar16;
  local_948 = uVar17;
  uStack_944 = uVar18;
  uStack_940 = uVar19;
  uStack_93c = uVar20;
  local_938 = uVar21;
  uStack_934 = uVar22;
  uStack_930 = uVar23;
  uStack_92c = uVar24;
  local_928 = uVar25;
  uStack_924 = uVar26;
  uStack_920 = uVar27;
  uStack_91c = uVar28;
  if (bVar33) {
    pTVar39 = &local_7c8;
    local_7c8.M[0][0] = local_5c8;
    local_7c8.M[0][1] = uStack_5c0;
    local_7c8.M[0][2] = local_5b8;
    local_7c8.M[0][3] = uStack_5b0;
    local_7c8.M[1][0] = local_5a8;
    local_7c8.M[1][1] = uStack_5a0;
    local_7c8.M[1][2] = local_598;
    local_7c8.M[1][3] = uStack_590;
    local_7c8.M[2][0] = local_588;
    local_7c8.M[2][1] = dStack_580;
    local_7c8.M[2][2] = local_578;
    local_7c8.M[2][3] = dStack_570;
    local_7c8.M[3][0] = local_568;
    local_7c8.M[3][1] = dStack_560;
    local_7c8.M[3][2] = local_558;
    local_7c8.M[3][3] = dStack_550;
  }
  else {
    pTVar50 = &(param_4->Debug).SkinningPreviousLocalToWorld;
    if (param_4->BindingType != Skinning) {
      pTVar50 = &(param_4->Debug).RigidPreviousLocalToWorld;
    }
    pTVar39 = UE::Math::TTransform<double>::ToMatrixWithScale(pTVar50,&local_648);
  }
  local_5c8 = pTVar39->M[0][0];
  uStack_5c0 = pTVar39->M[0][1];
  local_5b8 = pTVar39->M[0][2];
  uStack_5b0 = pTVar39->M[0][3];
  local_5a8 = pTVar39->M[1][0];
  uStack_5a0 = pTVar39->M[1][1];
  local_598 = pTVar39->M[1][2];
  uStack_590 = pTVar39->M[1][3];
  local_588 = pTVar39->M[2][0];
  dStack_580 = pTVar39->M[2][1];
  local_578 = pTVar39->M[2][2];
  dStack_570 = pTVar39->M[2][3];
  local_568 = pTVar39->M[3][0];
  dStack_560 = pTVar39->M[3][1];
  local_558 = pTVar39->M[3][2];
  dStack_550 = pTVar39->M[3][3];
  if (((param_4->HairGroupPublicData->VFInput).bHasLODSwitch != false) &&
     ((param_4->HairGroupPublicData->VFInput).bHasLODSwitchBindingType != false)) {
    local_5c8 = (double)CONCAT44(local_9e8._4_4_,(undefined4)local_9e8);
    uStack_5c0 = (double)CONCAT44(uStack_9dc,uStack_9e0);
    local_5b8 = (double)CONCAT44(local_a28._4_4_,(undefined4)local_a28);
    uStack_5b0 = (double)CONCAT44(uStack_a1c,uStack_a20);
    local_5a8 = (double)CONCAT44(uStack_9c4,local_9c8);
    uStack_5a0 = (double)CONCAT44(uStack_9bc,uStack_9c0);
    local_598 = (double)CONCAT44(uStack_9b4,local_9b8);
    uStack_590 = (double)CONCAT44(uStack_9ac,uStack_9b0);
    local_588 = auVar3._0_8_;
    dStack_580 = auVar4._0_8_;
    local_578 = auVar3._8_8_;
    dStack_570 = auVar4._8_8_;
    local_568 = dVar2;
    dStack_560 = dVar63;
    local_558 = dVar30;
    dStack_550 = dVar31;
  }
  pfVar40 = &(((FPrimitiveUniformShaderParametersBuilder *)local_548)->Parameters).
             CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
  local_548._368_8_ = ___xmm_3f800000000000000000000000000000;
  local_548._376_8_ = _UNK_150689648;
  lVar61 = 9;
  local_548._448_8_ = ___xmm_3f800000000000000000000000000000;
  local_548._456_8_ = _UNK_150689648;
  do {
    ((TVector4<float>_u_0_s_0 *)(pfVar40 + -2))->X = 0.0;
    ((TVector4<float>_u_0_s_0 *)(pfVar40 + -2))->Y = 0.0;
    *pfVar40 = 0.0;
    pfVar40[1] = 1.0;
    pfVar40 = pfVar40 + 4;
    lVar61 = lVar61 + -1;
  } while (lVar61 != 0);
  pFVar53 = (FPrimitiveUniformShaderParametersBuilder *)local_548;
  FPrimitiveSceneProxy::BuildUniformShaderParameters((FPrimitiveSceneProxy *)this,pFVar53);
  uVar49 = _UNK_15061cc8c;
  uVar48 = _UNK_15061cc88;
  uVar56 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar59 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_978 = (double)this->_padding_;
  auVar3._0_8_ = (double)this->_padding_;
  auVar3._8_8_ = (double)this->_padding_;
  auVar4._0_8_ = (double)this->_padding_;
  auVar4._8_8_ = (double)this->_padding_;
  local_9a8 = (double)this->_padding_;
  dStack_9a0 = (double)this->_padding_;
  local_1e8 = uVar12;
  uStack_1e4 = uVar13;
  uStack_1e0 = uVar14;
  uStack_1dc = uVar16;
  local_1d8 = uVar17;
  uStack_1d4 = uVar18;
  uStack_1d0 = uVar19;
  uStack_1cc = uVar20;
  local_1c8 = uVar21;
  uStack_1c4 = uVar22;
  uStack_1c0 = uVar23;
  uStack_1bc = uVar24;
  local_1b8 = uVar25;
  uStack_1b4 = uVar26;
  uStack_1b0 = uVar27;
  uStack_1ac = uVar28;
  local_998 = auVar3;
  local_988 = auVar4;
  uStack_8f8 = (double)CONCAT44(uStack_8f8._4_4_,(undefined4)uStack_8f8);
  local_900 = (double)CONCAT44(local_900._4_4_,(undefined4)local_900);
  if (!bVar33) {
    if (param_4->BindingType == Skinning) {
      pTVar50 = &(param_4->Debug).SkinningCurrentLocalToWorld;
      pTVar32 = &(param_4->Debug).SkinningCurrentLocalToWorld;
    }
    else {
      pTVar50 = &(param_4->Debug).RigidCurrentLocalToWorld;
      pTVar32 = &(param_4->Debug).RigidCurrentLocalToWorld;
    }
    pVVar41 = &pTVar32->Scale3D;
    lVar61 = -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)(pVVar41->ZW).m128d_f64 + 0xc),
                               _UNK_15061cc88 & *(uint *)((pVVar41->ZW).m128d_f64 + 1)));
    auVar71._8_4_ = (int)lVar61;
    auVar71._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
          (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                           *(uint *)((longlong)(pVVar41->ZW).m128d_f64 + 4),
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                           *(uint *)(pVVar41->ZW).m128d_f64));
    auVar71._12_4_ = (int)((ulonglong)lVar61 >> 0x20);
    uVar52 = movmskpd((int)pFVar53,auVar71);
    auVar64._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
          (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)(pVVar41->XY).m128d_f64 + 0xc),
                           _UNK_15061cc88 & *(uint *)((pVVar41->XY).m128d_f64 + 1)));
    auVar64._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
          (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                           *(uint *)((longlong)(pVVar41->XY).m128d_f64 + 4),
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                           *(uint *)(pVVar41->XY).m128d_f64));
    iVar35 = movmskpd((int)pVVar41,auVar64);
    if ((uVar52 & 0x3fffffff) == 0 && iVar35 == 0) {
      local_8a8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_8a8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_8a8.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_8a8.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_8a8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_8a8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(pTVar50,&local_8a8);
    }
    auVar5._0_8_ = this->_padding_;
    auVar5._8_8_ = this->_padding_;
    auVar3._0_8_ = (double)this->_padding_;
    dStack_8c8 = (double)this->_padding_;
    local_8c0 = (double)this->_padding_;
    dVar63 = (double)this->_padding_;
    dVar2 = (double)this->_padding_;
    local_8e0 = auVar5;
    local_8d0 = auVar3._0_8_;
    dStack_8b8 = dVar63;
    UE::Math::TTransform<double>::ToMatrixWithScale(&local_8a8,&local_748);
    auVar65._8_4_ = SUB84(dStack_8c8,0);
    auVar65._0_8_ = dStack_8c8;
    auVar65._12_4_ = (int)((ulonglong)dStack_8c8 >> 0x20);
    auVar4._0_8_ = auVar65._8_8_ * local_748.M[0][1];
    auVar66._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(dStack_8c8 * local_748.M[0][0]) >> 0x20) & uVar56,
                          SUB84(dStack_8c8 * local_748.M[0][0],0) & uVar59);
    auVar66._8_4_ = SUB84(auVar4._0_8_,0) & uVar48;
    auVar66._12_4_ = (uint)((ulonglong)auVar4._0_8_ >> 0x20) & uVar49;
    auVar67._8_4_ = (int)auVar5._0_8_;
    auVar67._0_8_ = auVar5._0_8_;
    auVar67._12_4_ = (int)((ulonglong)auVar5._0_8_ >> 0x20);
    auVar3._8_8_ = (double)CONCAT44((uint)((ulonglong)(local_8c0 * local_748.M[1][0]) >> 0x20) &
                                    uVar56,SUB84(local_8c0 * local_748.M[1][0],0) & uVar59) +
                   auVar66._0_8_ +
                   (double)CONCAT44((uint)((ulonglong)(dVar63 * local_748.M[2][0]) >> 0x20) & uVar56
                                    ,SUB84(dVar63 * local_748.M[2][0],0) & uVar59);
    auVar4._0_8_ = (double)CONCAT44((uint)((ulonglong)(local_8c0 * local_748.M[1][1]) >> 0x20) &
                                    uVar49,SUB84(local_8c0 * local_748.M[1][1],0) & uVar48) +
                   auVar66._8_8_ +
                   (double)CONCAT44((uint)((ulonglong)(dVar63 * local_748.M[2][1]) >> 0x20) & uVar49
                                    ,SUB84(dVar63 * local_748.M[2][1],0) & uVar48);
    auVar72._8_4_ = (int)auVar5._8_8_;
    auVar72._0_8_ = auVar5._8_8_;
    auVar72._12_4_ = (int)((ulonglong)auVar5._8_8_ >> 0x20);
    auVar70._0_8_ =
         local_748.M[1][0] * local_748.M[1][0] + local_748.M[0][0] * local_748.M[0][0] +
         local_748.M[2][0] * local_748.M[2][0];
    auVar70._8_8_ =
         local_748.M[1][1] * local_748.M[1][1] + local_748.M[0][1] * local_748.M[0][1] +
         local_748.M[2][1] * local_748.M[2][1];
    auVar68._8_4_ = SUB84(auVar70._8_8_,0);
    auVar68._0_8_ = auVar70._0_8_;
    auVar68._12_4_ = (int)((ulonglong)auVar70._8_8_ >> 0x20);
    auVar69._8_8_ = auVar70._8_8_;
    auVar69._0_8_ = auVar68._8_8_;
    auVar4._8_8_ = local_748.M[1][2] * local_748.M[1][2] + local_748.M[0][2] * local_748.M[0][2] +
                   local_748.M[2][2] * local_748.M[2][2];
    local_9a8 = (double)auVar5._8_8_ * local_748.M[1][0] + (double)auVar5._0_8_ * local_748.M[0][0]
                + auVar3._0_8_ * local_748.M[2][0] + local_748.M[3][0];
    dStack_9a0 = auVar72._8_8_ * local_748.M[1][1] + auVar67._8_8_ * local_748.M[0][1] +
                 auVar3._0_8_ * local_748.M[2][1] + local_748.M[3][1];
    auVar71 = maxpd(auVar70,auVar69);
    auVar3._0_8_ = (double)auVar5._8_8_ * local_748.M[1][2] +
                   (double)auVar5._0_8_ * local_748.M[0][2] + auVar3._0_8_ * local_748.M[2][2] +
                   local_748.M[3][2];
    auVar11._8_4_ = SUB84(auVar4._8_8_,0);
    auVar11._0_8_ = auVar4._8_8_;
    auVar11._12_4_ = (int)((ulonglong)auVar4._8_8_ >> 0x20);
    auVar71 = maxpd(auVar71,auVar11);
    auVar4._8_8_ = (double)CONCAT44((uint)((ulonglong)(local_8c0 * local_748.M[1][2]) >> 0x20) &
                                    uVar56,SUB84(local_8c0 * local_748.M[1][2],0) & uVar59) +
                   (double)CONCAT44((uint)((ulonglong)(dStack_8c8 * local_748.M[0][2]) >> 0x20) &
                                    uVar56,SUB84(dStack_8c8 * local_748.M[0][2],0) & uVar59) +
                   (double)CONCAT44((uint)((ulonglong)(dVar63 * local_748.M[2][2]) >> 0x20) & uVar56
                                    ,SUB84(dVar63 * local_748.M[2][2],0) & uVar59);
    local_900._0_4_ = SUB84(auVar3._8_8_,0);
    local_900._4_4_ = (undefined4)((ulonglong)auVar3._8_8_ >> 0x20);
    local_978 = SQRT(auVar4._8_8_ * auVar4._8_8_ + auVar3._8_8_ * auVar3._8_8_ +
                     auVar4._0_8_ * auVar4._0_8_);
    dVar63 = SQRT(auVar71._0_8_) * dVar2;
    if (dVar63 <= local_978) {
      local_978 = dVar63;
    }
    local_998._8_4_ = (undefined4)local_900;
    local_998._0_8_ = auVar3._0_8_;
    local_998._12_4_ = local_900._4_4_;
    local_988._8_8_ = auVar4._8_8_;
    local_988._0_8_ = auVar4._0_8_;
    local_1e8 = local_958;
    uStack_1e4 = uStack_954;
    uStack_1e0 = uStack_950;
    uStack_1dc = uStack_94c;
    local_1d8 = local_948;
    uStack_1d4 = uStack_944;
    uStack_1d0 = uStack_940;
    uStack_1cc = uStack_93c;
    local_1c8 = local_938;
    uStack_1c4 = uStack_934;
    uStack_1c0 = uStack_930;
    uStack_1bc = uStack_92c;
    local_1b8 = local_928;
    uStack_1b4 = uStack_924;
    uStack_1b0 = uStack_920;
    uStack_1ac = uStack_91c;
    local_918 = local_9a8;
    dStack_910 = dStack_9a0;
    dStack_908 = auVar3._0_8_;
    dStack_8f0 = auVar4._8_8_;
    local_8e8 = local_978;
    local_8b0 = dVar2;
    uStack_8f8 = auVar4._0_8_;
    local_900 = auVar3._8_8_;
  }
  pFVar62 = local_a08;
  dStack_220 = (double)CONCAT44(uStack_9dc,uStack_9e0);
  dStack_210 = (double)CONCAT44(uStack_a1c,uStack_a20);
  local_228 = (undefined4)local_9e8;
  uStack_224 = local_9e8._4_4_;
  local_208 = (double)CONCAT44(uStack_9c4,local_9c8);
  dStack_200 = (double)CONCAT44(uStack_9bc,uStack_9c0);
  local_1a8 = local_5c8;
  dStack_1a0 = uStack_5c0;
  local_188 = local_5a8;
  dStack_180 = uStack_5a0;
  local_168 = local_588;
  dStack_160 = dStack_580;
  local_148 = local_568;
  dStack_140 = dStack_560;
  local_218 = (undefined4)local_a28;
  uStack_214 = local_a28._4_4_;
  local_1f8 = (double)CONCAT44(uStack_9b4,local_9b8);
  dStack_1f0 = (double)CONCAT44(uStack_9ac,uStack_9b0);
  local_198 = local_5b8;
  dStack_190 = uStack_5b0;
  local_178 = local_598;
  dStack_170 = uStack_590;
  local_158 = local_578;
  dStack_150 = dStack_570;
  local_138 = local_558;
  dStack_130 = dStack_550;
  local_548._512_4_ = (undefined4)(local_9a8 - auVar3._8_8_);
  local_f4 = ((local_a47 & 1) << 6 ^ (local_f4 & 0xffffffbf | 0x10000)) & 0xffffffdf;
  local_548._516_4_ = (undefined4)(dStack_9a0 - auVar4._0_8_);
  local_548._520_4_ = (undefined4)(auVar3._0_8_ - auVar4._8_8_);
  local_548._528_4_ = (undefined4)(local_9a8 + auVar3._8_8_);
  local_548._532_4_ = (undefined4)(dStack_9a0 + auVar4._0_8_);
  local_548._536_4_ = (undefined4)(auVar3._0_8_ + auVar4._8_8_);
  if (local_a08->RHICmdList == (FRHICommandList *)0x0) {
    bVar33 = ::FDebug::CheckVerifyFailedImpl2
                       ("RHICmdList",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                        ,0x46,L"");
    if (bVar33) {
      pcVar10 = (code *)swi(3);
      pFVar36 = (FMeshBatch *)(*pcVar10)();
      return pFVar36;
    }
  }
  local_a00 = (FName)pFVar62->RHICmdList;
  paVar9 = &pFVar62->OneFrameResources->Next;
  aVar42 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
            )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
  *(undefined8 *)((longlong)aVar42 + 8) = 0;
  local_a08 = (FMeshElementCollector *)((longlong)aVar42 + 0x10);
  *(undefined ***)aVar42 =
       &
       ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  TVar43.Next = *paVar9;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar42 + 8) = TVar43.Next;
    LOCK();
    aVar44 = *paVar9;
    bVar33 = TVar43.Next == aVar44;
    if (bVar33) {
      *paVar9 = aVar42;
      aVar44 = TVar43.Next;
    }
    UNLOCK();
    TVar43.Next = aVar44;
  } while (!bVar33);
  FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer
            ((FDynamicPrimitiveUniformBuffer *)local_a08);
  *(undefined4 *)((longlong)aVar42 + 0x38) = 1;
  pFVar45 = FPrimitiveUniformShaderParametersBuilder::Build
                      ((FPrimitiveUniformShaderParametersBuilder *)local_548);
  puVar46 = *(undefined8 **)((longlong)aVar42 + 0x48);
  if (puVar46 == (undefined8 *)0x0) {
    puVar46 = FMemory::Malloc(800,0x10);
    *(undefined8 **)((longlong)aVar42 + 0x48) = puVar46;
  }
  lVar61 = 6;
  do {
    pFVar55 = pFVar45;
    puVar47 = puVar46;
    uVar29 = *(undefined8 *)&pFVar55->NumInstanceSceneDataEntries;
    *puVar47 = *(undefined8 *)pFVar55;
    puVar47[1] = uVar29;
    uVar29 = *(undefined8 *)((longlong)&(pFVar55->PositionHigh).field0_0x0 + 8);
    puVar47[2] = *(undefined8 *)&(pFVar55->PositionHigh).field0_0x0;
    puVar47[3] = uVar29;
    uVar29 = *(undefined8 *)((pFVar55->LocalToRelativeWorld).M[0] + 2);
    puVar47[4] = *(undefined8 *)(pFVar55->LocalToRelativeWorld).M[0];
    puVar47[5] = uVar29;
    uVar29 = *(undefined8 *)((pFVar55->LocalToRelativeWorld).M[1] + 2);
    puVar47[6] = *(undefined8 *)(pFVar55->LocalToRelativeWorld).M[1];
    puVar47[7] = uVar29;
    uVar29 = *(undefined8 *)((pFVar55->LocalToRelativeWorld).M[2] + 2);
    puVar47[8] = *(undefined8 *)(pFVar55->LocalToRelativeWorld).M[2];
    puVar47[9] = uVar29;
    uVar29 = *(undefined8 *)((pFVar55->LocalToRelativeWorld).M[3] + 2);
    puVar47[10] = *(undefined8 *)(pFVar55->LocalToRelativeWorld).M[3];
    puVar47[0xb] = uVar29;
    uVar29 = *(undefined8 *)((pFVar55->RelativeWorldToLocal).M[0] + 2);
    puVar47[0xc] = *(undefined8 *)(pFVar55->RelativeWorldToLocal).M[0];
    puVar47[0xd] = uVar29;
    uVar29 = *(undefined8 *)((pFVar55->RelativeWorldToLocal).M[1] + 2);
    pFVar45 = (FPrimitiveUniformShaderParameters *)((pFVar55->RelativeWorldToLocal).M + 2);
    puVar47[0xe] = *(undefined8 *)(pFVar55->RelativeWorldToLocal).M[1];
    puVar47[0xf] = uVar29;
    lVar61 = lVar61 + -1;
    puVar46 = puVar47 + 0x10;
  } while (lVar61 != 0);
  uVar29 = *(undefined8 *)((pFVar55->RelativeWorldToLocal).M[2] + 2);
  puVar47[0x10] = *(undefined8 *)pFVar45;
  puVar47[0x11] = uVar29;
  uVar29 = *(undefined8 *)((pFVar55->RelativeWorldToLocal).M[3] + 2);
  this_02 = (TUniformBuffer<FPrimitiveUniformShaderParameters> *)((longlong)local_a08 + 8);
  puVar47[0x12] = *(undefined8 *)(pFVar55->RelativeWorldToLocal).M[3];
  puVar47[0x13] = uVar29;
  FRenderResource::UpdateRHI((FRenderResource *)this_02,(FRHICommandListBase *)local_a00);
  (**(code **)(this_02->_padding_ + 0x18))(this_02,local_a00);
  *(TUniformBuffer<FPrimitiveUniformShaderParameters> **)((longlong)FVar60 + 8) = this_02;
  uVar59 = 0;
  *(undefined4 *)((longlong)FVar60 + 0x58) = 0;
  *(undefined4 *)((longlong)FVar60 + 0x60) = 1;
  *(EPrimitiveIdMode *)((longlong)FVar60 + 0x54) =
       (local_a3c ^ *(EPrimitiveIdMode *)((longlong)FVar60 + 0x54)) &
       ~(PrimID_Num|PrimID_ForceZero|PrimID_DynamicPrimitiveShaderData) ^ local_a3c;
  if (local_a48 == '\0') {
    *(uint *)((longlong)FVar60 + 0x5c) = uVar57;
    pFVar51 = (FRHIBuffer *)0x0;
  }
  else {
    *(undefined4 *)((longlong)FVar60 + 0x5c) = 0;
    pFVar51 = (((param_4->HairGroupPublicData->Culling->DrawIndirectBuffer).Buffer.Reference)->
              Buffer).Reference;
  }
  *(FRHIBuffer **)((longlong)FVar60 + 0x48) = pFVar51;
  *(undefined4 *)((longlong)FVar60 + 0x50) = 0;
  *(FHairGroupPublicData **)((longlong)FVar60 + 0x40) = param_4->HairGroupPublicData;
  *(Type *)((longlong)FVar60 + 0x6c) = local_a44;
  *(undefined4 *)((longlong)FVar60 + 0x68) = 0;
  *(ulonglong *)((longlong)FVar60 + 0x38) = (ulonglong)this->ComponentId;
  if (local_a46 == '\0') {
    uVar57 = 0;
  }
  else {
    uVar57 = (uint)(byte)this->_padding_;
  }
  if (local_a38 == Strands) {
    uVar59 = 2;
  }
  *(uint *)((longlong)FVar38 + 0xd4) =
       (uVar57 & 1 ^ *(uint *)((longlong)FVar38 + 0xd4) & 0xfffffffe) & 0xfffffffd | uVar59;
  if (local_a38 == Strands) {
    bVar33 = GetHairStrandsUsesTriangleStrips();
    pFVar51 = (FRHIBuffer *)0x80;
    if (bVar33) goto LAB_14e00777a;
  }
  pFVar51 = (FRHIBuffer *)0x0;
LAB_14e00777a:
  *(uint *)((longlong)FVar38 + 0xd4) =
       *(uint *)((longlong)FVar38 + 0xd4) & 0xffffc07f | (uint)pFVar51;
  *(undefined4 *)((longlong)FVar38 + 0xc0) = *(undefined4 *)((longlong)local_a10 + 0x168);
  return (FMeshBatch *)FVar38;
}

// CreateRenderThreadResources @ 14e007860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairStrandsSceneProxy::CreateRenderThreadResources
          (FHairStrandsSceneProxy *this,FRHICommandListBase *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar7 = (this->HairGroupInstances).AllocatorInstance.Data;
  iVar2 = (this->HairGroupInstances).ArrayNum;
  plVar3 = (longlong *)this->_padding_;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  do {
    if ((this->HairGroupInstances).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return;
    }
    lVar4 = *(longlong *)pFVar7;
    bVar6 = FHairGroupInstance::FMeshes::IsValid((FMeshes *)(lVar4 + 0x120));
    if (bVar6) {
LAB_14e0078e8:
      if (*(longlong *)(*(longlong *)pFVar7 + 0x460) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Instance->HairGroupPublicData != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                           ,0x269,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      LOCK();
      *(int *)(*(longlong *)pFVar7 + 8) = *(int *)(*(longlong *)pFVar7 + 8) + 1;
      UNLOCK();
      *(FHairStrandsSceneProxy **)(*(longlong *)pFVar7 + 0x168) = this;
      (**(code **)(*plVar3 + 800))(plVar3,*(longlong *)pFVar7);
    }
    else {
      bVar6 = FHairGroupInstance::FCards::IsValid((FCards *)(lVar4 + 0x110));
      if (((bVar6) || (*(longlong *)(lVar4 + 0x40) != 0)) ||
         (*(longlong *)(*(longlong *)pFVar7 + 0x58) != 0)) goto LAB_14e0078e8;
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// DestroyRenderThreadResources @ 14e00a470

void __thiscall FHairStrandsSceneProxy::DestroyRenderThreadResources(FHairStrandsSceneProxy *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  pFVar10 = (this->HairGroupInstances).AllocatorInstance.Data;
  iVar4 = (this->HairGroupInstances).ArrayNum;
  plVar5 = (longlong *)this->_padding_;
  pFVar2 = pFVar10 + (longlong)iVar4 * 8;
  do {
    if ((this->HairGroupInstances).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar2) {
      return;
    }
    lVar6 = *(longlong *)pFVar10;
    bVar8 = FHairGroupInstance::FMeshes::IsValid((FMeshes *)(lVar6 + 0x120));
    if (bVar8) {
LAB_14e00a4f7:
      if (*(int *)(*(longlong *)pFVar10 + 8) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Instance->GetRefCount() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                           ,0x280,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      (**(code **)(*plVar5 + 0x328))(plVar5,*(longlong *)pFVar10);
      *(undefined8 *)(*(longlong *)pFVar10 + 0x168) = 0;
      puVar9 = *(undefined8 **)pFVar10;
      piVar1 = (int *)(puVar9 + 1);
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if (piVar1 == (int *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)(puVar9,1);
        }
      }
    }
    else {
      bVar8 = FHairGroupInstance::FCards::IsValid((FCards *)(lVar6 + 0x110));
      if (((bVar8) || (*(longlong *)(lVar6 + 0x40) != 0)) ||
         (*(longlong *)(*(longlong *)pFVar10 + 0x58) != 0)) goto LAB_14e00a4f7;
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// GetDynamicMeshElements @ 14e014770

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FHairStrandsSceneProxy::GetDynamicMeshElements
          (FHairStrandsSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  FSceneView *pFVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  UEngine *pUVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  EGroomViewMode EVar21;
  Type TVar22;
  FNameEntryId FVar23;
  FName *pFVar24;
  TStatIdData *pTVar25;
  FLinearColor *pFVar26;
  FMaterialRenderProxy *this_00;
  FMaterialRenderProxy *pFVar27;
  FString *pFVar28;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  FMeshBatch *pFVar29;
  FPrimitiveDrawInterface *pFVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  EShaderPlatform EVar34;
  FName FVar35;
  uint uVar36;
  FScriptContainerElement *pFVar37;
  uint uVar38;
  longlong lVar39;
  uint uVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined1 local_177;
  EGroomViewMode local_176;
  uint local_174;
  FColor_u_0 local_170;
  uint local_16c;
  uint local_168;
  uint uStack_164;
  FName local_160;
  longlong local_158;
  FName local_150;
  FName local_148;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [4];
  FName local_12c;
  FName local_124 [3];
  FScriptContainerElement *local_108;
  FLinearColor local_100;
  FString local_f0 [11];
  
  TVar22 = FSceneViewFamily::GetFeatureLevel(param_2);
  if (TVar22 == Num) {
    EVar34 = SP_NumPlatforms;
  }
  else {
    EVar34 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar22];
  }
  bVar19 = IsHairStrandsEnabled(Strands,EVar34);
  if (((!bVar19) && (bVar19 = IsHairStrandsEnabled(Cards,EVar34), !bVar19)) &&
     (bVar19 = IsHairStrandsEnabled(Meshes,EVar34), !bVar19)) {
    return;
  }
  uVar32 = (this->HairGroupInstances).ArrayNum;
  if (uVar32 == 0) {
    return;
  }
  local_16c = uVar32;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FHairStrandsSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FHairStrandsSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FHairStrandsSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_HairStrandsSceneProxy_GetDynamicMeshElements = (TStatIdData *)0x0;
    pFVar24 = ::FName::FName(&local_12c,"STAT_HairStrandsSceneProxy_GetDynamicMeshElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FHairStrandsSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::StatPtr_STAT_HairStrandsSceneProxy_GetDynamicMeshElements,*pFVar24,
               L"STAT_HairStrandsSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FHairStrandsSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar25 = _StatPtr_STAT_HairStrandsSceneProxy_GetDynamicMeshElements;
  if (_StatPtr_STAT_HairStrandsSceneProxy_GetDynamicMeshElements == (TStatIdData *)0x0) {
    pFVar24 = ::FName::FName(local_124,"STAT_HairStrandsSceneProxy_GetDynamicMeshElements");
    pTVar25 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_FHairStrandsSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                          ::__l2::StatPtr_STAT_HairStrandsSceneProxy_GetDynamicMeshElements,*pFVar24
                         ,L"STAT_HairStrandsSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar35 = *(FName *)&pTVar25->Name;
  bVar19 = false;
  bVar11 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  bVar18 = false;
  bVar20 = false;
  FVar23 = FVar35.ComparisonIndex.Value;
  uVar40 = FVar35.Number;
  if ((FVar23.Value != 0) || (uVar40 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_170.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_170._s_0,(pTVar25->StatDescriptionAnsi).Ptr);
      bVar19 = false;
      bVar11 = true;
      bVar18 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_160.ComparisonIndex.Value = FVar23.Value;
        local_160.Number = uVar40;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_160,(pTVar25->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                   ,0x318);
        bVar19 = true;
        bVar11 = true;
        bVar18 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_168 = FVar23.Value;
      uStack_164 = uVar40;
      local_150 = FVar35;
      FThreadStats::AddMessage(FVar35,CycleScopeStart);
      bVar18 = true;
      goto LAB_14e01499e;
    }
  }
  bVar11 = bVar20;
  bVar19 = bVar18;
  bVar18 = false;
  local_150 = local_148;
  FVar35 = local_148;
LAB_14e01499e:
  uVar16 = __real_42c60000;
  uVar15 = __real_40000000;
  fVar14 = __real_3f000000;
  uVar13 = __real_40400000;
  uVar12 = __real_3f800000;
  iVar33 = param_1->ArrayNum;
  local_174 = 0;
  if (0 < iVar33) {
    local_158 = 0;
    uVar44 = __real_40a00000;
    uVar45 = __real_40c00000;
    uVar42 = __real_40800000;
    do {
      lVar39 = local_158;
      uVar40 = local_174;
      uVar36 = 0;
      if ((int)local_174 < iVar33) {
        uVar36 = ~local_174 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = *(FSceneView **)((param_1->AllocatorInstance).Data + lVar39);
      if ((pFVar4->bIsReflectionCapture == false) &&
         ((((bVar20 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,pFVar4),
            bVar20 || (bVar20 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,pFVar4),
                      bVar20)) && ((param_3 >> (uVar40 & 0x1f) & 1) != 0)) &&
          (uVar36 = 0, uVar32 != 0)))) {
LAB_14e014b00:
        uVar38 = ~uVar36 >> 0x1f;
        uVar32 = 0;
        if ((int)uVar36 < (this->HairGroupInstances).ArrayNum) {
          uVar32 = uVar38;
        }
        if ((uVar32 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar39 = (longlong)(int)uVar36;
        if ((*(int *)(*(longlong *)((this->HairGroupInstances).AllocatorInstance.Data + lVar39 * 8)
                     + 8) == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("HairGroupInstances[GroupIt]->GetRefCount() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                ,0x327,L""), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar27 = (FMaterialRenderProxy *)0x0;
        EVar21 = GetGroomViewMode(pFVar4);
        local_176 = EVar21;
        switch(EVar21) {
        case SimHairStrands:
        case RenderHairStrands:
        case Cluster:
        case ClusterAABB:
          goto switchD_14e014bcb_caseD_1;
        case UV:
        case RootUV:
        case RootUDIM:
        case Seed:
        case Dimension:
        case RadiusVariation:
        case Color:
        case Roughness:
        case AO:
        case ClumpID:
        case Group:
        case LODColoration:
          goto switchD_14e014bcb_caseD_3;
        default:
switchD_14e014bcb_caseD_9:
          goto LAB_14e015115;
        }
      }
LAB_14e0151ed:
      local_174 = uVar40 + 1;
      iVar33 = param_1->ArrayNum;
      local_158 = local_158 + 8;
      FVar35 = local_150;
    } while ((int)local_174 < iVar33);
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    FThreadStats::AddMessage(FVar35,CycleScopeEnd);
  }
  return;
switchD_14e014bcb_caseD_1:
  uVar32 = 0;
  if ((int)uVar36 < (this->HairGroupInstances).ArrayNum) {
    uVar32 = uVar38;
  }
  if ((uVar32 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(int *)(*(longlong *)((this->HairGroupInstances).AllocatorInstance.Data + lVar39 * 8) + 0x468
              ) != 0) goto switchD_14e014bcb_caseD_9;
switchD_14e014bcb_caseD_3:
  uVar46 = 0;
  switch(EVar21) {
  case None:
    uVar46 = uVar16;
    break;
  case SimHairStrands:
  case RenderHairStrands:
  case Cluster:
  case ClusterAABB:
    uVar46 = 0;
    break;
  case UV:
    uVar46 = uVar15;
    break;
  case RootUV:
    uVar46 = uVar12;
    break;
  case RootUDIM:
    uVar46 = uVar45;
    break;
  case Seed:
    uVar46 = uVar13;
    break;
  case Dimension:
    uVar46 = uVar42;
    break;
  case RadiusVariation:
    uVar46 = uVar44;
    break;
  case Color:
    uVar46 = __real_40e00000;
    break;
  case Roughness:
    uVar46 = __real_41000000;
    break;
  case AO:
    uVar46 = __real_41400000;
    break;
  case ClumpID:
    uVar46 = __real_41300000;
    break;
  case Group:
    uVar46 = __real_41100000;
    break;
  case LODColoration:
    uVar46 = __real_41200000;
  }
  pFVar37 = (this->HairGroupInstances).AllocatorInstance.Data;
  iVar33 = (this->HairGroupInstances).ArrayNum;
  pFVar1 = pFVar37 + (longlong)iVar33 * 8;
  fVar41 = 0.0;
  while( true ) {
    fVar43 = fVar41;
    iVar31 = (this->HairGroupInstances).ArrayNum;
    if (iVar31 != iVar33) {
      local_177 = 0;
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_177);
      iVar31 = (this->HairGroupInstances).ArrayNum;
    }
    EVar21 = local_176;
    if (pFVar37 == pFVar1) break;
    lVar5 = *(longlong *)pFVar37;
    pFVar37 = pFVar37 + 8;
    fVar41 = *(float *)(lVar5 + 0xbc) * fVar14;
    if (fVar41 <= fVar43) {
      fVar41 = fVar43;
    }
  }
  if (local_176 == LODColoration) {
    uVar32 = 0;
    if ((int)uVar36 < iVar31) {
      uVar32 = uVar38;
    }
    if ((uVar32 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(longlong *)
         (*(longlong *)((this->HairGroupInstances).AllocatorInstance.Data + lVar39 * 8) + 0x460) ==
        0) {
      fVar43 = 0.0;
      goto LAB_14e014e10;
    }
    uVar32 = 0;
    if ((int)uVar36 < (this->HairGroupInstances).ArrayNum) {
      uVar32 = uVar38;
    }
    if ((uVar32 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar43 = *(float *)(*(longlong *)
                         (*(longlong *)
                           ((this->HairGroupInstances).AllocatorInstance.Data + lVar39 * 8) + 0x460)
                       + 0x510);
LAB_14e014e5f:
    uVar32 = 0;
    if ((int)uVar36 < (this->HairGroupInstances).ArrayNum) {
      uVar32 = uVar38;
    }
    if ((uVar32 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(longlong *)
         (*(longlong *)((this->HairGroupInstances).AllocatorInstance.Data + lVar39 * 8) + 0x460) ==
        0) {
      fVar41 = 0.0;
    }
    else {
      uVar32 = 0;
      if ((int)uVar36 < (this->HairGroupInstances).ArrayNum) {
        uVar32 = uVar38;
      }
      if ((uVar32 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar41 = *(float *)(*(longlong *)
                           (*(longlong *)
                             ((this->HairGroupInstances).AllocatorInstance.Data + lVar39 * 8) +
                           0x460) + 0x510);
    }
    pUVar17 = GEngine;
    iVar33 = (GEngine->LODColorationColors).ArrayNum;
    uVar32 = iVar33 - 1;
    if ((int)fVar41 < (int)uVar32) {
      uVar32 = (int)fVar41;
    }
    uVar40 = 0;
    if (0 < (int)uVar32) {
      uVar40 = uVar32;
    }
    uVar32 = 0;
    if ((int)uVar40 < iVar33) {
      uVar32 = ~uVar40 >> 0x1f;
    }
    if ((uVar32 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar1 = (pUVar17->LODColorationColors).AllocatorInstance.Data + (longlong)(int)uVar40 * 0x10;
    fVar41 = *(float *)pFVar1;
    fVar2 = *(float *)(pFVar1 + 4);
    fVar3 = *(float *)(pFVar1 + 8);
LAB_14e014fbc:
    local_108 = (FScriptContainerElement *)(double)fVar3;
    uVar8 = (double)fVar41;
    uVar9 = (double)fVar2;
    uVar10 = local_108;
  }
  else {
    if (local_176 == ClumpID) {
      iVar33 = 2;
      if (GHairStrands_ViewModeClumpIndex < 2) {
        iVar33 = GHairStrands_ViewModeClumpIndex;
      }
      iVar31 = 0;
      if (0 < iVar33) {
        iVar31 = iVar33;
      }
      fVar43 = (float)iVar31;
    }
LAB_14e014e10:
    if (EVar21 == Group) {
      pFVar26 = GetHairGroupDebugColor(&local_100,uVar36);
      fVar41 = (pFVar26->field0_0x0)._s_0.R;
      fVar2 = (pFVar26->field0_0x0)._s_0.G;
      fVar3 = (pFVar26->field0_0x0)._s_0.B;
      goto LAB_14e014fbc;
    }
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (EVar21 == LODColoration) goto LAB_14e014e5f;
  }
  pFVar27 = (FMaterialRenderProxy *)0x0;
  this_00 = ::operator_new(0x110);
  if (this_00 != (FMaterialRenderProxy *)0x0) {
    if (this->Strands_DebugMaterial != (UMaterialInterface *)0x0) {
      pFVar27 = (FMaterialRenderProxy *)
                (**(code **)(this->Strands_DebugMaterial->_padding_ + 0x310))();
    }
    pFVar28 = ::FString::FString(local_f0,&pFVar27->MaterialName);
    FMaterialRenderProxy::FMaterialRenderProxy(this_00,pFVar28);
    *(undefined4 *)&this_00[1]._padding_ = uVar46;
    auVar7._8_4_ = (int)uVar9;
    auVar7._0_8_ = uVar8;
    auVar7._12_4_ = (int)((ulonglong)uVar9 >> 0x20);
    this_00[1]._padding_ = uVar8;
    this_00[1].UniformExpressionCache.Elements.UniformBuffer =
         (TRefCountPtr<FRHIUniformBuffer>)auVar7._8_8_;
    this_00->_padding_ = (longlong)&___7FHairDebugModeMaterialRenderProxy__6B_;
    *(float *)&this_00[1]._padding_ = fVar43;
    this_00[1]._padding_ = (longlong)pFVar27;
    *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = 0;
    this_00[1].UniformExpressionCache.Elements.AllocatedVTs.AllocatorInstance.Data =
         (FScriptContainerElement *)uVar10;
    FVar23 = FNameEntryId::FromValidEName((EName)local_138);
    this_00[1].UniformExpressionCache.Elements.AllocatedVTs.ArrayNum =
         *(int *)CONCAT44(extraout_var,FVar23.Value);
    this_00[1].UniformExpressionCache.Elements.AllocatedVTs.ArrayMax = 0;
    FVar23 = FNameEntryId::FromValidEName((EName)local_134);
    *(undefined4 *)
     &this_00[1].UniformExpressionCache.Elements.OwnedAllocatedVTs.AllocatorInstance.Data =
         *(undefined4 *)CONCAT44(extraout_var_00,FVar23.Value);
    *(undefined4 *)
     ((longlong)&this_00[1].UniformExpressionCache.Elements.OwnedAllocatedVTs.AllocatorInstance.Data
     + 4) = 0;
    FVar23 = FNameEntryId::FromValidEName((EName)local_130);
    this_00[1].UniformExpressionCache.Elements.OwnedAllocatedVTs.ArrayNum =
         *(int *)CONCAT44(extraout_var_01,FVar23.Value);
    this_00[1].UniformExpressionCache.Elements.OwnedAllocatedVTs.ArrayMax = 0;
    FVar23 = FNameEntryId::FromValidEName((EName)&local_168);
    *(undefined4 *)
     &this_00[1].UniformExpressionCache.Elements.ParameterCollections.AllocatorInstance.Data =
         *(undefined4 *)CONCAT44(extraout_var_02,FVar23.Value);
    *(undefined4 *)
     ((longlong)
      &this_00[1].UniformExpressionCache.Elements.ParameterCollections.AllocatorInstance.Data + 4) =
         0;
    pFVar27 = this_00;
  }
  FMeshElementCollector::RegisterOneFrameMaterialProxy(param_4,pFVar27);
  uVar44 = __real_40a00000;
  uVar45 = __real_40c00000;
  uVar40 = local_174;
  uVar42 = __real_40800000;
LAB_14e015115:
  uVar32 = 0;
  if ((int)uVar36 < (this->HairGroupInstances).ArrayNum) {
    uVar32 = uVar38;
  }
  if ((uVar32 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar29 = CreateMeshBatch(this,param_2,param_4,Raster,
                            *(FHairGroupInstance **)
                             ((this->HairGroupInstances).AllocatorInstance.Data + lVar39 * 8),uVar36
                            ,pFVar27);
  if (pFVar29 != (FMeshBatch *)0x0) {
    FMeshElementCollector::AddMesh(param_4,uVar40,pFVar29);
    lVar39 = this->_padding_;
    pFVar30 = FMeshElementCollector::GetPDI(param_4,uVar40);
    FPrimitiveSceneProxy::RenderBounds
              ((FPrimitiveSceneProxy *)this,pFVar30,&param_2->EngineShowFlags,
               (TBoxSphereBounds<double,double> *)&this->_padding_,(lVar39 & 0x600) != 0);
  }
  uVar36 = uVar36 + 1;
  uVar32 = local_16c;
  if (local_16c <= uVar36) goto LAB_14e0151ed;
  goto LAB_14e014b00;
}

// GetDynamicRayTracingInstances @ 14e0153f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairStrandsSceneProxy::GetDynamicRayTracingInstances
          (FHairStrandsSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar4 [16];
  EHairGeometryType EVar7;
  FSceneView *this_00;
  FHairGroupInstance *pFVar8;
  FRDGPooledBuffer *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  int iVar21;
  bool bVar22;
  EShaderPlatform EVar23;
  uint uVar24;
  int iVar25;
  TTransform<double> *pTVar26;
  FScriptContainerElement *pFVar27;
  FMeshBatch *pFVar28;
  longlong lVar29;
  FRayTracingInstance *pFVar30;
  uint uVar31;
  FScriptContainerElement *pFVar32;
  FHairStrandsRaytracingResource *pFVar33;
  uint uVar34;
  EHairViewRayTracingMask EVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStackY_328 [32];
  bool local_2d8;
  undefined1 local_2d7 [3];
  uint local_2d4;
  EHairViewRayTracingMask local_2d0;
  int local_2cc;
  uint local_2c8;
  FScriptContainerElement *local_2c0;
  FRayTracingInstance local_2b8;
  uint local_248;
  FSceneView *local_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  FRayTracingInstance local_198;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_328;
  bVar22 = IsHairRayTracingEnabled();
  if ((bVar22) && ((this->HairGroupInstances).ArrayNum != 0)) {
    iVar25 = (param_1->Views).ArrayNum;
    pFVar27 = (param_1->Views).AllocatorInstance.Data;
    local_2cc = iVar25;
    if ((iVar25 < 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar22)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_2d4 = param_1->VisibilityMap;
    local_248 = 0;
    if (local_2d4 != 0) {
      for (; (local_2d4 >> local_248 & 1) == 0; local_248 = local_248 + 1) {
      }
    }
    uVar31 = 0x20;
    if (local_2d4 != 0) {
      uVar31 = local_248;
    }
    if ((((int)uVar31 < 0) || (iVar25 <= (int)uVar31)) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Views.IsValidIndex(FirstActiveViewIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                            ,0x2a7,
                            L"There should be at least one active view when calling GetDynamicRayTracingInstances(...)."
                           ), bVar22)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar34 = 0;
    uVar24 = 0;
    if ((int)uVar31 < iVar25) {
      uVar24 = ~uVar31 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar22)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    this_00 = *(FSceneView **)(pFVar27 + (longlong)(int)uVar31 * 8);
    local_240 = this_00;
    EVar23 = FSceneView::GetShaderPlatform(this_00);
    bVar22 = IsHairStrandsEnabled(Strands,EVar23);
    if ((((bVar22) || (bVar22 = IsHairStrandsEnabled(Cards,EVar23), bVar22)) ||
        (bVar22 = IsHairStrandsEnabled(Meshes,EVar23), bVar22)) &&
       ((bVar22 = AllowDebugViewmodes(), fVar20 = __real_3f000000, !bVar22 ||
        ((this_00->Family->EngineShowFlags).Wireframe == 0)))) {
      local_2d0 = (this_00->Family->EngineShowFlags).PathTracing + RayTracing;
      local_2c8 = (this->HairGroupInstances).ArrayNum;
      if (local_2c8 != 0) {
        do {
          pFVar33 = (FHairStrandsRaytracingResource *)0x0;
          uVar31 = 0;
          if ((int)uVar34 < (this->HairGroupInstances).ArrayNum) {
            uVar31 = ~uVar34 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar8 = *(FHairGroupInstance **)
                    ((this->HairGroupInstances).AllocatorInstance.Data + (longlong)(int)uVar34 * 8);
          if ((*(int *)&pFVar8->field_0x8 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Instance->GetRefCount() > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                  ,699,L""), bVar22)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (GUseProxyLocalToWorld == false) {
            if (pFVar8->BindingType == Skinning) goto LAB_14e0156da;
            pTVar26 = &(pFVar8->Debug).RigidCurrentLocalToWorld;
LAB_14e0156ea:
            local_228 = (pTVar26->Rotation).ZW.m128d_f64[0];
            dStack_220 = (pTVar26->Rotation).ZW.m128d_f64[1];
            dVar2 = (pTVar26->Rotation).XY.m128d_f64[0];
            dVar19 = (pTVar26->Rotation).XY.m128d_f64[1];
            dVar15 = (pTVar26->Rotation).XY.m128d_f64[0];
            dVar18 = dVar19 + dVar19;
            dVar3 = dVar2 * (dVar2 + dVar2);
            dVar38 = local_228 + local_228;
            uVar40 = 0;
            uVar41 = 0;
            auVar4 = *(undefined1 (*) [16])(pTVar26->Scale3D).XY.m128d_f64;
            local_238 = (pTVar26->Rotation).XY.m128d_f64[0];
            dStack_230 = (pTVar26->Rotation).XY.m128d_f64[1];
            dVar16 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                     (local_228 * dVar38 + dVar19 * dVar18)) * (pTVar26->Scale3D).XY.m128d_f64[0];
            dVar17 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
                     (local_228 * dVar38 + dVar3)) * (pTVar26->Scale3D).XY.m128d_f64[1];
            dVar13 = dVar18 * dVar15;
            dVar14 = dVar38 * (pTVar26->Rotation).XY.m128d_f64[1];
            dVar11 = dStack_220 * (dVar2 + dVar2);
            dVar15 = dVar15 * dVar38;
            dVar12 = (dStack_220 * dVar38 + dVar13) * (pTVar26->Scale3D).XY.m128d_f64[0];
            dVar2 = (dVar11 + dVar14) * (pTVar26->Scale3D).XY.m128d_f64[1];
            dVar3 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - (dVar3 + dVar19 * dVar18)) *
                    (pTVar26->Scale3D).ZW.m128d_f64[0];
            auVar39 = blendpd(auVar4,*(undefined1 (*) [16])(pTVar26->Scale3D).ZW.m128d_f64,2);
            dVar13 = auVar4._8_8_ * (dVar13 - dStack_220 * dVar38);
            dVar11 = (pTVar26->Scale3D).ZW.m128d_f64[0] * (dVar14 - dVar11);
            uStack_1c0 = 0;
            dVar14 = (dVar18 * dStack_220 + dVar15) * (pTVar26->Scale3D).ZW.m128d_f64[0];
            local_118 = auVar39._0_8_ * (dVar15 - dVar18 * dStack_220);
            local_c8 = *(undefined4 *)(pTVar26->Translation).XY.m128d_f64;
            uStack_c4 = *(undefined4 *)((longlong)(pTVar26->Translation).XY.m128d_f64 + 4);
            uStack_c0 = *(undefined4 *)((pTVar26->Translation).XY.m128d_f64 + 1);
            uStack_bc = *(undefined4 *)((longlong)(pTVar26->Translation).XY.m128d_f64 + 0xc);
            dStack_110 = 0.0;
            uVar36 = 0;
            uVar37 = 0;
            uStack_200 = 0;
            uStack_1e0 = 0;
            local_218._8_4_ = SUB84(dVar12,0);
            local_218._0_8_ = dVar16;
            local_218._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            local_1f8._8_4_ = SUB84(dVar17,0);
            local_1f8._0_8_ = dVar13;
            local_1f8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
            local_1d8._8_4_ = SUB84(dVar11,0);
            local_1d8._0_8_ = dVar14;
            local_1d8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
            local_b8 = *(undefined4 *)(pTVar26->Translation).ZW.m128d_f64;
            uStack_b4 = *(undefined4 *)((longlong)(pTVar26->Translation).ZW.m128d_f64 + 4);
            uStack_b0 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
            uStack_ac = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
            local_208 = local_118;
            local_1e8 = dVar2;
            local_1c8 = dVar3;
            local_1b8 = local_c8;
            uStack_1b4 = uStack_c4;
            uStack_1b0 = uStack_c0;
            uStack_1ac = uStack_bc;
            local_1a8 = local_b8;
            uStack_1a4 = uStack_b4;
            uStack_1a0 = uStack_b0;
            uStack_19c = uStack_ac;
          }
          else {
            if (pFVar8->BindingType == Skinning) {
LAB_14e0156da:
              pTVar26 = &(pFVar8->Debug).SkinningCurrentLocalToWorld;
              goto LAB_14e0156ea;
            }
            dVar16 = (double)this->_padding_;
            dVar12 = (double)this->_padding_;
            local_118 = (double)this->_padding_;
            dStack_110 = (double)this->_padding_;
            dVar13 = (double)this->_padding_;
            dVar17 = (double)this->_padding_;
            dVar2 = (double)this->_padding_;
            uVar5 = this->_padding_;
            uVar36 = (undefined4)uVar5;
            uVar37 = (undefined4)((ulonglong)uVar5 >> 0x20);
            dVar14 = (double)this->_padding_;
            dVar11 = (double)this->_padding_;
            dVar3 = (double)this->_padding_;
            uVar6 = this->_padding_;
            uVar40 = (undefined4)uVar6;
            uVar41 = (undefined4)((ulonglong)uVar6 >> 0x20);
            local_c8 = (undefined4)this->_padding_;
            uStack_c4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
            uStack_c0 = (undefined4)this->_padding_;
            uStack_bc = *(undefined4 *)((longlong)&this->_padding_ + 4);
            local_b8 = (undefined4)this->_padding_;
            uStack_b4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
            uStack_b0 = (undefined4)this->_padding_;
            uStack_ac = *(undefined4 *)((longlong)&this->_padding_ + 4);
          }
          local_128._8_4_ = SUB84(dVar12,0);
          local_128._0_8_ = dVar16;
          local_128._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          local_108._8_4_ = SUB84(dVar17,0);
          local_108._0_8_ = dVar13;
          local_108._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          local_f8._8_4_ = uVar36;
          local_f8._0_8_ = dVar2;
          local_f8._12_4_ = uVar37;
          local_e8._8_4_ = SUB84(dVar11,0);
          local_e8._0_8_ = dVar14;
          local_e8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
          local_d8._8_4_ = uVar40;
          local_d8._0_8_ = dVar3;
          local_d8._12_4_ = uVar41;
          local_2d8 = false;
          fVar1 = pFVar8->HairGroupPublicData->LODIndex;
          EVar7 = (pFVar8->HairGroupPublicData->VFInput).GeometryType;
          uVar31 = (int)ROUND((fVar1 + fVar1) - fVar20) >> 1;
          if ((int)uVar31 < 0) {
            uVar31 = 0;
          }
          EVar35 = PathTracing|RayTracing;
          if (EVar7 == Strands) {
            pFVar33 = (pFVar8->Strands).RenRaytracingResource;
            EVar35 = (pFVar8->Strands).ViewRayTracingMask;
            local_2d8 = true;
          }
          else if (EVar7 == Cards) {
            uVar24 = 0;
            if ((int)uVar31 < (pFVar8->Cards).LODs.ArrayNum) {
              uVar24 = ~uVar31 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar33 = *(FHairStrandsRaytracingResource **)
                       ((pFVar8->Cards).LODs.AllocatorInstance.Data +
                       (longlong)(int)uVar31 * 0x68 + 0x18);
          }
          else if (EVar7 == Meshes) {
            uVar24 = 0;
            if ((int)uVar31 < (pFVar8->Meshes).LODs.ArrayNum) {
              uVar24 = ~uVar31 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar33 = *(FHairStrandsRaytracingResource **)
                       ((pFVar8->Meshes).LODs.AllocatorInstance.Data +
                       (longlong)(int)uVar31 * 0x30 + 0x10);
          }
          if ((((local_2d0 & EVar35) != None) && (pFVar33 != (FHairStrandsRaytracingResource *)0x0))
             && (bVar22 = FRayTracingGeometry::IsValid(&pFVar33->RayTracingGeometry), bVar22)) {
            iVar25 = (pFVar33->RayTracingGeometry).Initializer.Segments.ArrayNum;
            pFVar32 = (pFVar33->RayTracingGeometry).Initializer.Segments.AllocatorInstance.Data;
            pFVar27 = pFVar32 + (longlong)iVar25 * 0x28;
            local_2c0 = pFVar27;
            while( true ) {
              if ((pFVar33->RayTracingGeometry).Initializer.Segments.ArrayNum != iVar25) {
                local_2d7[0] = 0;
                `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_2d7);
                pFVar27 = local_2c0;
              }
              if (pFVar32 == pFVar27) break;
              if ((*(longlong *)pFVar32 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Segment.VertexBuffer.IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                                      ,0x2e4,L""), pFVar27 = local_2c0, bVar22)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar32 = pFVar32 + 0x28;
            }
            uVar31 = 0;
            pFVar28 = CreateMeshBatch(this,local_240->Family,(FMeshElementCollector *)param_1,
                                      Raytracing,pFVar8,uVar34,(FMaterialRenderProxy *)0x0);
            if (pFVar28 != (FMeshBatch *)0x0) {
              local_2b8.Geometry = &pFVar33->RayTracingGeometry;
              local_2b8.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_2b8.Materials.ArrayNum = 0;
              local_2b8.Materials.ArrayMax = 0;
              local_2b8.MaterialsView.DataPtr = (FMeshBatch *)0x0;
              local_2b8.MaterialsView.ArrayNum = 0;
              local_2b8.bApplyLocalBoundsTransform = false;
              local_2b8.bThinGeometry = false;
              local_2b8.InstanceLayer = NearField;
              local_2b8.bInstanceMaskAndFlagsDirty = true;
              local_2b8.NumTransforms = 0;
              local_2b8.PrimitiveInstanceIndices.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              local_2b8.PrimitiveInstanceIndices.ArrayNum = 0;
              local_2b8.PrimitiveInstanceIndices.ArrayMax = 0;
              local_2b8.PrimitiveInstanceIndicesView.DataPtr = (uint *)0x0;
              local_2b8.PrimitiveInstanceIndicesView.ArrayNum = 0;
              local_2b8.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_2b8.InstanceTransforms.ArrayNum = 0;
              local_2b8.InstanceTransforms.ArrayMax = 0;
              local_2b8.InstanceTransformsView.DataPtr = (TMatrix<double> *)0x0;
              local_2b8.InstanceTransformsView.ArrayNum = 0;
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x8e0,&local_2b8.Materials.AllocatorInstance,
                                  &local_2b8.Materials.ArrayMax);
              local_2b8.Materials.ArrayNum = iVar25 + 1;
              FMeshBatch::FMeshBatch
                        ((FMeshBatch *)
                         (local_2b8.Materials.AllocatorInstance.Data + (longlong)iVar25 * 0xe0),
                         pFVar28);
              if (((local_2b8.InstanceTransforms.AllocatorInstance.Data <=
                    (FScriptContainerElement *)local_128) &&
                  ((FScriptContainerElement *)local_128 <
                   local_2b8.InstanceTransforms.AllocatorInstance.Data +
                   (longlong)local_2b8.InstanceTransforms.ArrayMax * 0x80)) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar22)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar25 = local_2b8.InstanceTransforms.ArrayNum;
              if (local_2b8.InstanceTransforms.ArrayNum == local_2b8.InstanceTransforms.ArrayMax) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1080,&local_2b8.InstanceTransforms.AllocatorInstance,
                                    &local_2b8.InstanceTransforms.ArrayMax);
              }
              iVar21 = local_2cc;
              local_2b8.InstanceTransforms.ArrayNum = iVar25 + 1;
              lVar29 = (longlong)iVar25 * 0x80;
              *(undefined8 *)(local_2b8.InstanceTransforms.AllocatorInstance.Data + lVar29) =
                   local_128._0_8_;
              *(undefined8 *)(local_2b8.InstanceTransforms.AllocatorInstance.Data + lVar29 + 8) =
                   local_128._8_8_;
              *(double *)(local_2b8.InstanceTransforms.AllocatorInstance.Data + lVar29 + 0x10) =
                   local_118;
              *(double *)(local_2b8.InstanceTransforms.AllocatorInstance.Data + lVar29 + 0x10 + 8) =
                   dStack_110;
              *(undefined8 *)(local_2b8.InstanceTransforms.AllocatorInstance.Data + lVar29 + 0x20) =
                   local_108._0_8_;
              *(undefined8 *)
               (local_2b8.InstanceTransforms.AllocatorInstance.Data + lVar29 + 0x20 + 8) =
                   local_108._8_8_;
              *(undefined8 *)(local_2b8.InstanceTransforms.AllocatorInstance.Data + lVar29 + 0x30) =
                   local_f8._0_8_;
              *(undefined8 *)
               (local_2b8.InstanceTransforms.AllocatorInstance.Data + lVar29 + 0x30 + 8) =
                   local_f8._8_8_;
              *(undefined8 *)(local_2b8.InstanceTransforms.AllocatorInstance.Data + lVar29 + 0x40) =
                   local_e8._0_8_;
              *(undefined8 *)
               (local_2b8.InstanceTransforms.AllocatorInstance.Data + lVar29 + 0x40 + 8) =
                   local_e8._8_8_;
              *(undefined8 *)(local_2b8.InstanceTransforms.AllocatorInstance.Data + lVar29 + 0x50) =
                   local_d8._0_8_;
              *(undefined8 *)
               (local_2b8.InstanceTransforms.AllocatorInstance.Data + lVar29 + 0x50 + 8) =
                   local_d8._8_8_;
              *(ulonglong *)(local_2b8.InstanceTransforms.AllocatorInstance.Data + lVar29 + 0x60) =
                   CONCAT44(uStack_c4,local_c8);
              *(ulonglong *)
               (local_2b8.InstanceTransforms.AllocatorInstance.Data + lVar29 + 0x60 + 8) =
                   CONCAT44(uStack_bc,uStack_c0);
              *(ulonglong *)(local_2b8.InstanceTransforms.AllocatorInstance.Data + lVar29 + 0x70) =
                   CONCAT44(uStack_b4,local_b8);
              *(ulonglong *)
               (local_2b8.InstanceTransforms.AllocatorInstance.Data + lVar29 + 0x70 + 8) =
                   CONCAT44(uStack_ac,uStack_b0);
              local_2b8.bThinGeometry = local_2d8;
              uVar24 = local_2d4;
              if (0 < local_2cc) {
                do {
                  if ((uVar24 >> (uVar31 & 0x1f) & 1) != 0) {
                    pFVar30 = FRayTracingInstance::FRayTracingInstance(&local_198,&local_2b8);
                    FRayTracingInstanceCollector::AddRayTracingInstance(param_1,uVar31,pFVar30);
                    pFVar9 = (pFVar33->PositionBuffer).Buffer.Reference;
                    if (pFVar9 != (FRDGPooledBuffer *)0x0) {
                      FRayTracingInstanceCollector::AddRDGPooledBuffer(param_1,uVar31,pFVar9);
                    }
                    pFVar9 = (pFVar33->IndexBuffer).Buffer.Reference;
                    uVar24 = local_2d4;
                    if (pFVar9 != (FRDGPooledBuffer *)0x0) {
                      FRayTracingInstanceCollector::AddRDGPooledBuffer(param_1,uVar31,pFVar9);
                      uVar24 = local_2d4;
                    }
                  }
                  uVar31 = uVar31 + 1;
                } while ((int)uVar31 < iVar21);
              }
              if (local_2b8.InstanceTransforms.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2b8.InstanceTransforms.AllocatorInstance.Data);
              }
              if (local_2b8.PrimitiveInstanceIndices.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2b8.PrimitiveInstanceIndices.AllocatorInstance.Data);
              }
              DestructItems<FMeshBatch,int>
                        ((FMeshBatch *)local_2b8.Materials.AllocatorInstance.Data,
                         local_2b8.Materials.ArrayNum);
              if ((FMeshBatch *)local_2b8.Materials.AllocatorInstance.Data != (FMeshBatch *)0x0) {
                FMemory::Free(local_2b8.Materials.AllocatorInstance.Data);
              }
            }
          }
          uVar34 = uVar34 + 1;
        } while (uVar34 < local_2c8);
      }
    }
  }
  return;
}

// GetMemoryFootprint @ 14e018810

uint __thiscall FHairStrandsSceneProxy::GetMemoryFootprint(FHairStrandsSceneProxy *this)

{
  return *(int *)((longlong)&this->_padding_ + 4) * 4 + 0x2c0;
}

// GetRenderCurveResourceData @ 14e018fd0

FRenderCurveResourceData * __thiscall
FHairStrandsSceneProxy::GetRenderCurveResourceData(FHairStrandsSceneProxy *this)

{
  return this->CurveResourceData;
}

// GetTypeHash @ 14e0199c0

ulong64 __thiscall FHairStrandsSceneProxy::GetTypeHash(FHairStrandsSceneProxy *this)

{
  return 0x155383c38;
}

// GetViewRelevance @ 14e019db0

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
FHairStrandsSceneProxy::GetViewRelevance
          (FHairStrandsSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FPrimitiveViewRelevance *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  byte bVar16;
  undefined1 local_res10 [8];
  uint local_res18;
  
  bVar8 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  if (((param_1->Family->EngineShowFlags).PathTracing != 0) && (!bVar8)) {
    bVar9 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
    if ((bVar9) || ((this->_padding_ & 0x100000000000) != 0)) {
      bVar9 = true;
      goto LAB_14e019e19;
    }
  }
  bVar9 = false;
LAB_14e019e19:
  pFVar15 = (this->HairGroupInstances).AllocatorInstance.Data;
  iVar5 = (this->HairGroupInstances).ArrayNum;
  local_res18 = (param_1->Family->EngineShowFlags).Hair;
  pFVar3 = pFVar15 + (longlong)iVar5 * 8;
  bVar16 = 0;
  while( true ) {
    if ((this->HairGroupInstances).ArrayNum != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar15 == pFVar3) break;
    if (*(int *)(*(longlong *)pFVar15 + 8) == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Instance->GetRefCount()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
                          ,0x473,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FPrimitiveViewRelevance *)(*pcVar7)();
        return pFVar11;
      }
    }
    if (((bVar16 == 0) && (*(int *)(*(longlong *)pFVar15 + 0x468) != 1)) &&
       (*(int *)(*(longlong *)pFVar15 + 0x468) != 2)) {
      pFVar15 = pFVar15 + 8;
    }
    else {
      bVar16 = 1;
      pFVar15 = pFVar15 + 8;
    }
  }
  uVar13 = 0x80;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  uVar6 = *(uint *)&__return_storage_ptr__->field_0x8;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  if (((char)local_res18 == '\0') || ((!bVar8 && (!bVar9)))) {
    uVar12 = 0;
  }
  else {
    uVar12 = 4;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar6 & 0xfffffffb | 0x80 | uVar12;
  if ((bVar16 == 0) || ((this->_padding_ & 0x8000000) == 0)) {
    uVar13 = 0;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar6 & 0xffffff7b | uVar12 | uVar13;
  bVar10 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       (uint)bVar10 << 3 | *(uint *)&__return_storage_ptr__->field_0x8 & 0xfffffffd |
       (uint)bVar16 * 2;
  bVar10 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  uVar6 = *(uint *)&__return_storage_ptr__->field_0x8;
  uVar13 = (uint)bVar10 << 5;
  if ((-1 < (char)((byte)uVar13 | (byte)uVar6 & 0xdf)) || (uVar12 = 0x10, bVar16 == 0)) {
    uVar12 = 0;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar13 | uVar6 & 0xffffffcf | uVar12;
  uVar14 = 0;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
    uVar14 = 0x2000;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar14 | uVar13 | uVar6 & 0xffffdfcf | uVar12;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  if ((!bVar8) && (!bVar9)) {
    pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
    *pbVar1 = *pbVar1 & 0xdf;
    puVar2 = (undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4);
    *puVar2 = *puVar2;
    return __return_storage_ptr__;
  }
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xdf;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 0x20;
  return __return_storage_ptr__;
}

// HasRayTracingRepresentation @ 14e01a020

bool __thiscall FHairStrandsSceneProxy::HasRayTracingRepresentation(FHairStrandsSceneProxy *this)

{
  return true;
}

// IsRayTracingRelevant @ 14e020c40

bool __thiscall FHairStrandsSceneProxy::IsRayTracingRelevant(FHairStrandsSceneProxy *this)

{
  return true;
}

// IsRayTracingStaticRelevant @ 14e020c50

bool __thiscall FHairStrandsSceneProxy::IsRayTracingStaticRelevant(FHairStrandsSceneProxy *this)

{
  return false;
}

// OnTransformChanged @ 14e021bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairStrandsSceneProxy::OnTransformChanged
          (FHairStrandsSceneProxy *this,FRHICommandListBase *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  TTransform<double> local_68;
  
  UE::Math::TTransform<double>::SetFromMatrix(&local_68,(TMatrix<double> *)&this->_padding_);
  pFVar4 = (this->HairGroupInstances).AllocatorInstance.Data;
  iVar2 = (this->HairGroupInstances).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->HairGroupInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = *(longlong *)pFVar4;
    *(undefined8 *)(lVar3 + 800) = *(undefined8 *)(lVar3 + 0x200);
    *(undefined8 *)(lVar3 + 0x328) = *(undefined8 *)(lVar3 + 0x208);
    *(undefined8 *)(lVar3 + 0x330) = *(undefined8 *)(lVar3 + 0x210);
    *(undefined8 *)(lVar3 + 0x338) = *(undefined8 *)(lVar3 + 0x218);
    *(undefined8 *)(lVar3 + 0x340) = *(undefined8 *)(lVar3 + 0x220);
    *(undefined8 *)(lVar3 + 0x348) = *(undefined8 *)(lVar3 + 0x228);
    *(undefined8 *)(lVar3 + 0x350) = *(undefined8 *)(lVar3 + 0x230);
    *(undefined8 *)(lVar3 + 0x358) = *(undefined8 *)(lVar3 + 0x238);
    *(undefined8 *)(lVar3 + 0x360) = *(undefined8 *)(lVar3 + 0x240);
    *(undefined8 *)(lVar3 + 0x368) = *(undefined8 *)(lVar3 + 0x248);
    *(undefined8 *)(lVar3 + 0x370) = *(undefined8 *)(lVar3 + 0x250);
    *(undefined8 *)(lVar3 + 0x378) = *(undefined8 *)(lVar3 + 600);
    lVar3 = *(longlong *)pFVar4;
    pFVar4 = pFVar4 + 8;
    *(double *)(lVar3 + 0x200) = local_68.Rotation.XY.m128d_f64[0];
    *(double *)(lVar3 + 0x208) = local_68.Rotation.XY.m128d_f64[1];
    *(double *)(lVar3 + 0x210) = local_68.Rotation.ZW.m128d_f64[0];
    *(double *)(lVar3 + 0x218) = local_68.Rotation.ZW.m128d_f64[1];
    *(double *)(lVar3 + 0x220) = local_68.Translation.XY.m128d_f64[0];
    *(double *)(lVar3 + 0x228) = local_68.Translation.XY.m128d_f64[1];
    *(double *)(lVar3 + 0x230) = local_68.Translation.ZW.m128d_f64[0];
    *(double *)(lVar3 + 0x238) = local_68.Translation.ZW.m128d_f64[1];
    *(double *)(lVar3 + 0x240) = local_68.Scale3D.XY.m128d_f64[0];
    *(double *)(lVar3 + 0x248) = local_68.Scale3D.XY.m128d_f64[1];
    *(double *)(lVar3 + 0x250) = local_68.Scale3D.ZW.m128d_f64[0];
    *(double *)(lVar3 + 600) = local_68.Scale3D.ZW.m128d_f64[1];
  }
  return;
}

