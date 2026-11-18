// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 6

// StaticClass @ 14453d210

UClass * __cdecl UTypedElementSelectionInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementSelectionInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementRuntime",L"TypedElementSelectionInterface",
               &Z_Registration_Info_UClass_UTypedElementSelectionInterface.InnerSingleton,
               StaticRegisterNativesUTypedElementSelectionInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementSelectionInterface>,
               InternalVTableHelperCtorCaller<UTypedElementSelectionInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementSelectionInterface.InnerSingleton;
}

// UTypedElementSelectionInterface @ 14453ef00

UTypedElementSelectionInterface * __thiscall
UTypedElementSelectionInterface::UTypedElementSelectionInterface
          (UTypedElementSelectionInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTypedElementSelectionInterface__6B_;
  return this;
}

// UTypedElementSelectionInterface @ 14453ef30

UTypedElementSelectionInterface * __thiscall
UTypedElementSelectionInterface::UTypedElementSelectionInterface
          (UTypedElementSelectionInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTypedElementSelectionInterface__6B_;
  return this;
}

// ~UTypedElementSelectionInterface @ 14453f400

void __thiscall
UTypedElementSelectionInterface::~UTypedElementSelectionInterface
          (UTypedElementSelectionInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 144545d10

UClass * __cdecl UTypedElementSelectionInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementSelectionInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementRuntime",L"TypedElementSelectionInterface",
               &Z_Registration_Info_UClass_UTypedElementSelectionInterface.InnerSingleton,
               StaticRegisterNativesUTypedElementSelectionInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementSelectionInterface>,
               InternalVTableHelperCtorCaller<UTypedElementSelectionInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementSelectionInterface.InnerSingleton;
}

// StaticRegisterNativesUTypedElementSelectionInterface @ 14454a780

void __cdecl
UTypedElementSelectionInterface::StaticRegisterNativesUTypedElementSelectionInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UTypedElementSelectionInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

