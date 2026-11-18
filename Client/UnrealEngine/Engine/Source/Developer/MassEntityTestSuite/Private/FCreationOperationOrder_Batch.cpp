// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// BuildScenario @ 147118780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001471188aa) */
/* WARNING: Removing unreachable block (ram,0x000147118be4) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Test::Observers::FCreationOperationOrder_Batch::BuildScenario
          (FCreationOperationOrder_Batch *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FMassEntityManager *pFVar3;
  TArrayView<FMassEntityHandle,int> *pTVar4;
  TArrayView<FMassEntityHandle_const_,int> *pTVar5;
  UScriptStruct *pUVar6;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar7;
  TArrayView<FMassArchetypeEntityCollection,int> *pTVar8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar9;
  longlong lVar10;
  undefined1 *puVar11;
  TArrayView<FMassEntityHandle_const_,int> *pTVar12;
  undefined1 *puVar13;
  undefined1 auStackY_338 [32];
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_250;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_240;
  TArrayView<FMassEntityHandle_const_,int> local_228;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_1f8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_1e8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_1d8;
  TArrayView<FMassEntityHandle_const_,int> local_1c8;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_198;
  TSharedRef<UE::Mass::ObserverManager::FObserverLock,1> local_188;
  FMassArchetypeEntityCollection local_178;
  FMassArchetypeEntityCollection local_150;
  TArrayView<FMassEntityHandle_const_,int> local_128;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_118;
  TArrayView<FMassArchetypeEntityCollection,int> local_108;
  TArrayView<FMassEntityHandle_const_,int> local_f8;
  TArrayView<FMassEntityHandle,int> local_e8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_d8;
  TArrayView<FMassEntityHandle,int> local_c8;
  TArrayView<FMassArchetypeEntityCollection,int> local_b8;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> local_a8;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> local_88;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> local_68;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_338;
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::GetOrMakeObserversLock(pFVar3,&local_188);
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (pFVar3,&local_240,(FMassArchetypeHandle *)&this->field_0x50,1,param_2);
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (pFVar3,&local_250,(FMassArchetypeHandle *)&this->field_0x50,1,param_2);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_250);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_240);
  if (param_1->ArrayNum < 1) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar4 = MakeArrayView<FMassEntityHandle>
                     (&local_c8,(FMassEntityHandle *)(param_1->AllocatorInstance).Data,1);
  pTVar5 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
                     (&local_128,pTVar4);
  pTVar12 = &local_228;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)&pTVar12->DataPtr = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar5->DataPtr + 1);
    pTVar12 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar12->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_150,(FMassArchetypeHandle *)&this->field_0x60,&local_228,NoDuplicates);
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pTVar7 = &local_a8;
  for (lVar10 = 0x20; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)pTVar7 = 0;
    pTVar7 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)&pTVar7->field_0x1;
  }
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>(&local_a8);
  pUVar6 = FTestFragment_Float::StaticStruct();
  pTVar7 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
           TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                     (&local_68,pUVar6);
  pTVar8 = MakeArrayView<FMassArchetypeEntityCollection>(&local_108,&local_150,1);
  pTVar9 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int><TArrayView<FMassArchetypeEntityCollection,int>,TArrayView<FMassArchetypeEntityCollection,int>_>
                     (&local_118,pTVar8);
  puVar11 = local_218;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar11 = *(undefined1 *)&pTVar9->DataPtr;
    pTVar9 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar9->DataPtr + 1);
    puVar11 = puVar11 + 1;
  }
  puVar11 = local_218;
  puVar13 = local_208;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar11 = local_208;
  pTVar9 = &local_1f8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)&pTVar9->DataPtr = *puVar11;
    puVar11 = puVar11 + 1;
    pTVar9 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar9->DataPtr + 1);
  }
  FMassEntityManager::BatchChangeFragmentCompositionForEntities(pFVar3,&local_1f8,pTVar7,&local_a8);
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>(&local_68)
  ;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>(&local_a8)
  ;
  FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_150);
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (pFVar3,&local_1d8,(FMassArchetypeHandle *)&this->field_0x50,1,param_2);
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (pFVar3,&local_1e8,(FMassArchetypeHandle *)&this->field_0x50,1,param_2);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_1e8);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_1d8);
  if (param_1->ArrayNum < 2) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar4 = MakeArrayView<FMassEntityHandle>
                     (&local_e8,(FMassEntityHandle *)((param_1->AllocatorInstance).Data + 8),1);
  pTVar5 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
                     (&local_f8,pTVar4);
  pTVar12 = &local_1c8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)&pTVar12->DataPtr = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar5->DataPtr + 1);
    pTVar12 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar12->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_178,(FMassArchetypeHandle *)&this->field_0x60,&local_1c8,NoDuplicates);
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pTVar7 = &local_88;
  for (lVar10 = 0x20; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)pTVar7 = 0;
    pTVar7 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)&pTVar7->field_0x1;
  }
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>(&local_88);
  pUVar6 = FTestFragment_Float::StaticStruct();
  pTVar7 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
           TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                     (&local_48,pUVar6);
  pTVar8 = MakeArrayView<FMassArchetypeEntityCollection>(&local_b8,&local_178,1);
  pTVar9 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int><TArrayView<FMassArchetypeEntityCollection,int>,TArrayView<FMassArchetypeEntityCollection,int>_>
                     (&local_d8,pTVar8);
  puVar11 = local_1b8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar11 = *(undefined1 *)&pTVar9->DataPtr;
    pTVar9 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar9->DataPtr + 1);
    puVar11 = puVar11 + 1;
  }
  puVar11 = local_1b8;
  puVar13 = local_1a8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  puVar11 = local_1a8;
  pTVar9 = &local_198;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)&pTVar9->DataPtr = *puVar11;
    puVar11 = puVar11 + 1;
    pTVar9 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar9->DataPtr + 1);
  }
  FMassEntityManager::BatchChangeFragmentCompositionForEntities(pFVar3,&local_198,pTVar7,&local_88);
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>(&local_48)
  ;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>(&local_88)
  ;
  FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_178);
  TSharedRef<UE::Mass::ObserverManager::FObserverLock,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FObserverLock,1>(&local_188);
  return;
}

