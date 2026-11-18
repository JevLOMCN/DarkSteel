// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 3

// StaticStruct @ 14cf2e530

UScriptStruct * __cdecl FARPlaneUpdatePayload::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FARPlaneUpdatePayload.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UScriptStruct_FARPlaneUpdatePayload.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FARPlaneUpdatePayload,(UObject *)pUVar1,
                         L"ARPlaneUpdatePayload");
  }
  return Z_Registration_Info_UScriptStruct_FARPlaneUpdatePayload.OuterSingleton;
}

// FARPlaneUpdatePayload @ 14cf40730

FARPlaneUpdatePayload * __thiscall
FARPlaneUpdatePayload::FARPlaneUpdatePayload(FARPlaneUpdatePayload *this)

{
  undefined8 uVar1;
  
  (this->SessionPayload).ConfigFlags = 0;
  (this->SessionPayload).DefaultMeshMaterial.field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SessionPayload).DefaultWireframeMeshMaterial.field0_0x0.DebugPtr =
       (UMaterialInterface *)0x0;
  *&(this->WorldTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->WorldTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->WorldTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->WorldTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->WorldTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->WorldTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Extents).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Extents).field0_0x0._s_0.Y = (double)uVar1;
  (this->Extents).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->BoundaryVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundaryVertices).ArrayNum = 0;
  (this->BoundaryVertices).ArrayMax = 0;
  this->ObjectClassification = Unknown;
  return this;
}

// operator= @ 14cf453f0

FARPlaneUpdatePayload * __thiscall
FARPlaneUpdatePayload::operator=(FARPlaneUpdatePayload *this,FARPlaneUpdatePayload *param_1)

{
  UMaterialInterface *pUVar1;
  double dVar2;
  
  (this->SessionPayload).ConfigFlags = (param_1->SessionPayload).ConfigFlags;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->SessionPayload).DefaultMeshMaterial.field0_0x0.DebugPtr,
     pUVar1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->SessionPayload).DefaultMeshMaterial.field0_0x0 =
       (param_1->SessionPayload).DefaultMeshMaterial.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->SessionPayload).DefaultWireframeMeshMaterial.field0_0x0.DebugPtr,
     pUVar1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->SessionPayload).DefaultWireframeMeshMaterial.field0_0x0 =
       (param_1->SessionPayload).DefaultWireframeMeshMaterial.field0_0x0;
  dVar2 = (param_1->WorldTransform).Rotation.XY.m128d_f64[1];
  (this->WorldTransform).Rotation.XY.m128d_f64[0] =
       (param_1->WorldTransform).Rotation.XY.m128d_f64[0];
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[1];
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->WorldTransform).Rotation.ZW.m128d_f64[0];
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->WorldTransform).Translation.XY.m128d_f64[1];
  (this->WorldTransform).Translation.XY.m128d_f64[0] =
       (param_1->WorldTransform).Translation.XY.m128d_f64[0];
  (this->WorldTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->WorldTransform).Translation.ZW.m128d_f64[1];
  (this->WorldTransform).Translation.ZW.m128d_f64[0] =
       (param_1->WorldTransform).Translation.ZW.m128d_f64[0];
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[1];
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] = (param_1->WorldTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1];
  (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Center).field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = (param_1->Center).field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = dVar2;
  (this->Center).field0_0x0._s_0.Z = (param_1->Center).field0_0x0._s_0.Z;
  dVar2 = (param_1->Extents).field0_0x0._s_0.Y;
  (this->Extents).field0_0x0._s_0.X = (param_1->Extents).field0_0x0._s_0.X;
  (this->Extents).field0_0x0._s_0.Y = dVar2;
  (this->Extents).field0_0x0._s_0.Z = (param_1->Extents).field0_0x0._s_0.Z;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoundaryVertices,&param_1->BoundaryVertices);
  this->ObjectClassification = param_1->ObjectClassification;
  return this;
}

