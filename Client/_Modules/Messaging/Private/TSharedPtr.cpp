// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 4

// operator=<FMessageTracerEndpointInfo> @ 142d38050

TSharedPtr<FMessageTracerEndpointInfo,1> * __thiscall
TSharedPtr<FMessageTracerEndpointInfo,1>::operator=<FMessageTracerEndpointInfo>
          (TSharedPtr<FMessageTracerEndpointInfo,1> *this,
          TRawPtrProxy<FMessageTracerEndpointInfo> *param_1)

{
  FMessageTracerEndpointInfo *pFVar1;
  TSharedPtr<FMessageTracerEndpointInfo,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFMessageTracerEndpointInfo__U__DefaultDeleter_UFMessageTracerEndpointInfo___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FMessageTracerEndpointInfo *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FMessageTracerInterceptorInfo> @ 142d380e0

TSharedPtr<FMessageTracerInterceptorInfo,1> * __thiscall
TSharedPtr<FMessageTracerInterceptorInfo,1>::operator=<FMessageTracerInterceptorInfo>
          (TSharedPtr<FMessageTracerInterceptorInfo,1> *this,
          TRawPtrProxy<FMessageTracerInterceptorInfo> *param_1)

{
  FMessageTracerInterceptorInfo *pFVar1;
  TSharedPtr<FMessageTracerInterceptorInfo,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFMessageTracerInterceptorInfo__U__DefaultDeleter_UFMessageTracerInterceptorInfo___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FMessageTracerInterceptorInfo *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FMessageTracerTypeInfo> @ 142d38170

TSharedPtr<FMessageTracerTypeInfo,1> * __thiscall
TSharedPtr<FMessageTracerTypeInfo,1>::operator=<FMessageTracerTypeInfo>
          (TSharedPtr<FMessageTracerTypeInfo,1> *this,TRawPtrProxy<FMessageTracerTypeInfo> *param_1)

{
  FMessageTracerTypeInfo *pFVar1;
  TSharedPtr<FMessageTracerTypeInfo,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFMessageTracerTypeInfo__U__DefaultDeleter_UFMessageTracerTypeInfo___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FMessageTracerTypeInfo *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 142d3f430

IMessageBus * __thiscall TSharedPtr<IMessageBus,1>::operator->(TSharedPtr<IMessageBus,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IMessageBus *pIVar3;
  
  if (this->Object != (IMessageBus *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IMessageBus *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

