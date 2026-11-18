// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 4

// TSharedPtr<ILiveLinkProvider,1><FLiveLinkProvider> @ 14cfe7ee0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<ILiveLinkProvider,1> * __thiscall
TSharedPtr<ILiveLinkProvider,1>::TSharedPtr<ILiveLinkProvider,1><FLiveLinkProvider>
          (TSharedPtr<ILiveLinkProvider,1> *this,TRawPtrProxy<FLiveLinkProvider> *param_1)

{
  FLiveLinkProvider *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (ILiveLinkProvider *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFLiveLinkProvider__U__DefaultDeleter_UFLiveLinkProvider___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider>_> @ 14cfe7f50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider>_> *param_1)

{
  TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFLiveLinkConnectMessage__UFLiveLinkProvider____U__DefaultDeleter_V__TRawMessageHandler_UFLiveLinkConnectMessage__UFLiveLinkProvider_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider>_> @ 14cfe7fc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider>_> *param_1)

{
  TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFLiveLinkHeartbeatMessage__UFLiveLinkProvider____U__DefaultDeleter_V__TRawMessageHandler_UFLiveLinkHeartbeatMessage__UFLiveLinkProvider_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider>_> @ 14cfe8030

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider>_> *param_1)

{
  TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFLiveLinkPingMessage__UFLiveLinkProvider____U__DefaultDeleter_V__TRawMessageHandler_UFLiveLinkPingMessage__UFLiveLinkProvider_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

