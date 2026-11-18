// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 6

// StaticClass @ 1463ee880

UClass * __cdecl USequencerAnimationSupport::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USequencerAnimationSupport.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"SequencerAnimationSupport",
               &Z_Registration_Info_UClass_USequencerAnimationSupport.InnerSingleton,
               StaticRegisterNativesUSequencerAnimationSupport,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USequencerAnimationSupport>,
               InternalVTableHelperCtorCaller<USequencerAnimationSupport>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequencerAnimationSupport.InnerSingleton;
}

// USequencerAnimationSupport @ 146407da0

USequencerAnimationSupport * __thiscall
USequencerAnimationSupport::USequencerAnimationSupport
          (USequencerAnimationSupport *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USequencerAnimationSupport__6B_;
  return this;
}

// USequencerAnimationSupport @ 146407dd0

USequencerAnimationSupport * __thiscall
USequencerAnimationSupport::USequencerAnimationSupport
          (USequencerAnimationSupport *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USequencerAnimationSupport__6B_;
  return this;
}

// ~USequencerAnimationSupport @ 146409920

void __thiscall
USequencerAnimationSupport::~USequencerAnimationSupport(USequencerAnimationSupport *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14644d950

UClass * __cdecl USequencerAnimationSupport::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequencerAnimationSupport.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"SequencerAnimationSupport",
               &Z_Registration_Info_UClass_USequencerAnimationSupport.InnerSingleton,
               StaticRegisterNativesUSequencerAnimationSupport,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USequencerAnimationSupport>,
               InternalVTableHelperCtorCaller<USequencerAnimationSupport>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequencerAnimationSupport.InnerSingleton;
}

// StaticRegisterNativesUSequencerAnimationSupport @ 14646e8d0

void __cdecl USequencerAnimationSupport::StaticRegisterNativesUSequencerAnimationSupport(void)

{
  return;
}

