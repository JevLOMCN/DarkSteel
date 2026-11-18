// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147149b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FConstSharedFragment_RemoveFromEntity::InstantTest
          (FConstSharedFragment_RemoveFromEntity *this)

{
  bool bVar1;
  FSharedStruct *pFVar2;
  longlong lVar3;
  FMassArchetypeSharedFragmentValues *pFVar4;
  undefined1 auStack_2b8 [32];
  char local_298;
  undefined1 local_297;
  bool local_296;
  char local_295;
  undefined1 local_294;
  bool local_293;
  char local_292;
  undefined1 local_291;
  char local_290;
  undefined1 local_28f;
  char local_28e;
  undefined1 local_28d;
  bool local_28c;
  char local_28b;
  undefined1 local_28a;
  char local_289;
  undefined1 local_288;
  char local_287;
  undefined1 local_286;
  undefined1 local_285;
  FMassArchetypeHandle local_280;
  uint local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  FConstSharedStruct local_250;
  FTestConstSharedFragment_Int local_240;
  int local_23c;
  FMassEntityManager *local_238;
  FMassEntityHandle local_230;
  FMassEntityManager *local_228;
  FAutomationTestBase *local_220;
  FMassEntityHandle local_218;
  UScriptStruct *local_210;
  FMassEntityHandle local_208;
  FMassEntityManager *local_200;
  FAutomationTestBase *local_1f8;
  FMassEntityHandle local_1f0;
  FMassEntityManager *local_1e8;
  FAutomationTestBase *local_1e0;
  FMassEntityHandle local_1d8;
  FMassEntityManager *local_1d0;
  FAutomationTestBase *local_1c8;
  FAutomationTestBase *local_1c0;
  FMassEntityHandle local_1b8;
  UScriptStruct *local_1b0;
  FMassEntityHandle local_1a8;
  FMassEntityManager *local_1a0;
  FAutomationTestBase *local_198;
  FMassEntityHandle local_190;
  FMassEntityManager *local_188;
  FAutomationTestBase *local_180;
  FMassArchetypeHandle *local_178;
  FMassEntityHandle local_170;
  FMassArchetypeHandle *local_168;
  FMassEntityManager *local_160;
  FAutomationTestBase *local_158;
  FMassArchetypeHandle *local_150;
  FMassArchetypeHandle *local_148;
  undefined4 local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FSharedStruct local_b8;
  FMassArchetypeHandle local_a8;
  FMassArchetypeHandle local_98;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_140 = 0x3ff;
  FTestConstSharedFragment_Int::FTestConstSharedFragment_Int(&local_240,0x3ff);
  pFVar2 = FSharedStruct::Make<FTestConstSharedFragment_Int>(&local_b8,&local_240);
  FConstSharedStruct::FConstSharedStruct(&local_250,pFVar2);
  FSharedStruct::~FSharedStruct(&local_b8);
  local_238 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar4 = &local_88;
  for (lVar3 = 0x68; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&pFVar4->HashCache = 0;
    pFVar4 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar4->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  FMassEntityManager::CreateEntity
            (local_238,&local_280,(FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  local_228 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_230 = (FMassEntityHandle)local_280.DataPtr.Object;
  local_280.DataPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       FMassEntityManager::GetConstSharedFragmentDataPtr<FTestConstSharedFragment_Int>
                 (local_228,(FMassEntityHandle)local_280.DataPtr.Object);
  local_220 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_138,"Initially the entity is not expected to have the shared fragment");
  bVar1 = FAutomationTestBase::TestNull
                    (local_220,&local_138,local_280.DataPtr.SharedReferenceCount.ReferenceController
                    );
  local_298 = !bVar1;
  local_270 = (uint)(byte)local_298;
  ::FString::~FString(&local_138);
  if (local_298 == '\0') {
    local_1f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_200 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_210 = FTestConstSharedFragment_Int::StaticStruct();
    local_218 = (FMassEntityHandle)local_280.DataPtr.Object;
    local_208 = (FMassEntityHandle)local_280.DataPtr.Object;
    local_296 = FMassEntityManager::RemoveConstSharedFragmentFromEntity
                          (local_200,(FMassEntityHandle)local_280.DataPtr.Object,local_210);
    ::FString::FString(&local_128,
                       "Attempt to remove shared fragment from entity that doesn\'t have shared fragment should return false and do nothing"
                      );
    bVar1 = FAutomationTestBase::TestFalse(local_1f8,&local_128,local_296);
    local_295 = !bVar1;
    local_26c = (uint)(byte)local_295;
    ::FString::~FString(&local_128);
    if (local_295 == '\0') {
      local_1e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_1e8 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_1f0 = (FMassEntityHandle)local_280.DataPtr.Object;
      local_293 = FMassEntityManager::AddConstSharedFragmentToEntity
                            (local_1e8,(FMassEntityHandle)local_280.DataPtr.Object,&local_250);
      ::FString::FString(&local_118,"Adding shared fragment to entity should succeed");
      bVar1 = FAutomationTestBase::TestTrue(local_1e0,&local_118,local_293);
      local_292 = !bVar1;
      local_268 = (uint)(byte)local_292;
      ::FString::~FString(&local_118);
      if (local_292 == '\0') {
        local_1d0 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_1d8 = (FMassEntityHandle)local_280.DataPtr.Object;
        local_280.DataPtr.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)
             FMassEntityManager::GetConstSharedFragmentDataPtr<FTestConstSharedFragment_Int>
                       (local_1d0,(FMassEntityHandle)local_280.DataPtr.Object);
        local_1c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
        ::FString::FString(&local_108,
                           "The entity is expected to have the shared fragment after the operation")
        ;
        bVar1 = FAutomationTestBase::TestNotNull<FTestConstSharedFragment_Int>
                          (local_1c8,&local_108,
                           (FTestConstSharedFragment_Int *)
                           local_280.DataPtr.SharedReferenceCount.ReferenceController);
        local_290 = !bVar1;
        local_264 = (uint)(byte)local_290;
        ::FString::~FString(&local_108);
        if (local_290 == '\0') {
          local_1c0 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_23c = (int)(local_280.DataPtr.SharedReferenceCount.ReferenceController)->_padding_;
          ::FString::FString(&local_f8,
                             "The the shared fragment is expected to store the configured value");
          bVar1 = FTestHelpers::TestEqual<int,int>(&local_f8,local_23c,0x3ff,local_1c0);
          local_28e = !bVar1;
          local_260 = (uint)(byte)local_28e;
          ::FString::~FString(&local_f8);
          if (local_28e == '\0') {
            local_198 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_1a0 = TSharedPtr<FMassEntityManager,1>::operator->
                                  ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
            local_1b0 = FTestConstSharedFragment_Int::StaticStruct();
            local_1b8 = (FMassEntityHandle)local_280.DataPtr.Object;
            local_1a8 = (FMassEntityHandle)local_280.DataPtr.Object;
            local_28c = FMassEntityManager::RemoveConstSharedFragmentFromEntity
                                  (local_1a0,(FMassEntityHandle)local_280.DataPtr.Object,local_1b0);
            ::FString::FString(&local_e8,
                               "Removing shared fragment from entity that has the shared fragment should succeed"
                              );
            bVar1 = FAutomationTestBase::TestTrue(local_198,&local_e8,local_28c);
            local_28b = !bVar1;
            local_25c = (uint)(byte)local_28b;
            ::FString::~FString(&local_e8);
            if (local_28b == '\0') {
              local_188 = TSharedPtr<FMassEntityManager,1>::operator->
                                    ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
              local_190 = (FMassEntityHandle)local_280.DataPtr.Object;
              local_280.DataPtr.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)
                   FMassEntityManager::GetConstSharedFragmentDataPtr<FTestConstSharedFragment_Int>
                             (local_188,(FMassEntityHandle)local_280.DataPtr.Object);
              local_180 = FAITestBase::GetTestRunner((FAITestBase *)this);
              ::FString::FString(&local_d8,
                                 "The entity is not expected to have the shared fragment after the operation"
                                );
              bVar1 = FAutomationTestBase::TestNull
                                (local_180,&local_d8,
                                 local_280.DataPtr.SharedReferenceCount.ReferenceController);
              local_289 = !bVar1;
              local_258 = (uint)(byte)local_289;
              ::FString::~FString(&local_d8);
              if (local_289 == '\0') {
                local_158 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_178 = &local_a8;
                local_150 = FMassArchetypeHandle::FMassArchetypeHandle
                                      (local_178,(FMassArchetypeHandle *)&this->field_0x50);
                local_168 = &local_98;
                local_160 = TSharedPtr<FMassEntityManager,1>::operator->
                                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                local_170 = (FMassEntityHandle)local_280.DataPtr.Object;
                local_148 = FMassEntityManager::GetArchetypeForEntity
                                      (local_160,local_168,
                                       (FMassEntityHandle)local_280.DataPtr.Object);
                ::FString::FString(&local_c8,
                                   "The the entity\'s new archetype is the same as the initial one")
                ;
                bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                                  (&local_c8,local_148,local_150,local_158);
                local_287 = !bVar1;
                local_254 = (uint)(byte)local_287;
                ::FString::~FString(&local_c8);
                if (local_287 == '\0') {
                  local_285 = 1;
                  FConstSharedStruct::~FConstSharedStruct(&local_250);
                  local_297 = local_285;
                }
                else {
                  UE::AITestSuite::ConditionallyBreakOnTestFail();
                  local_286 = 0;
                  FConstSharedStruct::~FConstSharedStruct(&local_250);
                  local_297 = local_286;
                }
              }
              else {
                UE::AITestSuite::ConditionallyBreakOnTestFail();
                local_288 = 0;
                FConstSharedStruct::~FConstSharedStruct(&local_250);
                local_297 = local_288;
              }
            }
            else {
              UE::AITestSuite::ConditionallyBreakOnTestFail();
              local_28a = 0;
              FConstSharedStruct::~FConstSharedStruct(&local_250);
              local_297 = local_28a;
            }
          }
          else {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            local_28d = 0;
            FConstSharedStruct::~FConstSharedStruct(&local_250);
            local_297 = local_28d;
          }
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_28f = 0;
          FConstSharedStruct::~FConstSharedStruct(&local_250);
          local_297 = local_28f;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_291 = 0;
        FConstSharedStruct::~FConstSharedStruct(&local_250);
        local_297 = local_291;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_294 = 0;
      FConstSharedStruct::~FConstSharedStruct(&local_250);
      local_297 = local_294;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_297 = 0;
    FConstSharedStruct::~FConstSharedStruct(&local_250);
  }
  return (bool)local_297;
}

