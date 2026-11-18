// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc932c0

UClass * __cdecl UWorkPlaneProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorkPlaneProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"WorkPlaneProperties",
               &Z_Registration_Info_UClass_UWorkPlaneProperties.InnerSingleton,
               StaticRegisterNativesUWorkPlaneProperties,0xf0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorkPlaneProperties>,
               InternalVTableHelperCtorCaller<UWorkPlaneProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorkPlaneProperties.InnerSingleton;
}

// UWorkPlaneProperties @ 14ccc0580

UWorkPlaneProperties * __thiscall
UWorkPlaneProperties::UWorkPlaneProperties(UWorkPlaneProperties *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bPropertySetEnabled = true;
  this->bShowGizmo = true;
  this->_padding_ = (longlong)&___7UWorkPlaneProperties__6B_;
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

// UWorkPlaneProperties @ 14ccc05f0

UWorkPlaneProperties * __thiscall
UWorkPlaneProperties::UWorkPlaneProperties(UWorkPlaneProperties *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bPropertySetEnabled = true;
  this->bShowGizmo = true;
  this->_padding_ = (longlong)&___7UWorkPlaneProperties__6B_;
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

// ~UWorkPlaneProperties @ 14ccc4fa0

void __thiscall UWorkPlaneProperties::~UWorkPlaneProperties(UWorkPlaneProperties *this)

{
  this->_padding_ = (longlong)&___7UWorkPlaneProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd02150

UClass * __cdecl UWorkPlaneProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorkPlaneProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"WorkPlaneProperties",
               &Z_Registration_Info_UClass_UWorkPlaneProperties.InnerSingleton,
               StaticRegisterNativesUWorkPlaneProperties,0xf0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorkPlaneProperties>,
               InternalVTableHelperCtorCaller<UWorkPlaneProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorkPlaneProperties.InnerSingleton;
}

// StaticRegisterNativesUWorkPlaneProperties @ 14cd2f3d0

void __cdecl UWorkPlaneProperties::StaticRegisterNativesUWorkPlaneProperties(void)

{
  return;
}

