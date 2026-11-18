// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 14189aaf0

EAutomationTestFlags __thiscall
FLexerIgnoreWhitespaceTest::GetTestFlags(FLexerIgnoreWhitespaceTest *this)

{
  return SmokeFilter|HighPriority|ProgramContext|CommandletContext|ServerContext|ClientContext|
         EditorContext;
}

// IsStressTest @ 14189ab00

bool __thiscall FLexerIgnoreWhitespaceTest::IsStressTest(FLexerIgnoreWhitespaceTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14189ab10

uint __thiscall FLexerIgnoreWhitespaceTest::GetRequiredDeviceNum(FLexerIgnoreWhitespaceTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14189ab20

FString * __thiscall
FLexerIgnoreWhitespaceTest::GetTestSourceFileName
          (FLexerIgnoreWhitespaceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14189ab50

int __thiscall FLexerIgnoreWhitespaceTest::GetTestSourceFileLine(FLexerIgnoreWhitespaceTest *this)

{
  return 0x4db;
}

// GetTests @ 14189ab60

/* WARNING: Removing unreachable block (ram,0x00014189ac4d) */
/* WARNING: Removing unreachable block (ram,0x00014189ad18) */

void __thiscall
FLexerIgnoreWhitespaceTest::GetTests
          (FLexerIgnoreWhitespaceTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Expression Parser.Lexer.Ignore whitespace");
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

// RunTest @ 14189ad40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FLexerIgnoreWhitespaceTest::RunTest(FLexerIgnoreWhitespaceTest *this,FString *param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined ***pppuVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  longlong local_150;
  TTokenDefinitions<wchar_t> local_148;
  TExpressionTokenConsumer<wchar_t> local_130;
  FText local_108;
  char local_f8;
  TExpressionToken<wchar_t> *local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [8];
  TOptional<FExpressionError> local_d8;
  FString local_c0;
  FString local_b0;
  TExpressionToken<wchar_t> *local_a0;
  uint local_98;
  int local_94;
  byte local_90;
  code *local_88;
  undefined **local_78;
  code *pcStack_70;
  longlong local_68;
  undefined ***local_60;
  code *local_58;
  undefined **local_48;
  code *pcStack_40;
  longlong local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_148.bIgnoreWhitespace = false;
  local_148.Definitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Definitions.ArrayNum = 0;
  local_148.Definitions.ArrayMax = 0;
  local_60 = (undefined ***)0x0;
  local_78 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pcStack_70 = Tests::ConsumeLowerAlphaGreedy;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
             ::Call;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1030,&local_148.Definitions.AllocatorInstance,&local_148.Definitions.ArrayMax
                    );
  iVar11 = iVar6 + 1;
  pFVar9 = local_148.Definitions.AllocatorInstance.Data + (longlong)iVar6 * 0x30;
  *(code **)pFVar9 = local_88;
  *(undefined ****)(pFVar9 + 0x28) = local_60;
  *(undefined ***)(pFVar9 + 0x10) = local_78;
  *(code **)(pFVar9 + 0x18) = pcStack_70;
  *(longlong *)(pFVar9 + 0x20) = local_68;
  local_148.Definitions.ArrayNum = iVar11;
  if (*(longlong *)pFVar9 == 0) {
    if (local_88 != (code *)0x0) {
      pppuVar8 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar8 = local_60;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  else {
    local_88 = (code *)0x0;
  }
  local_30 = (undefined ***)0x0;
  pcStack_40 = Tests::ConsumeDigitsGreedy;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
             ::Call;
  if (local_148.Definitions.ArrayNum == local_148.Definitions.ArrayMax) {
    local_148.Definitions.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1030,&local_148.Definitions.AllocatorInstance,&local_148.Definitions.ArrayMax)
    ;
  }
  lVar7 = (longlong)local_148.Definitions.ArrayNum;
  local_148.Definitions.ArrayNum = local_148.Definitions.ArrayNum + 1;
  pFVar9 = local_148.Definitions.AllocatorInstance.Data + lVar7 * 0x30;
  *(code **)pFVar9 = local_58;
  *(undefined ****)(pFVar9 + 0x28) = local_30;
  *(undefined ***)(pFVar9 + 0x10) = local_48;
  *(code **)(pFVar9 + 0x18) = pcStack_40;
  *(longlong *)(pFVar9 + 0x20) = local_38;
  if (*(longlong *)pFVar9 == 0) {
    if (local_58 != (code *)0x0) {
      pppuVar8 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar8 = local_30;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  else {
    local_58 = (code *)0x0;
  }
  local_148.bIgnoreWhitespace = true;
  local_130.Stream.Start = L"abc 123";
  local_130.Stream.End = L"";
  local_130.Stream.ReadPos = L"abc 123";
  local_130.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.Tokens.ArrayNum = 0;
  local_130.Tokens.ArrayMax = 0;
  do {
    TTokenDefinitions<wchar_t>::ConsumeToken(&local_148,&local_d8,&local_130);
    if (local_d8.bIsSet != false) {
      local_f8 = local_d8.bIsSet;
      FText::FText(&local_108,(FText *)&local_d8);
      if ((local_d8.bIsSet != false) &&
         (local_d8.TypedValue.Text.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_d8.TypedValue.Text.TextData.Reference + 0x10))();
      }
      if (local_f8 == '\0') goto LAB_14189aeff;
      local_a0 = (TExpressionToken<wchar_t> *)local_108.TextData.Reference;
      if ((TExpressionToken<wchar_t> *)local_108.TextData.Reference !=
          (TExpressionToken<wchar_t> *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 8))
                  (local_108.TextData.Reference,local_e0);
      }
      local_90 = 1;
      local_98 = local_108.Flags;
      goto joined_r0x00014189b1fb;
    }
  } while (local_130.Stream.ReadPos != local_130.Stream.End);
  local_f8 = '\0';
LAB_14189aeff:
  local_a0 = (TExpressionToken<wchar_t> *)local_130.Tokens.AllocatorInstance.Data;
  local_98 = local_130.Tokens.ArrayNum;
  local_94 = local_130.Tokens.ArrayMax;
  local_90 = 0;
  local_f0 = (TExpressionToken<wchar_t> *)local_130.Tokens.AllocatorInstance.Data;
  uStack_e8._0_4_ = local_130.Tokens.ArrayNum;
  uStack_e8._4_4_ = local_130.Tokens.ArrayMax;
  local_130.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.Tokens.ArrayNum = 0;
  local_130.Tokens.ArrayMax = 0;
  DestructItems<TExpressionToken<wchar_t>,int>((TExpressionToken<wchar_t> *)0x0,0);
joined_r0x00014189b1fb:
  if ((local_f8 != '\0') &&
     ((TExpressionToken<wchar_t> *)local_108.TextData.Reference != (TExpressionToken<wchar_t> *)0x0)
     ) {
    (**(code **)(*(longlong *)
                  &(((TExpressionToken<wchar_t> *)local_108.TextData.Reference)->Node).TypeId + 0x10
                ))();
  }
  DestructItems<TExpressionToken<wchar_t>,int>
            ((TExpressionToken<wchar_t> *)local_130.Tokens.AllocatorInstance.Data,
             local_130.Tokens.ArrayNum);
  if ((TExpressionToken<wchar_t> *)local_130.Tokens.AllocatorInstance.Data !=
      (TExpressionToken<wchar_t> *)0x0) {
    FMemory::Free(local_130.Tokens.AllocatorInstance.Data);
  }
  uVar10 = (ulonglong)local_90;
  if ((2 < uVar10) &&
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
                                ::__l2::bIsSameType + uVar10));
  if (bVar3) {
    if ((local_90 != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,L"Found two tokens",local_98,2);
    if (bVar3) {
      if ((local_90 != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((int)local_98 < 1) {
        local_158 = 0;
        local_150 = (longlong)(int)local_98;
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
      pwVar1 = (local_a0->Context).TokenStart;
      ::FString::ConstructFromPtrSize
                (&local_c0,pwVar1,
                 (int)((longlong)(local_a0->Context).TokenEnd - (longlong)pwVar1 >> 1));
      iVar11 = local_c0.Data.ArrayNum + -1;
      if (local_c0.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      bVar3 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,L"First token contains expected 3 characters",
                         iVar11,3);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        if ((local_90 != 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if ((int)local_98 < 2) {
          local_158 = 1;
          local_150 = (longlong)(int)local_98;
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
        pwVar1 = local_a0[1].Context.TokenStart;
        ::FString::ConstructFromPtrSize
                  (&local_b0,pwVar1,
                   (int)((longlong)local_a0[1].Context.TokenEnd - (longlong)pwVar1 >> 1));
        iVar11 = local_b0.Data.ArrayNum + -1;
        if (local_b0.Data.ArrayNum == 0) {
          iVar11 = 0;
        }
        bVar3 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,
                           L"Second token contains expected 3 characters",iVar11,3);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          bVar3 = true;
          goto LAB_14189b208;
        }
      }
    }
  }
  bVar3 = false;
LAB_14189b208:
  uVar10 = (ulonglong)local_90;
  if ((2 < local_90) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10] ==
      UE::Core::Private::
      TDestructorCaller<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>_>::Destruct) {
    DestructItems<TExpressionToken<wchar_t>,int>(local_a0,local_98);
    if (local_a0 != (TExpressionToken<wchar_t> *)0x0) {
      FMemory::Free(local_a0);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_a0);
  }
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_148.Definitions.AllocatorInstance.Data,local_148.Definitions.ArrayNum);
  if ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
      local_148.Definitions.AllocatorInstance.Data !=
      (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)0x0) {
    FMemory::Free(local_148.Definitions.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetBeautifiedTestName @ 14189b2c0

FString * __thiscall
FLexerIgnoreWhitespaceTest::GetBeautifiedTestName
          (FLexerIgnoreWhitespaceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Expression Parser.Lexer.Ignore whitespace")
  ;
  return __return_storage_ptr__;
}

