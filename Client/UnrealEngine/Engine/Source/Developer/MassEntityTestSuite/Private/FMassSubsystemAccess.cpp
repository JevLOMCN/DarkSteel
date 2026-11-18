// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 17

// GetSubsystem<UMassTestEngineSubsystem,void> @ 1470e33d0

UMassTestEngineSubsystem * __thiscall
FMassSubsystemAccess::GetSubsystem<UMassTestEngineSubsystem,void>(FMassSubsystemAccess *this)

{
  bool bVar1;
  uint uVar2;
  UMassTestEngineSubsystem *pUVar3;
  undefined1 local_res8 [8];
  
  uVar2 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
          GetTypeIndex<UMassTestEngineSubsystem>();
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains((FConstBitSetContainer *)this,uVar2);
  if (!bVar1) {
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                      ((FConstBitSetContainer *)&this->MutableSubsystemsBitSet,uVar2);
    if (!bVar1) {
      bVar1 = `FMassSubsystemAccess::GetSubsystem<UMassTestEngineSubsystem,void>'::__l3::<lambda_1>
              ::operator()(local_res8);
      if (!bVar1) {
        return (UMassTestEngineSubsystem *)0x0;
      }
    }
  }
  pUVar3 = GetSubsystemInternal<UMassTestEngineSubsystem>(this,uVar2);
  return pUVar3;
}

// GetSubsystem<UMassTestGameInstanceSubsystem,void> @ 1470e34f0

UMassTestGameInstanceSubsystem * __thiscall
FMassSubsystemAccess::GetSubsystem<UMassTestGameInstanceSubsystem,void>(FMassSubsystemAccess *this)

{
  bool bVar1;
  uint uVar2;
  UMassTestGameInstanceSubsystem *pUVar3;
  undefined1 local_res8 [8];
  
  uVar2 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
          GetTypeIndex<UMassTestGameInstanceSubsystem>();
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains((FConstBitSetContainer *)this,uVar2);
  if (!bVar1) {
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                      ((FConstBitSetContainer *)&this->MutableSubsystemsBitSet,uVar2);
    if (!bVar1) {
      bVar1 = `FMassSubsystemAccess::GetSubsystem<UMassTestGameInstanceSubsystem,void>'::__l3::
              <lambda_1>::operator()(local_res8);
      if (!bVar1) {
        return (UMassTestGameInstanceSubsystem *)0x0;
      }
    }
  }
  pUVar3 = GetSubsystemInternal<UMassTestGameInstanceSubsystem>(this,uVar2);
  return pUVar3;
}

// GetSubsystem<UMassTestLocalPlayerSubsystem,void> @ 1470e3610

UMassTestLocalPlayerSubsystem * __thiscall
FMassSubsystemAccess::GetSubsystem<UMassTestLocalPlayerSubsystem,void>(FMassSubsystemAccess *this)

{
  bool bVar1;
  uint uVar2;
  UMassTestLocalPlayerSubsystem *pUVar3;
  undefined1 local_res8 [8];
  
  uVar2 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
          GetTypeIndex<UMassTestLocalPlayerSubsystem>();
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains((FConstBitSetContainer *)this,uVar2);
  if (!bVar1) {
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                      ((FConstBitSetContainer *)&this->MutableSubsystemsBitSet,uVar2);
    if (!bVar1) {
      bVar1 = `FMassSubsystemAccess::GetSubsystem<UMassTestLocalPlayerSubsystem,void>'::__l3::
              <lambda_1>::operator()(local_res8);
      if (!bVar1) {
        return (UMassTestLocalPlayerSubsystem *)0x0;
      }
    }
  }
  pUVar3 = GetSubsystemInternal<UMassTestLocalPlayerSubsystem>(this,uVar2);
  return pUVar3;
}

// GetSubsystem<UMassTestWorldSubsystem,void> @ 1470e3730

UMassTestWorldSubsystem * __thiscall
FMassSubsystemAccess::GetSubsystem<UMassTestWorldSubsystem,void>(FMassSubsystemAccess *this)

{
  bool bVar1;
  uint uVar2;
  UMassTestWorldSubsystem *pUVar3;
  undefined1 local_res8 [8];
  
  uVar2 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
          GetTypeIndex<UMassTestWorldSubsystem>();
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains((FConstBitSetContainer *)this,uVar2);
  if (!bVar1) {
    bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains
                      ((FConstBitSetContainer *)&this->MutableSubsystemsBitSet,uVar2);
    if (!bVar1) {
      bVar1 = `FMassSubsystemAccess::GetSubsystem<UMassTestWorldSubsystem,void>'::__l3::<lambda_1>::
              operator()(local_res8);
      if (!bVar1) {
        return (UMassTestWorldSubsystem *)0x0;
      }
    }
  }
  pUVar3 = GetSubsystemInternal<UMassTestWorldSubsystem>(this,uVar2);
  return pUVar3;
}

// GetSubsystemInternal<UMassTestEngineSubsystem> @ 1470e37a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMassTestEngineSubsystem * __thiscall
FMassSubsystemAccess::GetSubsystemInternal<UMassTestEngineSubsystem>
          (FMassSubsystemAccess *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UMassTestEngineSubsystem *pUVar4;
  
  if (((int)param_1 < 0) || ((this->Subsystems).ArrayNum <= (int)param_1)) {
    TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::AddZeroed
              (&this->Subsystems,((this->Subsystems).ArrayNum - param_1) + 1);
  }
  uVar3 = 0;
  if ((int)param_1 < (this->Subsystems).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UMassTestEngineSubsystem *)(*pcVar1)();
    return pUVar4;
  }
  pUVar4 = *(UMassTestEngineSubsystem **)
            ((this->Subsystems).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
  if (pUVar4 == (UMassTestEngineSubsystem *)0x0) {
    pUVar4 = UEngine::GetEngineSubsystem<UMassTestEngineSubsystem>(GEngine);
    uVar3 = 0;
    if ((int)param_1 < (this->Subsystems).ArrayNum) {
      uVar3 = ~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UMassTestEngineSubsystem *)(*pcVar1)();
      return pUVar4;
    }
    *(UMassTestEngineSubsystem **)
     ((this->Subsystems).AllocatorInstance.Data + (longlong)(int)param_1 * 8) = pUVar4;
  }
  return pUVar4;
}

// GetSubsystemInternal<UMassTestGameInstanceSubsystem> @ 1470e38b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMassTestGameInstanceSubsystem * __thiscall
FMassSubsystemAccess::GetSubsystemInternal<UMassTestGameInstanceSubsystem>
          (FMassSubsystemAccess *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UMassTestGameInstanceSubsystem *pUVar4;
  UObject *pUVar5;
  
  if (((int)param_1 < 0) || ((this->Subsystems).ArrayNum <= (int)param_1)) {
    TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::AddZeroed
              (&this->Subsystems,((this->Subsystems).ArrayNum - param_1) + 1);
  }
  uVar3 = 0;
  if ((int)param_1 < (this->Subsystems).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UMassTestGameInstanceSubsystem *)(*pcVar1)();
    return pUVar4;
  }
  pUVar4 = *(UMassTestGameInstanceSubsystem **)
            ((this->Subsystems).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
  if (pUVar4 == (UMassTestGameInstanceSubsystem *)0x0) {
    pUVar5 = FWeakObjectPtr::Get(&(this->World).WeakPtr);
    if ((pUVar5 == (UObject *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("World",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassSubsystemAccess.h"
                           ,0x91,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UMassTestGameInstanceSubsystem *)(*pcVar1)();
      return pUVar4;
    }
    pUVar4 = (UMassTestGameInstanceSubsystem *)0x0;
    if (*(UGameInstance **)(pUVar5 + 0xe) != (UGameInstance *)0x0) {
      pUVar4 = UGameInstance::GetSubsystem<UMassTestGameInstanceSubsystem>
                         (*(UGameInstance **)(pUVar5 + 0xe));
    }
    uVar3 = 0;
    if ((int)param_1 < (this->Subsystems).ArrayNum) {
      uVar3 = ~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UMassTestGameInstanceSubsystem *)(*pcVar1)();
      return pUVar4;
    }
    *(UMassTestGameInstanceSubsystem **)
     ((this->Subsystems).AllocatorInstance.Data + (longlong)(int)param_1 * 8) = pUVar4;
  }
  return pUVar4;
}

// GetSubsystemInternal<UMassTestLocalPlayerSubsystem> @ 1470e3a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMassTestLocalPlayerSubsystem * __thiscall
FMassSubsystemAccess::GetSubsystemInternal<UMassTestLocalPlayerSubsystem>
          (FMassSubsystemAccess *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UMassTestLocalPlayerSubsystem *pUVar4;
  UWorld *this_00;
  ULocalPlayer *this_01;
  
  if (((int)param_1 < 0) || ((this->Subsystems).ArrayNum <= (int)param_1)) {
    TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::AddZeroed
              (&this->Subsystems,((this->Subsystems).ArrayNum - param_1) + 1);
  }
  uVar3 = 0;
  if ((int)param_1 < (this->Subsystems).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UMassTestLocalPlayerSubsystem *)(*pcVar1)();
    return pUVar4;
  }
  pUVar4 = *(UMassTestLocalPlayerSubsystem **)
            ((this->Subsystems).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
  if (pUVar4 == (UMassTestLocalPlayerSubsystem *)0x0) {
    this_00 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
    if ((this_00 == (UWorld *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("World",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassSubsystemAccess.h"
                           ,0x91,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UMassTestLocalPlayerSubsystem *)(*pcVar1)();
      return pUVar4;
    }
    this_01 = UWorld::GetFirstLocalPlayerFromController(this_00);
    pUVar4 = (UMassTestLocalPlayerSubsystem *)0x0;
    if (this_01 != (ULocalPlayer *)0x0) {
      pUVar4 = ULocalPlayer::GetSubsystem<UMassTestLocalPlayerSubsystem>(this_01);
    }
    uVar3 = 0;
    if ((int)param_1 < (this->Subsystems).ArrayNum) {
      uVar3 = ~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UMassTestLocalPlayerSubsystem *)(*pcVar1)();
      return pUVar4;
    }
    *(UMassTestLocalPlayerSubsystem **)
     ((this->Subsystems).AllocatorInstance.Data + (longlong)(int)param_1 * 8) = pUVar4;
  }
  return pUVar4;
}

// GetSubsystemInternal<UMassTestWorldSubsystem> @ 1470e3b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMassTestWorldSubsystem * __thiscall
FMassSubsystemAccess::GetSubsystemInternal<UMassTestWorldSubsystem>
          (FMassSubsystemAccess *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UMassTestWorldSubsystem *pUVar4;
  UWorld *this_00;
  
  if (((int)param_1 < 0) || ((this->Subsystems).ArrayNum <= (int)param_1)) {
    TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::AddZeroed
              (&this->Subsystems,((this->Subsystems).ArrayNum - param_1) + 1);
  }
  uVar3 = 0;
  if ((int)param_1 < (this->Subsystems).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UMassTestWorldSubsystem *)(*pcVar1)();
    return pUVar4;
  }
  pUVar4 = *(UMassTestWorldSubsystem **)
            ((this->Subsystems).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
  if (pUVar4 == (UMassTestWorldSubsystem *)0x0) {
    this_00 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
    if (this_00 == (UWorld *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassSubsystemAccess.h"
                         ,0x91,L"");
      pUVar4 = (UMassTestWorldSubsystem *)0x0;
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UMassTestWorldSubsystem *)(*pcVar1)();
        return pUVar4;
      }
    }
    else {
      pUVar4 = UWorld::GetSubsystem<UMassTestWorldSubsystem>(this_00);
    }
    uVar3 = 0;
    if ((int)param_1 < (this->Subsystems).ArrayNum) {
      uVar3 = ~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UMassTestWorldSubsystem *)(*pcVar1)();
      return pUVar4;
    }
    *(UMassTestWorldSubsystem **)
     ((this->Subsystems).AllocatorInstance.Data + (longlong)(int)param_1 * 8) = pUVar4;
  }
  return pUVar4;
}

// SetSubsystemRequirementBits @ 14719d3d0

void __thiscall
FMassSubsystemAccess::SetSubsystemRequirementBits
          (FMassSubsystemAccess *this,
          TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
          *param_1,TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                   *param_2)

{
  if (this != (FMassSubsystemAccess *)param_1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)this,
               (TBitArray<FDefaultBitArrayAllocator> *)param_1);
  }
  if (&this->MutableSubsystemsBitSet != param_2) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->MutableSubsystemsBitSet,
               (TBitArray<FDefaultBitArrayAllocator> *)param_2);
  }
  return;
}

// operator() @ 150501060

bool __thiscall
`FMassSubsystemAccess::GetMutableSubsystem<UMassTestEngineSubsystem,void>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9114749857217642530>);
  if (bVar2) {
    pUVar4 = UMassTestEngineSubsystem::StaticClass();
    if (pUVar4 == (UClass *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = (FName)pUVar4->_padding_;
      ::FName::ToString(local_res10,&local_18);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9114749857217642530>,
                       &`public:___cdecl_`public:_class_UMassTestEngineSubsystem*___ptr64___cdecl_FMassSubsystemAccess::GetMutableSubsystem<UMassTestEngineSubsystem,void>(void)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505010ec;
    }
  }
  bVar2 = false;
LAB_1505010ec:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150501120

bool __thiscall
`FMassSubsystemAccess::GetMutableSubsystem<UMassTestGameInstanceSubsystem,void>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9114749857217642530>);
  if (bVar2) {
    pUVar4 = UMassTestGameInstanceSubsystem::StaticClass();
    if (pUVar4 == (UClass *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = (FName)pUVar4->_padding_;
      ::FName::ToString(local_res10,&local_18);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9114749857217642530>,
                       &`public:___cdecl_`public:_class_UMassTestGameInstanceSubsystem*___ptr64___cdecl_FMassSubsystemAccess::GetMutableSubsystem<UMassTestGameInstanceSubsystem,void>(void)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505011ac;
    }
  }
  bVar2 = false;
LAB_1505011ac:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505011e0

bool __thiscall
`FMassSubsystemAccess::GetMutableSubsystem<UMassTestLocalPlayerSubsystem,void>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9114749857217642530>);
  if (bVar2) {
    pUVar4 = UMassTestLocalPlayerSubsystem::StaticClass();
    if (pUVar4 == (UClass *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = (FName)pUVar4->_padding_;
      ::FName::ToString(local_res10,&local_18);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9114749857217642530>,
                       &`public:___cdecl_`public:_class_UMassTestLocalPlayerSubsystem*___ptr64___cdecl_FMassSubsystemAccess::GetMutableSubsystem<UMassTestLocalPlayerSubsystem,void>(void)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050126c;
    }
  }
  bVar2 = false;
LAB_15050126c:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505012a0

bool __thiscall
`FMassSubsystemAccess::GetMutableSubsystem<UMassTestWorldSubsystem,void>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9114749857217642530>);
  if (bVar2) {
    pUVar4 = UMassTestWorldSubsystem::StaticClass();
    if (pUVar4 == (UClass *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = (FName)pUVar4->_padding_;
      ::FName::ToString(local_res10,&local_18);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9114749857217642530>,
                       &`public:___cdecl_`public:_class_UMassTestWorldSubsystem*___ptr64___cdecl_FMassSubsystemAccess::GetMutableSubsystem<UMassTestWorldSubsystem,void>(void)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050132c;
    }
  }
  bVar2 = false;
LAB_15050132c:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150501360

bool __thiscall
`FMassSubsystemAccess::GetSubsystem<UMassTestEngineSubsystem,void>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9114749857217642551>);
  if (bVar2) {
    pUVar4 = UMassTestEngineSubsystem::StaticClass();
    if (pUVar4 == (UClass *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = (FName)pUVar4->_padding_;
      ::FName::ToString(local_res10,&local_18);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9114749857217642551>,
                       &`public:___cdecl_`public:_class_UMassTestEngineSubsystem_const*___ptr64___cdecl_FMassSubsystemAccess::GetSubsystem<UMassTestEngineSubsystem,void>(void)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505013ec;
    }
  }
  bVar2 = false;
LAB_1505013ec:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150501420

bool __thiscall
`FMassSubsystemAccess::GetSubsystem<UMassTestGameInstanceSubsystem,void>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9114749857217642551>);
  if (bVar2) {
    pUVar4 = UMassTestGameInstanceSubsystem::StaticClass();
    if (pUVar4 == (UClass *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = (FName)pUVar4->_padding_;
      ::FName::ToString(local_res10,&local_18);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9114749857217642551>,
                       &`public:___cdecl_`public:_class_UMassTestGameInstanceSubsystem_const*___ptr64___cdecl_FMassSubsystemAccess::GetSubsystem<UMassTestGameInstanceSubsystem,void>(void)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505014ac;
    }
  }
  bVar2 = false;
LAB_1505014ac:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505014e0

bool __thiscall
`FMassSubsystemAccess::GetSubsystem<UMassTestLocalPlayerSubsystem,void>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9114749857217642551>);
  if (bVar2) {
    pUVar4 = UMassTestLocalPlayerSubsystem::StaticClass();
    if (pUVar4 == (UClass *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = (FName)pUVar4->_padding_;
      ::FName::ToString(local_res10,&local_18);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9114749857217642551>,
                       &`public:___cdecl_`public:_class_UMassTestLocalPlayerSubsystem_const*___ptr64___cdecl_FMassSubsystemAccess::GetSubsystem<UMassTestLocalPlayerSubsystem,void>(void)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050156c;
    }
  }
  bVar2 = false;
LAB_15050156c:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505015a0

bool __thiscall
`FMassSubsystemAccess::GetSubsystem<UMassTestWorldSubsystem,void>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9114749857217642551>);
  if (bVar2) {
    pUVar4 = UMassTestWorldSubsystem::StaticClass();
    if (pUVar4 == (UClass *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = (FName)pUVar4->_padding_;
      ::FName::ToString(local_res10,&local_18);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9114749857217642551>,
                       &`public:___cdecl_`public:_class_UMassTestWorldSubsystem_const*___ptr64___cdecl_FMassSubsystemAccess::GetSubsystem<UMassTestWorldSubsystem,void>(void)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050162c;
    }
  }
  bVar2 = false;
LAB_15050162c:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

