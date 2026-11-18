// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 1471507b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FCreatedEntitiesUnobservedCompositionChange::InstantTest
          (FCreatedEntitiesUnobservedCompositionChange *this)

{
  EMassObservedOperationFlags EVar1;
  int iVar2;
  bool bVar3;
  FMassEntityManager *this_00;
  TNotNull<UMassProcessor_*> *pTVar4;
  TNotNull<UScriptStruct_const_*> *pTVar5;
  UScriptStruct *pUVar6;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *pTVar7;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar8;
  longlong lVar9;
  undefined1 *puVar10;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *pTVar11;
  undefined1 *puVar12;
  undefined1 auStackY_1e8 [32];
  UScriptStruct *local_188;
  TNotNull<UScriptStruct_const_*> *local_180;
  UScriptStruct *local_178;
  TNotNull<UMassProcessor_*> local_170;
  UScriptStruct *local_168;
  FMassObserverManager *local_160;
  FMassEntityManager *local_158;
  FMassEntityManager *local_150;
  FMassEntityManager *local_148;
  FCreationContext *local_140;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_138;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *local_130;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *local_128;
  FMassEntityManager *local_120;
  FAutomationTestBase *local_118;
  FAutomationTestBase *local_110;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_108;
  FString local_f8;
  FString local_e8;
  TNotNull<UScriptStruct_const_*> local_d8;
  TNotNull<UMassProcessor_*> local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_98;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_88;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_78;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> local_68;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_160 = FMassEntityManager::GetObserverManager(this_00);
  pTVar4 = TNotNull<UMassProcessor_*>::TNotNull<UMassProcessor_*><UMassTestProcessorBase_*_&>
                     (&local_d0,(UMassTestProcessorBase **)&this->field_0xa0);
  local_170.Val = pTVar4->Val;
  EVar1 = this->field_0xa8;
  local_180 = &local_d8;
  local_188 = FTestFragment_Float::StaticStruct();
  pTVar5 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                     (local_180,&local_188);
  local_178 = pTVar5->Val;
  local_168 = local_178;
  FMassObserverManager::AddObserverInstance
            (local_160,(TNotNull<UScriptStruct_const_*>)local_178,EVar1,local_170);
  local_158 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_158,&local_108,(FMassArchetypeHandle *)&this->field_0x50,6,
             (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xb0);
  local_120 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pTVar11 = &local_68;
  for (lVar9 = 0x20; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)pTVar11 = 0;
    pTVar11 = (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
              &pTVar11->field_0x1;
  }
  local_130 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
              TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                        (&local_68);
  pUVar6 = FTestTag_A::StaticStruct();
  local_128 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
              TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                        (&local_48,pUVar6);
  local_138 = &local_78;
  local_140 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::operator->(&local_108);
  local_150 = *(FMassEntityManager **)&this->field_0x28;
  local_148 = local_150;
  pTVar7 = ObserverManager::FCreationContext::GetEntityCollections(local_140,&local_88,local_150);
  pTVar8 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int><TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>,TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>_>
                     (local_138,pTVar7);
  puVar10 = local_c8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&pTVar8->DataPtr;
    pTVar8 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar8->DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_c8;
  puVar12 = local_b8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar10 = local_b8;
  puVar12 = local_a8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar10 = local_a8;
  pTVar8 = &local_98;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar8->DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pTVar8 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar8->DataPtr + 1);
  }
  FMassEntityManager::BatchChangeTagsForEntities(local_120,&local_98,local_128,local_130);
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_88);
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
  ~TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>(&local_48);
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
  ~TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>(&local_68);
  local_118 = FAITestBase::GetTestRunner((FAITestBase *)this);
  iVar2 = *(int *)&this->field_0x98;
  ::FString::FString(&local_f8,L"The fragment observer is not expected to run yet");
  bVar3 = FTestHelpers::TestEqual<int,int>(&local_f8,iVar2,0,local_118);
  ::FString::~FString(&local_f8);
  if (bVar3) {
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_108);
    local_110 = FAITestBase::GetTestRunner((FAITestBase *)this);
    iVar2 = *(int *)&this->field_0x98;
    ::FString::FString(&local_e8,
                       L"The fragment observer is expected to run just after FEntityCreationContext\'s destruction"
                      );
    bVar3 = FTestHelpers::TestEqual<int,int>(&local_e8,iVar2,6,local_110);
    ::FString::~FString(&local_e8);
    if (bVar3) {
      bVar3 = true;
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      bVar3 = false;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_108);
    bVar3 = false;
  }
  return bVar3;
}

