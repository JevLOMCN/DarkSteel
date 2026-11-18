// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 14189b330

EAutomationTestFlags __thiscall FLexerParseStringTest::GetTestFlags(FLexerParseStringTest *this)

{
  return SmokeFilter|HighPriority|ProgramContext|CommandletContext|ServerContext|ClientContext|
         EditorContext;
}

// IsStressTest @ 14189b340

bool __thiscall FLexerParseStringTest::IsStressTest(FLexerParseStringTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14189b350

uint __thiscall FLexerParseStringTest::GetRequiredDeviceNum(FLexerParseStringTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14189b360

FString * __thiscall
FLexerParseStringTest::GetTestSourceFileName
          (FLexerParseStringTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14189b390

int __thiscall FLexerParseStringTest::GetTestSourceFileLine(FLexerParseStringTest *this)

{
  return 0x4ec;
}

// GetTests @ 14189b3a0

/* WARNING: Removing unreachable block (ram,0x00014189b48d) */
/* WARNING: Removing unreachable block (ram,0x00014189b558) */

void __thiscall
FLexerParseStringTest::GetTests
          (FLexerParseStringTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Expression Parser.Lexer.Parse string");
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

// RunTest @ 14189b580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FLexerParseStringTest::RunTest(FLexerParseStringTest *this,FString *param_1)

{
  byte bVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  *pTVar10;
  undefined ***pppuVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  longlong local_190;
  TTokenDefinitions<wchar_t> local_188;
  TExpressionTokenConsumer<wchar_t> local_170;
  FText local_148;
  char local_138;
  TExpressionToken<wchar_t> *local_130;
  undefined8 uStack_128;
  undefined1 local_120 [8];
  TOptional<FExpressionError> local_118;
  FString local_100;
  FString local_f0;
  TExpressionToken<wchar_t> *local_e0;
  uint local_d8;
  int local_d4;
  byte local_d0;
  TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_c8;
  longlong local_b0;
  longlong lStack_a8;
  ulonglong local_a0;
  code *local_98;
  undefined **local_88;
  code *pcStack_80;
  longlong local_78;
  undefined ***local_70;
  code *local_68;
  undefined **local_58;
  code *pcStack_50;
  longlong local_48;
  undefined ***local_40;
  TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_188.bIgnoreWhitespace = false;
  local_188.Definitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Definitions.ArrayNum = 0;
  local_188.Definitions.ArrayMax = 0;
  local_70 = (undefined ***)0x0;
  local_88 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pcStack_80 = `FLexerParseStringTest::RunTest'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
             ::Call;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1030,&local_188.Definitions.AllocatorInstance,&local_188.Definitions.ArrayMax
                    );
  iVar15 = iVar8 + 1;
  pFVar12 = local_188.Definitions.AllocatorInstance.Data + (longlong)iVar8 * 0x30;
  *(code **)pFVar12 = local_98;
  *(undefined ****)(pFVar12 + 0x28) = local_70;
  *(undefined ***)(pFVar12 + 0x10) = local_88;
  *(code **)(pFVar12 + 0x18) = pcStack_80;
  *(longlong *)(pFVar12 + 0x20) = local_78;
  local_188.Definitions.ArrayNum = iVar15;
  if (*(longlong *)pFVar12 == 0) {
    if (local_98 != (code *)0x0) {
      pppuVar11 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar11 = local_70;
      }
      (*(code *)(*pppuVar11)[2])();
    }
  }
  else {
    local_98 = (code *)0x0;
  }
  local_40 = (undefined ***)0x0;
  pcStack_50 = Tests::ConsumeDigitsGreedy;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
             ::Call;
  if (local_188.Definitions.ArrayNum == local_188.Definitions.ArrayMax) {
    local_188.Definitions.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1030,&local_188.Definitions.AllocatorInstance,&local_188.Definitions.ArrayMax)
    ;
  }
  lVar9 = (longlong)local_188.Definitions.ArrayNum;
  local_188.Definitions.ArrayNum = local_188.Definitions.ArrayNum + 1;
  pFVar12 = local_188.Definitions.AllocatorInstance.Data + lVar9 * 0x30;
  *(code **)pFVar12 = local_68;
  *(undefined ****)(pFVar12 + 0x28) = local_40;
  *(undefined ***)(pFVar12 + 0x10) = local_58;
  *(code **)(pFVar12 + 0x18) = pcStack_50;
  *(longlong *)(pFVar12 + 0x20) = local_48;
  if (*(longlong *)pFVar12 == 0) {
    if (local_68 != (code *)0x0) {
      pppuVar11 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar11 = local_40;
      }
      (*(code *)(*pppuVar11)[2])();
    }
  }
  else {
    local_68 = (code *)0x0;
  }
  local_188.bIgnoreWhitespace = true;
  local_170.Stream.Start = L"\"1 a\" 123";
  local_170.Stream.End = L"";
  local_170.Stream.ReadPos = L"\"1 a\" 123";
  local_170.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.Tokens.ArrayNum = 0;
  local_170.Tokens.ArrayMax = 0;
  do {
    TTokenDefinitions<wchar_t>::ConsumeToken(&local_188,&local_118,&local_170);
    if (local_118.bIsSet != false) {
      local_138 = local_118.bIsSet;
      FText::FText(&local_148,(FText *)&local_118);
      if ((local_118.bIsSet != false) &&
         (local_118.TypedValue.Text.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_118.TypedValue.Text.TextData.Reference + 0x10))();
      }
      if (local_138 == '\0') goto LAB_14189b74f;
      local_e0 = (TExpressionToken<wchar_t> *)local_148.TextData.Reference;
      if ((TExpressionToken<wchar_t> *)local_148.TextData.Reference !=
          (TExpressionToken<wchar_t> *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 8))
                  (local_148.TextData.Reference,local_120);
      }
      local_d0 = 1;
      local_d8 = local_148.Flags;
      goto joined_r0x00014189bc11;
    }
  } while (local_170.Stream.ReadPos != local_170.Stream.End);
  local_138 = '\0';
LAB_14189b74f:
  local_e0 = (TExpressionToken<wchar_t> *)local_170.Tokens.AllocatorInstance.Data;
  local_d8 = local_170.Tokens.ArrayNum;
  local_d4 = local_170.Tokens.ArrayMax;
  local_d0 = 0;
  local_130 = (TExpressionToken<wchar_t> *)local_170.Tokens.AllocatorInstance.Data;
  uStack_128._0_4_ = local_170.Tokens.ArrayNum;
  uStack_128._4_4_ = local_170.Tokens.ArrayMax;
  local_170.Tokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.Tokens.ArrayNum = 0;
  local_170.Tokens.ArrayMax = 0;
  DestructItems<TExpressionToken<wchar_t>,int>((TExpressionToken<wchar_t> *)0x0,0);
joined_r0x00014189bc11:
  if ((local_138 != '\0') &&
     ((TExpressionToken<wchar_t> *)local_148.TextData.Reference != (TExpressionToken<wchar_t> *)0x0)
     ) {
    (**(code **)(*(longlong *)
                  &(((TExpressionToken<wchar_t> *)local_148.TextData.Reference)->Node).TypeId + 0x10
                ))();
  }
  DestructItems<TExpressionToken<wchar_t>,int>
            ((TExpressionToken<wchar_t> *)local_170.Tokens.AllocatorInstance.Data,
             local_170.Tokens.ArrayNum);
  if ((TExpressionToken<wchar_t> *)local_170.Tokens.AllocatorInstance.Data !=
      (TExpressionToken<wchar_t> *)0x0) {
    FMemory::Free(local_170.Tokens.AllocatorInstance.Data);
  }
  uVar13 = (ulonglong)local_d0;
  if ((2 < uVar13) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  bVar5 = FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,L"Lex succeeded",
                     *(bool *)((longlong)
                               &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                                ::__l2::bIsSameType + uVar13));
  if (bVar5) {
    if ((local_d0 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    bVar5 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,L"Found two tokens",local_d8,2);
    if (bVar5) {
      if ((local_d0 != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((int)local_d8 < 1) {
        local_198 = 0;
        local_190 = (longlong)(int)local_d8;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      pwVar2 = (local_e0->Context).TokenStart;
      ::FString::ConstructFromPtrSize
                (&local_100,pwVar2,
                 (int)((longlong)(local_e0->Context).TokenEnd - (longlong)pwVar2 >> 1));
      iVar15 = local_100.Data.ArrayNum + -1;
      if (local_100.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      bVar5 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,L"First token contains expected 3 characters",
                         iVar15,3);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        if ((local_d0 != 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if ((int)local_d8 < 2) {
          local_198 = 1;
          local_190 = (longlong)(int)local_d8;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        pwVar2 = local_e0[1].Context.TokenStart;
        ::FString::ConstructFromPtrSize
                  (&local_f0,pwVar2,
                   (int)((longlong)local_e0[1].Context.TokenEnd - (longlong)pwVar2 >> 1));
        iVar15 = local_f0.Data.ArrayNum + -1;
        if (local_f0.Data.ArrayNum == 0) {
          iVar15 = 0;
        }
        bVar5 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,
                           L"Second token contains expected 3 characters",iVar15,3);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          ExpressionParser::Lex<wchar_t>(&local_c8,L"\"abc",&local_188);
          uVar13 = local_c8.Variant._16_8_ & 0xff;
          if ((2 < uVar13) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          bVar5 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,L"Unterminated string",
                             *(bool *)(uVar13 + 0x1506af9d4));
          if (bVar5) {
            pTVar10 = ExpressionParser::Lex<wchar_t>(&local_38,L"\"",&local_188);
            if (pTVar10 != &local_c8) {
              bVar1 = (pTVar10->Variant).TypeIndex;
              local_a0 = CONCAT71(local_a0._1_7_,bVar1);
              if ((2 < (ulonglong)bVar1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0x105,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                          ::__l2::MoveConstructors)[bVar1])(&local_b0,pTVar10);
              uVar13 = local_a0;
              lVar4 = lStack_a8;
              lVar9 = local_b0;
              local_a0 = local_c8.Variant._16_8_;
              uVar14 = local_c8.Variant._16_8_ & 0xff;
              local_c8.Variant._16_8_ = uVar13;
              local_b0 = local_c8.Variant._padding_;
              lStack_a8 = local_c8.Variant._padding_;
              local_c8.Variant._padding_ = lVar9;
              local_c8.Variant._padding_ = lVar4;
              if ((2 < uVar14) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar14])(&local_b0);
            }
            if ((2 < local_38.Variant.TypeIndex) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
            uVar13 = local_c8.Variant._16_8_ & 0xff;
            if ((2 < uVar13) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            bVar5 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,L"Just quote",
                               *(bool *)(uVar13 + 0x1506af9d4));
            if (!bVar5) goto LAB_14189bc1c;
            bVar5 = true;
          }
          else {
LAB_14189bc1c:
            bVar5 = false;
          }
          uVar13 = local_c8.Variant._16_8_ & 0xff;
          if ((2 < local_c8.Variant.TypeIndex) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13])(&local_c8);
          goto LAB_14189bc60;
        }
      }
    }
  }
  bVar5 = false;
LAB_14189bc60:
  uVar13 = (ulonglong)local_d0;
  if ((2 < local_d0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar13] ==
      UE::Core::Private::
      TDestructorCaller<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>_>::Destruct) {
    DestructItems<TExpressionToken<wchar_t>,int>(local_e0,local_d8);
    if (local_e0 != (TExpressionToken<wchar_t> *)0x0) {
      FMemory::Free(local_e0);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar13])(&local_e0);
  }
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_188.Definitions.AllocatorInstance.Data,local_188.Definitions.ArrayNum);
  if ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
      local_188.Definitions.AllocatorInstance.Data !=
      (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)0x0) {
    FMemory::Free(local_188.Definitions.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetBeautifiedTestName @ 14189bd20

FString * __thiscall
FLexerParseStringTest::GetBeautifiedTestName
          (FLexerParseStringTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Expression Parser.Lexer.Parse string");
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 1418a93b0

TOptional<FExpressionError> * __cdecl
`FLexerParseStringTest::RunTest'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  undefined1 local_res8 [32];
  
  operator()(local_res8,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// operator() @ 1418c19d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __thiscall
`FLexerParseStringTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TTokenStream<wchar_t> *this_00;
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  EParseState EVar5;
  TOptional<FExpressionError> *pTVar6;
  FText *pFVar7;
  undefined ***pppuVar8;
  char cVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  wchar_t local_100 [4];
  TExpressionTokenConsumer<wchar_t> *local_f8;
  FText local_f0;
  TStringToken<wchar_t> local_e0;
  char local_c8;
  TStringToken<wchar_t> local_c0;
  char local_a8;
  FText local_a0;
  undefined1 local_88 [16];
  undefined **local_78 [6];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  pwVar11 = (param_1->Stream).ReadPos;
  this_00 = &param_1->Stream;
  pwVar10 = this_00->Start;
  if (pwVar11 < pwVar10) goto LAB_1418c1b9c;
  pwVar2 = (param_1->Stream).End;
  pwVar1 = pwVar2 + -1;
  if ((pwVar1 < pwVar11) || (*pwVar11 != L'\"')) goto LAB_1418c1b9c;
  pwVar11 = pwVar11 + 1;
  local_f8 = param_1;
  if ((pwVar11 < pwVar10) || (pwVar1 < pwVar11)) {
    local_c8 = '\0';
  }
  else {
    lVar12 = (longlong)pwVar11 - (longlong)pwVar10;
    pwVar10 = pwVar11;
    local_f0.TextData.Reference = (ITextData *)pwVar11;
    if (pwVar11 != pwVar2) {
      do {
        local_100[0] = *pwVar10;
        EVar5 = UE::Core::Private::Function::
                TFunctionRefCaller<``FLexerParseStringTest::RunTest'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,enum_EParseState,wchar_t>
                ::Call(local_108,local_100);
        if (EVar5 == Cancel) goto LAB_1418c1abd;
      } while ((((StopAfter < EVar5) || (pwVar10 = pwVar10 + 1, EVar5 != StopAfter)) &&
               (EVar5 != StopBefore)) && (pwVar10 != pwVar2));
      if (pwVar10 != pwVar11) {
        if (pwVar11 < pwVar10) {
          pwVar11 = pwVar10;
        }
        local_c8 = '\x01';
        local_e0.CharacterIndex = (int)(lVar12 >> 1);
        local_e0.LineNumber = 0;
        local_e0.TokenStart = (wchar_t *)local_f0.TextData.Reference;
        local_e0.TokenEnd = pwVar10;
        goto LAB_1418c1aca;
      }
    }
LAB_1418c1abd:
    local_c8 = '\0';
  }
LAB_1418c1aca:
  if (((pwVar11 < this_00->Start) || (pwVar1 < pwVar11)) || (*pwVar11 != L'\"')) {
    cVar9 = '\0';
    bVar4 = false;
  }
  else {
    local_c0.TokenEnd = pwVar11 + 1;
    local_c0.LineNumber = 0;
    cVar9 = '\x01';
    bVar4 = true;
    local_c0.CharacterIndex = (int)((longlong)pwVar11 - (longlong)this_00->Start >> 1);
    local_c0.TokenStart = pwVar11;
  }
  local_a8 = cVar9;
  if ((local_c8 == '\0') || (!bVar4)) {
    pFVar7 = FText::AsCultureInvariant(&local_a0,L"Unterminated string");
    local_f0.TextData.Reference = (pFVar7->TextData).Reference;
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 8))
                (local_f0.TextData.Reference,&local_f8);
    }
    local_f0.Flags = pFVar7->Flags;
    FText::FText((FText *)__return_storage_ptr__,&local_f0);
    __return_storage_ptr__->bIsSet = true;
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    }
    if (local_a0.TextData.Reference == (ITextData *)0x0) {
      return __return_storage_ptr__;
    }
    (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
    return __return_storage_ptr__;
  }
  local_78[0] = &___7__FInlineDataStorage_UFStringTokenTag_Tests___Impl__6B_;
  local_88._0_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FStringTokenTag>::GetTypeId(void)'
       ::__l2::Global.A;
  local_88._4_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FStringTokenTag>::GetTypeId(void)'
       ::__l2::Global.B;
  local_88._8_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FStringTokenTag>::GetTypeId(void)'
       ::__l2::Global.C;
  local_88._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FStringTokenTag>::GetTypeId(void)'
       ::__l2::Global.D;
  TExpressionTokenConsumer<wchar_t>::Add(local_f8,&local_e0,(FExpressionNode *)local_88);
  pppuVar8 = local_78;
  if (((local_88._12_4_ == 0 && local_88._8_4_ == 0) && local_88._4_4_ == 0) && local_88._0_4_ == 0)
  {
    pppuVar8 = (undefined ***)0x0;
  }
  if (pppuVar8 != (undefined ***)0x0) {
    (*(code *)**pppuVar8)(pppuVar8,0);
  }
  if ((cVar9 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TOptional<FExpressionError> *)(*pcVar3)();
    return pTVar6;
  }
  TTokenStream<wchar_t>::SetReadPos(this_00,&local_c0);
LAB_1418c1b9c:
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

