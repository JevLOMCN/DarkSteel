// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470fd080

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::Observers::FCreationOperationOrder::InstantTest'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  int iVar1;
  bool bVar2;
  FEntityIterator *pFVar3;
  FTestFragment_Float *pFVar4;
  longlong lVar5;
  FEntityIterator *pFVar6;
  int local_b4;
  int local_b0;
  float local_ac;
  FEntityIterator *local_a8;
  undefined4 local_a0;
  TArrayView<FTestFragment_Float,int> *local_98;
  FEntityIterator local_90;
  TArrayView<FTestFragment_Float,int> local_70;
  FEntityIterator local_60;
  FEntityIterator local_40;
  
  local_a0 = 0;
  FMassExecutionContext::CreateEntityIterator(param_1,&local_60);
  local_a8 = &local_60;
  pFVar3 = FMassExecutionContext::FEntityIterator::begin(local_a8);
  pFVar6 = &local_90;
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pFVar6->ExecutionContext = *(undefined1 *)&pFVar3->ExecutionContext;
    pFVar3 = (FEntityIterator *)((longlong)&pFVar3->ExecutionContext + 1);
    pFVar6 = (FEntityIterator *)((longlong)&pFVar6->ExecutionContext + 1);
  }
  FMassExecutionContext::FEntityIterator::end(local_a8,&local_40);
  while( true ) {
    local_b4 = FMassExecutionContext::FEntityIterator::operator_int(&local_40);
    bVar2 = FMassExecutionContext::FEntityIterator::operator!=(&local_90,&local_b4);
    if (!bVar2) break;
    local_b0 = FMassExecutionContext::FEntityIterator::operator*(&local_90);
    iVar1 = **(int **)this;
    **(int **)this = iVar1 + 1;
    local_ac = (float)(iVar1 + 1);
    local_98 = FMassExecutionContext::GetMutableFragmentView<FTestFragment_Float>(param_1,&local_70)
    ;
    pFVar4 = TArrayView<FTestFragment_Float,int>::operator[](local_98,local_b0);
    pFVar4->Value = local_ac;
    FMassExecutionContext::FEntityIterator::operator++(&local_90);
  }
  return;
}

// InstantTest @ 1471534a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147153727) */
/* WARNING: Removing unreachable block (ram,0x000147153849) */
/* WARNING: Removing unreachable block (ram,0x000147153a96) */
/* WARNING: Removing unreachable block (ram,0x000147153bc1) */
/* WARNING: Removing unreachable block (ram,0x000147153e8b) */
/* WARNING: Removing unreachable block (ram,0x000147153fc5) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FCreationOperationOrder::InstantTest(FCreationOperationOrder *this)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  FMassEntityManager *this_00;
  TNotNull<UMassProcessor_*> *pTVar5;
  TNotNull<UScriptStruct_const_*> *pTVar6;
  FTestFragment_Float *pFVar7;
  undefined1 auStackY_308 [32];
  bool local_2d8;
  bool local_2d7;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_2c8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_2b8;
  uint local_2a8;
  undefined4 local_2a4;
  uint local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  uint local_294;
  undefined4 local_290;
  uint local_28c;
  uint local_288;
  uint local_284;
  undefined4 local_280;
  uint local_27c;
  undefined4 local_278;
  uint local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  uint local_260;
  uint local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  FMassEntityManager *local_248;
  TNotNull<UMassProcessor_*> *local_240;
  UMassProcessor *local_238;
  UScriptStruct *local_230;
  TNotNull<UScriptStruct_const_*> *local_228;
  UScriptStruct *local_220;
  TNotNull<UMassProcessor_*> local_218;
  UScriptStruct *local_210;
  FMassObserverManager *local_208;
  code *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  FMassEntityHandle *local_1f0;
  FMassEntityHandle *local_1e8;
  FMassEntityHandle *local_1e0;
  FMassEntityHandle local_1d8;
  FMassEntityManager *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  FMassEntityHandle *local_1c0;
  FMassEntityHandle *local_1b8;
  FMassEntityHandle *local_1b0;
  FMassEntityHandle local_1a8;
  FMassEntityManager *local_1a0;
  FAutomationTestBase *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  FMassEntityHandle *local_188;
  FMassEntityHandle *local_180;
  FMassEntityHandle *local_178;
  FMassEntityHandle local_170;
  FMassEntityManager *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  FMassEntityHandle *local_158;
  FMassEntityHandle *local_150;
  FMassEntityHandle *local_148;
  FMassEntityHandle local_140;
  FMassEntityManager *local_138;
  FAutomationTestBase *local_130;
  FAutomationTestBase *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  FMassEntityHandle *local_118;
  FMassEntityHandle *local_110;
  FMassEntityHandle *local_108;
  FMassEntityHandle local_100;
  FMassEntityManager *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  FMassEntityHandle *local_e8;
  FMassEntityHandle *local_e0;
  FMassEntityHandle *local_d8;
  FMassEntityHandle local_d0;
  FMassEntityManager *local_c8;
  FAutomationTestBase *local_c0;
  <lambda_1> local_b8;
  <lambda_1> *local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  TNotNull<UMassProcessor_*> local_68;
  TNotNull<UScriptStruct_const_*> local_60;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_58;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_308;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_2b8.AllocatorInstance);
  local_2b8.ArrayNum = 0;
  local_2b8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_2b8.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_2c8.AllocatorInstance);
  local_2c8.ArrayNum = 0;
  local_2c8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_2c8.AllocatorInstance);
  local_b8.Counter = &this->Counter;
  local_b0 = &local_b8;
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::Observers::FCreationOperationOrder::InstantTest_::__l2::<lambda_1>_>
            (&local_48,local_b0);
  TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
            ((TFunction<void___cdecl(FMassExecutionContext_&)> *)(this->_padding_ + 0x110),&local_48
            );
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_48);
  local_248 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  FMassEntityManager::BatchCreateEntities
            (local_248,&local_58,(FMassArchetypeHandle *)&this->_padding_,2,&local_2b8);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_58);
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  local_208 = FMassEntityManager::GetObserverManager(this_00);
  local_240 = &local_68;
  pTVar5 = TNotNull<UMassProcessor_*>::TNotNull<UMassProcessor_*><UMassTestProcessorBase_*_&>
                     (local_240,(UMassTestProcessorBase **)&this->_padding_);
  local_238 = pTVar5->Val;
  lVar2 = this->_padding_;
  local_228 = &local_60;
  local_218.Val = local_238;
  local_230 = FTestFragment_Float::StaticStruct();
  pTVar6 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                     (local_228,&local_230);
  local_220 = pTVar6->Val;
  local_210 = local_220;
  FMassObserverManager::AddObserverInstance
            (local_208,(TNotNull<UScriptStruct_const_*>)local_220,(EMassObservedOperationFlags)lVar2
             ,local_218);
  local_200 = *(code **)(this->_padding_ + 0x48);
  (*local_200)(this,&local_2b8,&local_2c8);
  local_1d0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  local_2a4 = 1;
  local_2a8 = (uint)(0 < local_2c8.ArrayNum);
  if (local_2a8 == 0) {
    local_1f8 = 0;
    local_1f4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  local_1f0 = (FMassEntityHandle *)local_2c8.AllocatorInstance.Data;
  local_1e8 = (FMassEntityHandle *)local_2c8.AllocatorInstance.Data;
  local_1e0 = (FMassEntityHandle *)local_2c8.AllocatorInstance.Data;
  local_1d8 = *(FMassEntityHandle *)local_2c8.AllocatorInstance.Data;
  pFVar7 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Float>(local_1d0,local_1d8);
  local_270 = pFVar7->Value;
  local_1a0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  local_29c = 1;
  local_2a0 = (uint)(1 < local_2c8.ArrayNum);
  if (local_2a0 == 0) {
    local_1c8 = 0;
    local_1c4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  local_1c0 = (FMassEntityHandle *)local_2c8.AllocatorInstance.Data;
  local_1b8 = (FMassEntityHandle *)local_2c8.AllocatorInstance.Data;
  local_1b0 = (FMassEntityHandle *)(local_2c8.AllocatorInstance.Data + 8);
  local_1a8 = *local_1b0;
  pFVar7 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Float>(local_1a0,local_1a8);
  local_26c = pFVar7->Value;
  local_198 = FAITestBase::GetTestRunner((FAITestBase *)this);
  if (((__real_3f800000 == local_270) && (__real_40000000 == local_26c)) ||
     ((__real_3f800000 == local_26c && (__real_40000000 == local_270)))) {
    local_2d8 = true;
  }
  else {
    local_2d8 = false;
  }
  ::FString::FString(&local_a8,"First batch\'s values match");
  bVar3 = FAutomationTestBase::TestTrue(local_198,&local_a8,local_2d8);
  local_260 = (uint)!bVar3;
  ::FString::~FString(&local_a8);
  if (!bVar3) {
    AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2c8);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2b8);
    bVar3 = false;
  }
  else {
    local_168 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    local_298 = 1;
    local_25c = (uint)(0 < local_2b8.ArrayNum);
    if (local_25c == 0) {
      local_190 = 0;
      local_18c = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    local_188 = (FMassEntityHandle *)local_2b8.AllocatorInstance.Data;
    local_180 = (FMassEntityHandle *)local_2b8.AllocatorInstance.Data;
    local_178 = (FMassEntityHandle *)local_2b8.AllocatorInstance.Data;
    local_170 = *(FMassEntityHandle *)local_2b8.AllocatorInstance.Data;
    pFVar7 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Float>(local_168,local_170);
    local_250 = pFVar7->Value;
    local_138 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    local_290 = 1;
    local_294 = (uint)(1 < local_2b8.ArrayNum);
    if (local_294 == 0) {
      local_160 = 0;
      local_15c = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    local_158 = (FMassEntityHandle *)local_2b8.AllocatorInstance.Data;
    local_150 = (FMassEntityHandle *)local_2b8.AllocatorInstance.Data;
    local_148 = (FMassEntityHandle *)(local_2b8.AllocatorInstance.Data + 8);
    local_140 = *local_148;
    pFVar7 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Float>(local_138,local_140);
    local_24c = pFVar7->Value;
    local_130 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_258 = local_250;
    ::FString::FString(&local_98,"First preexisting entity\'s value");
    bVar3 = FTestHelpers::TestEqual<float,float>(&local_98,local_258,__real_40400000,local_130);
    local_28c = (uint)!bVar3;
    ::FString::~FString(&local_98);
    if (!bVar3) {
      AITestSuite::ConditionallyBreakOnTestFail();
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2c8);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2b8);
      bVar3 = false;
    }
    else {
      local_128 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_254 = local_24c;
      ::FString::FString(&local_88,"Second preexisting entity\'s value");
      bVar3 = FTestHelpers::TestEqual<float,float>(&local_88,local_254,__real_40c00000,local_128);
      local_288 = (uint)!bVar3;
      ::FString::~FString(&local_88);
      if (!bVar3) {
        AITestSuite::ConditionallyBreakOnTestFail();
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2c8);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2b8);
        bVar3 = false;
      }
      else {
        local_f8 = TSharedPtr<FMassEntityManager,1>::operator->
                             ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
        local_280 = 1;
        local_284 = (uint)(2 < local_2c8.ArrayNum);
        if (local_284 == 0) {
          local_120 = 0;
          local_11c = 0;
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        local_118 = (FMassEntityHandle *)local_2c8.AllocatorInstance.Data;
        local_110 = (FMassEntityHandle *)local_2c8.AllocatorInstance.Data;
        local_108 = (FMassEntityHandle *)(local_2c8.AllocatorInstance.Data + 0x10);
        local_100 = *local_108;
        pFVar7 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Float>(local_f8,local_100)
        ;
        local_268 = pFVar7->Value;
        local_c8 = TSharedPtr<FMassEntityManager,1>::operator->
                             ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
        local_278 = 1;
        local_27c = (uint)(3 < local_2c8.ArrayNum);
        if (local_27c == 0) {
          local_f0 = 0;
          local_ec = 0;
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        local_e8 = (FMassEntityHandle *)local_2c8.AllocatorInstance.Data;
        local_e0 = (FMassEntityHandle *)local_2c8.AllocatorInstance.Data;
        local_d8 = (FMassEntityHandle *)(local_2c8.AllocatorInstance.Data + 0x18);
        local_d0 = *local_d8;
        pFVar7 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Float>(local_c8,local_d0);
        local_264 = pFVar7->Value;
        local_c0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        if (((__real_40800000 == local_268) && (__real_40a00000 == local_264)) ||
           ((__real_40800000 == local_264 && (__real_40a00000 == local_268)))) {
          local_2d7 = true;
        }
        else {
          local_2d7 = false;
        }
        ::FString::FString(&local_78,"First batch\'s values match");
        bVar3 = FAutomationTestBase::TestTrue(local_c0,&local_78,local_2d7);
        local_274 = (uint)!bVar3;
        ::FString::~FString(&local_78);
        if (!bVar3) {
          AITestSuite::ConditionallyBreakOnTestFail();
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2c8);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2b8);
          bVar3 = false;
        }
        else {
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2c8);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2b8);
          bVar3 = true;
        }
      }
    }
  }
  return bVar3;
}

