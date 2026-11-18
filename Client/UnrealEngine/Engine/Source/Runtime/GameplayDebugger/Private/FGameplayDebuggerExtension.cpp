// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 8

// ~FGameplayDebuggerExtension @ 146d41400

void __thiscall
FGameplayDebuggerExtension::~FGameplayDebuggerExtension(FGameplayDebuggerExtension *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7FGameplayDebuggerAddonBase__6B_;
  DestructItems<FGameplayDebuggerInputHandler,int>
            (*(FGameplayDebuggerInputHandler **)&this->field_0x18,*(int *)&this->field_0x20);
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146d41452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// GetDescription @ 146d4c250

FString * __thiscall
FGameplayDebuggerExtension::GetDescription
          (FGameplayDebuggerExtension *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPlayerController @ 146d4d1e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall
FGameplayDebuggerExtension::GetPlayerController(FGameplayDebuggerExtension *this)

{
  APlayerController *pAVar1;
  UObject *pUVar2;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  if (pUVar2 != (UObject *)0x0) {
    pAVar1 = *(APlayerController **)&pUVar2[0x11].field_0x18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (APlayerController *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
    }
    return pAVar1;
  }
  return (APlayerController *)0x0;
}

// IsLocal @ 146d4f3f0

bool __thiscall FGameplayDebuggerExtension::IsLocal(FGameplayDebuggerExtension *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  if (pUVar1 != (UObject *)0x0) {
    return (bool)((byte)(*(uint *)&pUVar1[0x16].field_0x8 >> 2) & 1);
  }
  return true;
}

// OnActivated @ 146d54ec0

void __thiscall FGameplayDebuggerExtension::OnActivated(FGameplayDebuggerExtension *this)

{
  return;
}

// OnDeactivated @ 146d55950

void __thiscall FGameplayDebuggerExtension::OnDeactivated(FGameplayDebuggerExtension *this)

{
  return;
}

// OnGameplayDebuggerActivated @ 146d560c0

void __thiscall
FGameplayDebuggerExtension::OnGameplayDebuggerActivated(FGameplayDebuggerExtension *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  if ((pUVar1 != (UObject *)0x0) && ((*(uint *)&pUVar1[0x16].field_0x8 >> 2 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146d560ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x20))(this);
  return;
}

// OnGameplayDebuggerDeactivated @ 146d56110

void __thiscall
FGameplayDebuggerExtension::OnGameplayDebuggerDeactivated(FGameplayDebuggerExtension *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  if ((pUVar1 != (UObject *)0x0) && ((*(uint *)&pUVar1[0x16].field_0x8 >> 2 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146d5613f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x28))(this);
  return;
}

