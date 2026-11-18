// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// FUtilsTest_MultiSort_Payload @ 1470f58e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FUtilsTest_MultiSort_Payload * __thiscall
FMassUtilsTest::FUtilsTest_MultiSort_Payload::FUtilsTest_MultiSort_Payload
          (FUtilsTest_MultiSort_Payload *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FUtilsTest_MultiSort_Payload_FMassUtilsTest__6B_;
  return this;
}

// operator() @ 1470febc0

bool __thiscall
`FMassUtilsTest::FUtilsTest_MultiSort_Payload::InstantTest'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  
  plVar1 = *(longlong **)this;
  plVar2 = *(longlong **)this;
  if (param_2 < 0 || (int)plVar2[1] <= param_2) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  lVar3 = *plVar2;
  if (param_1 < 0 || (int)plVar1[1] <= param_1) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  return *(char *)(*plVar1 + (longlong)param_1) < *(char *)(lVar3 + param_2);
}

// operator() @ 147101b70

void __thiscall
`FMassUtilsTest::FUtilsTest_MultiSort_Payload::InstantTest'::__l2::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  plVar1 = *(longlong **)((longlong)this + 0x10);
  if (param_2 < 0 || (int)plVar1[1] <= param_2) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *plVar1;
  plVar1 = *(longlong **)((longlong)this + 0x10);
  if (param_1 < 0 || (int)plVar1[1] <= param_1) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Swap<signed_char>((schar *)(*plVar1 + (longlong)param_1),(schar *)(lVar2 + param_2));
  FMassGenericPayloadView::Swap(this,param_1,param_2);
  return;
}

// InstantTest @ 147191f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMassUtilsTest::FUtilsTest_MultiSort_Payload::InstantTest(FUtilsTest_MultiSort_Payload *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<FTestFragment_Float> *piVar4;
  initializer_list<FTestFragment_Bool> *piVar5;
  initializer_list<signed_char> *piVar6;
  initializer_list<FStructArrayView> *piVar7;
  FTestFragment_Float *pFVar8;
  FTestFragment_Bool *pFVar9;
  longlong lVar10;
  FStructArrayView *pFVar11;
  FMassGenericPayloadView *pFVar12;
  initializer_list<FTestFragment_Float> *piVar13;
  initializer_list<FTestFragment_Bool> *piVar14;
  initializer_list<signed_char> *piVar15;
  FStructArrayView *pFVar16;
  undefined1 *puVar17;
  initializer_list<FStructArrayView> *piVar18;
  <lambda_2> *p<Var19;
  undefined1 auStack_2d8 [32];
  longlong local_2b8;
  longlong local_2b0;
  FScriptContainerElement local_2a8;
  int local_2a0;
  FScriptContainerElement local_29c;
  bool local_29b;
  FScriptContainerElement local_29a;
  char local_299;
  undefined1 local_298;
  bool local_297;
  char local_296;
  undefined1 local_295;
  undefined1 local_294;
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_290;
  uint local_280;
  uint local_27c;
  uint local_278;
  uint local_274;
  uint local_270;
  uint local_26c;
  int local_268;
  int local_264;
  int local_260;
  float local_25c;
  float local_258;
  TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_> local_250;
  TArray<FStructArrayView,TSizedDefaultAllocator<32>_> local_240;
  TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_> local_230;
  <lambda_1> *local_220;
  undefined4 local_218;
  undefined4 local_214;
  FScriptContainerElement *local_210;
  FScriptContainerElement *local_208;
  FScriptContainerElement *local_200;
  FAutomationTestBase *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  FScriptContainerElement *local_1e8;
  FScriptContainerElement *local_1e0;
  FScriptContainerElement *local_1d8;
  FAutomationTestBase *local_1d0;
  <lambda_2> *local_1c8;
  <lambda_1> local_1c0;
  <lambda_1> *local_1b8;
  <lambda_2> *local_1b0;
  FString local_1a8;
  FString local_198;
  initializer_list<FTestFragment_Float> local_188;
  initializer_list<FTestFragment_Bool> local_178;
  initializer_list<signed_char> local_168;
  initializer_list<FStructArrayView> local_158;
  FMassGenericPayloadView local_148;
  <lambda_2> local_138;
  FStructArrayView local_120;
  FStructArrayView local_108;
  FStructArrayView local_f0;
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  initializer_list<signed_char> local_a8;
  initializer_list<FStructArrayView> local_98;
  initializer_list<FTestFragment_Bool> local_88;
  FTestFragment_Bool local_78;
  FTestFragment_Bool local_77;
  FTestFragment_Bool local_76;
  FTestFragment_Bool local_75;
  FTestFragment_Bool local_74;
  FTestFragment_Bool local_73;
  FTestFragment_Bool local_72;
  FTestFragment_Bool local_71;
  FTestFragment_Bool local_70;
  FTestFragment_Bool local_6f;
  FTestFragment_Bool local_6e [6];
  schar local_68 [16];
  FTestFragment_Float local_58;
  FTestFragment_Float local_54;
  FTestFragment_Float local_50;
  FTestFragment_Float local_4c;
  FTestFragment_Float local_48;
  FTestFragment_Float local_44;
  FTestFragment_Float local_40;
  FTestFragment_Float local_3c;
  FTestFragment_Float local_38;
  FTestFragment_Float local_34;
  FTestFragment_Float local_30 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  FTestFragment_Float::FTestFragment_Float(&local_58,__real_3f800000);
  FTestFragment_Float::FTestFragment_Float(&local_54,__real_40000000);
  FTestFragment_Float::FTestFragment_Float(&local_50,__real_40400000);
  FTestFragment_Float::FTestFragment_Float(&local_4c,__real_40800000);
  FTestFragment_Float::FTestFragment_Float(&local_48,__real_40a00000);
  FTestFragment_Float::FTestFragment_Float(&local_44,__real_40c00000);
  FTestFragment_Float::FTestFragment_Float(&local_40,__real_40e00000);
  FTestFragment_Float::FTestFragment_Float(&local_3c,__real_41000000);
  FTestFragment_Float::FTestFragment_Float(&local_38,__real_41100000);
  FTestFragment_Float::FTestFragment_Float(&local_34,__real_41200000);
  piVar4 = std::initializer_list<FTestFragment_Float>::initializer_list<FTestFragment_Float>
                     ((initializer_list<FTestFragment_Float> *)(local_c0 + 8),&local_58,local_30);
  piVar13 = &local_188;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)&piVar13->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<FTestFragment_Float> *)((longlong)&piVar4->_First + 1);
    piVar13 = (initializer_list<FTestFragment_Float> *)((longlong)&piVar13->_First + 1);
  }
  TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>::
  TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>(&local_250,&local_188);
  FTestFragment_Bool::FTestFragment_Bool(&local_78,true);
  FTestFragment_Bool::FTestFragment_Bool(&local_77,false);
  FTestFragment_Bool::FTestFragment_Bool(&local_76,true);
  FTestFragment_Bool::FTestFragment_Bool(&local_75,false);
  FTestFragment_Bool::FTestFragment_Bool(&local_74,true);
  FTestFragment_Bool::FTestFragment_Bool(&local_73,false);
  FTestFragment_Bool::FTestFragment_Bool(&local_72,true);
  FTestFragment_Bool::FTestFragment_Bool(&local_71,false);
  FTestFragment_Bool::FTestFragment_Bool(&local_70,true);
  FTestFragment_Bool::FTestFragment_Bool(&local_6f,false);
  piVar5 = std::initializer_list<FTestFragment_Bool>::initializer_list<FTestFragment_Bool>
                     (&local_88,&local_78,local_6e);
  piVar14 = &local_178;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)&piVar14->_First = *(undefined1 *)&piVar5->_First;
    piVar5 = (initializer_list<FTestFragment_Bool> *)((longlong)&piVar5->_First + 1);
    piVar14 = (initializer_list<FTestFragment_Bool> *)((longlong)&piVar14->_First + 1);
  }
  TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>::
  TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>(&local_230,&local_178);
  local_68[0] = -1;
  local_68[1] = 2;
  local_68[2] = 0xfd;
  local_68[3] = 4;
  local_68[4] = 0xfb;
  local_68[5] = 6;
  local_68[6] = 0xf9;
  local_68[7] = 8;
  local_68[8] = 0xf7;
  local_68[9] = 10;
  piVar6 = std::initializer_list<signed_char>::initializer_list<signed_char>
                     (&local_a8,local_68,local_68 + 10);
  piVar15 = &local_168;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)&piVar15->_First = *(undefined1 *)&piVar6->_First;
    piVar6 = (initializer_list<signed_char> *)((longlong)&piVar6->_First + 1);
    piVar15 = (initializer_list<signed_char> *)((longlong)&piVar15->_First + 1);
  }
  TArray<signed_char,TSizedDefaultAllocator<32>_>::TArray<signed_char,TSizedDefaultAllocator<32>_>
            (&local_290,&local_168);
  FStructArrayView::FStructArrayView<FTestFragment_Float>(&local_120,&local_250);
  FStructArrayView::FStructArrayView<FTestFragment_Bool>(&local_108,&local_230);
  pFVar11 = &local_120;
  pFVar16 = &local_f0;
  for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)&pFVar16->DataPtr = *(undefined1 *)&pFVar11->DataPtr;
    pFVar11 = (FStructArrayView *)((longlong)&pFVar11->DataPtr + 1);
    pFVar16 = (FStructArrayView *)((longlong)&pFVar16->DataPtr + 1);
  }
  pFVar11 = &local_108;
  puVar17 = local_d8;
  for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar17 = *(undefined1 *)&pFVar11->DataPtr;
    pFVar11 = (FStructArrayView *)((longlong)&pFVar11->DataPtr + 1);
    puVar17 = puVar17 + 1;
  }
  piVar7 = std::initializer_list<FStructArrayView>::initializer_list<FStructArrayView>
                     (&local_98,&local_f0,(FStructArrayView *)local_c0);
  piVar18 = &local_158;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)&piVar18->_First = *(undefined1 *)&piVar7->_First;
    piVar7 = (initializer_list<FStructArrayView> *)((longlong)&piVar7->_First + 1);
    piVar18 = (initializer_list<FStructArrayView> *)((longlong)&piVar18->_First + 1);
  }
  TArray<FStructArrayView,TSizedDefaultAllocator<32>_>::
  TArray<FStructArrayView,TSizedDefaultAllocator<32>_>(&local_240,&local_158);
  FMassGenericPayloadView::FMassGenericPayloadView(&local_148,&local_240);
  pFVar12 = &local_148;
  p<Var19 = &local_138;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)&(p<Var19->Payload).Content.DataPtr = *(undefined1 *)&(pFVar12->Content).DataPtr;
    pFVar12 = (FMassGenericPayloadView *)((longlong)&(pFVar12->Content).DataPtr + 1);
    p<Var19 = (<lambda_2> *)((longlong)&(p<Var19->Payload).Content.DataPtr + 1);
  }
  local_138.ValuesU = &local_290;
  local_1c8 = &local_138;
  local_1c0.ValuesU = &local_290;
  local_220 = &local_1c0;
  local_268 = local_290.ArrayNum;
  local_264 = local_290.ArrayNum;
  local_1b8 = local_220;
  local_1b0 = local_1c8;
  UE::Mass::Utils::
  AbstractSort<_FMassUtilsTest::FUtilsTest_MultiSort_Payload::InstantTest_::__l2::<lambda_1>,_FMassUtilsTest::FUtilsTest_MultiSort_Payload::InstantTest_::__l2::<lambda_2>_>
            (local_290.ArrayNum,local_220,local_1c8);
  local_2a0 = 0;
  while( true ) {
    local_260 = local_250.ArrayNum;
    if (local_250.ArrayNum <= local_2a0) {
      local_294 = 1;
      TArray<FStructArrayView,TSizedDefaultAllocator<32>_>::
      ~TArray<FStructArrayView,TSizedDefaultAllocator<32>_>(&local_240);
      TArray<signed_char,TSizedDefaultAllocator<32>_>::
      ~TArray<signed_char,TSizedDefaultAllocator<32>_>(&local_290);
      TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>::
      ~TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>(&local_230);
      TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>::
      ~TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>(&local_250);
      return (bool)local_294;
    }
    local_1f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pFVar8 = FStructArrayView::GetAt<FTestFragment_Float_const_>(&local_120,local_2a0);
    local_25c = pFVar8->Value;
    local_27c = (uint)(-1 < local_2a0);
    local_280 = (uint)(local_2a0 < local_290.ArrayNum);
    if (-1 >= local_2a0 || local_2a0 >= local_290.ArrayNum) {
      local_218 = 0;
      local_214 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_2b0 = (longlong)local_290.ArrayNum;
      local_2b8 = (longlong)local_2a0;
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
    local_210 = local_290.AllocatorInstance.Data;
    local_208 = local_290.AllocatorInstance.Data;
    local_200 = local_290.AllocatorInstance.Data + local_2a0;
    local_2a8 = *local_200;
    local_29c = local_2a8;
    if ((char)local_2a8 < '\0') {
      local_29c = (FScriptContainerElement)-(char)local_2a8;
    }
    local_29a = local_29c;
    local_258 = (float)(int)(char)local_29c;
    ::FString::FString(&local_1a8,
                       L"Element in ValuesU should represent the absolute value of the element in ViewF"
                      );
    bVar2 = FTestHelpers::TestEqual<float,float>(&local_1a8,local_258,local_25c,local_1f8);
    local_299 = !bVar2;
    local_278 = (uint)(byte)local_299;
    ::FString::~FString(&local_1a8);
    if (local_299 != '\0') {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_298 = 0;
      TArray<FStructArrayView,TSizedDefaultAllocator<32>_>::
      ~TArray<FStructArrayView,TSizedDefaultAllocator<32>_>(&local_240);
      TArray<signed_char,TSizedDefaultAllocator<32>_>::
      ~TArray<signed_char,TSizedDefaultAllocator<32>_>(&local_290);
      TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>::
      ~TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>(&local_230);
      TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>::
      ~TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>(&local_250);
      return (bool)local_298;
    }
    local_1d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pFVar9 = FStructArrayView::GetAt<FTestFragment_Bool_const_>(&local_108,local_2a0);
    local_297 = pFVar9->bValue;
    local_270 = (uint)(-1 < local_2a0);
    local_274 = (uint)(local_2a0 < local_290.ArrayNum);
    if (-1 >= local_2a0 || local_2a0 >= local_290.ArrayNum) {
      local_1f0 = 0;
      local_1ec = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_2b0 = (longlong)local_290.ArrayNum;
      local_2b8 = (longlong)local_2a0;
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
    local_1e8 = local_290.AllocatorInstance.Data;
    local_1e0 = local_290.AllocatorInstance.Data;
    local_1d8 = local_290.AllocatorInstance.Data + local_2a0;
    local_29b = (char)*local_1d8 < '\0';
    ::FString::FString(&local_198,
                       L"Element in ViewB should represent the sign of the element in ValuesU");
    bVar2 = FTestHelpers::TestEqual<bool,bool>(&local_198,local_29b,local_297,local_1d0);
    local_296 = !bVar2;
    local_26c = (uint)(byte)local_296;
    ::FString::~FString(&local_198);
    if (local_296 != '\0') break;
    local_2a0 = local_2a0 + 1;
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  local_295 = 0;
  TArray<FStructArrayView,TSizedDefaultAllocator<32>_>::
  ~TArray<FStructArrayView,TSizedDefaultAllocator<32>_>(&local_240);
  TArray<signed_char,TSizedDefaultAllocator<32>_>::~TArray<signed_char,TSizedDefaultAllocator<32>_>
            (&local_290);
  TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>::
  ~TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>(&local_230);
  TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>::
  ~TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>(&local_250);
  return (bool)local_295;
}

