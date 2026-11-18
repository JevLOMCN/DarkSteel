// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147267a20

UClass * __cdecl UBuiltInAttributesExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBuiltInAttributesExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BuiltInAttributesExtensions",
               &Z_Registration_Info_UClass_UBuiltInAttributesExtensions.InnerSingleton,
               StaticRegisterNativesUBuiltInAttributesExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBuiltInAttributesExtensions>,
               InternalVTableHelperCtorCaller<UBuiltInAttributesExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBuiltInAttributesExtensions.InnerSingleton;
}

// UBuiltInAttributesExtensions @ 14726cab0

UBuiltInAttributesExtensions * __thiscall
UBuiltInAttributesExtensions::UBuiltInAttributesExtensions
          (UBuiltInAttributesExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBuiltInAttributesExtensions__6B_;
  return this;
}

// UBuiltInAttributesExtensions @ 14726cae0

UBuiltInAttributesExtensions * __thiscall
UBuiltInAttributesExtensions::UBuiltInAttributesExtensions
          (UBuiltInAttributesExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBuiltInAttributesExtensions__6B_;
  return this;
}

// ~UBuiltInAttributesExtensions @ 14726d310

void __thiscall
UBuiltInAttributesExtensions::~UBuiltInAttributesExtensions(UBuiltInAttributesExtensions *this)

{
  *(undefined ***)this = &___7UBuiltInAttributesExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14726f150

UClass * __cdecl UBuiltInAttributesExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBuiltInAttributesExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BuiltInAttributesExtensions",
               &Z_Registration_Info_UClass_UBuiltInAttributesExtensions.InnerSingleton,
               StaticRegisterNativesUBuiltInAttributesExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBuiltInAttributesExtensions>,
               InternalVTableHelperCtorCaller<UBuiltInAttributesExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBuiltInAttributesExtensions.InnerSingleton;
}

// StaticRegisterNativesUBuiltInAttributesExtensions @ 147270990

void __cdecl UBuiltInAttributesExtensions::StaticRegisterNativesUBuiltInAttributesExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

