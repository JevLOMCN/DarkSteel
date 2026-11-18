// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// ~TSparseMatrixAssembler<double> @ 14c7b6fa0

void __thiscall
UE::Solvers::TSparseMatrixAssembler<double>::~TSparseMatrixAssembler<double>
          (TSparseMatrixAssembler<double> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->AddEntriesFunc != 0) {
    plVar1 = *(longlong **)&(this->AddEntriesFunc).field_0x28;
    plVar2 = (longlong *)&(this->AddEntriesFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->AddEntryFunc != 0) {
    plVar1 = *(longlong **)&(this->AddEntryFunc).field_0x28;
    plVar2 = (longlong *)&(this->AddEntryFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->ReserveEntriesFunc != 0) {
    plVar1 = *(longlong **)&(this->ReserveEntriesFunc).field_0x28;
    plVar2 = (longlong *)&(this->ReserveEntriesFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014c7b6ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// operator() @ 14c7cf160

void __thiscall
UE::Solvers::TSparseMatrixAssembler<double>::<lambda_32_>::operator()
          (<lambda_32_> *this,FTupleData *param_1,int param_2)

{
  TSparseMatrixAssembler<double> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int local_res8 [2];
  int local_res20 [2];
  double local_38 [2];
  
  if ((*(longlong *)&this->__this->AddEntryFunc != 0) && (0 < param_2)) {
    uVar6 = (ulonglong)(uint)param_2;
    do {
      local_res8[0] = param_1[param_2].J;
      pTVar1 = this->__this;
      local_38[0] = param_1[param_2].Value;
      local_res20[0] = param_1[param_2].I;
      Core::Private::Function::CheckCallable(*(void **)&pTVar1->AddEntryFunc);
      plVar2 = *(longlong **)&(pTVar1->AddEntryFunc).field_0x28;
      pcVar3 = *(code **)&pTVar1->AddEntryFunc;
      plVar5 = (longlong *)&(pTVar1->AddEntryFunc).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar5 = plVar2;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar3)(uVar4,local_res20,local_res8,local_38);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// operator() @ 14c8b1950

void __thiscall
UE::Solvers::TSparseMatrixAssembler<double>::<lambda_41_>::operator()
          (<lambda_41_> *this,FTupleData *param_1,int param_2)

{
  TSparseMatrixAssembler<double> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int local_res8 [2];
  int local_res20 [2];
  double local_38 [2];
  
  if ((*(longlong *)&this->__this->AddEntryFunc != 0) && (0 < param_2)) {
    uVar6 = (ulonglong)(uint)param_2;
    do {
      local_res8[0] = param_1[param_2].J;
      pTVar1 = this->__this;
      local_38[0] = param_1[param_2].Value;
      local_res20[0] = param_1[param_2].I;
      Core::Private::Function::CheckCallable(*(void **)&pTVar1->AddEntryFunc);
      plVar2 = *(longlong **)&(pTVar1->AddEntryFunc).field_0x28;
      pcVar3 = *(code **)&pTVar1->AddEntryFunc;
      plVar5 = (longlong *)&(pTVar1->AddEntryFunc).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar5 = plVar2;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar3)(uVar4,local_res20,local_res8,local_38);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

