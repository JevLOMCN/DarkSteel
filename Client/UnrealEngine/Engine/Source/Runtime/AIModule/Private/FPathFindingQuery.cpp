// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// FPathFindingQuery @ 146f298e0

FPathFindingQuery * __thiscall
FPathFindingQuery::FPathFindingQuery(FPathFindingQuery *this,FPathFindingQuery *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  uint uVar3;
  
  this->_padding_ = param_1->_padding_;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  this->_padding_ = param_1->_padding_;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  lVar1 = param_1->_padding_;
  this->_padding_ = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  uVar3 = (*(uint *)((longlong)&this->_padding_ + 4) ^ *(uint *)((longlong)&param_1->_padding_ + 4))
          & 1 ^ *(uint *)((longlong)&this->_padding_ + 4);
  *(uint *)((longlong)&this->_padding_ + 4) = uVar3;
  *(uint *)((longlong)&this->_padding_ + 4) =
       (uVar3 ^ *(uint *)((longlong)&param_1->_padding_ + 4)) & 2 ^ uVar3;
  (this->NavData).WeakPtr = (param_1->NavData).WeakPtr;
  (this->PathInstanceToFill).Object = (param_1->PathInstanceToFill).Object;
  pTVar2 = (param_1->PathInstanceToFill).SharedReferenceCount.ReferenceController;
  (this->PathInstanceToFill).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  FNavAgentProperties::FNavAgentProperties(&this->NavAgentProperties,&param_1->NavAgentProperties);
  return this;
}

