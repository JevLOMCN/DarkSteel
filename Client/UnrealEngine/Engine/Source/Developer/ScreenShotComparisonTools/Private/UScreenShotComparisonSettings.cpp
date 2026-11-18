// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 11

// StaticClass @ 148c38490

UClass * __cdecl UScreenShotComparisonSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScreenShotComparisonSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ScreenShotComparisonTools",L"ScreenShotComparisonSettings",
               &Z_Registration_Info_UClass_UScreenShotComparisonSettings.InnerSingleton,
               StaticRegisterNativesUScreenShotComparisonSettings,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UScreenShotComparisonSettings>,
               InternalVTableHelperCtorCaller<UScreenShotComparisonSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScreenShotComparisonSettings.InnerSingleton;
}

// UScreenShotComparisonSettings @ 148c3da80

UScreenShotComparisonSettings * __thiscall
UScreenShotComparisonSettings::UScreenShotComparisonSettings
          (UScreenShotComparisonSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UScreenShotComparisonSettings__6B_;
  (this->ScreenshotFallbackPlatforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScreenshotFallbackPlatforms).ArrayNum = 0;
  (this->ScreenshotFallbackPlatforms).ArrayMax = 0;
  (this->Platform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Platform).Data.ArrayNum = 0;
  (this->Platform).Data.ArrayMax = 0;
  return this;
}

// UScreenShotComparisonSettings @ 148c3dac0

UScreenShotComparisonSettings * __thiscall
UScreenShotComparisonSettings::UScreenShotComparisonSettings
          (UScreenShotComparisonSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UScreenShotComparisonSettings__6B_;
  (this->ScreenshotFallbackPlatforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScreenshotFallbackPlatforms).ArrayNum = 0;
  (this->ScreenshotFallbackPlatforms).ArrayMax = 0;
  (this->Platform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Platform).Data.ArrayNum = 0;
  (this->Platform).Data.ArrayMax = 0;
  return this;
}

// ~UScreenShotComparisonSettings @ 148c3e180

void __thiscall
UScreenShotComparisonSettings::~UScreenShotComparisonSettings(UScreenShotComparisonSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UScreenShotComparisonSettings__6B_;
  pFVar1 = (this->Platform).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FScreenshotFallbackEntry,int>
            ((FScreenshotFallbackEntry *)(this->ScreenshotFallbackPlatforms).AllocatorInstance.Data,
             (this->ScreenshotFallbackPlatforms).ArrayNum);
  pFVar1 = (this->ScreenshotFallbackPlatforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// Create @ 148c466d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UScreenShotComparisonSettings * __cdecl UScreenShotComparisonSettings::Create(FString *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UScreenShotComparisonSettings *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UScreenShotComparisonSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,param_1);
  return pUVar3;
}

// GetConfigOverridePlatform @ 148c48840

wchar_t * __thiscall
UScreenShotComparisonSettings::GetConfigOverridePlatform(UScreenShotComparisonSettings *this)

{
  if ((this->Platform).Data.ArrayNum != 0) {
    return (wchar_t *)(this->Platform).Data.AllocatorInstance.Data;
  }
  return L"";
}

// GetPlatformName @ 148c48d80

FString * __thiscall
UScreenShotComparisonSettings::GetPlatformName(UScreenShotComparisonSettings *this)

{
  return &this->Platform;
}

// GetPrivateStaticClass @ 148c48d90

UClass * __cdecl UScreenShotComparisonSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScreenShotComparisonSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ScreenShotComparisonTools",L"ScreenShotComparisonSettings",
               &Z_Registration_Info_UClass_UScreenShotComparisonSettings.InnerSingleton,
               StaticRegisterNativesUScreenShotComparisonSettings,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UScreenShotComparisonSettings>,
               InternalVTableHelperCtorCaller<UScreenShotComparisonSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScreenShotComparisonSettings.InnerSingleton;
}

// LoadSettings @ 148c49870

void __thiscall UScreenShotComparisonSettings::LoadSettings(UScreenShotComparisonSettings *this)

{
  int *piVar1;
  
  DestructItems<FScreenshotFallbackEntry,int>
            ((FScreenshotFallbackEntry *)(this->ScreenshotFallbackPlatforms).AllocatorInstance.Data,
             (this->ScreenshotFallbackPlatforms).ArrayNum);
  piVar1 = &(this->ScreenshotFallbackPlatforms).ArrayMax;
  (this->ScreenshotFallbackPlatforms).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->ScreenshotFallbackPlatforms).AllocatorInstance,0,piVar1);
  }
  UObject::LoadConfig((UObject *)this,(UClass *)this->_padding_,(wchar_t *)0x0,0,(FProperty *)0x0,
                      (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                       *)0x0);
  return;
}

// SetPlatform @ 148c4a3e0

void __thiscall
UScreenShotComparisonSettings::SetPlatform(UScreenShotComparisonSettings *this,FString *param_1)

{
  int *piVar1;
  
  ::FString::operator=(&this->Platform,param_1);
  DestructItems<FScreenshotFallbackEntry,int>
            ((FScreenshotFallbackEntry *)(this->ScreenshotFallbackPlatforms).AllocatorInstance.Data,
             (this->ScreenshotFallbackPlatforms).ArrayNum);
  piVar1 = &(this->ScreenshotFallbackPlatforms).ArrayMax;
  (this->ScreenshotFallbackPlatforms).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->ScreenshotFallbackPlatforms).AllocatorInstance,0,piVar1);
  }
  UObject::LoadConfig((UObject *)this,(UClass *)this->_padding_,(wchar_t *)0x0,0,(FProperty *)0x0,
                      (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                       *)0x0);
  return;
}

// StaticRegisterNativesUScreenShotComparisonSettings @ 148c4a470

void __cdecl UScreenShotComparisonSettings::StaticRegisterNativesUScreenShotComparisonSettings(void)

{
  return;
}

