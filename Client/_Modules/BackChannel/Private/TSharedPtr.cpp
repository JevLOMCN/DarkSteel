// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 3

// TSharedPtr<FBackChannelConnection,1><FBackChannelConnection> @ 14e7f2560

TSharedPtr<FBackChannelConnection,1> * __thiscall
TSharedPtr<FBackChannelConnection,1>::TSharedPtr<FBackChannelConnection,1><FBackChannelConnection>
          (TSharedPtr<FBackChannelConnection,1> *this,TRawPtrProxy<FBackChannelConnection> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FBackChannelConnection *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFBackChannelConnection__U__DefaultDeleter_VFBackChannelConnection___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FBackChannelConnection *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedPtr<FBackChannelOSCBundle,1><FBackChannelOSCBundle> @ 14e7f2740

TSharedPtr<FBackChannelOSCBundle,1> * __thiscall
TSharedPtr<FBackChannelOSCBundle,1>::TSharedPtr<FBackChannelOSCBundle,1><FBackChannelOSCBundle>
          (TSharedPtr<FBackChannelOSCBundle,1> *this,TRawPtrProxy<FBackChannelOSCBundle> *param_1)

{
  FBackChannelOSCBundle *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFBackChannelOSCBundle__U__DefaultDeleter_VFBackChannelOSCBundle___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FBackChannelOSCMessage,1><FBackChannelOSCMessage> @ 14e7f27b0

TSharedPtr<FBackChannelOSCMessage,1> * __thiscall
TSharedPtr<FBackChannelOSCMessage,1>::TSharedPtr<FBackChannelOSCMessage,1><FBackChannelOSCMessage>
          (TSharedPtr<FBackChannelOSCMessage,1> *this,TRawPtrProxy<FBackChannelOSCMessage> *param_1)

{
  FBackChannelOSCMessage *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFBackChannelOSCMessage__U__DefaultDeleter_VFBackChannelOSCMessage___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

