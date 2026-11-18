// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147e44960

UClass * __cdecl ULevelInstanceInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceInterface",
               &Z_Registration_Info_UClass_ULevelInstanceInterface.InnerSingleton,
               StaticRegisterNativesULevelInstanceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstanceInterface>,
               InternalVTableHelperCtorCaller<ULevelInstanceInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceInterface.InnerSingleton;
}

// ULevelInstanceInterface @ 147e55990

ULevelInstanceInterface * __thiscall
ULevelInstanceInterface::ULevelInstanceInterface
          (ULevelInstanceInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7ULevelInstanceInterface__6B_;
  return this;
}

// ULevelInstanceInterface @ 147e559c0

ULevelInstanceInterface * __thiscall
ULevelInstanceInterface::ULevelInstanceInterface
          (ULevelInstanceInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7ULevelInstanceInterface__6B_;
  return this;
}

// ~ULevelInstanceInterface @ 147e57ad0

void __thiscall ULevelInstanceInterface::~ULevelInstanceInterface(ULevelInstanceInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147e69d40

UClass * __cdecl ULevelInstanceInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceInterface",
               &Z_Registration_Info_UClass_ULevelInstanceInterface.InnerSingleton,
               StaticRegisterNativesULevelInstanceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelInstanceInterface>,
               InternalVTableHelperCtorCaller<ULevelInstanceInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceInterface.InnerSingleton;
}

// StaticRegisterNativesULevelInstanceInterface @ 147e822d0

void __cdecl ULevelInstanceInterface::StaticRegisterNativesULevelInstanceInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_ULevelInstanceInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

