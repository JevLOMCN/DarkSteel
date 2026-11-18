// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 6

// StaticClass @ 142b6ee20

UClass * __cdecl UAssetRegistry::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAssetRegistry.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AssetRegistry",L"AssetRegistry",
               &Z_Registration_Info_UClass_UAssetRegistry.InnerSingleton,
               StaticRegisterNativesUAssetRegistry,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAssetRegistry>,InternalVTableHelperCtorCaller<UAssetRegistry>,
               aFStackX_8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetRegistry.InnerSingleton;
}

// UAssetRegistry @ 142b7b9d0

UAssetRegistry * __thiscall
UAssetRegistry::UAssetRegistry(UAssetRegistry *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAssetRegistry__6B_;
  return this;
}

// UAssetRegistry @ 142b7ba00

UAssetRegistry * __thiscall
UAssetRegistry::UAssetRegistry(UAssetRegistry *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAssetRegistry__6B_;
  return this;
}

// ~UAssetRegistry @ 142b7da90

void __thiscall UAssetRegistry::~UAssetRegistry(UAssetRegistry *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 142b98240

UClass * __cdecl UAssetRegistry::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetRegistry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AssetRegistry",L"AssetRegistry",
               &Z_Registration_Info_UClass_UAssetRegistry.InnerSingleton,
               StaticRegisterNativesUAssetRegistry,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAssetRegistry>,InternalVTableHelperCtorCaller<UAssetRegistry>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetRegistry.InnerSingleton;
}

// StaticRegisterNativesUAssetRegistry @ 142bafea0

void __cdecl UAssetRegistry::StaticRegisterNativesUAssetRegistry(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1c;
  local_18.DataPtr = Z_Construct_UClass_UAssetRegistry_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

