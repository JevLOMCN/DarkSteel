// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 2

// TSharedPtr<HandlerComponent,1><OodleNetworkHandlerComponent> @ 14e292b40

TSharedPtr<HandlerComponent,1> * __thiscall
TSharedPtr<HandlerComponent,1>::TSharedPtr<HandlerComponent,1><OodleNetworkHandlerComponent>
          (TSharedPtr<HandlerComponent,1> *this,TRawPtrProxy<OodleNetworkHandlerComponent> *param_1)

{
  OodleNetworkHandlerComponent *pOVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (HandlerComponent *)param_1->Object;
  pOVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VOodleNetworkHandlerComponent__U__DefaultDeleter_VOodleNetworkHandlerComponent___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pOVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 14e294970

FOodleNetAnalyticsData * __thiscall
TSharedPtr<FOodleNetAnalyticsData,1>::operator->(TSharedPtr<FOodleNetAnalyticsData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FOodleNetAnalyticsData *pFVar3;
  
  if (this->Object != (FOodleNetAnalyticsData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOodleNetAnalyticsData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

