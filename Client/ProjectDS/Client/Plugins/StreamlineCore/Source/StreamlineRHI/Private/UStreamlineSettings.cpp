// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineRHI
// Functions: 7

// StaticClass @ 14de58610

UClass * __cdecl UStreamlineSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineRHI",L"StreamlineSettings",
               &Z_Registration_Info_UClass_UStreamlineSettings.InnerSingleton,
               StaticRegisterNativesUStreamlineSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UStreamlineSettings>,
               InternalVTableHelperCtorCaller<UStreamlineSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineSettings.InnerSingleton;
}

// UStreamlineSettings @ 14de59bd0

UStreamlineSettings * __thiscall
UStreamlineSettings::UStreamlineSettings(UStreamlineSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bLoadDebugOverlay = false;
  this->bAllowOTAUpdate = true;
  this->_padding_ = (longlong)&___7UStreamlineSettings__6B_;
  this->NVIDIANGXApplicationId = 0;
  this->bEnableStreamlineD3D12 = true;
  this->bEnableStreamlineD3D11 = true;
  this->bEnableDLSSFGInPlayInEditorViewports = true;
  this->bUseSlSetTag = false;
  return this;
}

// UStreamlineSettings @ 14de59c10

UStreamlineSettings * __thiscall
UStreamlineSettings::UStreamlineSettings(UStreamlineSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bLoadDebugOverlay = false;
  this->bAllowOTAUpdate = true;
  this->_padding_ = (longlong)&___7UStreamlineSettings__6B_;
  this->NVIDIANGXApplicationId = 0;
  this->bEnableStreamlineD3D12 = true;
  this->bEnableStreamlineD3D11 = true;
  this->bEnableDLSSFGInPlayInEditorViewports = true;
  this->bUseSlSetTag = false;
  return this;
}

// ~UStreamlineSettings @ 14de59e90

void __thiscall UStreamlineSettings::~UStreamlineSettings(UStreamlineSettings *this)

{
  this->_padding_ = (longlong)&___7UStreamlineSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CppDefaults @ 14de5a860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UStreamlineSettings> __cdecl UStreamlineSettings::CppDefaults(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  TObjectPtr<UStreamlineSettings>_u_0 in_RCX;
  longlong *plVar3;
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
  pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  (in_RCX.DebugPtr)->_padding_ = (longlong)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return (TObjectPtr<UStreamlineSettings>)in_RCX;
}

// GetPrivateStaticClass @ 14de5acd0

UClass * __cdecl UStreamlineSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineRHI",L"StreamlineSettings",
               &Z_Registration_Info_UClass_UStreamlineSettings.InnerSingleton,
               StaticRegisterNativesUStreamlineSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UStreamlineSettings>,
               InternalVTableHelperCtorCaller<UStreamlineSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineSettings.InnerSingleton;
}

// StaticRegisterNativesUStreamlineSettings @ 14de63650

void __cdecl UStreamlineSettings::StaticRegisterNativesUStreamlineSettings(void)

{
  return;
}

