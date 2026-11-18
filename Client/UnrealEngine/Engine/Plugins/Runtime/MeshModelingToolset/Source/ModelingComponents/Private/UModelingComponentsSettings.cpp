// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 10

// StaticClass @ 14caae860

UClass * __cdecl UModelingComponentsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelingComponentsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ModelingComponentsSettings",
               &Z_Registration_Info_UClass_UModelingComponentsSettings.InnerSingleton,
               StaticRegisterNativesUModelingComponentsSettings,0x40,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UModelingComponentsSettings>,
               InternalVTableHelperCtorCaller<UModelingComponentsSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelingComponentsSettings.InnerSingleton;
}

// UModelingComponentsSettings @ 14cace170

UModelingComponentsSettings * __thiscall
UModelingComponentsSettings::UModelingComponentsSettings
          (UModelingComponentsSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bEnableRayTracingWhileEditing = false;
  this->bEnableRayTracing = false;
  this->bGenerateLightmapUVs = false;
  this->bEnableCollision = true;
  this->_padding_ = (longlong)&___7UModelingComponentsSettings__6B_;
  (this->CollisionMode).Value = '\x01';
  return this;
}

// UModelingComponentsSettings @ 14cace1b0

UModelingComponentsSettings * __thiscall
UModelingComponentsSettings::UModelingComponentsSettings
          (UModelingComponentsSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bEnableRayTracingWhileEditing = false;
  this->bEnableRayTracing = false;
  this->bGenerateLightmapUVs = false;
  this->bEnableCollision = true;
  this->_padding_ = (longlong)&___7UModelingComponentsSettings__6B_;
  (this->CollisionMode).Value = '\x01';
  return this;
}

// ~UModelingComponentsSettings @ 14cad2590

void __thiscall
UModelingComponentsSettings::~UModelingComponentsSettings(UModelingComponentsSettings *this)

{
  this->_padding_ = (longlong)&___7UModelingComponentsSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// ApplyDefaultsToCreateMeshObjectParams @ 14caeb3e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UModelingComponentsSettings::ApplyDefaultsToCreateMeshObjectParams(FCreateMeshObjectParams *param_1)

{
  UObject *pUVar1;
  UClass *this;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UObject *)0x0) {
    param_1->bEnableCollision = (bool)pUVar1[1].field_0x13;
    (param_1->CollisionMode).Value = pUVar1[1].field_0x14;
    param_1->bGenerateLightmapUVs = (bool)pUVar1[1].field_0x12;
    param_1->bEnableRaytracingSupport = (bool)pUVar1[1].field_0x11;
  }
  return;
}

// GetCategoryName @ 14cb0e510

FName __thiscall UModelingComponentsSettings::GetCategoryName(UModelingComponentsSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Plugins");
  return in_RDX;
}

// GetContainerName @ 14cb0ee60

FName __thiscall UModelingComponentsSettings::GetContainerName(UModelingComponentsSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Project");
  return in_RDX;
}

// GetPrivateStaticClass @ 14cb126b0

UClass * __cdecl UModelingComponentsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelingComponentsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ModelingComponentsSettings",
               &Z_Registration_Info_UClass_UModelingComponentsSettings.InnerSingleton,
               StaticRegisterNativesUModelingComponentsSettings,0x40,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UModelingComponentsSettings>,
               InternalVTableHelperCtorCaller<UModelingComponentsSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelingComponentsSettings.InnerSingleton;
}

// GetSectionName @ 14cb137f0

FName __thiscall UModelingComponentsSettings::GetSectionName(UModelingComponentsSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Modeling Mode Tools");
  return in_RDX;
}

// StaticRegisterNativesUModelingComponentsSettings @ 14cb3eb40

void __cdecl UModelingComponentsSettings::StaticRegisterNativesUModelingComponentsSettings(void)

{
  return;
}

