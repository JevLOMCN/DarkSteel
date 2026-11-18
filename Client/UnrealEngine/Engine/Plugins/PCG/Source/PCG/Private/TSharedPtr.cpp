// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// operator= @ 14973edb0

TSharedPtr<FStreamableHandle,1> * __thiscall
TSharedPtr<FStreamableHandle,1>::operator=
          (TSharedPtr<FStreamableHandle,1> *this,TSharedPtr<FStreamableHandle,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 14973fb30

FReadbackState * __thiscall
TSharedPtr<UPCGRawBufferDataProvider::FReadbackState,1>::operator->
          (TSharedPtr<UPCGRawBufferDataProvider::FReadbackState,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FReadbackState *pFVar3;
  
  if (this->Object != (FReadbackState *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FReadbackState *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14973fb80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPCGDataUploadAdaptor * __thiscall
TSharedPtr<FPCGDataUploadAdaptor,1>::operator->(TSharedPtr<FPCGDataUploadAdaptor,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPCGDataUploadAdaptor *pFVar3;
  
  if (this->Object != (FPCGDataUploadAdaptor *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPCGDataUploadAdaptor *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14973fbd0

IPCGRuntimePrimitiveFactory * __thiscall
TSharedPtr<IPCGRuntimePrimitiveFactory,1>::operator->
          (TSharedPtr<IPCGRuntimePrimitiveFactory,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IPCGRuntimePrimitiveFactory *pIVar3;
  
  if (this->Object != (IPCGRuntimePrimitiveFactory *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IPCGRuntimePrimitiveFactory *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// TSharedPtr<FPCGDataCollectionDesc,1><FPCGDataCollectionDesc> @ 14978ee10

TSharedPtr<FPCGDataCollectionDesc,1> * __thiscall
TSharedPtr<FPCGDataCollectionDesc,1>::TSharedPtr<FPCGDataCollectionDesc,1><FPCGDataCollectionDesc>
          (TSharedPtr<FPCGDataCollectionDesc,1> *this,TRawPtrProxy<FPCGDataCollectionDesc> *param_1)

{
  FPCGDataCollectionDesc *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFPCGDataCollectionDesc__U__DefaultDeleter_UFPCGDataCollectionDesc___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 1497e3eb0

FComputeGraphInstance * __thiscall
TSharedPtr<FComputeGraphInstance,1>::operator->(TSharedPtr<FComputeGraphInstance,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FComputeGraphInstance *pFVar3;
  
  if (this->Object != (FComputeGraphInstance *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FComputeGraphInstance *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 149bea930

IPCGElement * __thiscall TSharedPtr<IPCGElement,1>::operator->(TSharedPtr<IPCGElement,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IPCGElement *pIVar3;
  
  if (this->Object != (IPCGElement *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IPCGElement *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator= @ 149ca6a00

TSharedPtr<IPCGElement,1> * __thiscall
TSharedPtr<IPCGElement,1>::operator=
          (TSharedPtr<IPCGElement,1> *this,TSharedPtr<IPCGElement,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (IPCGElement *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 149ca6f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGGraphActiveTask * __thiscall
TSharedPtr<FPCGGraphActiveTask,1>::operator->(TSharedPtr<FPCGGraphActiveTask,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPCGGraphActiveTask *pFVar3;
  
  if (this->Object != (FPCGGraphActiveTask *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPCGGraphActiveTask *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 149ef0860

FCleanupContext * __thiscall
TSharedPtr<`UPCGComponent::CreateCleanupTask'::__l2::FCleanupContext,1>::operator->(void *this)

{
  code *pcVar1;
  bool bVar2;
  FCleanupContext *pFVar3;
  
  if (*(longlong *)this != 0) {
    return *(FCleanupContext **)this;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCleanupContext *)(*pcVar1)();
    return pFVar3;
  }
  return *(FCleanupContext **)this;
}

