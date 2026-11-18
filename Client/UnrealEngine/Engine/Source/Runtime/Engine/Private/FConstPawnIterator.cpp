// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FConstPawnIterator @ 1489b3460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FConstPawnIterator * __thiscall
FConstPawnIterator::FConstPawnIterator(FConstPawnIterator *this,UWorld *param_1)

{
  TActorIterator<APawn> *pTVar1;
  UClass *local_res8;
  
  pTVar1 = ::operator_new(0x60);
  if (pTVar1 != (TActorIterator<APawn> *)0x0) {
    local_res8 = Z_Construct_UClass_APawn_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pTVar1 = TActorIterator<APawn>::TActorIterator<APawn>
                       (pTVar1,param_1,(TSubclassOf<APawn>)&local_res8,
                        OnlyActiveLevels|SkipPendingKill);
    (this->Iterator).Ptr = pTVar1;
    return this;
  }
  (this->Iterator).Ptr = (TActorIterator<APawn> *)0x0;
  return this;
}

// FConstPawnIterator @ 1489b3500

FConstPawnIterator * __thiscall
FConstPawnIterator::FConstPawnIterator(FConstPawnIterator *this,FConstPawnIterator *param_1)

{
  (this->Iterator).Ptr = (param_1->Iterator).Ptr;
  (param_1->Iterator).Ptr = (TActorIterator<APawn> *)0x0;
  return this;
}

// ~FConstPawnIterator @ 1489b91d0

void __thiscall FConstPawnIterator::~FConstPawnIterator(FConstPawnIterator *this)

{
  TActorIterator<APawn> *pTVar1;
  
  pTVar1 = (this->Iterator).Ptr;
  if (pTVar1 != (TActorIterator<APawn> *)0x0) {
    if (pTVar1->field_0x58 != '\0') {
      if (*(ulong64 *)&pTVar1->field_0x50 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   (*(longlong *)&pTVar1->field_0x8 + 0x508),
                   (FDelegateHandle)*(ulong64 *)&pTVar1->field_0x50);
      }
      if (*(void **)&pTVar1->field_0x38 != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar1->field_0x38);
      }
      if (*(void **)&pTVar1->field_0x10 != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar1->field_0x10);
      }
    }
    ::operator_delete(pTVar1,0x60);
    return;
  }
  return;
}

// operator= @ 1489bb650

FConstPawnIterator * __thiscall
FConstPawnIterator::operator=(FConstPawnIterator *this,FConstPawnIterator *param_1)

{
  TActorIterator<APawn> *pTVar1;
  
  if (this != param_1) {
    pTVar1 = (this->Iterator).Ptr;
    (this->Iterator).Ptr = (param_1->Iterator).Ptr;
    (param_1->Iterator).Ptr = (TActorIterator<APawn> *)0x0;
    if (pTVar1 != (TActorIterator<APawn> *)0x0) {
      if (pTVar1->field_0x58 != '\0') {
        if (*(ulong64 *)&pTVar1->field_0x50 != 0) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     (*(longlong *)&pTVar1->field_0x8 + 0x508),
                     (FDelegateHandle)*(ulong64 *)&pTVar1->field_0x50);
        }
        if (*(void **)&pTVar1->field_0x38 != (void *)0x0) {
          FMemory::Free(*(void **)&pTVar1->field_0x38);
        }
        if (*(void **)&pTVar1->field_0x10 != (void *)0x0) {
          FMemory::Free(*(void **)&pTVar1->field_0x10);
        }
      }
      ::operator_delete(pTVar1,0x60);
    }
    return this;
  }
  return this;
}

// operator_bool @ 1489bdb60

bool __thiscall FConstPawnIterator::operator_bool(FConstPawnIterator *this)

{
  TActorIterator<APawn> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  pTVar1 = (this->Iterator).Ptr;
  if (pTVar1 != (TActorIterator<APawn> *)0x0) {
    if (pTVar1->field_0x58 == '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        bVar3 = (bool)(*pcVar2)();
        return bVar3;
      }
    }
    if (pTVar1->field_0x24 == '\0') {
      return true;
    }
  }
  return false;
}

// operator-> @ 1489bdbc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TUniquePtr<FPawnIteratorObject,TDefaultDelete<FPawnIteratorObject>_> __thiscall
FConstPawnIterator::operator->(FConstPawnIterator *this)

{
  TActorIterator<APawn> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<FPawnIteratorObject,TDefaultDelete<FPawnIteratorObject>_> TVar4;
  APawn *pAVar5;
  AActor *pAVar6;
  APawn *pAVar7;
  FPawnIteratorObject *in_RDX;
  
  if ((this->Iterator).Ptr == (TActorIterator<APawn> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Iterator.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                       ,0x196e,
                       L"FConstPawnIterator::operator->() - this iterator has been moved from and is now invalid."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Ptr = (FPawnIteratorObject *)(*pcVar2)();
      return (TUniquePtr<FPawnIteratorObject,TDefaultDelete<FPawnIteratorObject>_>)TVar4.Ptr;
    }
  }
  pAVar5 = ::operator_new(8);
  if (pAVar5 != (APawn *)0x0) {
    pTVar1 = (this->Iterator).Ptr;
    if (pTVar1->field_0x58 == '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Ptr = (FPawnIteratorObject *)(*pcVar2)();
        return (TUniquePtr<FPawnIteratorObject,TDefaultDelete<FPawnIteratorObject>_>)TVar4.Ptr;
      }
    }
    pAVar6 = FActorIteratorState::GetActorChecked((FActorIteratorState *)&pTVar1->field_0x8);
    pAVar7 = CastChecked<APawn,AActor>(pAVar6);
    pAVar5->_padding_ = (longlong)pAVar7;
    in_RDX->Pawn = pAVar5;
    return (TUniquePtr<FPawnIteratorObject,TDefaultDelete<FPawnIteratorObject>_>)in_RDX;
  }
  in_RDX->Pawn = (APawn *)0x0;
  return (TUniquePtr<FPawnIteratorObject,TDefaultDelete<FPawnIteratorObject>_>)in_RDX;
}

// operator* @ 1489bdd00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPawnIteratorObject __thiscall FConstPawnIterator::operator*(FConstPawnIterator *this)

{
  TActorIterator<APawn> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FPawnIteratorObject FVar4;
  AActor *pAVar5;
  APawn *pAVar6;
  APawn *in_RDX;
  
  if ((this->Iterator).Ptr == (TActorIterator<APawn> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Iterator.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                       ,0x1967,
                       L"FConstPawnIterator::operator*() - this iterator has been moved from and is now invalid."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.Pawn = (APawn *)(*pcVar2)();
      return (FPawnIteratorObject)FVar4.Pawn;
    }
  }
  pTVar1 = (this->Iterator).Ptr;
  if (pTVar1->field_0x58 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.Pawn = (APawn *)(*pcVar2)();
      return (FPawnIteratorObject)FVar4.Pawn;
    }
  }
  pAVar5 = FActorIteratorState::GetActorChecked((FActorIteratorState *)&pTVar1->field_0x8);
  pAVar6 = CastChecked<APawn,AActor>(pAVar5);
  in_RDX->_padding_ = (longlong)pAVar6;
  return (FPawnIteratorObject)in_RDX;
}

// operator++ @ 1489be620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FConstPawnIterator * __thiscall FConstPawnIterator::operator++(FConstPawnIterator *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FConstPawnIterator *pFVar3;
  
  if ((this->Iterator).Ptr == (TActorIterator<APawn> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Iterator.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                       ,0x195f,
                       L"FConstPawnIterator::operator++(int) - this iterator has been moved from and is now invalid."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConstPawnIterator *)(*pcVar1)();
      return pFVar3;
    }
  }
  TActorIteratorBase<TActorIterator<APawn>_>::operator++
            ((TActorIteratorBase<TActorIterator<APawn>_> *)(this->Iterator).Ptr);
  return this;
}

// operator++ @ 1489be670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FConstPawnIterator * __thiscall FConstPawnIterator::operator++(FConstPawnIterator *this)

{
  code *pcVar1;
  bool bVar2;
  FConstPawnIterator *pFVar3;
  
  if ((this->Iterator).Ptr == (TActorIterator<APawn> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Iterator.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                       ,0x1957,
                       L"FConstPawnIterator::operator++() - this iterator has been moved from and is now invalid."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConstPawnIterator *)(*pcVar1)();
      return pFVar3;
    }
  }
  TActorIteratorBase<TActorIterator<APawn>_>::operator++
            ((TActorIteratorBase<TActorIterator<APawn>_> *)(this->Iterator).Ptr);
  return this;
}

