// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 9

// StaticClass @ 1468df2f0

UClass * __cdecl UWidgetEnumStateRegistration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetEnumStateRegistration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetEnumStateRegistration",
               &Z_Registration_Info_UClass_UWidgetEnumStateRegistration.InnerSingleton,
               StaticRegisterNativesUWidgetEnumStateRegistration,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetEnumStateRegistration>,
               InternalVTableHelperCtorCaller<UWidgetEnumStateRegistration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetEnumStateRegistration.InnerSingleton;
}

// UWidgetEnumStateRegistration @ 146902ac0

UWidgetEnumStateRegistration * __thiscall
UWidgetEnumStateRegistration::UWidgetEnumStateRegistration
          (UWidgetEnumStateRegistration *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWidgetEnumStateRegistration__6B_;
  return this;
}

// ~UWidgetEnumStateRegistration @ 146905100

void __thiscall
UWidgetEnumStateRegistration::~UWidgetEnumStateRegistration(UWidgetEnumStateRegistration *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146923840

UClass * __cdecl UWidgetEnumStateRegistration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetEnumStateRegistration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetEnumStateRegistration",
               &Z_Registration_Info_UClass_UWidgetEnumStateRegistration.InnerSingleton,
               StaticRegisterNativesUWidgetEnumStateRegistration,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetEnumStateRegistration>,
               InternalVTableHelperCtorCaller<UWidgetEnumStateRegistration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetEnumStateRegistration.InnerSingleton;
}

// GetRegisteredWidgetState @ 146923fd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uchar __thiscall
UWidgetEnumStateRegistration::GetRegisteredWidgetState
          (UWidgetEnumStateRegistration *this,UWidget *param_1)

{
  return '\0';
}

// GetRegisteredWidgetUsesState @ 146924010

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWidgetEnumStateRegistration::GetRegisteredWidgetUsesState
          (UWidgetEnumStateRegistration *this,UWidget *param_1)

{
  return false;
}

// GetStateName @ 146924570

FName __thiscall UWidgetEnumStateRegistration::GetStateName(UWidgetEnumStateRegistration *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// InitializeStaticBitfields @ 14692bf80

void __thiscall
UWidgetEnumStateRegistration::InitializeStaticBitfields(UWidgetEnumStateRegistration *this)

{
  return;
}

// StaticRegisterNativesUWidgetEnumStateRegistration @ 146945cf0

void __cdecl UWidgetEnumStateRegistration::StaticRegisterNativesUWidgetEnumStateRegistration(void)

{
  return;
}

