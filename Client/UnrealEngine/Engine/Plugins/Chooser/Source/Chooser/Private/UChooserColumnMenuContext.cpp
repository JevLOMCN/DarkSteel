// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticClass @ 14a873f70

UClass * __cdecl UChooserColumnMenuContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChooserColumnMenuContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserColumnMenuContext",
               &Z_Registration_Info_UClass_UChooserColumnMenuContext.InnerSingleton,
               StaticRegisterNativesUChooserColumnMenuContext,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChooserColumnMenuContext>,
               InternalVTableHelperCtorCaller<UChooserColumnMenuContext>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserColumnMenuContext.InnerSingleton;
}

// UChooserColumnMenuContext @ 14a87d8a0

UChooserColumnMenuContext * __thiscall
UChooserColumnMenuContext::UChooserColumnMenuContext
          (UChooserColumnMenuContext *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UChooserColumnMenuContext__6B_;
  (this->Chooser).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UChooserColumnMenuContext @ 14a87d8d0

UChooserColumnMenuContext * __thiscall
UChooserColumnMenuContext::UChooserColumnMenuContext
          (UChooserColumnMenuContext *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UChooserColumnMenuContext__6B_;
  (this->Chooser).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UChooserColumnMenuContext @ 14a87e680

void __thiscall
UChooserColumnMenuContext::~UChooserColumnMenuContext(UChooserColumnMenuContext *this)

{
  this->_padding_ = (longlong)&___7UChooserColumnMenuContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a88a740

UClass * __cdecl UChooserColumnMenuContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChooserColumnMenuContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"ChooserColumnMenuContext",
               &Z_Registration_Info_UClass_UChooserColumnMenuContext.InnerSingleton,
               StaticRegisterNativesUChooserColumnMenuContext,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChooserColumnMenuContext>,
               InternalVTableHelperCtorCaller<UChooserColumnMenuContext>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserColumnMenuContext.InnerSingleton;
}

// StaticRegisterNativesUChooserColumnMenuContext @ 14a88fd90

void __cdecl UChooserColumnMenuContext::StaticRegisterNativesUChooserColumnMenuContext(void)

{
  return;
}

