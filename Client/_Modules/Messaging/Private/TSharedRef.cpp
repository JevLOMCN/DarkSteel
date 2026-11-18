// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 5

// TSharedRef<FMessageTracerAddressInfo,1><FMessageTracerAddressInfo> @ 142d37d30

TSharedRef<FMessageTracerAddressInfo,1> * __thiscall
TSharedRef<FMessageTracerAddressInfo,1>::
TSharedRef<FMessageTracerAddressInfo,1><FMessageTracerAddressInfo>
          (TSharedRef<FMessageTracerAddressInfo,1> *this,
          TRawPtrProxy<FMessageTracerAddressInfo> *param_1)

{
  FMessageTracerAddressInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FMessageTracerAddressInfo,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFMessageTracerAddressInfo__U__DefaultDeleter_UFMessageTracerAddressInfo___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FMessageTracerAddressInfo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FMessageTracerAddressInfo,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FMessageTracerDispatchState,1><FMessageTracerDispatchState> @ 142d37dd0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FMessageTracerDispatchState,1> * __thiscall
TSharedRef<FMessageTracerDispatchState,1>::
TSharedRef<FMessageTracerDispatchState,1><FMessageTracerDispatchState>
          (TSharedRef<FMessageTracerDispatchState,1> *this,
          TRawPtrProxy<FMessageTracerDispatchState> *param_1)

{
  FMessageTracerDispatchState *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FMessageTracerDispatchState,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFMessageTracerDispatchState__U__DefaultDeleter_UFMessageTracerDispatchState___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FMessageTracerDispatchState *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FMessageTracerDispatchState,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FMessageTracerMessageInfo,1><FMessageTracerMessageInfo> @ 142d37e70

TSharedRef<FMessageTracerMessageInfo,1> * __thiscall
TSharedRef<FMessageTracerMessageInfo,1>::
TSharedRef<FMessageTracerMessageInfo,1><FMessageTracerMessageInfo>
          (TSharedRef<FMessageTracerMessageInfo,1> *this,
          TRawPtrProxy<FMessageTracerMessageInfo> *param_1)

{
  FMessageTracerMessageInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FMessageTracerMessageInfo,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFMessageTracerMessageInfo__U__DefaultDeleter_UFMessageTracerMessageInfo___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FMessageTracerMessageInfo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FMessageTracerMessageInfo,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<IMessageContext,1><FMessageContext> @ 142d37f10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<IMessageContext,1> * __thiscall
TSharedRef<IMessageContext,1>::TSharedRef<IMessageContext,1><FMessageContext>
          (TSharedRef<IMessageContext,1> *this,TRawPtrProxy<FMessageContext> *param_1)

{
  FMessageContext *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<IMessageContext,1> *pTVar5;
  
  this->Object = (IMessageContext *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMessageContext__U__DefaultDeleter_VFMessageContext___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FMessageContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<IMessageContext,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<IMessageSubscription,1><FMessageSubscription> @ 142d37fb0

TSharedRef<IMessageSubscription,1> * __thiscall
TSharedRef<IMessageSubscription,1>::TSharedRef<IMessageSubscription,1><FMessageSubscription>
          (TSharedRef<IMessageSubscription,1> *this,TRawPtrProxy<FMessageSubscription> *param_1)

{
  FMessageSubscription *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<IMessageSubscription,1> *pTVar5;
  
  this->Object = (IMessageSubscription *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMessageSubscription__U__DefaultDeleter_VFMessageSubscription___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FMessageSubscription *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<IMessageSubscription,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

