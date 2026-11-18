// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// FSingleRelationCreation @ 1470f5480

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSingleRelationCreation * __thiscall
UE::Mass::Test::Relations::FSingleRelationCreation::FSingleRelationCreation
          (FSingleRelationCreation *this)

{
  int iVar1;
  
  FRelationTestBase::FRelationTestBase((FRelationTestBase *)this);
  this->_padding_ = (longlong)&___7FSingleRelationCreation_Relations_Test_Mass_UE__6B_;
  FMassArchetypeHandle::FMassArchetypeHandle(&this->OriginalArchetype);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->CreatedEntities).AllocatorInstance);
  (this->CreatedEntities).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->CreatedEntities).AllocatorInstance);
  (this->CreatedEntities).ArrayMax = iVar1;
  return this;
}

// InstantTest @ 14718afd0

/* WARNING: Removing unreachable block (ram,0x00014718b005) */
/* WARNING: Removing unreachable block (ram,0x00014718b122) */
/* WARNING: Removing unreachable block (ram,0x00014718b64a) */
/* WARNING: Removing unreachable block (ram,0x00014718b928) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Relations::FSingleRelationCreation::InstantTest(FSingleRelationCreation *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMassEntityManager *pFVar4;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_360;
  char local_350;
  undefined1 local_34f;
  bool local_34e;
  char local_34d;
  undefined1 local_34c;
  char local_34b;
  undefined1 local_34a;
  char local_349;
  undefined1 local_348;
  bool local_347;
  char local_346;
  undefined1 local_345;
  char local_344;
  undefined1 local_343;
  bool local_342;
  char local_341;
  undefined1 local_340;
  undefined1 local_33f;
  bool local_33e;
  char local_33d;
  undefined1 local_33c;
  undefined1 local_33b;
  bool local_33a;
  char local_339;
  undefined1 local_338;
  undefined1 local_337;
  bool local_336;
  char local_335;
  undefined1 local_334;
  undefined1 local_333;
  bool local_332;
  char local_331;
  undefined1 local_330;
  undefined1 local_32f;
  bool local_32e;
  char local_32d;
  undefined1 local_32c;
  undefined1 local_32b;
  bool local_32a;
  FMassEntityHandle local_328;
  FMassEntityHandle local_320;
  undefined4 local_318;
  uint local_314;
  undefined4 local_310;
  uint local_30c;
  uint local_308;
  uint local_304;
  uint local_300;
  uint local_2fc;
  uint local_2f8;
  undefined4 local_2f4;
  uint local_2f0;
  uint local_2ec;
  uint local_2e8;
  undefined4 local_2e4;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  uint local_2d4;
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  uint local_2b4;
  int local_2b0;
  int local_2ac;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_2a8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_2a0;
  int local_298;
  FMassEntityHandle *local_290;
  FMassEntityHandle *local_288;
  FMassEntityHandle *local_280;
  undefined4 local_278;
  undefined4 local_274;
  FScriptContainerElement *local_270;
  FScriptContainerElement *local_268;
  FMassEntityHandle *local_260;
  FRelationManager *local_258;
  FMassEntityHandle local_250;
  FAutomationTestBase *local_248;
  FRelationManager *local_240;
  FAutomationTestBase *local_238;
  FRelationManager *local_230;
  FAutomationTestBase *local_228;
  FAutomationTestBase *local_220;
  undefined4 local_218;
  undefined4 local_214;
  FMassEntityHandle *local_210;
  FMassEntityHandle *local_208;
  FMassEntityHandle *local_200;
  FMassEntityHandle local_1f8;
  FMassEntityHandle *local_1f0;
  FAutomationTestBase *local_1e8;
  FRelationManager *local_1e0;
  FAutomationTestBase *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  FMassEntityHandle *local_1c8;
  FMassEntityHandle *local_1c0;
  FMassEntityHandle *local_1b8;
  FMassEntityHandle local_1b0;
  FMassEntityHandle *local_1a8;
  FAutomationTestBase *local_1a0;
  FRelationManager *local_198;
  FAutomationTestBase *local_190;
  FRelationManager *local_188;
  FRelationManager *local_180;
  FAutomationTestBase *local_178;
  FRelationManager *local_170;
  FAutomationTestBase *local_168;
  FRelationManager *local_160;
  FAutomationTestBase *local_158;
  FRelationManager *local_150;
  FAutomationTestBase *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_78;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_68;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_58;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_48;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_38;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_28;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_18;
  
  local_2a8 = &this->CreatedEntities;
  local_318 = 1;
  local_2ec = (uint)(0 < (this->CreatedEntities).ArrayNum);
  if (local_2ec == 0) {
    local_140 = 0;
    local_13c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_290 = (FMassEntityHandle *)(local_2a8->AllocatorInstance).Data;
  local_328 = *local_290;
  local_2a0 = &this->CreatedEntities;
  local_310 = 1;
  local_314 = (uint)(1 < (this->CreatedEntities).ArrayNum);
  local_288 = local_290;
  local_280 = local_290;
  if (local_314 == 0) {
    local_278 = 0;
    local_274 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_270 = (local_2a0->AllocatorInstance).Data;
  local_260 = (FMassEntityHandle *)(local_270 + 8);
  local_320 = *local_260;
  local_258 = (FRelationManager *)this->_padding_;
  local_268 = local_270;
  FRelationManager::CreateRelationInstance
            (local_258,(FTypeHandle)&local_250,(FMassEntityHandle)this->_padding_,local_328);
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  FMassEntityManager::FlushCommands(pFVar4);
  local_248 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_32a = FMassEntityHandle::IsValid(&local_250);
  ::FString::FString(&local_138,"Valid relation entity has been created");
  bVar2 = FAutomationTestBase::TestTrue(local_248,&local_138,local_32a);
  local_350 = !bVar2;
  local_30c = (uint)(byte)local_350;
  ::FString::~FString(&local_138);
  if (local_350 == '\0') {
    local_240 = (FRelationManager *)this->_padding_;
    FRelationManager::GetRelationSubjects
              (local_240,&local_360,(FTypeHandle)this->_padding_,local_328);
    local_238 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_34f = local_360.ArrayNum == 0;
    local_308 = (uint)(byte)local_34f;
    local_34e = (bool)local_34f;
    ::FString::FString(&local_128,"No subjects point to the ChildEntity as the relation\'s object");
    bVar2 = FAutomationTestBase::TestTrue(local_238,&local_128,local_34e);
    local_34d = !bVar2;
    local_304 = (uint)(byte)local_34d;
    ::FString::~FString(&local_128);
    if (local_34d == '\0') {
      local_230 = (FRelationManager *)this->_padding_;
      pTVar5 = FRelationManager::GetRelationSubjects
                         (local_230,&local_78,(FTypeHandle)this->_padding_,local_320);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=(&local_360,pTVar5);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_78);
      local_228 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_2b0 = local_360.ArrayNum;
      bVar2 = 0 < local_360.ArrayNum;
      ::FString::FString(&local_118,"ParentEntity is an object of a relation of the given type");
      bVar2 = FAutomationTestBase::TestTrue(local_228,&local_118,bVar2);
      local_34b = !bVar2;
      local_300 = (uint)(byte)local_34b;
      ::FString::~FString(&local_118);
      if (local_34b == '\0') {
        local_220 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_2ac = local_360.ArrayNum;
        bVar2 = local_360.ArrayNum == 1;
        ::FString::FString(&local_108,
                           "ParentEntity is an object of exactly one relation of the given type");
        bVar2 = FAutomationTestBase::TestTrue(local_220,&local_108,bVar2);
        local_349 = !bVar2;
        local_2fc = (uint)(byte)local_349;
        ::FString::~FString(&local_108);
        if (local_349 == '\0') {
          local_1e8 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_2f4 = 1;
          local_2f8 = (uint)(0 < local_360.ArrayNum);
          if (local_2f8 == 0) {
            local_218 = 0;
            local_214 = 0;
            Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          local_210 = (FMassEntityHandle *)local_360.AllocatorInstance.Data;
          local_208 = (FMassEntityHandle *)local_360.AllocatorInstance.Data;
          local_200 = (FMassEntityHandle *)local_360.AllocatorInstance.Data;
          local_1f0 = (FMassEntityHandle *)local_360.AllocatorInstance.Data;
          local_1f8 = local_328;
          local_347 = FMassEntityHandle::operator==
                                ((FMassEntityHandle *)local_360.AllocatorInstance.Data,local_328);
          ::FString::FString(&local_f8,
                             "The ChildEntity is the subject of the give relation, where ParentEntity is the object"
                            );
          bVar2 = FAutomationTestBase::TestTrue(local_1e8,&local_f8,local_347);
          local_346 = !bVar2;
          local_2f0 = (uint)(byte)local_346;
          ::FString::~FString(&local_f8);
          if (local_346 == '\0') {
            local_1e0 = (FRelationManager *)this->_padding_;
            pTVar5 = FRelationManager::GetRelationObjects
                               (local_1e0,&local_68,(FTypeHandle)this->_padding_,local_328);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=(&local_360,pTVar5);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_68);
            local_1d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_298 = local_360.ArrayNum;
            bVar2 = local_360.ArrayNum == 1;
            ::FString::FString(&local_e8,
                               "The ChildEntity is has exactly one object for the given relation type"
                              );
            bVar2 = FAutomationTestBase::TestTrue(local_1d8,&local_e8,bVar2);
            local_344 = !bVar2;
            local_2cc = (uint)(byte)local_344;
            ::FString::~FString(&local_e8);
            if (local_344 == '\0') {
              local_1a0 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_2e4 = 1;
              local_2e8 = (uint)(0 < local_360.ArrayNum);
              if (local_2e8 == 0) {
                local_1d0 = 0;
                local_1cc = 0;
                Core::Private::FormatStringSan::
                AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar2) {
                  pcVar1 = (code *)swi(3);
                  uVar3 = (*pcVar1)();
                  return (bool)uVar3;
                }
              }
              local_1c8 = (FMassEntityHandle *)local_360.AllocatorInstance.Data;
              local_1c0 = (FMassEntityHandle *)local_360.AllocatorInstance.Data;
              local_1b8 = (FMassEntityHandle *)local_360.AllocatorInstance.Data;
              local_1a8 = (FMassEntityHandle *)local_360.AllocatorInstance.Data;
              local_1b0 = local_320;
              local_342 = FMassEntityHandle::operator==
                                    ((FMassEntityHandle *)local_360.AllocatorInstance.Data,local_320
                                    );
              ::FString::FString(&local_d8,
                                 "The object for the given relation for the ChildEntity is the ParentEntity"
                                );
              bVar2 = FAutomationTestBase::TestTrue(local_1a0,&local_d8,local_342);
              local_341 = !bVar2;
              local_2e0 = (uint)(byte)local_341;
              ::FString::~FString(&local_d8);
              if (local_341 == '\0') {
                local_198 = (FRelationManager *)this->_padding_;
                pTVar5 = FRelationManager::GetRelationObjects
                                   (local_198,&local_58,(FTypeHandle)this->_padding_,local_320);
                TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=(&local_360,pTVar5);
                TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_58);
                local_190 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_33f = local_360.ArrayNum == 0;
                local_2dc = (uint)(byte)local_33f;
                local_33e = (bool)local_33f;
                ::FString::FString(&local_c8,
                                   "The ParentEntity has no objects for the given relation type");
                bVar2 = FAutomationTestBase::TestTrue(local_190,&local_c8,local_33e);
                local_33d = !bVar2;
                local_2d8 = (uint)(byte)local_33d;
                ::FString::~FString(&local_c8);
                if (local_33d == '\0') {
                  local_188 = (FRelationManager *)this->_padding_;
                  FRelationManager::DestroyRelationInstance
                            (local_188,(FTypeHandle)this->_padding_,local_328,local_320);
                  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                                     ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
                  FMassEntityManager::FlushCommands(pFVar4);
                  local_180 = (FRelationManager *)this->_padding_;
                  pTVar5 = FRelationManager::GetRelationSubjects
                                     (local_180,&local_48,(FTypeHandle)this->_padding_,local_328);
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=
                            (&local_360,pTVar5);
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_48);
                  local_178 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  local_33b = local_360.ArrayNum == 0;
                  local_2d4 = (uint)(byte)local_33b;
                  local_33a = (bool)local_33b;
                  ::FString::FString(&local_b8,"No relation subjects for ChildEntity still");
                  bVar2 = FAutomationTestBase::TestTrue(local_178,&local_b8,local_33a);
                  local_339 = !bVar2;
                  local_2d0 = (uint)(byte)local_339;
                  ::FString::~FString(&local_b8);
                  if (local_339 == '\0') {
                    local_170 = (FRelationManager *)this->_padding_;
                    pTVar5 = FRelationManager::GetRelationSubjects
                                       (local_170,&local_38,(FTypeHandle)this->_padding_,local_320);
                    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=
                              (&local_360,pTVar5);
                    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_38);
                    local_168 = FAITestBase::GetTestRunner((FAITestBase *)this);
                    local_337 = local_360.ArrayNum == 0;
                    local_2b4 = (uint)(byte)local_337;
                    local_336 = (bool)local_337;
                    ::FString::FString(&local_a8,"No relation subjects for ParentEntity anymore");
                    bVar2 = FAutomationTestBase::TestTrue(local_168,&local_a8,local_336);
                    local_335 = !bVar2;
                    local_2c8 = (uint)(byte)local_335;
                    ::FString::~FString(&local_a8);
                    if (local_335 == '\0') {
                      local_160 = (FRelationManager *)this->_padding_;
                      pTVar5 = FRelationManager::GetRelationObjects
                                         (local_160,&local_28,(FTypeHandle)this->_padding_,local_328
                                         );
                      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=
                                (&local_360,pTVar5);
                      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_28);
                      local_158 = FAITestBase::GetTestRunner((FAITestBase *)this);
                      local_333 = local_360.ArrayNum == 0;
                      local_2c4 = (uint)(byte)local_333;
                      local_332 = (bool)local_333;
                      ::FString::FString(&local_98,"No relation objects for ChildEntity anymore");
                      bVar2 = FAutomationTestBase::TestTrue(local_158,&local_98,local_332);
                      local_331 = !bVar2;
                      local_2c0 = (uint)(byte)local_331;
                      ::FString::~FString(&local_98);
                      if (local_331 == '\0') {
                        local_150 = (FRelationManager *)this->_padding_;
                        pTVar5 = FRelationManager::GetRelationObjects
                                           (local_150,&local_18,(FTypeHandle)this->_padding_,
                                            local_320);
                        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=
                                  (&local_360,pTVar5);
                        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_18);
                        local_148 = FAITestBase::GetTestRunner((FAITestBase *)this);
                        local_32f = local_360.ArrayNum == 0;
                        local_2bc = (uint)(byte)local_32f;
                        local_32e = (bool)local_32f;
                        ::FString::FString(&local_88,"No relation objects for ParentEntity still");
                        bVar2 = FAutomationTestBase::TestTrue(local_148,&local_88,local_32e);
                        local_32d = !bVar2;
                        local_2b8 = (uint)(byte)local_32d;
                        ::FString::~FString(&local_88);
                        if (local_32d == '\0') {
                          local_32b = 1;
                          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_360);
                          local_34c = local_32b;
                        }
                        else {
                          AITestSuite::ConditionallyBreakOnTestFail();
                          local_32c = 0;
                          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_360);
                          local_34c = local_32c;
                        }
                      }
                      else {
                        AITestSuite::ConditionallyBreakOnTestFail();
                        local_330 = 0;
                        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_360);
                        local_34c = local_330;
                      }
                    }
                    else {
                      AITestSuite::ConditionallyBreakOnTestFail();
                      local_334 = 0;
                      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_360);
                      local_34c = local_334;
                    }
                  }
                  else {
                    AITestSuite::ConditionallyBreakOnTestFail();
                    local_338 = 0;
                    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_360);
                    local_34c = local_338;
                  }
                }
                else {
                  AITestSuite::ConditionallyBreakOnTestFail();
                  local_33c = 0;
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_360);
                  local_34c = local_33c;
                }
              }
              else {
                AITestSuite::ConditionallyBreakOnTestFail();
                local_340 = 0;
                TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_360);
                local_34c = local_340;
              }
            }
            else {
              AITestSuite::ConditionallyBreakOnTestFail();
              local_343 = 0;
              TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_360);
              local_34c = local_343;
            }
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            local_345 = 0;
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_360);
            local_34c = local_345;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_348 = 0;
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_360);
          local_34c = local_348;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_34a = 0;
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_360);
        local_34c = local_34a;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_34c = 0;
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_360);
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_34c = 0;
  }
  return (bool)local_34c;
}

// SetUp @ 1471aa0e0

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Relations::FSingleRelationCreation::SetUp(FSingleRelationCreation *this)

{
  FMassEntityManager *this_00;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_18;
  
  FRelationTestBase::SetUp((FRelationTestBase *)this);
  TSharedPtr<FMassArchetypeData,1>::operator=
            (&(this->OriginalArchetype).DataPtr,(TSharedPtr<FMassArchetypeData,1> *)&this->_padding_
            );
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  FMassEntityManager::BatchCreateEntities
            (this_00,&local_18,&this->OriginalArchetype,2,&this->CreatedEntities);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_18);
  return true;
}

