// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyBindingUtils
// Functions: 6

// StaticClass @ 14d379790

UClass * __cdecl UPropertyBindingBindingCollectionOwner::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyBindingBindingCollectionOwner.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PropertyBindingUtils",L"PropertyBindingBindingCollectionOwner",
               &Z_Registration_Info_UClass_UPropertyBindingBindingCollectionOwner.InnerSingleton,
               StaticRegisterNativesUPropertyBindingBindingCollectionOwner,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPropertyBindingBindingCollectionOwner>,
               InternalVTableHelperCtorCaller<UPropertyBindingBindingCollectionOwner>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyBindingBindingCollectionOwner.InnerSingleton;
}

// UPropertyBindingBindingCollectionOwner @ 14d37ce70

UPropertyBindingBindingCollectionOwner * __thiscall
UPropertyBindingBindingCollectionOwner::UPropertyBindingBindingCollectionOwner
          (UPropertyBindingBindingCollectionOwner *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPropertyBindingBindingCollectionOwner__6B_;
  return this;
}

// UPropertyBindingBindingCollectionOwner @ 14d37cea0

UPropertyBindingBindingCollectionOwner * __thiscall
UPropertyBindingBindingCollectionOwner::UPropertyBindingBindingCollectionOwner
          (UPropertyBindingBindingCollectionOwner *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPropertyBindingBindingCollectionOwner__6B_;
  return this;
}

// ~UPropertyBindingBindingCollectionOwner @ 14d37cfd0

void __thiscall
UPropertyBindingBindingCollectionOwner::~UPropertyBindingBindingCollectionOwner
          (UPropertyBindingBindingCollectionOwner *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d380a40

UClass * __cdecl UPropertyBindingBindingCollectionOwner::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyBindingBindingCollectionOwner.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PropertyBindingUtils",L"PropertyBindingBindingCollectionOwner",
               &Z_Registration_Info_UClass_UPropertyBindingBindingCollectionOwner.InnerSingleton,
               StaticRegisterNativesUPropertyBindingBindingCollectionOwner,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPropertyBindingBindingCollectionOwner>,
               InternalVTableHelperCtorCaller<UPropertyBindingBindingCollectionOwner>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyBindingBindingCollectionOwner.InnerSingleton;
}

// StaticRegisterNativesUPropertyBindingBindingCollectionOwner @ 14d3840b0

void __cdecl
UPropertyBindingBindingCollectionOwner::StaticRegisterNativesUPropertyBindingBindingCollectionOwner
          (void)

{
  return;
}

