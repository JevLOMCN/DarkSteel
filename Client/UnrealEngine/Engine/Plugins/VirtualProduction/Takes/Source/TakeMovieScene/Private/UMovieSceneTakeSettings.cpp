// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TakeMovieScene
// Functions: 6

// StaticClass @ 14d0b8de0

UClass * __cdecl UMovieSceneTakeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTakeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TakeMovieScene",L"MovieSceneTakeSettings",
               &Z_Registration_Info_UClass_UMovieSceneTakeSettings.InnerSingleton,
               StaticRegisterNativesUMovieSceneTakeSettings,0x98,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorSettings",InternalConstructor<UMovieSceneTakeSettings>,
               InternalVTableHelperCtorCaller<UMovieSceneTakeSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTakeSettings.InnerSingleton;
}

// UMovieSceneTakeSettings @ 14d0b9a50

UMovieSceneTakeSettings * __thiscall
UMovieSceneTakeSettings::UMovieSceneTakeSettings
          (UMovieSceneTakeSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneTakeSettings__6B_;
  (this->HoursName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HoursName).Data.ArrayNum = 0;
  (this->HoursName).Data.ArrayMax = 0;
  (this->MinutesName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MinutesName).Data.ArrayNum = 0;
  (this->MinutesName).Data.ArrayMax = 0;
  (this->SecondsName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SecondsName).Data.ArrayNum = 0;
  (this->SecondsName).Data.ArrayMax = 0;
  (this->FramesName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FramesName).Data.ArrayNum = 0;
  (this->FramesName).Data.ArrayMax = 0;
  (this->SubFramesName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubFramesName).Data.ArrayNum = 0;
  (this->SubFramesName).Data.ArrayMax = 0;
  (this->RateName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RateName).Data.ArrayNum = 0;
  (this->RateName).Data.ArrayMax = 0;
  (this->SlateName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlateName).Data.ArrayNum = 0;
  (this->SlateName).Data.ArrayMax = 0;
  return this;
}

// UMovieSceneTakeSettings @ 14d0b9ac0

UMovieSceneTakeSettings * __thiscall
UMovieSceneTakeSettings::UMovieSceneTakeSettings(UMovieSceneTakeSettings *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UMovieSceneTakeSettings__6B_;
  ::FString::FString(&this->HoursName,L"TCHour");
  ::FString::FString(&this->MinutesName,L"TCMinute");
  ::FString::FString(&this->SecondsName,L"TCSecond");
  ::FString::FString(&this->FramesName,L"TCFrame");
  ::FString::FString(&this->SubFramesName,L"TCSubframe");
  ::FString::FString(&this->RateName,L"TCRate");
  ::FString::FString(&this->SlateName,L"TCSlate");
  return this;
}

// ~UMovieSceneTakeSettings @ 14d0b9d10

void __thiscall UMovieSceneTakeSettings::~UMovieSceneTakeSettings(UMovieSceneTakeSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneTakeSettings__6B_;
  pFVar1 = (this->SlateName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RateName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SubFramesName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FramesName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SecondsName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MinutesName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HoursName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d0baac0

UClass * __cdecl UMovieSceneTakeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTakeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TakeMovieScene",L"MovieSceneTakeSettings",
               &Z_Registration_Info_UClass_UMovieSceneTakeSettings.InnerSingleton,
               StaticRegisterNativesUMovieSceneTakeSettings,0x98,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorSettings",InternalConstructor<UMovieSceneTakeSettings>,
               InternalVTableHelperCtorCaller<UMovieSceneTakeSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTakeSettings.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneTakeSettings @ 14d0bb7b0

void __cdecl UMovieSceneTakeSettings::StaticRegisterNativesUMovieSceneTakeSettings(void)

{
  return;
}

