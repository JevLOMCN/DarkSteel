// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// operator() @ 1470fd730

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::EntityIterator::FIterator_IndexParity::InstantTest'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  FMassEntityHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMassEntityHandle FVar5;
  undefined8 *puVar6;
  int local_b0;
  undefined1 local_18 [24];
  
  local_b0 = 0;
  do {
    iVar4 = FMassExecutionContext::GetNumEntities(param_1);
    if (iVar4 <= local_b0) {
      return;
    }
    pFVar1 = *(FMassEntityHandle **)this;
    FVar5 = FMassExecutionContext::GetEntity(param_1,(int)local_18);
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
    local_b0 = local_b0 + 1;
  } while( true );
}

// operator() @ 147100930

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::EntityIterator::FIterator_IndexParity::InstantTest'::__l2::<lambda_2>::operator()
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

// InstantTest @ 14716dd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::EntityIterator::FIterator_IndexParity::InstantTest(FIterator_IndexParity *this)

{
  int iVar1;
  TSharedPtr<FMassEntityManager,1> *pTVar2;
  UMassTestProcessorBase *this_00;
  bool bVar3;
  undefined1 auStackY_208 [32];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_1b8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_1a8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_198;
  float local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  FMassEntityQuery *local_160;
  <lambda_1> local_158;
  <lambda_1> *local_150;
  <lambda_2> local_148;
  <lambda_2> *local_140;
  FAutomationTestBase *local_138;
  FAutomationTestBase *local_130;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  size_t local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  FAutomationTestBase *local_f0;
  FMassEntityManager *local_e8;
  FMassEntityManager *local_e0;
  TSharedPtr<FMassEntityManager,1> *local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_a0;
  TSharedPtr<FMassEntityManager,1> local_90;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_78;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_188 = __real_40133333;
  local_e8 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  iVar1 = FMassEntityManager::DebugGetArchetypeEntitiesCountPerChunk
                    (local_e8,(FMassArchetypeHandle *)&this->field_0x50);
  local_184 = (int)(local_188 * (float)iVar1);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_198.AllocatorInstance);
  local_198.ArrayNum = 0;
  local_198.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_198.AllocatorInstance);
  local_e0 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_e0,&local_a0,(FMassArchetypeHandle *)&this->field_0x70,local_184,&local_198);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_a0);
  local_d8 = &local_90;
  pTVar2 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_d8,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  this_00 = NewTestProcessor<UMassTestProcessorBase>(pTVar2);
  local_160 = &this_00->EntityQuery;
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)local_160,ReadWrite,All);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_1b8.AllocatorInstance);
  local_1b8.ArrayNum = 0;
  local_1b8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_1b8.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_1a8.AllocatorInstance);
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_1a8.AllocatorInstance);
  local_158.EntitiesIndexed = &local_1b8;
  local_150 = &local_158;
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::EntityIterator::FIterator_IndexParity::InstantTest_::__l2::<lambda_1>_>
            (&local_78,local_150);
  TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
            (&this_00->ForEachEntityChunkExecutionFunction,&local_78);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_78);
  UMassTestProcessorBase::TestExecute(this_00,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28)
  ;
  local_148.EntitiesIterated = &local_1a8;
  local_140 = &local_148;
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::EntityIterator::FIterator_IndexParity::InstantTest_::__l2::<lambda_2>_>
            (&local_48,local_140);
  TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
            (&this_00->ForEachEntityChunkExecutionFunction,&local_48);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_48);
  UMassTestProcessorBase::TestExecute(this_00,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28)
  ;
  local_138 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_180 = local_198.ArrayNum;
  local_17c = local_1b8.ArrayNum;
  bVar3 = local_198.ArrayNum == local_1b8.ArrayNum;
  ::FString::FString(&local_d0,"Index-based loop processes all entities");
  bVar3 = FAutomationTestBase::TestTrue(local_138,&local_d0,bVar3);
  ::FString::~FString(&local_d0);
  if (bVar3) {
    local_130 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_178 = local_198.ArrayNum;
    local_174 = local_1a8.ArrayNum;
    bVar3 = local_198.ArrayNum == local_1a8.ArrayNum;
    ::FString::FString(&local_c0,"Iterator-based loop processes all entities");
    bVar3 = FAutomationTestBase::TestTrue(local_130,&local_c0,bVar3);
    ::FString::~FString(&local_c0);
    if (bVar3) {
      local_f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_170 = local_1b8.ArrayNum;
      local_108 = (size_t)local_1b8.ArrayNum;
      local_128 = local_1b8.AllocatorInstance.Data;
      local_120 = local_1b8.AllocatorInstance.Data;
      local_100 = local_1b8.AllocatorInstance.Data;
      local_118 = local_1a8.AllocatorInstance.Data;
      local_110 = local_1a8.AllocatorInstance.Data;
      local_f8 = local_1a8.AllocatorInstance.Data;
      local_16c = memcmp(local_1a8.AllocatorInstance.Data,local_1b8.AllocatorInstance.Data,local_108
                        );
      bVar3 = local_16c == 0;
      local_168 = local_16c;
      ::FString::FString(&local_b0,"Index-based and iterator-based processing produce same results "
                        );
      bVar3 = FAutomationTestBase::TestTrue(local_f0,&local_b0,bVar3);
      ::FString::~FString(&local_b0);
      if (bVar3) {
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1a8);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1b8);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_198);
        bVar3 = true;
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1a8);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1b8);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_198);
        bVar3 = false;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1a8);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1b8);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_198);
      bVar3 = false;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1a8);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1b8);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_198);
    bVar3 = false;
  }
  return bVar3;
}

