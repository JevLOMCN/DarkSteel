// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 5

// FConstSharedFragment_ForEach @ 1470f3360

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FConstSharedFragment_ForEach * __thiscall
FMassEntityTest::FConstSharedFragment_ForEach::FConstSharedFragment_ForEach
          (FConstSharedFragment_ForEach *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FConstSharedFragment_ForEach_FMassEntityTest__6B_;
  return this;
}

// operator() @ 1470fce20

void __thiscall
`FMassEntityTest::FConstSharedFragment_ForEach::InstantTest'::__l2::<lambda_1>::operator()
          (void *this,FTestConstSharedFragment_Int *param_1)

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

// operator() @ 1471008f0

bool __thiscall
`FMassEntityTest::FConstSharedFragment_ForEach::InstantTest'::__l2::<lambda_2>::operator()
          (void *this,FTestConstSharedFragment_Int *param_1)

{
  return 10 < param_1->Value;
}

// operator() @ 147103580

void __thiscall
`FMassEntityTest::FConstSharedFragment_ForEach::InstantTest'::__l2::<lambda_3>::operator()
          (void *this,FTestConstSharedFragment_Int *param_1)

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

// InstantTest @ 147149430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FConstSharedFragment_ForEach::InstantTest(FConstSharedFragment_ForEach *this)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 auStackY_258 [32];
  char local_222 [5];
  <lambda_2> local_21d;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  TArray<int,TSizedDefaultAllocator<32>_> *local_208;
  TArray<int,TSizedDefaultAllocator<32>_> local_200;
  int *local_1f0;
  int *local_1e8;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8 [4];
  TArray<int,TSizedDefaultAllocator<32>_> local_1b8;
  int *local_1a8;
  int *local_1a0;
  TCheckedPointerIterator<int,int,0> local_198;
  ulonglong *local_180;
  ulonglong *local_178;
  FMassEntityManager *local_170;
  <lambda_1> local_168;
  <lambda_1> *local_160;
  TFunctionRef<void___cdecl(FTestConstSharedFragment_Int_const_&)> *local_158;
  TFunctionRef<void___cdecl(FTestConstSharedFragment_Int_const_&)> *local_150;
  FMassEntityManager *local_148;
  FAutomationTestBase *local_140;
  int *local_138;
  ulonglong *local_130;
  ulonglong *local_128;
  FAutomationTestBase *local_120;
  <lambda_3> local_118;
  <lambda_3> *local_110;
  TFunctionRef<void___cdecl(FTestConstSharedFragment_Int_const_&)> *local_108;
  TFunctionRef<bool___cdecl(FTestConstSharedFragment_Int_const_&)> *local_100;
  TFunctionRef<void___cdecl(FTestConstSharedFragment_Int_const_&)> *local_f8;
  TFunctionRef<bool___cdecl(FTestConstSharedFragment_Int_const_&)> *local_f0;
  FMassEntityManager *local_e8;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  int *local_c0;
  FAutomationTestBase *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  int *local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  TCheckedPointerIterator<int,int,0> local_70;
  TFunctionRef<void___cdecl(FTestConstSharedFragment_Int_const_&)> local_58;
  TFunctionRef<void___cdecl(FTestConstSharedFragment_Int_const_&)> local_48;
  TFunctionRef<bool___cdecl(FTestConstSharedFragment_Int_const_&)> local_38;
  TStaticArray<int,4,4294967295> local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_b0 = 4;
  local_1c8[3] = 9;
  local_1c8[2] = 1;
  local_1c8[1] = 0xc;
  local_1c8[0] = 0xd;
  TStaticArray<int,4,4294967295>::TStaticArray<int,4,4294967295><int,int,int,int>
            (&local_28,local_1c8 + 3,local_1c8 + 2,local_1c8 + 1,local_1c8);
  local_180 = local_18;
  local_1f0 = local_28.Elements;
  local_1a0 = local_1f0;
  local_178 = local_180;
  local_a8 = local_1f0;
  for (; (ulonglong *)local_1f0 != local_178; local_1f0 = local_1f0 + 1) {
    local_1e0 = *local_1f0;
    local_170 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    FMassEntityManager::GetOrCreateConstSharedFragment<FTestConstSharedFragment_Int,int_&>
              (local_170,&local_1e0);
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_200.AllocatorInstance);
  local_200.ArrayNum = 0;
  local_200.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_200.AllocatorInstance);
  local_148 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_158 = &local_58;
  local_168.Results = &local_200;
  local_160 = &local_168;
  local_150 = TFunctionRef<void___cdecl(FTestConstSharedFragment_Int_const_&)>::
              TFunctionRef<void___cdecl(FTestConstSharedFragment_Int_const_&)><_FMassEntityTest::FConstSharedFragment_ForEach::InstantTest_::__l2::<lambda_1>_>
                        (local_158,local_160);
  FMassEntityManager::ForEachConstSharedFragment<FTestConstSharedFragment_Int>(local_148,local_150);
  local_140 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_1dc = local_200.ArrayNum;
  local_1d8 = local_200.ArrayNum;
  ::FString::FString(&local_80,"Number of processed shared fragments");
  bVar1 = FTestHelpers::TestEqual<int,int>(&local_80,local_1d8,4,local_140);
  local_21c = (uint)!bVar1;
  ::FString::~FString(&local_80);
  if (!bVar1) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_200);
    local_222[3] = 0;
  }
  else {
    local_130 = local_18;
    local_1e8 = local_28.Elements;
    local_1a8 = local_1e8;
    local_138 = local_1e8;
    local_128 = local_130;
    for (; (ulonglong *)local_1e8 != local_128; local_1e8 = local_1e8 + 1) {
      local_1d4 = *local_1e8;
      local_120 = FAITestBase::GetTestRunner((FAITestBase *)this);
      iVar2 = TArray<int,TSizedDefaultAllocator<32>_>::Find(&local_200,&local_1d4);
      ::FString::FString(&local_a0,"Read values matches init values");
      bVar1 = FAutomationTestBase::TestTrue(local_120,&local_a0,iVar2 != -1);
      local_218 = (uint)!bVar1;
      ::FString::~FString(&local_a0);
      if (!bVar1) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                  (&local_200);
        return false;
      }
    }
    local_ac = 10;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_1b8.AllocatorInstance);
    local_1b8.ArrayNum = 0;
    local_1b8.ArrayMax =
         TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                   (&local_1b8.AllocatorInstance);
    local_e8 = TSharedPtr<FMassEntityManager,1>::operator->
                         ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_108 = &local_48;
    local_118.ConditionalResults = &local_1b8;
    local_110 = &local_118;
    local_f8 = TFunctionRef<void___cdecl(FTestConstSharedFragment_Int_const_&)>::
               TFunctionRef<void___cdecl(FTestConstSharedFragment_Int_const_&)><_FMassEntityTest::FConstSharedFragment_ForEach::InstantTest_::__l2::<lambda_3>_>
                         (local_108,local_110);
    local_100 = &local_38;
    local_f0 = TFunctionRef<bool___cdecl(FTestConstSharedFragment_Int_const_&)>::
               TFunctionRef<bool___cdecl(FTestConstSharedFragment_Int_const_&)><_FMassEntityTest::FConstSharedFragment_ForEach::InstantTest_::__l2::<lambda_2>_>
                         (local_100,(<lambda_2> *)(local_222 + 5));
    FMassEntityManager::ForEachConstSharedFragmentConditional<FTestConstSharedFragment_Int>
              (local_e8,local_f0,local_f8);
    local_208 = &local_1b8;
    TCheckedPointerIterator<int,int,0>::TCheckedPointerIterator<int,int,0>
              (&local_198,&local_1b8.ArrayNum,(int *)local_1b8.AllocatorInstance.Data);
    local_d0 = (local_208->AllocatorInstance).Data;
    local_1d0 = local_208->ArrayNum;
    local_c8 = local_d0;
    TCheckedPointerIterator<int,int,0>::TCheckedPointerIterator<int,int,0>
              (&local_70,&local_208->ArrayNum,(int *)(local_d0 + (longlong)local_1d0 * 4));
    while( true ) {
      if (*local_198.CurrentNum != local_198.InitialNum) {
        pcVar4 = local_222;
        for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
          *pcVar4 = '\0';
          pcVar4 = pcVar4 + 1;
        }
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_222);
      }
      local_222[1] = local_198.Ptr != local_70.Ptr;
      local_214 = (uint)(byte)local_222[1];
      if (!(bool)local_222[1]) {
        local_222[4] = 1;
        TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                  (&local_1b8);
        TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                  (&local_200);
        return (bool)local_222[4];
      }
      local_c0 = local_198.Ptr;
      local_1cc = *local_198.Ptr;
      local_b8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      bVar1 = 10 < local_1cc;
      ::FString::FString(&local_90,"Only the values matching the condition get processed");
      bVar1 = FAutomationTestBase::TestTrue(local_b8,&local_90,bVar1);
      local_222[2] = !bVar1;
      local_210 = (uint)(byte)local_222[2];
      ::FString::~FString(&local_90);
      if (local_222[2] != '\0') break;
      local_198.Ptr = local_198.Ptr + 1;
    }
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_222[3] = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_1b8);
    TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_200);
  }
  return (bool)local_222[3];
}

