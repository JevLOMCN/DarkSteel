// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// FBlackboardDataToComponentsIterator @ 146e80410

FBlackboardDataToComponentsIterator * __thiscall
UAISystem::FBlackboardDataToComponentsIterator::FBlackboardDataToComponentsIterator
          (FBlackboardDataToComponentsIterator *this,
          TMultiMap<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>
          *param_1,UBlackboardData *param_2)

{
  TArray<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  undefined8 *puVar2;
  UBlackboardData *pUVar3;
  FWeakObjectPtr *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FBlackboardDataToComponentsIterator *pFVar8;
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  FVar9;
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  FVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  UBlackboardData *local_res8;
  FWeakObjectPtr local_68;
  TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
  *local_60;
  FWeakObjectPtr FStack_58;
  int local_50;
  int iStack_4c;
  TBaseKeyIterator<1> local_48;
  
  piVar13 = &(this->IteratorKeysForReference).ArrayMax;
  uVar12 = 0;
  this->CurrentIteratorIndex = 0;
  (this->IteratorKeysForReference).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IteratorKeysForReference).ArrayNum = 0;
  *piVar13 = 0;
  (this->Iterators).AllocatorInstance.SecondaryData =
       (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
        )0x0;
  (this->Iterators).ArrayNum = 0;
  (this->Iterators).ArrayMax = 8;
  for (pUVar3 = param_2; pUVar3 != (UBlackboardData *)0x0;
      pUVar3 = (pUVar3->Parent).field0_0x0.DebugPtr) {
    uVar12 = uVar12 + 1;
  }
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (*piVar13 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar12,&(this->IteratorKeysForReference).AllocatorInstance,
               (this->IteratorKeysForReference).ArrayNum,piVar13);
  }
  pTVar1 = &this->Iterators;
  for (; param_2 != (UBlackboardData *)0x0; param_2 = (param_2->Parent).field0_0x0.DebugPtr) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UBlackboardData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_68.ObjectIndex = 0;
    local_68.ObjectSerialNumber = 0;
    local_res8 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UBlackboardData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_res8);
    pFVar4 = (FWeakObjectPtr *)(this->IteratorKeysForReference).AllocatorInstance.Data;
    if (((pFVar4 <= &local_68) && (&local_68 < pFVar4 + *piVar13)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FBlackboardDataToComponentsIterator *)(*pcVar5)();
      return pFVar8;
    }
    iVar7 = (this->IteratorKeysForReference).ArrayNum;
    if (iVar7 == *piVar13) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->IteratorKeysForReference).AllocatorInstance,piVar13);
    }
    (this->IteratorKeysForReference).ArrayNum = iVar7 + 1;
    *(FWeakObjectPtr *)
     ((this->IteratorKeysForReference).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_68;
    TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
              (&local_48,
               (TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
                *)param_1,(TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr>)local_68);
    FVar10 = (this->Iterators).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
             )pTVar1;
    if (FVar10 != (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                   )0x0) {
      FVar9 = FVar10;
    }
    local_50 = local_48.Index;
    iStack_4c = local_48.NextIndex;
    local_60 = local_48.Set;
    FStack_58 = local_48.Key.WeakPtr;
    if ((ulonglong)FVar9 <= &local_60) {
      FVar9 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
               )pTVar1;
      if (FVar10 != (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                     )0x0) {
        FVar9 = FVar10;
      }
      if ((&local_60 <
           (TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
            **)((longlong)FVar9 + (longlong)(this->Iterators).ArrayMax * 0x18)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FBlackboardDataToComponentsIterator *)(*pcVar5)();
        return pFVar8;
      }
    }
    iVar7 = (this->Iterators).ArrayNum;
    if (iVar7 == (this->Iterators).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>_>
                        (0x818,&pTVar1->AllocatorInstance,&(this->Iterators).ArrayMax);
    }
    (this->Iterators).ArrayNum = iVar7 + 1;
    FVar10 = (this->Iterators).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
             )pTVar1;
    if (FVar10 != (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                   )0x0) {
      FVar9 = FVar10;
    }
    puVar2 = (undefined8 *)((longlong)FVar9 + (longlong)iVar7 * 0x18);
    *puVar2 = local_60;
    *(FWeakObjectPtr *)(puVar2 + 1) = FStack_58;
    *(undefined8 *)((uchar *)((longlong)FVar9 + 0x10) + (longlong)iVar7 * 0x18) = _local_50;
  }
  piVar13 = &(this->Iterators).ArrayNum;
  uVar12 = this->CurrentIteratorIndex;
  uVar11 = 0;
  if ((int)uVar12 < *piVar13) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FBlackboardDataToComponentsIterator *)(*pcVar5)();
    return pFVar8;
  }
  FVar10 = (this->Iterators).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                 )0x0) {
    FVar10 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
              )pTVar1;
  }
  if ((*(int *)((uchar *)((longlong)FVar10 + 0x10) + (longlong)(int)uVar12 * 0x18) == -1) &&
     (this->CurrentIteratorIndex < *piVar13 + -1)) {
    this->CurrentIteratorIndex = this->CurrentIteratorIndex + 1;
    TryMoveIteratorToParentBlackboard(this);
  }
  return this;
}

// GetCurrentIteratorRef @ 146e8d7e0

TConstKeyIterator * __thiscall
UAISystem::FBlackboardDataToComponentsIterator::GetCurrentIteratorRef
          (FBlackboardDataToComponentsIterator *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TConstKeyIterator *pTVar5;
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  FVar6;
  
  uVar1 = this->CurrentIteratorIndex;
  uVar4 = 0;
  if ((int)uVar1 < (this->Iterators).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TConstKeyIterator *)(*pcVar2)();
      return pTVar5;
    }
  }
  FVar6 = (this->Iterators).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )0x0) {
    FVar6 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
             )&this->Iterators;
  }
  return (TConstKeyIterator *)((longlong)FVar6 + (longlong)(int)uVar1 * 0x18);
}

// TryMoveIteratorToParentBlackboard @ 146ea2ec0

void __thiscall
UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard
          (FBlackboardDataToComponentsIterator *this)

{
  int iVar1;
  TConstKeyIterator *pTVar2;
  
  pTVar2 = GetCurrentIteratorRef(this);
  iVar1 = *(int *)&pTVar2->field_0x10;
  while ((iVar1 == -1 && (this->CurrentIteratorIndex < (this->Iterators).ArrayNum + -1))) {
    this->CurrentIteratorIndex = this->CurrentIteratorIndex + 1;
    pTVar2 = GetCurrentIteratorRef(this);
    iVar1 = *(int *)&pTVar2->field_0x10;
  }
  return;
}

