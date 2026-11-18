// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 1471839c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FSharedFragmentValues_GetOrCreateArray::InstantTest
          (FSharedFragmentValues_GetOrCreateArray *this)

{
  bool bVar1;
  initializer_list<int> *piVar2;
  FSharedStruct *pFVar3;
  longlong lVar4;
  initializer_list<int> *piVar5;
  undefined1 auStack_228 [32];
  char local_208;
  undefined1 local_207;
  char local_206;
  undefined1 local_205;
  undefined1 local_204;
  uint local_200;
  uint local_1fc;
  FSharedStruct local_1f8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1e8;
  FSharedStruct local_1d8;
  FSharedStruct local_1c8;
  FMassEntityManager *local_1b8;
  FMassEntityManager *local_1b0;
  FSharedStruct *local_1a8;
  FSharedStruct *local_1a0;
  FAutomationTestBase *local_198;
  FSharedStruct *local_190;
  FSharedStruct *local_188;
  FSharedStruct *local_180;
  FAutomationTestBase *local_178;
  FSharedStruct *local_170;
  FSharedStruct *local_168;
  TArray<int,TSizedDefaultAllocator<32>_> *local_160;
  FSharedStruct *local_158;
  FMassEntityManager *local_150;
  TArray<int,TSizedDefaultAllocator<32>_> *local_148;
  FString local_140;
  FString local_130;
  initializer_list<int> local_118;
  TArray<int,TSizedDefaultAllocator<32>_> local_108;
  initializer_list<int> local_f8;
  TArray<int,TSizedDefaultAllocator<32>_> local_e8;
  initializer_list<int> local_d8;
  initializer_list<int> local_c8;
  initializer_list<int> local_b8;
  initializer_list<int> local_a8;
  FSharedStruct local_98;
  FSharedStruct local_88;
  FSharedStruct local_78;
  FSharedStruct local_68;
  int local_58 [4];
  int local_48 [4];
  int local_38 [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_150 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_38[0] = 1;
  local_38[1] = 2;
  local_38[2] = 3;
  piVar2 = std::initializer_list<int>::initializer_list<int>(&local_c8,local_38,local_38 + 3);
  piVar5 = &local_118;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&piVar5->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<int> *)((longlong)&piVar2->_First + 1);
    piVar5 = (initializer_list<int> *)((longlong)&piVar5->_First + 1);
  }
  local_160 = TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
                        (&local_108,&local_118);
  pFVar3 = FMassEntityManager::
           GetOrCreateSharedFragment<FTestSharedFragment_Array,TArray<int,TSizedDefaultAllocator<32>_>_>
                     (local_150,local_160);
  FSharedStruct::FSharedStruct(&local_1f8,pFVar3);
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_108);
  local_1b8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_58[0] = 1;
  local_58[1] = 2;
  local_58[2] = 3;
  piVar2 = std::initializer_list<int>::initializer_list<int>(&local_b8,local_58,local_58 + 3);
  piVar5 = &local_f8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&piVar5->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<int> *)((longlong)&piVar2->_First + 1);
    piVar5 = (initializer_list<int> *)((longlong)&piVar5->_First + 1);
  }
  local_148 = TArray<int,TSizedDefaultAllocator<32>_>::TArray<int,TSizedDefaultAllocator<32>_>
                        (&local_e8,&local_f8);
  pFVar3 = FMassEntityManager::
           GetOrCreateSharedFragment<FTestSharedFragment_Array,TArray<int,TSizedDefaultAllocator<32>_>_>
                     (local_1b8,local_148);
  FSharedStruct::FSharedStruct(&local_1c8,pFVar3);
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_e8);
  FTestSharedFragment_Array::FTestSharedFragment_Array((FTestSharedFragment_Array *)&local_1e8);
  local_48[0] = 1;
  local_48[1] = 2;
  local_48[2] = 3;
  piVar2 = std::initializer_list<int>::initializer_list<int>(&local_a8,local_48,local_48 + 3);
  piVar5 = &local_d8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&piVar5->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<int> *)((longlong)&piVar2->_First + 1);
    piVar5 = (initializer_list<int> *)((longlong)&piVar5->_First + 1);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_1e8,&local_d8);
  local_1b0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar3 = FMassEntityManager::GetOrCreateSharedFragment<FTestSharedFragment_Array>
                     (local_1b0,(FTestSharedFragment_Array *)&local_1e8);
  FSharedStruct::FSharedStruct(&local_1d8,pFVar3);
  local_198 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_1a8 = &local_98;
  local_190 = FSharedStruct::FSharedStruct(local_1a8,&local_1c8);
  local_1a0 = &local_88;
  local_168 = FSharedStruct::FSharedStruct(local_1a0,&local_1f8);
  ::FString::FString(&local_140,
                     "Shared fragments created for same struct type using same TArray contents should share memory"
                    );
  bVar1 = FTestHelpers::TestEqual<FSharedStruct,FSharedStruct>
                    (&local_140,local_168,local_190,local_198);
  local_208 = !bVar1;
  local_200 = (uint)(byte)local_208;
  ::FString::~FString(&local_140);
  if (local_208 == '\0') {
    local_178 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_188 = &local_78;
    local_170 = FSharedStruct::FSharedStruct(local_188,&local_1d8);
    local_180 = &local_68;
    local_158 = FSharedStruct::FSharedStruct(local_180,&local_1f8);
    ::FString::FString(&local_130,
                       "Shared fragments created for same struct type using same TArray contents should share memory"
                      );
    bVar1 = FTestHelpers::TestEqual<FSharedStruct,FSharedStruct>
                      (&local_130,local_158,local_170,local_178);
    local_206 = !bVar1;
    local_1fc = (uint)(byte)local_206;
    ::FString::~FString(&local_130);
    if (local_206 == '\0') {
      local_204 = 1;
      FSharedStruct::~FSharedStruct(&local_1d8);
      TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_1e8);
      FSharedStruct::~FSharedStruct(&local_1c8);
      FSharedStruct::~FSharedStruct(&local_1f8);
      local_207 = local_204;
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_205 = 0;
      FSharedStruct::~FSharedStruct(&local_1d8);
      TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_1e8);
      FSharedStruct::~FSharedStruct(&local_1c8);
      FSharedStruct::~FSharedStruct(&local_1f8);
      local_207 = local_205;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_207 = 0;
    FSharedStruct::~FSharedStruct(&local_1d8);
    TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_1e8);
    FSharedStruct::~FSharedStruct(&local_1c8);
    FSharedStruct::~FSharedStruct(&local_1f8);
  }
  return (bool)local_207;
}

