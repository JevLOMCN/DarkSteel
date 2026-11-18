// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 8

// Construct<FGameplayResourceSet> @ 146ceb870

void __cdecl UE::CoreUObject::Private::Construct<FGameplayResourceSet>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// ConstructForTests<FGameplayResourceSet> @ 146ceb880

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameplayResourceSet>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// Destruct<FGameplayResourceSet> @ 146ceb890

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayResourceSet>(void *param_1)

{
  return;
}

// Copy<FGameplayResourceSet> @ 146ceb8a0

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayResourceSet>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Decay<TObjectPtr<AActor>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<AActor>_>,AActor_*> @ 146cebae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<AActor>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<AActor>_>,AActor_*>
          (TObjectPtr<AActor> *param_1)

{
  return (AActor **)param_1;
}

// DereferenceIfNecessary<UGameplayTask_TimeLimitedExecution,UGameplayTask_TimeLimitedExecution_*_&> @ 146cebaf0

UGameplayTask_TimeLimitedExecution * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UGameplayTask_TimeLimitedExecution,UGameplayTask_TimeLimitedExecution_*_&>
          (UGameplayTask_TimeLimitedExecution **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UGameplayTask_WaitDelay,UGameplayTask_WaitDelay_*_&> @ 146cebb10

UGameplayTask_WaitDelay * __cdecl
UE::Core::Private::DereferenceIfNecessary<UGameplayTask_WaitDelay,UGameplayTask_WaitDelay_*_&>
          (UGameplayTask_WaitDelay **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UGameplayTask_*>_> @ 146cecc70

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UGameplayTask_*>_>
          (ushort param_1,ForElementType<UGameplayTask_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UGameplayTask_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

