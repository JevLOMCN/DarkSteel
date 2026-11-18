// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 2

// StaticStruct @ 14cf2e6b0

UScriptStruct * __cdecl FARFaceUpdatePayload::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FARFaceUpdatePayload.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UScriptStruct_FARFaceUpdatePayload.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FARFaceUpdatePayload,(UObject *)pUVar1,
                         L"ARFaceUpdatePayload");
  }
  return Z_Registration_Info_UScriptStruct_FARFaceUpdatePayload.OuterSingleton;
}

// operator= @ 14cf450f0

FARFaceUpdatePayload * __thiscall
FARFaceUpdatePayload::operator=(FARFaceUpdatePayload *this,FARFaceUpdatePayload *param_1)

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
  dVar2 = (param_1->LeftEyePosition).field0_0x0._s_0.Y;
  (this->LeftEyePosition).field0_0x0._s_0.X = (param_1->LeftEyePosition).field0_0x0._s_0.X;
  (this->LeftEyePosition).field0_0x0._s_0.Y = dVar2;
  (this->LeftEyePosition).field0_0x0._s_0.Z = (param_1->LeftEyePosition).field0_0x0._s_0.Z;
  dVar2 = (param_1->RightEyePosition).field0_0x0._s_0.Y;
  (this->RightEyePosition).field0_0x0._s_0.X = (param_1->RightEyePosition).field0_0x0._s_0.X;
  (this->RightEyePosition).field0_0x0._s_0.Y = dVar2;
  (this->RightEyePosition).field0_0x0._s_0.Z = (param_1->RightEyePosition).field0_0x0._s_0.Z;
  dVar2 = (param_1->LookAtTarget).field0_0x0._s_0.Y;
  (this->LookAtTarget).field0_0x0._s_0.X = (param_1->LookAtTarget).field0_0x0._s_0.X;
  (this->LookAtTarget).field0_0x0._s_0.Y = dVar2;
  (this->LookAtTarget).field0_0x0._s_0.Z = (param_1->LookAtTarget).field0_0x0._s_0.Z;
  return this;
}

