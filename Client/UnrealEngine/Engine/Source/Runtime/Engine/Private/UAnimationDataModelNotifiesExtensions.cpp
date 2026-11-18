// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147258d10

UClass * __cdecl UAnimationDataModelNotifiesExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationDataModelNotifiesExtensions.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationDataModelNotifiesExtensions",
               &Z_Registration_Info_UClass_UAnimationDataModelNotifiesExtensions.InnerSingleton,
               StaticRegisterNativesUAnimationDataModelNotifiesExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationDataModelNotifiesExtensions>,
               InternalVTableHelperCtorCaller<UAnimationDataModelNotifiesExtensions>,aFStackX_8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationDataModelNotifiesExtensions.InnerSingleton;
}

// UAnimationDataModelNotifiesExtensions @ 14725cd70

UAnimationDataModelNotifiesExtensions * __thiscall
UAnimationDataModelNotifiesExtensions::UAnimationDataModelNotifiesExtensions
          (UAnimationDataModelNotifiesExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimationDataModelNotifiesExtensions__6B_;
  return this;
}

// UAnimationDataModelNotifiesExtensions @ 14725cda0

UAnimationDataModelNotifiesExtensions * __thiscall
UAnimationDataModelNotifiesExtensions::UAnimationDataModelNotifiesExtensions
          (UAnimationDataModelNotifiesExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimationDataModelNotifiesExtensions__6B_;
  return this;
}

// ~UAnimationDataModelNotifiesExtensions @ 14725dbc0

void __thiscall
UAnimationDataModelNotifiesExtensions::~UAnimationDataModelNotifiesExtensions
          (UAnimationDataModelNotifiesExtensions *this)

{
  *(undefined ***)this = &___7UAnimationDataModelNotifiesExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 1472600f0

UClass * __cdecl UAnimationDataModelNotifiesExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationDataModelNotifiesExtensions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationDataModelNotifiesExtensions",
               &Z_Registration_Info_UClass_UAnimationDataModelNotifiesExtensions.InnerSingleton,
               StaticRegisterNativesUAnimationDataModelNotifiesExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationDataModelNotifiesExtensions>,
               InternalVTableHelperCtorCaller<UAnimationDataModelNotifiesExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationDataModelNotifiesExtensions.InnerSingleton;
}

// StaticRegisterNativesUAnimationDataModelNotifiesExtensions @ 147260e80

void __cdecl
UAnimationDataModelNotifiesExtensions::StaticRegisterNativesUAnimationDataModelNotifiesExtensions
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

