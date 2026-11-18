// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 9

// StaticClass @ 14caaf250

UClass * __cdecl UModelingComponentsEditorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelingComponentsEditorSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ModelingComponentsEditorSettings",
               &Z_Registration_Info_UClass_UModelingComponentsEditorSettings.InnerSingleton,
               StaticRegisterNativesUModelingComponentsEditorSettings,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"EditorSettings",
               InternalConstructor<UModelingComponentsEditorSettings>,
               InternalVTableHelperCtorCaller<UModelingComponentsEditorSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelingComponentsEditorSettings.InnerSingleton;
}

// UModelingComponentsEditorSettings @ 14cace0d0

UModelingComponentsEditorSettings * __thiscall
UModelingComponentsEditorSettings::UModelingComponentsEditorSettings
          (UModelingComponentsEditorSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->GridMode = SimpleGrid;
  this->_padding_ = (longlong)&___7UModelingComponentsEditorSettings__6B_;
  this->NumGridLines = 0x15;
  this->GridSpacing = 100.0;
  this->GridScale = 1.0;
  this->GridSize = 0.5;
  return this;
}

// UModelingComponentsEditorSettings @ 14cace120

UModelingComponentsEditorSettings * __thiscall
UModelingComponentsEditorSettings::UModelingComponentsEditorSettings
          (UModelingComponentsEditorSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->GridMode = SimpleGrid;
  this->_padding_ = (longlong)&___7UModelingComponentsEditorSettings__6B_;
  this->NumGridLines = 0x15;
  this->GridSpacing = 100.0;
  this->GridScale = 1.0;
  this->GridSize = 0.5;
  return this;
}

// ~UModelingComponentsEditorSettings @ 14cad2570

void __thiscall
UModelingComponentsEditorSettings::~UModelingComponentsEditorSettings
          (UModelingComponentsEditorSettings *this)

{
  this->_padding_ = (longlong)&___7UModelingComponentsEditorSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 14cb0e4e0

FName __thiscall
UModelingComponentsEditorSettings::GetCategoryName(UModelingComponentsEditorSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Plugins");
  return in_RDX;
}

// GetContainerName @ 14cb0ee30

FName __thiscall
UModelingComponentsEditorSettings::GetContainerName(UModelingComponentsEditorSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Editor");
  return in_RDX;
}

// GetPrivateStaticClass @ 14cb125f0

UClass * __cdecl UModelingComponentsEditorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelingComponentsEditorSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ModelingComponentsEditorSettings",
               &Z_Registration_Info_UClass_UModelingComponentsEditorSettings.InnerSingleton,
               StaticRegisterNativesUModelingComponentsEditorSettings,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"EditorSettings",
               InternalConstructor<UModelingComponentsEditorSettings>,
               InternalVTableHelperCtorCaller<UModelingComponentsEditorSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelingComponentsEditorSettings.InnerSingleton;
}

// GetSectionName @ 14cb137c0

FName __thiscall
UModelingComponentsEditorSettings::GetSectionName(UModelingComponentsEditorSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Modeling Mode Tools");
  return in_RDX;
}

// StaticRegisterNativesUModelingComponentsEditorSettings @ 14cb3eb30

void __cdecl
UModelingComponentsEditorSettings::StaticRegisterNativesUModelingComponentsEditorSettings(void)

{
  return;
}

