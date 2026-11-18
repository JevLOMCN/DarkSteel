// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// FUtilsTest_MultiSort_GenericArray @ 1470f5870

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FUtilsTest_MultiSort_GenericArray * __thiscall
FMassUtilsTest::FUtilsTest_MultiSort_GenericArray::FUtilsTest_MultiSort_GenericArray
          (FUtilsTest_MultiSort_GenericArray *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FUtilsTest_MultiSort_GenericArray_FMassUtilsTest__6B_;
  return this;
}

// operator() @ 1470fe980

bool __thiscall
`FMassUtilsTest::FUtilsTest_MultiSort_GenericArray::InstantTest'::__l2::<lambda_1>::operator()
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

// operator() @ 147101840

void __thiscall
`FMassUtilsTest::FUtilsTest_MultiSort_GenericArray::InstantTest'::__l2::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  FStructArrayView *pFVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  void *pvVar8;
  
  plVar2 = *(longlong **)((longlong)this + 0x10);
  if (param_2 < 0 || (int)plVar2[1] <= param_2) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *plVar2;
  plVar2 = *(longlong **)((longlong)this + 0x10);
  if (param_1 < 0 || (int)plVar2[1] <= param_1) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  Swap<signed_char>((schar *)(*plVar2 + (longlong)param_1),(schar *)(lVar3 + param_2));
  pFVar4 = *(FStructArrayView **)this;
  uVar1 = pFVar4->ElementSize;
  pvVar7 = FStructArrayView::GetDataAt(pFVar4,param_2);
  pvVar8 = FStructArrayView::GetDataAt(pFVar4,param_1);
  FGenericPlatformMemory::Memswap(pvVar8,pvVar7,(ulonglong)uVar1);
  pFVar4 = *(FStructArrayView **)((longlong)this + 8);
  uVar1 = pFVar4->ElementSize;
  pvVar7 = FStructArrayView::GetDataAt(pFVar4,param_2);
  pvVar8 = FStructArrayView::GetDataAt(pFVar4,param_1);
  FGenericPlatformMemory::Memswap(pvVar8,pvVar7,(ulonglong)uVar1);
  return;
}

// InstantTest @ 1471917b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMassUtilsTest::FUtilsTest_MultiSort_GenericArray::InstantTest
          (FUtilsTest_MultiSort_GenericArray *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<FTestFragment_Float> *piVar4;
  initializer_list<FTestFragment_Bool> *piVar5;
  initializer_list<signed_char> *piVar6;
  FTestFragment_Float *pFVar7;
  FTestFragment_Bool *pFVar8;
  longlong lVar9;
  initializer_list<FTestFragment_Float> *piVar10;
  initializer_list<FTestFragment_Bool> *piVar11;
  initializer_list<signed_char> *piVar12;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  FScriptContainerElement local_238;
  int local_230;
  FScriptContainerElement local_22c;
  bool local_22b;
  FScriptContainerElement local_22a;
  char local_229;
  undefined1 local_228;
  bool local_227;
  char local_226;
  undefined1 local_225;
  undefined1 local_224;
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_220;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  float local_1ec;
  float local_1e8;
  TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_> local_1e0;
  TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_> local_1d0;
  <lambda_2> *local_1c0;
  <lambda_1> *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  FScriptContainerElement *local_1a8;
  FScriptContainerElement *local_1a0;
  FScriptContainerElement *local_198;
  FAutomationTestBase *local_190;
  undefined4 local_188;
  undefined4 local_184;
  FScriptContainerElement *local_180;
  FScriptContainerElement *local_178;
  FScriptContainerElement *local_170;
  FAutomationTestBase *local_168;
  <lambda_2> *local_160;
  <lambda_1> local_158;
  <lambda_1> *local_150;
  FString local_148;
  FString local_138;
  <lambda_2> local_128;
  initializer_list<FTestFragment_Float> local_108;
  initializer_list<FTestFragment_Bool> local_f8;
  initializer_list<signed_char> local_e8;
  FStructArrayView local_d8;
  FStructArrayView local_c0;
  initializer_list<FTestFragment_Float> local_a8;
  initializer_list<FTestFragment_Bool> local_98;
  initializer_list<signed_char> local_88;
  schar local_78 [16];
  FTestFragment_Bool local_68;
  FTestFragment_Bool local_67;
  FTestFragment_Bool local_66;
  FTestFragment_Bool local_65;
  FTestFragment_Bool local_64;
  FTestFragment_Bool local_63;
  FTestFragment_Bool local_62;
  FTestFragment_Bool local_61;
  FTestFragment_Bool local_60;
  FTestFragment_Bool local_5f;
  FTestFragment_Bool local_5e [6];
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
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_268;
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
                     (&local_a8,&local_58,local_30);
  piVar10 = &local_108;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&piVar10->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<FTestFragment_Float> *)((longlong)&piVar4->_First + 1);
    piVar10 = (initializer_list<FTestFragment_Float> *)((longlong)&piVar10->_First + 1);
  }
  TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>::
  TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>(&local_1e0,&local_108);
  FTestFragment_Bool::FTestFragment_Bool(&local_68,true);
  FTestFragment_Bool::FTestFragment_Bool(&local_67,false);
  FTestFragment_Bool::FTestFragment_Bool(&local_66,true);
  FTestFragment_Bool::FTestFragment_Bool(&local_65,false);
  FTestFragment_Bool::FTestFragment_Bool(&local_64,true);
  FTestFragment_Bool::FTestFragment_Bool(&local_63,false);
  FTestFragment_Bool::FTestFragment_Bool(&local_62,true);
  FTestFragment_Bool::FTestFragment_Bool(&local_61,false);
  FTestFragment_Bool::FTestFragment_Bool(&local_60,true);
  FTestFragment_Bool::FTestFragment_Bool(&local_5f,false);
  piVar5 = std::initializer_list<FTestFragment_Bool>::initializer_list<FTestFragment_Bool>
                     (&local_98,&local_68,local_5e);
  piVar11 = &local_f8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&piVar11->_First = *(undefined1 *)&piVar5->_First;
    piVar5 = (initializer_list<FTestFragment_Bool> *)((longlong)&piVar5->_First + 1);
    piVar11 = (initializer_list<FTestFragment_Bool> *)((longlong)&piVar11->_First + 1);
  }
  TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>::
  TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>(&local_1d0,&local_f8);
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
  piVar12 = &local_e8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&piVar12->_First = *(undefined1 *)&piVar6->_First;
    piVar6 = (initializer_list<signed_char> *)((longlong)&piVar6->_First + 1);
    piVar12 = (initializer_list<signed_char> *)((longlong)&piVar12->_First + 1);
  }
  TArray<signed_char,TSizedDefaultAllocator<32>_>::TArray<signed_char,TSizedDefaultAllocator<32>_>
            (&local_220,&local_e8);
  FStructArrayView::FStructArrayView<FTestFragment_Float>(&local_d8,&local_1e0);
  FStructArrayView::FStructArrayView<FTestFragment_Bool>(&local_c0,&local_1d0);
  local_128.ViewF = &local_d8;
  local_128.ViewB = &local_c0;
  local_128.ValuesU = &local_220;
  local_1c0 = &local_128;
  local_158.ValuesU = &local_220;
  local_1b8 = &local_158;
  local_1f8 = local_220.ArrayNum;
  local_1f4 = local_220.ArrayNum;
  local_160 = local_1c0;
  local_150 = local_1b8;
  UE::Mass::Utils::
  AbstractSort<_FMassUtilsTest::FUtilsTest_MultiSort_GenericArray::InstantTest_::__l2::<lambda_1>,_FMassUtilsTest::FUtilsTest_MultiSort_GenericArray::InstantTest_::__l2::<lambda_2>_>
            (local_220.ArrayNum,local_1b8,local_1c0);
  local_230 = 0;
  while( true ) {
    local_1f0 = local_1e0.ArrayNum;
    if (local_1e0.ArrayNum <= local_230) {
      local_224 = 1;
      TArray<signed_char,TSizedDefaultAllocator<32>_>::
      ~TArray<signed_char,TSizedDefaultAllocator<32>_>(&local_220);
      TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>::
      ~TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>(&local_1d0);
      TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>::
      ~TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>(&local_1e0);
      return (bool)local_224;
    }
    local_190 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pFVar7 = FStructArrayView::GetAt<FTestFragment_Float_const_>(&local_d8,local_230);
    local_1ec = pFVar7->Value;
    local_20c = (uint)(-1 < local_230);
    local_210 = (uint)(local_230 < local_220.ArrayNum);
    if (-1 >= local_230 || local_230 >= local_220.ArrayNum) {
      local_1b0 = 0;
      local_1ac = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_240 = (longlong)local_220.ArrayNum;
      local_248 = (longlong)local_230;
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
    local_1a8 = local_220.AllocatorInstance.Data;
    local_1a0 = local_220.AllocatorInstance.Data;
    local_198 = local_220.AllocatorInstance.Data + local_230;
    local_238 = *local_198;
    local_22c = local_238;
    if ((char)local_238 < '\0') {
      local_22c = (FScriptContainerElement)-(char)local_238;
    }
    local_22a = local_22c;
    local_1e8 = (float)(int)(char)local_22c;
    ::FString::FString(&local_148,
                       L"Element in ValuesU should represent the absolute value of the element in ViewF"
                      );
    bVar2 = FTestHelpers::TestEqual<float,float>(&local_148,local_1e8,local_1ec,local_190);
    local_229 = !bVar2;
    local_208 = (uint)(byte)local_229;
    ::FString::~FString(&local_148);
    if (local_229 != '\0') {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_228 = 0;
      TArray<signed_char,TSizedDefaultAllocator<32>_>::
      ~TArray<signed_char,TSizedDefaultAllocator<32>_>(&local_220);
      TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>::
      ~TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>(&local_1d0);
      TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>::
      ~TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>(&local_1e0);
      return (bool)local_228;
    }
    local_168 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pFVar8 = FStructArrayView::GetAt<FTestFragment_Bool_const_>(&local_c0,local_230);
    local_227 = pFVar8->bValue;
    local_200 = (uint)(-1 < local_230);
    local_204 = (uint)(local_230 < local_220.ArrayNum);
    if (-1 >= local_230 || local_230 >= local_220.ArrayNum) {
      local_188 = 0;
      local_184 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_240 = (longlong)local_220.ArrayNum;
      local_248 = (longlong)local_230;
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
    local_180 = local_220.AllocatorInstance.Data;
    local_178 = local_220.AllocatorInstance.Data;
    local_170 = local_220.AllocatorInstance.Data + local_230;
    local_22b = (char)*local_170 < '\0';
    ::FString::FString(&local_138,
                       L"Element in ViewB should represent the sign of the element in ValuesU");
    bVar2 = FTestHelpers::TestEqual<bool,bool>(&local_138,local_22b,local_227,local_168);
    local_226 = !bVar2;
    local_1fc = (uint)(byte)local_226;
    ::FString::~FString(&local_138);
    if (local_226 != '\0') break;
    local_230 = local_230 + 1;
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  local_225 = 0;
  TArray<signed_char,TSizedDefaultAllocator<32>_>::~TArray<signed_char,TSizedDefaultAllocator<32>_>
            (&local_220);
  TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>::
  ~TArray<FTestFragment_Bool,TSizedDefaultAllocator<32>_>(&local_1d0);
  TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>::
  ~TArray<FTestFragment_Float,TSizedDefaultAllocator<32>_>(&local_1e0);
  return (bool)local_225;
}

