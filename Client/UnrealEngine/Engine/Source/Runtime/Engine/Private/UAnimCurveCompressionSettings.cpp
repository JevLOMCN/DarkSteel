// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 14741e960

UClass * __cdecl UAnimCurveCompressionSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveCompressionSettings",
               &Z_Registration_Info_UClass_UAnimCurveCompressionSettings.InnerSingleton,
               StaticRegisterNativesUAnimCurveCompressionSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCurveCompressionSettings>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionSettings.InnerSingleton;
}

// UAnimCurveCompressionSettings @ 147434f80

UAnimCurveCompressionSettings * __thiscall
UAnimCurveCompressionSettings::UAnimCurveCompressionSettings
          (UAnimCurveCompressionSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimCurveCompressionSettings__6B_;
  (this->Codec).field0_0x0.DebugPtr = (UAnimCurveCompressionCodec *)0x0;
  return this;
}

// UAnimCurveCompressionSettings @ 147434fb0

UAnimCurveCompressionSettings * __thiscall
UAnimCurveCompressionSettings::UAnimCurveCompressionSettings
          (UAnimCurveCompressionSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimCurveCompressionSettings__6B_;
  (this->Codec).field0_0x0.DebugPtr = (UAnimCurveCompressionCodec *)0x0;
  return this;
}

// ~UAnimCurveCompressionSettings @ 147436ae0

void __thiscall
UAnimCurveCompressionSettings::~UAnimCurveCompressionSettings(UAnimCurveCompressionSettings *this)

{
  this->_padding_ = (longlong)&___7UAnimCurveCompressionSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetCodec @ 1474546b0

UAnimCurveCompressionCodec * __thiscall
UAnimCurveCompressionSettings::GetCodec(UAnimCurveCompressionSettings *this,FString *param_1)

{
  UAnimCurveCompressionCodec *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001474546b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UAnimCurveCompressionCodec *)
           (**(code **)(*(longlong *)(this->Codec).field0_0x0.DebugPtr + 0x2b0))();
  return pUVar1;
}

// GetPrivateStaticClass @ 147462410

UClass * __cdecl UAnimCurveCompressionSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveCompressionSettings",
               &Z_Registration_Info_UClass_UAnimCurveCompressionSettings.InnerSingleton,
               StaticRegisterNativesUAnimCurveCompressionSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCurveCompressionSettings>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionSettings.InnerSingleton;
}

// StaticRegisterNativesUAnimCurveCompressionSettings @ 14747b2f0

void __cdecl UAnimCurveCompressionSettings::StaticRegisterNativesUAnimCurveCompressionSettings(void)

{
  return;
}

