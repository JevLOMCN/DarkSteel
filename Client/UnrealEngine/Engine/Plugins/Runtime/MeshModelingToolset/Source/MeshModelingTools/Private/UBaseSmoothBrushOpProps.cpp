// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cbd2ed0

UClass * __cdecl UBaseSmoothBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseSmoothBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"BaseSmoothBrushOpProps",
               &Z_Registration_Info_UClass_UBaseSmoothBrushOpProps.InnerSingleton,
               StaticRegisterNativesUBaseSmoothBrushOpProps,0xb8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UBaseSmoothBrushOpProps>,
               InternalVTableHelperCtorCaller<UBaseSmoothBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseSmoothBrushOpProps.InnerSingleton;
}

// UBaseSmoothBrushOpProps @ 14cbdcd10

UBaseSmoothBrushOpProps * __thiscall
UBaseSmoothBrushOpProps::UBaseSmoothBrushOpProps
          (UBaseSmoothBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->field_0xb0 = 1;
  *(undefined ***)this = &___7UBaseSmoothBrushOpProps__6B_;
  return this;
}

// UBaseSmoothBrushOpProps @ 14cbdcd40

UBaseSmoothBrushOpProps * __thiscall
UBaseSmoothBrushOpProps::UBaseSmoothBrushOpProps
          (UBaseSmoothBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->field_0xb0 = 1;
  *(undefined ***)this = &___7UBaseSmoothBrushOpProps__6B_;
  return this;
}

// ~UBaseSmoothBrushOpProps @ 14cbe00d0

void __thiscall UBaseSmoothBrushOpProps::~UBaseSmoothBrushOpProps(UBaseSmoothBrushOpProps *this)

{
  *(undefined ***)this = &___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPreserveUVFlow @ 14cbee680

bool __thiscall UBaseSmoothBrushOpProps::GetPreserveUVFlow(UBaseSmoothBrushOpProps *this)

{
  return false;
}

// GetPrivateStaticClass @ 14cbef140

UClass * __cdecl UBaseSmoothBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseSmoothBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"BaseSmoothBrushOpProps",
               &Z_Registration_Info_UClass_UBaseSmoothBrushOpProps.InnerSingleton,
               StaticRegisterNativesUBaseSmoothBrushOpProps,0xb8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UBaseSmoothBrushOpProps>,
               InternalVTableHelperCtorCaller<UBaseSmoothBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseSmoothBrushOpProps.InnerSingleton;
}

// StaticRegisterNativesUBaseSmoothBrushOpProps @ 14cbf6a80

void __cdecl UBaseSmoothBrushOpProps::StaticRegisterNativesUBaseSmoothBrushOpProps(void)

{
  return;
}

// SupportsStrengthPressure @ 14cbf6e80

bool __thiscall UBaseSmoothBrushOpProps::SupportsStrengthPressure(UBaseSmoothBrushOpProps *this)

{
  return true;
}

