// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cbd11b0

UClass * __cdecl UBasePlaneBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBasePlaneBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"BasePlaneBrushOpProps",
               &Z_Registration_Info_UClass_UBasePlaneBrushOpProps.InnerSingleton,
               StaticRegisterNativesUBasePlaneBrushOpProps,0xb8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UBasePlaneBrushOpProps>,
               InternalVTableHelperCtorCaller<UBasePlaneBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBasePlaneBrushOpProps.InnerSingleton;
}

// UBasePlaneBrushOpProps @ 14cbdccb0

UBasePlaneBrushOpProps * __thiscall
UBasePlaneBrushOpProps::UBasePlaneBrushOpProps(UBasePlaneBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->field_0xb0 = 1;
  *(undefined ***)this = &___7UBasePlaneBrushOpProps__6B_;
  return this;
}

// UBasePlaneBrushOpProps @ 14cbdcce0

UBasePlaneBrushOpProps * __thiscall
UBasePlaneBrushOpProps::UBasePlaneBrushOpProps
          (UBasePlaneBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->field_0xb0 = 1;
  *(undefined ***)this = &___7UBasePlaneBrushOpProps__6B_;
  return this;
}

// ~UBasePlaneBrushOpProps @ 14cbe00b0

void __thiscall UBasePlaneBrushOpProps::~UBasePlaneBrushOpProps(UBasePlaneBrushOpProps *this)

{
  *(undefined ***)this = &___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbef080

UClass * __cdecl UBasePlaneBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBasePlaneBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"BasePlaneBrushOpProps",
               &Z_Registration_Info_UClass_UBasePlaneBrushOpProps.InnerSingleton,
               StaticRegisterNativesUBasePlaneBrushOpProps,0xb8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UBasePlaneBrushOpProps>,
               InternalVTableHelperCtorCaller<UBasePlaneBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBasePlaneBrushOpProps.InnerSingleton;
}

// GetWhichSide @ 14cbf2080

EPlaneBrushSideMode __thiscall UBasePlaneBrushOpProps::GetWhichSide(UBasePlaneBrushOpProps *this)

{
  return BothSides;
}

// StaticRegisterNativesUBasePlaneBrushOpProps @ 14cbf6a70

void __cdecl UBasePlaneBrushOpProps::StaticRegisterNativesUBasePlaneBrushOpProps(void)

{
  return;
}

// SupportsStrengthPressure @ 14cbf6e70

bool __thiscall UBasePlaneBrushOpProps::SupportsStrengthPressure(UBasePlaneBrushOpProps *this)

{
  return true;
}

