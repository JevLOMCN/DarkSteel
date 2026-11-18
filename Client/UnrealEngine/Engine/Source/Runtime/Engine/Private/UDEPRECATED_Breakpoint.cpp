// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1476724d0

UClass * __cdecl UDEPRECATED_Breakpoint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_Breakpoint.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Breakpoint",
               &Z_Registration_Info_UClass_UDEPRECATED_Breakpoint.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_Breakpoint,0x28,8,CLASS_Intrinsic|CLASS_Deprecated,
               CASTCLASS_None,L"Engine",InternalConstructor<UDEPRECATED_Breakpoint>,
               InternalVTableHelperCtorCaller<UDEPRECATED_Breakpoint>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_Breakpoint.InnerSingleton;
}

// UDEPRECATED_Breakpoint @ 147689050

UDEPRECATED_Breakpoint * __thiscall
UDEPRECATED_Breakpoint::UDEPRECATED_Breakpoint(UDEPRECATED_Breakpoint *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDEPRECATED_Breakpoint__6B_;
  return this;
}

// UDEPRECATED_Breakpoint @ 147689080

UDEPRECATED_Breakpoint * __thiscall
UDEPRECATED_Breakpoint::UDEPRECATED_Breakpoint
          (UDEPRECATED_Breakpoint *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDEPRECATED_Breakpoint__6B_;
  return this;
}

// ~UDEPRECATED_Breakpoint @ 14768abe0

void __thiscall UDEPRECATED_Breakpoint::~UDEPRECATED_Breakpoint(UDEPRECATED_Breakpoint *this)

{
  *(undefined ***)this = &___7UDEPRECATED_Breakpoint__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1476b4820

UClass * __cdecl UDEPRECATED_Breakpoint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_Breakpoint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Breakpoint",
               &Z_Registration_Info_UClass_UDEPRECATED_Breakpoint.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_Breakpoint,0x28,8,CLASS_Intrinsic|CLASS_Deprecated,
               CASTCLASS_None,L"Engine",InternalConstructor<UDEPRECATED_Breakpoint>,
               InternalVTableHelperCtorCaller<UDEPRECATED_Breakpoint>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_Breakpoint.InnerSingleton;
}

// StaticRegisterNativesUDEPRECATED_Breakpoint @ 1476ca460

void __cdecl UDEPRECATED_Breakpoint::StaticRegisterNativesUDEPRECATED_Breakpoint(void)

{
  return;
}

