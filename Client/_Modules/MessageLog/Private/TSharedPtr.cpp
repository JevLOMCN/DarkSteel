// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 30

// TSharedPtr<IMessageLogListing,1><FMessageLogListingViewModel> @ 142bba8d0

TSharedPtr<IMessageLogListing,1> * __thiscall
TSharedPtr<IMessageLogListing,1>::TSharedPtr<IMessageLogListing,1><FMessageLogListingViewModel>
          (TSharedPtr<IMessageLogListing,1> *this,TSharedPtr<FMessageLogListingViewModel,1> *param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (IMessageLogListing *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<FMessageLogModel,1><FMessageLogModel> @ 142bbaa10

TSharedPtr<FMessageLogModel,1> * __thiscall
TSharedPtr<FMessageLogModel,1>::TSharedPtr<FMessageLogModel,1><FMessageLogModel>
          (TSharedPtr<FMessageLogModel,1> *this,TRawPtrProxy<FMessageLogModel> *param_1)

{
  FMessageLogModel *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMessageLogModel__U__DefaultDeleter_VFMessageLogModel___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FMessageLogViewModel,1><FMessageLogViewModel> @ 142bbaa80

TSharedPtr<FMessageLogViewModel,1> * __thiscall
TSharedPtr<FMessageLogViewModel,1>::TSharedPtr<FMessageLogViewModel,1><FMessageLogViewModel>
          (TSharedPtr<FMessageLogViewModel,1> *this,TSharedRef<FMessageLogViewModel,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SWidget,1><SButton> @ 142bbaca0

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SButton>
          (TSharedPtr<SWidget,1> *this,TSharedRef<SButton,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SHeaderRow,1><SHeaderRow> @ 142bbad00

TSharedPtr<SHeaderRow,1> * __thiscall
TSharedPtr<SHeaderRow,1>::TSharedPtr<SHeaderRow,1><SHeaderRow>
          (TSharedPtr<SHeaderRow,1> *this,TSharedRef<SHeaderRow,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SWidget,1><SImage> @ 142bbad30

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SImage>
          (TSharedPtr<SWidget,1> *this,TSharedRef<SImage,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SWidget,1><STextBlock> @ 142bbad60

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><STextBlock>
          (TSharedPtr<SWidget,1> *this,TSharedRef<STextBlock,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (SWidget *)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator=<FMessageLogViewModel> @ 142bbad90

TSharedPtr<FMessageLogViewModel,1> * __thiscall
TSharedPtr<FMessageLogViewModel,1>::operator=<FMessageLogViewModel>
          (TSharedPtr<FMessageLogViewModel,1> *this,TRawPtrProxy<FMessageLogViewModel> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FMessageLogViewModel *pFVar4;
  FMessageLogViewModel *pFVar5;
  longlong *plVar6;
  FSharedReferencer<1> FVar7;
  TSharedPtr<FMessageLogViewModel,1> local_18;
  
  pFVar4 = param_1->Object;
  local_18.Object = pFVar4;
  FVar7.ReferenceController = ::operator_new(0x18);
  if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMessageLogViewModel__U__DefaultDeleter_VFMessageLogViewModel___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    FVar7.ReferenceController[1]._padding_ = (longlong)pFVar4;
  }
  pFVar5 = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if ((pFVar5 != (FMessageLogViewModel *)0x0) &&
     (((plVar1 = &pFVar5->_padding_, pFVar5->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar5->_padding_ = (longlong)pFVar5;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)*plVar1) {
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = (longlong *)*plVar1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *plVar1 = (longlong)FVar7.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  if (this != &local_18) {
    this->Object = pFVar4;
    local_18.Object = (FMessageLogViewModel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
    FVar7.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return this;
}

// TSharedPtr<IMessageLogListing,1> @ 142bc4b10

TSharedPtr<IMessageLogListing,1> * __thiscall
TSharedPtr<IMessageLogListing,1>::TSharedPtr<IMessageLogListing,1>
          (TSharedPtr<IMessageLogListing,1> *this,TSharedPtr<IMessageLogListing,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<IMessageLogListing,1>_>,1> @ 142bca980

void __thiscall
TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<IMessageLogListing,1>_>,1>::
~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<IMessageLogListing,1>_>,1>
          (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<IMessageLogListing,1>_>,1>
           *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SListView<TSharedPtr<IMessageLogListing,1>_>,1> @ 142bca9b0

void __thiscall
TSharedPtr<SListView<TSharedPtr<IMessageLogListing,1>_>,1>::
~TSharedPtr<SListView<TSharedPtr<IMessageLogListing,1>_>,1>
          (TSharedPtr<SListView<TSharedPtr<IMessageLogListing,1>_>,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<FMessageLogListingViewModel,1> @ 142bca9c0

void __thiscall
TSharedPtr<FMessageLogListingViewModel,1>::~TSharedPtr<FMessageLogListingViewModel,1>
          (TSharedPtr<FMessageLogListingViewModel,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<FMessageLogViewModel,1> @ 142bca9d0

void __thiscall
TSharedPtr<FMessageLogViewModel,1>::~TSharedPtr<FMessageLogViewModel,1>
          (TSharedPtr<FMessageLogViewModel,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<IMessageLogListing,1> @ 142bca9e0

void __thiscall
TSharedPtr<IMessageLogListing,1>::~TSharedPtr<IMessageLogListing,1>
          (TSharedPtr<IMessageLogListing,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SHeaderRow,1> @ 142bca9f0

void __thiscall TSharedPtr<SHeaderRow,1>::~TSharedPtr<SHeaderRow,1>(TSharedPtr<SHeaderRow,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// ~TSharedPtr<SScrollBar,1> @ 142bcaa20

void __thiscall TSharedPtr<SScrollBar,1>::~TSharedPtr<SScrollBar,1>(TSharedPtr<SScrollBar,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<SSplitter,1> @ 142bcaa30

void __thiscall TSharedPtr<SSplitter,1>::~TSharedPtr<SSplitter,1>(TSharedPtr<SSplitter,1> *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>(&this->SharedReferenceCount);
  return;
}

// operator= @ 142bce4c0

TSharedPtr<FMessageFilter,1> * __thiscall
TSharedPtr<FMessageFilter,1>::operator=
          (TSharedPtr<FMessageFilter,1> *this,TSharedPtr<FMessageFilter,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FMessageFilter *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 142bce510

TSharedPtr<FMessageLogViewModel,1> * __thiscall
TSharedPtr<FMessageLogViewModel,1>::operator=
          (TSharedPtr<FMessageLogViewModel,1> *this,TSharedPtr<FMessageLogViewModel,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FMessageLogViewModel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 142bce550

TSharedPtr<FTokenizedMessage,1> * __thiscall
TSharedPtr<FTokenizedMessage,1>::operator=
          (TSharedPtr<FTokenizedMessage,1> *this,TSharedPtr<FTokenizedMessage,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FTokenizedMessage *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 142bce5a0

TSharedPtr<IMessageLogListing,1> * __thiscall
TSharedPtr<IMessageLogListing,1>::operator=
          (TSharedPtr<IMessageLogListing,1> *this,TSharedPtr<IMessageLogListing,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IMessageLogListing *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pIVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator-> @ 142bce940

SListView<TSharedPtr<IMessageLogListing,1>_> * __thiscall
TSharedPtr<SListView<TSharedPtr<IMessageLogListing,1>_>,1>::operator->
          (TSharedPtr<SListView<TSharedPtr<IMessageLogListing,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SListView<TSharedPtr<IMessageLogListing,1>_> *pSVar3;
  
  if (this->Object != (SListView<TSharedPtr<IMessageLogListing,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SListView<TSharedPtr<IMessageLogListing,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142bce990

SListView<TSharedRef<FTokenizedMessage,1>_> * __thiscall
TSharedPtr<SListView<TSharedRef<FTokenizedMessage,1>_>,1>::operator->
          (TSharedPtr<SListView<TSharedRef<FTokenizedMessage,1>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SListView<TSharedRef<FTokenizedMessage,1>_> *pSVar3;
  
  if (this->Object != (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SListView<TSharedRef<FTokenizedMessage,1>_> *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 142bce9e0

FMessageLogListingModel * __thiscall
TSharedPtr<FMessageLogListingModel,1>::operator->(TSharedPtr<FMessageLogListingModel,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMessageLogListingModel *pFVar3;
  
  if (this->Object != (FMessageLogListingModel *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMessageLogListingModel *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 142bcea30

FMessageLogListingViewModel * __thiscall
TSharedPtr<FMessageLogListingViewModel,1>::operator->
          (TSharedPtr<FMessageLogListingViewModel,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMessageLogListingViewModel *pFVar3;
  
  if (this->Object != (FMessageLogListingViewModel *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMessageLogListingViewModel *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 142bcea80

FMessageLogViewModel * __thiscall
TSharedPtr<FMessageLogViewModel,1>::operator->(TSharedPtr<FMessageLogViewModel,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMessageLogViewModel *pFVar3;
  
  if (this->Object != (FMessageLogViewModel *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMessageLogViewModel *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 142bcead0

FTokenizedMessage * __thiscall
TSharedPtr<FTokenizedMessage,1>::operator->(TSharedPtr<FTokenizedMessage,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FTokenizedMessage *pFVar3;
  
  if (this->Object != (FTokenizedMessage *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTokenizedMessage *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 142bceb20

SScrollBox * __thiscall TSharedPtr<SScrollBox,1>::operator->(TSharedPtr<SScrollBox,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SScrollBox *pSVar3;
  
  if (this->Object != (SScrollBox *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SScrollBox *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 142c28760

TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1> * __thiscall
TSharedPtr<SListView<TSharedRef<FTokenizedMessage,1>_>,1>::ToSharedRef
          (TSharedPtr<SListView<TSharedRef<FTokenizedMessage,1>_>,1> *this,
          TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1> *pTVar4;
  
  if (this->Object == (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 142c28800

TSharedRef<FTokenizedMessage,1> * __thiscall
TSharedPtr<FTokenizedMessage,1>::ToSharedRef
          (TSharedPtr<FTokenizedMessage,1> *this,
          TSharedRef<FTokenizedMessage,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FTokenizedMessage,1> *pTVar4;
  
  if (this->Object == (FTokenizedMessage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FTokenizedMessage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FTokenizedMessage,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

