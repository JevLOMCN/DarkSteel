// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// operator-> @ 14d545330

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraEvaluationContext * __thiscall
TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>::operator->
          (TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FCameraEvaluationContext *pFVar3;
  
  if (this->Object != (FCameraEvaluationContext *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCameraEvaluationContext *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d601c00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraEvaluationContext * __thiscall
TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>::operator->
          (TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FCameraEvaluationContext *pFVar3;
  
  if (this->Object != (FCameraEvaluationContext *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCameraEvaluationContext *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d601c50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraSystemEvaluator * __thiscall
TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1>::operator->
          (TSharedPtr<UE::Cameras::FCameraSystemEvaluator,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FCameraSystemEvaluator *pFVar3;
  
  if (this->Object != (FCameraSystemEvaluator *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCameraSystemEvaluator *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d601ca0

FGameplayCameraComponentEvaluationContext * __thiscall
TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1>::operator->
          (TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FGameplayCameraComponentEvaluationContext *pFVar3;
  
  if (this->Object != (FGameplayCameraComponentEvaluationContext *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGameplayCameraComponentEvaluationContext *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 14d639ed0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TSharedRef<UE::Cameras::FCameraEvaluationContext,1> * __thiscall
TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>::ToSharedRef
          (TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *this,
          TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *pTVar4;
  
  if (this->Object == (FCameraEvaluationContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FCameraEvaluationContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14d639f70

TSharedRef<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> * __thiscall
TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1>::ToSharedRef
          (TSharedPtr<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> *this,
          TSharedRef<UE::Cameras::FGameplayCameraComponentEvaluationContext,1>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> *pTVar4;
  
  if (this->Object == (FGameplayCameraComponentEvaluationContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FGameplayCameraComponentEvaluationContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::Cameras::FGameplayCameraComponentEvaluationContext,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14d63a010

TSharedRef<UE::Cameras::FPlayerControlRotationEvaluationService,1> * __thiscall
TSharedPtr<UE::Cameras::FPlayerControlRotationEvaluationService,1>::ToSharedRef
          (TSharedPtr<UE::Cameras::FPlayerControlRotationEvaluationService,1> *this,
          TSharedRef<UE::Cameras::FPlayerControlRotationEvaluationService,1> *__return_storage_ptr__
          )

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<UE::Cameras::FPlayerControlRotationEvaluationService,1> *pTVar4;
  
  if (this->Object == (FPlayerControlRotationEvaluationService *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::Cameras::FPlayerControlRotationEvaluationService,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FPlayerControlRotationEvaluationService *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::Cameras::FPlayerControlRotationEvaluationService,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

