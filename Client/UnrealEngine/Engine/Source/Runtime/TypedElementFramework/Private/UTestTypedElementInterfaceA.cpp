// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 6

// StaticClass @ 142c88f50

UClass * __cdecl UTestTypedElementInterfaceA::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceA.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceA",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceA.InnerSingleton,
               StaticRegisterNativesUTestTypedElementInterfaceA,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTestTypedElementInterfaceA>,
               InternalVTableHelperCtorCaller<UTestTypedElementInterfaceA>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceA.InnerSingleton;
}

// UTestTypedElementInterfaceA @ 142c98aa0

UTestTypedElementInterfaceA * __thiscall
UTestTypedElementInterfaceA::UTestTypedElementInterfaceA
          (UTestTypedElementInterfaceA *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTestTypedElementInterfaceA__6B_;
  return this;
}

// UTestTypedElementInterfaceA @ 142c98ad0

UTestTypedElementInterfaceA * __thiscall
UTestTypedElementInterfaceA::UTestTypedElementInterfaceA
          (UTestTypedElementInterfaceA *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTestTypedElementInterfaceA__6B_;
  return this;
}

// ~UTestTypedElementInterfaceA @ 142c9a8e0

void __thiscall
UTestTypedElementInterfaceA::~UTestTypedElementInterfaceA(UTestTypedElementInterfaceA *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 142cae540

UClass * __cdecl UTestTypedElementInterfaceA::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceA.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceA",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceA.InnerSingleton,
               StaticRegisterNativesUTestTypedElementInterfaceA,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTestTypedElementInterfaceA>,
               InternalVTableHelperCtorCaller<UTestTypedElementInterfaceA>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceA.InnerSingleton;
}

// StaticRegisterNativesUTestTypedElementInterfaceA @ 142cbc220

void __cdecl UTestTypedElementInterfaceA::StaticRegisterNativesUTestTypedElementInterfaceA(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UTestTypedElementInterfaceA_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

