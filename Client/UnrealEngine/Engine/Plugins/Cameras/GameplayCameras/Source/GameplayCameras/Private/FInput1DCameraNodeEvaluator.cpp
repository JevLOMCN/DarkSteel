// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// GetTypeID @ 14d661c30

FCameraObjectTypeID * __thiscall
UE::Cameras::FInput1DCameraNodeEvaluator::GetTypeID(FInput1DCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d662f60

bool __thiscall
UE::Cameras::FInput1DCameraNodeEvaluator::IsKindOf
          (FInput1DCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FInput1DCameraNodeEvaluator>)param_1->ID != PrivateTypeID)
     && ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
         FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnSerialize @ 14d66e800

void __thiscall
UE::Cameras::FInput1DCameraNodeEvaluator::OnSerialize
          (FInput1DCameraNodeEvaluator *this,FCameraNodeEvaluatorSerializeParams *param_1,
          FArchive *param_2)

{
  double *pdVar1;
  double *pdVar2;
  
  pdVar1 = &this->InputValue;
  pdVar2 = (double *)**(longlong **)&param_2->field_0x8;
  if (pdVar2 + 1 <= (double *)(*(longlong **)&param_2->field_0x8)[1]) {
    *pdVar1 = *pdVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 8;
    return;
  }
  if ((param_2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d66e83a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pdVar1,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_2,(ulong64 *)pdVar1);
  return;
}

