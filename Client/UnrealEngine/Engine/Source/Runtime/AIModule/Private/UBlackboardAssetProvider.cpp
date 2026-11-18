// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticClass @ 146ea8850

UClass * __cdecl UBlackboardAssetProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardAssetProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardAssetProvider",
               &Z_Registration_Info_UClass_UBlackboardAssetProvider.InnerSingleton,
               StaticRegisterNativesUBlackboardAssetProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlackboardAssetProvider>,
               InternalVTableHelperCtorCaller<UBlackboardAssetProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardAssetProvider.InnerSingleton;
}

// UBlackboardAssetProvider @ 146ecb920

UBlackboardAssetProvider * __thiscall
UBlackboardAssetProvider::UBlackboardAssetProvider
          (UBlackboardAssetProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UBlackboardAssetProvider__6B_;
  return this;
}

// UBlackboardAssetProvider @ 146ecb950

UBlackboardAssetProvider * __thiscall
UBlackboardAssetProvider::UBlackboardAssetProvider
          (UBlackboardAssetProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UBlackboardAssetProvider__6B_;
  return this;
}

// ~UBlackboardAssetProvider @ 146ecdbc0

void __thiscall UBlackboardAssetProvider::~UBlackboardAssetProvider(UBlackboardAssetProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146ee9ad0

UClass * __cdecl UBlackboardAssetProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardAssetProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardAssetProvider",
               &Z_Registration_Info_UClass_UBlackboardAssetProvider.InnerSingleton,
               StaticRegisterNativesUBlackboardAssetProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlackboardAssetProvider>,
               InternalVTableHelperCtorCaller<UBlackboardAssetProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardAssetProvider.InnerSingleton;
}

// StaticRegisterNativesUBlackboardAssetProvider @ 146f00f50

void __cdecl UBlackboardAssetProvider::StaticRegisterNativesUBlackboardAssetProvider(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UBlackboardAssetProvider_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

