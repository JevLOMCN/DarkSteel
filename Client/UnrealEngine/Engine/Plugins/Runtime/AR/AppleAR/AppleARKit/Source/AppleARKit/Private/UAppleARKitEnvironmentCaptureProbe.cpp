// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 6

// StaticClass @ 14cfcb320

UClass * __cdecl UAppleARKitEnvironmentCaptureProbe::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbe.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitEnvironmentCaptureProbe",
               &Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbe.InnerSingleton,
               StaticRegisterNativesUAppleARKitEnvironmentCaptureProbe,0x180,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAppleARKitEnvironmentCaptureProbe>,
               InternalVTableHelperCtorCaller<UAppleARKitEnvironmentCaptureProbe>,local_res8,
               UAREnvironmentCaptureProbe::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbe.InnerSingleton;
}

// UAppleARKitEnvironmentCaptureProbe @ 14cfd04a0

UAppleARKitEnvironmentCaptureProbe * __thiscall
UAppleARKitEnvironmentCaptureProbe::UAppleARKitEnvironmentCaptureProbe
          (UAppleARKitEnvironmentCaptureProbe *this,FVTableHelper *param_1)

{
  UAREnvironmentCaptureProbe::UAREnvironmentCaptureProbe((UAREnvironmentCaptureProbe *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UAppleARKitEnvironmentCaptureProbe__6B_;
  (this->ARKitEnvironmentTexture).field0_0x0.DebugPtr =
       (UAppleARKitEnvironmentCaptureProbeTexture *)0x0;
  return this;
}

// UAppleARKitEnvironmentCaptureProbe @ 14cfd04e0

UAppleARKitEnvironmentCaptureProbe * __thiscall
UAppleARKitEnvironmentCaptureProbe::UAppleARKitEnvironmentCaptureProbe
          (UAppleARKitEnvironmentCaptureProbe *this)

{
  UAREnvironmentCaptureProbe::UAREnvironmentCaptureProbe((UAREnvironmentCaptureProbe *)this);
  this->_padding_ = (longlong)&___7UAppleARKitEnvironmentCaptureProbe__6B_;
  (this->ARKitEnvironmentTexture).field0_0x0.DebugPtr =
       (UAppleARKitEnvironmentCaptureProbeTexture *)0x0;
  return this;
}

// ~UAppleARKitEnvironmentCaptureProbe @ 14cfd1300

void __thiscall
UAppleARKitEnvironmentCaptureProbe::~UAppleARKitEnvironmentCaptureProbe
          (UAppleARKitEnvironmentCaptureProbe *this)

{
  this->_padding_ = (longlong)&___7UAppleARKitEnvironmentCaptureProbe__6B_;
  UAREnvironmentCaptureProbe::~UAREnvironmentCaptureProbe((UAREnvironmentCaptureProbe *)this);
  return;
}

// GetPrivateStaticClass @ 14cfd7390

UClass * __cdecl UAppleARKitEnvironmentCaptureProbe::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbe.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitEnvironmentCaptureProbe",
               &Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbe.InnerSingleton,
               StaticRegisterNativesUAppleARKitEnvironmentCaptureProbe,0x180,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAppleARKitEnvironmentCaptureProbe>,
               InternalVTableHelperCtorCaller<UAppleARKitEnvironmentCaptureProbe>,local_res8,
               UAREnvironmentCaptureProbe::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbe.InnerSingleton;
}

// StaticRegisterNativesUAppleARKitEnvironmentCaptureProbe @ 14cfdf440

void __cdecl
UAppleARKitEnvironmentCaptureProbe::StaticRegisterNativesUAppleARKitEnvironmentCaptureProbe(void)

{
  return;
}

