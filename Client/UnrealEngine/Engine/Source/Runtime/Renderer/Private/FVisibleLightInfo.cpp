// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// ContainsOnlyVirtualShadowMaps @ 1454e58a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall FVisibleLightInfo::ContainsOnlyVirtualShadowMaps(FVisibleLightInfo *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar6 = (this->AllProjectedShadows).ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      lVar1 = *(longlong *)(lVar8 + (longlong)(this->AllProjectedShadows).AllocatorInstance.Data);
      if (((*(byte *)(lVar1 + 0x990) & 1) != 0) && (*(longlong *)(lVar1 + 0x998) == 0)) {
        return false;
      }
      iVar6 = (this->AllProjectedShadows).ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// FindVirtualShadowMapShadowClipmapForView @ 1454ef810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TSharedPtr<FVirtualShadowMapClipmap,1> * __thiscall
FVisibleLightInfo::FindVirtualShadowMapShadowClipmapForView
          (FVisibleLightInfo *this,TSharedPtr<FVirtualShadowMapClipmap,1> *__return_storage_ptr__,
          FViewInfo *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FVirtualShadowMapClipmap,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<FVirtualShadowMapClipmap,1> *pTVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->VirtualShadowMapClipmaps).ArrayNum;
  pTVar4 = (this->VirtualShadowMapClipmaps).AllocatorInstance.Data;
  pTVar6 = pTVar4 + iVar1;
  while( true ) {
    if ((this->VirtualShadowMapClipmaps).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FVirtualShadowMapClipmap,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar4 == pTVar6) {
      bVar3 = IStereoRendering::IsAPrimaryView((FSceneView *)param_1);
      if ((bVar3) || ((this->VirtualShadowMapClipmaps).ArrayNum < 1)) {
        __return_storage_ptr__->Object = (FVirtualShadowMapClipmap *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        return __return_storage_ptr__;
      }
      pTVar4 = (this->VirtualShadowMapClipmaps).AllocatorInstance.Data;
      __return_storage_ptr__->Object = pTVar4->Object;
      pTVar5 = (pTVar4->SharedReferenceCount).ReferenceController;
      goto LAB_1454ef8c1;
    }
    if ((pTVar4->Object == (FVirtualShadowMapClipmap *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FVirtualShadowMapClipmap,1> *)(*pcVar2)();
      return pTVar4;
    }
    if (pTVar4->Object->DependentView == param_1) break;
    pTVar4 = pTVar4 + 1;
  }
  __return_storage_ptr__->Object = pTVar4->Object;
  pTVar5 = (pTVar4->SharedReferenceCount).ReferenceController;
LAB_1454ef8c1:
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetVirtualShadowMapId @ 1454fa6f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

int __thiscall FVisibleLightInfo::GetVirtualShadowMapId(FVisibleLightInfo *this,FViewInfo *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  TSharedPtr<FVirtualShadowMapClipmap,1> *pTVar7;
  ulonglong uVar8;
  TSharedPtr<FVirtualShadowMapClipmap,1> *pTVar9;
  FVirtualShadowMapClipmap *pFVar10;
  ulonglong uVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 local_res8 [8];
  
  iVar4 = (this->VirtualShadowMapClipmaps).ArrayNum;
  if (iVar4 == 0) {
    iVar4 = (this->AllProjectedShadows).ArrayNum;
    uVar8 = 0;
    uVar11 = uVar8;
    if (0 < iVar4) {
      do {
        uVar6 = (uint)uVar8;
        uVar5 = 0;
        if ((int)uVar6 < iVar4) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        lVar1 = *(longlong *)(uVar11 + (longlong)(this->AllProjectedShadows).AllocatorInstance.Data)
        ;
        if (*(longlong *)(lVar1 + 0x998) != 0) {
          if ((*(int *)(*(longlong *)(lVar1 + 0x998) + 0xc) < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ProjectedShadowInfo->VirtualShadowMapPerLightCacheEntry->GetVirtualShadowMapId() >= 0"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                                 ,0x256,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
          if ((*(longlong *)(lVar1 + 0x998) == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
          return *(int *)(*(longlong *)(lVar1 + 0x998) + 0xc);
        }
        iVar4 = (this->AllProjectedShadows).ArrayNum;
        uVar8 = (ulonglong)(uVar6 + 1);
        uVar11 = uVar11 + 8;
      } while ((int)(uVar6 + 1) < iVar4);
    }
    iVar4 = -1;
  }
  else {
    pTVar7 = (this->VirtualShadowMapClipmaps).AllocatorInstance.Data;
    pTVar9 = pTVar7 + iVar4;
    while( true ) {
      if ((this->VirtualShadowMapClipmaps).ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FVirtualShadowMapClipmap,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pTVar7 == pTVar9) {
        bVar3 = IStereoRendering::IsAPrimaryView((FSceneView *)param_1);
        if ((!bVar3) && (0 < (this->VirtualShadowMapClipmaps).ArrayNum)) {
          pTVar7 = (this->VirtualShadowMapClipmaps).AllocatorInstance.Data;
          pFVar10 = pTVar7->Object;
          pTVar12 = (pTVar7->SharedReferenceCount).ReferenceController;
          goto LAB_1454fa7a1;
        }
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1454fa7fa;
      }
      if ((pTVar7->Object == (FVirtualShadowMapClipmap *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      pFVar10 = pTVar7->Object;
      if (pFVar10->DependentView == param_1) break;
      pTVar7 = pTVar7 + 1;
    }
    pTVar12 = (pTVar7->SharedReferenceCount).ReferenceController;
LAB_1454fa7a1:
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar10 == (FVirtualShadowMapClipmap *)0x0) {
LAB_1454fa7fa:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
      iVar4 = -1;
    }
    else {
      if (((pFVar10->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      iVar4 = ((pFVar10->PerLightCacheEntry).Object)->VirtualShadowMapId;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
  }
  return iVar4;
}

