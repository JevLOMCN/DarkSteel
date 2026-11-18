// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f8f620

UClass * __cdecl UNavMovementInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavMovementInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavMovementInterface",
               &Z_Registration_Info_UClass_UNavMovementInterface.InnerSingleton,
               StaticRegisterNativesUNavMovementInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavMovementInterface>,
               InternalVTableHelperCtorCaller<UNavMovementInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavMovementInterface.InnerSingleton;
}

// UNavMovementInterface @ 147fa61f0

UNavMovementInterface * __thiscall
UNavMovementInterface::UNavMovementInterface(UNavMovementInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavMovementInterface__6B_;
  return this;
}

// UNavMovementInterface @ 147fa6220

UNavMovementInterface * __thiscall
UNavMovementInterface::UNavMovementInterface
          (UNavMovementInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNavMovementInterface__6B_;
  return this;
}

// ~UNavMovementInterface @ 147fa97e0

void __thiscall UNavMovementInterface::~UNavMovementInterface(UNavMovementInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147fd6430

UClass * __cdecl UNavMovementInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavMovementInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavMovementInterface",
               &Z_Registration_Info_UClass_UNavMovementInterface.InnerSingleton,
               StaticRegisterNativesUNavMovementInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavMovementInterface>,
               InternalVTableHelperCtorCaller<UNavMovementInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavMovementInterface.InnerSingleton;
}

// StaticRegisterNativesUNavMovementInterface @ 147ff8860

void __cdecl UNavMovementInterface::StaticRegisterNativesUNavMovementInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UNavMovementInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

