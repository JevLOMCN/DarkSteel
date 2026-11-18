// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FAnimNotifyStateMachineContext @ 1473d5020

FAnimNotifyStateMachineContext * __thiscall
UE::Anim::FAnimNotifyStateMachineContext::FAnimNotifyStateMachineContext
          (FAnimNotifyStateMachineContext *this,FEncounteredStateMachineStack *param_1)

{
  int *piVar1;
  int iVar2;
  FStateMachineEntry *pFVar3;
  
  (this->EncounteredStateMachines).StateStack.AllocatorInstance.SecondaryData.Data =
       (FStateMachineEntry *)0x0;
  this->_padding_ = (longlong)&___7FAnimNotifyStateMachineContext_Anim_UE__6B_;
  pFVar3 = (param_1->StateStack).AllocatorInstance.SecondaryData.Data;
  iVar2 = (param_1->StateStack).ArrayNum;
  (this->EncounteredStateMachines).StateStack.ArrayNum = iVar2;
  if (pFVar3 != (FStateMachineEntry *)0x0) {
    param_1 = (FEncounteredStateMachineStack *)pFVar3;
  }
  piVar1 = &(this->EncounteredStateMachines).StateStack.ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FEncounteredStateMachineStack::FStateMachineEntry>_>
              (8,4,iVar2,0,
               (ForElementType<FEncounteredStateMachineStack::FStateMachineEntry> *)
               &this->EncounteredStateMachines,iVar2,piVar1);
    pFVar3 = (this->EncounteredStateMachines).StateStack.AllocatorInstance.SecondaryData.Data;
    if (pFVar3 == (FStateMachineEntry *)0x0) {
      pFVar3 = (FStateMachineEntry *)&this->EncounteredStateMachines;
    }
    memcpy(pFVar3,param_1,(longlong)iVar2 << 3);
  }
  return this;
}

// GetTypeName @ 147405c20

FName __thiscall
UE::Anim::FAnimNotifyStateMachineContext::GetTypeName(FAnimNotifyStateMachineContext *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// IsStateInStateMachineInContext @ 147407fd0

bool __thiscall
UE::Anim::FAnimNotifyStateMachineContext::IsStateInStateMachineInContext
          (FAnimNotifyStateMachineContext *this,int param_1,int param_2)

{
  FStateMachineEntry *pFVar1;
  int iVar2;
  FStateMachineEntry *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->EncounteredStateMachines).StateStack.AllocatorInstance.SecondaryData.Data;
  iVar2 = (this->EncounteredStateMachines).StateStack.ArrayNum;
  if (pFVar3 == (FStateMachineEntry *)0x0) {
    pFVar3 = (FStateMachineEntry *)&this->EncounteredStateMachines;
  }
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->EncounteredStateMachines).StateStack.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FEncounteredStateMachineStack::FStateMachineEntry_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((pFVar3->StateMachineIndex == param_1) && (pFVar3->StateIndex == param_2)) {
      return true;
    }
    pFVar3 = pFVar3 + 1;
  }
  return false;
}

// IsStateMachineInContext @ 147408050

bool __thiscall
UE::Anim::FAnimNotifyStateMachineContext::IsStateMachineInContext
          (FAnimNotifyStateMachineContext *this,int param_1)

{
  FStateMachineEntry *pFVar1;
  int iVar2;
  FStateMachineEntry *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->EncounteredStateMachines).StateStack.AllocatorInstance.SecondaryData.Data;
  iVar2 = (this->EncounteredStateMachines).StateStack.ArrayNum;
  if (pFVar3 == (FStateMachineEntry *)0x0) {
    pFVar3 = (FStateMachineEntry *)&this->EncounteredStateMachines;
  }
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->EncounteredStateMachines).StateStack.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FEncounteredStateMachineStack::FStateMachineEntry_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (pFVar3->StateMachineIndex == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 1;
  }
  return false;
}

