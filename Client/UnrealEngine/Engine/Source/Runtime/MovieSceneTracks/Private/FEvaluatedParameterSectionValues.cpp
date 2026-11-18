// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// FEvaluatedParameterSectionValues @ 14660f550

FEvaluatedParameterSectionValues * __thiscall
FEvaluatedParameterSectionValues::FEvaluatedParameterSectionValues
          (FEvaluatedParameterSectionValues *this,FEvaluatedParameterSectionValues *param_1)

{
  ForElementType<FScalarParameterNameAndValue> FVar1;
  ForElementType<FBoolParameterNameAndValue> FVar2;
  ForElementType<FVector2DParameterNameAndValue> FVar3;
  ForElementType<FVectorParameterNameAndValue> FVar4;
  ForElementType<FColorParameterNameAndValue> FVar5;
  ForElementType<FTransformParameterNameAndValue> FVar6;
  
  (this->ScalarValues).AllocatorInstance.SecondaryData =
       (ForElementType<FScalarParameterNameAndValue>)0x0;
  if ((param_1->ScalarValues).AllocatorInstance.SecondaryData ==
      (ForElementType<FScalarParameterNameAndValue>)0x0) {
    memmove(this,param_1,0x18);
  }
  FVar1 = (this->ScalarValues).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FScalarParameterNameAndValue>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->ScalarValues).AllocatorInstance.SecondaryData =
       (param_1->ScalarValues).AllocatorInstance.SecondaryData;
  (param_1->ScalarValues).AllocatorInstance.SecondaryData =
       (ForElementType<FScalarParameterNameAndValue>)0x0;
  (this->ScalarValues).ArrayNum = (param_1->ScalarValues).ArrayNum;
  (this->ScalarValues).ArrayMax = (param_1->ScalarValues).ArrayMax;
  (param_1->ScalarValues).ArrayNum = 0;
  (param_1->ScalarValues).ArrayMax = 2;
  (this->BoolValues).AllocatorInstance.SecondaryData =
       (ForElementType<FBoolParameterNameAndValue>)0x0;
  if ((param_1->BoolValues).AllocatorInstance.SecondaryData ==
      (ForElementType<FBoolParameterNameAndValue>)0x0) {
    memmove(&this->BoolValues,&param_1->BoolValues,0x18);
  }
  FVar2 = (this->BoolValues).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FBoolParameterNameAndValue>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->BoolValues).AllocatorInstance.SecondaryData =
       (param_1->BoolValues).AllocatorInstance.SecondaryData;
  (param_1->BoolValues).AllocatorInstance.SecondaryData =
       (ForElementType<FBoolParameterNameAndValue>)0x0;
  (this->BoolValues).ArrayNum = (param_1->BoolValues).ArrayNum;
  (this->BoolValues).ArrayMax = (param_1->BoolValues).ArrayMax;
  (param_1->BoolValues).ArrayNum = 0;
  (param_1->BoolValues).ArrayMax = 2;
  (this->Vector2DValues).AllocatorInstance.SecondaryData =
       (ForElementType<FVector2DParameterNameAndValue>)0x0;
  if ((param_1->Vector2DValues).AllocatorInstance.SecondaryData ==
      (ForElementType<FVector2DParameterNameAndValue>)0x0) {
    memmove(&this->Vector2DValues,&param_1->Vector2DValues,0x30);
  }
  FVar3 = (this->Vector2DValues).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FVector2DParameterNameAndValue>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  (this->Vector2DValues).AllocatorInstance.SecondaryData =
       (param_1->Vector2DValues).AllocatorInstance.SecondaryData;
  (param_1->Vector2DValues).AllocatorInstance.SecondaryData =
       (ForElementType<FVector2DParameterNameAndValue>)0x0;
  (this->Vector2DValues).ArrayNum = (param_1->Vector2DValues).ArrayNum;
  (this->Vector2DValues).ArrayMax = (param_1->Vector2DValues).ArrayMax;
  (param_1->Vector2DValues).ArrayNum = 0;
  (param_1->Vector2DValues).ArrayMax = 2;
  (this->VectorValues).AllocatorInstance.SecondaryData =
       (ForElementType<FVectorParameterNameAndValue>)0x0;
  if ((param_1->VectorValues).AllocatorInstance.SecondaryData ==
      (ForElementType<FVectorParameterNameAndValue>)0x0) {
    memmove(&this->VectorValues,&param_1->VectorValues,0x40);
  }
  FVar4 = (this->VectorValues).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FVectorParameterNameAndValue>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->VectorValues).AllocatorInstance.SecondaryData =
       (param_1->VectorValues).AllocatorInstance.SecondaryData;
  (param_1->VectorValues).AllocatorInstance.SecondaryData =
       (ForElementType<FVectorParameterNameAndValue>)0x0;
  (this->VectorValues).ArrayNum = (param_1->VectorValues).ArrayNum;
  (this->VectorValues).ArrayMax = (param_1->VectorValues).ArrayMax;
  (param_1->VectorValues).ArrayNum = 0;
  (param_1->VectorValues).ArrayMax = 2;
  (this->ColorValues).AllocatorInstance.SecondaryData =
       (ForElementType<FColorParameterNameAndValue>)0x0;
  if ((param_1->ColorValues).AllocatorInstance.SecondaryData ==
      (ForElementType<FColorParameterNameAndValue>)0x0) {
    memmove(&this->ColorValues,&param_1->ColorValues,0x30);
  }
  FVar5 = (this->ColorValues).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<FColorParameterNameAndValue>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  (this->ColorValues).AllocatorInstance.SecondaryData =
       (param_1->ColorValues).AllocatorInstance.SecondaryData;
  (param_1->ColorValues).AllocatorInstance.SecondaryData =
       (ForElementType<FColorParameterNameAndValue>)0x0;
  (this->ColorValues).ArrayNum = (param_1->ColorValues).ArrayNum;
  (this->ColorValues).ArrayMax = (param_1->ColorValues).ArrayMax;
  (param_1->ColorValues).ArrayNum = 0;
  (param_1->ColorValues).ArrayMax = 2;
  (this->TransformValues).AllocatorInstance.SecondaryData =
       (ForElementType<FTransformParameterNameAndValue>)0x0;
  if ((param_1->TransformValues).AllocatorInstance.SecondaryData ==
      (ForElementType<FTransformParameterNameAndValue>)0x0) {
    memmove(&this->TransformValues,&param_1->TransformValues,0xa0);
  }
  FVar6 = (this->TransformValues).AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<FTransformParameterNameAndValue>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  (this->TransformValues).AllocatorInstance.SecondaryData =
       (param_1->TransformValues).AllocatorInstance.SecondaryData;
  (param_1->TransformValues).AllocatorInstance.SecondaryData =
       (ForElementType<FTransformParameterNameAndValue>)0x0;
  (this->TransformValues).ArrayNum = (param_1->TransformValues).ArrayNum;
  (this->TransformValues).ArrayMax = (param_1->TransformValues).ArrayMax;
  (param_1->TransformValues).ArrayNum = 0;
  (param_1->TransformValues).ArrayMax = 2;
  return this;
}

// ~FEvaluatedParameterSectionValues @ 146620a10

void __thiscall
FEvaluatedParameterSectionValues::~FEvaluatedParameterSectionValues
          (FEvaluatedParameterSectionValues *this)

{
  ForElementType<FTransformParameterNameAndValue> FVar1;
  ForElementType<FColorParameterNameAndValue> FVar2;
  ForElementType<FVectorParameterNameAndValue> FVar3;
  ForElementType<FVector2DParameterNameAndValue> FVar4;
  ForElementType<FBoolParameterNameAndValue> FVar5;
  ForElementType<FScalarParameterNameAndValue> FVar6;
  
  FVar1 = (this->TransformValues).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FTransformParameterNameAndValue>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar2 = (this->ColorValues).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FColorParameterNameAndValue>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar3 = (this->VectorValues).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FVectorParameterNameAndValue>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar4 = (this->Vector2DValues).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FVector2DParameterNameAndValue>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar5 = (this->BoolValues).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<FBoolParameterNameAndValue>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  FVar6 = (this->ScalarValues).AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<FScalarParameterNameAndValue>)0x0) {
    FMemory::Free((void *)FVar6);
    return;
  }
  return;
}

