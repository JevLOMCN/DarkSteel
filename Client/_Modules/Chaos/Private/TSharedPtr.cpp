// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// TSharedPtr<ChaosDD::Private::FChaosDDFrame,1><ChaosDD::Private::FChaosDDFrame> @ 1436f1210

TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> * __thiscall
TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>::
TSharedPtr<ChaosDD::Private::FChaosDDFrame,1><ChaosDD::Private::FChaosDDFrame>
          (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *this,FChaosDDFrame *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->Object = param_1;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFChaosDDFrame_Private_ChaosDD__U__DefaultDeleter_VFChaosDDFrame_Private_ChaosDD___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1 != (FChaosDDFrame *)0x0) {
    if (((param_1->_padding_ != 0) && (param_1->_padding_ != 0)) &&
       (0 < *(int *)(param_1->_padding_ + 8))) {
      return this;
    }
    pTVar4 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar4 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)param_1->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return this;
  }
  return this;
}

// operator-> @ 14388d710

FManagedArrayCollection * __thiscall
TSharedPtr<FManagedArrayCollection,1>::operator->(TSharedPtr<FManagedArrayCollection,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FManagedArrayCollection *pFVar3;
  
  if (this->Object != (FManagedArrayCollection *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FManagedArrayCollection *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 143a3b440

FBuffer * __thiscall
TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1>::operator->
          (TSharedPtr<Chaos::Softs::FThreadingProxy::FBuffer_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FBuffer *pFVar3;
  
  if (this->Object != (FBuffer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FBuffer *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<FGeometryCollection_const_> @ 1440f8200

FGeometryCollection * __thiscall
TSharedPtr<FGeometryCollection_const_,1>::operator*<FGeometryCollection_const_>
          (TSharedPtr<FGeometryCollection_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometryCollection *pFVar3;
  
  if (this->Object != (FGeometryCollection *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGeometryCollection *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1440fe3d0

FGeometryCollection * __thiscall
TSharedPtr<FGeometryCollection_const_,1>::operator->(TSharedPtr<FGeometryCollection_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometryCollection *pFVar3;
  
  if (this->Object != (FGeometryCollection *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGeometryCollection *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

