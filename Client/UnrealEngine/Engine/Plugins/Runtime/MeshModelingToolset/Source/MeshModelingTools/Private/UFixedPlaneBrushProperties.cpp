// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbff2f0

UClass * __cdecl UFixedPlaneBrushProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFixedPlaneBrushProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"FixedPlaneBrushProperties",
               &Z_Registration_Info_UClass_UFixedPlaneBrushProperties.InnerSingleton,
               StaticRegisterNativesUFixedPlaneBrushProperties,0xf0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UFixedPlaneBrushProperties>,
               InternalVTableHelperCtorCaller<UFixedPlaneBrushProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFixedPlaneBrushProperties.InnerSingleton;
}

// UFixedPlaneBrushProperties @ 14cc1ff00

UFixedPlaneBrushProperties * __thiscall
UFixedPlaneBrushProperties::UFixedPlaneBrushProperties
          (UFixedPlaneBrushProperties *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bPropertySetEnabled = true;
  this->bShowGizmo = true;
  this->_padding_ = (longlong)&___7UFixedPlaneBrushProperties__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = (double)uVar1;
  (this->Position).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->Rotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->Rotation).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->Rotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->Rotation).W = dVar2;
  return this;
}

// UFixedPlaneBrushProperties @ 14cc1ff70

UFixedPlaneBrushProperties * __thiscall
UFixedPlaneBrushProperties::UFixedPlaneBrushProperties
          (UFixedPlaneBrushProperties *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bPropertySetEnabled = true;
  this->bShowGizmo = true;
  this->_padding_ = (longlong)&___7UFixedPlaneBrushProperties__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = (double)uVar1;
  (this->Position).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->Rotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->Rotation).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->Rotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->Rotation).W = dVar2;
  return this;
}

// ~UFixedPlaneBrushProperties @ 14cc23390

void __thiscall
UFixedPlaneBrushProperties::~UFixedPlaneBrushProperties(UFixedPlaneBrushProperties *this)

{
  this->_padding_ = (longlong)&___7UFixedPlaneBrushProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5d5b0

UClass * __cdecl UFixedPlaneBrushProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFixedPlaneBrushProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"FixedPlaneBrushProperties",
               &Z_Registration_Info_UClass_UFixedPlaneBrushProperties.InnerSingleton,
               StaticRegisterNativesUFixedPlaneBrushProperties,0xf0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UFixedPlaneBrushProperties>,
               InternalVTableHelperCtorCaller<UFixedPlaneBrushProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFixedPlaneBrushProperties.InnerSingleton;
}

// StaticRegisterNativesUFixedPlaneBrushProperties @ 14cc82640

void __cdecl UFixedPlaneBrushProperties::StaticRegisterNativesUFixedPlaneBrushProperties(void)

{
  return;
}

