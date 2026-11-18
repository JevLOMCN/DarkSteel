// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// FSharedFragment_ForEach @ 1470f53e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSharedFragment_ForEach * __thiscall
FMassEntityTest::FSharedFragment_ForEach::FSharedFragment_ForEach(FSharedFragment_ForEach *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FSharedFragment_ForEach_FMassEntityTest__6B_;
  return this;
}

// operator() @ 1470fe200

void __thiscall
`FMassEntityTest::FSharedFragment_ForEach::InstantTest'::__l2::<lambda_1>::operator()
          (void *this,FTestSharedFragment_Int *param_1)

{
  ForAnyElementType *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  
  pFVar1 = *(ForAnyElementType **)this;
  if ((pFVar1->Data <= param_1) &&
     (param_1 < pFVar1->Data + (longlong)*(int *)((longlong)&pFVar1[1].Data + 4) * 4)) {
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
  if (*(int *)&pFVar1[1].Data == *(int *)((longlong)&pFVar1[1].Data + 4)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar1,(int *)((longlong)&pFVar1[1].Data + 4));
    *(int *)&pFVar1[1].Data = iVar4;
  }
  iVar4 = *(int *)&pFVar1[1].Data;
  *(int *)&pFVar1[1].Data = *(int *)&pFVar1[1].Data + 1;
  piVar5 = ::operator_new(4,pFVar1->Data + (longlong)iVar4 * 4);
  *piVar5 = param_1->Value;
  pFVar1 = *(ForAnyElementType **)((longlong)this + 8);
  param_1->Value = param_1->Value + 100;
  if ((pFVar1->Data <= param_1) &&
     (param_1 < pFVar1->Data + (longlong)*(int *)((longlong)&pFVar1[1].Data + 4) * 4)) {
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
  if (*(int *)&pFVar1[1].Data == *(int *)((longlong)&pFVar1[1].Data + 4)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar1,(int *)((longlong)&pFVar1[1].Data + 4));
    *(int *)&pFVar1[1].Data = iVar4;
  }
  iVar4 = *(int *)&pFVar1[1].Data;
  *(int *)&pFVar1[1].Data = *(int *)&pFVar1[1].Data + 1;
  piVar5 = ::operator_new(4,pFVar1->Data + (longlong)iVar4 * 4);
  *piVar5 = param_1->Value;
  return;
}

// operator() @ 147100ef0

void __thiscall
`FMassEntityTest::FSharedFragment_ForEach::InstantTest'::__l2::<lambda_2>::operator()
          (void *this,FTestSharedFragment_Int *param_1)

{
  ForAnyElementType *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  
  pFVar1 = *(ForAnyElementType **)this;
  if ((pFVar1->Data <= param_1) &&
     (param_1 < pFVar1->Data + (longlong)*(int *)((longlong)&pFVar1[1].Data + 4) * 4)) {
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
  if (*(int *)&pFVar1[1].Data == *(int *)((longlong)&pFVar1[1].Data + 4)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar1,(int *)((longlong)&pFVar1[1].Data + 4));
    *(int *)&pFVar1[1].Data = iVar4;
  }
  iVar4 = *(int *)&pFVar1[1].Data;
  *(int *)&pFVar1[1].Data = *(int *)&pFVar1[1].Data + 1;
  piVar5 = ::operator_new(4,pFVar1->Data + (longlong)iVar4 * 4);
  *piVar5 = param_1->Value;
  return;
}

// operator() @ 1471038b0

bool __thiscall
`FMassEntityTest::FSharedFragment_ForEach::InstantTest'::__l2::<lambda_3>::operator()
          (void *this,FTestSharedFragment_Int *param_1)

{
  return 10 < param_1->Value;
}

// operator() @ 147104060

void __thiscall
`FMassEntityTest::FSharedFragment_ForEach::InstantTest'::__l2::<lambda_4>::operator()
          (void *this,FTestSharedFragment_Int *param_1)

{
  ForAnyElementType *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  
  pFVar1 = *(ForAnyElementType **)this;
  if ((pFVar1->Data <= param_1) &&
     (param_1 < pFVar1->Data + (longlong)*(int *)((longlong)&pFVar1[1].Data + 4) * 4)) {
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
  if (*(int *)&pFVar1[1].Data == *(int *)((longlong)&pFVar1[1].Data + 4)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar1,(int *)((longlong)&pFVar1[1].Data + 4));
    *(int *)&pFVar1[1].Data = iVar4;
  }
  iVar4 = *(int *)&pFVar1[1].Data;
  *(int *)&pFVar1[1].Data = *(int *)&pFVar1[1].Data + 1;
  piVar5 = ::operator_new(4,pFVar1->Data + (longlong)iVar4 * 4);
  *piVar5 = param_1->Value;
  return;
}

// InstantTest @ 147188970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassEntityTest::FSharedFragment_ForEach::InstantTest(FSharedFragment_ForEach *this)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 auStackY_368 [32];
  char local_32f [9];
  <lambda_3> local_326 [6];
  TArray<int,TSizedDefaultAllocator<32>_> local_320;
  uint local_310;
  uint local_30c;
  uint local_308;
  uint local_304;
  uint local_300;
  uint local_2fc;
  uint local_2f8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2f0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_2e0;
  int *local_2d0;
  int *local_2c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_2c0;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  int local_298 [5];
  int local_284;
  int local_280;
  int local_27c;
  TArray<int,TSizedDefaultAllocator<32>_> local_278;
  int *local_268;
  int *local_260;
  TCheckedPointerIterator<int,int,0> local_258;
  TCheckedPointerIterator<int,int,0> local_240;
  <lambda_1> *local_228;
  TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)> *local_220;
  TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)> *local_218;
  FMassEntityManager *local_210;
  FAutomationTestBase *local_208;
  int *local_200;
  ulonglong *local_1f8;
  ulonglong *local_1f0;
  FAutomationTestBase *local_1e8;
  <lambda_2> local_1e0;
  <lambda_2> *local_1d8;
  TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)> *local_1d0;
  TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)> *local_1c8;
  FMassEntityManager *local_1c0;
  FAutomationTestBase *local_1b8;
  FScriptContainerElement *local_1a0;
  FScriptContainerElement *local_198;
  int *local_190;
  FAutomationTestBase *local_188;
  <lambda_4> local_180;
  <lambda_4> *local_178;
  TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)> *local_170;
  TFunctionRef<bool___cdecl(FTestSharedFragment_Int_&)> *local_168;
  TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)> *local_160;
  TFunctionRef<bool___cdecl(FTestSharedFragment_Int_&)> *local_158;
  FMassEntityManager *local_150;
  FScriptContainerElement *local_138;
  FScriptContainerElement *local_130;
  int *local_128;
  FAutomationTestBase *local_120;
  undefined4 local_118;
  undefined4 local_114;
  int *local_110;
  ulonglong *local_108;
  ulonglong *local_100;
  FMassEntityManager *local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  <lambda_1> local_b0;
  FString local_a0;
  TCheckedPointerIterator<int,int,0> local_90;
  TCheckedPointerIterator<int,int,0> local_78;
  TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)> local_60;
  TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)> local_50;
  TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)> local_40;
  TFunctionRef<bool___cdecl(FTestSharedFragment_Int_&)> local_30;
  TStaticArray<int,4,4294967295> local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_118 = 4;
  local_298[3] = 9;
  local_298[2] = 1;
  local_298[1] = 0xc;
  local_298[0] = 0xd;
  TStaticArray<int,4,4294967295>::TStaticArray<int,4,4294967295><int,int,int,int>
            (&local_20,local_298 + 3,local_298 + 2,local_298 + 1,local_298);
  local_108 = &local_10;
  local_2c8 = local_20.Elements;
  local_268 = local_2c8;
  local_110 = local_2c8;
  local_100 = local_108;
  for (; (ulonglong *)local_2c8 != local_100; local_2c8 = local_2c8 + 1) {
    local_284 = *local_2c8;
    local_f8 = TSharedPtr<FMassEntityManager,1>::operator->
                         ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    FMassEntityManager::GetOrCreateSharedFragment<FTestSharedFragment_Int,int_&>
              (local_f8,&local_284);
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_320.AllocatorInstance);
  local_320.ArrayNum = 0;
  local_320.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_320.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_2e0.AllocatorInstance);
  local_2e0.ArrayNum = 0;
  local_2e0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_2e0.AllocatorInstance);
  local_210 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_220 = &local_60;
  local_b0.Results = &local_320;
  local_b0.ModifiedValues = &local_2e0;
  local_228 = &local_b0;
  local_218 = TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)>::
              TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)><_FMassEntityTest::FSharedFragment_ForEach::InstantTest_::__l2::<lambda_1>_>
                        (local_220,local_228);
  FMassEntityManager::ForEachSharedFragment<FTestSharedFragment_Int>(local_210,local_218);
  local_208 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_280 = local_320.ArrayNum;
  local_27c = local_320.ArrayNum;
  ::FString::FString(&local_a0,"Number of processed shared fragments");
  bVar1 = FTestHelpers::TestEqual<int,int>(&local_a0,local_27c,4,local_208);
  local_310 = (uint)!bVar1;
  ::FString::~FString(&local_a0);
  if (!bVar1) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_2e0);
    TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_320);
    local_32f[3] = 0;
  }
  else {
    local_1f8 = &local_10;
    local_2d0 = local_20.Elements;
    local_260 = local_2d0;
    local_200 = local_2d0;
    local_1f0 = local_1f8;
    for (; (ulonglong *)local_2d0 != local_1f0; local_2d0 = local_2d0 + 1) {
      local_2b0 = *local_2d0;
      local_1e8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      iVar2 = TArray<int,TSizedDefaultAllocator<32>_>::Find(&local_320,&local_2b0);
      ::FString::FString(&local_f0,"Read values matches init values");
      bVar1 = FAutomationTestBase::TestTrue(local_1e8,&local_f0,iVar2 != -1);
      local_30c = (uint)!bVar1;
      ::FString::~FString(&local_f0);
      if (!bVar1) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                  (&local_2e0);
        TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                  (&local_320);
        return false;
      }
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_2c0.AllocatorInstance);
    local_2c0.ArrayNum = 0;
    local_2c0.ArrayMax =
         TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                   (&local_2c0.AllocatorInstance);
    local_1c0 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_1d0 = &local_50;
    local_1e0.MutatedResults = &local_2c0;
    local_1d8 = &local_1e0;
    local_1c8 = TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)>::
                TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)><_FMassEntityTest::FSharedFragment_ForEach::InstantTest_::__l2::<lambda_2>_>
                          (local_1d0,local_1d8);
    FMassEntityManager::ForEachSharedFragment<FTestSharedFragment_Int>(local_1c0,local_1c8);
    local_1b8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_2ac = local_320.ArrayNum;
    local_2a8 = local_320.ArrayNum;
    ::FString::FString(&local_e0,"Number of shared fragments processed in second round");
    bVar1 = FTestHelpers::TestEqual<int,int>(&local_e0,local_2a8,4,local_1b8);
    local_308 = (uint)!bVar1;
    ::FString::~FString(&local_e0);
    if (!bVar1) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_2c0);
      TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_2e0);
      TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_320);
      local_32f[3] = 0;
    }
    else {
      local_2f0 = &local_2e0;
      TCheckedPointerIterator<int,int,0>::TCheckedPointerIterator<int,int,0>
                (&local_258,&local_2e0.ArrayNum,(int *)local_2e0.AllocatorInstance.Data);
      local_1a0 = (local_2f0->AllocatorInstance).Data;
      local_2a4 = local_2f0->ArrayNum;
      local_198 = local_1a0;
      TCheckedPointerIterator<int,int,0>::TCheckedPointerIterator<int,int,0>
                (&local_90,&local_2f0->ArrayNum,(int *)(local_1a0 + (longlong)local_2a4 * 4));
      while( true ) {
        if (*local_258.CurrentNum != local_258.InitialNum) {
          pcVar4 = local_32f;
          for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
            *pcVar4 = '\0';
            pcVar4 = pcVar4 + 1;
          }
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_32f);
        }
        local_32f[1] = local_258.Ptr != local_90.Ptr;
        local_304 = (uint)(byte)local_32f[1];
        if (!(bool)local_32f[1]) {
          local_114 = 10;
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                    (&local_278.AllocatorInstance);
          local_278.ArrayNum = 0;
          local_278.ArrayMax =
               TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                         (&local_278.AllocatorInstance);
          local_150 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_170 = &local_40;
          local_180.ConditionalResults = &local_278;
          local_178 = &local_180;
          local_160 = TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)>::
                      TFunctionRef<void___cdecl(FTestSharedFragment_Int_&)><_FMassEntityTest::FSharedFragment_ForEach::InstantTest_::__l2::<lambda_4>_>
                                (local_170,local_178);
          local_168 = &local_30;
          local_158 = TFunctionRef<bool___cdecl(FTestSharedFragment_Int_&)>::
                      TFunctionRef<bool___cdecl(FTestSharedFragment_Int_&)><_FMassEntityTest::FSharedFragment_ForEach::InstantTest_::__l2::<lambda_3>_>
                                (local_168,(<lambda_3> *)(local_32f + 9));
          FMassEntityManager::ForEachSharedFragmentConditional<FTestSharedFragment_Int>
                    (local_150,local_158,local_160);
          local_2e8 = &local_278;
          TCheckedPointerIterator<int,int,0>::TCheckedPointerIterator<int,int,0>
                    (&local_240,&local_278.ArrayNum,(int *)local_278.AllocatorInstance.Data);
          local_138 = (local_2e8->AllocatorInstance).Data;
          local_29c = local_2e8->ArrayNum;
          local_130 = local_138;
          TCheckedPointerIterator<int,int,0>::TCheckedPointerIterator<int,int,0>
                    (&local_78,&local_2e8->ArrayNum,(int *)(local_138 + (longlong)local_29c * 4));
          while( true ) {
            if (*local_240.CurrentNum != local_240.InitialNum) {
              pcVar4 = local_32f + 4;
              for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
                *pcVar4 = '\0';
                pcVar4 = pcVar4 + 1;
              }
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_32f + 4);
            }
            local_32f[5] = local_240.Ptr != local_78.Ptr;
            local_2fc = (uint)(byte)local_32f[5];
            if (!(bool)local_32f[5]) break;
            local_128 = local_240.Ptr;
            local_298[4] = *local_240.Ptr;
            local_120 = FAITestBase::GetTestRunner((FAITestBase *)this);
            bVar1 = 10 < local_298[4];
            ::FString::FString(&local_c0,"Only the values matching the condition get processed");
            bVar1 = FAutomationTestBase::TestTrue(local_120,&local_c0,bVar1);
            local_32f[6] = !bVar1;
            local_2f8 = (uint)(byte)local_32f[6];
            ::FString::~FString(&local_c0);
            if (local_32f[6] != '\0') {
              UE::AITestSuite::ConditionallyBreakOnTestFail();
              local_32f[7] = 0;
              TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                        (&local_278);
              TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                        (&local_2c0);
              TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                        (&local_2e0);
              TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                        (&local_320);
              return (bool)local_32f[7];
            }
            local_240.Ptr = local_240.Ptr + 1;
          }
          local_32f[8] = 1;
          TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                    (&local_278);
          TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                    (&local_2c0);
          TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                    (&local_2e0);
          TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                    (&local_320);
          return (bool)local_32f[8];
        }
        local_190 = local_258.Ptr;
        local_2a0 = *local_258.Ptr;
        local_188 = FAITestBase::GetTestRunner((FAITestBase *)this);
        iVar2 = TArray<int,TSizedDefaultAllocator<32>_>::Find(&local_2c0,&local_2a0);
        ::FString::FString(&local_d0,"Read values matches values set in the first round");
        bVar1 = FAutomationTestBase::TestTrue(local_188,&local_d0,iVar2 != -1);
        local_32f[2] = !bVar1;
        local_300 = (uint)(byte)local_32f[2];
        ::FString::~FString(&local_d0);
        if (local_32f[2] != '\0') break;
        local_258.Ptr = local_258.Ptr + 1;
      }
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_32f[3] = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_2c0);
      TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_2e0);
      TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_320);
    }
  }
  return (bool)local_32f[3];
}

