// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 8

// FChildOfBase @ 1470f2e00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FChildOfBase * __thiscall
UE::Mass::Test::ChildOfRelation::FChildOfBase::FChildOfBase(FChildOfBase *this)

{
  int iVar1;
  
  FEntityTestBase::FEntityTestBase((FEntityTestBase *)this);
  this->_padding_ = (longlong)&___7FChildOfBase_ChildOfRelation_Test_Mass_UE__6B_;
  this->StructureType = MAX;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->CreatedEntities).AllocatorInstance);
  (this->CreatedEntities).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->CreatedEntities).AllocatorInstance);
  (this->CreatedEntities).ArrayMax = iVar1;
  this->NumEntities = -1;
  this->Processor = (UMassTestProcessorBase *)0x0;
  this->bAPISupportsReparenting = true;
  FObjectKey::FObjectKey((FObjectKey *)&this->RelationTypeHandle);
  this->RelationManager = (FRelationManager *)0x0;
  return this;
}

// operator() @ 1470fb600

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::ChildOfRelation::FChildOfBase::ExecuteTestProcessor'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FMassEntityHandle *pFVar6;
  FMassEntityHandle FVar7;
  int local_10c;
  FMassEntityHandle local_d0;
  TArrayView<FMassEntityHandle,int> *local_c8;
  TArrayView<FMassEntityHandle,int> *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  longlong local_a8;
  int *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_90;
  longlong local_88;
  int *local_80;
  TArrayView<FMassEntityHandle,int> *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  longlong local_60;
  int *local_58;
  TArrayView<FMassChildOfFragment_const_,int> local_50;
  FEntityIterator local_40;
  undefined1 local_20 [8];
  undefined1 local_18 [24];
  
  FMassExecutionContext::GetFragmentView<FMassChildOfFragment>(param_1,&local_50);
  if (local_50.ArrayNum == 0) {
    for (local_10c = 0; iVar4 = FMassExecutionContext::GetNumEntities(param_1), local_10c < iVar4;
        local_10c = local_10c + 1) {
      local_78 = (TArrayView<FMassEntityHandle,int> *)((longlong)this + 8);
      FVar7 = FMassExecutionContext::GetEntity(param_1,(int)local_18);
      iVar4 = TArrayView<FMassEntityHandle,int>::Find(local_78,(FMassEntityHandle *)FVar7);
      if ((iVar4 == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("EntityGlobalIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassChildOfRelationTest.cpp"
                             ,0x80,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((longlong)this + 0x18);
      if (iVar4 < 0 || (int)plVar1[1] <= iVar4) {
        local_70 = 0;
        local_6c = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_68 = *plVar1;
      local_58 = (int *)(local_68 + (longlong)iVar4 * 4);
      *local_58 = iVar4;
      local_60 = local_68;
    }
  }
  else {
    FMassExecutionContext::CreateEntityIterator(param_1,&local_40);
    while (bVar3 = FMassExecutionContext::FEntityIterator::operator_bool(&local_40), bVar3) {
      iVar4 = FMassExecutionContext::FEntityIterator::operator_int(&local_40);
      pFVar6 = &TArrayView<FMassChildOfFragment_const_,int>::operator[](&local_50,iVar4)->Parent;
      local_d0 = *pFVar6;
      bVar3 = FMassEntityHandle::IsValid(&local_d0);
      if (bVar3) {
        local_c8 = (TArrayView<FMassEntityHandle,int> *)((longlong)this + 8);
        FMassExecutionContext::FEntityIterator::operator_int(&local_40);
        FVar7 = FMassExecutionContext::GetEntity(param_1,(int)local_20);
        iVar4 = TArrayView<FMassEntityHandle,int>::Find(local_c8,(FMassEntityHandle *)FVar7);
        local_c0 = (TArrayView<FMassEntityHandle,int> *)((longlong)this + 8);
        iVar5 = TArrayView<FMassEntityHandle,int>::Find(local_c0,&local_d0);
        if (((iVar4 == -1) || (iVar5 == -1)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("EntityGlobalIndex != INDEX_NONE && ParentGlobalIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassChildOfRelationTest.cpp"
                               ,0x75,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((longlong)this + 0x18);
        if (iVar5 < 0 || (int)plVar1[1] <= iVar5) {
          local_b8 = 0;
          local_b4 = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        local_b0 = *plVar1;
        local_a0 = (int *)(local_b0 + (longlong)iVar5 * 4);
        iVar5 = *local_a0;
        plVar1 = *(longlong **)((longlong)this + 0x18);
        local_a8 = local_b0;
        if (iVar4 < 0 || (int)plVar1[1] <= iVar4) {
          local_98 = 0;
          local_94 = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        local_90 = *plVar1;
        local_80 = (int *)(local_90 + (longlong)iVar4 * 4);
        *local_80 = iVar5 * 10 + iVar4;
        local_88 = local_90;
      }
      FMassExecutionContext::FEntityIterator::operator++(&local_40);
    }
  }
  return;
}

// DeleteEntity @ 14711bfd0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::ChildOfRelation::FChildOfBase::DeleteEntity(FChildOfBase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMassEntityManager *this_00;
  
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  if (param_1 < 0 || (this->CreatedEntities).ArrayNum <= param_1) {
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
  FMassEntityManager::DestroyEntity
            (this_00,*(FMassEntityHandle *)
                      ((this->CreatedEntities).AllocatorInstance.Data + (longlong)param_1 * 8));
  return true;
}

// ExecuteTestProcessor @ 14711e480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Test::ChildOfRelation::FChildOfBase::ExecuteTestProcessor
          (FChildOfBase *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FRelationManager *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMassEntityManager *this_00;
  TArrayView<FMassEntityHandle,int> *pTVar4;
  longlong lVar5;
  TArrayView<FMassEntityHandle,int> *pTVar6;
  undefined1 auStackY_118 [32];
  int local_e8;
  TArrayView<FMassEntityHandle,int> local_90;
  <lambda_1> local_80;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  TArray<int,TSizedDefaultAllocator<32>_>::Reset(param_1,0);
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,(this->CreatedEntities).ArrayNum,&param_1->AllocatorInstance,&param_1->ArrayNum,
             &param_1->ArrayMax);
  local_e8 = 0;
  do {
    if ((this->CreatedEntities).ArrayNum <= local_e8) {
      this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
      FMassEntityManager::FlushCommands(this_00);
      pFVar1 = this->RelationManager;
      TArrayView<FMassEntityHandle,int>::
      TArrayView<FMassEntityHandle,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                (&local_90,&this->CreatedEntities);
      local_80.RelationManager = pFVar1;
      pTVar4 = <move><TArrayView<FMassEntityHandle,int>_&>(&local_90);
      pTVar6 = &local_80.CreatedEntitiesView;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *(undefined1 *)&pTVar6->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
        pTVar4 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar4->DataPtr + 1);
        pTVar6 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar6->DataPtr + 1);
      }
      local_80.Scratchpad = param_1;
      TFunction<void___cdecl(FMassExecutionContext_&)>::
      TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::ChildOfRelation::FChildOfBase::ExecuteTestProcessor_::__l2::<lambda_1>_>
                (&local_58,&local_80);
      TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
                (&this->Processor->ForEachEntityChunkExecutionFunction,&local_58);
      TFunction<void___cdecl(FMassExecutionContext_&)>::
      ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_58);
      UMassTestProcessorBase::TestExecute
                (this->Processor,(TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
      return;
    }
    if (local_e8 < 0 || param_1->ArrayNum <= local_e8) {
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)local_e8 * 4) = 0xffffffff;
    local_e8 = local_e8 + 1;
  } while( true );
}

// InstantTest @ 14713eea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::ChildOfRelation::FChildOfBase::InstantTest(FChildOfBase *this)

{
  bool bVar1;
  initializer_list<int> *piVar2;
  longlong lVar3;
  initializer_list<int> *piVar4;
  undefined1 auStack_548 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_528;
  char local_518;
  undefined1 local_517;
  undefined1 local_516;
  bool local_515;
  char local_514;
  undefined1 local_513;
  bool local_512;
  char local_511;
  undefined1 local_510;
  bool local_50f;
  char local_50e;
  undefined1 local_50d;
  bool local_50c;
  char local_50b;
  undefined1 local_50a;
  bool local_509;
  char local_508;
  bool local_507;
  bool local_506;
  char local_505;
  undefined1 local_504;
  bool local_503;
  char local_502;
  undefined1 local_501;
  bool local_500;
  char local_4ff;
  undefined1 local_4fe;
  bool local_4fd;
  char local_4fc;
  undefined1 local_4fb;
  bool local_4fa;
  char local_4f9;
  undefined1 local_4f8;
  undefined1 local_4f7;
  undefined1 local_4f6;
  TArray<int,TSizedDefaultAllocator<32>_> local_4f0;
  EStructure local_4e0;
  uint local_4dc;
  uint local_4d8;
  EStructure local_4d4;
  uint local_4d0;
  uint local_4cc;
  EStructure local_4c8;
  uint local_4c4;
  uint local_4c0;
  EStructure local_4bc;
  uint local_4b8;
  uint local_4b4;
  uint local_4b0;
  uint local_4ac;
  EStructure local_4a8;
  uint local_4a4;
  EStructure local_4a0;
  int local_49c;
  int local_498;
  code *local_490;
  FAutomationTestBase *local_488;
  code *local_480;
  FAutomationTestBase *local_478;
  code *local_470;
  FAutomationTestBase *local_468;
  code *local_460;
  FAutomationTestBase *local_458;
  code *local_450;
  FAutomationTestBase *local_448;
  code *local_440;
  FAutomationTestBase *local_438;
  code *local_430;
  FAutomationTestBase *local_428;
  code *local_420;
  FAutomationTestBase *local_418;
  code *local_410;
  FAutomationTestBase *local_408;
  code *local_400;
  FAutomationTestBase *local_3f8;
  FAutomationTestBase *local_3f0;
  code *local_3e8;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  initializer_list<int> local_328;
  initializer_list<int> local_318;
  initializer_list<int> local_308;
  initializer_list<int> local_2f8;
  initializer_list<int> local_2e8;
  initializer_list<int> local_2d8;
  initializer_list<int> local_2c8;
  initializer_list<int> local_2b8;
  initializer_list<int> local_2a8;
  initializer_list<int> local_298;
  initializer_list<int> local_288;
  initializer_list<int> local_278;
  initializer_list<int> local_268;
  initializer_list<int> local_258;
  initializer_list<int> local_248;
  initializer_list<int> local_238;
  initializer_list<int> local_228;
  initializer_list<int> local_218;
  initializer_list<int> local_208;
  initializer_list<int> local_1f8;
  initializer_list<int> local_1e8;
  initializer_list<int> local_1d8;
  initializer_list<int> local_1c8;
  initializer_list<int> local_1b8;
  int local_1a8 [6];
  int local_190 [6];
  int local_178 [6];
  int local_160 [6];
  int local_148 [6];
  int local_130 [6];
  int local_118 [10];
  int local_f0 [10];
  int local_c8 [10];
  int local_a0 [10];
  int local_78 [10];
  int local_50 [10];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_548;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_4f0.AllocatorInstance);
  local_4f0.ArrayNum = 0;
  local_4f0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_4f0.AllocatorInstance);
  local_490 = *(code **)(this->_padding_ + 0x60);
  (*local_490)(this,&local_4f0);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_528.AllocatorInstance);
  local_528.ArrayNum = 0;
  local_528.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_528.AllocatorInstance);
  local_4e0 = this->StructureType;
  if (local_4e0 == String) {
    local_1a8[0] = 0;
    local_1a8[1] = 1;
    local_1a8[2] = 0xc;
    local_1a8[3] = 0x7b;
    local_1a8[4] = 0x4d2;
    piVar2 = std::initializer_list<int>::initializer_list<int>(&local_268,local_1a8,local_1a8 + 5);
    piVar4 = &local_328;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar2->_First;
      piVar2 = (initializer_list<int> *)((longlong)&piVar2->_First + 1);
      piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
    }
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_528,&local_328);
  }
  else if (local_4e0 == Tree) {
    local_118[0] = 0;
    local_118[1] = 1;
    local_118[2] = 2;
    local_118[3] = 0xd;
    local_118[4] = 0xe;
    local_118[5] = 0xf;
    local_118[6] = 0x1a;
    local_118[7] = 0x1b;
    piVar2 = std::initializer_list<int>::initializer_list<int>(&local_258,local_118,local_118 + 8);
    piVar4 = &local_318;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar2->_First;
      piVar2 = (initializer_list<int> *)((longlong)&piVar2->_First + 1);
      piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
    }
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_528,&local_318);
  }
  local_488 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_507 = Algo::
              Compare<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                        (&local_4f0,&local_528);
  ::FString::FString(&local_3e0,"Processing hierarchy produces expected results");
  bVar1 = FAutomationTestBase::TestTrue(local_488,&local_3e0,local_507);
  local_518 = !bVar1;
  local_4dc = (uint)(byte)local_518;
  ::FString::~FString(&local_3e0);
  if (local_518 == '\0') {
    if (this->bAPISupportsReparenting == false) {
      local_516 = 1;
      TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_528);
      TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_4f0);
      local_517 = local_516;
    }
    else {
      local_478 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_480 = *(code **)(this->_padding_ + 0x48);
      local_49c = (this->CreatedEntities).ArrayNum;
      local_498 = local_49c + -1;
      local_515 = (bool)(*local_480)(this,local_498,0);
      ::FString::FString(&local_3d0,"Reparenting leaf node.");
      bVar1 = FAutomationTestBase::TestTrue(local_478,&local_3d0,local_515);
      local_514 = !bVar1;
      local_4d8 = (uint)(byte)local_514;
      ::FString::~FString(&local_3d0);
      if (local_514 == '\0') {
        local_4d4 = this->StructureType;
        if (local_4d4 == String) {
          local_190[0] = 0;
          local_190[1] = 1;
          local_190[2] = 0xc;
          local_190[3] = 0x7b;
          local_190[4] = 4;
          piVar2 = std::initializer_list<int>::initializer_list<int>
                             (&local_248,local_190,local_190 + 5);
          piVar4 = &local_308;
          for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
            *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar2->_First;
            piVar2 = (initializer_list<int> *)((longlong)&piVar2->_First + 1);
            piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
          }
          TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_528,&local_308);
        }
        else if (local_4d4 == Tree) {
          local_f0[0] = 0;
          local_f0[1] = 1;
          local_f0[2] = 2;
          local_f0[3] = 0xd;
          local_f0[4] = 0xe;
          local_f0[5] = 0xf;
          local_f0[6] = 0x1a;
          local_f0[7] = 7;
          piVar2 = std::initializer_list<int>::initializer_list<int>
                             (&local_238,local_f0,local_f0 + 8);
          piVar4 = &local_2f8;
          for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
            *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar2->_First;
            piVar2 = (initializer_list<int> *)((longlong)&piVar2->_First + 1);
            piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
          }
          TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_528,&local_2f8);
        }
        local_470 = *(code **)(this->_padding_ + 0x60);
        (*local_470)(this,&local_4f0);
        local_468 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_512 = Algo::
                    Compare<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                              (&local_4f0,&local_528);
        ::FString::FString(&local_3c0,"Reparenting a leaf produces expected results");
        bVar1 = FAutomationTestBase::TestTrue(local_468,&local_3c0,local_512);
        local_511 = !bVar1;
        local_4d0 = (uint)(byte)local_511;
        ::FString::~FString(&local_3c0);
        if (local_511 == '\0') {
          local_3f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_460 = *(code **)(this->_padding_ + 0x48);
          local_50f = (bool)(*local_460)(this,2,4);
          ::FString::FString(&local_3b0,"Reparenting a mid-node to a leaf node.");
          bVar1 = FAutomationTestBase::TestTrue(local_3f0,&local_3b0,local_50f);
          local_50e = !bVar1;
          local_4cc = (uint)(byte)local_50e;
          ::FString::~FString(&local_3b0);
          if (local_50e == '\0') {
            local_4c8 = this->StructureType;
            if (local_4c8 == String) {
              local_178[0] = 0;
              local_178[1] = 1;
              local_178[2] = 0x2a;
              local_178[3] = 0x1a7;
              local_178[4] = 4;
              piVar2 = std::initializer_list<int>::initializer_list<int>
                                 (&local_228,local_178,local_178 + 5);
              piVar4 = &local_2e8;
              for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
                *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar2->_First;
                piVar2 = (initializer_list<int> *)((longlong)&piVar2->_First + 1);
                piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
              }
              TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_528,&local_2e8);
            }
            else if (local_4c8 == Tree) {
              local_c8[0] = 0;
              local_c8[1] = 1;
              local_c8[2] = 0x8e;
              local_c8[3] = 0xd;
              local_c8[4] = 0xe;
              local_c8[5] = 0xf;
              local_c8[6] = 0x592;
              local_c8[7] = 7;
              piVar2 = std::initializer_list<int>::initializer_list<int>
                                 (&local_218,local_c8,local_c8 + 8);
              piVar4 = &local_2d8;
              for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
                *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar2->_First;
                piVar2 = (initializer_list<int> *)((longlong)&piVar2->_First + 1);
                piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
              }
              TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_528,&local_2d8);
            }
            local_3e8 = *(code **)(this->_padding_ + 0x60);
            (*local_3e8)(this,&local_4f0);
            local_458 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_50c = Algo::
                        Compare<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                                  (&local_4f0,&local_528);
            ::FString::FString(&local_3a0,
                               "Reparenting a subtree to a leaf produces expected results");
            bVar1 = FAutomationTestBase::TestTrue(local_458,&local_3a0,local_50c);
            local_50b = !bVar1;
            local_4c4 = (uint)(byte)local_50b;
            ::FString::~FString(&local_3a0);
            if (local_50b == '\0') {
              local_448 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_450 = *(code **)(this->_padding_ + 0x50);
              local_509 = (bool)(*local_450)(this,3);
              ::FString::FString(&local_390,"Deleting a leaf node");
              bVar1 = FAutomationTestBase::TestTrue(local_448,&local_390,local_509);
              local_508 = !bVar1;
              local_4c0 = (uint)(byte)local_508;
              ::FString::~FString(&local_390);
              if (local_508 == '\0') {
                local_4bc = this->StructureType;
                if (local_4bc == String) {
                  local_160[0] = 0;
                  local_160[1] = 1;
                  local_160[2] = 0x2a;
                  local_160[3] = 0xffffffff;
                  local_160[4] = 4;
                  piVar2 = std::initializer_list<int>::initializer_list<int>
                                     (&local_208,local_160,local_160 + 5);
                  piVar4 = &local_2c8;
                  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
                    *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar2->_First;
                    piVar2 = (initializer_list<int> *)((longlong)&piVar2->_First + 1);
                    piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
                  }
                  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_528,&local_2c8);
                }
                else if (local_4bc == Tree) {
                  local_a0[0] = 0;
                  local_a0[1] = 1;
                  local_a0[2] = 0x8e;
                  local_a0[3] = 0xffffffff;
                  local_a0[4] = 0xe;
                  local_a0[5] = 0xf;
                  local_a0[6] = 0x592;
                  local_a0[7] = 7;
                  piVar2 = std::initializer_list<int>::initializer_list<int>
                                     (&local_1f8,local_a0,local_a0 + 8);
                  piVar4 = &local_2b8;
                  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
                    *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar2->_First;
                    piVar2 = (initializer_list<int> *)((longlong)&piVar2->_First + 1);
                    piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
                  }
                  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_528,&local_2b8);
                }
                local_440 = *(code **)(this->_padding_ + 0x60);
                (*local_440)(this,&local_4f0);
                local_438 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_506 = Algo::
                            Compare<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                                      (&local_4f0,&local_528);
                ::FString::FString(&local_380,"Delete a leaf node produces expected results");
                bVar1 = FAutomationTestBase::TestTrue(local_438,&local_380,local_506);
                local_505 = !bVar1;
                local_4b8 = (uint)(byte)local_505;
                ::FString::~FString(&local_380);
                if (local_505 == '\0') {
                  local_428 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  local_430 = *(code **)(this->_padding_ + 0x50);
                  local_503 = (bool)(*local_430)(this,4);
                  ::FString::FString(&local_370,"Deleting mid-level node");
                  bVar1 = FAutomationTestBase::TestTrue(local_428,&local_370,local_503);
                  local_502 = !bVar1;
                  local_4b4 = (uint)(byte)local_502;
                  ::FString::~FString(&local_370);
                  if (local_502 == '\0') {
                    local_4a0 = this->StructureType;
                    if (local_4a0 == String) {
                      local_148[0] = 0;
                      local_148[1] = 1;
                      local_148[2] = 0xffffffff;
                      local_148[3] = 0xffffffff;
                      local_148[4] = 0xffffffff;
                      piVar2 = std::initializer_list<int>::initializer_list<int>
                                         (&local_1e8,local_148,local_148 + 5);
                      piVar4 = &local_2a8;
                      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
                        *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar2->_First;
                        piVar2 = (initializer_list<int> *)((longlong)&piVar2->_First + 1);
                        piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
                      }
                      TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_528,&local_2a8);
                    }
                    else if (local_4a0 == Tree) {
                      local_78[0] = 0;
                      local_78[1] = 1;
                      local_78[2] = 0xffffffff;
                      local_78[3] = 0xffffffff;
                      local_78[4] = 0xffffffff;
                      local_78[5] = 0xf;
                      local_78[6] = 0xffffffff;
                      local_78[7] = 7;
                      piVar2 = std::initializer_list<int>::initializer_list<int>
                                         (&local_1d8,local_78,local_78 + 8);
                      piVar4 = &local_298;
                      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
                        *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar2->_First;
                        piVar2 = (initializer_list<int> *)((longlong)&piVar2->_First + 1);
                        piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
                      }
                      TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_528,&local_298);
                    }
                    local_420 = *(code **)(this->_padding_ + 0x60);
                    (*local_420)(this,&local_4f0);
                    local_418 = FAITestBase::GetTestRunner((FAITestBase *)this);
                    local_500 = Algo::
                                Compare<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                                          (&local_4f0,&local_528);
                    ::FString::FString(&local_360,
                                       "Delete a mid-level node produces expected results");
                    bVar1 = FAutomationTestBase::TestTrue(local_418,&local_360,local_500);
                    local_4ff = !bVar1;
                    local_4b0 = (uint)(byte)local_4ff;
                    ::FString::~FString(&local_360);
                    if (local_4ff == '\0') {
                      local_408 = FAITestBase::GetTestRunner((FAITestBase *)this);
                      local_410 = *(code **)(this->_padding_ + 0x50);
                      local_4fd = (bool)(*local_410)(this,0);
                      ::FString::FString(&local_350,"Deleting mid-level node");
                      bVar1 = FAutomationTestBase::TestTrue(local_408,&local_350,local_4fd);
                      local_4fc = !bVar1;
                      local_4ac = (uint)(byte)local_4fc;
                      ::FString::~FString(&local_350);
                      if (local_4fc == '\0') {
                        local_4a8 = this->StructureType;
                        if (local_4a8 == String) {
                          local_130[0] = -1;
                          local_130[1] = 0xffffffff;
                          local_130[2] = 0xffffffff;
                          local_130[3] = 0xffffffff;
                          local_130[4] = 0xffffffff;
                          piVar2 = std::initializer_list<int>::initializer_list<int>
                                             (&local_1c8,local_130,local_130 + 5);
                          piVar4 = &local_288;
                          for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
                            *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar2->_First;
                            piVar2 = (initializer_list<int> *)((longlong)&piVar2->_First + 1);
                            piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
                          }
                          TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_528,&local_288);
                        }
                        else if (local_4a8 == Tree) {
                          local_50[0] = -1;
                          local_50[1] = 0xffffffff;
                          local_50[2] = 0xffffffff;
                          local_50[3] = 0xffffffff;
                          local_50[4] = 0xffffffff;
                          local_50[5] = 0xffffffff;
                          local_50[6] = 0xffffffff;
                          local_50[7] = 0xffffffff;
                          piVar2 = std::initializer_list<int>::initializer_list<int>
                                             (&local_1b8,local_50,local_50 + 8);
                          piVar4 = &local_278;
                          for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
                            *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar2->_First;
                            piVar2 = (initializer_list<int> *)((longlong)&piVar2->_First + 1);
                            piVar4 = (initializer_list<int> *)((longlong)&piVar4->_First + 1);
                          }
                          TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_528,&local_278);
                        }
                        local_400 = *(code **)(this->_padding_ + 0x60);
                        (*local_400)(this,&local_4f0);
                        local_3f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
                        local_4fa = Algo::
                                    Compare<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                                              (&local_4f0,&local_528);
                        ::FString::FString(&local_340,
                                           "Delete a top-level node produces expected results");
                        bVar1 = FAutomationTestBase::TestTrue(local_3f8,&local_340,local_4fa);
                        local_4f9 = !bVar1;
                        local_4a4 = (uint)(byte)local_4f9;
                        ::FString::~FString(&local_340);
                        if (local_4f9 == '\0') {
                          local_4f7 = 1;
                          TArray<int,TSizedDefaultAllocator<32>_>::
                          ~TArray<int,TSizedDefaultAllocator<32>_>(&local_528);
                          TArray<int,TSizedDefaultAllocator<32>_>::
                          ~TArray<int,TSizedDefaultAllocator<32>_>(&local_4f0);
                          local_517 = local_4f7;
                        }
                        else {
                          AITestSuite::ConditionallyBreakOnTestFail();
                          local_4f8 = 0;
                          TArray<int,TSizedDefaultAllocator<32>_>::
                          ~TArray<int,TSizedDefaultAllocator<32>_>(&local_528);
                          TArray<int,TSizedDefaultAllocator<32>_>::
                          ~TArray<int,TSizedDefaultAllocator<32>_>(&local_4f0);
                          local_517 = local_4f8;
                        }
                      }
                      else {
                        AITestSuite::ConditionallyBreakOnTestFail();
                        local_4fb = 0;
                        TArray<int,TSizedDefaultAllocator<32>_>::
                        ~TArray<int,TSizedDefaultAllocator<32>_>(&local_528);
                        TArray<int,TSizedDefaultAllocator<32>_>::
                        ~TArray<int,TSizedDefaultAllocator<32>_>(&local_4f0);
                        local_517 = local_4fb;
                      }
                    }
                    else {
                      AITestSuite::ConditionallyBreakOnTestFail();
                      local_4fe = 0;
                      TArray<int,TSizedDefaultAllocator<32>_>::
                      ~TArray<int,TSizedDefaultAllocator<32>_>(&local_528);
                      TArray<int,TSizedDefaultAllocator<32>_>::
                      ~TArray<int,TSizedDefaultAllocator<32>_>(&local_4f0);
                      local_517 = local_4fe;
                    }
                  }
                  else {
                    AITestSuite::ConditionallyBreakOnTestFail();
                    local_501 = 0;
                    TArray<int,TSizedDefaultAllocator<32>_>::
                    ~TArray<int,TSizedDefaultAllocator<32>_>(&local_528);
                    TArray<int,TSizedDefaultAllocator<32>_>::
                    ~TArray<int,TSizedDefaultAllocator<32>_>(&local_4f0);
                    local_517 = local_501;
                  }
                }
                else {
                  AITestSuite::ConditionallyBreakOnTestFail();
                  local_504 = 0;
                  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                            (&local_528);
                  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                            (&local_4f0);
                  local_517 = local_504;
                }
              }
              else {
                AITestSuite::ConditionallyBreakOnTestFail();
                local_4f6 = 0;
                TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                          (&local_528);
                TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                          (&local_4f0);
                local_517 = local_4f6;
              }
            }
            else {
              AITestSuite::ConditionallyBreakOnTestFail();
              local_50a = 0;
              TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                        (&local_528);
              TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                        (&local_4f0);
              local_517 = local_50a;
            }
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            local_50d = 0;
            TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                      (&local_528);
            TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                      (&local_4f0);
            local_517 = local_50d;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_510 = 0;
          TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                    (&local_528);
          TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                    (&local_4f0);
          local_517 = local_510;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_513 = 0;
        TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                  (&local_528);
        TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                  (&local_4f0);
        local_517 = local_513;
      }
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_517 = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_528);
    TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_4f0);
  }
  return (bool)local_517;
}

// ReparentEntity @ 14719a7f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::ChildOfRelation::FChildOfBase::ReparentEntity
          (FChildOfBase *this,int param_1,int param_2)

{
  return false;
}

// SetUp @ 1471a01a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

bool __thiscall UE::Mass::Test::ChildOfRelation::FChildOfBase::SetUp(FChildOfBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMassEntityManager *pFVar4;
  FRelationManager *pFVar5;
  TSharedPtr<FMassEntityManager,1> *pTVar6;
  UMassTestProcessorBase *pUVar7;
  FTypeManager *this_00;
  FRelationTypeTraits *pFVar8;
  TSharedPtr<FMassEntityManager,1> local_20 [2];
  
  if ((this->StructureType == MAX) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructureType != EStructure::MAX",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassChildOfRelationTest.cpp"
                         ,0x40,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (this->StructureType == String) {
    this->NumEntities = 5;
  }
  else if (this->StructureType == Tree) {
    this->NumEntities = 8;
  }
  bVar2 = FEntityTestBase::SetUp((FEntityTestBase *)this);
  if (bVar2) {
    (**(code **)(this->_padding_ + 0x58))(this);
    pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    pFVar5 = FMassEntityManager::GetRelationManager(pFVar4);
    this->RelationManager = pFVar5;
    pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                       (local_20,(TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    pUVar7 = NewTestProcessor<UMassTestProcessorBase>(pTVar6);
    this->Processor = pUVar7;
    FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
              ((FMassFragmentRequirements *)&this->Processor->EntityQuery,ReadOnly,All);
    FMassFragmentRequirements::AddRequirement<FMassChildOfFragment>
              ((FMassFragmentRequirements *)&this->Processor->EntityQuery,ReadOnly,Optional);
    pUVar7 = this->Processor;
    pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    this_00 = FMassEntityManager::GetTypeManager(pFVar4);
    pFVar8 = FTypeManager::GetRelationTypeChecked
                       (this_00,(FTypeHandle)(this->RelationTypeHandle).TypeKey.ObjectKey);
    FMassEntityQuery::GroupBy
              (&pUVar7->EntityQuery,(FArchetypeGroupType)(pFVar8->RegisteredGroupType).Identifier);
    (**(code **)(this->_padding_ + 0x40))(this);
  }
  return bVar2;
}

// SetUpRelationHandle @ 1471ab4d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Test::ChildOfRelation::FChildOfBase::SetUpRelationHandle(FChildOfBase *this)

{
  code *pcVar1;
  bool bVar2;
  FMassEntityManager *this_00;
  TNotNull<UScriptStruct_const_*> *pTVar3;
  FTypeHandle FVar4;
  UScriptStruct *local_48;
  TNotNull<UScriptStruct_const_*> *local_40;
  UScriptStruct *local_38;
  FTypeManager *local_30;
  FTypeHandle *local_28;
  TNotNull<UScriptStruct_const_*> local_20;
  undefined1 local_18 [24];
  
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  local_30 = FMassEntityManager::GetTypeManager(this_00);
  local_40 = &local_20;
  local_48 = FMassChildOfRelation::StaticStruct();
  pTVar3 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                     (local_40,&local_48);
  local_38 = pTVar3->Val;
  FVar4 = FTypeManager::GetRelationTypeHandle(local_30,(UScriptStruct *)local_18);
  (this->RelationTypeHandle).TypeKey.ObjectKey = *(FObjectKey *)FVar4.TypeKey.ObjectKey;
  local_28 = &this->RelationTypeHandle;
  bVar2 = FTypeHandle::operator==(local_28,&Mass::Relations::ChildOfHandle);
  if (!bVar2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7882275632619454523>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassChildOfRelationTest.cpp"
                       ,0x3b,"RelationTypeHandle == UE::Mass::Relations::ChildOfHandle");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

