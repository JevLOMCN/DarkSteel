// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 11

// StaticClass @ 14d67f3c0

UClass * __cdecl UCameraCalibrationSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraCalibrationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CameraCalibrationSettings",
               &Z_Registration_Info_UClass_UCameraCalibrationSettings.InnerSingleton,
               StaticRegisterNativesUCameraCalibrationSettings,0x170,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UCameraCalibrationSettings>,
               InternalVTableHelperCtorCaller<UCameraCalibrationSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraCalibrationSettings.InnerSingleton;
}

// UCameraCalibrationSettings @ 14d6a9ee0

UCameraCalibrationSettings * __thiscall
UCameraCalibrationSettings::UCameraCalibrationSettings
          (UCameraCalibrationSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this_00 = &(this->StartupLensFile).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UCameraCalibrationSettings__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->StartupLensFile).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->StartupLensFile).SoftObjectPtr = 0;
  *(undefined8 *)&(this->StartupLensFile).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StartupLensFile).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->DisplacementMapResolution).field0_0x0._s_0.X = 0x100;
  (this->DisplacementMapResolution).field0_0x0._s_0.Y = 0x100;
  *(undefined8 *)&this->DefaultUndistortionDisplacementMaterials = 0;
  *(undefined8 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x20 = 0;
  this->CalibrationInputTolerance = 0.001;
  this->CheckerboardDetectionTimeout = 2.0;
  *(undefined4 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x34 = 0;
  *(undefined8 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x40 = 0;
  *(undefined4 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x48 = 0;
  *(undefined8 *)&this->DefaultDistortionDisplacementMaterials = 0;
  *(undefined8 *)&(this->DefaultDistortionDisplacementMaterials).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultDistortionDisplacementMaterials).field_0x20 = 0;
  *(undefined4 *)&(this->DefaultDistortionDisplacementMaterials).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultDistortionDisplacementMaterials).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultDistortionDisplacementMaterials).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DefaultDistortionDisplacementMaterials).field_0x34 = 0;
  *(undefined8 *)&(this->DefaultDistortionDisplacementMaterials).field_0x40 = 0;
  *(undefined4 *)&(this->DefaultDistortionDisplacementMaterials).field_0x48 = 0;
  *(undefined8 *)&this->DefaultDistortionMaterials = 0;
  *(undefined8 *)&(this->DefaultDistortionMaterials).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultDistortionMaterials).field_0x20 = 0;
  *(undefined4 *)&(this->DefaultDistortionMaterials).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultDistortionMaterials).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultDistortionMaterials).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DefaultDistortionMaterials).field_0x34 = 0;
  *(undefined8 *)&(this->DefaultDistortionMaterials).field_0x40 = 0;
  *(undefined4 *)&(this->DefaultDistortionMaterials).field_0x48 = 0;
  this->bEnableCalibrationDatasetImportExport = true;
  (this->PostEngineInitHandle).ID = 0;
  return this;
}

// UCameraCalibrationSettings @ 14d6aa020

UCameraCalibrationSettings * __thiscall
UCameraCalibrationSettings::UCameraCalibrationSettings(UCameraCalibrationSettings *this)

{
  undefined1 *this_00;
  TMap<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
  *this_01;
  TMap<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
  *this_02;
  ForAnyElementType FVar1;
  FObjectInitializer *pFVar2;
  size_t sVar3;
  TPairInitializer<TSubclassOf<ULensDistortionModelHandlerBase>_&&,TSoftObjectPtr<UMaterialInterface>_&&>
  local_res8;
  undefined1 local_98 [16];
  FSoftObjectPath local_88;
  undefined8 local_68;
  FName local_60;
  FName FStack_58;
  TArray<char8_t,TSizedDefaultAllocator<32>_> local_50;
  
  pFVar2 = FObjectInitializer::Get();
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,pFVar2);
  this_00 = &(this->StartupLensFile).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UCameraCalibrationSettings__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->StartupLensFile).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->StartupLensFile).SoftObjectPtr = 0;
  *(undefined8 *)&(this->StartupLensFile).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StartupLensFile).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->DisplacementMapResolution).field0_0x0._s_0.X = 0x100;
  this_01 = &this->DefaultDistortionDisplacementMaterials;
  (this->DisplacementMapResolution).field0_0x0._s_0.Y = 0x100;
  this_02 = &this->DefaultDistortionMaterials;
  *(undefined8 *)&this->DefaultUndistortionDisplacementMaterials = 0;
  *(undefined8 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x20 = 0;
  this->CalibrationInputTolerance = 0.001;
  this->CheckerboardDetectionTimeout = 2.0;
  *(undefined4 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x34 = 0;
  *(undefined8 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x40 = 0;
  *(undefined4 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x48 = 0;
  *(undefined8 *)&this_01->field_0x0 = 0;
  *(undefined8 *)&(this->DefaultDistortionDisplacementMaterials).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultDistortionDisplacementMaterials).field_0x20 = 0;
  *(undefined4 *)&(this->DefaultDistortionDisplacementMaterials).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultDistortionDisplacementMaterials).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultDistortionDisplacementMaterials).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DefaultDistortionDisplacementMaterials).field_0x34 = 0;
  *(undefined8 *)&(this->DefaultDistortionDisplacementMaterials).field_0x40 = 0;
  *(undefined4 *)&(this->DefaultDistortionDisplacementMaterials).field_0x48 = 0;
  *(undefined8 *)&this_02->field_0x0 = 0;
  *(undefined8 *)&(this->DefaultDistortionMaterials).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultDistortionMaterials).field_0x20 = 0;
  *(undefined4 *)&(this->DefaultDistortionMaterials).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultDistortionMaterials).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultDistortionMaterials).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DefaultDistortionMaterials).field_0x34 = 0;
  *(undefined8 *)&(this->DefaultDistortionMaterials).field_0x40 = 0;
  local_98._8_4_ = 0x6e;
  *(undefined4 *)&(this->DefaultDistortionMaterials).field_0x48 = 0;
  this->bEnableCalibrationDatasetImportExport = true;
  (this->PostEngineInitHandle).ID = 0;
  local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_88.AssetPath.PackageName.Number = 0;
  local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_88.AssetPath.AssetName.Number = 0;
  local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.SubPathString.Data.ArrayNum = 0;
  local_88.SubPathString.Data.ArrayMax = 0;
  local_98._0_8_ =
       L"/CameraCalibrationCore/Materials/M_SphericalUndistortionDisplacementMap.M_SphericalUndistortionDisplacementMap"
  ;
  FSoftObjectPath::SetPath(&local_88,(TStringView<wchar_t> *)local_98);
  FVar1.Data = local_88.SubPathString.Data.AllocatorInstance.Data;
  sVar3 = (size_t)local_88.SubPathString.Data.ArrayNum;
  local_68 = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = local_88.SubPathString.Data.ArrayNum;
  local_60 = local_88.AssetPath.PackageName;
  FStack_58 = local_88.AssetPath.AssetName;
  if (local_88.SubPathString.Data.ArrayNum == 0) {
    local_50.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_88.SubPathString.Data.ArrayNum,0,&local_50.AllocatorInstance,
               local_88.SubPathString.Data.ArrayNum,&local_50.ArrayMax);
    memcpy(local_50.AllocatorInstance.Data,FVar1.Data,sVar3);
  }
  if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
  }
  local_res8.Value =
       (TSoftObjectPtr<UMaterialInterface> *)USphericalLensDistortionModelHandler::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_res8.Value != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.Value);
  }
  local_98._0_8_ = &local_res8.Value;
  local_98._8_8_ = &local_68;
  TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TSubclassOf<ULensDistortionModelHandlerBase>_&&,TSoftObjectPtr<UMaterialInterface>_&&>_>
            ((TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
              *)&this->DefaultUndistortionDisplacementMaterials,&local_res8,(bool *)local_98);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  local_98._8_4_ = 0x6a;
  local_98._0_8_ =
       L"/CameraCalibrationCore/Materials/M_SphericalDistortionDisplacementMap.M_SphericalDistortionDisplacementMap"
  ;
  local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_88.AssetPath.PackageName.Number = 0;
  local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_88.AssetPath.AssetName.Number = 0;
  local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.SubPathString.Data.ArrayNum = 0;
  local_88.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_88,(TStringView<wchar_t> *)local_98);
  FVar1.Data = local_88.SubPathString.Data.AllocatorInstance.Data;
  sVar3 = (size_t)local_88.SubPathString.Data.ArrayNum;
  local_68 = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = local_88.SubPathString.Data.ArrayNum;
  local_60 = local_88.AssetPath.PackageName;
  FStack_58 = local_88.AssetPath.AssetName;
  if (local_88.SubPathString.Data.ArrayNum == 0) {
    local_50.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_88.SubPathString.Data.ArrayNum,0,&local_50.AllocatorInstance,
               local_88.SubPathString.Data.ArrayNum,&local_50.ArrayMax);
    memcpy(local_50.AllocatorInstance.Data,FVar1.Data,sVar3);
  }
  if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
  }
  local_res8.Value =
       (TSoftObjectPtr<UMaterialInterface> *)USphericalLensDistortionModelHandler::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_res8.Value != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.Value);
  }
  local_98._0_8_ = &local_res8.Value;
  local_98._8_8_ = &local_68;
  TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TSubclassOf<ULensDistortionModelHandlerBase>_&&,TSoftObjectPtr<UMaterialInterface>_&&>_>
            ((TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
              *)this_01,&local_res8,(bool *)local_98);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  local_98._8_4_ = 0x50;
  local_98._0_8_ =
       L"/CameraCalibrationCore/Materials/M_DistortionPostProcess.M_DistortionPostProcess";
  local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_88.AssetPath.PackageName.Number = 0;
  local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_88.AssetPath.AssetName.Number = 0;
  local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.SubPathString.Data.ArrayNum = 0;
  local_88.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_88,(TStringView<wchar_t> *)local_98);
  FVar1.Data = local_88.SubPathString.Data.AllocatorInstance.Data;
  sVar3 = (size_t)local_88.SubPathString.Data.ArrayNum;
  local_68 = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = local_88.SubPathString.Data.ArrayNum;
  local_60 = local_88.AssetPath.PackageName;
  FStack_58 = local_88.AssetPath.AssetName;
  if (local_88.SubPathString.Data.ArrayNum == 0) {
    local_50.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_88.SubPathString.Data.ArrayNum,0,&local_50.AllocatorInstance,
               local_88.SubPathString.Data.ArrayNum,&local_50.ArrayMax);
    memcpy(local_50.AllocatorInstance.Data,FVar1.Data,sVar3);
  }
  if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
  }
  local_res8.Value =
       (TSoftObjectPtr<UMaterialInterface> *)USphericalLensDistortionModelHandler::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_res8.Value != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.Value);
  }
  local_98._0_8_ = &local_res8.Value;
  local_98._8_8_ = &local_68;
  TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TSubclassOf<ULensDistortionModelHandlerBase>_&&,TSoftObjectPtr<UMaterialInterface>_&&>_>
            ((TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
              *)this_02,&local_res8,(bool *)local_98);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  local_98._8_4_ = 0x70;
  local_98._0_8_ =
       L"/CameraCalibrationCore/Materials/M_AnamorphicUndistortionDisplacementMap.M_AnamorphicUndistortionDisplacementMap"
  ;
  local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_88.AssetPath.PackageName.Number = 0;
  local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_88.AssetPath.AssetName.Number = 0;
  local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.SubPathString.Data.ArrayNum = 0;
  local_88.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_88,(TStringView<wchar_t> *)local_98);
  FVar1.Data = local_88.SubPathString.Data.AllocatorInstance.Data;
  sVar3 = (size_t)local_88.SubPathString.Data.ArrayNum;
  local_68 = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = local_88.SubPathString.Data.ArrayNum;
  local_60 = local_88.AssetPath.PackageName;
  FStack_58 = local_88.AssetPath.AssetName;
  if (local_88.SubPathString.Data.ArrayNum == 0) {
    local_50.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_88.SubPathString.Data.ArrayNum,0,&local_50.AllocatorInstance,
               local_88.SubPathString.Data.ArrayNum,&local_50.ArrayMax);
    memcpy(local_50.AllocatorInstance.Data,FVar1.Data,sVar3);
  }
  if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
  }
  local_res8.Value =
       (TSoftObjectPtr<UMaterialInterface> *)UAnamorphicLensDistortionModelHandler::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_res8.Value != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.Value);
  }
  local_98._0_8_ = &local_res8.Value;
  local_98._8_8_ = &local_68;
  TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TSubclassOf<ULensDistortionModelHandlerBase>_&&,TSoftObjectPtr<UMaterialInterface>_&&>_>
            ((TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
              *)&this->DefaultUndistortionDisplacementMaterials,&local_res8,(bool *)local_98);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  local_98._8_4_ = 0x6c;
  local_98._0_8_ =
       L"/CameraCalibrationCore/Materials/M_AnamorphicDistortionDisplacementMap.M_AnamorphicDistortionDisplacementMap"
  ;
  local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_88.AssetPath.PackageName.Number = 0;
  local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_88.AssetPath.AssetName.Number = 0;
  local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.SubPathString.Data.ArrayNum = 0;
  local_88.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_88,(TStringView<wchar_t> *)local_98);
  FVar1.Data = local_88.SubPathString.Data.AllocatorInstance.Data;
  sVar3 = (size_t)local_88.SubPathString.Data.ArrayNum;
  local_68 = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = local_88.SubPathString.Data.ArrayNum;
  local_60 = local_88.AssetPath.PackageName;
  FStack_58 = local_88.AssetPath.AssetName;
  if (local_88.SubPathString.Data.ArrayNum == 0) {
    local_50.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_88.SubPathString.Data.ArrayNum,0,&local_50.AllocatorInstance,
               local_88.SubPathString.Data.ArrayNum,&local_50.ArrayMax);
    memcpy(local_50.AllocatorInstance.Data,FVar1.Data,sVar3);
  }
  if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
  }
  local_res8.Value =
       (TSoftObjectPtr<UMaterialInterface> *)UAnamorphicLensDistortionModelHandler::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_res8.Value != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.Value);
  }
  local_98._0_8_ = &local_res8.Value;
  local_98._8_8_ = &local_68;
  TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TSubclassOf<ULensDistortionModelHandlerBase>_&&,TSoftObjectPtr<UMaterialInterface>_&&>_>
            ((TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
              *)this_01,&local_res8,(bool *)local_98);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  local_98._8_4_ = 0x50;
  local_98._0_8_ =
       L"/CameraCalibrationCore/Materials/M_DistortionPostProcess.M_DistortionPostProcess";
  local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_88.AssetPath.PackageName.Number = 0;
  local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_88.AssetPath.AssetName.Number = 0;
  local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.SubPathString.Data.ArrayNum = 0;
  local_88.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_88,(TStringView<wchar_t> *)local_98);
  FVar1.Data = local_88.SubPathString.Data.AllocatorInstance.Data;
  sVar3 = (size_t)local_88.SubPathString.Data.ArrayNum;
  local_68 = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = local_88.SubPathString.Data.ArrayNum;
  local_60 = local_88.AssetPath.PackageName;
  FStack_58 = local_88.AssetPath.AssetName;
  if (local_88.SubPathString.Data.ArrayNum == 0) {
    local_50.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_88.SubPathString.Data.ArrayNum,0,&local_50.AllocatorInstance,
               local_88.SubPathString.Data.ArrayNum,&local_50.ArrayMax);
    memcpy(local_50.AllocatorInstance.Data,FVar1.Data,sVar3);
  }
  if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
  }
  local_res8.Value =
       (TSoftObjectPtr<UMaterialInterface> *)UAnamorphicLensDistortionModelHandler::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_res8.Value != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.Value);
  }
  local_98._0_8_ = &local_res8.Value;
  local_98._8_8_ = &local_68;
  TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TSubclassOf<ULensDistortionModelHandlerBase>_&&,TSoftObjectPtr<UMaterialInterface>_&&>_>
            ((TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
              *)this_02,&local_res8,(bool *)local_98);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  local_98._8_4_ = 0x78;
  local_98._0_8_ =
       L"/CameraCalibrationCore/Materials/M_BrownConradyUDUndistortionDisplacementMap.M_BrownConradyUDUndistortionDisplacementMap"
  ;
  local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_88.AssetPath.PackageName.Number = 0;
  local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_88.AssetPath.AssetName.Number = 0;
  local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.SubPathString.Data.ArrayNum = 0;
  local_88.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_88,(TStringView<wchar_t> *)local_98);
  FVar1.Data = local_88.SubPathString.Data.AllocatorInstance.Data;
  sVar3 = (size_t)local_88.SubPathString.Data.ArrayNum;
  local_68 = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = local_88.SubPathString.Data.ArrayNum;
  local_60 = local_88.AssetPath.PackageName;
  FStack_58 = local_88.AssetPath.AssetName;
  if (local_88.SubPathString.Data.ArrayNum == 0) {
    local_50.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_88.SubPathString.Data.ArrayNum,0,&local_50.AllocatorInstance,
               local_88.SubPathString.Data.ArrayNum,&local_50.ArrayMax);
    memcpy(local_50.AllocatorInstance.Data,FVar1.Data,sVar3);
  }
  if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
  }
  local_res8.Value =
       (TSoftObjectPtr<UMaterialInterface> *)
       UBrownConradyUDLensDistortionModelHandler::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_res8.Value != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.Value);
  }
  local_98._0_8_ = &local_res8.Value;
  local_98._8_8_ = &local_68;
  TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TSubclassOf<ULensDistortionModelHandlerBase>_&&,TSoftObjectPtr<UMaterialInterface>_&&>_>
            ((TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
              *)&this->DefaultUndistortionDisplacementMaterials,&local_res8,(bool *)local_98);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  local_98._8_4_ = 0x74;
  local_98._0_8_ =
       L"/CameraCalibrationCore/Materials/M_BrownConradyUDDistortionDisplacementMap.M_BrownConradyUDDistortionDisplacementMap"
  ;
  local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_88.AssetPath.PackageName.Number = 0;
  local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_88.AssetPath.AssetName.Number = 0;
  local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.SubPathString.Data.ArrayNum = 0;
  local_88.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_88,(TStringView<wchar_t> *)local_98);
  local_60 = local_88.AssetPath.PackageName;
  FStack_58 = local_88.AssetPath.AssetName;
  local_68 = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<char8_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<char8_t,int>
            (&local_50,(uchar *)local_88.SubPathString.Data.AllocatorInstance.Data,
             local_88.SubPathString.Data.ArrayNum,0);
  if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
  }
  local_res8.Value =
       (TSoftObjectPtr<UMaterialInterface> *)
       UBrownConradyUDLensDistortionModelHandler::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_res8.Value != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.Value);
  }
  local_98._0_8_ = &local_res8.Value;
  local_98._8_8_ = &local_68;
  TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TSubclassOf<ULensDistortionModelHandlerBase>_&&,TSoftObjectPtr<UMaterialInterface>_&&>_>
            ((TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
              *)this_01,&local_res8,(bool *)local_98);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  local_98._8_4_ = 0x50;
  local_98._0_8_ =
       L"/CameraCalibrationCore/Materials/M_DistortionPostProcess.M_DistortionPostProcess";
  local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_88.AssetPath.PackageName.Number = 0;
  local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_88.AssetPath.AssetName.Number = 0;
  local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.SubPathString.Data.ArrayNum = 0;
  local_88.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_88,(TStringView<wchar_t> *)local_98);
  local_60 = local_88.AssetPath.PackageName;
  FStack_58 = local_88.AssetPath.AssetName;
  local_68 = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<char8_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<char8_t,int>
            (&local_50,(uchar *)local_88.SubPathString.Data.AllocatorInstance.Data,
             local_88.SubPathString.Data.ArrayNum,0);
  if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
  }
  local_res8.Value =
       (TSoftObjectPtr<UMaterialInterface> *)
       UBrownConradyUDLensDistortionModelHandler::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_res8.Value != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.Value);
  }
  local_98._0_8_ = &local_res8.Value;
  local_98._8_8_ = &local_68;
  TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TSubclassOf<ULensDistortionModelHandlerBase>_&&,TSoftObjectPtr<UMaterialInterface>_&&>_>
            ((TSet<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
              *)this_02,&local_res8,(bool *)local_98);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return this;
}

// ~UCameraCalibrationSettings @ 14d6acc00

void __thiscall
UCameraCalibrationSettings::~UCameraCalibrationSettings(UCameraCalibrationSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UCameraCalibrationSettings__6B_;
  *(undefined4 *)&(this->DefaultDistortionMaterials).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DefaultDistortionMaterials).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DefaultDistortionMaterials);
  *(undefined4 *)&(this->DefaultDistortionDisplacementMaterials).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DefaultDistortionDisplacementMaterials).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DefaultDistortionDisplacementMaterials);
  *(undefined4 *)&(this->DefaultUndistortionDisplacementMaterials).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DefaultUndistortionDisplacementMaterials).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DefaultUndistortionDisplacementMaterials);
  pvVar1 = *(void **)&(this->StartupLensFile).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 14d6d2a00

FName __thiscall UCameraCalibrationSettings::GetCategoryName(UCameraCalibrationSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Plugins");
  return in_RDX;
}

// GetDefaultDistortionDisplacementMaterial @ 14d6d3620

UMaterialInterface * __thiscall
UCameraCalibrationSettings::GetDefaultDistortionDisplacementMaterial
          (UCameraCalibrationSettings *this,TSubclassOf<ULensDistortionModelHandlerBase> *param_1)

{
  UClass *pUVar1;
  TSoftObjectPtr<UMaterialInterface> *this_00;
  UMaterialInterface *pUVar2;
  UClass *local_res8;
  
  pUVar1 = (param_1->Class).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this_00 = TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
            ::Find((TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
                    *)&this->DefaultDistortionDisplacementMaterials,
                   (TSubclassOf<ULensDistortionModelHandlerBase_const_>)&local_res8);
  if (this_00 == (TSoftObjectPtr<UMaterialInterface> *)0x0) {
    return (UMaterialInterface *)0x0;
  }
  pUVar2 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous(this_00);
  return pUVar2;
}

// GetDefaultDistortionMaterial @ 14d6d36a0

UMaterialInterface * __thiscall
UCameraCalibrationSettings::GetDefaultDistortionMaterial
          (UCameraCalibrationSettings *this,TSubclassOf<ULensDistortionModelHandlerBase> *param_1)

{
  UClass *pUVar1;
  TSoftObjectPtr<UMaterialInterface> *this_00;
  UMaterialInterface *pUVar2;
  UClass *local_res8;
  
  pUVar1 = (param_1->Class).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this_00 = TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
            ::Find((TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
                    *)&this->DefaultDistortionMaterials,
                   (TSubclassOf<ULensDistortionModelHandlerBase_const_>)&local_res8);
  if (this_00 == (TSoftObjectPtr<UMaterialInterface> *)0x0) {
    return (UMaterialInterface *)0x0;
  }
  pUVar2 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous(this_00);
  return pUVar2;
}

// GetDefaultUndistortionDisplacementMaterial @ 14d6d37c0

UMaterialInterface * __thiscall
UCameraCalibrationSettings::GetDefaultUndistortionDisplacementMaterial
          (UCameraCalibrationSettings *this,TSubclassOf<ULensDistortionModelHandlerBase> *param_1)

{
  UClass *pUVar1;
  TSoftObjectPtr<UMaterialInterface> *this_00;
  UMaterialInterface *pUVar2;
  UClass *local_res8;
  
  pUVar1 = (param_1->Class).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this_00 = TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
            ::Find((TMapBase<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensDistortionModelHandlerBase>,TSoftObjectPtr<UMaterialInterface>,0>_>
                    *)&this->DefaultUndistortionDisplacementMaterials,
                   (TSubclassOf<ULensDistortionModelHandlerBase_const_>)&local_res8);
  if (this_00 == (TSoftObjectPtr<UMaterialInterface> *)0x0) {
    return (UMaterialInterface *)0x0;
  }
  pUVar2 = TSoftObjectPtr<UMaterialInterface>::LoadSynchronous(this_00);
  return pUVar2;
}

// GetPrivateStaticClass @ 14d6d8100

UClass * __cdecl UCameraCalibrationSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraCalibrationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CameraCalibrationSettings",
               &Z_Registration_Info_UClass_UCameraCalibrationSettings.InnerSingleton,
               StaticRegisterNativesUCameraCalibrationSettings,0x170,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UCameraCalibrationSettings>,
               InternalVTableHelperCtorCaller<UCameraCalibrationSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraCalibrationSettings.InnerSingleton;
}

// GetStartupLensFile @ 14d6d8e70

ULensFile * __thiscall
UCameraCalibrationSettings::GetStartupLensFile(UCameraCalibrationSettings *this)

{
  int iVar1;
  ULensFile *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (ULensFile *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->StartupLensFile);
  if (pUVar2 == (ULensFile *)0x0) {
    if (*(longlong *)&(this->StartupLensFile).SoftObjectPtr.field_0x8 == 0) {
      return (ULensFile *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->StartupLensFile).SoftObjectPtr.field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar2 = (ULensFile *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->StartupLensFile);
  }
  if (pUVar2 != (ULensFile *)0x0) {
    pUVar3 = ULensFile::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (ULensFile *)0x0;
}

// StaticRegisterNativesUCameraCalibrationSettings @ 14d6f0120

void __cdecl UCameraCalibrationSettings::StaticRegisterNativesUCameraCalibrationSettings(void)

{
  return;
}

