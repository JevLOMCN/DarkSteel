// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 6

// StaticClass @ 142c81fe0

UClass * __cdecl UTestTypedElementInterfaceC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceC.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceC",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceC.InnerSingleton,
               StaticRegisterNativesUTestTypedElementInterfaceC,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTestTypedElementInterfaceC>,
               InternalVTableHelperCtorCaller<UTestTypedElementInterfaceC>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceC.InnerSingleton;
}

// UTestTypedElementInterfaceC @ 142c98ce0

UTestTypedElementInterfaceC * __thiscall
UTestTypedElementInterfaceC::UTestTypedElementInterfaceC
          (UTestTypedElementInterfaceC *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTestTypedElementInterfaceC__6B_;
  return this;
}

// UTestTypedElementInterfaceC @ 142c98d10

UTestTypedElementInterfaceC * __thiscall
UTestTypedElementInterfaceC::UTestTypedElementInterfaceC
          (UTestTypedElementInterfaceC *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTestTypedElementInterfaceC__6B_;
  return this;
}

// ~UTestTypedElementInterfaceC @ 142c9a970

void __thiscall
UTestTypedElementInterfaceC::~UTestTypedElementInterfaceC(UTestTypedElementInterfaceC *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 142cae8d0

UClass * __cdecl UTestTypedElementInterfaceC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceC",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceC.InnerSingleton,
               StaticRegisterNativesUTestTypedElementInterfaceC,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTestTypedElementInterfaceC>,
               InternalVTableHelperCtorCaller<UTestTypedElementInterfaceC>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceC.InnerSingleton;
}

// StaticRegisterNativesUTestTypedElementInterfaceC @ 142cbc2d0

void __cdecl UTestTypedElementInterfaceC::StaticRegisterNativesUTestTypedElementInterfaceC(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UTestTypedElementInterfaceC_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

