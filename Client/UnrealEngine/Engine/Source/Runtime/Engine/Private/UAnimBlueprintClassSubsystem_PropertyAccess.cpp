// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147257a70

UClass * __cdecl UAnimBlueprintClassSubsystem_PropertyAccess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBlueprintClassSubsystem_PropertyAccess.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBlueprintClassSubsystem_PropertyAccess",
               &Z_Registration_Info_UClass_UAnimBlueprintClassSubsystem_PropertyAccess.
                InnerSingleton,StaticRegisterNativesUAnimBlueprintClassSubsystem_PropertyAccess,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimBlueprintClassSubsystem_PropertyAccess>,
               InternalVTableHelperCtorCaller<UAnimBlueprintClassSubsystem_PropertyAccess>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBlueprintClassSubsystem_PropertyAccess.InnerSingleton;
}

// UAnimBlueprintClassSubsystem_PropertyAccess @ 14725cb30

UAnimBlueprintClassSubsystem_PropertyAccess * __thiscall
UAnimBlueprintClassSubsystem_PropertyAccess::UAnimBlueprintClassSubsystem_PropertyAccess
          (UAnimBlueprintClassSubsystem_PropertyAccess *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimBlueprintClassSubsystem_PropertyAccess__6B_;
  return this;
}

// UAnimBlueprintClassSubsystem_PropertyAccess @ 14725cb60

UAnimBlueprintClassSubsystem_PropertyAccess * __thiscall
UAnimBlueprintClassSubsystem_PropertyAccess::UAnimBlueprintClassSubsystem_PropertyAccess
          (UAnimBlueprintClassSubsystem_PropertyAccess *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimBlueprintClassSubsystem_PropertyAccess__6B_;
  return this;
}

// ~UAnimBlueprintClassSubsystem_PropertyAccess @ 14725dad0

void __thiscall
UAnimBlueprintClassSubsystem_PropertyAccess::~UAnimBlueprintClassSubsystem_PropertyAccess
          (UAnimBlueprintClassSubsystem_PropertyAccess *this)

{
  *(undefined ***)this = &___7UAnimBlueprintClassSubsystem_PropertyAccess__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14725fe00

UClass * __cdecl UAnimBlueprintClassSubsystem_PropertyAccess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBlueprintClassSubsystem_PropertyAccess.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBlueprintClassSubsystem_PropertyAccess",
               &Z_Registration_Info_UClass_UAnimBlueprintClassSubsystem_PropertyAccess.
                InnerSingleton,StaticRegisterNativesUAnimBlueprintClassSubsystem_PropertyAccess,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimBlueprintClassSubsystem_PropertyAccess>,
               InternalVTableHelperCtorCaller<UAnimBlueprintClassSubsystem_PropertyAccess>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBlueprintClassSubsystem_PropertyAccess.InnerSingleton;
}

// StaticRegisterNativesUAnimBlueprintClassSubsystem_PropertyAccess @ 147260e10

void __cdecl
UAnimBlueprintClassSubsystem_PropertyAccess::
StaticRegisterNativesUAnimBlueprintClassSubsystem_PropertyAccess(void)

{
  return;
}

