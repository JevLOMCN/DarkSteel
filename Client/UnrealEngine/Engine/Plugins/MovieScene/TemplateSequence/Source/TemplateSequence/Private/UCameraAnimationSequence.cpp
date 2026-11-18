// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 6

// StaticClass @ 14ac63320

UClass * __cdecl UCameraAnimationSequence::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationSequence",
               &Z_Registration_Info_UClass_UCameraAnimationSequence.InnerSingleton,
               StaticRegisterNativesUCameraAnimationSequence,0xf0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationSequence>,
               InternalVTableHelperCtorCaller<UCameraAnimationSequence>,local_res8,
               UTemplateSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSequence.InnerSingleton;
}

// UCameraAnimationSequence @ 14ac6fec0

UCameraAnimationSequence * __thiscall
UCameraAnimationSequence::UCameraAnimationSequence
          (UCameraAnimationSequence *this,FVTableHelper *param_1)

{
  UTemplateSequence::UTemplateSequence((UTemplateSequence *)this,param_1);
  *(undefined ***)this = &___7UCameraAnimationSequence__6B_;
  return this;
}

// UCameraAnimationSequence @ 14ac6fef0

UCameraAnimationSequence * __thiscall
UCameraAnimationSequence::UCameraAnimationSequence
          (UCameraAnimationSequence *this,FObjectInitializer *param_1)

{
  UTemplateSequence::UTemplateSequence((UTemplateSequence *)this,param_1);
  *(undefined ***)this = &___7UCameraAnimationSequence__6B_;
  return this;
}

// ~UCameraAnimationSequence @ 14ac71520

void __thiscall UCameraAnimationSequence::~UCameraAnimationSequence(UCameraAnimationSequence *this)

{
  *(undefined ***)this = &___7UCameraAnimationSequence__6B_;
  UTemplateSequence::~UTemplateSequence((UTemplateSequence *)this);
  return;
}

// GetPrivateStaticClass @ 14ac77910

UClass * __cdecl UCameraAnimationSequence::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationSequence",
               &Z_Registration_Info_UClass_UCameraAnimationSequence.InnerSingleton,
               StaticRegisterNativesUCameraAnimationSequence,0xf0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationSequence>,
               InternalVTableHelperCtorCaller<UCameraAnimationSequence>,local_res8,
               UTemplateSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSequence.InnerSingleton;
}

// StaticRegisterNativesUCameraAnimationSequence @ 14ac804a0

void __cdecl UCameraAnimationSequence::StaticRegisterNativesUCameraAnimationSequence(void)

{
  return;
}

