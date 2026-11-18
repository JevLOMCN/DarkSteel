// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 7

// FLandscapeMeshProxySceneProxy @ 145f79de0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLandscapeMeshProxySceneProxy * __thiscall
FLandscapeMeshProxySceneProxy::FLandscapeMeshProxySceneProxy
          (FLandscapeMeshProxySceneProxy *this,UStaticMeshComponent *param_1,FGuid *param_2,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,
          TVector<double> *param_5,TVector<double> *param_6,TTransform<double> *param_7,int param_8,
          schar param_9,uint param_10,uint param_11)

{
  int *piVar1;
  TArray<TUniquePtr<FLandscapeSectionInfo,TDefaultDelete<FLandscapeSectionInfo>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FLandscapeMeshProxySceneProxy *pFVar9;
  UWorld *pUVar10;
  FLandscapeProxySectionInfo *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  TIntPoint<int>_u_0 local_res20;
  TVector<double>_u_0 local_68;
  
  FStaticMeshSceneProxy::FStaticMeshSceneProxy((FStaticMeshSceneProxy *)this,param_1,false);
  uVar13 = 0;
  pTVar2 = &this->ProxySectionsInfos;
  piVar1 = &(this->ProxySectionsInfos).ArrayMax;
  *(undefined ***)this = &___7FLandscapeMeshProxySceneProxy__6B_;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ProxySectionsInfos).ArrayNum = 0;
  *piVar1 = 0;
  if (((param_10 != 0) && (param_8 == 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InLODGroupKey == 0 || ComponentResolution != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                         ,0x128d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FLandscapeMeshProxySceneProxy *)(*pcVar5)();
    return pFVar9;
  }
  uVar7 = param_3->ArrayNum;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  DestructItems<TUniquePtr<FLandscapeSectionInfo,TDefaultDelete<FLandscapeSectionInfo>_>,int>
            ((TUniquePtr<FLandscapeSectionInfo,TDefaultDelete<FLandscapeSectionInfo>_> *)
             (pTVar2->AllocatorInstance).Data,(this->ProxySectionsInfos).ArrayNum);
  (this->ProxySectionsInfos).ArrayNum = 0;
  if (*piVar1 != uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar7,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (((param_3->ArrayNum != param_4->ArrayNum) && (param_4->ArrayNum != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InProxySectionsBases.Num() == InProxySectionsCentersLocalSpace.Num() || InProxySectionsCentersLocalSpace.Num() == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                         ,0x1292,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FLandscapeMeshProxySceneProxy *)(*pcVar5)();
    return pFVar9;
  }
  iVar8 = param_3->ArrayNum;
  uVar14 = uVar13;
  uVar15 = uVar13;
  if (0 < iVar8) {
    do {
      uVar12 = (uint)uVar13;
      uVar7 = 0;
      if ((int)uVar12 < iVar8) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FLandscapeMeshProxySceneProxy *)(*pcVar5)();
        return pFVar9;
      }
      local_res20 = *(TIntPoint<int>_u_0 *)((param_3->AllocatorInstance).Data + uVar14);
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if ((-1 < (int)uVar12) && ((int)uVar12 < param_4->ArrayNum)) {
        if (((int)uVar12 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FLandscapeMeshProxySceneProxy *)(*pcVar5)();
          return pFVar9;
        }
        pFVar4 = (param_4->AllocatorInstance).Data;
        pFVar3 = pFVar4 + uVar15;
        uVar16 = *(undefined4 *)pFVar3;
        uVar17 = *(undefined4 *)(pFVar3 + 4);
        uVar18 = *(undefined4 *)(pFVar3 + 8);
        uVar19 = *(undefined4 *)(pFVar3 + 0xc);
        uVar20 = *(double *)(pFVar4 + uVar15 + 0x10);
      }
      pUVar10 = (UWorld *)param_1->_padding_;
      local_68._0_4_ = uVar16;
      local_68._4_4_ = uVar17;
      local_68._8_4_ = uVar18;
      local_68._12_4_ = uVar19;
      local_68._s_0.Z = (double)uVar20;
      if (pUVar10 == (UWorld *)0x0) {
        pUVar10 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
      }
      pFVar11 = ::operator_new(0x90);
      if (pFVar11 == (FLandscapeProxySectionInfo *)0x0) {
        pFVar11 = (FLandscapeProxySectionInfo *)0x0;
      }
      else {
        pFVar11 = FLandscapeProxySectionInfo::FLandscapeProxySectionInfo
                            (pFVar11,pUVar10,param_2,(TIntPoint<int> *)&local_res20._s_0,
                             (TVector<double> *)&local_68._s_0,param_5,param_6,param_7,param_8,
                             param_9,param_10,param_11);
      }
      iVar8 = (this->ProxySectionsInfos).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      (this->ProxySectionsInfos).ArrayNum = iVar8 + 1;
      *(FLandscapeProxySectionInfo **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           pFVar11;
      iVar8 = param_3->ArrayNum;
      uVar14 = uVar14 + 8;
      uVar15 = uVar15 + 0x18;
    } while ((int)(uVar12 + 1) < iVar8);
  }
  return this;
}

// CreateRenderThreadResources @ 145f88460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeMeshProxySceneProxy::CreateRenderThreadResources
          (FLandscapeMeshProxySceneProxy *this,FRHICommandListBase *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FLandscapeSectionInfo *pFVar3;
  FLandscapeRenderSystem **ppFVar4;
  FLandscapeRenderSystem *this_00;
  FLandscapeRenderSystem *this_01;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  FStaticMeshSceneProxy::CreateRenderThreadResources((FStaticMeshSceneProxy *)this,param_1);
  pFVar5 = (this->ProxySectionsInfos).AllocatorInstance.Data;
  iVar2 = (this->ProxySectionsInfos).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ProxySectionsInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FLandscapeSectionInfo,TDefaultDelete<FLandscapeSectionInfo>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pFVar3 = *(FLandscapeSectionInfo **)pFVar5;
    ppFVar4 = TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
              ::FindOrAddImpl<unsigned_int_const_&>
                        ((TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
                          *)&LandscapeRenderSystems,pFVar3->LandscapeKey,&pFVar3->LandscapeKey);
    this_01 = *ppFVar4;
    if (this_01 == (FLandscapeRenderSystem *)0x0) {
      this_00 = ::operator_new(0x208);
      this_01 = (FLandscapeRenderSystem *)0x0;
      if (this_00 != (FLandscapeRenderSystem *)0x0) {
        this_01 = FLandscapeRenderSystem::FLandscapeRenderSystem
                            (this_00,pFVar3->LandscapeKey,pFVar3->Scene);
      }
      *ppFVar4 = this_01;
    }
    FLandscapeRenderSystem::CreateResources_Internal(this_01,param_1,pFVar3);
    pFVar5 = pFVar5 + 8;
  }
  if ((this->field_0x7b & 0x10) == 0) {
    pFVar5 = (this->ProxySectionsInfos).AllocatorInstance.Data;
    iVar2 = (this->ProxySectionsInfos).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ProxySectionsInfos).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TUniquePtr<FLandscapeSectionInfo,TDefaultDelete<FLandscapeSectionInfo>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      FLandscapeRenderSystem::RegisterSection(*(FLandscapeSectionInfo **)pFVar5);
      pFVar5 = pFVar5 + 8;
    }
  }
  return;
}

// DestroyRenderThreadResources @ 145f8a320

void __thiscall
FLandscapeMeshProxySceneProxy::DestroyRenderThreadResources(FLandscapeMeshProxySceneProxy *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  FStaticMeshSceneProxy::DestroyRenderThreadResources((FStaticMeshSceneProxy *)this);
  UnregisterSections(this);
  pFVar3 = (this->ProxySectionsInfos).AllocatorInstance.Data;
  iVar2 = (this->ProxySectionsInfos).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ProxySectionsInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FLandscapeSectionInfo,TDefaultDelete<FLandscapeSectionInfo>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FLandscapeRenderSystem::DestroyResources(*(FLandscapeSectionInfo **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// GetTypeHash @ 145f95b70

ulong64 __thiscall FLandscapeMeshProxySceneProxy::GetTypeHash(FLandscapeMeshProxySceneProxy *this)

{
  return 0x15519b1d0;
}

// OnForceHiddenChanged @ 145f9a010

void __thiscall
FLandscapeMeshProxySceneProxy::OnForceHiddenChanged(FLandscapeMeshProxySceneProxy *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auStackX_8 [8];
  
  if ((this->field_0x7b & 0x10) == 0) {
    RegisterSections(this);
    return;
  }
  pFVar3 = (this->ProxySectionsInfos).AllocatorInstance.Data;
  iVar2 = (this->ProxySectionsInfos).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ProxySectionsInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FLandscapeSectionInfo,TDefaultDelete<FLandscapeSectionInfo>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (pFVar3 == pFVar1) break;
    FLandscapeRenderSystem::UnregisterSection(*(FLandscapeSectionInfo **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// RegisterSections @ 145f9db50

void __thiscall FLandscapeMeshProxySceneProxy::RegisterSections(FLandscapeMeshProxySceneProxy *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ProxySectionsInfos).AllocatorInstance.Data;
  iVar2 = (this->ProxySectionsInfos).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ProxySectionsInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FLandscapeSectionInfo,TDefaultDelete<FLandscapeSectionInfo>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FLandscapeRenderSystem::RegisterSection(*(FLandscapeSectionInfo **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// UnregisterSections @ 145fa79e0

void __thiscall
FLandscapeMeshProxySceneProxy::UnregisterSections(FLandscapeMeshProxySceneProxy *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ProxySectionsInfos).AllocatorInstance.Data;
  iVar2 = (this->ProxySectionsInfos).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ProxySectionsInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FLandscapeSectionInfo,TDefaultDelete<FLandscapeSectionInfo>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FLandscapeRenderSystem::UnregisterSection(*(FLandscapeSectionInfo **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

