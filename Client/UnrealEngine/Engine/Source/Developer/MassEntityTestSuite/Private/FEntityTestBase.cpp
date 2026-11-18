// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// FEntityTestBase @ 1470f3f60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityTestBase * __thiscall FEntityTestBase::FEntityTestBase(FEntityTestBase *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  this->_padding_ = (longlong)&___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_,(FNullTag *)0x0);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FEntityTestBase__6B_;
  FMassArchetypeHandle::FMassArchetypeHandle(&this->EmptyArchetype);
  FMassArchetypeHandle::FMassArchetypeHandle(&this->FloatsArchetype);
  FMassArchetypeHandle::FMassArchetypeHandle(&this->IntsArchetype);
  FMassArchetypeHandle::FMassArchetypeHandle(&this->FloatsIntsArchetype);
  FInstancedStruct::FInstancedStruct(&this->InstanceInt);
  return this;
}

// ~FEntityTestBase @ 1470f8130

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FEntityTestBase::~FEntityTestBase(FEntityTestBase *this)

{
  FInstancedStruct::~FInstancedStruct(&this->InstanceInt);
  FMassArchetypeHandle::~FMassArchetypeHandle(&this->FloatsIntsArchetype);
  FMassArchetypeHandle::~FMassArchetypeHandle(&this->IntsArchetype);
  FMassArchetypeHandle::~FMassArchetypeHandle(&this->FloatsArchetype);
  FMassArchetypeHandle::~FMassArchetypeHandle(&this->EmptyArchetype);
  TSharedPtr<FMassEntityManager,1>::~TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  FAITestBase::~FAITestBase((FAITestBase *)this);
  return;
}

// SetUp @ 1471a5ed0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FEntityTestBase::SetUp(FEntityTestBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<UScriptStruct_const_*,int> *pTVar4;
  TArrayView<UScriptStruct_const_*_const,int> *pTVar5;
  FMassArchetypeHandle *pFVar6;
  FInstancedStruct *pFVar7;
  longlong lVar8;
  undefined1 *puVar9;
  FMassArchetypeCreationParams *pFVar10;
  undefined1 *puVar11;
  FTestFragment_Int local_260 [2];
  UScriptStruct *local_258;
  UScriptStruct *local_250;
  TArrayView<UScriptStruct_const_*_const,int> *local_248;
  FMassArchetypeCreationParams *local_240;
  FMassEntityManager *local_238;
  TArrayView<UScriptStruct_const_*_const,int> *local_230;
  FMassArchetypeCreationParams *local_228;
  FMassEntityManager *local_220;
  TArrayView<UScriptStruct_const_*_const,int> *local_218;
  FMassArchetypeCreationParams *local_210;
  FMassEntityManager *local_208;
  TArrayView<UScriptStruct_const_*_const,int> *local_200;
  FMassArchetypeCreationParams *local_1f8;
  FMassEntityManager *local_1f0;
  FMassArchetypeCreationParams local_1e8;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  TArrayView<UScriptStruct_const_*_const,int> local_1b8;
  FMassArchetypeHandle local_1a8;
  FMassArchetypeCreationParams local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  TArrayView<UScriptStruct_const_*_const,int> local_168;
  FMassArchetypeHandle local_158;
  FMassArchetypeCreationParams local_148;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  TArrayView<UScriptStruct_const_*_const,int> local_118;
  FMassArchetypeHandle local_108;
  FMassArchetypeCreationParams local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  TArrayView<UScriptStruct_const_*_const,int> local_c8;
  FMassArchetypeHandle local_b8;
  FInstancedStruct local_a8;
  TArrayView<UScriptStruct_const_*_const,int> local_98;
  TArrayView<UScriptStruct_const_*,int> local_88;
  TArrayView<UScriptStruct_const_*_const,int> local_78;
  TArrayView<UScriptStruct_const_*,int> local_68;
  TArrayView<UScriptStruct_const_*_const,int> local_58;
  TArrayView<UScriptStruct_const_*,int> local_48;
  TArrayView<UScriptStruct_const_*_const,int> local_38;
  TArrayView<UScriptStruct_const_*,int> local_28;
  
  FExecutionTestBase::SetUp((FExecutionTestBase *)this);
  if ((this->_padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntityManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassTestTypes.cpp"
                         ,0x26,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_258 = FTestFragment_Float::StaticStruct();
  local_250 = FTestFragment_Int::StaticStruct();
  local_238 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  pFVar10 = &local_1e8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar10->ChunkMemorySize = 0;
    pFVar10 = (FMassArchetypeCreationParams *)((longlong)&pFVar10->ChunkMemorySize + 1);
  }
  local_240 = FMassArchetypeCreationParams::FMassArchetypeCreationParams(&local_1e8);
  local_248 = &local_98;
  pTVar4 = MakeArrayView<UScriptStruct_const_*>(&local_88,(UScriptStruct **)0x0,0);
  pTVar5 = TArrayView<UScriptStruct_const_*_const,int>::
           TArrayView<UScriptStruct_const_*_const,int><TArrayView<UScriptStruct_const_*,int>,TArrayView<UScriptStruct_const_*,int>_>
                     (local_248,pTVar4);
  puVar9 = local_1d8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_1d8;
  puVar11 = local_1c8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_1c8;
  pTVar5 = &local_1b8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar5 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  pFVar6 = FMassEntityManager::CreateArchetype(local_238,&local_1a8,&local_1b8,local_240);
  FMassArchetypeHandle::operator=(&this->EmptyArchetype,pFVar6);
  FMassArchetypeHandle::~FMassArchetypeHandle(&local_1a8);
  local_220 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  pFVar10 = &local_198;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar10->ChunkMemorySize = 0;
    pFVar10 = (FMassArchetypeCreationParams *)((longlong)&pFVar10->ChunkMemorySize + 1);
  }
  local_228 = FMassArchetypeCreationParams::FMassArchetypeCreationParams(&local_198);
  local_230 = &local_78;
  pTVar4 = MakeArrayView<UScriptStruct_const_*>(&local_68,&local_258,1);
  pTVar5 = TArrayView<UScriptStruct_const_*_const,int>::
           TArrayView<UScriptStruct_const_*_const,int><TArrayView<UScriptStruct_const_*,int>,TArrayView<UScriptStruct_const_*,int>_>
                     (local_230,pTVar4);
  puVar9 = local_188;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_188;
  puVar11 = local_178;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_178;
  pTVar5 = &local_168;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar5 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  pFVar6 = FMassEntityManager::CreateArchetype(local_220,&local_158,&local_168,local_228);
  FMassArchetypeHandle::operator=(&this->FloatsArchetype,pFVar6);
  FMassArchetypeHandle::~FMassArchetypeHandle(&local_158);
  local_208 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  pFVar10 = &local_148;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar10->ChunkMemorySize = 0;
    pFVar10 = (FMassArchetypeCreationParams *)((longlong)&pFVar10->ChunkMemorySize + 1);
  }
  local_210 = FMassArchetypeCreationParams::FMassArchetypeCreationParams(&local_148);
  local_218 = &local_58;
  pTVar4 = MakeArrayView<UScriptStruct_const_*>(&local_48,&local_250,1);
  pTVar5 = TArrayView<UScriptStruct_const_*_const,int>::
           TArrayView<UScriptStruct_const_*_const,int><TArrayView<UScriptStruct_const_*,int>,TArrayView<UScriptStruct_const_*,int>_>
                     (local_218,pTVar4);
  puVar9 = local_138;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_138;
  puVar11 = local_128;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_128;
  pTVar5 = &local_118;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar5 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  pFVar6 = FMassEntityManager::CreateArchetype(local_208,&local_108,&local_118,local_210);
  FMassArchetypeHandle::operator=(&this->IntsArchetype,pFVar6);
  FMassArchetypeHandle::~FMassArchetypeHandle(&local_108);
  local_1f0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  pFVar10 = &local_f8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar10->ChunkMemorySize = 0;
    pFVar10 = (FMassArchetypeCreationParams *)((longlong)&pFVar10->ChunkMemorySize + 1);
  }
  local_1f8 = FMassArchetypeCreationParams::FMassArchetypeCreationParams(&local_f8);
  local_200 = &local_38;
  pTVar4 = MakeArrayView<UScriptStruct_const_*>(&local_28,&local_258,2);
  pTVar5 = TArrayView<UScriptStruct_const_*_const,int>::
           TArrayView<UScriptStruct_const_*_const,int><TArrayView<UScriptStruct_const_*,int>,TArrayView<UScriptStruct_const_*,int>_>
                     (local_200,pTVar4);
  puVar9 = local_e8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_e8;
  puVar11 = local_d8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_d8;
  pTVar5 = &local_c8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar5 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  pFVar6 = FMassEntityManager::CreateArchetype(local_1f0,&local_b8,&local_c8,local_1f8);
  FMassArchetypeHandle::operator=(&this->FloatsIntsArchetype,pFVar6);
  FMassArchetypeHandle::~FMassArchetypeHandle(&local_b8);
  FTestFragment_Int::FTestFragment_Int(local_260,0);
  local_260[0].Value = 0x1e240;
  pFVar7 = FInstancedStruct::Make<FTestFragment_Int>(&local_a8,local_260);
  FInstancedStruct::operator=(&this->InstanceInt,pFVar7);
  FInstancedStruct::~FInstancedStruct(&local_a8);
  return true;
}

