// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147189520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FSharedFragment_RemoveFromEntity::InstantTest
          (FSharedFragment_RemoveFromEntity *this)

{
  bool bVar1;
  longlong lVar2;
  FMassArchetypeSharedFragmentValues *pFVar3;
  undefined1 auStack_2a8 [32];
  char local_288;
  undefined1 local_287;
  bool local_286;
  char local_285;
  undefined1 local_284;
  bool local_283;
  char local_282;
  undefined1 local_281;
  char local_280;
  undefined1 local_27f;
  char local_27e;
  undefined1 local_27d;
  bool local_27c;
  char local_27b;
  undefined1 local_27a;
  char local_279;
  undefined1 local_278;
  char local_277;
  undefined1 local_276;
  undefined1 local_275;
  FMassArchetypeHandle local_270;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_244;
  FSharedStruct local_240;
  FTestSharedFragment_Int local_230;
  int local_22c;
  FMassEntityManager *local_228;
  FMassEntityHandle local_220;
  FMassEntityManager *local_218;
  FAutomationTestBase *local_210;
  FMassEntityHandle local_208;
  UScriptStruct *local_200;
  FMassEntityHandle local_1f8;
  FMassEntityManager *local_1f0;
  FAutomationTestBase *local_1e8;
  FMassEntityHandle local_1e0;
  FMassEntityManager *local_1d8;
  FAutomationTestBase *local_1d0;
  FMassEntityHandle local_1c8;
  FMassEntityManager *local_1c0;
  FAutomationTestBase *local_1b8;
  FAutomationTestBase *local_1b0;
  FMassEntityHandle local_1a8;
  UScriptStruct *local_1a0;
  FMassEntityHandle local_198;
  FMassEntityManager *local_190;
  FAutomationTestBase *local_188;
  FMassEntityHandle local_180;
  FMassEntityManager *local_178;
  FAutomationTestBase *local_170;
  FMassArchetypeHandle *local_168;
  FMassEntityHandle local_160;
  FMassArchetypeHandle *local_158;
  FMassEntityManager *local_150;
  FAutomationTestBase *local_148;
  FMassArchetypeHandle *local_140;
  FMassArchetypeHandle *local_138;
  undefined4 local_130;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FMassArchetypeHandle local_a8;
  FMassArchetypeHandle local_98;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_130 = 0x3ff;
  FTestSharedFragment_Int::FTestSharedFragment_Int(&local_230,0x3ff);
  FSharedStruct::Make<FTestSharedFragment_Int>(&local_240,&local_230);
  local_228 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar3 = &local_88;
  for (lVar2 = 0x68; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&pFVar3->HashCache = 0;
    pFVar3 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar3->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  FMassEntityManager::CreateEntity
            (local_228,&local_270,(FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  local_218 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_220 = (FMassEntityHandle)local_270.DataPtr.Object;
  local_270.DataPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       FMassEntityManager::GetSharedFragmentDataPtr<FTestSharedFragment_Int>
                 (local_218,(FMassEntityHandle)local_270.DataPtr.Object);
  local_210 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_128,"Initially the entity is not expected to have the shared fragment");
  bVar1 = FAutomationTestBase::TestNull
                    (local_210,&local_128,local_270.DataPtr.SharedReferenceCount.ReferenceController
                    );
  local_288 = !bVar1;
  local_260 = (uint)(byte)local_288;
  ::FString::~FString(&local_128);
  if (local_288 == '\0') {
    local_1e8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_1f0 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_200 = FTestSharedFragment_Int::StaticStruct();
    local_208 = (FMassEntityHandle)local_270.DataPtr.Object;
    local_1f8 = (FMassEntityHandle)local_270.DataPtr.Object;
    local_286 = FMassEntityManager::RemoveSharedFragmentFromEntity
                          (local_1f0,(FMassEntityHandle)local_270.DataPtr.Object,local_200);
    ::FString::FString(&local_118,
                       "Attempt to remove shared fragment from entity that doesn\'t have shared fragment should return false and do nothing"
                      );
    bVar1 = FAutomationTestBase::TestFalse(local_1e8,&local_118,local_286);
    local_285 = !bVar1;
    local_25c = (uint)(byte)local_285;
    ::FString::~FString(&local_118);
    if (local_285 == '\0') {
      local_1d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_1d8 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_1e0 = (FMassEntityHandle)local_270.DataPtr.Object;
      local_283 = FMassEntityManager::AddSharedFragmentToEntity
                            (local_1d8,(FMassEntityHandle)local_270.DataPtr.Object,&local_240);
      ::FString::FString(&local_108,"Adding shared fragment to entity should succeed");
      bVar1 = FAutomationTestBase::TestTrue(local_1d0,&local_108,local_283);
      local_282 = !bVar1;
      local_258 = (uint)(byte)local_282;
      ::FString::~FString(&local_108);
      if (local_282 == '\0') {
        local_1c0 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_1c8 = (FMassEntityHandle)local_270.DataPtr.Object;
        local_270.DataPtr.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)
             FMassEntityManager::GetSharedFragmentDataPtr<FTestSharedFragment_Int>
                       (local_1c0,(FMassEntityHandle)local_270.DataPtr.Object);
        local_1b8 = FAITestBase::GetTestRunner((FAITestBase *)this);
        ::FString::FString(&local_f8,
                           "The entity is expected to have the shared fragment after the operation")
        ;
        bVar1 = FAutomationTestBase::TestNotNull<FTestSharedFragment_Int>
                          (local_1b8,&local_f8,
                           (FTestSharedFragment_Int *)
                           local_270.DataPtr.SharedReferenceCount.ReferenceController);
        local_280 = !bVar1;
        local_254 = (uint)(byte)local_280;
        ::FString::~FString(&local_f8);
        if (local_280 == '\0') {
          local_1b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_22c = (int)(local_270.DataPtr.SharedReferenceCount.ReferenceController)->_padding_;
          ::FString::FString(&local_e8,
                             "The the shared fragment is expected to store the configured value");
          bVar1 = FTestHelpers::TestEqual<int,int>(&local_e8,local_22c,0x3ff,local_1b0);
          local_27e = !bVar1;
          local_250 = (uint)(byte)local_27e;
          ::FString::~FString(&local_e8);
          if (local_27e == '\0') {
            local_188 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_190 = TSharedPtr<FMassEntityManager,1>::operator->
                                  ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
            local_1a0 = FTestSharedFragment_Int::StaticStruct();
            local_1a8 = (FMassEntityHandle)local_270.DataPtr.Object;
            local_198 = (FMassEntityHandle)local_270.DataPtr.Object;
            local_27c = FMassEntityManager::RemoveSharedFragmentFromEntity
                                  (local_190,(FMassEntityHandle)local_270.DataPtr.Object,local_1a0);
            ::FString::FString(&local_d8,
                               "Removing shared fragment from entity that has the shared fragment should succeed"
                              );
            bVar1 = FAutomationTestBase::TestTrue(local_188,&local_d8,local_27c);
            local_27b = !bVar1;
            local_24c = (uint)(byte)local_27b;
            ::FString::~FString(&local_d8);
            if (local_27b == '\0') {
              local_178 = TSharedPtr<FMassEntityManager,1>::operator->
                                    ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
              local_180 = (FMassEntityHandle)local_270.DataPtr.Object;
              local_270.DataPtr.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)
                   FMassEntityManager::GetSharedFragmentDataPtr<FTestSharedFragment_Int>
                             (local_178,(FMassEntityHandle)local_270.DataPtr.Object);
              local_170 = FAITestBase::GetTestRunner((FAITestBase *)this);
              ::FString::FString(&local_c8,
                                 "The entity is not expected to have the shared fragment after the operation"
                                );
              bVar1 = FAutomationTestBase::TestNull
                                (local_170,&local_c8,
                                 local_270.DataPtr.SharedReferenceCount.ReferenceController);
              local_279 = !bVar1;
              local_248 = (uint)(byte)local_279;
              ::FString::~FString(&local_c8);
              if (local_279 == '\0') {
                local_148 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_168 = &local_a8;
                local_140 = FMassArchetypeHandle::FMassArchetypeHandle
                                      (local_168,(FMassArchetypeHandle *)&this->field_0x50);
                local_158 = &local_98;
                local_150 = TSharedPtr<FMassEntityManager,1>::operator->
                                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                local_160 = (FMassEntityHandle)local_270.DataPtr.Object;
                local_138 = FMassEntityManager::GetArchetypeForEntity
                                      (local_150,local_158,
                                       (FMassEntityHandle)local_270.DataPtr.Object);
                ::FString::FString(&local_b8,
                                   "The the entity\'s new archetype is the same as the initial one")
                ;
                bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                                  (&local_b8,local_138,local_140,local_148);
                local_277 = !bVar1;
                local_244 = (uint)(byte)local_277;
                ::FString::~FString(&local_b8);
                if (local_277 == '\0') {
                  local_275 = 1;
                  FSharedStruct::~FSharedStruct(&local_240);
                  local_287 = local_275;
                }
                else {
                  UE::AITestSuite::ConditionallyBreakOnTestFail();
                  local_276 = 0;
                  FSharedStruct::~FSharedStruct(&local_240);
                  local_287 = local_276;
                }
              }
              else {
                UE::AITestSuite::ConditionallyBreakOnTestFail();
                local_278 = 0;
                FSharedStruct::~FSharedStruct(&local_240);
                local_287 = local_278;
              }
            }
            else {
              UE::AITestSuite::ConditionallyBreakOnTestFail();
              local_27a = 0;
              FSharedStruct::~FSharedStruct(&local_240);
              local_287 = local_27a;
            }
          }
          else {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            local_27d = 0;
            FSharedStruct::~FSharedStruct(&local_240);
            local_287 = local_27d;
          }
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_27f = 0;
          FSharedStruct::~FSharedStruct(&local_240);
          local_287 = local_27f;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_281 = 0;
        FSharedStruct::~FSharedStruct(&local_240);
        local_287 = local_281;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_284 = 0;
      FSharedStruct::~FSharedStruct(&local_240);
      local_287 = local_284;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_287 = 0;
    FSharedStruct::~FSharedStruct(&local_240);
  }
  return (bool)local_287;
}

