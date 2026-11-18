// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 9

// StaticClass @ 146cfa180

UClass * __cdecl UDrawPrimitiveDebuggerUserSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawPrimitiveDebuggerUserSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DrawPrimitiveDebugger",L"DrawPrimitiveDebuggerUserSettings",
               &Z_Registration_Info_UClass_UDrawPrimitiveDebuggerUserSettings.InnerSingleton,
               StaticRegisterNativesUDrawPrimitiveDebuggerUserSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UDrawPrimitiveDebuggerUserSettings>,
               InternalVTableHelperCtorCaller<UDrawPrimitiveDebuggerUserSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawPrimitiveDebuggerUserSettings.InnerSingleton;
}

// UDrawPrimitiveDebuggerUserSettings @ 146d03a40

UDrawPrimitiveDebuggerUserSettings * __thiscall
UDrawPrimitiveDebuggerUserSettings::UDrawPrimitiveDebuggerUserSettings
          (UDrawPrimitiveDebuggerUserSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->FontSize = 10;
  this->_padding_ = (longlong)&___7UDrawPrimitiveDebuggerUserSettings__6B_;
  return this;
}

// UDrawPrimitiveDebuggerUserSettings @ 146d03a70

UDrawPrimitiveDebuggerUserSettings * __thiscall
UDrawPrimitiveDebuggerUserSettings::UDrawPrimitiveDebuggerUserSettings
          (UDrawPrimitiveDebuggerUserSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->FontSize = 10;
  this->_padding_ = (longlong)&___7UDrawPrimitiveDebuggerUserSettings__6B_;
  return this;
}

// ~UDrawPrimitiveDebuggerUserSettings @ 146d04c90

void __thiscall
UDrawPrimitiveDebuggerUserSettings::~UDrawPrimitiveDebuggerUserSettings
          (UDrawPrimitiveDebuggerUserSettings *this)

{
  this->_padding_ = (longlong)&___7UDrawPrimitiveDebuggerUserSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 146d1e020

FName __thiscall
UDrawPrimitiveDebuggerUserSettings::GetCategoryName(UDrawPrimitiveDebuggerUserSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Advanced");
  return in_RDX;
}

// GetFontSize @ 146d1e400

int __cdecl UDrawPrimitiveDebuggerUserSettings::GetFontSize(void)

{
  UClass *this;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return *(int *)&(this->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10;
  }
  return *(int *)&(this->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10;
}

// GetPrivateStaticClass @ 146d1f4d0

UClass * __cdecl UDrawPrimitiveDebuggerUserSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawPrimitiveDebuggerUserSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DrawPrimitiveDebugger",L"DrawPrimitiveDebuggerUserSettings",
               &Z_Registration_Info_UClass_UDrawPrimitiveDebuggerUserSettings.InnerSingleton,
               StaticRegisterNativesUDrawPrimitiveDebuggerUserSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UDrawPrimitiveDebuggerUserSettings>,
               InternalVTableHelperCtorCaller<UDrawPrimitiveDebuggerUserSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawPrimitiveDebuggerUserSettings.InnerSingleton;
}

// SetFontSize @ 146d32360

void __cdecl UDrawPrimitiveDebuggerUserSettings::SetFontSize(int param_1)

{
  UObject *this;
  int iVar1;
  UClass *this_00;
  int iVar2;
  ForAnyElementType FVar3;
  FString local_28;
  FString local_18;
  
  this_00 = StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  this = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  iVar2 = 100;
  if (param_1 < 100) {
    iVar2 = param_1;
  }
  iVar1 = 1;
  if (1 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)&this[1].field_0x10 = iVar1;
  UObject::GetProjectUserConfigFilename(this,&local_28);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,(wchar_t *)FVar3.Data);
  FConfigCacheIni::SetInt
            (GConfig,L"/Script/DrawPrimitiveDebugger.DrawPrimitiveDebuggerUserSettings",L"FontSize",
             *(int *)&this[1].field_0x10,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"");
  FConfigCacheIni::Flush(GConfig,false,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUDrawPrimitiveDebuggerUserSettings @ 146d335b0

void __cdecl
UDrawPrimitiveDebuggerUserSettings::StaticRegisterNativesUDrawPrimitiveDebuggerUserSettings(void)

{
  return;
}

