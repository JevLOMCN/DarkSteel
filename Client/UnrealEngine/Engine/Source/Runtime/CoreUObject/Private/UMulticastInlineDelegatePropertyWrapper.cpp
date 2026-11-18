// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e4e3c0

UClass * __cdecl UMulticastInlineDelegatePropertyWrapper::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMulticastInlineDelegatePropertyWrapper.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MulticastInlineDelegatePropertyWrapper",
               &Z_Registration_Info_UClass_UMulticastInlineDelegatePropertyWrapper.InnerSingleton,
               StaticRegisterNativesUMulticastInlineDelegatePropertyWrapper,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMulticastInlineDelegatePropertyWrapper>,
               InternalVTableHelperCtorCaller<UMulticastInlineDelegatePropertyWrapper>,aFStackX_8,
               UMulticastDelegatePropertyWrapper::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMulticastInlineDelegatePropertyWrapper.InnerSingleton;
}

// UMulticastInlineDelegatePropertyWrapper @ 141e56c90

UMulticastInlineDelegatePropertyWrapper * __thiscall
UMulticastInlineDelegatePropertyWrapper::UMulticastInlineDelegatePropertyWrapper
          (UMulticastInlineDelegatePropertyWrapper *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMulticastInlineDelegatePropertyWrapper__6B_;
  return this;
}

// ~UMulticastInlineDelegatePropertyWrapper @ 141e579b0

void __thiscall
UMulticastInlineDelegatePropertyWrapper::~UMulticastInlineDelegatePropertyWrapper
          (UMulticastInlineDelegatePropertyWrapper *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5c590

UClass * __cdecl UMulticastInlineDelegatePropertyWrapper::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMulticastInlineDelegatePropertyWrapper.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MulticastInlineDelegatePropertyWrapper",
               &Z_Registration_Info_UClass_UMulticastInlineDelegatePropertyWrapper.InnerSingleton,
               StaticRegisterNativesUMulticastInlineDelegatePropertyWrapper,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMulticastInlineDelegatePropertyWrapper>,
               InternalVTableHelperCtorCaller<UMulticastInlineDelegatePropertyWrapper>,local_res8,
               UMulticastDelegatePropertyWrapper::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMulticastInlineDelegatePropertyWrapper.InnerSingleton;
}

// StaticRegisterNativesUMulticastInlineDelegatePropertyWrapper @ 141e60750

void __cdecl
UMulticastInlineDelegatePropertyWrapper::
StaticRegisterNativesUMulticastInlineDelegatePropertyWrapper(void)

{
  return;
}

