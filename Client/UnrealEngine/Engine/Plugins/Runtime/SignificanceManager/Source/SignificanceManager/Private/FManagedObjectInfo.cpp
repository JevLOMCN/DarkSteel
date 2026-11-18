// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignificanceManager
// Functions: 1

// UpdateSignificance @ 14e2a6c80

void __thiscall
USignificanceManager::FManagedObjectInfo::UpdateSignificance
          (FManagedObjectInfo *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  float fVar9;
  FManagedObjectInfo *local_res8;
  float local_res10 [2];
  float local_res20 [2];
  FManagedObjectInfo *local_48 [4];
  
  fVar1 = this->Significance;
  if (param_1->ArrayNum == 0) {
    this->Significance = 0.0;
  }
  else if (param_2) {
    this->Significance = 3.4028235e+38;
    iVar2 = param_1->ArrayNum;
    pFVar8 = (param_1->AllocatorInstance).Data;
    pFVar7 = pFVar8 + (longlong)iVar2 * 0x60;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar8 == pFVar7) break;
      local_res8 = this;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->SignificanceFunction);
      plVar3 = *(longlong **)&(this->SignificanceFunction).field_0x28;
      pcVar4 = *(code **)&this->SignificanceFunction;
      plVar6 = (longlong *)&(this->SignificanceFunction).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar6 = plVar3;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      fVar9 = (float)(*pcVar4)(uVar5,&local_res8,pFVar8);
      if (fVar9 < this->Significance) {
        this->Significance = fVar9;
      }
      pFVar8 = pFVar8 + 0x60;
    }
  }
  else {
    this->Significance = -3.4028235e+38;
    iVar2 = param_1->ArrayNum;
    pFVar8 = (param_1->AllocatorInstance).Data;
    pFVar7 = pFVar8 + (longlong)iVar2 * 0x60;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar8 == pFVar7) break;
      local_res8 = this;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->SignificanceFunction);
      plVar3 = *(longlong **)&(this->SignificanceFunction).field_0x28;
      pcVar4 = *(code **)&this->SignificanceFunction;
      plVar6 = (longlong *)&(this->SignificanceFunction).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar6 = plVar3;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      fVar9 = (float)(*pcVar4)(uVar5,&local_res8,pFVar8);
      if (this->Significance <= fVar9 && fVar9 != this->Significance) {
        this->Significance = fVar9;
      }
      pFVar8 = pFVar8 + 0x60;
    }
  }
  if (this->PostSignificanceType == Concurrent) {
    local_res10[0] = this->Significance;
    local_res8 = (FManagedObjectInfo *)((ulonglong)local_res8 & 0xffffffffffffff00);
    local_res20[0] = fVar1;
    local_48[0] = this;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->PostSignificanceFunction);
    plVar3 = *(longlong **)&(this->PostSignificanceFunction).field_0x28;
    pcVar4 = *(code **)&this->PostSignificanceFunction;
    plVar6 = (longlong *)&(this->PostSignificanceFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar6 = plVar3;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar4)(uVar5,local_48,local_res20,local_res10,&local_res8);
  }
  return;
}

