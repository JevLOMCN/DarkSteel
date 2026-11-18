// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 8

// StaticClass @ 1441345e0

UClass * __cdecl UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsCore",L"PhysicalMaterialPropertyBase",
               &Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_PhysicalMaterialPropertyBase,0x28,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_PhysicalMaterialPropertyBase>,
               InternalVTableHelperCtorCaller<UDEPRECATED_PhysicalMaterialPropertyBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.InnerSingleton;
}

// UDEPRECATED_PhysicalMaterialPropertyBase @ 1441a0b20

UDEPRECATED_PhysicalMaterialPropertyBase * __thiscall
UDEPRECATED_PhysicalMaterialPropertyBase::UDEPRECATED_PhysicalMaterialPropertyBase
          (UDEPRECATED_PhysicalMaterialPropertyBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDEPRECATED_PhysicalMaterialPropertyBase__6B_;
  return this;
}

// UDEPRECATED_PhysicalMaterialPropertyBase @ 1441a0b50

UDEPRECATED_PhysicalMaterialPropertyBase * __thiscall
UDEPRECATED_PhysicalMaterialPropertyBase::UDEPRECATED_PhysicalMaterialPropertyBase
          (UDEPRECATED_PhysicalMaterialPropertyBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDEPRECATED_PhysicalMaterialPropertyBase__6B_;
  return this;
}

// ~UDEPRECATED_PhysicalMaterialPropertyBase @ 1441a1c50

void __thiscall
UDEPRECATED_PhysicalMaterialPropertyBase::~UDEPRECATED_PhysicalMaterialPropertyBase
          (UDEPRECATED_PhysicalMaterialPropertyBase *this)

{
  *(undefined ***)this = &___7UDEPRECATED_PhysicalMaterialPropertyBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToSurfaceType @ 1441a7530

EPhysicalSurface __thiscall
UDEPRECATED_PhysicalMaterialPropertyBase::ConvertToSurfaceType
          (UDEPRECATED_PhysicalMaterialPropertyBase *this)

{
  return SurfaceType_Default;
}

// GetPrivateStaticClass @ 1441af380

UClass * __cdecl UDEPRECATED_PhysicalMaterialPropertyBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsCore",L"PhysicalMaterialPropertyBase",
               &Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.InnerSingleton,
               StaticRegisterNativesUDEPRECATED_PhysicalMaterialPropertyBase,0x28,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_PhysicalMaterialPropertyBase>,
               InternalVTableHelperCtorCaller<UDEPRECATED_PhysicalMaterialPropertyBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.InnerSingleton;
}

// IsAsset @ 1441b1390

bool __thiscall
UDEPRECATED_PhysicalMaterialPropertyBase::IsAsset(UDEPRECATED_PhysicalMaterialPropertyBase *this)

{
  return false;
}

// StaticRegisterNativesUDEPRECATED_PhysicalMaterialPropertyBase @ 1441ba9e0

void __cdecl
UDEPRECATED_PhysicalMaterialPropertyBase::
StaticRegisterNativesUDEPRECATED_PhysicalMaterialPropertyBase(void)

{
  return;
}

