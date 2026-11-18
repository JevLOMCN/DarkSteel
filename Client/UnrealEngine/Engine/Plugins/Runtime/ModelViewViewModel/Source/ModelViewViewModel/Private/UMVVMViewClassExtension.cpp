// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 14

// StaticClass @ 14a737470

UClass * __cdecl UMVVMViewClassExtension::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewClassExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewClassExtension",
               &Z_Registration_Info_UClass_UMVVMViewClassExtension.InnerSingleton,
               StaticRegisterNativesUMVVMViewClassExtension,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMVVMViewClassExtension>,
               InternalVTableHelperCtorCaller<UMVVMViewClassExtension>,local_res8,
               UObject::StaticClass,UMVVMViewClass::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewClassExtension.InnerSingleton;
}

// UMVVMViewClassExtension @ 14a73fed0

UMVVMViewClassExtension * __thiscall
UMVVMViewClassExtension::UMVVMViewClassExtension
          (UMVVMViewClassExtension *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMVVMViewClassExtension__6B_;
  return this;
}

// UMVVMViewClassExtension @ 14a73ff00

UMVVMViewClassExtension * __thiscall
UMVVMViewClassExtension::UMVVMViewClassExtension
          (UMVVMViewClassExtension *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMVVMViewClassExtension__6B_;
  return this;
}

// ~UMVVMViewClassExtension @ 14a7408f0

void __thiscall UMVVMViewClassExtension::~UMVVMViewClassExtension(UMVVMViewClassExtension *this)

{
  *(undefined ***)this = &___7UMVVMViewClassExtension__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a753d70

UClass * __cdecl UMVVMViewClassExtension::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewClassExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewClassExtension",
               &Z_Registration_Info_UClass_UMVVMViewClassExtension.InnerSingleton,
               StaticRegisterNativesUMVVMViewClassExtension,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMVVMViewClassExtension>,
               InternalVTableHelperCtorCaller<UMVVMViewClassExtension>,local_res8,
               UObject::StaticClass,UMVVMViewClass::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewClassExtension.InnerSingleton;
}

// OnBindingsInitialized @ 14a75b870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UMVVMViewClassExtension::OnBindingsInitialized
          (UMVVMViewClassExtension *this,UUserWidget *param_1,UMVVMView *param_2,
          UMVVMViewExtension *param_3)

{
  return;
}

// OnBindingsUninitialized @ 14a75b880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UMVVMViewClassExtension::OnBindingsUninitialized
          (UMVVMViewClassExtension *this,UUserWidget *param_1,UMVVMView *param_2,
          UMVVMViewExtension *param_3)

{
  return;
}

// OnEventsInitialized @ 14a75b890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UMVVMViewClassExtension::OnEventsInitialized
          (UMVVMViewClassExtension *this,UUserWidget *param_1,UMVVMView *param_2,
          UMVVMViewExtension *param_3)

{
  return;
}

// OnEventsUninitialized @ 14a75b8a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UMVVMViewClassExtension::OnEventsUninitialized
          (UMVVMViewClassExtension *this,UUserWidget *param_1,UMVVMView *param_2,
          UMVVMViewExtension *param_3)

{
  return;
}

// OnSourcesInitialized @ 14a75b9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UMVVMViewClassExtension::OnSourcesInitialized
          (UMVVMViewClassExtension *this,UUserWidget *param_1,UMVVMView *param_2,
          UMVVMViewExtension *param_3)

{
  return;
}

// OnSourcesUninitialized @ 14a75bf10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UMVVMViewClassExtension::OnSourcesUninitialized
          (UMVVMViewClassExtension *this,UUserWidget *param_1,UMVVMView *param_2,
          UMVVMViewExtension *param_3)

{
  return;
}

// OnViewDestructed @ 14a75bfe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UMVVMViewClassExtension::OnViewDestructed
          (UMVVMViewClassExtension *this,UUserWidget *param_1,UMVVMView *param_2,
          UMVVMViewExtension *param_3)

{
  return;
}

// StaticRegisterNativesUMVVMViewClassExtension @ 14a760220

void __cdecl UMVVMViewClassExtension::StaticRegisterNativesUMVVMViewClassExtension(void)

{
  return;
}

// ViewConstructed @ 14a767d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMVVMViewExtension * __thiscall
UMVVMViewClassExtension::ViewConstructed
          (UMVVMViewClassExtension *this,UUserWidget *param_1,UMVVMView *param_2)

{
  return (UMVVMViewExtension *)0x0;
}

