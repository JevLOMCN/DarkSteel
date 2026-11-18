// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1487e1aa0

UClass * __cdecl UAutomationTestSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationTestSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutomationTestSettings",
               &Z_Registration_Info_UClass_UAutomationTestSettings.InnerSingleton,
               StaticRegisterNativesUAutomationTestSettings,0x358,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationTestSettings>,
               InternalVTableHelperCtorCaller<UAutomationTestSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationTestSettings.InnerSingleton;
}

// UAutomationTestSettings @ 148809bc0

UAutomationTestSettings * __thiscall
UAutomationTestSettings::UAutomationTestSettings
          (UAutomationTestSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAutomationTestSettings__6B_;
  (this->EngineTestModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineTestModules).ArrayNum = 0;
  (this->EngineTestModules).ArrayMax = 0;
  (this->EditorTestModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorTestModules).ArrayNum = 0;
  (this->EditorTestModules).ArrayMax = 0;
  (this->AutomationTestmap).AssetPath.PackageName.ComparisonIndex = 0;
  (this->AutomationTestmap).AssetPath.PackageName.Number = 0;
  (this->AutomationTestmap).AssetPath.AssetName.ComparisonIndex = 0;
  (this->AutomationTestmap).AssetPath.AssetName.Number = 0;
  (this->AutomationTestmap).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AutomationTestmap).SubPathString.Data.ArrayNum = 0;
  (this->AutomationTestmap).SubPathString.Data.ArrayMax = 0;
  (this->EditorPerformanceTestMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorPerformanceTestMaps).ArrayNum = 0;
  (this->EditorPerformanceTestMaps).ArrayMax = 0;
  (this->AssetsToOpen).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetsToOpen).ArrayNum = 0;
  (this->AssetsToOpen).ArrayMax = 0;
  (this->MapsToPIETest).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MapsToPIETest).ArrayNum = 0;
  (this->MapsToPIETest).ArrayMax = 0;
  FBuildPromotionTestSettings::FBuildPromotionTestSettings(&this->BuildPromotionTest);
  (this->MaterialEditorPromotionTest).DefaultMaterialAsset.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialEditorPromotionTest).DefaultMaterialAsset.FilePath.Data.ArrayNum = 0;
  (this->MaterialEditorPromotionTest).DefaultMaterialAsset.FilePath.Data.ArrayMax = 0;
  (this->MaterialEditorPromotionTest).DefaultDiffuseTexture.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialEditorPromotionTest).DefaultDiffuseTexture.FilePath.Data.ArrayNum = 0;
  (this->MaterialEditorPromotionTest).DefaultDiffuseTexture.FilePath.Data.ArrayMax = 0;
  (this->MaterialEditorPromotionTest).DefaultNormalTexture.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialEditorPromotionTest).DefaultNormalTexture.FilePath.Data.ArrayNum = 0;
  (this->MaterialEditorPromotionTest).DefaultNormalTexture.FilePath.Data.ArrayMax = 0;
  (this->ParticleEditorPromotionTest).DefaultParticleAsset.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParticleEditorPromotionTest).DefaultParticleAsset.FilePath.Data.ArrayNum = 0;
  (this->ParticleEditorPromotionTest).DefaultParticleAsset.FilePath.Data.ArrayMax = 0;
  (this->BlueprintEditorPromotionTest).FirstMeshPath.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BlueprintEditorPromotionTest).FirstMeshPath.FilePath.Data.ArrayNum = 0;
  (this->BlueprintEditorPromotionTest).FirstMeshPath.FilePath.Data.ArrayMax = 0;
  (this->BlueprintEditorPromotionTest).SecondMeshPath.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BlueprintEditorPromotionTest).SecondMeshPath.FilePath.Data.ArrayNum = 0;
  (this->BlueprintEditorPromotionTest).SecondMeshPath.FilePath.Data.ArrayMax = 0;
  (this->BlueprintEditorPromotionTest).DefaultParticleAsset.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BlueprintEditorPromotionTest).DefaultParticleAsset.FilePath.Data.ArrayNum = 0;
  (this->BlueprintEditorPromotionTest).DefaultParticleAsset.FilePath.Data.ArrayMax = 0;
  (this->TestLevelFolders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestLevelFolders).ArrayNum = 0;
  (this->TestLevelFolders).ArrayMax = 0;
  (this->ExternalTools).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalTools).ArrayNum = 0;
  (this->ExternalTools).ArrayMax = 0;
  (this->ImportExportTestDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportExportTestDefinitions).ArrayNum = 0;
  (this->ImportExportTestDefinitions).ArrayMax = 0;
  (this->LaunchOnSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LaunchOnSettings).ArrayNum = 0;
  (this->LaunchOnSettings).ArrayMax = 0;
  return this;
}

// UAutomationTestSettings @ 148809ce0

UAutomationTestSettings * __thiscall
UAutomationTestSettings::UAutomationTestSettings
          (UAutomationTestSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAutomationTestSettings__6B_;
  (this->EngineTestModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineTestModules).ArrayNum = 0;
  (this->EngineTestModules).ArrayMax = 0;
  (this->EditorTestModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorTestModules).ArrayNum = 0;
  (this->EditorTestModules).ArrayMax = 0;
  (this->AutomationTestmap).AssetPath.PackageName.ComparisonIndex = 0;
  (this->AutomationTestmap).AssetPath.PackageName.Number = 0;
  (this->AutomationTestmap).AssetPath.AssetName.ComparisonIndex = 0;
  (this->AutomationTestmap).AssetPath.AssetName.Number = 0;
  (this->AutomationTestmap).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AutomationTestmap).SubPathString.Data.ArrayNum = 0;
  (this->AutomationTestmap).SubPathString.Data.ArrayMax = 0;
  (this->EditorPerformanceTestMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorPerformanceTestMaps).ArrayNum = 0;
  (this->EditorPerformanceTestMaps).ArrayMax = 0;
  (this->AssetsToOpen).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetsToOpen).ArrayNum = 0;
  (this->AssetsToOpen).ArrayMax = 0;
  (this->MapsToPIETest).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MapsToPIETest).ArrayNum = 0;
  (this->MapsToPIETest).ArrayMax = 0;
  FBuildPromotionTestSettings::FBuildPromotionTestSettings(&this->BuildPromotionTest);
  (this->MaterialEditorPromotionTest).DefaultMaterialAsset.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialEditorPromotionTest).DefaultMaterialAsset.FilePath.Data.ArrayNum = 0;
  (this->MaterialEditorPromotionTest).DefaultMaterialAsset.FilePath.Data.ArrayMax = 0;
  (this->MaterialEditorPromotionTest).DefaultDiffuseTexture.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialEditorPromotionTest).DefaultDiffuseTexture.FilePath.Data.ArrayNum = 0;
  (this->MaterialEditorPromotionTest).DefaultDiffuseTexture.FilePath.Data.ArrayMax = 0;
  (this->MaterialEditorPromotionTest).DefaultNormalTexture.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialEditorPromotionTest).DefaultNormalTexture.FilePath.Data.ArrayNum = 0;
  (this->MaterialEditorPromotionTest).DefaultNormalTexture.FilePath.Data.ArrayMax = 0;
  (this->ParticleEditorPromotionTest).DefaultParticleAsset.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParticleEditorPromotionTest).DefaultParticleAsset.FilePath.Data.ArrayNum = 0;
  (this->ParticleEditorPromotionTest).DefaultParticleAsset.FilePath.Data.ArrayMax = 0;
  (this->BlueprintEditorPromotionTest).FirstMeshPath.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BlueprintEditorPromotionTest).FirstMeshPath.FilePath.Data.ArrayNum = 0;
  (this->BlueprintEditorPromotionTest).FirstMeshPath.FilePath.Data.ArrayMax = 0;
  (this->BlueprintEditorPromotionTest).SecondMeshPath.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BlueprintEditorPromotionTest).SecondMeshPath.FilePath.Data.ArrayNum = 0;
  (this->BlueprintEditorPromotionTest).SecondMeshPath.FilePath.Data.ArrayMax = 0;
  (this->BlueprintEditorPromotionTest).DefaultParticleAsset.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BlueprintEditorPromotionTest).DefaultParticleAsset.FilePath.Data.ArrayNum = 0;
  (this->BlueprintEditorPromotionTest).DefaultParticleAsset.FilePath.Data.ArrayMax = 0;
  (this->TestLevelFolders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestLevelFolders).ArrayNum = 0;
  (this->TestLevelFolders).ArrayMax = 0;
  (this->ExternalTools).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalTools).ArrayNum = 0;
  (this->ExternalTools).ArrayMax = 0;
  (this->ImportExportTestDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportExportTestDefinitions).ArrayNum = 0;
  (this->ImportExportTestDefinitions).ArrayMax = 0;
  (this->LaunchOnSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LaunchOnSettings).ArrayNum = 0;
  (this->LaunchOnSettings).ArrayMax = 0;
  (this->DefaultScreenshotResolution).field0_0x0 = (TIntPoint<int>_u_0)0x43800000780;
  this->PIETestDuration = 5.0;
  this->DefaultInteractiveFramerate = 10.0;
  this->DefaultInteractiveFramerateWaitTime = 600.0;
  this->DefaultInteractiveFramerateDuration = 5.0;
  return this;
}

// ~UAutomationTestSettings @ 14880d170

void __thiscall UAutomationTestSettings::~UAutomationTestSettings(UAutomationTestSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAutomationTestSettings__6B_;
  DestructItems<FLaunchOnTestSettings,int>
            ((FLaunchOnTestSettings *)(this->LaunchOnSettings).AllocatorInstance.Data,
             (this->LaunchOnSettings).ArrayNum);
  pFVar1 = (this->LaunchOnSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FEditorImportExportTestDefinition,int>
            ((FEditorImportExportTestDefinition *)
             (this->ImportExportTestDefinitions).AllocatorInstance.Data,
             (this->ImportExportTestDefinitions).ArrayNum);
  pFVar1 = (this->ImportExportTestDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FExternalToolDefinition,int>
            ((FExternalToolDefinition *)(this->ExternalTools).AllocatorInstance.Data,
             (this->ExternalTools).ArrayNum);
  pFVar1 = (this->ExternalTools).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->TestLevelFolders).AllocatorInstance.Data,
             (this->TestLevelFolders).ArrayNum);
  pFVar1 = (this->TestLevelFolders).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BlueprintEditorPromotionTest).DefaultParticleAsset.FilePath.Data.AllocatorInstance
           .Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BlueprintEditorPromotionTest).SecondMeshPath.FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BlueprintEditorPromotionTest).FirstMeshPath.FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParticleEditorPromotionTest).DefaultParticleAsset.FilePath.Data.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialEditorPromotionTest).DefaultNormalTexture.FilePath.Data.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialEditorPromotionTest).DefaultDiffuseTexture.FilePath.Data.AllocatorInstance
           .Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialEditorPromotionTest).DefaultMaterialAsset.FilePath.Data.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBuildPromotionTestSettings::~FBuildPromotionTestSettings(&this->BuildPromotionTest);
  DestructItems<FString,int>
            ((FString *)(this->MapsToPIETest).AllocatorInstance.Data,(this->MapsToPIETest).ArrayNum)
  ;
  pFVar1 = (this->MapsToPIETest).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->AssetsToOpen).AllocatorInstance.Data,(this->AssetsToOpen).ArrayNum);
  pFVar1 = (this->AssetsToOpen).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FEditorMapPerformanceTestDefinition,int>
            ((FEditorMapPerformanceTestDefinition *)
             (this->EditorPerformanceTestMaps).AllocatorInstance.Data,
             (this->EditorPerformanceTestMaps).ArrayNum);
  pFVar1 = (this->EditorPerformanceTestMaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AutomationTestmap).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->EditorTestModules).AllocatorInstance.Data,
             (this->EditorTestModules).ArrayNum);
  pFVar1 = (this->EditorTestModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->EngineTestModules).AllocatorInstance.Data,
             (this->EngineTestModules).ArrayNum);
  pFVar1 = (this->EngineTestModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148840560

UClass * __cdecl UAutomationTestSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationTestSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutomationTestSettings",
               &Z_Registration_Info_UClass_UAutomationTestSettings.InnerSingleton,
               StaticRegisterNativesUAutomationTestSettings,0x358,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationTestSettings>,
               InternalVTableHelperCtorCaller<UAutomationTestSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationTestSettings.InnerSingleton;
}

// StaticRegisterNativesUAutomationTestSettings @ 14885ac20

void __cdecl UAutomationTestSettings::StaticRegisterNativesUAutomationTestSettings(void)

{
  return;
}

// __VTableCtorCaller @ 148865820

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UAutomationTestSettings::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAutomationTestSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    FBuildPromotionTestSettings::FBuildPromotionTestSettings
              ((FBuildPromotionTestSettings *)(pUVar1 + 4));
    *(undefined8 *)&pUVar1[0x10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0x10].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0x10].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0x11) = 0;
    *(undefined8 *)&pUVar1[0x11].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0x11].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0x11].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0x11].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0x12) = 0;
    *(undefined8 *)&pUVar1[0x12].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0x12].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0x12].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0x12].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0x13) = 0;
    *(undefined8 *)&pUVar1[0x13].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0x13].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0x13].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0x13].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0x14) = 0;
    *(undefined8 *)&pUVar1[0x14].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0x14].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0x14].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

