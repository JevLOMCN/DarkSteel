// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 2

// StaticStruct @ 14cf2f050

UScriptStruct * __cdecl FARMeshUpdatePayload::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FARMeshUpdatePayload.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UScriptStruct_FARMeshUpdatePayload.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FARMeshUpdatePayload,(UObject *)pUVar1,
                         L"ARMeshUpdatePayload");
  }
  return Z_Registration_Info_UScriptStruct_FARMeshUpdatePayload.OuterSingleton;
}

// operator= @ 14cf45340

FARMeshUpdatePayload * __thiscall
FARMeshUpdatePayload::operator=(FARMeshUpdatePayload *this,FARMeshUpdatePayload *param_1)

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
  this->ObjectClassification = param_1->ObjectClassification;
  return this;
}

