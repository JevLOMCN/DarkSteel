// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 14727cc40

UClass * __cdecl UHapticFeedbackEffect_Base::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHapticFeedbackEffect_Base.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HapticFeedbackEffect_Base",
               &Z_Registration_Info_UClass_UHapticFeedbackEffect_Base.InnerSingleton,
               StaticRegisterNativesUHapticFeedbackEffect_Base,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UHapticFeedbackEffect_Base>,
               InternalVTableHelperCtorCaller<UHapticFeedbackEffect_Base>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHapticFeedbackEffect_Base.InnerSingleton;
}

// UHapticFeedbackEffect_Base @ 14727f870

UHapticFeedbackEffect_Base * __thiscall
UHapticFeedbackEffect_Base::UHapticFeedbackEffect_Base
          (UHapticFeedbackEffect_Base *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UHapticFeedbackEffect_Base__6B_;
  return this;
}

// ~UHapticFeedbackEffect_Base @ 14727fd60

void __thiscall
UHapticFeedbackEffect_Base::~UHapticFeedbackEffect_Base(UHapticFeedbackEffect_Base *this)

{
  *(undefined ***)this = &___7UHapticFeedbackEffect_Base__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147280c30

UClass * __cdecl UHapticFeedbackEffect_Base::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHapticFeedbackEffect_Base.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HapticFeedbackEffect_Base",
               &Z_Registration_Info_UClass_UHapticFeedbackEffect_Base.InnerSingleton,
               StaticRegisterNativesUHapticFeedbackEffect_Base,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UHapticFeedbackEffect_Base>,
               InternalVTableHelperCtorCaller<UHapticFeedbackEffect_Base>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHapticFeedbackEffect_Base.InnerSingleton;
}

// Initialize @ 147281350

void __thiscall
UHapticFeedbackEffect_Base::Initialize
          (UHapticFeedbackEffect_Base *this,FHapticFeedbackBuffer *param_1)

{
  return;
}

// StaticRegisterNativesUHapticFeedbackEffect_Base @ 147281510

void __cdecl UHapticFeedbackEffect_Base::StaticRegisterNativesUHapticFeedbackEffect_Base(void)

{
  return;
}

// UHapticFeedbackEffect_Base @ 147bbcd50

UHapticFeedbackEffect_Base * __thiscall
UHapticFeedbackEffect_Base::UHapticFeedbackEffect_Base
          (UHapticFeedbackEffect_Base *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UHapticFeedbackEffect_Base__6B_;
  return this;
}

// GetDuration @ 147bdfc80

float __thiscall UHapticFeedbackEffect_Base::GetDuration(UHapticFeedbackEffect_Base *this)

{
  return 0.0;
}

// GetValues @ 147becb70

void __thiscall
UHapticFeedbackEffect_Base::GetValues
          (UHapticFeedbackEffect_Base *this,float param_1,FHapticFeedbackValues *param_2)

{
  return;
}

