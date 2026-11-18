// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 7

// Construct<FAudioGameplayRequirements> @ 14d981410

void __cdecl UE::CoreUObject::Private::Construct<FAudioGameplayRequirements>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  FGameplayTagQuery::FGameplayTagQuery((FGameplayTagQuery *)((longlong)param_1 + 8));
  return;
}

// ConstructForTests<FAudioGameplayRequirements> @ 14d981450

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioGameplayRequirements>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FGameplayTagQuery::FGameplayTagQuery((FGameplayTagQuery *)((longlong)param_1 + 8));
  return;
}

// Destruct<FAudioGameplayRequirements> @ 14d981470

void __cdecl UE::CoreUObject::Private::Destruct<FAudioGameplayRequirements>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FAudioGameplayRequirements> @ 14d9814d0

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioGameplayRequirements>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      FGameplayTagQuery::operator=
                ((FGameplayTagQuery *)(puVar2 + 1),(FGameplayTagQuery *)(puVar1 + 1));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 10;
    } while (param_3 != 0);
  }
  return true;
}

// Decay<TArray<TObjectPtr<UAudioComponent>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UAudioComponent>,TSizedDefaultAllocator<32>_>_>,TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_>_> @ 14d983400

TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Unsafe::
Decay<TArray<TObjectPtr<UAudioComponent>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UAudioComponent>,TSizedDefaultAllocator<32>_>_>,TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UAudioComponent>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UAudioComponent>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  return (TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UAudioComponentGroup_*>_> @ 14d986e60

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UAudioComponentGroup_*>_>
          (ushort param_1,ForElementType<UAudioComponentGroup_*> *param_2,int *param_3)

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
    if (uVar1 < 0x19) {
      iVar8 = 0x18;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x19) {
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
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UAudioComponentGroup_*>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UAudioComponentGroup_*>_> @ 14d986f30

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UAudioComponentGroup_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UAudioComponentGroup_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x19) {
      iVar1 = 0x18;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UAudioComponentGroup_*>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

