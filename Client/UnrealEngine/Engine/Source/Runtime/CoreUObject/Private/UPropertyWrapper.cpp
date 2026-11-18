// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// StaticClass @ 141e4dff0

UClass * __cdecl UPropertyWrapper::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyWrapper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"PropertyWrapper",
               &Z_Registration_Info_UClass_UPropertyWrapper.InnerSingleton,
               StaticRegisterNativesUPropertyWrapper,0x30,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPropertyWrapper>,
               InternalVTableHelperCtorCaller<UPropertyWrapper>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyWrapper.InnerSingleton;
}

// UPropertyWrapper @ 141e57250

UPropertyWrapper * __thiscall
UPropertyWrapper::UPropertyWrapper(UPropertyWrapper *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPropertyWrapper__6B_;
  return this;
}

// ~UPropertyWrapper @ 141e57c50

void __thiscall UPropertyWrapper::~UPropertyWrapper(UPropertyWrapper *this)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5d280

UClass * __cdecl UPropertyWrapper::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyWrapper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"PropertyWrapper",
               &Z_Registration_Info_UClass_UPropertyWrapper.InnerSingleton,
               StaticRegisterNativesUPropertyWrapper,0x30,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPropertyWrapper>,
               InternalVTableHelperCtorCaller<UPropertyWrapper>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyWrapper.InnerSingleton;
}

// StaticRegisterNativesUPropertyWrapper @ 141e60870

void __cdecl UPropertyWrapper::StaticRegisterNativesUPropertyWrapper(void)

{
  return;
}

