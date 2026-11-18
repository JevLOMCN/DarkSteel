// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 1

// operator= @ 14eac8060

FNodeConnectionMapUpdate * __thiscall
FNodeConnectionMapUpdate::operator=
          (FNodeConnectionMapUpdate *this,FNodeConnectionMapUpdate *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  TWeakPtr<FTcpMessageTransportConnection,1> *pTVar8;
  
  this->bNewNode = param_1->bNewNode;
  uVar5 = (param_1->NodeId).B;
  uVar6 = (param_1->NodeId).C;
  uVar7 = (param_1->NodeId).D;
  pTVar8 = &param_1->Connection;
  (this->NodeId).A = (param_1->NodeId).A;
  (this->NodeId).B = uVar5;
  (this->NodeId).C = uVar6;
  (this->NodeId).D = uVar7;
  if (&this->Connection != pTVar8) {
    (this->Connection).Object = pTVar8->Object;
    pTVar3 = (param_1->Connection).WeakReferenceCount.ReferenceController;
    pTVar8->Object = (FTcpMessageTransportConnection *)0x0;
    pTVar4 = (this->Connection).WeakReferenceCount.ReferenceController;
    (this->Connection).WeakReferenceCount.ReferenceController = pTVar3;
    (param_1->Connection).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  return this;
}

