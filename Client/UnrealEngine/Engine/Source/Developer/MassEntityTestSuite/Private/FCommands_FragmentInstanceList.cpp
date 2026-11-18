// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470fc780

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
`FMassCommandsTest::FCommands_FragmentInstanceList::InstantTest'::__l2::<lambda_1>::operator()
          (void *this,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FAutomationTestBase *pFVar6;
  FMassArchetypeHandle *pFVar7;
  FMassEntityManager *this_00;
  FMassArchetypeHandle *pFVar8;
  FTestFragment_Int *pFVar9;
  FTestFragment_Float *pFVar10;
  int local_158;
  FString local_80;
  FString local_70;
  FString local_60;
  FMassEntityView local_50;
  FMassArchetypeHandle local_28;
  FMassArchetypeHandle local_18;
  
  local_158 = 0;
  while( true ) {
    if (param_1->ArrayNum <= local_158) {
      return true;
    }
    pFVar6 = FAITestBase::GetTestRunner(*(FAITestBase **)this);
    pFVar7 = FMassArchetypeHandle::FMassArchetypeHandle
                       (&local_28,(FMassArchetypeHandle *)(*(longlong *)this + 0x70));
    this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)(*(longlong *)this + 0x28));
    if (local_158 < 0 || param_1->ArrayNum <= local_158) {
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar8 = FMassEntityManager::GetArchetypeForEntity
                       (this_00,&local_18,
                        *(FMassEntityHandle *)
                         ((param_1->AllocatorInstance).Data + (longlong)local_158 * 8));
    ::FString::FString(&local_80,L"All entities should have ended up in the same archetype");
    bVar4 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                      (&local_80,pFVar8,pFVar7,pFVar6);
    ::FString::~FString(&local_80);
    if (!bVar4) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      return false;
    }
    if (local_158 < 0 || param_1->ArrayNum <= local_158) {
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    FMassEntityView::FMassEntityView
              (&local_50,(FMassArchetypeHandle *)(*(longlong *)this + 0x70),
               *(FMassEntityHandle *)((param_1->AllocatorInstance).Data + (longlong)local_158 * 8));
    pFVar6 = FAITestBase::GetTestRunner(*(FAITestBase **)this);
    pFVar9 = FMassEntityView::GetFragmentData<FTestFragment_Int>(&local_50);
    iVar2 = pFVar9->Value;
    ::FString::FString(&local_70,L"Should have predicted values");
    bVar4 = FTestHelpers::TestEqual<int,int>(&local_70,iVar2,local_158,pFVar6);
    ::FString::~FString(&local_70);
    if (!bVar4) break;
    pFVar6 = FAITestBase::GetTestRunner(*(FAITestBase **)this);
    pFVar10 = FMassEntityView::GetFragmentData<FTestFragment_Float>(&local_50);
    fVar1 = pFVar10->Value;
    ::FString::FString(&local_60,L"Should have predicted values");
    bVar4 = FTestHelpers::TestEqual<float,float>(&local_60,fVar1,(float)local_158,pFVar6);
    ::FString::~FString(&local_60);
    if (!bVar4) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      return false;
    }
    local_158 = local_158 + 1;
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  return false;
}

// InstantTest @ 147142ef0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassCommandsTest::FCommands_FragmentInstanceList::InstantTest(FCommands_FragmentInstanceList *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMassEntityManager *pFVar4;
  int local_138;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_120;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_110;
  FCommands_FragmentInstanceList *local_100;
  FTestFragment_Int local_f8;
  FTestFragment_Float local_f4;
  FTestFragment_Int local_f0 [2];
  FMassEntityManager *local_e8;
  FMassEntityManager *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  FMassEntityHandle *local_c0;
  FMassEntityHandle local_b8;
  FMassEntityHandle local_b0;
  FTestFragment_Float *local_a8;
  FTestFragment_Int *local_a0;
  FMassEntityHandle local_98;
  FMassCommandBuffer *local_90;
  undefined4 local_88;
  undefined4 local_84;
  FScriptContainerElement *local_80;
  FScriptContainerElement *local_78;
  FMassEntityHandle *local_70;
  FMassEntityHandle local_68;
  FMassEntityHandle local_60;
  FTestFragment_Float *local_58;
  FTestFragment_Int *local_50;
  FMassEntityHandle local_48;
  FMassCommandBuffer *local_40;
  undefined4 local_38;
  FTestFragment_Float local_34;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_30;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_20 [2];
  
  local_38 = 5;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_110.AllocatorInstance);
  local_110.ArrayNum = 0;
  local_110.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_110.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_120.AllocatorInstance);
  local_120.ArrayNum = 0;
  local_120.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_120.AllocatorInstance);
  local_e8 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_e8,&local_30,(FMassArchetypeHandle *)&this->field_0x60,5,&local_110);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_30);
  local_e0 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_e0,local_20,(FMassArchetypeHandle *)&this->field_0x50,5,&local_120);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(local_20);
  local_138 = 0;
  do {
    if (4 < local_138) {
      pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                         ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      FMassEntityManager::FlushCommands(pFVar4);
      local_100 = this;
      bVar2 = `FMassCommandsTest::FCommands_FragmentInstanceList::InstantTest'::__l2::<lambda_1>::
              operator()(&local_100,&local_110);
      if ((bVar2) &&
         (bVar2 = `FMassCommandsTest::FCommands_FragmentInstanceList::InstantTest'::__l2::<lambda_1>
                  ::operator()(&local_100,&local_120), bVar2)) {
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_120);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_110);
        bVar2 = true;
      }
      else {
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_120);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_110);
        bVar2 = false;
      }
      return bVar2;
    }
    pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_90 = FMassEntityManager::Defer(pFVar4);
    local_a8 = FTestFragment_Float::FTestFragment_Float(&local_34,(float)local_138);
    local_a0 = FTestFragment_Int::FTestFragment_Int(&local_f8,local_138);
    if (local_138 < 0 || local_110.ArrayNum <= local_138) {
      local_d8 = 0;
      local_d4 = 0;
      UE::Core::Private::FormatStringSan::
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
    local_d0 = local_110.AllocatorInstance.Data;
    local_c8 = local_110.AllocatorInstance.Data;
    local_c0 = (FMassEntityHandle *)(local_110.AllocatorInstance.Data + (longlong)local_138 * 8);
    local_b8 = *local_c0;
    local_b0 = local_b8;
    local_98 = local_b8;
    FMassCommandBuffer::
    PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Int,FTestFragment_Float>
              (local_90,local_b8,local_a0,local_a8);
    pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_40 = FMassEntityManager::Defer(pFVar4);
    local_58 = FTestFragment_Float::FTestFragment_Float(&local_f4,(float)local_138);
    local_50 = FTestFragment_Int::FTestFragment_Int(local_f0,local_138);
    if (local_138 < 0 || local_120.ArrayNum <= local_138) {
      local_88 = 0;
      local_84 = 0;
      UE::Core::Private::FormatStringSan::
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
    local_80 = local_120.AllocatorInstance.Data;
    local_78 = local_120.AllocatorInstance.Data;
    local_70 = (FMassEntityHandle *)(local_120.AllocatorInstance.Data + (longlong)local_138 * 8);
    local_68 = *local_70;
    local_60 = local_68;
    local_48 = local_68;
    FMassCommandBuffer::
    PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Int,FTestFragment_Float>
              (local_40,local_68,local_50,local_58);
    local_138 = local_138 + 1;
  } while( true );
}

