// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 6

// StaticClass @ 14a737300

UClass * __cdecl UMVVMViewExtension::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewExtension",
               &Z_Registration_Info_UClass_UMVVMViewExtension.InnerSingleton,
               StaticRegisterNativesUMVVMViewExtension,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMVVMViewExtension>,
               InternalVTableHelperCtorCaller<UMVVMViewExtension>,local_res8,UObject::StaticClass,
               UMVVMView::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewExtension.InnerSingleton;
}

// UMVVMViewExtension @ 14a73ff30

UMVVMViewExtension * __thiscall
UMVVMViewExtension::UMVVMViewExtension(UMVVMViewExtension *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMVVMViewExtension__6B_;
  return this;
}

// UMVVMViewExtension @ 14a73ff60

UMVVMViewExtension * __thiscall
UMVVMViewExtension::UMVVMViewExtension(UMVVMViewExtension *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMVVMViewExtension__6B_;
  return this;
}

// ~UMVVMViewExtension @ 14a740910

void __thiscall UMVVMViewExtension::~UMVVMViewExtension(UMVVMViewExtension *this)

{
  *(undefined ***)this = &___7UMVVMViewExtension__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a753e30

UClass * __cdecl UMVVMViewExtension::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewExtension",
               &Z_Registration_Info_UClass_UMVVMViewExtension.InnerSingleton,
               StaticRegisterNativesUMVVMViewExtension,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMVVMViewExtension>,
               InternalVTableHelperCtorCaller<UMVVMViewExtension>,local_res8,UObject::StaticClass,
               UMVVMView::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewExtension.InnerSingleton;
}

// StaticRegisterNativesUMVVMViewExtension @ 14a760230

void __cdecl UMVVMViewExtension::StaticRegisterNativesUMVVMViewExtension(void)

{
  return;
}

