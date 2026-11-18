// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 10

// FGLTFBuilder @ 14e5cff90

FGLTFBuilder * __thiscall
FGLTFBuilder::FGLTFBuilder(FGLTFBuilder *this,FString *param_1,UGLTFExportOptions *param_2)

{
  int iVar1;
  undefined3 uVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  wchar_t *pwVar6;
  
  FPaths::GetCleanFilename(&this->FileName,param_1);
  bVar3 = ::FString::EndsWith(&this->FileName,L".glb",4,IgnoreCase);
  this->bIsGLB = bVar3;
  if (param_2 == (UGLTFExportOptions *)0x0) {
    pUVar4 = GetTransientPackageAsObject();
    param_2 = NewObject<UGLTFExportOptions>(pUVar4);
    param_2->ExportUniformScale = 0.01;
    param_2->bExportPreviewMesh = true;
    param_2->bSkipNearDefaultValues = true;
    param_2->bIncludeCopyrightNotice = false;
    param_2->bExportProxyMaterials = true;
    param_2->bUseImporterMaterialMapping = true;
    param_2->bExportUnlitMaterials = true;
    param_2->bExportClearCoatMaterials = true;
    param_2->bExportClothMaterials = true;
    param_2->bExportThinTranslucentMaterials = false;
    param_2->bExportSpecularGlossinessMaterials = true;
    param_2->bExportEmissiveStrength = true;
    param_2->BakeMaterialInputs = UseMeshData;
    iVar1 = FGLTFMaterialBakeSize::Default.Y;
    (param_2->DefaultMaterialBakeSize).X = FGLTFMaterialBakeSize::Default.X;
    (param_2->DefaultMaterialBakeSize).Y = iVar1;
    uVar2 = FGLTFMaterialBakeSize::Default._9_3_;
    (param_2->DefaultMaterialBakeSize).bAutoDetect = FGLTFMaterialBakeSize::Default.bAutoDetect;
    *(undefined3 *)&(param_2->DefaultMaterialBakeSize).field_0x9 = uVar2;
    param_2->DefaultMaterialBakeFilter = '\x02';
    param_2->DefaultMaterialBakeTiling = '\0';
    param_2->DefaultLevelOfDetail = 0;
    param_2->bExportSourceModel = false;
    param_2->bExportVertexColors = false;
    param_2->bExportVertexSkinWeights = true;
    param_2->bMakeSkinnedMeshesRoot = true;
    param_2->bUseMeshQuantization = false;
    param_2->bExportMorphTargets = true;
    param_2->bExportLevelSequences = true;
    param_2->bExportAnimationSequences = true;
    param_2->TextureImageFormat = PNG;
    param_2->TextureImageQuality = 0;
    param_2->bExportTextureTransforms = true;
    param_2->bExportLightmaps = false;
    param_2->bAdjustNormalmaps = true;
    param_2->bExportHiddenInGame = false;
    param_2->bExportLights = true;
    param_2->bExportCameras = true;
    param_2->ExportMaterialVariants = UseMeshData;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar6 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar6,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if ((((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
       false)) &&
     ((param_2->BakeMaterialInputs != Disabled || (param_2->TextureImageFormat != None)))) {
    pUVar5 = UGLTFExportOptions::StaticClass();
    param_2 = (UGLTFExportOptions *)
              DuplicateObject_Internal(pUVar5,(UObject *)param_2,(UObject *)0x0,(FName)0x0);
    param_2->BakeMaterialInputs = Disabled;
    param_2->TextureImageFormat = None;
  }
  this->ExportOptions = param_2;
  (this->ExportOptionsGuard)._padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&(this->ExportOptionsGuard)._padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->ExportOptionsGuard);
  (this->ExportOptionsGuard)._padding_ = (longlong)&___7__TGCObjectScopeGuard___CBVUObject____6B_;
  (this->ExportOptionsGuard).Object.field0_0x0.DebugPtr = (UObject *)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UGLTFExportOptions *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  return this;
}

// GetBakeFilterForMaterialProperty @ 14e5f4940

TextureFilter __thiscall
FGLTFBuilder::GetBakeFilterForMaterialProperty
          (FGLTFBuilder *this,UMaterialInterface *param_1,EGLTFMaterialPropertyGroup param_2)

{
  UGLTFExportOptions *pUVar1;
  undefined4 uVar2;
  EGLTFMaterialPropertyGroup *pEVar3;
  FGLTFOverrideMaterialBakeSettings *pFVar4;
  EGLTFMaterialPropertyGroup *pEVar5;
  TextureFilter TVar6;
  undefined1 *puVar7;
  <lambda_1> local_res18;
  
  pUVar1 = this->ExportOptions;
  TVar6 = (TextureFilter)(pUVar1->DefaultMaterialBakeFilter).Value;
  if (*(int *)&(pUVar1->DefaultInputBakeSettings).field_0x8 !=
      *(int *)&(pUVar1->DefaultInputBakeSettings).field_0x34) {
    puVar7 = *(undefined1 **)&(pUVar1->DefaultInputBakeSettings).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(pUVar1->DefaultInputBakeSettings).field_0x38;
    }
    uVar2 = *(undefined4 *)
             (puVar7 + ((ulonglong)(*(int *)&(pUVar1->DefaultInputBakeSettings).field_0x48 - 1) &
                       (ulonglong)param_2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pEVar5 = (EGLTFMaterialPropertyGroup *)
                 ((longlong)(int)uVar2 * 0x20 + *(longlong *)&pUVar1->DefaultInputBakeSettings);
        if (*pEVar5 == param_2) {
          pEVar3 = pEVar5 + 4;
          if (pEVar5 == (EGLTFMaterialPropertyGroup *)0x0) {
            pEVar3 = (EGLTFMaterialPropertyGroup *)0x0;
          }
          if ((pEVar3 != (EGLTFMaterialPropertyGroup *)0x0) && (pEVar3[0x10] != None)) {
            TVar6 = (TextureFilter)pEVar3[0x11];
          }
          break;
        }
        uVar2 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar2 != 0xffffffff);
    }
  }
  pFVar4 = UGLTFMaterialExportOptions::
           GetBakeSettingsByPredicate<_UGLTFMaterialExportOptions::GetBakeFilterForPropertyGroup_::__l3::<lambda_1>_>
                     (param_1,param_2,local_res18);
  if (pFVar4 == (FGLTFOverrideMaterialBakeSettings *)0x0) {
    return TVar6;
  }
  return (TextureFilter)(pFVar4->Filter).Value;
}

// GetBakeSizeForMaterialProperty @ 14e5f4a40

FGLTFMaterialBakeSize * __thiscall
FGLTFBuilder::GetBakeSizeForMaterialProperty
          (FGLTFBuilder *this,FGLTFMaterialBakeSize *__return_storage_ptr__,
          UMaterialInterface *param_1,EGLTFMaterialPropertyGroup param_2)

{
  UGLTFExportOptions *pUVar1;
  undefined4 uVar2;
  EGLTFMaterialPropertyGroup *pEVar3;
  FGLTFOverrideMaterialBakeSettings *pFVar4;
  EGLTFMaterialPropertyGroup *pEVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined8 local_res8;
  <lambda_1> local_res20;
  
  pUVar1 = this->ExportOptions;
  local_res8._0_4_ = (pUVar1->DefaultMaterialBakeSize).X;
  local_res8._4_4_ = (pUVar1->DefaultMaterialBakeSize).Y;
  uVar7 = *(undefined4 *)&(pUVar1->DefaultMaterialBakeSize).bAutoDetect;
  if (*(int *)&(pUVar1->DefaultInputBakeSettings).field_0x8 !=
      *(int *)&(pUVar1->DefaultInputBakeSettings).field_0x34) {
    puVar6 = *(undefined1 **)&(pUVar1->DefaultInputBakeSettings).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pUVar1->DefaultInputBakeSettings).field_0x38;
    }
    uVar2 = *(undefined4 *)
             (puVar6 + ((ulonglong)(*(int *)&(pUVar1->DefaultInputBakeSettings).field_0x48 - 1) &
                       (ulonglong)param_2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pEVar5 = (EGLTFMaterialPropertyGroup *)
                 ((longlong)(int)uVar2 * 0x20 + *(longlong *)&pUVar1->DefaultInputBakeSettings);
        if (*pEVar5 == param_2) {
          pEVar3 = pEVar5 + 4;
          if (pEVar5 == (EGLTFMaterialPropertyGroup *)0x0) {
            pEVar3 = (EGLTFMaterialPropertyGroup *)0x0;
          }
          if ((pEVar3 != (EGLTFMaterialPropertyGroup *)0x0) && (*pEVar3 != None)) {
            local_res8 = *(undefined8 *)(pEVar3 + 4);
            uVar7 = *(undefined4 *)(pEVar3 + 0xc);
          }
          break;
        }
        uVar2 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar2 != 0xffffffff);
    }
  }
  pFVar4 = UGLTFMaterialExportOptions::
           GetBakeSettingsByPredicate<_UGLTFMaterialExportOptions::GetBakeSizeForPropertyGroup_::__l3::<lambda_1>_>
                     (param_1,param_2,local_res20);
  if (pFVar4 != (FGLTFOverrideMaterialBakeSettings *)0x0) {
    local_res8._0_4_ = (pFVar4->Size).X;
    local_res8._4_4_ = (pFVar4->Size).Y;
    uVar7 = *(undefined4 *)&(pFVar4->Size).bAutoDetect;
  }
  __return_storage_ptr__->X = (int)local_res8;
  __return_storage_ptr__->Y = (int)((ulonglong)local_res8 >> 0x20);
  *(undefined4 *)&__return_storage_ptr__->bAutoDetect = uVar7;
  return __return_storage_ptr__;
}

// GetBakeTilingForMaterialProperty @ 14e5f4b80

TextureAddress __thiscall
FGLTFBuilder::GetBakeTilingForMaterialProperty
          (FGLTFBuilder *this,UMaterialInterface *param_1,EGLTFMaterialPropertyGroup param_2)

{
  UGLTFExportOptions *pUVar1;
  undefined4 uVar2;
  EGLTFMaterialPropertyGroup *pEVar3;
  FGLTFOverrideMaterialBakeSettings *pFVar4;
  EGLTFMaterialPropertyGroup *pEVar5;
  TextureAddress TVar6;
  undefined1 *puVar7;
  <lambda_1> local_res18;
  
  pUVar1 = this->ExportOptions;
  TVar6 = (TextureAddress)(pUVar1->DefaultMaterialBakeTiling).Value;
  if (*(int *)&(pUVar1->DefaultInputBakeSettings).field_0x8 !=
      *(int *)&(pUVar1->DefaultInputBakeSettings).field_0x34) {
    puVar7 = *(undefined1 **)&(pUVar1->DefaultInputBakeSettings).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(pUVar1->DefaultInputBakeSettings).field_0x38;
    }
    uVar2 = *(undefined4 *)
             (puVar7 + ((ulonglong)(*(int *)&(pUVar1->DefaultInputBakeSettings).field_0x48 - 1) &
                       (ulonglong)param_2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pEVar5 = (EGLTFMaterialPropertyGroup *)
                 ((longlong)(int)uVar2 * 0x20 + *(longlong *)&pUVar1->DefaultInputBakeSettings);
        if (*pEVar5 == param_2) {
          pEVar3 = pEVar5 + 4;
          if (pEVar5 == (EGLTFMaterialPropertyGroup *)0x0) {
            pEVar3 = (EGLTFMaterialPropertyGroup *)0x0;
          }
          if ((pEVar3 != (EGLTFMaterialPropertyGroup *)0x0) && (pEVar3[0x12] != None)) {
            TVar6 = (TextureAddress)pEVar3[0x13];
          }
          break;
        }
        uVar2 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar2 != 0xffffffff);
    }
  }
  pFVar4 = UGLTFMaterialExportOptions::
           GetBakeSettingsByPredicate<_UGLTFMaterialExportOptions::GetBakeTilingForPropertyGroup_::__l3::<lambda_1>_>
                     (param_1,param_2,local_res18);
  if (pFVar4 == (FGLTFOverrideMaterialBakeSettings *)0x0) {
    return TVar6;
  }
  return (TextureAddress)(pFVar4->Tiling).Value;
}

// ResolveProxies @ 14e611be0

void __thiscall
FGLTFBuilder::ResolveProxies
          (FGLTFBuilder *this,
          TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMaterialInterface *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  if (this->ExportOptions->bExportProxyMaterials != false) {
    pFVar4 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UMaterialInterface_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      pUVar3 = UGLTFMaterialExportOptions::ResolveProxy(*(UMaterialInterface **)pFVar4);
      *(UMaterialInterface **)pFVar4 = pUVar3;
      pFVar4 = pFVar4 + 8;
    }
  }
  return;
}

// ResolveProxy @ 14e611c50

UMaterialInterface * __thiscall
FGLTFBuilder::ResolveProxy(FGLTFBuilder *this,UMaterialInterface *param_1)

{
  UMaterialInterface *pUVar1;
  
  if (this->ExportOptions->bExportProxyMaterials != false) {
    pUVar1 = UGLTFMaterialExportOptions::ResolveProxy(param_1);
    return pUVar1;
  }
  return param_1;
}

// SanitizeExportOptions @ 14e612c50

UGLTFExportOptions * __cdecl FGLTFBuilder::SanitizeExportOptions(UGLTFExportOptions *param_1)

{
  int iVar1;
  undefined3 uVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UGLTFExportOptions *pUVar5;
  wchar_t *pwVar6;
  
  if (param_1 == (UGLTFExportOptions *)0x0) {
    pUVar3 = GetTransientPackageAsObject();
    param_1 = NewObject<UGLTFExportOptions>(pUVar3);
    param_1->ExportUniformScale = 0.01;
    param_1->bExportPreviewMesh = true;
    param_1->bSkipNearDefaultValues = true;
    param_1->bIncludeCopyrightNotice = false;
    param_1->bExportProxyMaterials = true;
    param_1->bUseImporterMaterialMapping = true;
    param_1->bExportUnlitMaterials = true;
    param_1->bExportClearCoatMaterials = true;
    param_1->bExportClothMaterials = true;
    param_1->bExportThinTranslucentMaterials = false;
    param_1->bExportSpecularGlossinessMaterials = true;
    param_1->bExportEmissiveStrength = true;
    param_1->BakeMaterialInputs = UseMeshData;
    iVar1 = FGLTFMaterialBakeSize::Default.Y;
    (param_1->DefaultMaterialBakeSize).X = FGLTFMaterialBakeSize::Default.X;
    (param_1->DefaultMaterialBakeSize).Y = iVar1;
    uVar2 = FGLTFMaterialBakeSize::Default._9_3_;
    (param_1->DefaultMaterialBakeSize).bAutoDetect = FGLTFMaterialBakeSize::Default.bAutoDetect;
    *(undefined3 *)&(param_1->DefaultMaterialBakeSize).field_0x9 = uVar2;
    param_1->DefaultMaterialBakeFilter = '\x02';
    param_1->DefaultMaterialBakeTiling = '\0';
    param_1->DefaultLevelOfDetail = 0;
    param_1->bExportSourceModel = false;
    param_1->bExportVertexColors = false;
    param_1->bExportVertexSkinWeights = true;
    param_1->bMakeSkinnedMeshesRoot = true;
    param_1->bUseMeshQuantization = false;
    param_1->bExportMorphTargets = true;
    param_1->bExportLevelSequences = true;
    param_1->bExportAnimationSequences = true;
    param_1->TextureImageFormat = PNG;
    param_1->TextureImageQuality = 0;
    param_1->bExportTextureTransforms = true;
    param_1->bExportLightmaps = false;
    param_1->bAdjustNormalmaps = true;
    param_1->bExportHiddenInGame = false;
    param_1->bExportLights = true;
    param_1->bExportCameras = true;
    param_1->ExportMaterialVariants = UseMeshData;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar6 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar6,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if ((((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
       false)) &&
     ((param_1->BakeMaterialInputs != Disabled || (param_1->TextureImageFormat != None)))) {
    pUVar4 = UGLTFExportOptions::StaticClass();
    pUVar5 = (UGLTFExportOptions *)
             DuplicateObject_Internal(pUVar4,(UObject *)param_1,(UObject *)0x0,(FName)0x0);
    pUVar5->BakeMaterialInputs = Disabled;
    pUVar5->TextureImageFormat = None;
    return pUVar5;
  }
  return param_1;
}

// SanitizeLOD @ 14e612e50

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
FGLTFBuilder::SanitizeLOD
          (FGLTFBuilder *this,USkeletalMesh *param_1,USkeletalMeshComponent *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  
  if (param_3 < 1) {
    iVar5 = -1;
    iVar1 = this->ExportOptions->DefaultLevelOfDetail;
    if (param_2 == (USkeletalMeshComponent *)0x0) {
LAB_14e612ec9:
      if (param_1 == (USkeletalMesh *)0x0) {
        param_3 = -1;
      }
      else {
        piVar4 = (int *)(**(code **)(param_1->_padding_ + 0x3a8))(param_1);
        param_3 = *piVar4;
      }
LAB_14e612ee0:
      if (param_3 < iVar1) {
        param_3 = iVar1;
      }
    }
    else {
      iVar2 = USkinnedMeshComponent::GetForcedLOD((USkinnedMeshComponent *)param_2);
      param_3 = iVar2 + -1;
      if (iVar2 + -1 < 1) {
        if ((param_2->_padding_ & 0x800000000000000) == 0) goto LAB_14e612ec9;
        param_3 = (int)param_2->_padding_;
        goto LAB_14e612ee0;
      }
    }
    if (param_1 == (USkeletalMesh *)0x0) goto LAB_14e612f07;
    lVar3 = (**(code **)(param_1->_padding_ + 0x398))(param_1);
    if (lVar3 == 0) goto LAB_14e612f07;
LAB_14e612f02:
    iVar5 = *(int *)(lVar3 + 8) + -1;
  }
  else {
    if (param_1 != (USkeletalMesh *)0x0) {
      lVar3 = (**(code **)(param_1->_padding_ + 0x398))(param_1);
      if (lVar3 != 0) goto LAB_14e612f02;
    }
    iVar5 = -1;
  }
LAB_14e612f07:
  if (param_3 < iVar5) {
    iVar5 = param_3;
  }
  return iVar5;
}

// SanitizeLOD @ 14e612f30

int __thiscall
FGLTFBuilder::SanitizeLOD
          (FGLTFBuilder *this,UStaticMesh *param_1,USplineMeshComponent *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 < 1) {
    iVar1 = this->ExportOptions->DefaultLevelOfDetail;
    iVar2 = -1;
    if (param_2 == (USplineMeshComponent *)0x0) {
LAB_14e612f87:
      if (param_1 == (UStaticMesh *)0x0) {
        param_3 = -1;
      }
      else {
        param_3 = (param_1->MinLOD).Default;
      }
LAB_14e612f96:
      if (param_3 < iVar1) {
        param_3 = iVar1;
      }
    }
    else {
      param_3 = (int)param_2->_padding_ + -1;
      if (param_3 < 1) {
        if ((param_2->_padding_ & 0x80000000000) == 0) goto LAB_14e612f87;
        param_3 = *(int *)((longlong)&param_2->_padding_ + 4);
        goto LAB_14e612f96;
      }
    }
    if (param_1 == (UStaticMesh *)0x0) goto LAB_14e612faa;
  }
  else if (param_1 == (UStaticMesh *)0x0) {
    iVar1 = -1;
    if (param_3 < -1) {
      iVar1 = param_3;
    }
    return iVar1;
  }
  iVar2 = UStaticMesh::GetNumLODs(param_1);
  iVar2 = iVar2 + -1;
LAB_14e612faa:
  if (param_3 < iVar2) {
    iVar2 = param_3;
  }
  return iVar2;
}

// SanitizeLOD @ 14e612fc0

int __thiscall
FGLTFBuilder::SanitizeLOD
          (FGLTFBuilder *this,UStaticMesh *param_1,UStaticMeshComponent *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 < 1) {
    iVar1 = this->ExportOptions->DefaultLevelOfDetail;
    iVar2 = -1;
    if (param_2 == (UStaticMeshComponent *)0x0) {
LAB_14e613017:
      if (param_1 == (UStaticMesh *)0x0) {
        param_3 = -1;
      }
      else {
        param_3 = (param_1->MinLOD).Default;
      }
LAB_14e613026:
      if (param_3 < iVar1) {
        param_3 = iVar1;
      }
    }
    else {
      param_3 = param_2->ForcedLodModel + -1;
      if (param_3 < 1) {
        if (param_2->bOverrideMinLOD == '\0') goto LAB_14e613017;
        param_3 = param_2->MinLOD;
        goto LAB_14e613026;
      }
    }
    if (param_1 == (UStaticMesh *)0x0) goto LAB_14e61303a;
  }
  else if (param_1 == (UStaticMesh *)0x0) {
    iVar1 = -1;
    if (param_3 < -1) {
      iVar1 = param_3;
    }
    return iVar1;
  }
  iVar2 = UStaticMesh::GetNumLODs(param_1);
  iVar2 = iVar2 + -1;
LAB_14e61303a:
  if (param_3 < iVar2) {
    iVar2 = param_3;
  }
  return iVar2;
}

