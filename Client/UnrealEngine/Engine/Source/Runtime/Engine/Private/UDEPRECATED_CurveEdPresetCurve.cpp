// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147a0e5e0

UClass * __cdecl UDEPRECATED_CurveEdPresetCurve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveEdPresetCurve",
               &Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_CurveEdPresetCurve,0x28,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_CurveEdPresetCurve>,
               InternalVTableHelperCtorCaller<UDEPRECATED_CurveEdPresetCurve>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.InnerSingleton;
}

// UDEPRECATED_CurveEdPresetCurve @ 147a28130

UDEPRECATED_CurveEdPresetCurve * __thiscall
UDEPRECATED_CurveEdPresetCurve::UDEPRECATED_CurveEdPresetCurve
          (UDEPRECATED_CurveEdPresetCurve *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDEPRECATED_CurveEdPresetCurve__6B_;
  return this;
}

// UDEPRECATED_CurveEdPresetCurve @ 147a28160

UDEPRECATED_CurveEdPresetCurve * __thiscall
UDEPRECATED_CurveEdPresetCurve::UDEPRECATED_CurveEdPresetCurve
          (UDEPRECATED_CurveEdPresetCurve *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDEPRECATED_CurveEdPresetCurve__6B_;
  return this;
}

// ~UDEPRECATED_CurveEdPresetCurve @ 147a2a8a0

void __thiscall
UDEPRECATED_CurveEdPresetCurve::~UDEPRECATED_CurveEdPresetCurve
          (UDEPRECATED_CurveEdPresetCurve *this)

{
  *(undefined ***)this = &___7UDEPRECATED_CurveEdPresetCurve__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147a57300

UClass * __cdecl UDEPRECATED_CurveEdPresetCurve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveEdPresetCurve",
               &Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_CurveEdPresetCurve,0x28,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_CurveEdPresetCurve>,
               InternalVTableHelperCtorCaller<UDEPRECATED_CurveEdPresetCurve>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.InnerSingleton;
}

// StaticRegisterNativesUDEPRECATED_CurveEdPresetCurve @ 147a97620

void __cdecl
UDEPRECATED_CurveEdPresetCurve::StaticRegisterNativesUDEPRECATED_CurveEdPresetCurve(void)

{
  return;
}

