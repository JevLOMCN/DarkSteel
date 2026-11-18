// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b556840

UClass * __cdecl UDS_PerlinNoiseCameraShakePattern::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PerlinNoiseCameraShakePattern.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PerlinNoiseCameraShakePattern",
               &Z_Registration_Info_UClass_UDS_PerlinNoiseCameraShakePattern.InnerSingleton,
               StaticRegisterNativesUDS_PerlinNoiseCameraShakePattern,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PerlinNoiseCameraShakePattern>,
               InternalVTableHelperCtorCaller<UDS_PerlinNoiseCameraShakePattern>,local_res8,
               UPerlinNoiseCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PerlinNoiseCameraShakePattern.InnerSingleton;
}

// UDS_PerlinNoiseCameraShakePattern @ 14b55a5a0

UDS_PerlinNoiseCameraShakePattern * __thiscall
UDS_PerlinNoiseCameraShakePattern::UDS_PerlinNoiseCameraShakePattern
          (UDS_PerlinNoiseCameraShakePattern *this,FVTableHelper *param_1)

{
  UPerlinNoiseCameraShakePattern::UPerlinNoiseCameraShakePattern
            ((UPerlinNoiseCameraShakePattern *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PerlinNoiseCameraShakePattern__6B_;
  this->CameraShakeRadius = 0.0;
  this->DissipationStartSection = 0.0;
  return this;
}

// ~UDS_PerlinNoiseCameraShakePattern @ 14b55b790

void __thiscall
UDS_PerlinNoiseCameraShakePattern::~UDS_PerlinNoiseCameraShakePattern
          (UDS_PerlinNoiseCameraShakePattern *this)

{
  this->_padding_ = (longlong)&___7UDS_PerlinNoiseCameraShakePattern__6B_;
  UPerlinNoiseCameraShakePattern::~UPerlinNoiseCameraShakePattern
            ((UPerlinNoiseCameraShakePattern *)this);
  return;
}

// GetPrivateStaticClass @ 14b55d060

UClass * __cdecl UDS_PerlinNoiseCameraShakePattern::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PerlinNoiseCameraShakePattern.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PerlinNoiseCameraShakePattern",
               &Z_Registration_Info_UClass_UDS_PerlinNoiseCameraShakePattern.InnerSingleton,
               StaticRegisterNativesUDS_PerlinNoiseCameraShakePattern,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PerlinNoiseCameraShakePattern>,
               InternalVTableHelperCtorCaller<UDS_PerlinNoiseCameraShakePattern>,local_res8,
               UPerlinNoiseCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PerlinNoiseCameraShakePattern.InnerSingleton;
}

// StaticRegisterNativesUDS_PerlinNoiseCameraShakePattern @ 14b55d380

void __cdecl
UDS_PerlinNoiseCameraShakePattern::StaticRegisterNativesUDS_PerlinNoiseCameraShakePattern(void)

{
  return;
}

// UDS_PerlinNoiseCameraShakePattern @ 14b8b2c60

UDS_PerlinNoiseCameraShakePattern * __thiscall
UDS_PerlinNoiseCameraShakePattern::UDS_PerlinNoiseCameraShakePattern
          (UDS_PerlinNoiseCameraShakePattern *this,FObjectInitializer *param_1)

{
  UPerlinNoiseCameraShakePattern::UPerlinNoiseCameraShakePattern
            ((UPerlinNoiseCameraShakePattern *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PerlinNoiseCameraShakePattern__6B_;
  this->CameraShakeRadius = 0.0;
  this->DissipationStartSection = 0.0;
  return this;
}

