// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 8

// StaticClass @ 14e5b61b0

UClass * __cdecl UGLTFExportOptions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFExportOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFExportOptions",
               &Z_Registration_Info_UClass_UGLTFExportOptions.InnerSingleton,
               StaticRegisterNativesUGLTFExportOptions,0xb8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGLTFExportOptions>,
               InternalVTableHelperCtorCaller<UGLTFExportOptions>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFExportOptions.InnerSingleton;
}

// UGLTFExportOptions @ 14e5d2fa0

UGLTFExportOptions * __thiscall
UGLTFExportOptions::UGLTFExportOptions(UGLTFExportOptions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGLTFExportOptions__6B_;
  *(undefined8 *)&this->DefaultInputBakeSettings = 0;
  *(undefined8 *)&(this->DefaultInputBakeSettings).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultInputBakeSettings).field_0x20 = 0;
  (this->DefaultMaterialBakeSize).X = 1;
  (this->DefaultMaterialBakeSize).Y = 1;
  (this->DefaultMaterialBakeSize).bAutoDetect = false;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x34 = 0;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DefaultInputBakeSettings).field_0x40 = 0;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x48 = 0;
  return this;
}

// UGLTFExportOptions @ 14e5d3010

UGLTFExportOptions * __thiscall
UGLTFExportOptions::UGLTFExportOptions(UGLTFExportOptions *this,FObjectInitializer *param_1)

{
  int iVar1;
  undefined3 uVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGLTFExportOptions__6B_;
  (this->DefaultMaterialBakeSize).X = 1;
  (this->DefaultMaterialBakeSize).Y = 1;
  (this->DefaultMaterialBakeSize).bAutoDetect = false;
  *(undefined8 *)&this->DefaultInputBakeSettings = 0;
  *(undefined8 *)&(this->DefaultInputBakeSettings).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultInputBakeSettings).field_0x20 = 0;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x34 = 0;
  *(undefined8 *)&(this->DefaultInputBakeSettings).field_0x40 = 0;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x48 = 0;
  this->ExportUniformScale = 0.01;
  this->bExportPreviewMesh = true;
  this->bSkipNearDefaultValues = true;
  this->bIncludeCopyrightNotice = false;
  this->bExportProxyMaterials = true;
  this->bUseImporterMaterialMapping = true;
  this->bExportUnlitMaterials = true;
  this->bExportClearCoatMaterials = true;
  this->bExportClothMaterials = true;
  this->bExportThinTranslucentMaterials = false;
  this->bExportSpecularGlossinessMaterials = true;
  this->bExportEmissiveStrength = true;
  this->BakeMaterialInputs = UseMeshData;
  iVar1 = FGLTFMaterialBakeSize::Default.Y;
  (this->DefaultMaterialBakeSize).X = FGLTFMaterialBakeSize::Default.X;
  (this->DefaultMaterialBakeSize).Y = iVar1;
  uVar2 = FGLTFMaterialBakeSize::Default._9_3_;
  (this->DefaultMaterialBakeSize).bAutoDetect = FGLTFMaterialBakeSize::Default.bAutoDetect;
  *(undefined3 *)&(this->DefaultMaterialBakeSize).field_0x9 = uVar2;
  this->DefaultMaterialBakeFilter = '\x02';
  this->DefaultMaterialBakeTiling = '\0';
  this->DefaultLevelOfDetail = 0;
  this->bExportSourceModel = false;
  this->bExportVertexColors = false;
  this->bExportVertexSkinWeights = true;
  this->bMakeSkinnedMeshesRoot = true;
  this->bUseMeshQuantization = false;
  this->bExportMorphTargets = true;
  this->bExportLevelSequences = true;
  this->bExportAnimationSequences = true;
  this->TextureImageFormat = PNG;
  this->TextureImageQuality = 0;
  this->bExportTextureTransforms = true;
  this->bExportLightmaps = false;
  this->bAdjustNormalmaps = true;
  this->bExportHiddenInGame = false;
  this->bExportLights = true;
  this->bExportCameras = true;
  this->ExportMaterialVariants = UseMeshData;
  return this;
}

// ~UGLTFExportOptions @ 14e5d7f00

void __thiscall UGLTFExportOptions::~UGLTFExportOptions(UGLTFExportOptions *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UGLTFExportOptions__6B_;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DefaultInputBakeSettings).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EGLTFMaterialPropertyGroup,FGLTFOverrideMaterialBakeSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EGLTFMaterialPropertyGroup,FGLTFOverrideMaterialBakeSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->DefaultInputBakeSettings);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e5fc4b0

UClass * __cdecl UGLTFExportOptions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFExportOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFExportOptions",
               &Z_Registration_Info_UClass_UGLTFExportOptions.InnerSingleton,
               StaticRegisterNativesUGLTFExportOptions,0xb8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGLTFExportOptions>,
               InternalVTableHelperCtorCaller<UGLTFExportOptions>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFExportOptions.InnerSingleton;
}

// ResetToDefault @ 14e611710

void __thiscall UGLTFExportOptions::ResetToDefault(UGLTFExportOptions *this)

{
  int iVar1;
  undefined3 uVar2;
  
  this->ExportUniformScale = 0.01;
  this->bExportPreviewMesh = true;
  this->bSkipNearDefaultValues = true;
  this->bIncludeCopyrightNotice = false;
  this->bExportProxyMaterials = true;
  this->bUseImporterMaterialMapping = true;
  this->bExportUnlitMaterials = true;
  this->bExportClearCoatMaterials = true;
  this->bExportClothMaterials = true;
  this->bExportThinTranslucentMaterials = false;
  this->bExportSpecularGlossinessMaterials = true;
  this->bExportEmissiveStrength = true;
  this->BakeMaterialInputs = UseMeshData;
  iVar1 = FGLTFMaterialBakeSize::Default.Y;
  (this->DefaultMaterialBakeSize).X = FGLTFMaterialBakeSize::Default.X;
  (this->DefaultMaterialBakeSize).Y = iVar1;
  uVar2 = FGLTFMaterialBakeSize::Default._9_3_;
  (this->DefaultMaterialBakeSize).bAutoDetect = FGLTFMaterialBakeSize::Default.bAutoDetect;
  *(undefined3 *)&(this->DefaultMaterialBakeSize).field_0x9 = uVar2;
  this->DefaultLevelOfDetail = 0;
  this->TextureImageQuality = 0;
  this->DefaultMaterialBakeFilter = '\x02';
  this->DefaultMaterialBakeTiling = '\0';
  this->bExportSourceModel = false;
  this->bExportVertexColors = false;
  this->bExportVertexSkinWeights = true;
  this->bMakeSkinnedMeshesRoot = true;
  this->bUseMeshQuantization = false;
  this->bExportMorphTargets = true;
  this->bExportLevelSequences = true;
  this->bExportAnimationSequences = true;
  this->TextureImageFormat = PNG;
  this->bExportTextureTransforms = true;
  this->bExportLightmaps = false;
  this->bAdjustNormalmaps = true;
  this->bExportHiddenInGame = false;
  this->bExportLights = true;
  this->bExportCameras = true;
  this->ExportMaterialVariants = UseMeshData;
  return;
}

// StaticRegisterNativesUGLTFExportOptions @ 14e614c80

void __cdecl UGLTFExportOptions::StaticRegisterNativesUGLTFExportOptions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UGLTFExportOptions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execResetToDefault @ 14e620ca0

void __cdecl UGLTFExportOptions::execResetToDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  undefined3 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)(param_1 + 1) = 0x3c23d70a;
  *(undefined4 *)&param_1[1].field_0x4 = 0x1000101;
  *(undefined4 *)&param_1[1].field_0x8 = 0x1010101;
  *(undefined4 *)&param_1[1].field_0xc = 0x2010100;
  iVar1 = FGLTFMaterialBakeSize::Default.Y;
  *(int *)&param_1[1].field_0x10 = FGLTFMaterialBakeSize::Default.X;
  *(int *)&param_1[1].field_0x14 = iVar1;
  uVar2 = FGLTFMaterialBakeSize::Default._9_3_;
  param_1[1].field_0x18 = FGLTFMaterialBakeSize::Default.bAutoDetect;
  *(undefined3 *)&param_1[1].field_0x19 = uVar2;
  *(undefined2 *)&param_1[1].field_0x1c = 2;
  *(undefined4 *)&param_1[3].field_0x20 = 0;
  *(undefined4 *)&param_1[3].field_0x24 = 0x1010000;
  *(undefined4 *)(param_1 + 4) = 0x1010100;
  param_1[4].field_0x4 = 1;
  *(undefined4 *)&param_1[4].field_0x8 = 0;
  *(undefined4 *)&param_1[4].field_0xc = 0x10001;
  *(undefined2 *)&param_1[4].field_0x10 = 0x101;
  param_1[4].field_0x12 = 2;
  return;
}

