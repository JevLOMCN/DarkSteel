// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1483cb780

UClass * __cdecl URendererSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URendererSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RendererSettings",
               &Z_Registration_Info_UClass_URendererSettings.InnerSingleton,
               StaticRegisterNativesURendererSettings,0x238,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<URendererSettings>,
               InternalVTableHelperCtorCaller<URendererSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URendererSettings.InnerSingleton;
}

// URendererSettings @ 1483e7c20

URendererSettings * __thiscall
URendererSettings::URendererSettings(URendererSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7URendererSettings__6B_;
  this->DefaultBoneInfluenceLimit = 0;
  this->MaxSkinBones = 0;
  this->bStreamSkeletalMeshLODs = false;
  this->bDiscardSkeletalMeshOptionalLODs = false;
  (this->VisualizeCalibrationColorMaterialPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->VisualizeCalibrationColorMaterialPath).AssetPath.PackageName.Number = 0;
  (this->VisualizeCalibrationColorMaterialPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->VisualizeCalibrationColorMaterialPath).AssetPath.AssetName.Number = 0;
  (this->VisualizeCalibrationColorMaterialPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VisualizeCalibrationColorMaterialPath).SubPathString.Data.ArrayNum = 0;
  (this->VisualizeCalibrationColorMaterialPath).SubPathString.Data.ArrayMax = 0;
  (this->VisualizeCalibrationCustomMaterialPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->VisualizeCalibrationCustomMaterialPath).AssetPath.PackageName.Number = 0;
  (this->VisualizeCalibrationCustomMaterialPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->VisualizeCalibrationCustomMaterialPath).AssetPath.AssetName.Number = 0;
  (this->VisualizeCalibrationCustomMaterialPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VisualizeCalibrationCustomMaterialPath).SubPathString.Data.ArrayNum = 0;
  (this->VisualizeCalibrationCustomMaterialPath).SubPathString.Data.ArrayMax = 0;
  (this->VisualizeCalibrationGrayscaleMaterialPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->VisualizeCalibrationGrayscaleMaterialPath).AssetPath.PackageName.Number = 0;
  (this->VisualizeCalibrationGrayscaleMaterialPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->VisualizeCalibrationGrayscaleMaterialPath).AssetPath.AssetName.Number = 0;
  (this->VisualizeCalibrationGrayscaleMaterialPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VisualizeCalibrationGrayscaleMaterialPath).SubPathString.Data.ArrayNum = 0;
  (this->VisualizeCalibrationGrayscaleMaterialPath).SubPathString.Data.ArrayMax = 0;
  return this;
}

// URendererSettings @ 1483e7cb0

URendererSettings * __thiscall
URendererSettings::URendererSettings(URendererSettings *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  TVector2<double> TVar2;
  FName local_res8;
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7URendererSettings__6B_;
  this->DefaultBoneInfluenceLimit = 0;
  this->MaxSkinBones = 0;
  this->bStreamSkeletalMeshLODs = false;
  this->bDiscardSkeletalMeshOptionalLODs = false;
  (this->VisualizeCalibrationColorMaterialPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->VisualizeCalibrationColorMaterialPath).AssetPath.PackageName.Number = 0;
  (this->VisualizeCalibrationColorMaterialPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->VisualizeCalibrationColorMaterialPath).AssetPath.AssetName.Number = 0;
  (this->VisualizeCalibrationColorMaterialPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VisualizeCalibrationColorMaterialPath).SubPathString.Data.ArrayNum = 0;
  (this->VisualizeCalibrationColorMaterialPath).SubPathString.Data.ArrayMax = 0;
  (this->VisualizeCalibrationCustomMaterialPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->VisualizeCalibrationCustomMaterialPath).AssetPath.PackageName.Number = 0;
  (this->VisualizeCalibrationCustomMaterialPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->VisualizeCalibrationCustomMaterialPath).AssetPath.AssetName.Number = 0;
  (this->VisualizeCalibrationCustomMaterialPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VisualizeCalibrationCustomMaterialPath).SubPathString.Data.ArrayNum = 0;
  (this->VisualizeCalibrationCustomMaterialPath).SubPathString.Data.ArrayMax = 0;
  (this->VisualizeCalibrationGrayscaleMaterialPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->VisualizeCalibrationGrayscaleMaterialPath).AssetPath.PackageName.Number = 0;
  (this->VisualizeCalibrationGrayscaleMaterialPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->VisualizeCalibrationGrayscaleMaterialPath).AssetPath.AssetName.Number = 0;
  (this->VisualizeCalibrationGrayscaleMaterialPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VisualizeCalibrationGrayscaleMaterialPath).SubPathString.Data.ArrayNum = 0;
  (this->VisualizeCalibrationGrayscaleMaterialPath).SubPathString.Data.ArrayMax = 0;
  ::FName::FName(&local_res8,L"Rendering");
  this->_padding_ = (longlong)local_res8;
  (this->TranslucentSortAxis).field0_0x0._s_0.X = 0.0;
  (this->TranslucentSortAxis).field0_0x0._s_0.Y = -1.0;
  (this->TranslucentSortAxis).field0_0x0._s_0.Z = 0.0;
  this->bSupportStationarySkylight = 1;
  this->bSupportPointLightWholeSceneShadows = 1;
  this->bSupportSkyAtmosphere = 1;
  this->bSupportSkinCacheShaders = 0;
  this->bSkipCompilingGPUSkinVF = 0;
  this->bUseHardwareRayTracingForLumen = 0;
  this->bEnableMegaLights = 0;
  this->bEnableRayTracingShadows = 0;
  this->bEnableRayTracing = 0;
  this->bEnablePathTracing = 0;
  this->bEnableRayTracingTextureLOD = 0;
  this->MorphTargetMaxBlendWeight = 5.0;
  this->GPUSimulationTextureSizeX = 0x400;
  this->GPUSimulationTextureSizeY = 0x400;
  (this->DefaultBoneInfluenceLimit).Default = 0;
  (this->MaxSkinBones).Default = 0x10000;
  (this->WorkingColorSpaceChoice).Value = '\x01';
  (this->RedChromaticityCoordinate).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->GreenChromaticityCoordinate).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->BlueChromaticityCoordinate).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar2 = UE::Math::TVector2<double>::ZeroVector;
  this->bUseLegacyLuminanceFactors = 0;
  this->bEnableVirtualTextureOpacityMask = 0;
  (this->WhiteChromaticityCoordinate).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
  return this;
}

// ~URendererSettings @ 1483e90e0

void __thiscall URendererSettings::~URendererSettings(URendererSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URendererSettings__6B_;
  pFVar1 = (this->VisualizeCalibrationGrayscaleMaterialPath).SubPathString.Data.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VisualizeCalibrationCustomMaterialPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VisualizeCalibrationColorMaterialPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14840a0a0

UClass * __cdecl URendererSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URendererSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RendererSettings",
               &Z_Registration_Info_UClass_URendererSettings.InnerSingleton,
               StaticRegisterNativesURendererSettings,0x238,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<URendererSettings>,
               InternalVTableHelperCtorCaller<URendererSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URendererSettings.InnerSingleton;
}

// PostInitProperties @ 1484187b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall URendererSettings::PostInitProperties(URendererSettings *this)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  TRHIGlobal<int> TVar4;
  
  UObject::PostInitProperties((UObject *)this);
  iVar3 = 1;
  if (this->ReflectionCaptureResolution != 0) {
    iVar3 = this->ReflectionCaptureResolution;
  }
  uVar1 = (ulonglong)(iVar3 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  TVar4 = GRHIGlobals.MaxCubeTextureDimensions;
  if (iVar3 < GRHIGlobals.MaxCubeTextureDimensions.Value) {
    TVar4.Value = iVar3;
  }
  iVar3 = 8;
  if (8 < TVar4.Value) {
    iVar3 = TVar4.Value;
  }
  this->ReflectionCaptureResolution = iVar3;
  UpdateWorkingColorSpaceAndChromaticities(this);
  return;
}

// SanitizeReflectionCaptureResolution @ 1484228e0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall URendererSettings::SanitizeReflectionCaptureResolution(URendererSettings *this)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  TRHIGlobal<int> TVar4;
  
  iVar3 = 1;
  if (this->ReflectionCaptureResolution != 0) {
    iVar3 = this->ReflectionCaptureResolution;
  }
  uVar1 = (ulonglong)(iVar3 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  TVar4.Value = GRHIGlobals.MaxCubeTextureDimensions.Value;
  if (iVar3 < GRHIGlobals.MaxCubeTextureDimensions.Value) {
    TVar4.Value = iVar3;
  }
  iVar3 = 8;
  if (8 < TVar4.Value) {
    iVar3 = TVar4.Value;
  }
  this->ReflectionCaptureResolution = iVar3;
  return;
}

// StaticRegisterNativesURendererSettings @ 148427ac0

void __cdecl URendererSettings::StaticRegisterNativesURendererSettings(void)

{
  return;
}

// UpdateWorkingColorSpaceAndChromaticities @ 14842d350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall URendererSettings::UpdateWorkingColorSpaceAndChromaticities(URendererSettings *this)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  double *pdVar9;
  bool bVar10;
  FColorSpace *pFVar11;
  FColorSpace *pFVar12;
  FColorSpace *pFVar13;
  code **ppcVar14;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar15;
  wchar_t *pwVar16;
  FColorSpace *pFVar17;
  double *pdVar18;
  code **ppcVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auStackY_1468 [32];
  FColorSpace local_1438;
  FColorSpace local_12e8;
  FColorSpace local_1198;
  FColorSpace local_1048;
  FColorSpace local_ef8;
  FColorSpace local_da8;
  FColorSpace local_c58;
  double local_b08 [42];
  code *local_9b8 [2];
  code *local_9a8 [3];
  code **local_990;
  undefined1 local_988 [40];
  code **local_960;
  byte local_958;
  FColorSpace local_948;
  FColorSpace local_7f8;
  FColorSpace local_6a8;
  FColorSpace local_558;
  FColorSpace local_408;
  FColorSpace local_2b8;
  FColorSpace local_168;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14842d368;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1468;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar16 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar16,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    lVar21 = 2;
    switch((this->WorkingColorSpaceChoice).Value) {
    case '\x01':
      pFVar11 = UE::Color::FColorSpace::FColorSpace(&local_948,sRGB);
      lVar20 = 2;
      pFVar13 = &local_1438;
      do {
        pFVar17 = pFVar13;
        pFVar12 = pFVar11;
        pFVar13 = (FColorSpace *)((pFVar17->RgbToXYZ).M + 2);
        dVar2 = (pFVar12->Chromaticities).Elements[0].field0_0x0._s_0.Y;
        dVar3 = (pFVar12->Chromaticities).Elements[1].field0_0x0._s_0.X;
        dVar4 = (pFVar12->Chromaticities).Elements[1].field0_0x0._s_0.Y;
        pFVar11 = (FColorSpace *)((pFVar12->RgbToXYZ).M + 2);
        (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.X =
             (pFVar12->Chromaticities).Elements[0].field0_0x0._s_0.X;
        (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar2;
        dVar2 = (pFVar12->Chromaticities).Elements[2].field0_0x0._s_0.X;
        dVar5 = (pFVar12->Chromaticities).Elements[2].field0_0x0._s_0.Y;
        (pFVar17->Chromaticities).Elements[1].field0_0x0._s_0.X = dVar3;
        (pFVar17->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar4;
        dVar3 = (pFVar12->Chromaticities).Elements[3].field0_0x0._s_0.X;
        dVar4 = (pFVar12->Chromaticities).Elements[3].field0_0x0._s_0.Y;
        (pFVar17->Chromaticities).Elements[2].field0_0x0._s_0.X = dVar2;
        (pFVar17->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar5;
        dVar2 = (pFVar12->RgbToXYZ).M[0][0];
        dVar5 = (pFVar12->RgbToXYZ).M[0][1];
        (pFVar17->Chromaticities).Elements[3].field0_0x0._s_0.X = dVar3;
        (pFVar17->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar4;
        dVar3 = (pFVar12->RgbToXYZ).M[0][2];
        dVar4 = (pFVar12->RgbToXYZ).M[0][3];
        (pFVar17->RgbToXYZ).M[0][0] = dVar2;
        (pFVar17->RgbToXYZ).M[0][1] = dVar5;
        dVar2 = (pFVar12->RgbToXYZ).M[1][0];
        dVar5 = (pFVar12->RgbToXYZ).M[1][1];
        (pFVar17->RgbToXYZ).M[0][2] = dVar3;
        (pFVar17->RgbToXYZ).M[0][3] = dVar4;
        dVar3 = (pFVar12->RgbToXYZ).M[1][2];
        dVar4 = (pFVar12->RgbToXYZ).M[1][3];
        (pFVar17->RgbToXYZ).M[1][0] = dVar2;
        (pFVar17->RgbToXYZ).M[1][1] = dVar5;
        (pFVar17->RgbToXYZ).M[1][2] = dVar3;
        (pFVar17->RgbToXYZ).M[1][3] = dVar4;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar2 = (pFVar12->RgbToXYZ).M[2][1];
      dVar3 = (pFVar12->RgbToXYZ).M[2][2];
      dVar4 = (pFVar12->RgbToXYZ).M[2][3];
      (pFVar13->Chromaticities).Elements[0].field0_0x0._s_0.X =
           (pFVar11->Chromaticities).Elements[0].field0_0x0._s_0.X;
      (pFVar17->RgbToXYZ).M[2][1] = dVar2;
      dVar2 = (pFVar12->RgbToXYZ).M[3][0];
      dVar5 = (pFVar12->RgbToXYZ).M[3][1];
      (pFVar17->RgbToXYZ).M[2][2] = dVar3;
      (pFVar17->RgbToXYZ).M[2][3] = dVar4;
      dVar3 = (pFVar12->RgbToXYZ).M[3][2];
      dVar4 = (pFVar12->RgbToXYZ).M[3][3];
      (pFVar17->RgbToXYZ).M[3][0] = dVar2;
      (pFVar17->RgbToXYZ).M[3][1] = dVar5;
      dVar2 = (pFVar12->XYZToRgb).M[0][0];
      dVar5 = (pFVar12->XYZToRgb).M[0][1];
      (pFVar17->RgbToXYZ).M[3][2] = dVar3;
      (pFVar17->RgbToXYZ).M[3][3] = dVar4;
      (pFVar17->XYZToRgb).M[0][0] = dVar2;
      (pFVar17->XYZToRgb).M[0][1] = dVar5;
      UE::Color::FColorSpace::SetWorking(&local_1438);
      break;
    case '\x02':
      pFVar11 = UE::Color::FColorSpace::FColorSpace(&local_7f8,Rec2020);
      lVar20 = 2;
      pFVar13 = &local_12e8;
      do {
        pFVar17 = pFVar13;
        pFVar12 = pFVar11;
        pFVar13 = (FColorSpace *)((pFVar17->RgbToXYZ).M + 2);
        dVar2 = (pFVar12->Chromaticities).Elements[0].field0_0x0._s_0.Y;
        dVar3 = (pFVar12->Chromaticities).Elements[1].field0_0x0._s_0.X;
        dVar4 = (pFVar12->Chromaticities).Elements[1].field0_0x0._s_0.Y;
        pFVar11 = (FColorSpace *)((pFVar12->RgbToXYZ).M + 2);
        (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.X =
             (pFVar12->Chromaticities).Elements[0].field0_0x0._s_0.X;
        (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar2;
        dVar2 = (pFVar12->Chromaticities).Elements[2].field0_0x0._s_0.X;
        dVar5 = (pFVar12->Chromaticities).Elements[2].field0_0x0._s_0.Y;
        (pFVar17->Chromaticities).Elements[1].field0_0x0._s_0.X = dVar3;
        (pFVar17->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar4;
        dVar3 = (pFVar12->Chromaticities).Elements[3].field0_0x0._s_0.X;
        dVar4 = (pFVar12->Chromaticities).Elements[3].field0_0x0._s_0.Y;
        (pFVar17->Chromaticities).Elements[2].field0_0x0._s_0.X = dVar2;
        (pFVar17->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar5;
        dVar2 = (pFVar12->RgbToXYZ).M[0][0];
        dVar5 = (pFVar12->RgbToXYZ).M[0][1];
        (pFVar17->Chromaticities).Elements[3].field0_0x0._s_0.X = dVar3;
        (pFVar17->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar4;
        dVar3 = (pFVar12->RgbToXYZ).M[0][2];
        dVar4 = (pFVar12->RgbToXYZ).M[0][3];
        (pFVar17->RgbToXYZ).M[0][0] = dVar2;
        (pFVar17->RgbToXYZ).M[0][1] = dVar5;
        dVar2 = (pFVar12->RgbToXYZ).M[1][0];
        dVar5 = (pFVar12->RgbToXYZ).M[1][1];
        (pFVar17->RgbToXYZ).M[0][2] = dVar3;
        (pFVar17->RgbToXYZ).M[0][3] = dVar4;
        dVar3 = (pFVar12->RgbToXYZ).M[1][2];
        dVar4 = (pFVar12->RgbToXYZ).M[1][3];
        (pFVar17->RgbToXYZ).M[1][0] = dVar2;
        (pFVar17->RgbToXYZ).M[1][1] = dVar5;
        (pFVar17->RgbToXYZ).M[1][2] = dVar3;
        (pFVar17->RgbToXYZ).M[1][3] = dVar4;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar2 = (pFVar12->RgbToXYZ).M[2][1];
      dVar3 = (pFVar12->RgbToXYZ).M[2][2];
      dVar4 = (pFVar12->RgbToXYZ).M[2][3];
      (pFVar13->Chromaticities).Elements[0].field0_0x0._s_0.X =
           (pFVar11->Chromaticities).Elements[0].field0_0x0._s_0.X;
      (pFVar17->RgbToXYZ).M[2][1] = dVar2;
      dVar2 = (pFVar12->RgbToXYZ).M[3][0];
      dVar5 = (pFVar12->RgbToXYZ).M[3][1];
      (pFVar17->RgbToXYZ).M[2][2] = dVar3;
      (pFVar17->RgbToXYZ).M[2][3] = dVar4;
      dVar3 = (pFVar12->RgbToXYZ).M[3][2];
      dVar4 = (pFVar12->RgbToXYZ).M[3][3];
      (pFVar17->RgbToXYZ).M[3][0] = dVar2;
      (pFVar17->RgbToXYZ).M[3][1] = dVar5;
      dVar2 = (pFVar12->XYZToRgb).M[0][0];
      dVar5 = (pFVar12->XYZToRgb).M[0][1];
      (pFVar17->RgbToXYZ).M[3][2] = dVar3;
      (pFVar17->RgbToXYZ).M[3][3] = dVar4;
      (pFVar17->XYZToRgb).M[0][0] = dVar2;
      (pFVar17->XYZToRgb).M[0][1] = dVar5;
      UE::Color::FColorSpace::SetWorking(&local_12e8);
      break;
    case '\x03':
      pFVar11 = UE::Color::FColorSpace::FColorSpace(&local_6a8,ACESAP0);
      lVar20 = 2;
      pFVar13 = &local_1198;
      do {
        pFVar17 = pFVar13;
        pFVar12 = pFVar11;
        pFVar13 = (FColorSpace *)((pFVar17->RgbToXYZ).M + 2);
        dVar2 = (pFVar12->Chromaticities).Elements[0].field0_0x0._s_0.Y;
        dVar3 = (pFVar12->Chromaticities).Elements[1].field0_0x0._s_0.X;
        dVar4 = (pFVar12->Chromaticities).Elements[1].field0_0x0._s_0.Y;
        pFVar11 = (FColorSpace *)((pFVar12->RgbToXYZ).M + 2);
        (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.X =
             (pFVar12->Chromaticities).Elements[0].field0_0x0._s_0.X;
        (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar2;
        dVar2 = (pFVar12->Chromaticities).Elements[2].field0_0x0._s_0.X;
        dVar5 = (pFVar12->Chromaticities).Elements[2].field0_0x0._s_0.Y;
        (pFVar17->Chromaticities).Elements[1].field0_0x0._s_0.X = dVar3;
        (pFVar17->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar4;
        dVar3 = (pFVar12->Chromaticities).Elements[3].field0_0x0._s_0.X;
        dVar4 = (pFVar12->Chromaticities).Elements[3].field0_0x0._s_0.Y;
        (pFVar17->Chromaticities).Elements[2].field0_0x0._s_0.X = dVar2;
        (pFVar17->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar5;
        dVar2 = (pFVar12->RgbToXYZ).M[0][0];
        dVar5 = (pFVar12->RgbToXYZ).M[0][1];
        (pFVar17->Chromaticities).Elements[3].field0_0x0._s_0.X = dVar3;
        (pFVar17->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar4;
        dVar3 = (pFVar12->RgbToXYZ).M[0][2];
        dVar4 = (pFVar12->RgbToXYZ).M[0][3];
        (pFVar17->RgbToXYZ).M[0][0] = dVar2;
        (pFVar17->RgbToXYZ).M[0][1] = dVar5;
        dVar2 = (pFVar12->RgbToXYZ).M[1][0];
        dVar5 = (pFVar12->RgbToXYZ).M[1][1];
        (pFVar17->RgbToXYZ).M[0][2] = dVar3;
        (pFVar17->RgbToXYZ).M[0][3] = dVar4;
        dVar3 = (pFVar12->RgbToXYZ).M[1][2];
        dVar4 = (pFVar12->RgbToXYZ).M[1][3];
        (pFVar17->RgbToXYZ).M[1][0] = dVar2;
        (pFVar17->RgbToXYZ).M[1][1] = dVar5;
        (pFVar17->RgbToXYZ).M[1][2] = dVar3;
        (pFVar17->RgbToXYZ).M[1][3] = dVar4;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar2 = (pFVar12->RgbToXYZ).M[2][1];
      dVar3 = (pFVar12->RgbToXYZ).M[2][2];
      dVar4 = (pFVar12->RgbToXYZ).M[2][3];
      (pFVar13->Chromaticities).Elements[0].field0_0x0._s_0.X =
           (pFVar11->Chromaticities).Elements[0].field0_0x0._s_0.X;
      (pFVar17->RgbToXYZ).M[2][1] = dVar2;
      dVar2 = (pFVar12->RgbToXYZ).M[3][0];
      dVar5 = (pFVar12->RgbToXYZ).M[3][1];
      (pFVar17->RgbToXYZ).M[2][2] = dVar3;
      (pFVar17->RgbToXYZ).M[2][3] = dVar4;
      dVar3 = (pFVar12->RgbToXYZ).M[3][2];
      dVar4 = (pFVar12->RgbToXYZ).M[3][3];
      (pFVar17->RgbToXYZ).M[3][0] = dVar2;
      (pFVar17->RgbToXYZ).M[3][1] = dVar5;
      dVar2 = (pFVar12->XYZToRgb).M[0][0];
      dVar5 = (pFVar12->XYZToRgb).M[0][1];
      (pFVar17->RgbToXYZ).M[3][2] = dVar3;
      (pFVar17->RgbToXYZ).M[3][3] = dVar4;
      (pFVar17->XYZToRgb).M[0][0] = dVar2;
      (pFVar17->XYZToRgb).M[0][1] = dVar5;
      UE::Color::FColorSpace::SetWorking(&local_1198);
      break;
    case '\x04':
      pFVar11 = UE::Color::FColorSpace::FColorSpace(&local_558,ACESAP1);
      lVar20 = 2;
      pFVar13 = &local_1048;
      do {
        pFVar17 = pFVar13;
        pFVar12 = pFVar11;
        pFVar13 = (FColorSpace *)((pFVar17->RgbToXYZ).M + 2);
        dVar2 = (pFVar12->Chromaticities).Elements[0].field0_0x0._s_0.Y;
        dVar3 = (pFVar12->Chromaticities).Elements[1].field0_0x0._s_0.X;
        dVar4 = (pFVar12->Chromaticities).Elements[1].field0_0x0._s_0.Y;
        pFVar11 = (FColorSpace *)((pFVar12->RgbToXYZ).M + 2);
        (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.X =
             (pFVar12->Chromaticities).Elements[0].field0_0x0._s_0.X;
        (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar2;
        dVar2 = (pFVar12->Chromaticities).Elements[2].field0_0x0._s_0.X;
        dVar5 = (pFVar12->Chromaticities).Elements[2].field0_0x0._s_0.Y;
        (pFVar17->Chromaticities).Elements[1].field0_0x0._s_0.X = dVar3;
        (pFVar17->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar4;
        dVar3 = (pFVar12->Chromaticities).Elements[3].field0_0x0._s_0.X;
        dVar4 = (pFVar12->Chromaticities).Elements[3].field0_0x0._s_0.Y;
        (pFVar17->Chromaticities).Elements[2].field0_0x0._s_0.X = dVar2;
        (pFVar17->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar5;
        dVar2 = (pFVar12->RgbToXYZ).M[0][0];
        dVar5 = (pFVar12->RgbToXYZ).M[0][1];
        (pFVar17->Chromaticities).Elements[3].field0_0x0._s_0.X = dVar3;
        (pFVar17->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar4;
        dVar3 = (pFVar12->RgbToXYZ).M[0][2];
        dVar4 = (pFVar12->RgbToXYZ).M[0][3];
        (pFVar17->RgbToXYZ).M[0][0] = dVar2;
        (pFVar17->RgbToXYZ).M[0][1] = dVar5;
        dVar2 = (pFVar12->RgbToXYZ).M[1][0];
        dVar5 = (pFVar12->RgbToXYZ).M[1][1];
        (pFVar17->RgbToXYZ).M[0][2] = dVar3;
        (pFVar17->RgbToXYZ).M[0][3] = dVar4;
        dVar3 = (pFVar12->RgbToXYZ).M[1][2];
        dVar4 = (pFVar12->RgbToXYZ).M[1][3];
        (pFVar17->RgbToXYZ).M[1][0] = dVar2;
        (pFVar17->RgbToXYZ).M[1][1] = dVar5;
        (pFVar17->RgbToXYZ).M[1][2] = dVar3;
        (pFVar17->RgbToXYZ).M[1][3] = dVar4;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar2 = (pFVar12->RgbToXYZ).M[2][1];
      dVar3 = (pFVar12->RgbToXYZ).M[2][2];
      dVar4 = (pFVar12->RgbToXYZ).M[2][3];
      (pFVar13->Chromaticities).Elements[0].field0_0x0._s_0.X =
           (pFVar11->Chromaticities).Elements[0].field0_0x0._s_0.X;
      (pFVar17->RgbToXYZ).M[2][1] = dVar2;
      dVar2 = (pFVar12->RgbToXYZ).M[3][0];
      dVar5 = (pFVar12->RgbToXYZ).M[3][1];
      (pFVar17->RgbToXYZ).M[2][2] = dVar3;
      (pFVar17->RgbToXYZ).M[2][3] = dVar4;
      dVar3 = (pFVar12->RgbToXYZ).M[3][2];
      dVar4 = (pFVar12->RgbToXYZ).M[3][3];
      (pFVar17->RgbToXYZ).M[3][0] = dVar2;
      (pFVar17->RgbToXYZ).M[3][1] = dVar5;
      dVar2 = (pFVar12->XYZToRgb).M[0][0];
      dVar5 = (pFVar12->XYZToRgb).M[0][1];
      (pFVar17->RgbToXYZ).M[3][2] = dVar3;
      (pFVar17->RgbToXYZ).M[3][3] = dVar4;
      (pFVar17->XYZToRgb).M[0][0] = dVar2;
      (pFVar17->XYZToRgb).M[0][1] = dVar5;
      UE::Color::FColorSpace::SetWorking(&local_1048);
      break;
    case '\x05':
      pFVar11 = UE::Color::FColorSpace::FColorSpace(&local_408,P3DCI);
      lVar20 = 2;
      pFVar13 = &local_ef8;
      do {
        pFVar17 = pFVar13;
        pFVar12 = pFVar11;
        pFVar13 = (FColorSpace *)((pFVar17->RgbToXYZ).M + 2);
        dVar2 = (pFVar12->Chromaticities).Elements[0].field0_0x0._s_0.Y;
        dVar3 = (pFVar12->Chromaticities).Elements[1].field0_0x0._s_0.X;
        dVar4 = (pFVar12->Chromaticities).Elements[1].field0_0x0._s_0.Y;
        pFVar11 = (FColorSpace *)((pFVar12->RgbToXYZ).M + 2);
        (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.X =
             (pFVar12->Chromaticities).Elements[0].field0_0x0._s_0.X;
        (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar2;
        dVar2 = (pFVar12->Chromaticities).Elements[2].field0_0x0._s_0.X;
        dVar5 = (pFVar12->Chromaticities).Elements[2].field0_0x0._s_0.Y;
        (pFVar17->Chromaticities).Elements[1].field0_0x0._s_0.X = dVar3;
        (pFVar17->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar4;
        dVar3 = (pFVar12->Chromaticities).Elements[3].field0_0x0._s_0.X;
        dVar4 = (pFVar12->Chromaticities).Elements[3].field0_0x0._s_0.Y;
        (pFVar17->Chromaticities).Elements[2].field0_0x0._s_0.X = dVar2;
        (pFVar17->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar5;
        dVar2 = (pFVar12->RgbToXYZ).M[0][0];
        dVar5 = (pFVar12->RgbToXYZ).M[0][1];
        (pFVar17->Chromaticities).Elements[3].field0_0x0._s_0.X = dVar3;
        (pFVar17->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar4;
        dVar3 = (pFVar12->RgbToXYZ).M[0][2];
        dVar4 = (pFVar12->RgbToXYZ).M[0][3];
        (pFVar17->RgbToXYZ).M[0][0] = dVar2;
        (pFVar17->RgbToXYZ).M[0][1] = dVar5;
        dVar2 = (pFVar12->RgbToXYZ).M[1][0];
        dVar5 = (pFVar12->RgbToXYZ).M[1][1];
        (pFVar17->RgbToXYZ).M[0][2] = dVar3;
        (pFVar17->RgbToXYZ).M[0][3] = dVar4;
        dVar3 = (pFVar12->RgbToXYZ).M[1][2];
        dVar4 = (pFVar12->RgbToXYZ).M[1][3];
        (pFVar17->RgbToXYZ).M[1][0] = dVar2;
        (pFVar17->RgbToXYZ).M[1][1] = dVar5;
        (pFVar17->RgbToXYZ).M[1][2] = dVar3;
        (pFVar17->RgbToXYZ).M[1][3] = dVar4;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar2 = (pFVar12->RgbToXYZ).M[2][1];
      dVar3 = (pFVar12->RgbToXYZ).M[2][2];
      dVar4 = (pFVar12->RgbToXYZ).M[2][3];
      (pFVar13->Chromaticities).Elements[0].field0_0x0._s_0.X =
           (pFVar11->Chromaticities).Elements[0].field0_0x0._s_0.X;
      (pFVar17->RgbToXYZ).M[2][1] = dVar2;
      dVar2 = (pFVar12->RgbToXYZ).M[3][0];
      dVar5 = (pFVar12->RgbToXYZ).M[3][1];
      (pFVar17->RgbToXYZ).M[2][2] = dVar3;
      (pFVar17->RgbToXYZ).M[2][3] = dVar4;
      dVar3 = (pFVar12->RgbToXYZ).M[3][2];
      dVar4 = (pFVar12->RgbToXYZ).M[3][3];
      (pFVar17->RgbToXYZ).M[3][0] = dVar2;
      (pFVar17->RgbToXYZ).M[3][1] = dVar5;
      dVar2 = (pFVar12->XYZToRgb).M[0][0];
      dVar5 = (pFVar12->XYZToRgb).M[0][1];
      (pFVar17->RgbToXYZ).M[3][2] = dVar3;
      (pFVar17->RgbToXYZ).M[3][3] = dVar4;
      (pFVar17->XYZToRgb).M[0][0] = dVar2;
      (pFVar17->XYZToRgb).M[0][1] = dVar5;
      UE::Color::FColorSpace::SetWorking(&local_ef8);
      break;
    case '\x06':
      pFVar11 = UE::Color::FColorSpace::FColorSpace(&local_2b8,P3D65);
      lVar20 = 2;
      pFVar13 = &local_da8;
      do {
        pFVar17 = pFVar13;
        pFVar12 = pFVar11;
        pFVar13 = (FColorSpace *)((pFVar17->RgbToXYZ).M + 2);
        dVar2 = (pFVar12->Chromaticities).Elements[0].field0_0x0._s_0.Y;
        dVar3 = (pFVar12->Chromaticities).Elements[1].field0_0x0._s_0.X;
        dVar4 = (pFVar12->Chromaticities).Elements[1].field0_0x0._s_0.Y;
        pFVar11 = (FColorSpace *)((pFVar12->RgbToXYZ).M + 2);
        (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.X =
             (pFVar12->Chromaticities).Elements[0].field0_0x0._s_0.X;
        (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar2;
        dVar2 = (pFVar12->Chromaticities).Elements[2].field0_0x0._s_0.X;
        dVar5 = (pFVar12->Chromaticities).Elements[2].field0_0x0._s_0.Y;
        (pFVar17->Chromaticities).Elements[1].field0_0x0._s_0.X = dVar3;
        (pFVar17->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar4;
        dVar3 = (pFVar12->Chromaticities).Elements[3].field0_0x0._s_0.X;
        dVar4 = (pFVar12->Chromaticities).Elements[3].field0_0x0._s_0.Y;
        (pFVar17->Chromaticities).Elements[2].field0_0x0._s_0.X = dVar2;
        (pFVar17->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar5;
        dVar2 = (pFVar12->RgbToXYZ).M[0][0];
        dVar5 = (pFVar12->RgbToXYZ).M[0][1];
        (pFVar17->Chromaticities).Elements[3].field0_0x0._s_0.X = dVar3;
        (pFVar17->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar4;
        dVar3 = (pFVar12->RgbToXYZ).M[0][2];
        dVar4 = (pFVar12->RgbToXYZ).M[0][3];
        (pFVar17->RgbToXYZ).M[0][0] = dVar2;
        (pFVar17->RgbToXYZ).M[0][1] = dVar5;
        dVar2 = (pFVar12->RgbToXYZ).M[1][0];
        dVar5 = (pFVar12->RgbToXYZ).M[1][1];
        (pFVar17->RgbToXYZ).M[0][2] = dVar3;
        (pFVar17->RgbToXYZ).M[0][3] = dVar4;
        dVar3 = (pFVar12->RgbToXYZ).M[1][2];
        dVar4 = (pFVar12->RgbToXYZ).M[1][3];
        (pFVar17->RgbToXYZ).M[1][0] = dVar2;
        (pFVar17->RgbToXYZ).M[1][1] = dVar5;
        (pFVar17->RgbToXYZ).M[1][2] = dVar3;
        (pFVar17->RgbToXYZ).M[1][3] = dVar4;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar2 = (pFVar12->RgbToXYZ).M[2][1];
      dVar3 = (pFVar12->RgbToXYZ).M[2][2];
      dVar4 = (pFVar12->RgbToXYZ).M[2][3];
      (pFVar13->Chromaticities).Elements[0].field0_0x0._s_0.X =
           (pFVar11->Chromaticities).Elements[0].field0_0x0._s_0.X;
      (pFVar17->RgbToXYZ).M[2][1] = dVar2;
      dVar2 = (pFVar12->RgbToXYZ).M[3][0];
      dVar5 = (pFVar12->RgbToXYZ).M[3][1];
      (pFVar17->RgbToXYZ).M[2][2] = dVar3;
      (pFVar17->RgbToXYZ).M[2][3] = dVar4;
      dVar3 = (pFVar12->RgbToXYZ).M[3][2];
      dVar4 = (pFVar12->RgbToXYZ).M[3][3];
      (pFVar17->RgbToXYZ).M[3][0] = dVar2;
      (pFVar17->RgbToXYZ).M[3][1] = dVar5;
      dVar2 = (pFVar12->XYZToRgb).M[0][0];
      dVar5 = (pFVar12->XYZToRgb).M[0][1];
      (pFVar17->RgbToXYZ).M[3][2] = dVar3;
      (pFVar17->RgbToXYZ).M[3][3] = dVar4;
      (pFVar17->XYZToRgb).M[0][0] = dVar2;
      (pFVar17->XYZToRgb).M[0][1] = dVar5;
      UE::Color::FColorSpace::SetWorking(&local_da8);
      break;
    case '\a':
      pFVar11 = UE::Color::FColorSpace::FColorSpace
                          (&local_168,&this->RedChromaticityCoordinate,
                           &this->GreenChromaticityCoordinate,&this->BlueChromaticityCoordinate,
                           &this->WhiteChromaticityCoordinate);
      lVar20 = 2;
      pFVar13 = &local_c58;
      do {
        pFVar17 = pFVar13;
        pFVar12 = pFVar11;
        pFVar13 = (FColorSpace *)((pFVar17->RgbToXYZ).M + 2);
        dVar2 = (pFVar12->Chromaticities).Elements[0].field0_0x0._s_0.Y;
        dVar3 = (pFVar12->Chromaticities).Elements[1].field0_0x0._s_0.X;
        dVar4 = (pFVar12->Chromaticities).Elements[1].field0_0x0._s_0.Y;
        pFVar11 = (FColorSpace *)((pFVar12->RgbToXYZ).M + 2);
        (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.X =
             (pFVar12->Chromaticities).Elements[0].field0_0x0._s_0.X;
        (pFVar17->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar2;
        dVar2 = (pFVar12->Chromaticities).Elements[2].field0_0x0._s_0.X;
        dVar5 = (pFVar12->Chromaticities).Elements[2].field0_0x0._s_0.Y;
        (pFVar17->Chromaticities).Elements[1].field0_0x0._s_0.X = dVar3;
        (pFVar17->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar4;
        dVar3 = (pFVar12->Chromaticities).Elements[3].field0_0x0._s_0.X;
        dVar4 = (pFVar12->Chromaticities).Elements[3].field0_0x0._s_0.Y;
        (pFVar17->Chromaticities).Elements[2].field0_0x0._s_0.X = dVar2;
        (pFVar17->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar5;
        dVar2 = (pFVar12->RgbToXYZ).M[0][0];
        dVar5 = (pFVar12->RgbToXYZ).M[0][1];
        (pFVar17->Chromaticities).Elements[3].field0_0x0._s_0.X = dVar3;
        (pFVar17->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar4;
        dVar3 = (pFVar12->RgbToXYZ).M[0][2];
        dVar4 = (pFVar12->RgbToXYZ).M[0][3];
        (pFVar17->RgbToXYZ).M[0][0] = dVar2;
        (pFVar17->RgbToXYZ).M[0][1] = dVar5;
        dVar2 = (pFVar12->RgbToXYZ).M[1][0];
        dVar5 = (pFVar12->RgbToXYZ).M[1][1];
        (pFVar17->RgbToXYZ).M[0][2] = dVar3;
        (pFVar17->RgbToXYZ).M[0][3] = dVar4;
        dVar3 = (pFVar12->RgbToXYZ).M[1][2];
        dVar4 = (pFVar12->RgbToXYZ).M[1][3];
        (pFVar17->RgbToXYZ).M[1][0] = dVar2;
        (pFVar17->RgbToXYZ).M[1][1] = dVar5;
        (pFVar17->RgbToXYZ).M[1][2] = dVar3;
        (pFVar17->RgbToXYZ).M[1][3] = dVar4;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar2 = (pFVar12->RgbToXYZ).M[2][1];
      dVar3 = (pFVar12->RgbToXYZ).M[2][2];
      dVar4 = (pFVar12->RgbToXYZ).M[2][3];
      (pFVar13->Chromaticities).Elements[0].field0_0x0._s_0.X =
           (pFVar11->Chromaticities).Elements[0].field0_0x0._s_0.X;
      (pFVar17->RgbToXYZ).M[2][1] = dVar2;
      dVar2 = (pFVar12->RgbToXYZ).M[3][0];
      dVar5 = (pFVar12->RgbToXYZ).M[3][1];
      (pFVar17->RgbToXYZ).M[2][2] = dVar3;
      (pFVar17->RgbToXYZ).M[2][3] = dVar4;
      dVar3 = (pFVar12->RgbToXYZ).M[3][2];
      dVar4 = (pFVar12->RgbToXYZ).M[3][3];
      (pFVar17->RgbToXYZ).M[3][0] = dVar2;
      (pFVar17->RgbToXYZ).M[3][1] = dVar5;
      dVar2 = (pFVar12->XYZToRgb).M[0][0];
      dVar5 = (pFVar12->XYZToRgb).M[0][1];
      (pFVar17->RgbToXYZ).M[3][2] = dVar3;
      (pFVar17->RgbToXYZ).M[3][3] = dVar4;
      (pFVar17->XYZToRgb).M[0][0] = dVar2;
      (pFVar17->XYZToRgb).M[0][1] = dVar5;
      UE::Color::FColorSpace::SetWorking(&local_c58);
      break;
    default:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RendererSettings.cpp"
                          ,0x2f7,L"");
      if (bVar10) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((this->WorkingColorSpaceChoice).Value != '\a') {
      pFVar13 = UE::Color::FColorSpace::GetWorking();
      dVar2 = (pFVar13->Chromaticities).Elements[0].field0_0x0._s_0.Y;
      (this->RedChromaticityCoordinate).field0_0x0._s_0.X =
           (pFVar13->Chromaticities).Elements[0].field0_0x0._s_0.X;
      (this->RedChromaticityCoordinate).field0_0x0._s_0.Y = dVar2;
      dVar2 = (pFVar13->Chromaticities).Elements[1].field0_0x0._s_0.Y;
      (this->GreenChromaticityCoordinate).field0_0x0._s_0.X =
           (pFVar13->Chromaticities).Elements[1].field0_0x0._s_0.X;
      (this->GreenChromaticityCoordinate).field0_0x0._s_0.Y = dVar2;
      dVar2 = (pFVar13->Chromaticities).Elements[2].field0_0x0._s_0.Y;
      (this->BlueChromaticityCoordinate).field0_0x0._s_0.X =
           (pFVar13->Chromaticities).Elements[2].field0_0x0._s_0.X;
      (this->BlueChromaticityCoordinate).field0_0x0._s_0.Y = dVar2;
      dVar2 = (pFVar13->Chromaticities).Elements[3].field0_0x0._s_0.Y;
      (this->WhiteChromaticityCoordinate).field0_0x0._s_0.X =
           (pFVar13->Chromaticities).Elements[3].field0_0x0._s_0.X;
      (this->WhiteChromaticityCoordinate).field0_0x0._s_0.Y = dVar2;
    }
    pFVar13 = UE::Color::FColorSpace::GetWorking();
    lVar20 = 2;
    pdVar9 = local_b08;
    do {
      pdVar18 = pdVar9;
      pFVar11 = pFVar13;
      dVar2 = (pFVar11->Chromaticities).Elements[0].field0_0x0._s_0.Y;
      dVar3 = (pFVar11->Chromaticities).Elements[1].field0_0x0._s_0.X;
      dVar4 = (pFVar11->Chromaticities).Elements[1].field0_0x0._s_0.Y;
      pFVar13 = (FColorSpace *)((pFVar11->RgbToXYZ).M + 2);
      *pdVar18 = (pFVar11->Chromaticities).Elements[0].field0_0x0._s_0.X;
      pdVar18[1] = dVar2;
      dVar2 = (pFVar11->Chromaticities).Elements[2].field0_0x0._s_0.X;
      dVar5 = (pFVar11->Chromaticities).Elements[2].field0_0x0._s_0.Y;
      pdVar18[2] = dVar3;
      pdVar18[3] = dVar4;
      dVar3 = (pFVar11->Chromaticities).Elements[3].field0_0x0._s_0.X;
      dVar4 = (pFVar11->Chromaticities).Elements[3].field0_0x0._s_0.Y;
      pdVar18[4] = dVar2;
      pdVar18[5] = dVar5;
      dVar2 = (pFVar11->RgbToXYZ).M[0][0];
      dVar5 = (pFVar11->RgbToXYZ).M[0][1];
      pdVar18[6] = dVar3;
      pdVar18[7] = dVar4;
      dVar3 = (pFVar11->RgbToXYZ).M[0][2];
      dVar4 = (pFVar11->RgbToXYZ).M[0][3];
      pdVar18[8] = dVar2;
      pdVar18[9] = dVar5;
      dVar2 = (pFVar11->RgbToXYZ).M[1][0];
      dVar5 = (pFVar11->RgbToXYZ).M[1][1];
      pdVar18[10] = dVar3;
      pdVar18[0xb] = dVar4;
      dVar3 = (pFVar11->RgbToXYZ).M[1][2];
      dVar4 = (pFVar11->RgbToXYZ).M[1][3];
      pdVar18[0xc] = dVar2;
      pdVar18[0xd] = dVar5;
      pdVar18[0xe] = dVar3;
      pdVar18[0xf] = dVar4;
      lVar20 = lVar20 + -1;
      pdVar9 = pdVar18 + 0x10;
    } while (lVar20 != 0);
    dVar2 = (pFVar11->RgbToXYZ).M[2][1];
    dVar3 = (pFVar11->RgbToXYZ).M[2][2];
    dVar4 = (pFVar11->RgbToXYZ).M[2][3];
    local_9b8[0] = (code *)0x0;
    pdVar18[0x10] = (pFVar13->Chromaticities).Elements[0].field0_0x0._s_0.X;
    pdVar18[0x11] = dVar2;
    dVar2 = (pFVar11->RgbToXYZ).M[3][0];
    dVar5 = (pFVar11->RgbToXYZ).M[3][1];
    pdVar18[0x12] = dVar3;
    pdVar18[0x13] = dVar4;
    dVar3 = (pFVar11->RgbToXYZ).M[3][2];
    dVar4 = (pFVar11->RgbToXYZ).M[3][3];
    pdVar18[0x14] = dVar2;
    pdVar18[0x15] = dVar5;
    dVar2 = (pFVar11->XYZToRgb).M[0][0];
    dVar5 = (pFVar11->XYZToRgb).M[0][1];
    pdVar18[0x16] = dVar3;
    pdVar18[0x17] = dVar4;
    pdVar18[0x18] = dVar2;
    pdVar18[0x19] = dVar5;
    local_990 = FMemory::Malloc(0x160,0x10);
    *local_990 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`URendererSettings::UpdateWorkingColorSpaceAndChromaticities'::`2'::<lambda_1>,1,1>
                          ::_vftable_;
    ppcVar19 = local_990 + 2;
    pdVar9 = local_b08;
    do {
      pdVar18 = pdVar9;
      ppcVar14 = ppcVar19;
      pcVar1 = (code *)pdVar18[1];
      pcVar6 = (code *)pdVar18[2];
      pcVar7 = (code *)pdVar18[3];
      *ppcVar14 = (code *)*pdVar18;
      ppcVar14[1] = pcVar1;
      pcVar1 = (code *)pdVar18[4];
      pcVar8 = (code *)pdVar18[5];
      ppcVar14[2] = pcVar6;
      ppcVar14[3] = pcVar7;
      pcVar6 = (code *)pdVar18[6];
      pcVar7 = (code *)pdVar18[7];
      ppcVar14[4] = pcVar1;
      ppcVar14[5] = pcVar8;
      pcVar1 = (code *)pdVar18[8];
      pcVar8 = (code *)pdVar18[9];
      ppcVar14[6] = pcVar6;
      ppcVar14[7] = pcVar7;
      pcVar6 = (code *)pdVar18[10];
      pcVar7 = (code *)pdVar18[0xb];
      ppcVar14[8] = pcVar1;
      ppcVar14[9] = pcVar8;
      pcVar1 = (code *)pdVar18[0xc];
      pcVar8 = (code *)pdVar18[0xd];
      ppcVar14[10] = pcVar6;
      ppcVar14[0xb] = pcVar7;
      pcVar6 = (code *)pdVar18[0xe];
      pcVar7 = (code *)pdVar18[0xf];
      ppcVar14[0xc] = pcVar1;
      ppcVar14[0xd] = pcVar8;
      ppcVar14[0xe] = pcVar6;
      ppcVar14[0xf] = pcVar7;
      lVar21 = lVar21 + -1;
      ppcVar19 = ppcVar14 + 0x10;
      pdVar9 = pdVar18 + 0x10;
    } while (lVar21 != 0);
    pcVar1 = (code *)pdVar18[0x11];
    pcVar6 = (code *)pdVar18[0x12];
    pcVar7 = (code *)pdVar18[0x13];
    ppcVar14[0x10] = (code *)pdVar18[0x10];
    ppcVar14[0x11] = pcVar1;
    pcVar1 = (code *)pdVar18[0x14];
    pcVar8 = (code *)pdVar18[0x15];
    ppcVar14[0x12] = pcVar6;
    ppcVar14[0x13] = pcVar7;
    pcVar6 = (code *)pdVar18[0x16];
    pcVar7 = (code *)pdVar18[0x17];
    ppcVar14[0x14] = pcVar1;
    ppcVar14[0x15] = pcVar8;
    pcVar1 = (code *)pdVar18[0x18];
    pcVar8 = (code *)pdVar18[0x19];
    ppcVar14[0x16] = pcVar6;
    ppcVar14[0x17] = pcVar7;
    ppcVar14[0x18] = pcVar1;
    ppcVar14[0x19] = pcVar8;
    if (local_990 + 2 != (code **)0x0) {
      local_9b8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`URendererSettings::UpdateWorkingColorSpaceAndChromaticities'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_URendererSettings::UpdateWorkingColorSpaceAndChromaticities_::__l2::TSTR_WorkingColorSpaceCommand770>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_9b8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_988._0_8_ = local_9b8[0];
      local_960 = local_990;
      local_990 = (code **)0x0;
      local_988._16_8_ = local_9a8[0];
      local_988._24_8_ = local_9a8[1];
      local_988._32_8_ = local_9a8[2];
      local_9b8[0] = (code *)0x0;
      local_958 = 2;
      pFVar15 = (FRenderCommandTag *)
                TRenderCommandTag<`URendererSettings::UpdateWorkingColorSpaceAndChromaticities'::__l2::TSTR_WorkingColorSpaceCommand770>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_988,pFVar15);
      uVar22 = (ulonglong)local_958;
      if ((2 < uVar22) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar10)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar22] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_988._0_8_ != (code *)0x0) {
          ppcVar19 = (code **)(local_988 + 0x10);
          if (local_960 != (code **)0x0) {
            ppcVar19 = local_960;
          }
          (**(code **)(*ppcVar19 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar22])(local_988);
      }
    }
    if (local_9b8[0] != (code *)0x0) {
      ppcVar19 = local_9b8 + 2;
      if (local_990 != (code **)0x0) {
        ppcVar19 = local_990;
      }
      (**(code **)(*ppcVar19 + 0x10))();
    }
  }
  return;
}

