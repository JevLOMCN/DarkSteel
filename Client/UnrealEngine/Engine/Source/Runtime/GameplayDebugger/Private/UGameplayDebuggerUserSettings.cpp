// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 9

// StaticClass @ 146d39b50

UClass * __cdecl UGameplayDebuggerUserSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayDebuggerUserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerUserSettings",
               &Z_Registration_Info_UClass_UGameplayDebuggerUserSettings.InnerSingleton,
               StaticRegisterNativesUGameplayDebuggerUserSettings,0xa0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGameplayDebuggerUserSettings>,
               InternalVTableHelperCtorCaller<UGameplayDebuggerUserSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayDebuggerUserSettings.InnerSingleton;
}

// UGameplayDebuggerUserSettings @ 146d40cd0

UGameplayDebuggerUserSettings * __thiscall
UGameplayDebuggerUserSettings::UGameplayDebuggerUserSettings
          (UGameplayDebuggerUserSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->MaxViewDistance = 25000.0;
  this->_padding_ = (longlong)&___7UGameplayDebuggerUserSettings__6B_;
  *(undefined8 *)&(this->EnabledCategories).Elements = 0;
  *(undefined8 *)&(this->EnabledCategories).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EnabledCategories).Elements.field_0x20 = 0;
  this->MaxViewAngle = 45.0;
  *(undefined4 *)&(this->EnabledCategories).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EnabledCategories).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EnabledCategories).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->EnabledCategories).Elements.field_0x30 = 0xffffffff;
  (this->EnabledCategories).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EnabledCategories).HashSize = 0;
  this->FontSize = 10;
  return this;
}

// UGameplayDebuggerUserSettings @ 146d40d40

UGameplayDebuggerUserSettings * __thiscall
UGameplayDebuggerUserSettings::UGameplayDebuggerUserSettings
          (UGameplayDebuggerUserSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->MaxViewDistance = 25000.0;
  this->_padding_ = (longlong)&___7UGameplayDebuggerUserSettings__6B_;
  *(undefined8 *)&(this->EnabledCategories).Elements = 0;
  *(undefined8 *)&(this->EnabledCategories).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EnabledCategories).Elements.field_0x20 = 0;
  this->MaxViewAngle = 45.0;
  *(undefined4 *)&(this->EnabledCategories).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EnabledCategories).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EnabledCategories).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->EnabledCategories).Elements.field_0x30 = 0xffffffff;
  (this->EnabledCategories).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EnabledCategories).HashSize = 0;
  this->FontSize = 10;
  return this;
}

// ~UGameplayDebuggerUserSettings @ 146d417d0

void __thiscall
UGameplayDebuggerUserSettings::~UGameplayDebuggerUserSettings(UGameplayDebuggerUserSettings *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7UGameplayDebuggerUserSettings__6B_;
  (this->EnabledCategories).HashSize = 0;
  FVar1 = (this->EnabledCategories).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EnabledCategories).Elements);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 146d4c030

FName __thiscall UGameplayDebuggerUserSettings::GetCategoryName(UGameplayDebuggerUserSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Advanced");
  return in_RDX;
}

// GetFontSize @ 146d4c730

int __cdecl UGameplayDebuggerUserSettings::GetFontSize(void)

{
  UClass *this;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return *(int *)&(this->ClassDefaultObject).field0_0x0.DebugPtr[3].field_0x20;
  }
  return *(int *)&(this->ClassDefaultObject).field0_0x0.DebugPtr[3].field_0x20;
}

// GetPrivateStaticClass @ 146d4daa0

UClass * __cdecl UGameplayDebuggerUserSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayDebuggerUserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerUserSettings",
               &Z_Registration_Info_UClass_UGameplayDebuggerUserSettings.InnerSingleton,
               StaticRegisterNativesUGameplayDebuggerUserSettings,0xa0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGameplayDebuggerUserSettings>,
               InternalVTableHelperCtorCaller<UGameplayDebuggerUserSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayDebuggerUserSettings.InnerSingleton;
}

// SetFontSize @ 146d5bf00

void __cdecl UGameplayDebuggerUserSettings::SetFontSize(int param_1)

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
  *(int *)&this[3].field_0x20 = iVar1;
  UObject::GetProjectUserConfigFilename(this,&local_28);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,(wchar_t *)FVar3.Data);
  FConfigCacheIni::SetInt
            (GConfig,L"/Script/GameplayDebugger.GameplayDebuggerUserSettings",L"FontSize",
             *(int *)&this[3].field_0x20,&local_18);
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

// StaticRegisterNativesUGameplayDebuggerUserSettings @ 146d5c5f0

void __cdecl UGameplayDebuggerUserSettings::StaticRegisterNativesUGameplayDebuggerUserSettings(void)

{
  return;
}

