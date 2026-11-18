// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147256c40

UClass * __cdecl UAnimationAssetExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationAssetExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationAssetExtensions",
               &Z_Registration_Info_UClass_UAnimationAssetExtensions.InnerSingleton,
               StaticRegisterNativesUAnimationAssetExtensions,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimationAssetExtensions>,
               InternalVTableHelperCtorCaller<UAnimationAssetExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationAssetExtensions.InnerSingleton;
}

// UAnimationAssetExtensions @ 14725cd10

UAnimationAssetExtensions * __thiscall
UAnimationAssetExtensions::UAnimationAssetExtensions
          (UAnimationAssetExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimationAssetExtensions__6B_;
  return this;
}

// UAnimationAssetExtensions @ 14725cd40

UAnimationAssetExtensions * __thiscall
UAnimationAssetExtensions::UAnimationAssetExtensions
          (UAnimationAssetExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimationAssetExtensions__6B_;
  return this;
}

// ~UAnimationAssetExtensions @ 14725dba0

void __thiscall
UAnimationAssetExtensions::~UAnimationAssetExtensions(UAnimationAssetExtensions *this)

{
  *(undefined ***)this = &___7UAnimationAssetExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 147260030

UClass * __cdecl UAnimationAssetExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationAssetExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationAssetExtensions",
               &Z_Registration_Info_UClass_UAnimationAssetExtensions.InnerSingleton,
               StaticRegisterNativesUAnimationAssetExtensions,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimationAssetExtensions>,
               InternalVTableHelperCtorCaller<UAnimationAssetExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationAssetExtensions.InnerSingleton;
}

// StaticRegisterNativesUAnimationAssetExtensions @ 147260e40

void __cdecl UAnimationAssetExtensions::StaticRegisterNativesUAnimationAssetExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

