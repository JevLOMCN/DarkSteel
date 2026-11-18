// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e107680

UClass * __cdecl UOptimusPinMutabilityDefiner::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusPinMutabilityDefiner.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusPinMutabilityDefiner",
               &Z_Registration_Info_UClass_UOptimusPinMutabilityDefiner.InnerSingleton,
               StaticRegisterNativesUOptimusPinMutabilityDefiner,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusPinMutabilityDefiner>,
               InternalVTableHelperCtorCaller<UOptimusPinMutabilityDefiner>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusPinMutabilityDefiner.InnerSingleton;
}

// UOptimusPinMutabilityDefiner @ 14e15c670

UOptimusPinMutabilityDefiner * __thiscall
UOptimusPinMutabilityDefiner::UOptimusPinMutabilityDefiner
          (UOptimusPinMutabilityDefiner *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusPinMutabilityDefiner__6B_;
  return this;
}

// UOptimusPinMutabilityDefiner @ 14e15c6a0

UOptimusPinMutabilityDefiner * __thiscall
UOptimusPinMutabilityDefiner::UOptimusPinMutabilityDefiner
          (UOptimusPinMutabilityDefiner *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusPinMutabilityDefiner__6B_;
  return this;
}

// ~UOptimusPinMutabilityDefiner @ 14e163cc0

void __thiscall
UOptimusPinMutabilityDefiner::~UOptimusPinMutabilityDefiner(UOptimusPinMutabilityDefiner *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d8660

UClass * __cdecl UOptimusPinMutabilityDefiner::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusPinMutabilityDefiner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusPinMutabilityDefiner",
               &Z_Registration_Info_UClass_UOptimusPinMutabilityDefiner.InnerSingleton,
               StaticRegisterNativesUOptimusPinMutabilityDefiner,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusPinMutabilityDefiner>,
               InternalVTableHelperCtorCaller<UOptimusPinMutabilityDefiner>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusPinMutabilityDefiner.InnerSingleton;
}

// StaticRegisterNativesUOptimusPinMutabilityDefiner @ 14e225dd0

void __cdecl UOptimusPinMutabilityDefiner::StaticRegisterNativesUOptimusPinMutabilityDefiner(void)

{
  return;
}

