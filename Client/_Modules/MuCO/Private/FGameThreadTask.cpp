// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// operator= @ 14ac0d420

FGameThreadTask * __thiscall
FMutableTaskGraph::FGameThreadTask::operator=(FGameThreadTask *this,FGameThreadTask *param_1)

{
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (this != param_1) {
    pFVar3 = (this->DebugName).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->DebugName).Data.AllocatorInstance.Data = (param_1->DebugName).Data.AllocatorInstance.Data
    ;
    (param_1->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DebugName).Data.ArrayNum = (param_1->DebugName).Data.ArrayNum;
    (this->DebugName).Data.ArrayMax = (param_1->DebugName).Data.ArrayMax;
    (param_1->DebugName).Data.ArrayNum = 0;
    (param_1->DebugName).Data.ArrayMax = 0;
  }
  uVar4 = *(undefined8 *)&(param_1->Body).field_0x8;
  pTVar1 = &param_1->Prerequisites;
  uVar5 = *(undefined8 *)&this->Body;
  uVar6 = *(undefined8 *)&(this->Body).field_0x8;
  pTVar2 = &this->Prerequisites;
  uVar7 = *(undefined8 *)&(this->Body).field_0x10;
  uVar8 = *(undefined8 *)&(this->Body).field_0x18;
  uVar9 = *(undefined8 *)&(this->Body).field_0x20;
  uVar10 = *(undefined8 *)&(this->Body).field_0x28;
  *(undefined8 *)&this->Body = *(undefined8 *)&param_1->Body;
  *(undefined8 *)&(this->Body).field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&(param_1->Body).field_0x18;
  *(undefined8 *)&(this->Body).field_0x10 = *(undefined8 *)&(param_1->Body).field_0x10;
  *(undefined8 *)&(this->Body).field_0x18 = uVar4;
  uVar4 = *(undefined8 *)&(param_1->Body).field_0x28;
  *(undefined8 *)&(this->Body).field_0x20 = *(undefined8 *)&(param_1->Body).field_0x20;
  *(undefined8 *)&(this->Body).field_0x28 = uVar4;
  *(undefined8 *)&param_1->Body = uVar5;
  *(undefined8 *)&(param_1->Body).field_0x8 = uVar6;
  *(undefined8 *)&(param_1->Body).field_0x10 = uVar7;
  *(undefined8 *)&(param_1->Body).field_0x18 = uVar8;
  *(undefined8 *)&(param_1->Body).field_0x20 = uVar9;
  *(undefined8 *)&(param_1->Body).field_0x28 = uVar10;
  if (pTVar2 != pTVar1) {
    DestructItems<UE::Tasks::Private::FTaskHandle,int>
              ((FTaskHandle *)(pTVar2->AllocatorInstance).Data,(this->Prerequisites).ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Prerequisites).ArrayNum = (param_1->Prerequisites).ArrayNum;
    (this->Prerequisites).ArrayMax = (param_1->Prerequisites).ArrayMax;
    (param_1->Prerequisites).ArrayNum = 0;
    (param_1->Prerequisites).ArrayMax = 0;
  }
  this->bLockMutableThread = param_1->bLockMutableThread;
  return this;
}

// AreDependenciesComplete @ 14ac15670

bool __thiscall FMutableTaskGraph::FGameThreadTask::AreDependenciesComplete(FGameThreadTask *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Prerequisites).AllocatorInstance.Data;
  iVar2 = (this->Prerequisites).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Prerequisites).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Tasks::Private::FTaskHandle_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((*(longlong *)pFVar3 != 0) && (*(char *)(*(longlong *)pFVar3 + 0xd0) == '\0')) {
      return false;
    }
    pFVar3 = pFVar3 + 8;
  }
  return true;
}

