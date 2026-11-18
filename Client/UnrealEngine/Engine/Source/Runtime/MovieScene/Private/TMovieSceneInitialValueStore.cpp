// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// GetInitialValue @ 1462af160

int __thiscall
TMovieSceneInitialValueStore<int>::GetInitialValue(TMovieSceneInitialValueStore<int> *this)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  TMovieSceneBlendingActuator<int> *pTVar4;
  FScriptContainerElement *pFVar5;
  FWeakObjectPtr FVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  pUVar3 = this->AnimatingObject;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  iVar7 = 0;
  iVar8 = iVar7;
  if (pUVar3 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    iVar7 = local_res8.ObjectSerialNumber;
    iVar8 = local_res8.ObjectIndex;
  }
  FVar6 = local_res8;
  pTVar4 = this->Actuator;
  iVar2 = (pTVar4->InitialValues).ArrayNum;
  pFVar9 = (pTVar4->InitialValues).AllocatorInstance.Data;
  pFVar5 = pFVar9 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((pTVar4->InitialValues).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMovieSceneBlendingActuator<int>::FInitialValue,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar9 == pFVar5) break;
    if ((*(int *)pFVar9 == iVar8) && (*(int *)(pFVar9 + 4) == iVar7)) {
      return *(int *)(pFVar9 + 8);
    }
    pFVar9 = pFVar9 + 0xc;
  }
  iVar7 = (**(code **)(this->Actuator->_padding_ + 0x28))
                    (this->Actuator,this->AnimatingObject,this->Player);
  if (this->Player == (IMovieScenePlayer *)0x0) {
    return iVar7;
  }
  pTVar4 = this->Actuator;
  piVar1 = &(pTVar4->InitialValues).ArrayMax;
  iVar8 = (pTVar4->InitialValues).ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(pTVar4->InitialValues).AllocatorInstance,piVar1);
  }
  (pTVar4->InitialValues).ArrayNum = iVar8 + 1;
  pFVar5 = (pTVar4->InitialValues).AllocatorInstance.Data;
  *(FWeakObjectPtr *)(pFVar5 + (longlong)iVar8 * 0xc) = FVar6;
  *(int *)(pFVar5 + (longlong)iVar8 * 0xc + 8) = iVar7;
  return iVar7;
}

