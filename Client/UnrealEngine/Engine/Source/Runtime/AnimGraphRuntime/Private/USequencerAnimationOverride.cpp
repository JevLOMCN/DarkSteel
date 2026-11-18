// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 6

// StaticClass @ 1463e7060

UClass * __cdecl USequencerAnimationOverride::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequencerAnimationOverride.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"SequencerAnimationOverride",
               &Z_Registration_Info_UClass_USequencerAnimationOverride.InnerSingleton,
               StaticRegisterNativesUSequencerAnimationOverride,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USequencerAnimationOverride>,
               InternalVTableHelperCtorCaller<USequencerAnimationOverride>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequencerAnimationOverride.InnerSingleton;
}

// USequencerAnimationOverride @ 146407d40

USequencerAnimationOverride * __thiscall
USequencerAnimationOverride::USequencerAnimationOverride
          (USequencerAnimationOverride *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USequencerAnimationOverride__6B_;
  return this;
}

// USequencerAnimationOverride @ 146407d70

USequencerAnimationOverride * __thiscall
USequencerAnimationOverride::USequencerAnimationOverride
          (USequencerAnimationOverride *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USequencerAnimationOverride__6B_;
  return this;
}

// ~USequencerAnimationOverride @ 146409910

void __thiscall
USequencerAnimationOverride::~USequencerAnimationOverride(USequencerAnimationOverride *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14644d890

UClass * __cdecl USequencerAnimationOverride::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequencerAnimationOverride.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"SequencerAnimationOverride",
               &Z_Registration_Info_UClass_USequencerAnimationOverride.InnerSingleton,
               StaticRegisterNativesUSequencerAnimationOverride,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USequencerAnimationOverride>,
               InternalVTableHelperCtorCaller<USequencerAnimationOverride>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequencerAnimationOverride.InnerSingleton;
}

// StaticRegisterNativesUSequencerAnimationOverride @ 14646e890

void __cdecl USequencerAnimationOverride::StaticRegisterNativesUSequencerAnimationOverride(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_USequencerAnimationOverride_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

