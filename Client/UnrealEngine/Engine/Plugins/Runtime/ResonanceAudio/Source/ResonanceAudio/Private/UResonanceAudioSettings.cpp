// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 6

// StaticClass @ 14f041690

UClass * __cdecl UResonanceAudioSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioSettings",
               &Z_Registration_Info_UClass_UResonanceAudioSettings.InnerSingleton,
               StaticRegisterNativesUResonanceAudioSettings,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UResonanceAudioSettings>,
               InternalVTableHelperCtorCaller<UResonanceAudioSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UResonanceAudioSettings.InnerSingleton;
}

// UResonanceAudioSettings @ 14f044330

UResonanceAudioSettings * __thiscall
UResonanceAudioSettings::UResonanceAudioSettings
          (UResonanceAudioSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UResonanceAudioSettings__6B_;
  (this->OutputSubmix).AssetPath.PackageName.ComparisonIndex = 0;
  (this->OutputSubmix).AssetPath.PackageName.Number = 0;
  (this->OutputSubmix).AssetPath.AssetName.ComparisonIndex = 0;
  (this->OutputSubmix).AssetPath.AssetName.Number = 0;
  (this->OutputSubmix).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputSubmix).SubPathString.Data.ArrayNum = 0;
  (this->OutputSubmix).SubPathString.Data.ArrayMax = 0;
  (this->GlobalReverbPreset).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GlobalReverbPreset).AssetPath.PackageName.Number = 0;
  (this->GlobalReverbPreset).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GlobalReverbPreset).AssetPath.AssetName.Number = 0;
  (this->GlobalReverbPreset).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GlobalReverbPreset).SubPathString.Data.ArrayNum = 0;
  (this->GlobalReverbPreset).SubPathString.Data.ArrayMax = 0;
  (this->GlobalSourcePreset).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GlobalSourcePreset).AssetPath.PackageName.Number = 0;
  (this->GlobalSourcePreset).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GlobalSourcePreset).AssetPath.AssetName.Number = 0;
  (this->GlobalSourcePreset).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GlobalSourcePreset).SubPathString.Data.ArrayNum = 0;
  (this->GlobalSourcePreset).SubPathString.Data.ArrayMax = 0;
  return this;
}

// UResonanceAudioSettings @ 14f044390

UResonanceAudioSettings * __thiscall
UResonanceAudioSettings::UResonanceAudioSettings(UResonanceAudioSettings *this)

{
  int iVar1;
  FString *pFVar2;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  UObject::UObject((UObject *)this);
  this->QualityMode = BINAURAL_HIGH;
  this->_padding_ = (longlong)&___7UResonanceAudioSettings__6B_;
  (this->OutputSubmix).AssetPath.PackageName.ComparisonIndex = 0;
  (this->OutputSubmix).AssetPath.PackageName.Number = 0;
  (this->OutputSubmix).AssetPath.AssetName.ComparisonIndex = 0;
  (this->OutputSubmix).AssetPath.AssetName.Number = 0;
  (this->OutputSubmix).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputSubmix).SubPathString.Data.ArrayNum = 0;
  (this->OutputSubmix).SubPathString.Data.ArrayMax = 0;
  (this->GlobalReverbPreset).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GlobalReverbPreset).AssetPath.PackageName.Number = 0;
  (this->GlobalReverbPreset).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GlobalReverbPreset).AssetPath.AssetName.Number = 0;
  (this->GlobalReverbPreset).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GlobalReverbPreset).SubPathString.Data.ArrayNum = 0;
  (this->GlobalReverbPreset).SubPathString.Data.ArrayMax = 0;
  (this->GlobalSourcePreset).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GlobalSourcePreset).AssetPath.PackageName.Number = 0;
  (this->GlobalSourcePreset).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GlobalSourcePreset).AssetPath.AssetName.Number = 0;
  (this->GlobalSourcePreset).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GlobalSourcePreset).SubPathString.Data.ArrayNum = 0;
  (this->GlobalSourcePreset).SubPathString.Data.ArrayMax = 0;
  pFVar2 = ::FString::FString(&local_18,
                              L"/ResonanceAudio/ResonanceSubmixDefault.ResonanceSubmixDefault");
  local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  FSoftObjectPath::SetPath(&this->OutputSubmix,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UResonanceAudioSettings @ 14f044d30

void __thiscall UResonanceAudioSettings::~UResonanceAudioSettings(UResonanceAudioSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UResonanceAudioSettings__6B_;
  pFVar1 = (this->GlobalSourcePreset).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GlobalReverbPreset).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputSubmix).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14f048df0

UClass * __cdecl UResonanceAudioSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioSettings",
               &Z_Registration_Info_UClass_UResonanceAudioSettings.InnerSingleton,
               StaticRegisterNativesUResonanceAudioSettings,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UResonanceAudioSettings>,
               InternalVTableHelperCtorCaller<UResonanceAudioSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UResonanceAudioSettings.InnerSingleton;
}

// StaticRegisterNativesUResonanceAudioSettings @ 14f04d680

void __cdecl UResonanceAudioSettings::StaticRegisterNativesUResonanceAudioSettings(void)

{
  return;
}

