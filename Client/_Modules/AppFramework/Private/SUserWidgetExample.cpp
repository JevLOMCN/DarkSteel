// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// New @ 142fed4f0

TSharedRef<SUserWidgetExample,1> * __cdecl
SUserWidgetExample::New(TSharedRef<SUserWidgetExample,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  SCompoundWidget *this;
  TSharedRef<SUserWidgetExample,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  this = FMemory::Malloc(0x2a8,0);
  if (this == (SCompoundWidget *)0x0) {
    this = (SCompoundWidget *)0x0;
  }
  else {
    memset(this,0,0x2a8);
    SCompoundWidget::SCompoundWidget(this);
    this->_padding_ = (longlong)&___7SUserWidgetExampleImpl__6B_;
    if (((this->_padding_ != 0) && (this->_padding_ != 0)) && (0 < *(int *)(this->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSharedRef<SUserWidgetExample,1> *)(*pcVar4)();
        return pTVar6;
      }
    }
  }
  __return_storage_ptr__->Object = (SUserWidgetExample *)this;
  pTVar7 = ::operator_new(0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VSUserWidgetExampleImpl__U__DefaultDeleter_VSUserWidgetExampleImpl___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7[1]._padding_ = (longlong)this;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
  if (this == (SCompoundWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSharedRef<SUserWidgetExample,1> *)(*pcVar4)();
      return pTVar6;
    }
  }
  else if (((this->_padding_ == 0) || (this->_padding_ == 0)) || (*(int *)(this->_padding_ + 8) < 1)
          ) {
    pTVar7 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    this->_padding_ = (longlong)this;
    if (pTVar7 != (TReferenceControllerBase<1> *)this->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)this->_padding_;
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
      this->_padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  return __return_storage_ptr__;
}

