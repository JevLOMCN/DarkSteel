// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14cab0090

UClass * __cdecl USpaceCurveDeformationMechanicPropertySet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpaceCurveDeformationMechanicPropertySet.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"SpaceCurveDeformationMechanicPropertySet",
               &Z_Registration_Info_UClass_USpaceCurveDeformationMechanicPropertySet.InnerSingleton,
               StaticRegisterNativesUSpaceCurveDeformationMechanicPropertySet,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USpaceCurveDeformationMechanicPropertySet>,
               InternalVTableHelperCtorCaller<USpaceCurveDeformationMechanicPropertySet>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpaceCurveDeformationMechanicPropertySet.InnerSingleton;
}

// USpaceCurveDeformationMechanicPropertySet @ 14cacf810

USpaceCurveDeformationMechanicPropertySet * __thiscall
USpaceCurveDeformationMechanicPropertySet::USpaceCurveDeformationMechanicPropertySet
          (USpaceCurveDeformationMechanicPropertySet *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->TransformMode = PerVertex;
  this->_padding_ = (longlong)&___7USpaceCurveDeformationMechanicPropertySet__6B_;
  this->TransformOrigin = First;
  this->Softness = 0.5;
  this->SoftFalloff = Smooth;
  return this;
}

// USpaceCurveDeformationMechanicPropertySet @ 14cacf860

USpaceCurveDeformationMechanicPropertySet * __thiscall
USpaceCurveDeformationMechanicPropertySet::USpaceCurveDeformationMechanicPropertySet
          (USpaceCurveDeformationMechanicPropertySet *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->TransformMode = PerVertex;
  this->_padding_ = (longlong)&___7USpaceCurveDeformationMechanicPropertySet__6B_;
  this->TransformOrigin = First;
  this->Softness = 0.5;
  this->SoftFalloff = Smooth;
  return this;
}

// ~USpaceCurveDeformationMechanicPropertySet @ 14cad2d20

void __thiscall
USpaceCurveDeformationMechanicPropertySet::~USpaceCurveDeformationMechanicPropertySet
          (USpaceCurveDeformationMechanicPropertySet *this)

{
  this->_padding_ = (longlong)&___7USpaceCurveDeformationMechanicPropertySet__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cb130f0

UClass * __cdecl USpaceCurveDeformationMechanicPropertySet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpaceCurveDeformationMechanicPropertySet.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"SpaceCurveDeformationMechanicPropertySet",
               &Z_Registration_Info_UClass_USpaceCurveDeformationMechanicPropertySet.InnerSingleton,
               StaticRegisterNativesUSpaceCurveDeformationMechanicPropertySet,0xc0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USpaceCurveDeformationMechanicPropertySet>,
               InternalVTableHelperCtorCaller<USpaceCurveDeformationMechanicPropertySet>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpaceCurveDeformationMechanicPropertySet.InnerSingleton;
}

// StaticRegisterNativesUSpaceCurveDeformationMechanicPropertySet @ 14cb3ecb0

void __cdecl
USpaceCurveDeformationMechanicPropertySet::
StaticRegisterNativesUSpaceCurveDeformationMechanicPropertySet(void)

{
  return;
}

