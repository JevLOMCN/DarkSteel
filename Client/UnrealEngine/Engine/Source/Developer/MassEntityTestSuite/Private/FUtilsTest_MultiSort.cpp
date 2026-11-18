// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// FUtilsTest_MultiSort @ 1470f5800

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FUtilsTest_MultiSort * __thiscall
FMassUtilsTest::FUtilsTest_MultiSort::FUtilsTest_MultiSort(FUtilsTest_MultiSort *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FUtilsTest_MultiSort_FMassUtilsTest__6B_;
  return this;
}

// operator() @ 1470fe740

bool __thiscall
`FMassUtilsTest::FUtilsTest_MultiSort::InstantTest'::__l2::<lambda_1>::operator()
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

// operator() @ 147101150

void __thiscall
`FMassUtilsTest::FUtilsTest_MultiSort::InstantTest'::__l2::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  plVar1 = *(longlong **)this;
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
  plVar1 = *(longlong **)this;
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
  Swap<float>((float *)(*plVar1 + (longlong)param_1 * 4),(float *)(lVar2 + (longlong)param_2 * 4));
  plVar1 = *(longlong **)((longlong)this + 8);
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
  plVar1 = *(longlong **)((longlong)this + 8);
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
  Swap<bool>((bool *)(*plVar1 + (longlong)param_1),(bool *)(lVar2 + param_2));
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
  return;
}

// InstantTest @ 147190e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FMassUtilsTest::FUtilsTest_MultiSort::InstantTest(FUtilsTest_MultiSort *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<float> *piVar4;
  initializer_list<bool> *piVar5;
  initializer_list<signed_char> *piVar6;
  longlong lVar7;
  initializer_list<float> *piVar8;
  initializer_list<bool> *piVar9;
  initializer_list<signed_char> *piVar10;
  undefined1 auStack_288 [32];
  longlong local_268;
  longlong local_260;
  int local_258;
  FScriptContainerElement local_250;
  FScriptContainerElement local_248;
  bool local_247;
  FScriptContainerElement local_246;
  char local_245;
  undefined1 local_244;
  FScriptContainerElement local_243;
  char local_242;
  undefined1 local_241;
  undefined1 local_240;
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_238;
  uint local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  TArray<float,TSizedDefaultAllocator<32>_> local_200;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  float local_1e4;
  float local_1e0;
  TArray<bool,TSizedDefaultAllocator<32>_> local_1d8;
  <lambda_2> *local_1c8;
  <lambda_1> *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  FScriptContainerElement *local_1b0;
  FScriptContainerElement *local_1a8;
  FScriptContainerElement *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  FScriptContainerElement *local_190;
  FScriptContainerElement *local_188;
  FScriptContainerElement *local_180;
  FAutomationTestBase *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  FScriptContainerElement *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  FAutomationTestBase *local_130;
  <lambda_2> *local_128;
  <lambda_1> local_120;
  <lambda_1> *local_118;
  FString local_110;
  FString local_100;
  <lambda_2> local_f0;
  initializer_list<float> local_d8;
  initializer_list<bool> local_c8;
  initializer_list<signed_char> local_b8;
  initializer_list<float> local_a8;
  initializer_list<bool> local_98;
  initializer_list<signed_char> local_88;
  schar local_78 [16];
  bool local_68 [16];
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_288;
  local_58 = __real_3f800000;
  local_54 = __real_40000000;
  local_50 = __real_40400000;
  local_4c = __real_40800000;
  local_48 = __real_40a00000;
  local_44 = __real_40c00000;
  local_40 = __real_40e00000;
  local_3c = __real_41000000;
  local_38 = __real_41100000;
  local_34 = __real_41200000;
  piVar4 = std::initializer_list<float>::initializer_list<float>(&local_a8,&local_58,local_30);
  piVar8 = &local_d8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&piVar8->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<float> *)((longlong)&piVar4->_First + 1);
    piVar8 = (initializer_list<float> *)((longlong)&piVar8->_First + 1);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_200,&local_d8);
  local_68[0] = true;
  local_68[1] = false;
  local_68[2] = true;
  local_68[3] = false;
  local_68[4] = true;
  local_68[5] = false;
  local_68[6] = true;
  local_68[7] = false;
  local_68[8] = true;
  local_68[9] = false;
  piVar5 = std::initializer_list<bool>::initializer_list<bool>(&local_98,local_68,local_68 + 10);
  piVar9 = &local_c8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&piVar9->_First = *(undefined1 *)&piVar5->_First;
    piVar5 = (initializer_list<bool> *)((longlong)&piVar5->_First + 1);
    piVar9 = (initializer_list<bool> *)((longlong)&piVar9->_First + 1);
  }
  TArray<bool,TSizedDefaultAllocator<32>_>::TArray<bool,TSizedDefaultAllocator<32>_>
            (&local_1d8,&local_c8);
  local_78[0] = -1;
  local_78[1] = 2;
  local_78[2] = 0xfd;
  local_78[3] = 4;
  local_78[4] = 0xfb;
  local_78[5] = 6;
  local_78[6] = 0xf9;
  local_78[7] = 8;
  local_78[8] = 0xf7;
  local_78[9] = 10;
  piVar6 = std::initializer_list<signed_char>::initializer_list<signed_char>
                     (&local_88,local_78,local_78 + 10);
  piVar10 = &local_b8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&piVar10->_First = *(undefined1 *)&piVar6->_First;
    piVar6 = (initializer_list<signed_char> *)((longlong)&piVar6->_First + 1);
    piVar10 = (initializer_list<signed_char> *)((longlong)&piVar10->_First + 1);
  }
  TArray<signed_char,TSizedDefaultAllocator<32>_>::TArray<signed_char,TSizedDefaultAllocator<32>_>
            (&local_238,&local_b8);
  local_f0.ValuesF = &local_200;
  local_f0.ValuesB = &local_1d8;
  local_f0.ValuesU = &local_238;
  local_1c8 = &local_f0;
  local_120.ValuesU = &local_238;
  local_1c0 = &local_120;
  local_1f0 = local_238.ArrayNum;
  local_1ec = local_238.ArrayNum;
  local_128 = local_1c8;
  local_118 = local_1c0;
  UE::Mass::Utils::
  AbstractSort<_FMassUtilsTest::FUtilsTest_MultiSort::InstantTest_::__l2::<lambda_1>,_FMassUtilsTest::FUtilsTest_MultiSort::InstantTest_::__l2::<lambda_2>_>
            (local_238.ArrayNum,local_1c0,local_1c8);
  local_258 = 0;
  while( true ) {
    local_1e8 = local_200.ArrayNum;
    if (local_200.ArrayNum <= local_258) {
      local_240 = 1;
      TArray<signed_char,TSizedDefaultAllocator<32>_>::
      ~TArray<signed_char,TSizedDefaultAllocator<32>_>(&local_238);
      TArray<bool,TSizedDefaultAllocator<32>_>::~TArray<bool,TSizedDefaultAllocator<32>_>
                (&local_1d8);
      TArray<float,TSizedDefaultAllocator<32>_>::~TArray<float,TSizedDefaultAllocator<32>_>
                (&local_200);
      return (bool)local_240;
    }
    local_178 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_224 = (uint)(-1 < local_258);
    local_228 = (uint)(local_258 < local_200.ArrayNum);
    if (-1 >= local_258 || local_258 >= local_200.ArrayNum) {
      local_1b8 = 0;
      local_1b4 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_260 = (longlong)local_200.ArrayNum;
      local_268 = (longlong)local_258;
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
    local_1b0 = local_200.AllocatorInstance.Data;
    local_1a8 = local_200.AllocatorInstance.Data;
    local_1a0 = local_200.AllocatorInstance.Data + (longlong)local_258 * 4;
    local_1e4 = *(float *)local_1a0;
    local_21c = (uint)(-1 < local_258);
    local_220 = (uint)(local_258 < local_238.ArrayNum);
    if (-1 >= local_258 || local_258 >= local_238.ArrayNum) {
      local_198 = 0;
      local_194 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_260 = (longlong)local_238.ArrayNum;
      local_268 = (longlong)local_258;
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
    local_190 = local_238.AllocatorInstance.Data;
    local_188 = local_238.AllocatorInstance.Data;
    local_180 = local_238.AllocatorInstance.Data + local_258;
    local_250 = *local_180;
    local_248 = local_250;
    if ((char)local_250 < '\0') {
      local_248 = (FScriptContainerElement)-(char)local_250;
    }
    local_246 = local_248;
    local_1e0 = (float)(int)(char)local_248;
    ::FString::FString(&local_110,
                       L"Element in ValuesU should represent the absolute value of the element in ValuesF"
                      );
    bVar2 = FTestHelpers::TestEqual<float,float>(&local_110,local_1e0,local_1e4,local_178);
    local_245 = !bVar2;
    local_218 = (uint)(byte)local_245;
    ::FString::~FString(&local_110);
    if (local_245 != '\0') {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_244 = 0;
      TArray<signed_char,TSizedDefaultAllocator<32>_>::
      ~TArray<signed_char,TSizedDefaultAllocator<32>_>(&local_238);
      TArray<bool,TSizedDefaultAllocator<32>_>::~TArray<bool,TSizedDefaultAllocator<32>_>
                (&local_1d8);
      TArray<float,TSizedDefaultAllocator<32>_>::~TArray<float,TSizedDefaultAllocator<32>_>
                (&local_200);
      return (bool)local_244;
    }
    local_130 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_210 = (uint)(-1 < local_258);
    local_214 = (uint)(local_258 < local_1d8.ArrayNum);
    if (-1 >= local_258 || local_258 >= local_1d8.ArrayNum) {
      local_170 = 0;
      local_16c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_260 = (longlong)local_1d8.ArrayNum;
      local_268 = (longlong)local_258;
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
    local_168 = local_1d8.AllocatorInstance.Data;
    local_160 = local_1d8.AllocatorInstance.Data;
    local_158 = local_1d8.AllocatorInstance.Data + local_258;
    local_243 = *local_158;
    local_208 = (uint)(-1 < local_258);
    local_20c = (uint)(local_258 < local_238.ArrayNum);
    if (-1 >= local_258 || local_258 >= local_238.ArrayNum) {
      local_150 = 0;
      local_14c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_260 = (longlong)local_238.ArrayNum;
      local_268 = (longlong)local_258;
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
    local_148 = local_238.AllocatorInstance.Data;
    local_140 = local_238.AllocatorInstance.Data;
    local_138 = local_238.AllocatorInstance.Data + local_258;
    local_247 = (char)*local_138 < '\0';
    ::FString::FString(&local_100,
                       L"Element in ValuesB should represent the sign of the element in ValuesU");
    bVar2 = FTestHelpers::TestEqual<bool,bool>(&local_100,local_247,(bool)local_243,local_130);
    local_242 = !bVar2;
    local_204 = (uint)(byte)local_242;
    ::FString::~FString(&local_100);
    if (local_242 != '\0') break;
    local_258 = local_258 + 1;
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  local_241 = 0;
  TArray<signed_char,TSizedDefaultAllocator<32>_>::~TArray<signed_char,TSizedDefaultAllocator<32>_>
            (&local_238);
  TArray<bool,TSizedDefaultAllocator<32>_>::~TArray<bool,TSizedDefaultAllocator<32>_>(&local_1d8);
  TArray<float,TSizedDefaultAllocator<32>_>::~TArray<float,TSizedDefaultAllocator<32>_>(&local_200);
  return (bool)local_241;
}

