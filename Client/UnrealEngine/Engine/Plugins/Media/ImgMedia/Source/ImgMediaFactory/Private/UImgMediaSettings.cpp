// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMediaFactory
// Functions: 8

// StaticClass @ 14ea60c60

UClass * __cdecl UImgMediaSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImgMediaSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ImgMediaFactory",L"ImgMediaSettings",
               &Z_Registration_Info_UClass_UImgMediaSettings.InnerSingleton,
               StaticRegisterNativesUImgMediaSettings,0x68,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UImgMediaSettings>,
               InternalVTableHelperCtorCaller<UImgMediaSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImgMediaSettings.InnerSingleton;
}

// UImgMediaSettings @ 14ea61af0

UImgMediaSettings * __thiscall
UImgMediaSettings::UImgMediaSettings(UImgMediaSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UImgMediaSettings__6B_;
  (this->DefaultProxy).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultProxy).Data.ArrayNum = 0;
  (this->DefaultProxy).Data.ArrayMax = 0;
  (this->DefaultFrameRate).Numerator = 60000;
  (this->DefaultFrameRate).Denominator = 1;
  return this;
}

// UImgMediaSettings @ 14ea61b30

UImgMediaSettings * __thiscall UImgMediaSettings::UImgMediaSettings(UImgMediaSettings *this)

{
  UObject::UObject((UObject *)this);
  this->BandwidthThrottlingEnabled = true;
  this->_padding_ = (longlong)&___7UImgMediaSettings__6B_;
  (this->DefaultFrameRate).Numerator = 0x18;
  (this->DefaultFrameRate).Denominator = 1;
  this->CacheBehindPercentage = 25.0;
  this->CacheSizeGB = 1.0;
  this->CacheThreads = 2;
  this->CacheThreadStackSizeKB = 0x80;
  this->GlobalCacheSizeGB = 1.0;
  this->UseGlobalCache = true;
  this->ExrDecoderThreads = 0;
  ::FString::FString(&this->DefaultProxy,L"proxy");
  this->UseDefaultProxy = false;
  return this;
}

// ~UImgMediaSettings @ 14ea61bb0

void __thiscall UImgMediaSettings::~UImgMediaSettings(UImgMediaSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UImgMediaSettings__6B_;
  pFVar1 = (this->DefaultProxy).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14ea61c80

UClass * __cdecl UImgMediaSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImgMediaSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ImgMediaFactory",L"ImgMediaSettings",
               &Z_Registration_Info_UClass_UImgMediaSettings.InnerSingleton,
               StaticRegisterNativesUImgMediaSettings,0x68,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UImgMediaSettings>,
               InternalVTableHelperCtorCaller<UImgMediaSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImgMediaSettings.InnerSingleton;
}

// PostInitProperties @ 14ea61da0

void __thiscall UImgMediaSettings::PostInitProperties(UImgMediaSettings *this)

{
  float fVar1;
  
  UObject::PostInitProperties((UObject *)this);
  fVar1 = this->CacheSizeGB;
  if (this->GlobalCacheSizeGB <= fVar1 && fVar1 != this->GlobalCacheSizeGB) {
    this->GlobalCacheSizeGB = fVar1;
  }
  return;
}

// StaticRegisterNativesUImgMediaSettings @ 14ea61dd0

void __cdecl UImgMediaSettings::StaticRegisterNativesUImgMediaSettings(void)

{
  return;
}

// ValidateSettings @ 14ea61de0

void __thiscall UImgMediaSettings::ValidateSettings(UImgMediaSettings *this)

{
  float fVar1;
  
  fVar1 = this->CacheSizeGB;
  if (this->GlobalCacheSizeGB <= fVar1 && fVar1 != this->GlobalCacheSizeGB) {
    this->GlobalCacheSizeGB = fVar1;
  }
  return;
}

