// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147255ac0

UScriptStruct * __cdecl FSlotEvaluationPose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSlotEvaluationPose.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSlotEvaluationPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSlotEvaluationPose,(UObject *)pUVar1,
                         L"SlotEvaluationPose");
  }
  return Z_Registration_Info_UScriptStruct_FSlotEvaluationPose.OuterSingleton;
}

// FSlotEvaluationPose @ 147433ee0

FSlotEvaluationPose * __thiscall
FSlotEvaluationPose::FSlotEvaluationPose(FSlotEvaluationPose *this,FSlotEvaluationPose *param_1)

{
  FStackAttributeContainer *pFVar1;
  FCompactPose *pFVar2;
  FBlendedCurve *pFVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  FCompactPose *pFVar6;
  FBlendedCurve *pFVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  FStackAttributeContainer *pFVar10;
  undefined1 *puVar11;
  
  pFVar1 = &this->Attributes;
  (this->AdditiveType).Value = (param_1->AdditiveType).Value;
  pFVar2 = &this->Pose;
  puVar11 = &(this->Attributes).field_0x10;
  this->Weight = param_1->Weight;
  *(undefined8 *)pFVar2 = 0;
  pFVar3 = &this->Curve;
  *(undefined8 *)&(this->Pose).field_0x8 = 0;
  puVar4 = &(this->Attributes).field_0x20;
  *(undefined8 *)&(this->Pose).field_0x10 = 0;
  puVar5 = &(this->Attributes).field_0x30;
  *(undefined8 *)pFVar3 = 0;
  *(undefined8 *)&(this->Curve).field_0x8 = 0;
  pFVar6 = &param_1->Pose;
  (this->Curve).field_0x10 = 0;
  *(undefined8 *)&(this->Curve).field_0x18 = 0;
  *(undefined8 *)pFVar1 = 0;
  *(undefined8 *)&(this->Attributes).field_0x8 = 0;
  *(undefined8 *)puVar11 = 0;
  *(undefined8 *)&(this->Attributes).field_0x18 = 0;
  *(undefined8 *)puVar4 = 0;
  *(undefined8 *)&(this->Attributes).field_0x28 = 0;
  *(undefined8 *)puVar5 = 0;
  *(undefined8 *)&(this->Attributes).field_0x38 = 0;
  if (pFVar2 != pFVar6) {
    *(undefined8 *)pFVar2 = *(undefined8 *)pFVar6;
    *(undefined8 *)pFVar6 = 0;
    *(undefined4 *)&(this->Pose).field_0x8 = *(undefined4 *)&(param_1->Pose).field_0x8;
    *(undefined4 *)&(this->Pose).field_0xc = *(undefined4 *)&(param_1->Pose).field_0xc;
    *(undefined8 *)&(param_1->Pose).field_0x8 = 0;
    *(undefined8 *)&(this->Pose).field_0x10 = *(undefined8 *)&(param_1->Pose).field_0x10;
    *(undefined8 *)&(param_1->Pose).field_0x10 = 0;
  }
  pFVar7 = &param_1->Curve;
  if (pFVar3 != pFVar7) {
    *(undefined8 *)pFVar3 = *(undefined8 *)pFVar7;
    uVar9 = *(undefined4 *)&(param_1->Curve).field_0x8;
    *(undefined8 *)pFVar7 = 0;
    *(undefined4 *)&(this->Curve).field_0x8 = uVar9;
    *(undefined4 *)&(this->Curve).field_0xc = *(undefined4 *)&(param_1->Curve).field_0xc;
    *(undefined8 *)&(param_1->Curve).field_0x8 = 0;
  }
  pFVar10 = &param_1->Attributes;
  (this->Curve).field_0x10 = (param_1->Curve).field_0x10;
  (param_1->Curve).field_0x10 = 0;
  puVar8 = &(param_1->Attributes).field_0x10;
  if (puVar11 != puVar8) {
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              (*(TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **)puVar11,
               *(int *)&(this->Attributes).field_0x18);
    if (*(void **)puVar11 != (void *)0x0) {
      FMemory::Free(*(void **)puVar11);
    }
    *(undefined8 *)puVar11 = *(undefined8 *)puVar8;
    *(undefined8 *)puVar8 = 0;
    *(undefined4 *)&(this->Attributes).field_0x18 = *(undefined4 *)&(param_1->Attributes).field_0x18
    ;
    *(undefined4 *)&(this->Attributes).field_0x1c = *(undefined4 *)&(param_1->Attributes).field_0x1c
    ;
    *(undefined8 *)&(param_1->Attributes).field_0x18 = 0;
  }
  if (pFVar1 != pFVar10) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              (*(TArray<int,TSizedDefaultAllocator<32>_> **)pFVar1,
               *(int *)&(this->Attributes).field_0x8);
    if (*(void **)pFVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar1);
    }
    *(undefined8 *)pFVar1 = *(undefined8 *)pFVar10;
    *(undefined8 *)pFVar10 = 0;
    *(undefined4 *)&(this->Attributes).field_0x8 = *(undefined4 *)&(param_1->Attributes).field_0x8;
    *(undefined4 *)&(this->Attributes).field_0xc = *(undefined4 *)&(param_1->Attributes).field_0xc;
    *(undefined8 *)&(param_1->Attributes).field_0x8 = 0;
  }
  puVar11 = &(param_1->Attributes).field_0x20;
  if (puVar4 != puVar11) {
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              (*(TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                 **)puVar4,*(int *)&(this->Attributes).field_0x28);
    if (*(void **)puVar4 != (void *)0x0) {
      FMemory::Free(*(void **)puVar4);
    }
    *(undefined8 *)puVar4 = *(undefined8 *)puVar11;
    *(undefined8 *)puVar11 = 0;
    *(undefined4 *)&(this->Attributes).field_0x28 = *(undefined4 *)&(param_1->Attributes).field_0x28
    ;
    *(undefined4 *)&(this->Attributes).field_0x2c = *(undefined4 *)&(param_1->Attributes).field_0x2c
    ;
    *(undefined8 *)&(param_1->Attributes).field_0x28 = 0;
  }
  puVar11 = &(param_1->Attributes).field_0x30;
  if (puVar5 != puVar11) {
    if (*(void **)puVar5 != (void *)0x0) {
      FMemory::Free(*(void **)puVar5);
    }
    *(undefined8 *)puVar5 = *(undefined8 *)puVar11;
    *(undefined8 *)puVar11 = 0;
    *(undefined4 *)&(this->Attributes).field_0x38 = *(undefined4 *)&(param_1->Attributes).field_0x38
    ;
    *(undefined4 *)&(this->Attributes).field_0x3c = *(undefined4 *)&(param_1->Attributes).field_0x3c
    ;
    *(undefined8 *)&(param_1->Attributes).field_0x38 = 0;
  }
  return this;
}

