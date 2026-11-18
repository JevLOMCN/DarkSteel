// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// FEvaluatedControlRigParameterSectionValues @ 14a3b6da0

FEvaluatedControlRigParameterSectionValues * __thiscall
FEvaluatedControlRigParameterSectionValues::FEvaluatedControlRigParameterSectionValues
          (FEvaluatedControlRigParameterSectionValues *this)

{
  (this->ScalarValues).AllocatorInstance.SecondaryData =
       (ForElementType<FScalarParameterStringAndValue>)0x0;
  (this->ScalarValues).ArrayNum = 0;
  (this->ScalarValues).ArrayMax = 2;
  (this->BoolValues).AllocatorInstance.SecondaryData =
       (ForElementType<FBoolParameterStringAndValue>)0x0;
  (this->BoolValues).ArrayNum = 0;
  (this->BoolValues).ArrayMax = 2;
  (this->IntegerValues).AllocatorInstance.SecondaryData =
       (ForElementType<FIntegerParameterStringAndValue>)0x0;
  (this->IntegerValues).ArrayNum = 0;
  (this->IntegerValues).ArrayMax = 2;
  (this->SpaceValues).AllocatorInstance.SecondaryData = (ForElementType<FControlSpaceAndValue>)0x0;
  (this->SpaceValues).ArrayNum = 0;
  (this->SpaceValues).ArrayMax = 2;
  (this->Vector2DValues).AllocatorInstance.SecondaryData =
       (ForElementType<FVector2DParameterStringAndValue>)0x0;
  (this->Vector2DValues).ArrayNum = 0;
  (this->Vector2DValues).ArrayMax = 2;
  (this->VectorValues).AllocatorInstance.SecondaryData =
       (ForElementType<FVectorParameterStringAndValue>)0x0;
  (this->VectorValues).ArrayNum = 0;
  (this->VectorValues).ArrayMax = 2;
  (this->ColorValues).AllocatorInstance.SecondaryData =
       (ForElementType<FColorParameterStringAndValue>)0x0;
  (this->ColorValues).ArrayNum = 0;
  (this->ColorValues).ArrayMax = 2;
  (this->TransformValues).AllocatorInstance.SecondaryData =
       (ForElementType<FEulerTransformParameterStringAndValue>)0x0;
  (this->TransformValues).ArrayNum = 0;
  (this->TransformValues).ArrayMax = 2;
  (this->ConstraintsValues).AllocatorInstance.SecondaryData =
       (ForElementType<FConstraintAndActiveValue>)0x0;
  (this->ConstraintsValues).ArrayNum = 0;
  (this->ConstraintsValues).ArrayMax = 2;
  return this;
}

// ~FEvaluatedControlRigParameterSectionValues @ 14a3bc9e0

void __thiscall
FEvaluatedControlRigParameterSectionValues::~FEvaluatedControlRigParameterSectionValues
          (FEvaluatedControlRigParameterSectionValues *this)

{
  ForElementType<FConstraintAndActiveValue> FVar1;
  ForElementType<FEulerTransformParameterStringAndValue> FVar2;
  ForElementType<FColorParameterStringAndValue> FVar3;
  ForElementType<FVectorParameterStringAndValue> FVar4;
  ForElementType<FVector2DParameterStringAndValue> FVar5;
  ForElementType<FControlSpaceAndValue> FVar6;
  ForElementType<FIntegerParameterStringAndValue> FVar7;
  ForElementType<FBoolParameterStringAndValue> FVar8;
  ForElementType<FScalarParameterStringAndValue> FVar9;
  
  FVar1 = (this->ConstraintsValues).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FConstraintAndActiveValue>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar2 = (this->TransformValues).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FEulerTransformParameterStringAndValue>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar3 = (this->ColorValues).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FColorParameterStringAndValue>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar4 = (this->VectorValues).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FVectorParameterStringAndValue>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar5 = (this->Vector2DValues).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<FVector2DParameterStringAndValue>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  FVar6 = (this->SpaceValues).AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<FControlSpaceAndValue>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  FVar7 = (this->IntegerValues).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<FIntegerParameterStringAndValue>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  FVar8 = (this->BoolValues).AllocatorInstance.SecondaryData;
  if (FVar8 != (ForElementType<FBoolParameterStringAndValue>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  FVar9 = (this->ScalarValues).AllocatorInstance.SecondaryData;
  if (FVar9 != (ForElementType<FScalarParameterStringAndValue>)0x0) {
    FMemory::Free((void *)FVar9);
    return;
  }
  return;
}

