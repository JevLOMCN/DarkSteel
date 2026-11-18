// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 6

// StaticClass @ 14453b940

UClass * __cdecl UTypedElementAssetDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementAssetDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementRuntime",L"TypedElementAssetDataInterface",
               &Z_Registration_Info_UClass_UTypedElementAssetDataInterface.InnerSingleton,
               StaticRegisterNativesUTypedElementAssetDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementAssetDataInterface>,
               InternalVTableHelperCtorCaller<UTypedElementAssetDataInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementAssetDataInterface.InnerSingleton;
}

// UTypedElementAssetDataInterface @ 14453ed80

UTypedElementAssetDataInterface * __thiscall
UTypedElementAssetDataInterface::UTypedElementAssetDataInterface
          (UTypedElementAssetDataInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTypedElementAssetDataInterface__6B_;
  return this;
}

// UTypedElementAssetDataInterface @ 14453edb0

UTypedElementAssetDataInterface * __thiscall
UTypedElementAssetDataInterface::UTypedElementAssetDataInterface
          (UTypedElementAssetDataInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTypedElementAssetDataInterface__6B_;
  return this;
}

// ~UTypedElementAssetDataInterface @ 14453f3c0

void __thiscall
UTypedElementAssetDataInterface::~UTypedElementAssetDataInterface
          (UTypedElementAssetDataInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 144545a10

UClass * __cdecl UTypedElementAssetDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementAssetDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementRuntime",L"TypedElementAssetDataInterface",
               &Z_Registration_Info_UClass_UTypedElementAssetDataInterface.InnerSingleton,
               StaticRegisterNativesUTypedElementAssetDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementAssetDataInterface>,
               InternalVTableHelperCtorCaller<UTypedElementAssetDataInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementAssetDataInterface.InnerSingleton;
}

// StaticRegisterNativesUTypedElementAssetDataInterface @ 14454a680

void __cdecl
UTypedElementAssetDataInterface::StaticRegisterNativesUTypedElementAssetDataInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UTypedElementAssetDataInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

