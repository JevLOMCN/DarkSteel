// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 8

// StaticClass @ 1468de930

UClass * __cdecl UWidgetBinaryStateRegistration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetBinaryStateRegistration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetBinaryStateRegistration",
               &Z_Registration_Info_UClass_UWidgetBinaryStateRegistration.InnerSingleton,
               StaticRegisterNativesUWidgetBinaryStateRegistration,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetBinaryStateRegistration>,
               InternalVTableHelperCtorCaller<UWidgetBinaryStateRegistration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetBinaryStateRegistration.InnerSingleton;
}

// UWidgetBinaryStateRegistration @ 146902930

UWidgetBinaryStateRegistration * __thiscall
UWidgetBinaryStateRegistration::UWidgetBinaryStateRegistration
          (UWidgetBinaryStateRegistration *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWidgetBinaryStateRegistration__6B_;
  return this;
}

// ~UWidgetBinaryStateRegistration @ 146905080

void __thiscall
UWidgetBinaryStateRegistration::~UWidgetBinaryStateRegistration
          (UWidgetBinaryStateRegistration *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146923560

UClass * __cdecl UWidgetBinaryStateRegistration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetBinaryStateRegistration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetBinaryStateRegistration",
               &Z_Registration_Info_UClass_UWidgetBinaryStateRegistration.InnerSingleton,
               StaticRegisterNativesUWidgetBinaryStateRegistration,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetBinaryStateRegistration>,
               InternalVTableHelperCtorCaller<UWidgetBinaryStateRegistration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetBinaryStateRegistration.InnerSingleton;
}

// GetRegisteredWidgetState @ 146923fa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWidgetBinaryStateRegistration::GetRegisteredWidgetState
          (UWidgetBinaryStateRegistration *this,UWidget *param_1)

{
  return false;
}

// GetStateName @ 146924540

FName __thiscall UWidgetBinaryStateRegistration::GetStateName(UWidgetBinaryStateRegistration *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// InitializeStaticBitfields @ 14692bf00

void __thiscall
UWidgetBinaryStateRegistration::InitializeStaticBitfields(UWidgetBinaryStateRegistration *this)

{
  return;
}

// StaticRegisterNativesUWidgetBinaryStateRegistration @ 146945c80

void __cdecl
UWidgetBinaryStateRegistration::StaticRegisterNativesUWidgetBinaryStateRegistration(void)

{
  return;
}

