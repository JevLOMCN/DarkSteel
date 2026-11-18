// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e4e110

UClass * __cdecl UMulticastDelegatePropertyWrapper::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMulticastDelegatePropertyWrapper.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MulticastDelegatePropertyWrapper",
               &Z_Registration_Info_UClass_UMulticastDelegatePropertyWrapper.InnerSingleton,
               StaticRegisterNativesUMulticastDelegatePropertyWrapper,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMulticastDelegatePropertyWrapper>,
               InternalVTableHelperCtorCaller<UMulticastDelegatePropertyWrapper>,local_res8,
               UPropertyWrapper::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMulticastDelegatePropertyWrapper.InnerSingleton;
}

// UMulticastDelegatePropertyWrapper @ 141e56c20

UMulticastDelegatePropertyWrapper * __thiscall
UMulticastDelegatePropertyWrapper::UMulticastDelegatePropertyWrapper
          (UMulticastDelegatePropertyWrapper *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMulticastDelegatePropertyWrapper__6B_;
  return this;
}

// ~UMulticastDelegatePropertyWrapper @ 141e57970

void __thiscall
UMulticastDelegatePropertyWrapper::~UMulticastDelegatePropertyWrapper
          (UMulticastDelegatePropertyWrapper *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5c410

UClass * __cdecl UMulticastDelegatePropertyWrapper::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMulticastDelegatePropertyWrapper.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MulticastDelegatePropertyWrapper",
               &Z_Registration_Info_UClass_UMulticastDelegatePropertyWrapper.InnerSingleton,
               StaticRegisterNativesUMulticastDelegatePropertyWrapper,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMulticastDelegatePropertyWrapper>,
               InternalVTableHelperCtorCaller<UMulticastDelegatePropertyWrapper>,local_res8,
               UPropertyWrapper::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMulticastDelegatePropertyWrapper.InnerSingleton;
}

// StaticRegisterNativesUMulticastDelegatePropertyWrapper @ 141e60730

void __cdecl
UMulticastDelegatePropertyWrapper::StaticRegisterNativesUMulticastDelegatePropertyWrapper(void)

{
  return;
}

