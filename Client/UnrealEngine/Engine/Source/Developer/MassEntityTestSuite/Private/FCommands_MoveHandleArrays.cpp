// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147144cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassCommandsTest::FCommands_MoveHandleArrays::InstantTest(FCommands_MoveHandleArrays *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  UScriptStruct *pUVar5;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar6;
  FMassEntityManager *pFVar7;
  longlong lVar8;
  undefined1 *puVar9;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *pTVar10;
  undefined1 *puVar11;
  undefined1 auStackY_228 [32];
  bool local_1f8;
  bool local_1f7;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_1e0;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_1d0;
  int local_1c0;
  FMassEntityManager *local_1b8;
  TArrayView<FMassEntityHandle_const_,int> *local_1b0;
  FMassEntityManager *local_1a8;
  FMassEntityManager *local_1a0;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_198;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *local_190;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *local_188;
  FMassEntityManager *local_180;
  FMassEntityManager *local_178;
  FMassEntityManager *local_170;
  FAutomationTestBase *local_168;
  FMassCommandBuffer *local_160;
  FMassEntityManager *local_158;
  FMassEntityManager *local_150;
  FAutomationTestBase *local_148;
  FMassEntityManager *local_140;
  FMassEntityManager *local_138;
  FString local_130;
  FString local_120;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_110;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_100;
  undefined1 local_f0 [24];
  TArrayView<FMassEntityHandle_const_,int> local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_98;
  TArrayView<FMassEntityHandle_const_,int> local_88;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_78;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> local_68;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_140 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_1c0 = FMassEntityManager::DebugGetArchetypeEntitiesCountPerChunk
                        (local_140,(FMassArchetypeHandle *)&this->field_0x70);
  iVar2 = (int)((float)local_1c0 * __real_40200000);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_1e0.AllocatorInstance);
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_1e0.AllocatorInstance);
  local_138 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_138,&local_110,(FMassArchetypeHandle *)&this->field_0x60,iVar2,&local_1e0);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_110);
  local_1b8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_1b8,&local_100,(FMassArchetypeHandle *)&this->field_0x50,iVar2,&local_1e0);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_100);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_1d0.AllocatorInstance);
  local_1d0.ArrayNum = 0;
  local_1d0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_1d0.AllocatorInstance);
  local_1b0 = &local_88;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_1b0,&local_1e0);
  puVar9 = local_f0;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  local_1a8 = *(FMassEntityManager **)&this->field_0x28;
  puVar9 = local_f0;
  pTVar4 = &local_d8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar4->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
  }
  local_1a0 = local_1a8;
  UE::Mass::Utils::CreateEntityCollections(local_1a8,&local_d8,NoDuplicates,&local_1d0);
  local_180 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pTVar10 = &local_68;
  for (lVar8 = 0x20; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar10 = 0;
    pTVar10 = (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
              &pTVar10->field_0x1;
  }
  local_190 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
              TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                        (&local_68);
  pUVar5 = FTestTag_A::StaticStruct();
  local_188 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
              TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                        (&local_48,pUVar5);
  local_198 = &local_78;
  pTVar6 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int><TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>_&,TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>_>
                     (local_198,&local_1d0);
  puVar9 = local_c8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar6->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_c8;
  puVar11 = local_b8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_b8;
  puVar11 = local_a8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_a8;
  pTVar6 = &local_98;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar6->DataPtr + 1);
  }
  FMassEntityManager::BatchChangeTagsForEntities(local_180,&local_98,local_188,local_190);
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
  ~TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>(&local_48);
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
  ~TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>(&local_68);
  local_168 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_178 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  iVar3 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                    (local_178,(FMassArchetypeHandle *)&this->field_0x60);
  if (iVar3 == 0) {
    local_170 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    iVar3 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                      (local_170,(FMassArchetypeHandle *)&this->field_0x50);
    if (iVar3 != 0) goto LAB_147145086;
    local_1f8 = true;
  }
  else {
LAB_147145086:
    local_1f8 = false;
  }
  ::FString::FString(&local_130,"Original archetypes are empty after adding a tag to all entities");
  bVar1 = FAutomationTestBase::TestTrue(local_168,&local_130,local_1f8);
  ::FString::~FString(&local_130);
  if (!bVar1) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_1d0);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1e0);
    return false;
  }
  pFVar7 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_160 = FMassEntityManager::Defer(pFVar7);
  FMassCommandBuffer::
  PushCommand<FMassCommandRemoveTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
            (local_160,&local_1e0);
  pFVar7 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::FlushCommands(pFVar7);
  local_148 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_158 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  iVar3 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                    (local_158,(FMassArchetypeHandle *)&this->field_0x60);
  if (iVar3 == iVar2) {
    local_150 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    iVar3 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                      (local_150,(FMassArchetypeHandle *)&this->field_0x50);
    if (iVar3 == iVar2) {
      local_1f7 = true;
      goto LAB_14714520b;
    }
  }
  local_1f7 = false;
LAB_14714520b:
  ::FString::FString(&local_120,"All the entities moved back to the original archetypes");
  bVar1 = FAutomationTestBase::TestTrue(local_148,&local_120,local_1f7);
  ::FString::~FString(&local_120);
  if (bVar1) {
    TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_1d0);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1e0);
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_1d0);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1e0);
  }
  return bVar1;
}

