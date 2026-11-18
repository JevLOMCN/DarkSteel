// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147513c60

UClass * __cdecl UCurveSourceInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveSourceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveSourceInterface",
               &Z_Registration_Info_UClass_UCurveSourceInterface.InnerSingleton,
               StaticRegisterNativesUCurveSourceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCurveSourceInterface>,
               InternalVTableHelperCtorCaller<UCurveSourceInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveSourceInterface.InnerSingleton;
}

// UCurveSourceInterface @ 147532b10

UCurveSourceInterface * __thiscall
UCurveSourceInterface::UCurveSourceInterface(UCurveSourceInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UCurveSourceInterface__6B_;
  return this;
}

// UCurveSourceInterface @ 147532b40

UCurveSourceInterface * __thiscall
UCurveSourceInterface::UCurveSourceInterface
          (UCurveSourceInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UCurveSourceInterface__6B_;
  return this;
}

// ~UCurveSourceInterface @ 147533df0

void __thiscall UCurveSourceInterface::~UCurveSourceInterface(UCurveSourceInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14755f340

UClass * __cdecl UCurveSourceInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveSourceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveSourceInterface",
               &Z_Registration_Info_UClass_UCurveSourceInterface.InnerSingleton,
               StaticRegisterNativesUCurveSourceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCurveSourceInterface>,
               InternalVTableHelperCtorCaller<UCurveSourceInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveSourceInterface.InnerSingleton;
}

// StaticRegisterNativesUCurveSourceInterface @ 14757ad80

void __cdecl UCurveSourceInterface::StaticRegisterNativesUCurveSourceInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UCurveSourceInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

