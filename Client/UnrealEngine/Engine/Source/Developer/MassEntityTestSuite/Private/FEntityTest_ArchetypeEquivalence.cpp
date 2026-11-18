// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14715b720

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FEntityTest_ArchetypeEquivalence::InstantTest
          (FEntityTest_ArchetypeEquivalence *this)

{
  bool bVar1;
  initializer_list<UScriptStruct_const_*> *piVar2;
  FMassEntityManager *pFVar3;
  FMassArchetypeCreationParams *pFVar4;
  TArrayView<UScriptStruct_const_*_const,int> *pTVar5;
  FAutomationTestBase *pFVar6;
  FMassArchetypeHandle *pFVar7;
  FMassArchetypeHandle *pFVar8;
  longlong lVar9;
  undefined1 *puVar10;
  initializer_list<UScriptStruct_const_*> *piVar11;
  undefined1 *puVar12;
  FMassArchetypeHandle local_198;
  FMassArchetypeHandle local_188;
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> local_178;
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> local_168;
  UScriptStruct *local_158;
  UScriptStruct *local_150;
  UScriptStruct *local_148;
  UScriptStruct *local_140;
  UScriptStruct *local_138;
  UScriptStruct *local_130;
  FString local_128;
  initializer_list<UScriptStruct_const_*> local_118;
  FMassArchetypeCreationParams local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  TArrayView<UScriptStruct_const_*_const,int> local_d8;
  FMassArchetypeCreationParams local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  TArrayView<UScriptStruct_const_*_const,int> local_98;
  initializer_list<UScriptStruct_const_*> local_88;
  initializer_list<UScriptStruct_const_*> local_78;
  initializer_list<UScriptStruct_const_*> local_68;
  TArrayView<UScriptStruct_const_*_const,int> local_58;
  TArrayView<UScriptStruct_const_*_const,int> local_48;
  FMassArchetypeHandle local_38;
  FMassArchetypeHandle local_28;
  
  local_140 = FTestFragment_Float::StaticStruct();
  local_138 = FTestFragment_Int::StaticStruct();
  piVar2 = std::initializer_list<UScriptStruct_const_*>::initializer_list<UScriptStruct_const_*>
                     (&local_78,&local_140,&local_130);
  piVar11 = &local_88;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&piVar11->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<UScriptStruct_const_*> *)((longlong)&piVar2->_First + 1);
    piVar11 = (initializer_list<UScriptStruct_const_*> *)((longlong)&piVar11->_First + 1);
  }
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>(&local_168,&local_88);
  local_158 = FTestFragment_Int::StaticStruct();
  local_150 = FTestFragment_Float::StaticStruct();
  piVar2 = std::initializer_list<UScriptStruct_const_*>::initializer_list<UScriptStruct_const_*>
                     (&local_68,&local_158,&local_148);
  piVar11 = &local_118;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&piVar11->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<UScriptStruct_const_*> *)((longlong)&piVar2->_First + 1);
    piVar11 = (initializer_list<UScriptStruct_const_*> *)((longlong)&piVar11->_First + 1);
  }
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>(&local_178,&local_118);
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar4 = &local_108;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pFVar4->ChunkMemorySize = 0;
    pFVar4 = (FMassArchetypeCreationParams *)((longlong)&pFVar4->ChunkMemorySize + 1);
  }
  pFVar4 = FMassArchetypeCreationParams::FMassArchetypeCreationParams(&local_108);
  pTVar5 = TArrayView<UScriptStruct_const_*_const,int>::
           TArrayView<UScriptStruct_const_*_const,int><TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>_&,TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>_>
                     (&local_58,&local_168);
  puVar10 = local_f8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_f8;
  puVar12 = local_e8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar10 = local_e8;
  pTVar5 = &local_d8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pTVar5 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  FMassEntityManager::CreateArchetype(pFVar3,&local_188,&local_d8,pFVar4);
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar4 = &local_c8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pFVar4->ChunkMemorySize = 0;
    pFVar4 = (FMassArchetypeCreationParams *)((longlong)&pFVar4->ChunkMemorySize + 1);
  }
  pFVar4 = FMassArchetypeCreationParams::FMassArchetypeCreationParams(&local_c8);
  pTVar5 = TArrayView<UScriptStruct_const_*_const,int>::
           TArrayView<UScriptStruct_const_*_const,int><TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>_&,TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>_>
                     (&local_48,&local_178);
  puVar10 = local_b8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_b8;
  puVar12 = local_a8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar10 = local_a8;
  pTVar5 = &local_98;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pTVar5 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  FMassEntityManager::CreateArchetype(pFVar3,&local_198,&local_98,pFVar4);
  pFVar6 = FAITestBase::GetTestRunner((FAITestBase *)this);
  pFVar7 = FMassArchetypeHandle::FMassArchetypeHandle(&local_38,&local_198);
  pFVar8 = FMassArchetypeHandle::FMassArchetypeHandle(&local_28,&local_188);
  ::FString::FString(&local_128,
                     "Archetype creation is expected to be independent of fragments ordering");
  bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                    (&local_128,pFVar8,pFVar7,pFVar6);
  ::FString::~FString(&local_128);
  if (bVar1) {
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_198);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_188);
    TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
    ~TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>(&local_178);
    TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
    ~TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>(&local_168);
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_198);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_188);
    TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
    ~TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>(&local_178);
    TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
    ~TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>(&local_168);
  }
  return bVar1;
}

