// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// operator() @ 1470fd9d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::EntityIterator::FIterator_ParallelFor::InstantTest'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  FMassEntityHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMassEntityHandle FVar5;
  undefined8 *puVar6;
  undefined1 local_38 [8];
  FEntityIterator local_30;
  
  FMassExecutionContext::CreateEntityIterator(param_1,&local_30);
  do {
    bVar3 = FMassExecutionContext::FEntityIterator::operator_bool(&local_30);
    if (!bVar3) {
      return;
    }
    pFVar1 = *(FMassEntityHandle **)this;
    FMassExecutionContext::FEntityIterator::operator_int(&local_30);
    FVar5 = FMassExecutionContext::GetEntity(param_1,(int)local_38);
    if (((ulonglong)*pFVar1 <= (ulonglong)FVar5) &&
       ((ulonglong)FVar5 < (ulonglong)((longlong)*pFVar1 + (longlong)pFVar1[1].SerialNumber * 8))) {
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (pFVar1[1].Index == pFVar1[1].SerialNumber) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pFVar1,&pFVar1[1].SerialNumber);
      pFVar1[1].Index = iVar4;
    }
    iVar4 = pFVar1[1].Index;
    pFVar1[1].Index = pFVar1[1].Index + 1;
    puVar6 = ::operator_new(8,(FScriptContainerElement *)((longlong)*pFVar1 + (longlong)iVar4 * 8));
    *puVar6 = *(undefined8 *)FVar5;
    FMassExecutionContext::FEntityIterator::operator++(&local_30);
  } while( true );
}

// operator() @ 147100bf0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::EntityIterator::FIterator_ParallelFor::InstantTest'::__l2::<lambda_2>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_e8;
  int local_d8;
  FMassEntityHandle local_d0;
  int local_c8;
  FMassEntityHandle local_c0;
  FMassEntityHandle local_b8;
  FMassEntityHandle local_b0;
  FMassEntityHandle local_a8;
  FMassEntityHandle local_a0;
  FMassEntityHandle local_98;
  undefined4 local_90;
  undefined4 local_8c;
  FMassEntityHandle local_88;
  FMassEntityHandle local_80;
  FMassEntityHandle local_78;
  longlong local_70;
  longlong local_68;
  FMassEntityHandle local_60;
  FMassEntityHandle local_58;
  void *local_50;
  undefined8 *local_48;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_40;
  undefined1 local_38 [8];
  FEntityIterator local_30;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_e8.AllocatorInstance)
  ;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_e8.AllocatorInstance);
  FMassExecutionContext::CreateEntityIterator(param_1,&local_30);
  do {
    bVar2 = FMassExecutionContext::FEntityIterator::operator_bool(&local_30);
    if (!bVar2) {
      UE::FSpinLock::Lock(*(FSpinLock **)((longlong)this + 8));
      local_40 = *(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> **)this;
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      Append<FMassEntityHandle,TSizedDefaultAllocator<32>_>(local_40,&local_e8);
      UE::FSpinLock::Unlock(*(FSpinLock **)((longlong)this + 8));
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_e8);
      return;
    }
    FMassExecutionContext::FEntityIterator::operator_int(&local_30);
    local_d0 = FMassExecutionContext::GetEntity(param_1,(int)local_38);
    local_c0 = (FMassEntityHandle)local_e8.AllocatorInstance.Data;
    local_b8 = (FMassEntityHandle)local_e8.AllocatorInstance.Data;
    local_b0 = (FMassEntityHandle)local_e8.AllocatorInstance.Data;
    if (local_e8.AllocatorInstance.Data <= (ulonglong)local_d0) {
      local_a8 = (FMassEntityHandle)local_e8.AllocatorInstance.Data;
      local_a0 = (FMassEntityHandle)local_e8.AllocatorInstance.Data;
      local_98 = (FMassEntityHandle)local_e8.AllocatorInstance.Data;
      if ((ulonglong)local_d0 <
          (ulonglong)((longlong)local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 8))
      {
        local_90 = 0;
        local_8c = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_70 = (longlong)local_e8.ArrayNum;
        local_68 = (longlong)local_e8.ArrayMax;
        local_88 = (FMassEntityHandle)local_e8.AllocatorInstance.Data;
        local_80 = (FMassEntityHandle)local_e8.AllocatorInstance.Data;
        local_78 = (FMassEntityHandle)local_e8.AllocatorInstance.Data;
        local_60 = (FMassEntityHandle)local_e8.AllocatorInstance.Data;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    if (local_e8.ArrayNum == local_e8.ArrayMax) {
      local_e8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
    }
    local_d8 = local_e8.ArrayNum;
    local_58 = (FMassEntityHandle)local_e8.AllocatorInstance.Data;
    local_50 = (void *)((longlong)local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 8)
    ;
    local_e8.ArrayNum = local_e8.ArrayNum + 1;
    local_48 = ::operator_new(8,local_50);
    *local_48 = *(undefined8 *)local_d0;
    local_c8 = local_d8;
    FMassExecutionContext::FEntityIterator::operator++(&local_30);
  } while( true );
}

// InstantTest @ 14716e3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::EntityIterator::FIterator_ParallelFor::InstantTest(FIterator_ParallelFor *this)

{
  int iVar1;
  TSharedPtr<FMassEntityManager,1> *pTVar2;
  bool bVar3;
  undefined1 auStackY_218 [32];
  FSpinLock local_1e5;
  char local_1e4;
  undefined1 local_1e3;
  char local_1e2;
  undefined1 local_1e1;
  char local_1e0;
  undefined1 local_1df;
  undefined1 local_1de;
  UMassTestProcessorBase *local_1d8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_1d0;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_1b0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_1a0;
  float local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  FMassEntityQuery *local_168;
  <lambda_1> local_160;
  <lambda_1> *local_158;
  atomic<bool> *local_150;
  <lambda_2> *local_148;
  FAutomationTestBase *local_140;
  FAutomationTestBase *local_138;
  FScriptContainerElement *local_130;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  size_t local_110;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  FAutomationTestBase *local_f8;
  FMassEntityManager *local_f0;
  FMassEntityManager *local_e8;
  TSharedPtr<FMassEntityManager,1> *local_e0;
  <lambda_2> local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_98;
  TSharedPtr<FMassEntityManager,1> local_88;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_78;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_190 = __real_41aa6666;
  local_f0 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  iVar1 = FMassEntityManager::DebugGetArchetypeEntitiesCountPerChunk
                    (local_f0,(FMassArchetypeHandle *)&this->field_0x50);
  local_18c = (int)(local_190 * (float)iVar1);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_1a0.AllocatorInstance);
  local_1a0.ArrayNum = 0;
  local_1a0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_1a0.AllocatorInstance);
  local_e8 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_e8,&local_98,(FMassArchetypeHandle *)&this->field_0x70,local_18c,&local_1a0);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_98);
  local_e0 = &local_88;
  pTVar2 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_e0,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_1d8 = NewTestProcessor<UMassTestProcessorBase>(pTVar2);
  local_168 = &local_1d8->EntityQuery;
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)local_168,ReadWrite,All);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_1d0.AllocatorInstance);
  local_1d0.ArrayNum = 0;
  local_1d0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_1d0.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_1b0.AllocatorInstance);
  local_1b0.ArrayNum = 0;
  local_1b0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_1b0.AllocatorInstance);
  local_160.EntitiesSync = &local_1d0;
  local_158 = &local_160;
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::EntityIterator::FIterator_ParallelFor::InstantTest_::__l2::<lambda_1>_>
            (&local_78,local_158);
  TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
            (&local_1d8->ForEachEntityChunkExecutionFunction,&local_78);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_78);
  UMassTestProcessorBase::TestExecute
            (local_1d8,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_150 = &local_1e5.bFlag;
  std::atomic<bool>::atomic<bool>(local_150,false);
  local_d8.EntitiesAsync = &local_1b0;
  local_d8.Lock = &local_1e5;
  local_148 = &local_d8;
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::EntityIterator::FIterator_ParallelFor::InstantTest_::__l2::<lambda_2>_>
            (&local_48,local_148);
  TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
            (&local_1d8->ForEachEntityChunkExecutionFunction,&local_48);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_48);
  UMassTestProcessorBase::SetUseParallelForEachEntityChunk(local_1d8,true);
  UMassTestProcessorBase::TestExecute
            (local_1d8,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Sort(&local_1d0);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Sort(&local_1b0);
  local_140 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_188 = local_1a0.ArrayNum;
  local_184 = local_1d0.ArrayNum;
  bVar3 = local_1a0.ArrayNum == local_1d0.ArrayNum;
  ::FString::FString(&local_c8,"Index-based loop processes all entities");
  bVar3 = FAutomationTestBase::TestTrue(local_140,&local_c8,bVar3);
  local_1e4 = !bVar3;
  local_1c0 = (uint)(byte)local_1e4;
  ::FString::~FString(&local_c8);
  if (local_1e4 == '\0') {
    local_138 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_180 = local_1a0.ArrayNum;
    local_17c = local_1b0.ArrayNum;
    bVar3 = local_1a0.ArrayNum == local_1b0.ArrayNum;
    ::FString::FString(&local_b8,"Iterator-based loop processes all entities");
    bVar3 = FAutomationTestBase::TestTrue(local_138,&local_b8,bVar3);
    local_1e2 = !bVar3;
    local_1bc = (uint)(byte)local_1e2;
    ::FString::~FString(&local_b8);
    if (local_1e2 == '\0') {
      local_f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_178 = local_1d0.ArrayNum;
      local_110 = (size_t)local_1d0.ArrayNum;
      local_130 = local_1d0.AllocatorInstance.Data;
      local_128 = local_1d0.AllocatorInstance.Data;
      local_108 = local_1d0.AllocatorInstance.Data;
      local_120 = local_1b0.AllocatorInstance.Data;
      local_118 = local_1b0.AllocatorInstance.Data;
      local_100 = local_1b0.AllocatorInstance.Data;
      local_174 = memcmp(local_1b0.AllocatorInstance.Data,local_1d0.AllocatorInstance.Data,local_110
                        );
      bVar3 = local_174 == 0;
      local_170 = local_174;
      ::FString::FString(&local_a8,"Index-based and iterator-based processing produce same results "
                        );
      bVar3 = FAutomationTestBase::TestTrue(local_f8,&local_a8,bVar3);
      local_1e0 = !bVar3;
      local_1b8 = (uint)(byte)local_1e0;
      ::FString::~FString(&local_a8);
      if (local_1e0 == '\0') {
        local_1de = 1;
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1b0);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1d0);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1a0);
        local_1e3 = local_1de;
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_1df = 0;
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1b0);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1d0);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1a0);
        local_1e3 = local_1df;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_1e1 = 0;
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1b0);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1d0);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1a0);
      local_1e3 = local_1e1;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_1e3 = 0;
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1b0);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1d0);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1a0);
  }
  return (bool)local_1e3;
}

