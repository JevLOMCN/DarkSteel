// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 7

// operator=<FFixedTimeStepCaptureStrategy> @ 146bd3f20

TSharedPtr<ICaptureStrategy,1> * __thiscall
TSharedPtr<ICaptureStrategy,1>::operator=<FFixedTimeStepCaptureStrategy>
          (TSharedPtr<ICaptureStrategy,1> *this,TRawPtrProxy<FFixedTimeStepCaptureStrategy> *param_1
          )

{
  FFixedTimeStepCaptureStrategy *pFVar1;
  TSharedPtr<ICaptureStrategy,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = (ICaptureStrategy *)pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFFixedTimeStepCaptureStrategy__U__DefaultDeleter_UFFixedTimeStepCaptureStrategy___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = (ICaptureStrategy *)pFVar1;
    local_18.Object = (ICaptureStrategy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FRealTimeCaptureStrategy> @ 146bd3fb0

TSharedPtr<ICaptureStrategy,1> * __thiscall
TSharedPtr<ICaptureStrategy,1>::operator=<FRealTimeCaptureStrategy>
          (TSharedPtr<ICaptureStrategy,1> *this,TRawPtrProxy<FRealTimeCaptureStrategy> *param_1)

{
  FRealTimeCaptureStrategy *pFVar1;
  TSharedPtr<ICaptureStrategy,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = (ICaptureStrategy *)pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFRealTimeCaptureStrategy__U__DefaultDeleter_UFRealTimeCaptureStrategy___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = (ICaptureStrategy *)pFVar1;
    local_18.Object = (ICaptureStrategy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator*<FJsonObject> @ 146bd4040

FJsonObject * __thiscall
TSharedPtr<FJsonObject,1>::operator*<FJsonObject>(TSharedPtr<FJsonObject,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FJsonObject *pFVar3;
  
  if (this->Object != (FJsonObject *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FJsonObject *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 146bd9ba0

FImagePixelData * __thiscall
TSharedPtr<FImagePixelData,1>::operator->(TSharedPtr<FImagePixelData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FImagePixelData *pFVar3;
  
  if (this->Object != (FImagePixelData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImagePixelData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 146bd9bf0

ICaptureStrategy * __thiscall
TSharedPtr<ICaptureStrategy,1>::operator->(TSharedPtr<ICaptureStrategy,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ICaptureStrategy *pIVar3;
  
  if (this->Object != (ICaptureStrategy *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ICaptureStrategy *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 146bd9c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FSceneViewport * __thiscall
TSharedPtr<FSceneViewport,1>::operator->(TSharedPtr<FSceneViewport,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSceneViewport *pFVar3;
  
  if (this->Object != (FSceneViewport *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSceneViewport *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 146be9550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TSharedRef<FSceneViewport,1> * __thiscall
TSharedPtr<FSceneViewport,1>::ToSharedRef
          (TSharedPtr<FSceneViewport,1> *this,TSharedRef<FSceneViewport,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FSceneViewport,1> *pTVar4;
  
  if (this->Object == (FSceneViewport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FSceneViewport,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FSceneViewport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FSceneViewport,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

