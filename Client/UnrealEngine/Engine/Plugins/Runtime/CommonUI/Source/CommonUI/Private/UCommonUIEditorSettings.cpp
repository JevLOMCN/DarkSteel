// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 6

// StaticClass @ 14a786f70

UClass * __cdecl UCommonUIEditorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUIEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUIEditorSettings",
               &Z_Registration_Info_UClass_UCommonUIEditorSettings.InnerSingleton,
               StaticRegisterNativesUCommonUIEditorSettings,0xa8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Editor",
               InternalConstructor<UCommonUIEditorSettings>,
               InternalVTableHelperCtorCaller<UCommonUIEditorSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUIEditorSettings.InnerSingleton;
}

// UCommonUIEditorSettings @ 14a7af4d0

UCommonUIEditorSettings * __thiscall
UCommonUIEditorSettings::UCommonUIEditorSettings
          (UCommonUIEditorSettings *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  puVar1 = &(this->TemplateTextStyle).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UCommonUIEditorSettings__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TemplateTextStyle).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TemplateTextStyle).SoftObjectPtr = 0;
  *(undefined8 *)&(this->TemplateTextStyle).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TemplateTextStyle).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TemplateButtonStyle).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TemplateButtonStyle).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TemplateButtonStyle).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TemplateButtonStyle).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TemplateButtonStyle).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TemplateBorderStyle).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TemplateBorderStyle).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TemplateBorderStyle).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TemplateBorderStyle).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TemplateBorderStyle).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  return this;
}

// UCommonUIEditorSettings @ 14a7af570

UCommonUIEditorSettings * __thiscall
UCommonUIEditorSettings::UCommonUIEditorSettings
          (UCommonUIEditorSettings *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  puVar1 = &(this->TemplateTextStyle).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UCommonUIEditorSettings__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TemplateTextStyle).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TemplateTextStyle).SoftObjectPtr = 0;
  *(undefined8 *)&(this->TemplateTextStyle).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TemplateTextStyle).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TemplateButtonStyle).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TemplateButtonStyle).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TemplateButtonStyle).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TemplateButtonStyle).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TemplateButtonStyle).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TemplateBorderStyle).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TemplateBorderStyle).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TemplateBorderStyle).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TemplateBorderStyle).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TemplateBorderStyle).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  this->bDefaultDataLoaded = false;
  return this;
}

// ~UCommonUIEditorSettings @ 14a7b37b0

void __thiscall UCommonUIEditorSettings::~UCommonUIEditorSettings(UCommonUIEditorSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UCommonUIEditorSettings__6B_;
  pvVar1 = *(void **)&(this->TemplateBorderStyle).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->TemplateButtonStyle).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->TemplateTextStyle).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e6620

UClass * __cdecl UCommonUIEditorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUIEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUIEditorSettings",
               &Z_Registration_Info_UClass_UCommonUIEditorSettings.InnerSingleton,
               StaticRegisterNativesUCommonUIEditorSettings,0xa8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Editor",
               InternalConstructor<UCommonUIEditorSettings>,
               InternalVTableHelperCtorCaller<UCommonUIEditorSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUIEditorSettings.InnerSingleton;
}

// StaticRegisterNativesUCommonUIEditorSettings @ 14a81e900

void __cdecl UCommonUIEditorSettings::StaticRegisterNativesUCommonUIEditorSettings(void)

{
  return;
}

