// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 6

// StaticClass @ 14e4cb300

UClass * __cdecl UInterchangeProjectSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeProjectSettings",
               &Z_Registration_Info_UClass_UInterchangeProjectSettings.InnerSingleton,
               StaticRegisterNativesUInterchangeProjectSettings,0x280,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeProjectSettings>,
               InternalVTableHelperCtorCaller<UInterchangeProjectSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeProjectSettings.InnerSingleton;
}

// UInterchangeProjectSettings @ 14e4d8e20

UInterchangeProjectSettings * __thiscall
UInterchangeProjectSettings::UInterchangeProjectSettings
          (UInterchangeProjectSettings *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeProjectSettings__6B_;
  FInterchangeContentImportSettings::FInterchangeContentImportSettings(&this->ContentImportSettings)
  ;
  FInterchangeImportSettings::FInterchangeImportSettings
            ((FInterchangeImportSettings *)&this->SceneImportSettings);
  puVar1 = &(this->FilePickerClass).SoftObjectPtr.field_0x18;
  (this->SceneImportSettings).PerTranslatorDialogOverride.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SceneImportSettings).PerTranslatorDialogOverride.ArrayNum = 0;
  (this->SceneImportSettings).PerTranslatorDialogOverride.ArrayMax = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->FilePickerClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->FilePickerClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->FilePickerClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->FilePickerClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->GenericPipelineClass).SoftObjectPtr.field_0x18;
  this->bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing = true;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->GenericPipelineClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->GenericPipelineClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->GenericPipelineClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->GenericPipelineClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->ConverterDefaultPipeline).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ConverterDefaultPipeline).AssetPath.PackageName.Number = 0;
  (this->ConverterDefaultPipeline).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ConverterDefaultPipeline).AssetPath.AssetName.Number = 0;
  (this->ConverterDefaultPipeline).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConverterDefaultPipeline).SubPathString.Data.ArrayNum = 0;
  (this->ConverterDefaultPipeline).SubPathString.Data.ArrayMax = 0;
  (this->InterchangeGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterchangeGroups).ArrayNum = 0;
  (this->InterchangeGroups).ArrayMax = 0;
  return this;
}

// UInterchangeProjectSettings @ 14e4d8f10

UInterchangeProjectSettings * __thiscall
UInterchangeProjectSettings::UInterchangeProjectSettings
          (UInterchangeProjectSettings *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeProjectSettings__6B_;
  FInterchangeContentImportSettings::FInterchangeContentImportSettings(&this->ContentImportSettings)
  ;
  FInterchangeImportSettings::FInterchangeImportSettings
            ((FInterchangeImportSettings *)&this->SceneImportSettings);
  puVar1 = &(this->FilePickerClass).SoftObjectPtr.field_0x18;
  (this->SceneImportSettings).PerTranslatorDialogOverride.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SceneImportSettings).PerTranslatorDialogOverride.ArrayNum = 0;
  (this->SceneImportSettings).PerTranslatorDialogOverride.ArrayMax = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->FilePickerClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->FilePickerClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->FilePickerClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->FilePickerClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->GenericPipelineClass).SoftObjectPtr.field_0x18;
  this->bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing = true;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->GenericPipelineClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->GenericPipelineClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->GenericPipelineClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->GenericPipelineClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->ConverterDefaultPipeline).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ConverterDefaultPipeline).AssetPath.PackageName.Number = 0;
  (this->ConverterDefaultPipeline).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ConverterDefaultPipeline).AssetPath.AssetName.Number = 0;
  (this->ConverterDefaultPipeline).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConverterDefaultPipeline).SubPathString.Data.ArrayNum = 0;
  (this->ConverterDefaultPipeline).SubPathString.Data.ArrayMax = 0;
  (this->InterchangeGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterchangeGroups).ArrayNum = 0;
  (this->InterchangeGroups).ArrayMax = 0;
  return this;
}

// ~UInterchangeProjectSettings @ 14e4db110

void __thiscall
UInterchangeProjectSettings::~UInterchangeProjectSettings(UInterchangeProjectSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInterchangeProjectSettings__6B_;
  DestructItems<FInterchangeGroup,int>
            ((FInterchangeGroup *)(this->InterchangeGroups).AllocatorInstance.Data,
             (this->InterchangeGroups).ArrayNum);
  pFVar1 = (this->InterchangeGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConverterDefaultPipeline).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->GenericPipelineClass).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->FilePickerClass).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FInterchangePerTranslatorDialogOverride,int>
            ((FInterchangePerTranslatorDialogOverride *)
             (this->SceneImportSettings).PerTranslatorDialogOverride.AllocatorInstance.Data,
             (this->SceneImportSettings).PerTranslatorDialogOverride.ArrayNum);
  pFVar1 = (this->SceneImportSettings).PerTranslatorDialogOverride.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->SceneImportSettings)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->SceneImportSettings)._padding_ = 0;
  pvVar2 = (void *)(this->SceneImportSettings)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SceneImportSettings);
  FInterchangeContentImportSettings::~FInterchangeContentImportSettings
            (&this->ContentImportSettings);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14e4f81e0

UClass * __cdecl UInterchangeProjectSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeProjectSettings",
               &Z_Registration_Info_UClass_UInterchangeProjectSettings.InnerSingleton,
               StaticRegisterNativesUInterchangeProjectSettings,0x280,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeProjectSettings>,
               InternalVTableHelperCtorCaller<UInterchangeProjectSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeProjectSettings.InnerSingleton;
}

// StaticRegisterNativesUInterchangeProjectSettings @ 14e50aba0

void __cdecl UInterchangeProjectSettings::StaticRegisterNativesUInterchangeProjectSettings(void)

{
  return;
}

