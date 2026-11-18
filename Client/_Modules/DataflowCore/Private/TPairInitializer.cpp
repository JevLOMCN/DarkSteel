// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 1

// operator<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>_TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry> @ 144405740

TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry> * __thiscall
TPairInitializer<FGuid_const_&,UE::Dataflow::FContextEvaluator::FEvaluationEntry_const_&>::
operator<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>_TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>
          (TPairInitializer<FGuid_const_&,UE::Dataflow::FContextEvaluator::FEvaluationEntry_const_&>
           *this,TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>
                 *__return_storage_ptr__)

{
  FEvaluationEntry *pFVar1;
  FGuid *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  pFVar1 = this->Value;
  pFVar2 = this->Key;
  uVar6 = pFVar2->B;
  uVar7 = pFVar2->C;
  uVar8 = pFVar2->D;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar2->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar6;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar7;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar8;
  uVar6 = (pFVar1->Id).B;
  uVar7 = (pFVar1->Id).C;
  uVar8 = (pFVar1->Id).D;
  *(uint *)&__return_storage_ptr__->field_0x10 = (pFVar1->Id).A;
  *(uint *)&__return_storage_ptr__->field_0x14 = uVar6;
  *(uint *)&__return_storage_ptr__->field_0x18 = uVar7;
  *(uint *)&__return_storage_ptr__->field_0x1c = uVar8;
  *(FDataflowNode **)&__return_storage_ptr__->field_0x20 = (pFVar1->WeakNode).Object;
  pTVar3 = (pFVar1->WeakNode).WeakReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x28 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  lVar4 = *(longlong *)&pFVar1->OnPostEvaluation;
  *(longlong *)&__return_storage_ptr__->field_0x30 = lVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  if (lVar4 != 0) {
    puVar5 = *(undefined8 **)&(pFVar1->OnPostEvaluation).field_0x28;
    puVar9 = (undefined8 *)&(pFVar1->OnPostEvaluation).field_0x10;
    if (puVar5 != (undefined8 *)0x0) {
      puVar9 = puVar5;
    }
    (**(code **)*puVar9)();
  }
  return __return_storage_ptr__;
}

