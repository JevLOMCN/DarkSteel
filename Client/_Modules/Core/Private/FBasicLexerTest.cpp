// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1418a8c90

EAutomationTestFlags __thiscall FBasicLexerTest::GetTestFlags(FBasicLexerTest *this)

{
  return SmokeFilter|HighPriority|ProgramContext|CommandletContext|ServerContext|ClientContext|
         EditorContext;
}

// IsStressTest @ 1418a8ca0

bool __thiscall FBasicLexerTest::IsStressTest(FBasicLexerTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1418a8cb0

uint __thiscall FBasicLexerTest::GetRequiredDeviceNum(FBasicLexerTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1418a8cc0

FString * __thiscall
FBasicLexerTest::GetTestSourceFileName(FBasicLexerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1418a8cf0

int __thiscall FBasicLexerTest::GetTestSourceFileLine(FBasicLexerTest *this)

{
  return 0x4cd;
}

// GetTests @ 1418a8d00

/* WARNING: Removing unreachable block (ram,0x0001418a8ded) */
/* WARNING: Removing unreachable block (ram,0x0001418a8eb8) */

void __thiscall
FBasicLexerTest::GetTests
          (FBasicLexerTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Expression Parser.Lexer.Basic");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 1418a8ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FBasicLexerTest::RunTest(FBasicLexerTest *this,FString *param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  undefined ***pppuVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110;
  TTokenDefinitions<wchar_t> local_108;
  TExpressionTokenConsumer<wchar_t> local_f0;
  FText local_c8;
  char local_b8;
  TExpressionToken<wchar_t> *local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [8];
  TOptional<FExpressionError> local_98;
  FString local_80;
  TExpressionToken<wchar_t> *local_70;
  uint local_68;
  int local_64;
  byte local_60;
  code *local_58;
  undefined **local_48;
  code *pcStack_40;
  longlong local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_108.bIgnoreWhitespace = false;
  local_108.Definitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_108.Definitions.ArrayNum = 0;
  local_108.Definitions.ArrayMax = 0;
  pcStack_40 = Tests::ConsumeLowerAlphaGreedy;
  local_30 = (undefined ***)0x0;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
             ::Call;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1030,&local_108.Definitions.AllocatorInstance,&local_108.Definitions.ArrayMax
                    );
  local_108.Definitions.ArrayNum = iVar6 + 1;
  pFVar8 = local_108.Definitions.AllocatorInstance.Data + (longlong)iVar6 * 0x30;
  *(code **)pFVar8 = local_58;
  *(undefined ****)(pFVar8 + 0x28) = local_30;
  *(undefined ***)(pFVar8 + 0x10) = local_48;
  *(code **)(pFVar8 + 0x18) = pcStack_40;
  *(longlong *)(pFVar8 + 0x20) = local_38;
  if (*(longlong *)pFVar8 == 0) {
    if (local_58 != (code *)0x0) {
      pppuVar7 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar7 = local_30;
      }
      (*(code *)(*pppuVar7)[2])();
    }
  }
  else {
    local_58 = (code *)0x0;
  }
  local_f0.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.Stream.Start = L"abc";
  local_f0.Stream.End = L"";
  local_f0.Stream.ReadPos = L"abc";
  local_f0.Tokens.ArrayNum = 0;
  local_f0.Tokens.ArrayMax = 0;
  do {
    TTokenDefinitions<wchar_t>::ConsumeToken(&local_108,&local_98,&local_f0);
    if (local_98.bIsSet != false) {
      local_b8 = local_98.bIsSet;
      FText::FText(&local_c8,(FText *)&local_98);
      if ((local_98.bIsSet != false) &&
         (local_98.TypedValue.Text.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_98.TypedValue.Text.TextData.Reference + 0x10))();
      }
      if (local_b8 == '\0') goto LAB_1418a900f;
      local_70 = (TExpressionToken<wchar_t> *)local_c8.TextData.Reference;
      if ((TExpressionToken<wchar_t> *)local_c8.TextData.Reference !=
          (TExpressionToken<wchar_t> *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 8))
                  (local_c8.TextData.Reference,local_a0);
      }
      local_60 = 1;
      local_68 = local_c8.Flags;
      goto joined_r0x0001418a9245;
    }
  } while (local_f0.Stream.ReadPos != local_f0.Stream.End);
  local_b8 = '\0';
LAB_1418a900f:
  local_70 = (TExpressionToken<wchar_t> *)local_f0.Tokens.AllocatorInstance.Data;
  local_68 = local_f0.Tokens.ArrayNum;
  local_64 = local_f0.Tokens.ArrayMax;
  local_60 = 0;
  local_b0 = (TExpressionToken<wchar_t> *)local_f0.Tokens.AllocatorInstance.Data;
  uStack_a8._0_4_ = local_f0.Tokens.ArrayNum;
  uStack_a8._4_4_ = local_f0.Tokens.ArrayMax;
  local_f0.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.Tokens.ArrayNum = 0;
  local_f0.Tokens.ArrayMax = 0;
  DestructItems<TExpressionToken<wchar_t>,int>((TExpressionToken<wchar_t> *)0x0,0);
joined_r0x0001418a9245:
  if ((local_b8 != '\0') &&
     ((TExpressionToken<wchar_t> *)local_c8.TextData.Reference != (TExpressionToken<wchar_t> *)0x0))
  {
    (**(code **)(*(longlong *)
                  &(((TExpressionToken<wchar_t> *)local_c8.TextData.Reference)->Node).TypeId + 0x10)
    )();
  }
  DestructItems<TExpressionToken<wchar_t>,int>
            ((TExpressionToken<wchar_t> *)local_f0.Tokens.AllocatorInstance.Data,
             local_f0.Tokens.ArrayNum);
  if ((TExpressionToken<wchar_t> *)local_f0.Tokens.AllocatorInstance.Data !=
      (TExpressionToken<wchar_t> *)0x0) {
    FMemory::Free(local_f0.Tokens.AllocatorInstance.Data);
  }
  uVar9 = (ulonglong)local_60;
  if ((2 < uVar9) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,L"Lex succeeded",
                     *(bool *)((longlong)
                               &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                                ::__l2::bIsSameType + uVar9));
  if (bVar3) {
    if ((local_60 != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,L"Found one token",local_68,1);
    if (bVar3) {
      if ((local_60 != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((int)local_68 < 1) {
        local_118 = 0;
        local_110 = (longlong)(int)local_68;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      pwVar1 = (local_70->Context).TokenStart;
      ::FString::ConstructFromPtrSize
                (&local_80,pwVar1,
                 (int)((longlong)(local_70->Context).TokenEnd - (longlong)pwVar1 >> 1));
      iVar6 = local_80.Data.ArrayNum + -1;
      if (local_80.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      bVar3 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,L"Token contains expected 3 characters",iVar6,3
                        );
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        bVar3 = true;
        goto LAB_1418a9252;
      }
    }
  }
  bVar3 = false;
LAB_1418a9252:
  uVar9 = (ulonglong)local_60;
  if ((2 < local_60) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9] ==
      UE::Core::Private::
      TDestructorCaller<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>_>::Destruct) {
    DestructItems<TExpressionToken<wchar_t>,int>(local_70,local_68);
    if (local_70 != (TExpressionToken<wchar_t> *)0x0) {
      FMemory::Free(local_70);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_70);
  }
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_108.Definitions.AllocatorInstance.Data,local_108.Definitions.ArrayNum);
  if ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
      local_108.Definitions.AllocatorInstance.Data !=
      (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)0x0) {
    FMemory::Free(local_108.Definitions.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetBeautifiedTestName @ 1418a9310

FString * __thiscall
FBasicLexerTest::GetBeautifiedTestName(FBasicLexerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Expression Parser.Lexer.Basic");
  return __return_storage_ptr__;
}

