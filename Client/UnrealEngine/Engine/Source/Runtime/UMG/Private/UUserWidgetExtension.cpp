// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 13

// StaticClass @ 1468ddd20

UClass * __cdecl UUserWidgetExtension::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserWidgetExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserWidgetExtension",
               &Z_Registration_Info_UClass_UUserWidgetExtension.InnerSingleton,
               StaticRegisterNativesUUserWidgetExtension,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UUserWidgetExtension>,
               InternalVTableHelperCtorCaller<UUserWidgetExtension>,local_res8,UObject::StaticClass,
               UUserWidget::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserWidgetExtension.InnerSingleton;
}

// UUserWidgetExtension @ 146902610

UUserWidgetExtension * __thiscall
UUserWidgetExtension::UUserWidgetExtension(UUserWidgetExtension *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UUserWidgetExtension__6B_;
  return this;
}

// UUserWidgetExtension @ 146902640

UUserWidgetExtension * __thiscall
UUserWidgetExtension::UUserWidgetExtension(UUserWidgetExtension *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UUserWidgetExtension__6B_;
  return this;
}

// ~UUserWidgetExtension @ 146904f00

void __thiscall UUserWidgetExtension::~UUserWidgetExtension(UUserWidgetExtension *this)

{
  *(undefined ***)this = &___7UUserWidgetExtension__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Construct @ 1469105a0

void __thiscall UUserWidgetExtension::Construct(UUserWidgetExtension *this)

{
  return;
}

// Destruct @ 146914190

void __thiscall UUserWidgetExtension::Destruct(UUserWidgetExtension *this)

{
  return;
}

// GetPrivateStaticClass @ 1469230f0

UClass * __cdecl UUserWidgetExtension::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserWidgetExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserWidgetExtension",
               &Z_Registration_Info_UClass_UUserWidgetExtension.InnerSingleton,
               StaticRegisterNativesUUserWidgetExtension,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UUserWidgetExtension>,
               InternalVTableHelperCtorCaller<UUserWidgetExtension>,local_res8,UObject::StaticClass,
               UUserWidget::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserWidgetExtension.InnerSingleton;
}

// Initialize @ 14692ad40

void __thiscall UUserWidgetExtension::Initialize(UUserWidgetExtension *this)

{
  return;
}

// InitializeInEditor @ 14692beb0

void __thiscall UUserWidgetExtension::InitializeInEditor(UUserWidgetExtension *this)

{
  return;
}

// PreConstruct @ 1469336d0

void __thiscall UUserWidgetExtension::PreConstruct(UUserWidgetExtension *this,bool param_1)

{
  return;
}

// RequiresTick @ 14693c770

bool __thiscall UUserWidgetExtension::RequiresTick(UUserWidgetExtension *this)

{
  return false;
}

// StaticRegisterNativesUUserWidgetExtension @ 146945b60

void __cdecl UUserWidgetExtension::StaticRegisterNativesUUserWidgetExtension(void)

{
  return;
}

// Tick @ 146948a00

void __thiscall
UUserWidgetExtension::Tick(UUserWidgetExtension *this,FGeometry *param_1,float param_2)

{
  return;
}

