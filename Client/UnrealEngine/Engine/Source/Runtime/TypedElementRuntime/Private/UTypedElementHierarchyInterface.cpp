// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 6

// StaticClass @ 14453b440

UClass * __cdecl UTypedElementHierarchyInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementHierarchyInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementRuntime",L"TypedElementHierarchyInterface",
               &Z_Registration_Info_UClass_UTypedElementHierarchyInterface.InnerSingleton,
               StaticRegisterNativesUTypedElementHierarchyInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementHierarchyInterface>,
               InternalVTableHelperCtorCaller<UTypedElementHierarchyInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementHierarchyInterface.InnerSingleton;
}

// UTypedElementHierarchyInterface @ 14453ede0

UTypedElementHierarchyInterface * __thiscall
UTypedElementHierarchyInterface::UTypedElementHierarchyInterface
          (UTypedElementHierarchyInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTypedElementHierarchyInterface__6B_;
  return this;
}

// UTypedElementHierarchyInterface @ 14453ee10

UTypedElementHierarchyInterface * __thiscall
UTypedElementHierarchyInterface::UTypedElementHierarchyInterface
          (UTypedElementHierarchyInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTypedElementHierarchyInterface__6B_;
  return this;
}

// ~UTypedElementHierarchyInterface @ 14453f3d0

void __thiscall
UTypedElementHierarchyInterface::~UTypedElementHierarchyInterface
          (UTypedElementHierarchyInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 144545ad0

UClass * __cdecl UTypedElementHierarchyInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementHierarchyInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementRuntime",L"TypedElementHierarchyInterface",
               &Z_Registration_Info_UClass_UTypedElementHierarchyInterface.InnerSingleton,
               StaticRegisterNativesUTypedElementHierarchyInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementHierarchyInterface>,
               InternalVTableHelperCtorCaller<UTypedElementHierarchyInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementHierarchyInterface.InnerSingleton;
}

// StaticRegisterNativesUTypedElementHierarchyInterface @ 14454a6c0

void __cdecl
UTypedElementHierarchyInterface::StaticRegisterNativesUTypedElementHierarchyInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UTypedElementHierarchyInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

