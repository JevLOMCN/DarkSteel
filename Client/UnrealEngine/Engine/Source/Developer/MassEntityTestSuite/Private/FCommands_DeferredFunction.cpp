// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// ~<lambda_1> @ 1470f6870

void __thiscall
`FMassCommandsTest::FCommands_DeferredFunction::InstantTest'::__l6::<lambda_1>::~<lambda_1>
          (void *this)

{
  FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)((longlong)this + 8));
  return;
}

// operator() @ 147100290

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassCommandsTest::FCommands_DeferredFunction::InstantTest'::__l6::<lambda_1>::operator()
          (void *this,FMassEntityManager *param_1)

{
  int iVar1;
  FTestFragment_Int *pFVar2;
  FMassEntityView local_38;
  
  FMassEntityView::FMassEntityView
            (&local_38,(FMassArchetypeHandle *)((longlong)this + 8),*(FMassEntityHandle *)this);
  iVar1 = *(int *)((longlong)this + 0x18);
  pFVar2 = FMassEntityView::GetFragmentData<FTestFragment_Int>(&local_38);
  pFVar2->Value = pFVar2->Value - iVar1;
  return;
}

// InstantTest @ 1471429c0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassCommandsTest::FCommands_DeferredFunction::InstantTest(FCommands_DeferredFunction *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FTestFragment_Int *pFVar4;
  FMassEntityManager *pFVar5;
  longlong lVar6;
  char *pcVar7;
  int local_1a8;
  char local_1a4 [8];
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_188;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_180;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  FMassEntityHandle local_158;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_150;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  FMassEntityHandle *local_118;
  FMassArchetypeHandle *local_110;
  <lambda_1> *local_108;
  <lambda_1> *local_100;
  FMassCommandBuffer *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  FMassEntityHandle *local_e8;
  FMassEntityHandle *local_e0;
  FMassEntityHandle *local_d8;
  FAutomationTestBase *local_d0;
  undefined4 local_c8;
  FMassEntityManager *local_c0;
  FString local_b8;
  <lambda_1> local_a8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_88;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_78;
  FMassEntityView local_60;
  FMassEntityView local_38;
  
  local_c8 = 5;
  local_168 = 1000;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_180.AllocatorInstance);
  local_180.ArrayNum = 0;
  local_180.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_180.AllocatorInstance);
  local_c0 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_c0,&local_88,(FMassArchetypeHandle *)&this->field_0x60,5,&local_180);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_88);
  local_1a8 = 0;
  local_188 = &local_180;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_150,&local_180.ArrayNum,(FMassEntityHandle *)local_180.AllocatorInstance.Data);
  local_128 = (local_188->AllocatorInstance).Data;
  local_170 = local_188->ArrayNum;
  local_120 = local_128;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_78,&local_188->ArrayNum,
             (FMassEntityHandle *)(local_128 + (longlong)local_170 * 8));
  while( true ) {
    if (*local_150.CurrentNum != local_150.InitialNum) {
      pcVar7 = local_1a4;
      for (lVar6 = 1; lVar6 != 0; lVar6 = lVar6 + -1) {
        *pcVar7 = '\0';
        pcVar7 = pcVar7 + 1;
      }
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1a4);
    }
    local_1a4[1] = local_150.Ptr != local_78.Ptr;
    local_19c = (uint)(byte)local_1a4[1];
    if (!(bool)local_1a4[1]) break;
    local_118 = local_150.Ptr;
    local_158 = *local_150.Ptr;
    FMassEntityView::FMassEntityView(&local_60,(FMassArchetypeHandle *)&this->field_0x60,local_158);
    local_16c = local_1a8 + 1000;
    local_1a8 = local_1a8 + 1;
    pFVar4 = FMassEntityView::GetFragmentData<FTestFragment_Int>(&local_60);
    pFVar4->Value = local_16c;
    pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_f8 = FMassEntityManager::Defer(pFVar5);
    local_a8.Entity = local_158;
    local_110 = &local_a8.Archetype;
    FMassArchetypeHandle::FMassArchetypeHandle(local_110,(FMassArchetypeHandle *)&this->field_0x60);
    local_a8.Offset = local_168;
    local_108 = &local_a8;
    local_100 = local_108;
    FMassCommandBuffer::
    PushCommand<FMassDeferredCommand<5>,_FMassCommandsTest::FCommands_DeferredFunction::InstantTest_::__l6::<lambda_1>_>
              (local_f8,local_108);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_a8.Archetype);
    local_150.Ptr = local_150.Ptr + 1;
  }
  pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::FlushCommands(pFVar5);
  local_1a8 = 0;
  while( true ) {
    local_164 = local_180.ArrayNum;
    if (local_180.ArrayNum <= local_1a8) {
      local_1a4[4] = 1;
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_180);
      return (bool)local_1a4[4];
    }
    local_194 = (uint)(-1 < local_1a8);
    local_198 = (uint)(local_1a8 < local_180.ArrayNum);
    if (-1 >= local_1a8 || local_1a8 >= local_180.ArrayNum) {
      local_f0 = 0;
      local_ec = 0;
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
    local_e8 = (FMassEntityHandle *)local_180.AllocatorInstance.Data;
    local_e0 = (FMassEntityHandle *)local_180.AllocatorInstance.Data;
    local_d8 = (FMassEntityHandle *)(local_180.AllocatorInstance.Data + (longlong)local_1a8 * 8);
    FMassEntityView::FMassEntityView(&local_38,(FMassArchetypeHandle *)&this->field_0x60,*local_d8);
    local_d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pFVar4 = FMassEntityView::GetFragmentData<FTestFragment_Int>(&local_38);
    local_160 = pFVar4->Value;
    ::FString::FString(&local_b8,L"Should have predicted values");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_b8,local_160,local_1a8,local_d0);
    local_1a4[2] = !bVar2;
    local_190 = (uint)(byte)local_1a4[2];
    ::FString::~FString(&local_b8);
    if (local_1a4[2] != '\0') break;
    local_1a8 = local_1a8 + 1;
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  local_1a4[3] = 0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_180);
  return (bool)local_1a4[3];
}

