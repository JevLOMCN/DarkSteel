// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 2

// StaticStruct @ 14cf2e870

UScriptStruct * __cdecl FARImageUpdatePayload::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FARImageUpdatePayload.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UScriptStruct_FARImageUpdatePayload.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FARImageUpdatePayload,(UObject *)pUVar1,
                         L"ARImageUpdatePayload");
  }
  return Z_Registration_Info_UScriptStruct_FARImageUpdatePayload.OuterSingleton;
}

// operator= @ 14cf45270

FARImageUpdatePayload * __thiscall
FARImageUpdatePayload::operator=(FARImageUpdatePayload *this,FARImageUpdatePayload *param_1)

{
  UMaterialInterface *pUVar1;
  UARCandidateImage *pUVar2;
  double dVar3;
  
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
  dVar3 = (param_1->WorldTransform).Rotation.XY.m128d_f64[1];
  (this->WorldTransform).Rotation.XY.m128d_f64[0] =
       (param_1->WorldTransform).Rotation.XY.m128d_f64[0];
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[1];
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->WorldTransform).Rotation.ZW.m128d_f64[0];
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->WorldTransform).Translation.XY.m128d_f64[1];
  (this->WorldTransform).Translation.XY.m128d_f64[0] =
       (param_1->WorldTransform).Translation.XY.m128d_f64[0];
  (this->WorldTransform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->WorldTransform).Translation.ZW.m128d_f64[1];
  (this->WorldTransform).Translation.ZW.m128d_f64[0] =
       (param_1->WorldTransform).Translation.ZW.m128d_f64[0];
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[1];
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] = (param_1->WorldTransform).Scale3D.XY.m128d_f64[0]
  ;
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1];
  (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0]
  ;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->DetectedImage).field0_0x0.DebugPtr, pUVar2 != (UARCandidateImage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->DetectedImage).field0_0x0 = (param_1->DetectedImage).field0_0x0;
  dVar3 = (param_1->EstimatedSize).field0_0x0._s_0.Y;
  (this->EstimatedSize).field0_0x0._s_0.X = (param_1->EstimatedSize).field0_0x0._s_0.X;
  (this->EstimatedSize).field0_0x0._s_0.Y = dVar3;
  return this;
}

