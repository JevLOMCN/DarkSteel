// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 6

// StaticClass @ 146ac2b90

UClass * __cdecl UGameplayTagAssetInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagAssetInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"GameplayTagAssetInterface",
               &Z_Registration_Info_UClass_UGameplayTagAssetInterface.InnerSingleton,
               StaticRegisterNativesUGameplayTagAssetInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayTagAssetInterface>,
               InternalVTableHelperCtorCaller<UGameplayTagAssetInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagAssetInterface.InnerSingleton;
}

// UGameplayTagAssetInterface @ 146acc930

UGameplayTagAssetInterface * __thiscall
UGameplayTagAssetInterface::UGameplayTagAssetInterface
          (UGameplayTagAssetInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGameplayTagAssetInterface__6B_;
  return this;
}

// UGameplayTagAssetInterface @ 146acc960

UGameplayTagAssetInterface * __thiscall
UGameplayTagAssetInterface::UGameplayTagAssetInterface
          (UGameplayTagAssetInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGameplayTagAssetInterface__6B_;
  return this;
}

// ~UGameplayTagAssetInterface @ 146acdb80

void __thiscall
UGameplayTagAssetInterface::~UGameplayTagAssetInterface(UGameplayTagAssetInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146adf500

UClass * __cdecl UGameplayTagAssetInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagAssetInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"GameplayTagAssetInterface",
               &Z_Registration_Info_UClass_UGameplayTagAssetInterface.InnerSingleton,
               StaticRegisterNativesUGameplayTagAssetInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayTagAssetInterface>,
               InternalVTableHelperCtorCaller<UGameplayTagAssetInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagAssetInterface.InnerSingleton;
}

// StaticRegisterNativesUGameplayTagAssetInterface @ 146aedb20

void __cdecl UGameplayTagAssetInterface::StaticRegisterNativesUGameplayTagAssetInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UGameplayTagAssetInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

