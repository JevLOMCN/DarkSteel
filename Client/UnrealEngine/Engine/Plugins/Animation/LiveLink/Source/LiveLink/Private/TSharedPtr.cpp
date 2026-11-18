// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 15

// TSharedPtr<IMessageHandler,1><TRawMessageCatchall<FLiveLinkMessageBusSource>_> @ 14cff72a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageCatchall<FLiveLinkMessageBusSource>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageCatchall<FLiveLinkMessageBusSource>_> *param_1)

{
  TRawMessageCatchall<FLiveLinkMessageBusSource> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageCatchall_VFLiveLinkMessageBusSource____U__DefaultDeleter_V__TRawMessageCatchall_VFLiveLinkMessageBusSource_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource>_> @ 14cff7310

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource>_>
          *param_1)

{
  TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFLiveLinkClearSubject__VFLiveLinkMessageBusSource____U__DefaultDeleter_V__TRawMessageHandler_UFLiveLinkClearSubject__VFLiveLinkMessageBusSource_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource>_> @ 14cff7380

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource>_>
          *param_1)

{
  TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFLiveLinkHeartbeatMessage__VFLiveLinkMessageBusSource____U__DefaultDeleter_V__TRawMessageHandler_UFLiveLinkHeartbeatMessage__VFLiveLinkMessageBusSource_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager>_> @ 14cff73f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager>_>
          *param_1)

{
  TRawMessageHandler<FLiveLinkPongMessage,FLiveLinkMessageBusDiscoveryManager> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFLiveLinkPongMessage__VFLiveLinkMessageBusDiscoveryManager____U__DefaultDeleter_V__TRawMessageHandler_UFLiveLinkPongMessage__VFLiveLinkMessageBusDiscoveryManager_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder>_> @ 14cff7460

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder>_> *param_1
          )

{
  TRawMessageHandler<FLiveLinkPongMessage,ULiveLinkMessageBusFinder> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFLiveLinkPongMessage__VULiveLinkMessageBusFinder____U__DefaultDeleter_V__TRawMessageHandler_UFLiveLinkPongMessage__VULiveLinkMessageBusFinder_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator= @ 14d0182e0

TSharedPtr<FLiveLinkDebugUIEntry,1> * __thiscall
TSharedPtr<FLiveLinkDebugUIEntry,1>::operator=
          (TSharedPtr<FLiveLinkDebugUIEntry,1> *this,TSharedPtr<FLiveLinkDebugUIEntry,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FLiveLinkDebugUIEntry *pFVar2;
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

// operator= @ 14d018330

TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> * __thiscall
TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>::operator=
          (TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *this,
          TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FLiveLinkSource *pFVar2;
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

// operator= @ 14d018380

TSharedPtr<ILiveLinkProvider,1> * __thiscall
TSharedPtr<ILiveLinkProvider,1>::operator=
          (TSharedPtr<ILiveLinkProvider,1> *this,TSharedPtr<ILiveLinkProvider,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (ILiveLinkProvider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 14d018680

FLiveLinkSource * __thiscall
TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>::operator->
          (TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FLiveLinkSource *pFVar3;
  
  if (this->Object != (FLiveLinkSource *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLiveLinkSource *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d0186d0

FProviderPollResult * __thiscall
TSharedPtr<FProviderPollResult,1>::operator->(TSharedPtr<FProviderPollResult,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FProviderPollResult *pFVar3;
  
  if (this->Object != (FProviderPollResult *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FProviderPollResult *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d018720

ILiveLinkProvider * __thiscall
TSharedPtr<ILiveLinkProvider,1>::operator->(TSharedPtr<ILiveLinkProvider,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ILiveLinkProvider *pIVar3;
  
  if (this->Object != (ILiveLinkProvider *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ILiveLinkProvider *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 14d018770

SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> * __thiscall
TSharedPtr<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
operator->(TSharedPtr<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
           *this)

{
  code *pcVar1;
  bool bVar2;
  SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *pSVar3;
  
  if (this->Object !=
      (SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *)
             (*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 14d0187c0

FLiveLinkTimedDataInput * __thiscall
TSharedPtr<FLiveLinkTimedDataInput,1>::operator->(TSharedPtr<FLiveLinkTimedDataInput,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FLiveLinkTimedDataInput *pFVar3;
  
  if (this->Object != (FLiveLinkTimedDataInput *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLiveLinkTimedDataInput *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d018810

ILiveLinkFrameTranslatorWorker * __thiscall
TSharedPtr<ILiveLinkFrameTranslatorWorker,1>::operator->
          (TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ILiveLinkFrameTranslatorWorker *pIVar3;
  
  if (this->Object != (ILiveLinkFrameTranslatorWorker *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ILiveLinkFrameTranslatorWorker *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 14d018860

ILiveLinkSource * __thiscall
TSharedPtr<ILiveLinkSource,1>::operator->(TSharedPtr<ILiveLinkSource,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ILiveLinkSource *pIVar3;
  
  if (this->Object != (ILiveLinkSource *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ILiveLinkSource *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

