// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 31

// FTextFilterExpressionEvaluator @ 1419187c0

FTextFilterExpressionEvaluator * __thiscall
FTextFilterExpressionEvaluator::FTextFilterExpressionEvaluator
          (FTextFilterExpressionEvaluator *this,FTextFilterExpressionEvaluator *param_1)

{
  this->_padding_ = (longlong)&___7FTextFilterExpressionEvaluator__6B_;
  this->ExpressionEvaluatorMode = param_1->ExpressionEvaluatorMode;
  this->FilterType = Empty;
  FText::FText(&this->FilterText);
  FText::FText(&this->FilterErrorText);
  (this->ExpressionTokens).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExpressionTokens).ArrayNum = 0;
  (this->ExpressionTokens).ArrayMax = 0;
  (this->CompiledFilter).bIsSet = false;
  (this->CompiledFilterSingleBasicStringTextToken).bIsSet = false;
  *(undefined8 *)&this->TokenFunctionHandlers = 0;
  *(undefined8 *)&(this->TokenFunctionHandlers).field_0x8 = 0;
  *(undefined8 *)&(this->TokenFunctionHandlers).field_0x20 = 0;
  *(undefined4 *)&(this->TokenFunctionHandlers).field_0x28 = 0;
  *(undefined4 *)&(this->TokenFunctionHandlers).field_0x2c = 0x80;
  *(undefined4 *)&(this->TokenFunctionHandlers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TokenFunctionHandlers).field_0x34 = 0;
  *(undefined8 *)&(this->TokenFunctionHandlers).field_0x40 = 0;
  *(undefined4 *)&(this->TokenFunctionHandlers).field_0x48 = 0;
  (this->TokenDefinitions).bIgnoreWhitespace = false;
  (this->TokenDefinitions).Definitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TokenDefinitions).Definitions.ArrayNum = 0;
  (this->TokenDefinitions).Definitions.ArrayMax = 0;
  FExpressionGrammar::FExpressionGrammar(&this->Grammar);
  TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>::
  TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>(&this->JumpTable);
  ConstructExpressionParser(this);
  SetFilterText(this,&param_1->FilterText);
  return this;
}

// FTextFilterExpressionEvaluator @ 1419188a0

FTextFilterExpressionEvaluator * __thiscall
FTextFilterExpressionEvaluator::FTextFilterExpressionEvaluator
          (FTextFilterExpressionEvaluator *this,ETextFilterExpressionEvaluatorMode param_1)

{
  this->ExpressionEvaluatorMode = param_1;
  this->_padding_ = (longlong)&___7FTextFilterExpressionEvaluator__6B_;
  this->FilterType = Empty;
  FText::FText(&this->FilterText);
  FText::FText(&this->FilterErrorText);
  (this->ExpressionTokens).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExpressionTokens).ArrayNum = 0;
  (this->ExpressionTokens).ArrayMax = 0;
  (this->CompiledFilter).bIsSet = false;
  (this->CompiledFilterSingleBasicStringTextToken).bIsSet = false;
  *(undefined8 *)&this->TokenFunctionHandlers = 0;
  *(undefined8 *)&(this->TokenFunctionHandlers).field_0x8 = 0;
  *(undefined8 *)&(this->TokenFunctionHandlers).field_0x20 = 0;
  *(undefined4 *)&(this->TokenFunctionHandlers).field_0x28 = 0;
  *(undefined4 *)&(this->TokenFunctionHandlers).field_0x2c = 0x80;
  *(undefined4 *)&(this->TokenFunctionHandlers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TokenFunctionHandlers).field_0x34 = 0;
  *(undefined8 *)&(this->TokenFunctionHandlers).field_0x40 = 0;
  *(undefined4 *)&(this->TokenFunctionHandlers).field_0x48 = 0;
  (this->TokenDefinitions).bIgnoreWhitespace = false;
  (this->TokenDefinitions).Definitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TokenDefinitions).Definitions.ArrayNum = 0;
  (this->TokenDefinitions).Definitions.ArrayMax = 0;
  FExpressionGrammar::FExpressionGrammar(&this->Grammar);
  TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>::
  TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>(&this->JumpTable);
  ConstructExpressionParser(this);
  return this;
}

// ~FTextFilterExpressionEvaluator @ 14191c650

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FTextFilterExpressionEvaluator::~FTextFilterExpressionEvaluator
          (FTextFilterExpressionEvaluator *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  
  this->_padding_ = (longlong)&___7FTextFilterExpressionEvaluator__6B_;
  TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>::
  ~TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>(&this->JumpTable);
  FExpressionGrammar::~FExpressionGrammar(&this->Grammar);
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             (this->TokenDefinitions).Definitions.AllocatorInstance.Data,
             (this->TokenDefinitions).Definitions.ArrayNum);
  pFVar1 = (this->TokenDefinitions).Definitions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TokenFunctionHandlers).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TokenFunctionHandlers).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TokenFunctionHandlers);
  if ((this->CompiledFilterSingleBasicStringTextToken).bIsSet != false) {
    pFVar1 = (this->CompiledFilterSingleBasicStringTextToken).TypedValue.String.InternalStringAnsi.
             AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->CompiledFilterSingleBasicStringTextToken).TypedValue.String.InternalString.Data.
             AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  if ((this->CompiledFilter).bIsSet != false) {
    uVar6 = (ulonglong)(this->CompiledFilter).TypedValue.Variant.TypeIndex;
    if (2 < uVar6) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])(&this->CompiledFilter);
  }
  DestructItems<TExpressionToken<wchar_t>,int>
            ((TExpressionToken<wchar_t> *)(this->ExpressionTokens).AllocatorInstance.Data,
             (this->ExpressionTokens).ArrayNum);
  pFVar1 = (this->ExpressionTokens).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->FilterErrorText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->FilterText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014191c786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar3 + 0x10))();
    return;
  }
  return;
}

// operator= @ 14191d9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTextFilterExpressionEvaluator * __thiscall
FTextFilterExpressionEvaluator::operator=
          (FTextFilterExpressionEvaluator *this,FTextFilterExpressionEvaluator *param_1)

{
  int *piVar1;
  TArray<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  TExpressionToken<wchar_t> *pTVar6;
  FScriptContainerElement *pFVar7;
  FText *pFVar8;
  FExpressionGrammar *pFVar9;
  TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> *pTVar10;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [16];
  undefined8 local_178 [2];
  FExpressionGrammar local_168;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this->FilterType = Empty;
  pFVar8 = FText::GetEmpty();
  pIVar4 = (this->FilterText).TextData.Reference;
  pIVar5 = (pFVar8->TextData).Reference;
  if (pIVar4 != pIVar5) {
    (this->FilterText).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_188);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  (this->FilterText).Flags = pFVar8->Flags;
  pFVar8 = FText::GetEmpty();
  pIVar4 = (this->FilterErrorText).TextData.Reference;
  pIVar5 = (pFVar8->TextData).Reference;
  if (pIVar4 != pIVar5) {
    (this->FilterErrorText).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_188);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  piVar1 = &(this->ExpressionTokens).ArrayMax;
  (this->FilterErrorText).Flags = pFVar8->Flags;
  pTVar6 = (TExpressionToken<wchar_t> *)(this->ExpressionTokens).AllocatorInstance.Data;
  iVar3 = (this->ExpressionTokens).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TExpressionToken<wchar_t>,int>(pTVar6,iVar3);
    (this->ExpressionTokens).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&(this->ExpressionTokens).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TExpressionToken<wchar_t>,int>(pTVar6,iVar3);
    (this->ExpressionTokens).ArrayNum = 0;
  }
  TOptional<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>_>
  ::Reset(&this->CompiledFilter);
  if (this->ExpressionEvaluatorMode != param_1->ExpressionEvaluatorMode) {
    this->ExpressionEvaluatorMode = param_1->ExpressionEvaluatorMode;
    pTVar2 = &(this->TokenDefinitions).Definitions;
    (this->TokenDefinitions).bIgnoreWhitespace = false;
    if (pTVar2 != (TArray<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,TSizedDefaultAllocator<32>_>
                   *)local_178) {
      DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
                ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                  *)(pTVar2->AllocatorInstance).Data,(this->TokenDefinitions).Definitions.ArrayNum);
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->TokenDefinitions).Definitions.ArrayNum = 0;
      (this->TokenDefinitions).Definitions.ArrayMax = 0;
    }
    DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
              ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                *)0x0,0);
    memset(&local_168,0,0x140);
    pFVar9 = FExpressionGrammar::FExpressionGrammar(&local_168);
    FExpressionGrammar::operator=(&this->Grammar,pFVar9);
    FExpressionGrammar::~FExpressionGrammar(&local_168);
    memset(&local_168,0,0x140);
    pTVar10 = TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>::
              TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>
                        ((TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> *)&local_168);
    TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>::operator=(&this->JumpTable,pTVar10);
    TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>::
    ~TOperatorJumpTable<ITextFilterExpressionContext,wchar_t>
              ((TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> *)&local_168);
    (**(code **)(this->_padding_ + 8))(this);
  }
  SetFilterText(this,&param_1->FilterText);
  return this;
}

// operator() @ 14191e1b0

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_10>::operator()
          (void *this,bool param_1,bool param_2,ITextFilterExpressionContext *param_3)

{
  if ((!param_1) && (!param_2)) {
    return false;
  }
  return true;
}

// operator() @ 14191e1d0

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_11>::operator()
          (void *this,FTextToken *param_1,FTextToken *param_2,ITextFilterExpressionContext *param_3)

{
  char cVar1;
  
  if (1 < (param_1->String).InternalString.Data.ArrayNum) {
    cVar1 = (**(code **)*param_3)(param_3,param_1,param_1->TextComparisonMode);
    if (param_1->InvertResult != No) {
      cVar1 = cVar1 == '\0';
    }
    if (cVar1 == '\0') {
      return false;
    }
  }
  if (1 < (param_2->String).InternalString.Data.ArrayNum) {
    cVar1 = (**(code **)*param_3)(param_3,param_2,param_2->TextComparisonMode);
    if (param_2->InvertResult != No) {
      cVar1 = cVar1 == '\0';
    }
    if (cVar1 == '\0') {
      return false;
    }
  }
  return true;
}

// operator() @ 14191e260

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_12>::operator()
          (void *this,FTextToken *param_1,bool param_2,ITextFilterExpressionContext *param_3)

{
  char cVar1;
  
  if (1 < (param_1->String).InternalString.Data.ArrayNum) {
    cVar1 = (**(code **)*param_3)(param_3,param_1,param_1->TextComparisonMode);
    if (param_1->InvertResult != No) {
      cVar1 = cVar1 == '\0';
    }
    if (cVar1 == '\0') {
      return false;
    }
  }
  if (!param_2) {
    return false;
  }
  return true;
}

// operator() @ 14191e2c0

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_13>::operator()
          (void *this,bool param_1,FTextToken *param_2,ITextFilterExpressionContext *param_3)

{
  char cVar1;
  
  if (!param_1) {
    return false;
  }
  if (1 < (param_2->String).InternalString.Data.ArrayNum) {
    cVar1 = (**(code **)*param_3)(param_3,param_2,param_2->TextComparisonMode);
    if (param_2->InvertResult != No) {
      cVar1 = cVar1 == '\0';
    }
    if (cVar1 == '\0') {
      return false;
    }
  }
  return true;
}

// operator() @ 14191e310

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_14>::operator()
          (void *this,bool param_1,bool param_2,ITextFilterExpressionContext *param_3)

{
  if ((param_1) && (param_2)) {
    return true;
  }
  return false;
}

// operator() @ 14191e330

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_15>::operator()
          (void *this,FTextToken *param_1,ITextFilterExpressionContext *param_2)

{
  char cVar1;
  
  if ((param_1->String).InternalString.Data.ArrayNum < 2) {
    return false;
  }
  cVar1 = (**(code **)*param_2)(param_2,param_1,param_1->TextComparisonMode);
  if (param_1->InvertResult != No) {
    cVar1 = cVar1 == '\0';
  }
  return cVar1 == '\0';
}

// operator() @ 14191e380

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_16>::operator()
          (void *this,bool param_1,ITextFilterExpressionContext *param_2)

{
  return !param_1;
}

// operator() @ 14191e390

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_17>::operator()
          (void *this,FTextToken *param_1,FTextToken *param_2,ITextFilterExpressionContext *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  atomic<unsigned___int64> aVar6;
  wchar_t *pwVar7;
  atomic<unsigned___int64> this_00;
  atomic<unsigned___int64> aVar8;
  FReadAccessScope local_28;
  
  iVar4 = (param_1->String).InternalString.Data.ArrayNum;
  lVar1 = *(longlong *)this;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->String).InternalString.Data.AllocatorInstance.Data;
  }
  aVar8 = (atomic<unsigned___int64>)0x0;
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar7);
  iVar4 = TSet<TTuple<FString,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                      *)(lVar1 + 0x90),uVar3,(FString *)param_1);
  aVar6 = aVar8;
  if (iVar4 != -1) {
    aVar6 = (atomic<unsigned___int64>)((longlong)iVar4 * 0x30 + *(longlong *)(lVar1 + 0x90));
  }
  this_00 = (atomic<unsigned___int64>)((longlong)aVar6 + 0x10);
  if (aVar6 == (atomic<unsigned___int64>)0x0) {
    this_00 = aVar8;
  }
  if (this_00 == (atomic<unsigned___int64>)0x0) {
    uVar2 = 0;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
    if (*(int *)&(((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                  ((longlong)this_00 + 0x10))->AccessDetector).State != 0) {
      aVar8 = (((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this_00 + 8))->
              AccessDetector).State;
    }
    uVar2 = (**(code **)(*(longlong *)aVar8 + 0x60))(aVar8,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return (bool)uVar2;
}

// operator() @ 14191e710

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_1>::operator()
          (void *this,FTextToken *param_1,FTextToken *param_2,ITextFilterExpressionContext *param_3)

{
  bool bVar1;
  
  bVar1 = TextFilterExpressionParser::FTextToken::EvaluateAsComplexExpression
                    (param_2,param_3,&param_1->String,LessOrEqual);
  return bVar1;
}

// operator() @ 141920d20

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_2>::operator()
          (void *this,FTextToken *param_1,FTextToken *param_2,ITextFilterExpressionContext *param_3)

{
  bool bVar1;
  
  bVar1 = TextFilterExpressionParser::FTextToken::EvaluateAsComplexExpression
                    (param_2,param_3,&param_1->String,Less);
  return bVar1;
}

// operator() @ 141921a30

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_3>::operator()
          (void *this,FTextToken *param_1,FTextToken *param_2,ITextFilterExpressionContext *param_3)

{
  bool bVar1;
  
  bVar1 = TextFilterExpressionParser::FTextToken::EvaluateAsComplexExpression
                    (param_2,param_3,&param_1->String,GreaterOrEqual);
  return bVar1;
}

// operator() @ 141921a50

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_4>::operator()
          (void *this,FTextToken *param_1,FTextToken *param_2,ITextFilterExpressionContext *param_3)

{
  bool bVar1;
  
  bVar1 = TextFilterExpressionParser::FTextToken::EvaluateAsComplexExpression
                    (param_2,param_3,&param_1->String,Greater);
  return bVar1;
}

// operator() @ 141921a70

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_5>::operator()
          (void *this,FTextToken *param_1,FTextToken *param_2,ITextFilterExpressionContext *param_3)

{
  bool bVar1;
  
  bVar1 = TextFilterExpressionParser::FTextToken::EvaluateAsComplexExpression
                    (param_2,param_3,&param_1->String,NotEqual);
  return bVar1;
}

// operator() @ 141921a90

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_6>::operator()
          (void *this,FTextToken *param_1,FTextToken *param_2,ITextFilterExpressionContext *param_3)

{
  bool bVar1;
  
  bVar1 = TextFilterExpressionParser::FTextToken::EvaluateAsComplexExpression
                    (param_2,param_3,&param_1->String,Equal);
  return bVar1;
}

// operator() @ 141921ab0

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_7>::operator()
          (void *this,FTextToken *param_1,FTextToken *param_2,ITextFilterExpressionContext *param_3)

{
  char cVar1;
  
  if (1 < (param_1->String).InternalString.Data.ArrayNum) {
    cVar1 = (**(code **)*param_3)(param_3,param_1,param_1->TextComparisonMode);
    if (param_1->InvertResult != No) {
      cVar1 = cVar1 == '\0';
    }
    if ((cVar1 == '\0') && (1 < (param_2->String).InternalString.Data.ArrayNum)) {
      cVar1 = (**(code **)*param_3)(param_3,param_2,param_2->TextComparisonMode);
      if (param_2->InvertResult != No) {
        cVar1 = cVar1 == '\0';
      }
      if (cVar1 == '\0') {
        return false;
      }
    }
  }
  return true;
}

// operator() @ 141921b40

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_8>::operator()
          (void *this,FTextToken *param_1,bool param_2,ITextFilterExpressionContext *param_3)

{
  char cVar1;
  
  if (1 < (param_1->String).InternalString.Data.ArrayNum) {
    cVar1 = (**(code **)*param_3)(param_3,param_1,param_1->TextComparisonMode);
    if (param_1->InvertResult != No) {
      cVar1 = cVar1 == '\0';
    }
    if ((cVar1 == '\0') && (!param_2)) {
      return false;
    }
  }
  return true;
}

// operator() @ 141921ba0

bool __thiscall
`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_9>::operator()
          (void *this,bool param_1,FTextToken *param_2,ITextFilterExpressionContext *param_3)

{
  char cVar1;
  
  if ((!param_1) && (1 < (param_2->String).InternalString.Data.ArrayNum)) {
    cVar1 = (**(code **)*param_3)(param_3,param_2,param_2->TextComparisonMode);
    if (param_2->InvertResult != No) {
      cVar1 = cVar1 == '\0';
    }
    if (cVar1 == '\0') {
      return false;
    }
  }
  return true;
}

// AddFunctionTokenCallback @ 1419253d0

void __thiscall
FTextFilterExpressionEvaluator::AddFunctionTokenCallback
          (FTextFilterExpressionEvaluator *this,FString *param_1,
          TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy> *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *local_18;
  TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy> *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FString,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>_const_&>_>
            ((TSet<TTuple<FString,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->TokenFunctionHandlers,
             (TPairInitializer<FString_const_&,TDelegate<bool___cdecl(FTextFilterString_const_&),FDefaultDelegateUserPolicy>_const_&>
              *)&stack0x00000008,(bool *)&local_18);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// ConstructExpressionParser @ 14192e480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTextFilterExpressionEvaluator::ConstructExpressionParser(FTextFilterExpressionEvaluator *this)

{
  TMap<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>_>
  *this_00;
  undefined ***pppuVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a4 [4];
  FGuid *local_a0;
  code **local_98;
  FGuid local_90;
  FGuid local_80;
  FGuid local_70;
  code *local_58 [2];
  undefined **local_48;
  FTextFilterExpressionEvaluator *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  SetupGrammar(this);
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_1>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  this_00 = &(this->JumpTable).BinaryOps;
  local_40 = (FTextFilterExpressionEvaluator *)CONCAT71(local_40._1_7_,local_a8);
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_1>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_98 = local_58;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLessOrEqual>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_2>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (FTextFilterExpressionEvaluator *)CONCAT71(local_40._1_7_,local_a8);
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_98 = local_58;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLess>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_3>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (FTextFilterExpressionEvaluator *)CONCAT71(local_40._1_7_,local_a8);
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_98 = local_58;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreaterOrEqual>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_48 = (undefined **)
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_4>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (FTextFilterExpressionEvaluator *)CONCAT71(local_40._1_7_,local_a8);
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_98 = local_58;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreater>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_5>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (FTextFilterExpressionEvaluator *)CONCAT71(local_40._1_7_,local_a8);
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_98 = local_58;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNotEqual>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_6>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (FTextFilterExpressionEvaluator *)CONCAT71(local_40._1_7_,local_a8);
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_6>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_98 = local_58;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FEqual>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_7>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (FTextFilterExpressionEvaluator *)CONCAT71(local_40._1_7_,local_a8);
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_7>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_98 = local_58;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FOr>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_8>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (FTextFilterExpressionEvaluator *)CONCAT71(local_40._1_7_,local_a8);
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_8>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FOr>::GetTypeId(void)'
             ::__l2::Global;
  local_98 = local_58;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_9>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (FTextFilterExpressionEvaluator *)CONCAT71(local_40._1_7_,local_a8);
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_9>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FOr>::GetTypeId(void)'
             ::__l2::Global;
  local_98 = local_58;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_10>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (FTextFilterExpressionEvaluator *)CONCAT71(local_40._1_7_,local_a8);
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_10>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_98 = local_58;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FOr>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_11>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (FTextFilterExpressionEvaluator *)CONCAT71(local_40._1_7_,local_a8);
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_11>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_98 = local_58;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FAnd>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_12>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (FTextFilterExpressionEvaluator *)CONCAT71(local_40._1_7_,local_a8);
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_12>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FAnd>::GetTypeId(void)'
             ::__l2::Global;
  local_98 = local_58;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_13>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (FTextFilterExpressionEvaluator *)CONCAT71(local_40._1_7_,local_a8);
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<bool,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_13>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FAnd>::GetTypeId(void)'
             ::__l2::Global;
  local_98 = local_58;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_14>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (FTextFilterExpressionEvaluator *)CONCAT71(local_40._1_7_,local_a8);
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<bool,bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_14>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_98 = local_58;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FAnd>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapUnaryFunction<TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_15>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (FTextFilterExpressionEvaluator *)CONCAT71(local_40._1_7_,local_a8);
  local_80 = (FGuid)ZEXT816(0);
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapUnaryFunction<TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_15>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_30 = (undefined ***)0x0;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
             ::__l2::Global;
  local_98 = local_58;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)&this->JumpTable,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapUnaryFunction<bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_16>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_40 = (FTextFilterExpressionEvaluator *)CONCAT71(local_40._1_7_,local_a8);
  local_80 = (FGuid)ZEXT816(0);
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapUnaryFunction<bool,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_16>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_30 = (undefined ***)0x0;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
             ::__l2::Global;
  local_98 = local_58;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)&this->JumpTable,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::`2'::<lambda_17>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<TextFilterExpressionParser::FTextToken,TextFilterExpressionParser::FTextToken,ITextFilterExpressionContext,`FTextFilterExpressionEvaluator::ConstructExpressionParser'::__l2::<lambda_17>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*>
                ::Call;
  local_a0 = &local_90;
  local_98 = local_58;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FFunction>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
             ::__l2::Global;
  local_40 = this;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_&&>
              *)local_a4,(bool *)(local_a4 + 4));
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// EvaluateCompiledExpression @ 141938810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FTextFilterExpressionEvaluator::EvaluateCompiledExpression
          (FTextFilterExpressionEvaluator *this,
          TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
          *param_1,ITextFilterExpressionContext *param_2,FText *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 *puVar5;
  FTextToken *this_00;
  ulonglong uVar6;
  undefined1 auStack_d8 [32];
  TIOperatorEvaluationEnvironment<wchar_t> local_b8;
  TOperatorJumpTable<ITextFilterExpressionContext,wchar_t> *local_b0;
  ITextFilterExpressionContext *local_a8;
  undefined1 local_98 [64];
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  uVar6 = (ulonglong)(param_1->Variant).TypeIndex;
  if ((2 < uVar6) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar6 + 4) != '\0') {
    if ((this->CompiledFilterSingleBasicStringTextToken).bIsSet != false) {
      if ((this->CompiledFilterSingleBasicStringTextToken).TypedValue.String.InternalString.Data.
          ArrayNum < 2) {
        return true;
      }
      cVar4 = (**(code **)*param_2)
                        (param_2,&this->CompiledFilterSingleBasicStringTextToken,
                         (this->CompiledFilterSingleBasicStringTextToken).TypedValue.
                         TextComparisonMode);
      if ((this->CompiledFilterSingleBasicStringTextToken).TypedValue.InvertResult == No) {
        return (bool)cVar4;
      }
      return cVar4 == '\0';
    }
    if (((param_1->Variant).TypeIndex != '\0') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    local_b8 = (TIOperatorEvaluationEnvironment<wchar_t>)
               &___7__TOperatorEvaluationEnvironment_VITextFilterExpressionContext___W__6B_;
    local_b0 = &this->JumpTable;
    local_a8 = param_2;
    ExpressionParser::Evaluate<wchar_t>
              ((TValueOrError<FExpressionNode,FExpressionError> *)local_98,
               (TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_> *)param_1,&local_b8);
    uVar6 = (ulonglong)local_58;
    if ((2 < uVar6) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar6) == '\0') {
      if (param_3 != (FText *)0x0) {
        if ((local_58 != 1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        FText::operator=(param_3,(FText *)local_98);
      }
    }
    else {
      if ((local_58 != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      puVar5 = local_98 + 0x18;
      if (((local_98._12_4_ !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
            ::__l2::Global.D ||
           local_98._8_4_ !=
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
           ::__l2::Global.C) ||
          local_98._4_4_ !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.B) ||
          local_98._0_4_ !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
          ::__l2::Global.A) {
        puVar5 = (undefined1 *)0x0;
      }
      if (puVar5 != (undefined1 *)0x0) {
        uVar3 = *puVar5;
LAB_141938a3d:
        if ((2 < local_58) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_58])(local_98);
        return (bool)uVar3;
      }
      if ((local_58 != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      this_00 = (FTextToken *)(local_98 + 0x18);
      if (((local_98._12_4_ !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
            ::__l2::Global.D ||
           local_98._8_4_ !=
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
           ::__l2::Global.C) ||
          local_98._4_4_ !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
          ::__l2::Global.B) ||
          local_98._0_4_ !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
          ::__l2::Global.A) {
        this_00 = (FTextToken *)0x0;
      }
      if (this_00 != (FTextToken *)0x0) {
        uVar3 = TextFilterExpressionParser::FTextToken::EvaluateAsBasicStringExpression
                          (this_00,param_2);
        goto LAB_141938a3d;
      }
    }
    if ((2 < local_58) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58])(local_98);
  }
  return false;
}

// GetFilterErrorText @ 141947620

FText * __thiscall
FTextFilterExpressionEvaluator::GetFilterErrorText
          (FTextFilterExpressionEvaluator *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->FilterErrorText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->FilterErrorText).Flags;
  return __return_storage_ptr__;
}

// GetFilterExpressionTokens @ 141947670

TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> * __thiscall
FTextFilterExpressionEvaluator::GetFilterExpressionTokens(FTextFilterExpressionEvaluator *this)

{
  return &this->ExpressionTokens;
}

// GetFilterText @ 141947680

FText * __thiscall
FTextFilterExpressionEvaluator::GetFilterText
          (FTextFilterExpressionEvaluator *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->FilterText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->FilterText).Flags;
  return __return_storage_ptr__;
}

// GetFilterType @ 1419476d0

ETextFilterExpressionType __thiscall
FTextFilterExpressionEvaluator::GetFilterType(FTextFilterExpressionEvaluator *this)

{
  return this->FilterType;
}

// SetFilterText @ 14196ab60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FTextFilterExpressionEvaluator::SetFilterText(FTextFilterExpressionEvaluator *this,FText *param_1)

{
  TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> *pTVar1;
  TOptional<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>_>
  *pTVar2;
  TOptional<TextFilterExpressionParser::FTextToken> *this_00;
  undefined8 uVar3;
  ITextData IVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  TExpressionToken<wchar_t> *pTVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 uVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  FString *pFVar16;
  FString *pFVar17;
  FText *pFVar18;
  FTextToken *pFVar19;
  FTextToken *pFVar20;
  FExpressionNode *pFVar21;
  TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  *pTVar22;
  wchar_t *pwVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  ITextData *pIVar28;
  uint uVar29;
  int iVar30;
  ITextData *pIVar31;
  FExpressionNode *pFVar32;
  FExpressionNode *pFVar33;
  longlong lVar34;
  FTextToken *pFVar35;
  int *piVar36;
  FTextFilterExpressionEvaluator *pFVar37;
  FExpressionNode *pFVar38;
  uint uVar39;
  FTextToken *pFVar40;
  bool bVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auStackY_848 [32];
  undefined1 local_7f6;
  undefined1 local_7f5 [5];
  ForAnyElementType local_7f0;
  undefined8 local_7e8;
  FTextToken *local_7e0;
  longlong local_7d8;
  FTextFilterString local_7d0;
  FTextFilterString local_7b0;
  FString local_790;
  FString local_780;
  undefined **local_770;
  undefined1 local_768 [16];
  undefined1 local_750 [4];
  undefined1 local_74c [4];
  undefined1 local_748 [8];
  FTextFilterExpressionEvaluator *local_740;
  TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> local_738;
  FTextToken local_728;
  FTextToken local_700;
  FText local_6d8 [2];
  undefined8 local_6b8;
  FString local_6b0;
  undefined1 local_698 [64];
  undefined1 local_658 [64];
  undefined1 local_618 [64];
  undefined1 local_5d8 [64];
  FTextToken local_598;
  FExpressionNode local_568;
  FExpressionNode local_528;
  FExpressionNode local_4e8;
  FExpressionNode local_4a8;
  TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_468;
  undefined1 local_448 [64];
  byte local_408;
  TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_3f8;
  FExpressionNode local_3d8;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  FExpressionNode local_378;
  wchar_t *local_338;
  longlong lStack_330;
  undefined8 local_328;
  FExpressionNode local_318;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  FExpressionNode local_2b8;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  ITextData local_268;
  FExpressionNode local_258;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  FExpressionNode local_1f8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  FExpressionNode local_198;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  ITextData local_148;
  FExpressionNode local_138;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  FExpressionNode local_d8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_848;
  local_740 = this;
  pFVar16 = FText::ToString(&this->FilterText);
  pFVar17 = FText::ToString(param_1);
  iVar30 = (pFVar16->Data).ArrayNum;
  iVar15 = (pFVar17->Data).ArrayNum;
  if (iVar30 == iVar15) {
    if (iVar30 < 2) {
      return false;
    }
    iVar30 = wcscmp((wchar_t *)(pFVar16->Data).AllocatorInstance.Data,
                    (wchar_t *)(pFVar17->Data).AllocatorInstance.Data);
    bVar41 = iVar30 == 0;
  }
  else {
    bVar41 = iVar15 + iVar30 == 1;
  }
  if (bVar41) {
    return false;
  }
  this->FilterType = Invalid;
  pIVar31 = (param_1->TextData).Reference;
  pIVar28 = (this->FilterText).TextData.Reference;
  if (pIVar28 != pIVar31) {
    (this->FilterText).TextData.Reference = pIVar31;
    if (pIVar31 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar31 + 8))(pIVar31,local_750);
    }
    if (pIVar28 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar28 + 0x10))(pIVar28);
    }
  }
  pTVar1 = &this->ExpressionTokens;
  (this->FilterText).Flags = param_1->Flags;
  piVar36 = &(this->ExpressionTokens).ArrayMax;
  pTVar8 = (TExpressionToken<wchar_t> *)(pTVar1->AllocatorInstance).Data;
  iVar30 = (this->ExpressionTokens).ArrayNum;
  local_7e0 = (FTextToken *)piVar36;
  if (*piVar36 < 0) {
    DestructItems<TExpressionToken<wchar_t>,int>(pTVar8,iVar30);
    (this->ExpressionTokens).ArrayNum = 0;
    if (*piVar36 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&pTVar1->AllocatorInstance,0,piVar36);
    }
  }
  else {
    DestructItems<TExpressionToken<wchar_t>,int>(pTVar8,iVar30);
    (this->ExpressionTokens).ArrayNum = 0;
  }
  pFVar40 = (FTextToken *)0x0;
  if ((this->CompiledFilterSingleBasicStringTextToken).bIsSet != false) {
    pFVar9 = (this->CompiledFilterSingleBasicStringTextToken).TypedValue.String.InternalStringAnsi.
             AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    pFVar9 = (this->CompiledFilterSingleBasicStringTextToken).TypedValue.String.InternalString.Data.
             AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (this->CompiledFilterSingleBasicStringTextToken).bIsSet = false;
  }
  bVar41 = FText::IsEmptyOrWhitespace(&this->FilterText);
  if (bVar41) {
    this->FilterType = Empty;
    pFVar18 = FText::GetEmpty();
    FText::operator=(&this->FilterErrorText,pFVar18);
    if ((this->CompiledFilter).bIsSet == false) {
      return true;
    }
    uVar25 = (ulonglong)(this->CompiledFilter).TypedValue.Variant.TypeIndex;
    if ((2 < uVar25) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar41)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar25])(&this->CompiledFilter);
    (this->CompiledFilter).bIsSet = false;
    return true;
  }
  pFVar16 = FText::ToString(&this->FilterText);
  if ((pFVar16->Data).ArrayNum == 0) {
    pwVar23 = L"";
  }
  else {
    pwVar23 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
  }
  ExpressionParser::Lex<wchar_t>(&local_468,pwVar23,&this->TokenDefinitions);
  uVar25 = (ulonglong)local_468.Variant.TypeIndex;
  if ((2 < uVar25) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar41)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar25) == '\0') {
    if ((local_468.Variant.TypeIndex != 1) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar41)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    FText::operator=(&this->FilterErrorText,(FText *)&local_468);
  }
  else {
    if ((local_468.Variant.TypeIndex != 0) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar41)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    iVar30 = (int)local_468.Variant._padding_;
    if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_468.Variant._padding_ & 0xffffffff);
    }
    if (*piVar36 < iVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar30,&pTVar1->AllocatorInstance,(this->ExpressionTokens).ArrayNum,
                 piVar36);
    }
    iVar30 = (int)local_468.Variant._padding_;
    bVar41 = false;
    pIVar31 = (ITextData *)(local_468.Variant._padding_ + 8);
    pIVar28 = (ITextData *)(local_468.Variant._padding_ + (longlong)iVar30 * 0xc * 8);
    uVar25 = local_468.Variant._padding_;
    while( true ) {
      if ((int)uVar25 != iVar30) {
        local_7f6 = 0;
        `TCheckedPointerIterator<TExpressionToken<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_7f6);
        uVar25 = local_468.Variant._padding_;
      }
      uVar39 = 0;
      iVar15 = (int)uVar25;
      pFVar37 = this;
      if (pIVar31 + -1 == pIVar28) {
        if (0 < iVar15) {
          uVar27 = 1;
          IVar4 = *(ITextData *)(local_468.Variant._padding_ + 0x50);
          local_768 = *(undefined1 (*) [16])(local_468.Variant._padding_ + 0x40);
          uVar42 = *(undefined4 *)(local_468.Variant._padding_ + 0x40);
          uVar43 = *(undefined4 *)&((ITextData *)(local_468.Variant._padding_ + 0x40))->field_0x4;
          uVar44 = *(undefined4 *)(local_468.Variant._padding_ + 0x48);
          uVar45 = *(undefined4 *)&((ITextData *)(local_468.Variant._padding_ + 0x48))->field_0x4;
          if (1 < iVar15) {
            lVar34 = 0x60;
            uVar24 = local_768._8_8_;
            do {
              uVar26 = uVar39;
              if ((int)uVar27 < (int)uVar25) {
                uVar26 = ~uVar27 >> 0x1f;
              }
              if (uVar26 == 0) {
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                uVar25 = local_468.Variant._padding_;
                if (bVar14) {
                  pcVar10 = (code *)swi(3);
                  uVar12 = (*pcVar10)();
                  return (bool)uVar12;
                }
              }
              if (uVar24 < *(ulonglong *)
                            (&((ITextData *)(local_468.Variant._padding_ + 0x48))->field_0x0 +
                            lVar34)) {
                uVar24 = *(ulonglong *)
                          (&((ITextData *)(local_468.Variant._padding_ + 0x48))->field_0x0 + lVar34)
                ;
              }
              uVar27 = uVar27 + 1;
              lVar34 = lVar34 + 0x60;
              local_768._8_8_ = uVar24;
              auVar11 = local_768;
            } while ((int)uVar27 < (int)uVar25);
            local_768._8_4_ = (undefined4)uVar24;
            local_768._12_4_ = (undefined4)(uVar24 >> 0x20);
            uVar42 = local_768._0_4_;
            uVar43 = local_768._4_4_;
            uVar44 = local_768._8_4_;
            uVar45 = local_768._12_4_;
            local_768 = auVar11;
          }
          pFVar18 = FText::TrimPrecedingAndTrailing(local_6d8,&this->FilterText);
          pFVar16 = FText::ToString(pFVar18);
          pFVar16 = ::FString::FString(&local_6b0,pFVar16);
          pFVar20 = TextFilterExpressionParser::CreateTextTokenFromUnquotedString
                              (&local_598,pFVar16);
          pFVar32 = FExpressionNode::FExpressionNode<TextFilterExpressionParser::FTextToken>
                              (&local_4e8,pFVar20);
          FExpressionNode::FExpressionNode(&local_198,pFVar32);
          local_158 = uVar42;
          uStack_154 = uVar43;
          uStack_150 = uVar44;
          uStack_14c = uVar45;
          local_148 = IVar4;
          FExpressionNode::~FExpressionNode(pFVar32);
          pFVar32 = (FExpressionNode *)(this->ExpressionTokens).AllocatorInstance.Data;
          if (((pFVar32 <= &local_198) &&
              (&local_198 <
               (FExpressionNode *)
               ((longlong)pFVar32 + (longlong)(this->ExpressionTokens).ArrayMax * 0x60))) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          iVar30 = (this->ExpressionTokens).ArrayNum;
          if (iVar30 == (this->ExpressionTokens).ArrayMax) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&(this->ExpressionTokens).AllocatorInstance,(int *)local_7e0)
            ;
          }
          (this->ExpressionTokens).ArrayNum = iVar30 + 1;
          pFVar32 = (FExpressionNode *)
                    ((this->ExpressionTokens).AllocatorInstance.Data + (longlong)iVar30 * 0x60);
          FExpressionNode::FExpressionNode(pFVar32,&local_198);
          pFVar32[1].TypeId.A = local_158;
          pFVar32[1].TypeId.B = uStack_154;
          pFVar32[1].TypeId.C = uStack_150;
          pFVar32[1].TypeId.D = uStack_14c;
          *(ITextData *)pFVar32[1].InlineBytes = local_148;
          FExpressionNode::~FExpressionNode(&local_198);
          if (local_6d8[0].TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_6d8[0].TextData.Reference + 0x10))();
          }
        }
        goto LAB_14196bfde;
      }
      pFVar20 = (FTextToken *)(pIVar31 + 2);
      if (((*(uint *)&pIVar31->field_0x4 !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
            ::__l2::Global.D ||
           *(uint *)&pIVar31[-1].field_0x4 !=
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
           ::__l2::Global.B) ||
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
          ::__l2::Global.C != *(uint *)pIVar31) ||
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
          ::__l2::Global.A != *(uint *)(pIVar31 + -1)) {
        pFVar20 = pFVar40;
      }
      if (pFVar20 != (FTextToken *)0x0) break;
      pIVar31 = pIVar31 + 0xc;
    }
    bVar14 = false;
    pFVar20 = pFVar40;
    pFVar35 = pFVar40;
    if (0 < iVar15) {
      do {
        piVar36 = &(this->ExpressionTokens).ArrayMax;
        uVar26 = (uint)pFVar20;
        uVar27 = uVar39;
        if ((int)uVar26 < (int)uVar25) {
          uVar27 = ~uVar26 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), uVar25 = local_468.Variant._padding_, bVar13)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        pFVar32 = (FExpressionNode *)(local_468.Variant._padding_ + (longlong)pFVar35 * 0xc * 8);
        if ((int)(uVar26 + 3) < (int)uVar25) {
          pFVar20 = (FTextToken *)(pFVar32->InlineBytes + 8);
          if ((((pFVar32->TypeId).D !=
                `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
                ::__l2::Global.D ||
               (pFVar32->TypeId).C !=
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
               ::__l2::Global.C) ||
              (pFVar32->TypeId).B !=
              `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
              ::__l2::Global.B) ||
              `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
              ::__l2::Global.A != (pFVar32->TypeId).A) {
            pFVar20 = pFVar40;
          }
          if (pFVar20 == (FTextToken *)0x0) goto LAB_14196b924;
          pwVar23 = *(wchar_t **)&pFVar32[1].TypeId;
          lVar34 = *(longlong *)&pFVar32[1].TypeId.C;
          uVar29 = uVar26 + 1;
          uVar3 = *(undefined8 *)pFVar32[1].InlineBytes;
          uVar27 = uVar39;
          if ((int)uVar29 < (int)uVar25) {
            uVar27 = ~uVar29 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             uVar25 = local_468.Variant._padding_, bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          pIVar31 = (ITextData *)
                    (local_468.Variant._padding_ +
                    (longlong)
                    ((longlong)&(pFVar35->String).InternalString.Data.AllocatorInstance.Data + 1) *
                    0xc * 8);
          if ((((*(uint *)&pIVar31[1].field_0x4 !=
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
                 ::__l2::Global.D ||
                *(uint *)(pIVar31 + 1) !=
                `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
                ::__l2::Global.C) ||
               *(uint *)&pIVar31->field_0x4 !=
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
               ::__l2::Global.B) ||
               *(uint *)pIVar31 !=
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
               ::__l2::Global.A) ||
             ((ITextData *)(local_468.Variant._padding_ + ((longlong)(int)uVar29 * 0xc + 3) * 8) ==
              (ITextData *)0x0)) goto LAB_14196b924;
          uVar26 = uVar26 + 2;
          pFVar35 = (FTextToken *)
                    ((longlong)&(pFVar35->String).InternalString.Data.AllocatorInstance.Data + 2);
          uVar27 = uVar39;
          if ((int)uVar26 < (int)uVar25) {
            uVar27 = ~uVar26 >> 0x1f;
          }
          local_7e0 = pFVar35;
          if ((uVar27 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             uVar25 = local_468.Variant._padding_, bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          iVar30 = 1;
          local_7d8 = (longlong)pFVar35 * 0x60;
          IVar4 = *(ITextData *)(local_468.Variant._padding_ + ((longlong)pFVar35 * 0xc + 10) * 8);
          local_768 = *(undefined1 (*) [16])
                       (local_468.Variant._padding_ + ((longlong)pFVar35 * 0xc + 8) * 8);
          uVar42 = local_768._0_4_;
          uVar43 = local_768._4_4_;
          uVar44 = local_768._8_4_;
          uVar45 = local_768._12_4_;
          uVar24 = local_768._8_8_;
          pIVar31 = (ITextData *)local_468.Variant._padding_;
          if ((int)uVar26 < (int)uVar25) {
            do {
              uVar27 = uVar39;
              if ((int)uVar26 < (int)uVar25) {
                uVar27 = ~uVar26 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , uVar25 = local_468.Variant._padding_,
                 pIVar31 = (ITextData *)local_468.Variant._padding_, bVar13)) {
                pcVar10 = (code *)swi(3);
                uVar12 = (*pcVar10)();
                return (bool)uVar12;
              }
              uVar42 = local_768._0_4_;
              uVar43 = local_768._4_4_;
              if ((((*(uint *)(&pIVar31[1].field_0x4 + local_7d8) ==
                     `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
                     ::__l2::Global.D &&
                    *(uint *)(&pIVar31[1].field_0x0 + local_7d8) ==
                    `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
                    ::__l2::Global.C) &&
                   *(uint *)(&pIVar31->field_0x4 + local_7d8) ==
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
                   ::__l2::Global.B) &&
                   *(uint *)(&pIVar31->field_0x0 + local_7d8) ==
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
                   ::__l2::Global.A) &&
                 (pIVar31 + (longlong)(int)uVar26 * 0xc + 3 != (ITextData *)0x0)) {
                iVar30 = iVar30 + 1;
              }
              else if ((((*(uint *)(&pIVar31[1].field_0x4 + local_7d8) ==
                          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
                          ::__l2::Global.D &&
                         *(uint *)(&pIVar31[1].field_0x0 + local_7d8) ==
                         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
                         ::__l2::Global.C) &&
                        *(uint *)(&pIVar31->field_0x4 + local_7d8) ==
                        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
                        ::__l2::Global.B) &&
                        *(uint *)(&pIVar31->field_0x0 + local_7d8) ==
                        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
                        ::__l2::Global.A) &&
                      ((pIVar31 + (longlong)(int)uVar26 * 0xc + 3 != (ITextData *)0x0 &&
                       (iVar30 = iVar30 + -1, iVar30 == 0)))) {
                pFVar35 = local_7e0;
                uVar44 = local_768._8_4_;
                uVar45 = local_768._12_4_;
                goto LAB_14196b223;
              }
              if (uVar24 < *(ulonglong *)(&pIVar31[9].field_0x0 + local_7d8)) {
                uVar24 = *(ulonglong *)(&pIVar31[9].field_0x0 + local_7d8);
              }
              local_7e0 = (FTextToken *)
                          ((longlong)&(local_7e0->String).InternalString.Data.AllocatorInstance.Data
                          + 1);
              local_7d8 = local_7d8 + 0x60;
              local_768._8_8_ = uVar24;
              auVar11 = local_768;
              uVar26 = uVar26 + 1;
            } while ((int)uVar26 < (int)uVar25);
            local_768._8_4_ = (undefined4)uVar24;
            local_768._12_4_ = (undefined4)(uVar24 >> 0x20);
            pFVar35 = local_7e0;
            uVar44 = local_768._8_4_;
            uVar45 = local_768._12_4_;
            local_768 = auVar11;
          }
LAB_14196b223:
          local_698._4_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
               ::__l2::Global.B;
          local_698._0_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
               ::__l2::Global.A;
          local_698._8_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
               ::__l2::Global.C;
          local_698._12_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
               ::__l2::Global.D;
          local_6b8 = 0;
          local_698._16_8_ =
               &___7__FInlineDataStorage_UFSubExpressionStart_TextFilterExpressionParser___Impl__6B_
          ;
          FExpressionNode::FExpressionNode(&local_3d8,(FExpressionNode *)local_698);
          local_388 = 0;
          local_398 = 0;
          uStack_390 = 0;
          FExpressionNode::~FExpressionNode((FExpressionNode *)local_698);
          pFVar32 = (FExpressionNode *)(pTVar1->AllocatorInstance).Data;
          if (((pFVar32 <= &local_3d8) &&
              (&local_3d8 <
               (FExpressionNode *)
               ((longlong)pFVar32 + (longlong)(this->ExpressionTokens).ArrayMax * 0x60))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          iVar30 = (this->ExpressionTokens).ArrayNum;
          piVar36 = &(this->ExpressionTokens).ArrayMax;
          if (iVar30 == (this->ExpressionTokens).ArrayMax) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&pTVar1->AllocatorInstance,piVar36);
          }
          (this->ExpressionTokens).ArrayNum = iVar30 + 1;
          pFVar32 = (FExpressionNode *)((pTVar1->AllocatorInstance).Data + (longlong)iVar30 * 0x60);
          FExpressionNode::FExpressionNode(pFVar32,&local_3d8);
          pFVar32[1].TypeId.A = (undefined4)local_398;
          pFVar32[1].TypeId.B = local_398._4_4_;
          pFVar32[1].TypeId.C = (undefined4)uStack_390;
          pFVar32[1].TypeId.D = uStack_390._4_4_;
          *(undefined8 *)pFVar32[1].InlineBytes = local_388;
          FExpressionNode::~FExpressionNode(&local_3d8);
          ::FString::ConstructFromPtrSize(&local_790,pwVar23,(int)(lVar34 - (longlong)pwVar23 >> 1))
          ;
          local_7d0.InternalString.Data.AllocatorInstance.Data =
               local_790.Data.AllocatorInstance.Data;
          local_7d0.InternalString.Data.ArrayNum = local_790.Data.ArrayNum;
          local_7d0.InternalString.Data.ArrayMax = local_790.Data.ArrayMax;
          local_790.Data.ArrayNum = 0;
          local_790.Data.ArrayMax = 0;
          local_790.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_7d0.InternalStringAnsi.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_7d0.InternalStringAnsi.ArrayNum = 0;
          local_7d0.InternalStringAnsi.ArrayMax = 0;
          FTextFilterString::UppercaseInternalString(&local_7d0);
          local_728.String.InternalString.Data.AllocatorInstance.Data =
               local_7d0.InternalString.Data.AllocatorInstance.Data;
          local_728.String.InternalString.Data.ArrayNum = local_7d0.InternalString.Data.ArrayNum;
          local_728.String.InternalString.Data.ArrayMax = local_7d0.InternalString.Data.ArrayMax;
          local_728.String.InternalStringAnsi.AllocatorInstance.Data =
               local_7d0.InternalStringAnsi.AllocatorInstance.Data;
          local_728.String.InternalStringAnsi.ArrayNum = local_7d0.InternalStringAnsi.ArrayNum;
          local_728.String.InternalStringAnsi.ArrayMax = local_7d0.InternalStringAnsi.ArrayMax;
          local_7d0.InternalStringAnsi.ArrayNum = 0;
          local_7d0.InternalStringAnsi.ArrayMax = 0;
          local_7d0.InternalString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_7d0.InternalString.Data.ArrayNum = 0;
          local_7d0.InternalString.Data.ArrayMax = 0;
          local_7d0.InternalStringAnsi.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_728.TextComparisonMode = Partial;
          local_728.InvertResult = No;
          pFVar32 = FExpressionNode::FExpressionNode<TextFilterExpressionParser::FTextToken>
                              (&local_568,&local_728);
          FExpressionNode::FExpressionNode(&local_378,pFVar32);
          local_338 = pwVar23;
          lStack_330 = lVar34;
          local_328 = uVar3;
          FExpressionNode::~FExpressionNode(pFVar32);
          pFVar32 = (FExpressionNode *)(pTVar1->AllocatorInstance).Data;
          if (((pFVar32 <= &local_378) &&
              (&local_378 <
               (FExpressionNode *)
               ((longlong)pFVar32 + (longlong)(this->ExpressionTokens).ArrayMax * 0x60))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          iVar30 = (this->ExpressionTokens).ArrayNum;
          if (iVar30 == (this->ExpressionTokens).ArrayMax) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&pTVar1->AllocatorInstance,piVar36);
          }
          (this->ExpressionTokens).ArrayNum = iVar30 + 1;
          pFVar32 = (FExpressionNode *)((pTVar1->AllocatorInstance).Data + (longlong)iVar30 * 0x60);
          FExpressionNode::FExpressionNode(pFVar32,&local_378);
          *(wchar_t **)&pFVar32[1].TypeId = local_338;
          pFVar32[1].TypeId.C = (undefined4)lStack_330;
          pFVar32[1].TypeId.D = lStack_330._4_4_;
          *(undefined8 *)pFVar32[1].InlineBytes = local_328;
          FExpressionNode::~FExpressionNode(&local_378);
          if (local_790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_790.Data.AllocatorInstance.Data);
          }
          local_658._16_8_ =
               &___7__FInlineDataStorage_VFFunction_TextFilterExpressionParser___Impl__6B_;
          local_658._0_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FFunction>::GetTypeId(void)'
               ::__l2::Global.A;
          local_658._4_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FFunction>::GetTypeId(void)'
               ::__l2::Global.B;
          local_658._8_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FFunction>::GetTypeId(void)'
               ::__l2::Global.C;
          local_658._12_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FFunction>::GetTypeId(void)'
               ::__l2::Global.D;
          FExpressionNode::FExpressionNode(&local_318,(FExpressionNode *)local_658);
          uVar3 = local_6b8;
          local_2c8 = local_6b8;
          local_2d8 = 0;
          uStack_2d0 = 0;
          FExpressionNode::~FExpressionNode((FExpressionNode *)local_658);
          pFVar32 = (FExpressionNode *)(pTVar1->AllocatorInstance).Data;
          if (((pFVar32 <= &local_318) &&
              (&local_318 <
               (FExpressionNode *)
               ((longlong)pFVar32 + (longlong)(this->ExpressionTokens).ArrayMax * 0x60))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          iVar30 = (this->ExpressionTokens).ArrayNum;
          if (iVar30 == (this->ExpressionTokens).ArrayMax) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&pTVar1->AllocatorInstance,piVar36);
          }
          (this->ExpressionTokens).ArrayNum = iVar30 + 1;
          pFVar32 = (FExpressionNode *)((pTVar1->AllocatorInstance).Data + (longlong)iVar30 * 0x60);
          FExpressionNode::FExpressionNode(pFVar32,&local_318);
          pFVar32[1].TypeId.A = (undefined4)local_2d8;
          pFVar32[1].TypeId.B = local_2d8._4_4_;
          pFVar32[1].TypeId.C = (undefined4)uStack_2d0;
          pFVar32[1].TypeId.D = uStack_2d0._4_4_;
          *(undefined8 *)pFVar32[1].InlineBytes = local_2c8;
          FExpressionNode::~FExpressionNode(&local_318);
          ::FString::ConstructFromPtrSize
                    (&local_780,(wchar_t *)CONCAT44(uVar43,uVar42),
                     (int)((longlong)(uVar24 - (longlong)CONCAT44(uVar43,uVar42)) >> 1));
          local_7b0.InternalString.Data.AllocatorInstance.Data =
               local_780.Data.AllocatorInstance.Data;
          local_7b0.InternalString.Data.ArrayNum = local_780.Data.ArrayNum;
          local_7b0.InternalString.Data.ArrayMax = local_780.Data.ArrayMax;
          local_780.Data.ArrayNum = 0;
          local_780.Data.ArrayMax = 0;
          local_780.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_7b0.InternalStringAnsi.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_7b0.InternalStringAnsi.ArrayNum = 0;
          local_7b0.InternalStringAnsi.ArrayMax = 0;
          FTextFilterString::UppercaseInternalString(&local_7b0);
          local_700.String.InternalString.Data.AllocatorInstance.Data =
               local_7b0.InternalString.Data.AllocatorInstance.Data;
          local_700.String.InternalString.Data.ArrayNum = local_7b0.InternalString.Data.ArrayNum;
          local_700.String.InternalString.Data.ArrayMax = local_7b0.InternalString.Data.ArrayMax;
          local_700.String.InternalStringAnsi.AllocatorInstance.Data =
               local_7b0.InternalStringAnsi.AllocatorInstance.Data;
          local_700.String.InternalStringAnsi.ArrayNum = local_7b0.InternalStringAnsi.ArrayNum;
          local_700.String.InternalStringAnsi.ArrayMax = local_7b0.InternalStringAnsi.ArrayMax;
          local_7b0.InternalStringAnsi.ArrayNum = 0;
          local_7b0.InternalStringAnsi.ArrayMax = 0;
          local_7b0.InternalString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_7b0.InternalString.Data.ArrayNum = 0;
          local_7b0.InternalString.Data.ArrayMax = 0;
          local_7b0.InternalStringAnsi.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_700.TextComparisonMode = Partial;
          local_700.InvertResult = No;
          pFVar32 = FExpressionNode::FExpressionNode<TextFilterExpressionParser::FTextToken>
                              (&local_528,&local_700);
          FExpressionNode::FExpressionNode(&local_2b8,pFVar32);
          local_278 = uVar42;
          uStack_274 = uVar43;
          uStack_270 = uVar44;
          uStack_26c = uVar45;
          local_268 = IVar4;
          FExpressionNode::~FExpressionNode(pFVar32);
          pFVar32 = (FExpressionNode *)(pTVar1->AllocatorInstance).Data;
          if (((pFVar32 <= &local_2b8) &&
              (&local_2b8 <
               (FExpressionNode *)
               ((longlong)pFVar32 + (longlong)(this->ExpressionTokens).ArrayMax * 0x60))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          iVar30 = (this->ExpressionTokens).ArrayNum;
          if (iVar30 == (this->ExpressionTokens).ArrayMax) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&pTVar1->AllocatorInstance,piVar36);
          }
          (this->ExpressionTokens).ArrayNum = iVar30 + 1;
          pFVar32 = (FExpressionNode *)((pTVar1->AllocatorInstance).Data + (longlong)iVar30 * 0x60);
          FExpressionNode::FExpressionNode(pFVar32,&local_2b8);
          pFVar32[1].TypeId.A = local_278;
          pFVar32[1].TypeId.B = uStack_274;
          pFVar32[1].TypeId.C = uStack_270;
          pFVar32[1].TypeId.D = uStack_26c;
          *(ITextData *)pFVar32[1].InlineBytes = local_268;
          FExpressionNode::~FExpressionNode(&local_2b8);
          if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_780.Data.AllocatorInstance.Data);
          }
          local_618._4_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
               ::__l2::Global.B;
          local_618._0_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
               ::__l2::Global.A;
          local_618._8_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
               ::__l2::Global.C;
          local_618._12_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
               ::__l2::Global.D;
          local_618._16_8_ =
               &___7__FInlineDataStorage_UFSubExpressionEnd_TextFilterExpressionParser___Impl__6B_;
          FExpressionNode::FExpressionNode(&local_258,(FExpressionNode *)local_618);
          local_218 = 0;
          uStack_210 = 0;
          local_208 = uVar3;
          FExpressionNode::~FExpressionNode((FExpressionNode *)local_618);
          pFVar32 = (FExpressionNode *)(pTVar1->AllocatorInstance).Data;
          if (((pFVar32 <= &local_258) &&
              (&local_258 <
               (FExpressionNode *)
               ((longlong)pFVar32 + (longlong)(this->ExpressionTokens).ArrayMax * 0x60))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          iVar30 = (this->ExpressionTokens).ArrayNum;
          if (iVar30 == (this->ExpressionTokens).ArrayMax) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&pTVar1->AllocatorInstance,piVar36);
          }
          (this->ExpressionTokens).ArrayNum = iVar30 + 1;
          pFVar32 = (FExpressionNode *)((pTVar1->AllocatorInstance).Data + (longlong)iVar30 * 0x60);
          FExpressionNode::FExpressionNode(pFVar32,&local_258);
          pFVar32[1].TypeId.A = (undefined4)local_218;
          pFVar32[1].TypeId.B = local_218._4_4_;
          pFVar32[1].TypeId.C = (undefined4)uStack_210;
          pFVar32[1].TypeId.D = uStack_210._4_4_;
          *(undefined8 *)pFVar32[1].InlineBytes = local_208;
          FExpressionNode::~FExpressionNode(&local_258);
        }
        else {
LAB_14196b924:
          if (!bVar41) {
            uVar27 = (pFVar32->TypeId).C;
            pFVar20 = (FTextToken *)(pFVar32->InlineBytes + 8);
            uVar29 = (pFVar32->TypeId).D;
            uVar6 = (pFVar32->TypeId).B;
            uVar7 = (pFVar32->TypeId).A;
            pFVar19 = pFVar20;
            if (((uVar29 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FEqual>::GetTypeId(void)'
                            ::__l2::Global.D ||
                 uVar27 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FEqual>::GetTypeId(void)'
                           ::__l2::Global.C) ||
                uVar6 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FEqual>::GetTypeId(void)'
                         ::__l2::Global.B) ||
                uVar7 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FEqual>::GetTypeId(void)'
                         ::__l2::Global.A) {
              pFVar19 = pFVar40;
            }
            if (pFVar19 == (FTextToken *)0x0) {
              pFVar19 = pFVar20;
              if (((uVar29 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNotEqual>::GetTypeId(void)'
                              ::__l2::Global.D ||
                   uVar27 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNotEqual>::GetTypeId(void)'
                             ::__l2::Global.C) ||
                  uVar6 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNotEqual>::GetTypeId(void)'
                           ::__l2::Global.B) ||
                  uVar7 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNotEqual>::GetTypeId(void)'
                           ::__l2::Global.A) {
                pFVar19 = pFVar40;
              }
              if (pFVar19 == (FTextToken *)0x0) {
                pFVar19 = pFVar20;
                if (((uVar29 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLess>::GetTypeId(void)'
                                ::__l2::Global.D ||
                     uVar27 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLess>::GetTypeId(void)'
                               ::__l2::Global.C) ||
                    uVar6 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLess>::GetTypeId(void)'
                             ::__l2::Global.B) ||
                    uVar7 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLess>::GetTypeId(void)'
                             ::__l2::Global.A) {
                  pFVar19 = pFVar40;
                }
                if (pFVar19 == (FTextToken *)0x0) {
                  pFVar19 = pFVar20;
                  if (((uVar29 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLessOrEqual>::GetTypeId(void)'
                                  ::__l2::Global.D ||
                       uVar27 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLessOrEqual>::GetTypeId(void)'
                                 ::__l2::Global.C) ||
                      uVar6 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLessOrEqual>::GetTypeId(void)'
                               ::__l2::Global.B) ||
                      uVar7 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FLessOrEqual>::GetTypeId(void)'
                               ::__l2::Global.A) {
                    pFVar19 = pFVar40;
                  }
                  if (pFVar19 == (FTextToken *)0x0) {
                    pFVar19 = pFVar20;
                    if (((uVar29 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreater>::GetTypeId(void)'
                                    ::__l2::Global.D ||
                         uVar27 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreater>::GetTypeId(void)'
                                   ::__l2::Global.C) ||
                        uVar6 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreater>::GetTypeId(void)'
                                 ::__l2::Global.B) ||
                        uVar7 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreater>::GetTypeId(void)'
                                 ::__l2::Global.A) {
                      pFVar19 = pFVar40;
                    }
                    if (pFVar19 == (FTextToken *)0x0) {
                      if (((uVar29 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreaterOrEqual>::GetTypeId(void)'
                                      ::__l2::Global.D ||
                           uVar27 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreaterOrEqual>::GetTypeId(void)'
                                     ::__l2::Global.C) ||
                          uVar6 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreaterOrEqual>::GetTypeId(void)'
                                   ::__l2::Global.B) ||
                          uVar7 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FGreaterOrEqual>::GetTypeId(void)'
                                   ::__l2::Global.A) {
                        pFVar20 = pFVar40;
                      }
                      if (pFVar20 == (FTextToken *)0x0) goto LAB_14196ba89;
                    }
                  }
                }
              }
            }
            bVar41 = true;
          }
LAB_14196ba89:
          if (bVar14) {
            uVar27 = (pFVar32->TypeId).C;
            pFVar20 = (FTextToken *)(pFVar32->InlineBytes + 8);
            uVar29 = (pFVar32->TypeId).D;
            uVar6 = (pFVar32->TypeId).B;
            uVar7 = (pFVar32->TypeId).A;
            pFVar19 = pFVar20;
            if (((uVar29 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
                            ::__l2::Global.D ||
                 uVar27 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
                           ::__l2::Global.C) ||
                uVar6 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
                         ::__l2::Global.B) ||
                uVar7 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
                         ::__l2::Global.A) {
              pFVar19 = pFVar40;
            }
            if (pFVar19 == (FTextToken *)0x0) {
              pFVar19 = pFVar20;
              if (((uVar29 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
                              ::__l2::Global.D ||
                   uVar27 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
                             ::__l2::Global.C) ||
                  uVar6 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
                           ::__l2::Global.B) ||
                  uVar7 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
                           ::__l2::Global.A) {
                pFVar19 = pFVar40;
              }
              if (pFVar19 == (FTextToken *)0x0) {
                if (((uVar29 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
                                ::__l2::Global.D ||
                     uVar27 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
                               ::__l2::Global.C) ||
                    uVar6 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
                             ::__l2::Global.B) ||
                    uVar7 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
                             ::__l2::Global.A) {
                  pFVar20 = pFVar40;
                }
                if (pFVar20 == (FTextToken *)0x0) goto LAB_14196bc6b;
              }
            }
            local_5d8._16_8_ =
                 &___7__FInlineDataStorage_UFAnd_TextFilterExpressionParser___Impl__6B_;
            local_5d8._0_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FAnd>::GetTypeId(void)'
                 ::__l2::Global.A;
            local_5d8._4_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FAnd>::GetTypeId(void)'
                 ::__l2::Global.B;
            local_5d8._8_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FAnd>::GetTypeId(void)'
                 ::__l2::Global.C;
            local_5d8._12_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FAnd>::GetTypeId(void)'
                 ::__l2::Global.D;
            FExpressionNode::FExpressionNode(&local_1f8,(FExpressionNode *)local_5d8);
            local_1b8._0_4_ = pFVar32[1].TypeId.A;
            local_1b8._4_4_ = pFVar32[1].TypeId.B;
            uStack_1b0._0_4_ = pFVar32[1].TypeId.C;
            uStack_1b0._4_4_ = pFVar32[1].TypeId.D;
            local_1a8 = *(undefined8 *)pFVar32[1].InlineBytes;
            FExpressionNode::~FExpressionNode((FExpressionNode *)local_5d8);
            pFVar33 = (FExpressionNode *)(pTVar1->AllocatorInstance).Data;
            if (((pFVar33 <= &local_1f8) &&
                (&local_1f8 <
                 (FExpressionNode *)
                 ((longlong)pFVar33 + (longlong)(this->ExpressionTokens).ArrayMax * 0x60))) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar10 = (code *)swi(3);
              uVar12 = (*pcVar10)();
              return (bool)uVar12;
            }
            iVar30 = (this->ExpressionTokens).ArrayNum;
            if (iVar30 == (this->ExpressionTokens).ArrayMax) {
              iVar30 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1060,&pTVar1->AllocatorInstance,piVar36);
            }
            (this->ExpressionTokens).ArrayNum = iVar30 + 1;
            pFVar33 = (FExpressionNode *)
                      ((pTVar1->AllocatorInstance).Data + (longlong)iVar30 * 0x60);
            FExpressionNode::FExpressionNode(pFVar33,&local_1f8);
            pFVar33[1].TypeId.A = (undefined4)local_1b8;
            pFVar33[1].TypeId.B = local_1b8._4_4_;
            pFVar33[1].TypeId.C = (undefined4)uStack_1b0;
            pFVar33[1].TypeId.D = uStack_1b0._4_4_;
            *(undefined8 *)pFVar33[1].InlineBytes = local_1a8;
            FExpressionNode::~FExpressionNode(&local_1f8);
          }
LAB_14196bc6b:
          uVar27 = (pFVar32->TypeId).C;
          uVar29 = (pFVar32->TypeId).D;
          uVar6 = (pFVar32->TypeId).B;
          uVar7 = (pFVar32->TypeId).A;
          pFVar20 = (FTextToken *)(pFVar32->InlineBytes + 8);
          if (((uVar29 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
                          ::__l2::Global.D ||
               uVar27 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
                         ::__l2::Global.C) ||
              uVar6 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
                       ::__l2::Global.B) ||
              uVar7 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
                       ::__l2::Global.A) {
            pFVar20 = pFVar40;
          }
          if (pFVar20 == (FTextToken *)0x0) {
            bVar14 = false;
            pFVar20 = (FTextToken *)(pFVar32->InlineBytes + 8);
            if (((uVar29 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
                            ::__l2::Global.D ||
                 uVar27 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
                           ::__l2::Global.C) ||
                uVar6 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
                         ::__l2::Global.B) ||
                uVar7 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
                         ::__l2::Global.A) {
              pFVar20 = pFVar40;
            }
            if (pFVar20 != (FTextToken *)0x0) goto LAB_14196bce4;
          }
          else {
LAB_14196bce4:
            bVar14 = true;
          }
          pFVar33 = (FExpressionNode *)(pTVar1->AllocatorInstance).Data;
          if (((pFVar33 <= pFVar32) &&
              (pFVar32 < (FExpressionNode *)
                         ((longlong)pFVar33 + (longlong)(this->ExpressionTokens).ArrayMax * 0x60)))
             && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          iVar30 = (this->ExpressionTokens).ArrayNum;
          if (iVar30 == (this->ExpressionTokens).ArrayMax) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&pTVar1->AllocatorInstance,piVar36);
          }
          (this->ExpressionTokens).ArrayNum = iVar30 + 1;
          pFVar33 = (FExpressionNode *)((pTVar1->AllocatorInstance).Data + (longlong)iVar30 * 0x60);
          FExpressionNode::FExpressionNode(pFVar33,pFVar32);
          uVar27 = pFVar32[1].TypeId.B;
          uVar29 = pFVar32[1].TypeId.C;
          uVar6 = pFVar32[1].TypeId.D;
          pFVar33[1].TypeId.A = pFVar32[1].TypeId.A;
          pFVar33[1].TypeId.B = uVar27;
          pFVar33[1].TypeId.C = uVar29;
          pFVar33[1].TypeId.D = uVar6;
          *(undefined8 *)pFVar33[1].InlineBytes = *(undefined8 *)pFVar32[1].InlineBytes;
        }
        pFVar20 = (FTextToken *)(ulonglong)(uVar26 + 1);
        uVar25 = local_468.Variant._padding_;
        pFVar35 = (FTextToken *)
                  ((longlong)&(pFVar35->String).InternalString.Data.AllocatorInstance.Data + 1);
        pFVar37 = local_740;
      } while ((int)(uVar26 + 1) < (int)local_468.Variant._padding_);
    }
LAB_14196bfde:
    uVar39 = (pFVar37->ExpressionTokens).ArrayNum;
    local_7f0.Data = (FScriptContainerElement *)0x0;
    local_7e8 = 0;
    if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar39);
    }
    if (0 < (int)uVar39) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar39,&local_7f0,0,(int *)((longlong)&local_7e8 + 4));
    }
    pFVar33 = (FExpressionNode *)(pFVar37->ExpressionTokens).AllocatorInstance.Data;
    iVar30 = (pFVar37->ExpressionTokens).ArrayNum;
    pFVar32 = pFVar33 + 1;
    pFVar38 = (FExpressionNode *)((longlong)pFVar33 + (longlong)iVar30 * 0x60);
    while( true ) {
      if ((pFVar37->ExpressionTokens).ArrayNum != iVar30) {
        local_7f5[0] = 0;
        `TCheckedPointerIterator<TExpressionToken<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_7f5);
      }
      if (pFVar33 == pFVar38) break;
      pFVar21 = FExpressionNode::Copy(pFVar33,&local_4a8);
      FExpressionNode::FExpressionNode(&local_138,pFVar21);
      local_f8._0_4_ = (pFVar32->TypeId).A;
      local_f8._4_4_ = (pFVar32->TypeId).B;
      uStack_f0._0_4_ = (pFVar32->TypeId).C;
      uStack_f0._4_4_ = (pFVar32->TypeId).D;
      local_e8 = *(undefined8 *)pFVar32->InlineBytes;
      FExpressionNode::~FExpressionNode(pFVar21);
      if (((local_7f0.Data <= &local_138) &&
          (&local_138 < (FExpressionNode *)(local_7f0.Data + (longlong)local_7e8._4_4_ * 0x60))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      iVar15 = (int)local_7e8;
      if ((int)local_7e8 == local_7e8._4_4_) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&local_7f0,(int *)((longlong)&local_7e8 + 4));
      }
      local_7e8 = CONCAT44(local_7e8._4_4_,iVar15 + 1);
      pFVar21 = (FExpressionNode *)(local_7f0.Data + (longlong)iVar15 * 0x60);
      FExpressionNode::FExpressionNode(pFVar21,&local_138);
      pFVar21[1].TypeId.A = (undefined4)local_f8;
      pFVar21[1].TypeId.B = local_f8._4_4_;
      pFVar21[1].TypeId.C = (undefined4)uStack_f0;
      pFVar21[1].TypeId.D = uStack_f0._4_4_;
      *(undefined8 *)pFVar21[1].InlineBytes = local_e8;
      FExpressionNode::~FExpressionNode(&local_138);
      pFVar33 = (FExpressionNode *)(pFVar33[1].InlineBytes + 0x10);
      pFVar32 = (FExpressionNode *)(pFVar32[1].InlineBytes + 0x10);
    }
    local_738.AllocatorInstance.Data = local_7f0.Data;
    local_738.ArrayNum = (int)local_7e8;
    local_738.ArrayMax = local_7e8._4_4_;
    local_7e8 = 0;
    local_7f0.Data = (FScriptContainerElement *)0x0;
    pTVar22 = ExpressionParser::Compile<wchar_t>(&local_3f8,&local_738,&pFVar37->Grammar);
    pTVar2 = &pFVar37->CompiledFilter;
    if ((TOptional<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>_>
         *)pTVar22 != pTVar2) {
      if ((pFVar37->CompiledFilter).bIsSet != false) {
        uVar25 = (ulonglong)(pFVar37->CompiledFilter).TypedValue.Variant.TypeIndex;
        if ((2 < uVar25) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar14)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar25])(pTVar2);
      }
      bVar5 = (pTVar22->Variant).TypeIndex;
      (pFVar37->CompiledFilter).TypedValue.Variant.TypeIndex = bVar5;
      if ((2 < bVar5) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x105,L""), bVar14)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[bVar5])(pTVar2,pTVar22);
      (pFVar37->CompiledFilter).bIsSet = true;
    }
    if ((2 < local_3f8.Variant.TypeIndex) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_3f8.Variant.TypeIndex])(&local_3f8);
    DestructItems<TExpressionToken<wchar_t>,int>
              ((TExpressionToken<wchar_t> *)local_7f0.Data,(int)local_7e8);
    if ((TExpressionToken<wchar_t> *)local_7f0.Data != (TExpressionToken<wchar_t> *)0x0) {
      FMemory::Free(local_7f0.Data);
    }
    if (((pFVar37->CompiledFilter).bIsSet == false) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar14)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    uVar25 = (ulonglong)(pFVar37->CompiledFilter).TypedValue.Variant.TypeIndex;
    if ((2 < uVar25) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar25 + 4) == '\0') {
      if (((pFVar37->CompiledFilter).TypedValue.Variant.TypeIndex != '\x01') &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar41)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      pIVar31 = (ITextData *)(pFVar37->CompiledFilter).TypedValue.Variant._padding_;
      pIVar28 = (pFVar37->FilterErrorText).TextData.Reference;
      if (pIVar28 != pIVar31) {
        (pFVar37->FilterErrorText).TextData.Reference = pIVar31;
        if (pIVar31 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar31 + 8))(pIVar31,local_748);
        }
        if (pIVar28 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar28 + 0x10))(pIVar28);
        }
      }
      (pFVar37->FilterErrorText).Flags =
           (uint)(pFVar37->CompiledFilter).TypedValue.Variant._padding_;
    }
    else {
      pFVar37->FilterType = bVar41 + BasicString;
      pFVar18 = FText::GetEmpty();
      pIVar31 = (pFVar37->FilterErrorText).TextData.Reference;
      pIVar28 = (pFVar18->TextData).Reference;
      if (pIVar31 != pIVar28) {
        (pFVar37->FilterErrorText).TextData.Reference = pIVar28;
        if (pIVar28 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar28 + 8))(pIVar28,local_74c);
        }
        if (pIVar31 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar31 + 0x10))(pIVar31);
        }
      }
      (pFVar37->FilterErrorText).Flags = pFVar18->Flags;
      local_770 = &___7FDummyTextFilterExpressionContext__6B_;
      pcVar10 = *(code **)(pFVar37->_padding_ + 0x10);
      if (((pFVar37->CompiledFilter).bIsSet == false) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar41)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      (*pcVar10)(pFVar37,&pFVar37->CompiledFilter,&local_770,&pFVar37->FilterErrorText);
      if (((pFVar37->CompiledFilter).bIsSet == false) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar41)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      if (((pFVar37->CompiledFilter).TypedValue.Variant.TypeIndex != '\0') &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar41)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      if ((int)(pFVar37->CompiledFilter).TypedValue.Variant._padding_ == 1) {
        if (((pFVar37->CompiledFilter).bIsSet == false) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar41)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        if (((pFVar37->CompiledFilter).TypedValue.Variant.TypeIndex != '\0') &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar41)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        if (((int)(pFVar37->CompiledFilter).TypedValue.Variant._padding_ < 1) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar41)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        if (*(int *)((pFVar37->CompiledFilter).TypedValue.Variant._padding_ + 0x58) == 0) {
          if (((pFVar37->CompiledFilter).bIsSet == false) &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar41)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          if (((pFVar37->CompiledFilter).TypedValue.Variant.TypeIndex != '\0') &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index == TypeIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                  ,0x97,L""), bVar41)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          if (((int)(pFVar37->CompiledFilter).TypedValue.Variant._padding_ < 1) &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar41)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          pFVar32 = FExpressionNode::Copy
                              ((FExpressionNode *)
                               (pFVar37->CompiledFilter).TypedValue.Variant._padding_,&local_d8);
          FExpressionNode::FExpressionNode((FExpressionNode *)local_448,pFVar32);
          local_408 = 0;
          FExpressionNode::~FExpressionNode(&local_d8);
          if ((local_408 != 0) &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index == TypeIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                  ,0x97,L""), bVar41)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          pFVar20 = (FTextToken *)(local_448 + 0x18);
          if (((local_448._12_4_ !=
                `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
                ::__l2::Global.D ||
               local_448._8_4_ !=
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
               ::__l2::Global.C) ||
              local_448._4_4_ !=
              `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
              ::__l2::Global.B) ||
              local_448._0_4_ !=
              `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FTextToken>::GetTypeId(void)'
              ::__l2::Global.A) {
            pFVar20 = pFVar40;
          }
          if ((pFVar20 != (FTextToken *)0x0) &&
             (this_00 = &pFVar37->CompiledFilterSingleBasicStringTextToken,
             (TOptional<TextFilterExpressionParser::FTextToken> *)pFVar20 != this_00)) {
            if ((pFVar37->CompiledFilterSingleBasicStringTextToken).bIsSet != false) {
              pFVar9 = (pFVar37->CompiledFilterSingleBasicStringTextToken).TypedValue.String.
                       InternalStringAnsi.AllocatorInstance.Data;
              if (pFVar9 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar9);
              }
              pFVar9 = (this_00->TypedValue).String.InternalString.Data.AllocatorInstance.Data;
              if (pFVar9 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar9);
              }
            }
            TextFilterExpressionParser::FTextToken::FTextToken(&this_00->TypedValue,pFVar20);
            (pFVar37->CompiledFilterSingleBasicStringTextToken).bIsSet = true;
          }
          uVar25 = (ulonglong)local_408;
          if ((2 < local_408) &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar41)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar25] ==
              UE::Core::Private::TDestructorCaller<FExpressionNode>::Destruct) {
            FExpressionNode::~FExpressionNode((FExpressionNode *)local_448);
            local_770 = &___7ITextFilterExpressionContext__6B_;
            goto LAB_14196c780;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar25])();
        }
      }
      local_770 = &___7ITextFilterExpressionContext__6B_;
    }
  }
LAB_14196c780:
  if ((2 < local_468.Variant.TypeIndex) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar41)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_468.Variant.TypeIndex])(&local_468);
  return true;
}

// SetupGrammar @ 14196cf70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTextFilterExpressionEvaluator::SetupGrammar(FTextFilterExpressionEvaluator *this)

{
  TTokenDefinitions<wchar_t> *this_00;
  FExpressionGrammar *this_01;
  undefined ***pppuVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  FGuid *local_70;
  FGuid *local_68;
  code *local_58 [2];
  undefined **local_48;
  code *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  this_00 = &this->TokenDefinitions;
  TTokenDefinitions<wchar_t>::IgnoreWhitespace(this_00);
  local_40 = TextFilterExpressionParser::
             ConsumeOperator<TextFilterExpressionParser::FSubExpressionStart>;
  local_30 = (undefined ***)0x0;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (this_00,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_30 = (undefined ***)0x0;
  local_40 = TextFilterExpressionParser::
             ConsumeOperator<TextFilterExpressionParser::FSubExpressionEnd>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (this_00,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (this->ExpressionEvaluatorMode == Complex) {
    local_30 = (undefined ***)0x0;
    local_40 = TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FLessOrEqual>
    ;
    local_48 = &
               ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                  ::Call;
    TTokenDefinitions<wchar_t>::DefineToken
              (this_00,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                        *)local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar1 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar1 = local_30;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    local_30 = (undefined ***)0x0;
    local_40 = TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FLess>;
    local_48 = &
               ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                  ::Call;
    TTokenDefinitions<wchar_t>::DefineToken
              (this_00,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                        *)local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar1 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar1 = local_30;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    local_30 = (undefined ***)0x0;
    local_40 = TextFilterExpressionParser::
               ConsumeOperator<TextFilterExpressionParser::FGreaterOrEqual>;
    local_48 = &
               ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                  ::Call;
    TTokenDefinitions<wchar_t>::DefineToken
              (this_00,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                        *)local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar1 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar1 = local_30;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    local_30 = (undefined ***)0x0;
    local_40 = TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FGreater>;
    local_48 = &
               ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                  ::Call;
    TTokenDefinitions<wchar_t>::DefineToken
              (this_00,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                        *)local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar1 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar1 = local_30;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    local_30 = (undefined ***)0x0;
    local_40 = TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FNotEqual>;
    local_48 = &
               ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                  ::Call;
    TTokenDefinitions<wchar_t>::DefineToken
              (this_00,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                        *)local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar1 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar1 = local_30;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    local_30 = (undefined ***)0x0;
    local_40 = TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FEqual>;
    local_48 = &
               ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                  ::Call;
    TTokenDefinitions<wchar_t>::DefineToken
              (this_00,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                        *)local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar1 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar1 = local_30;
      }
      (*(code *)(*pppuVar1)[2])();
    }
  }
  local_30 = (undefined ***)0x0;
  local_40 = TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FOr>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (this_00,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_30 = (undefined ***)0x0;
  local_40 = TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FAnd>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (this_00,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_30 = (undefined ***)0x0;
  local_40 = TextFilterExpressionParser::ConsumeOperator<TextFilterExpressionParser::FNot>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (this_00,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (this->ExpressionEvaluatorMode == Complex) {
    local_30 = (undefined ***)0x0;
    local_40 = TextFilterExpressionParser::ConsumeNumber;
    local_48 = &
               ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                  ::Call;
    TTokenDefinitions<wchar_t>::DefineToken
              (this_00,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                        *)local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar1 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar1 = local_30;
      }
      (*(code *)(*pppuVar1)[2])();
    }
  }
  local_40 = TextFilterExpressionParser::ConsumeBasicText;
  local_30 = (undefined ***)0x0;
  if (this->ExpressionEvaluatorMode == Complex) {
    local_40 = TextFilterExpressionParser::ConsumeComplexText;
  }
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (this_00,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_70 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionStart>::GetTypeId(void)'
              ::__l2::Global;
  this_01 = &this->Grammar;
  local_68 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
              ::__l2::Global;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_const_&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<FGuid_const_&,FGuid_const_&> *)local_78,(bool *)&local_70)
  ;
  FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FLessOrEqual>
            (this_01,1,RightToLeft,false);
  FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FLess>
            (this_01,1,RightToLeft,false);
  FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FGreaterOrEqual>
            (this_01,1,RightToLeft,false);
  FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FGreater>
            (this_01,1,RightToLeft,false);
  FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FNotEqual>
            (this_01,1,RightToLeft,false);
  FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FEqual>
            (this_01,1,RightToLeft,false);
  FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FOr>
            (this_01,2,RightToLeft,false);
  FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FAnd>
            (this_01,2,RightToLeft,false);
  FExpressionGrammar::DefineBinaryOperator<TextFilterExpressionParser::FFunction>
            (this_01,1,RightToLeft,false);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (&(this->Grammar).PreUnaryOperators,(FGuid *)local_78,
             (bool *)&`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFilterExpressionParser::FNot>::GetTypeId(void)'
                      ::__l2::Global);
  return;
}

// TestTextFilter @ 1419704f0

bool __thiscall
FTextFilterExpressionEvaluator::TestTextFilter
          (FTextFilterExpressionEvaluator *this,ITextFilterExpressionContext *param_1)

{
  undefined1 uVar1;
  
  if (this->FilterType == Empty) {
    return true;
  }
  if ((this->CompiledFilter).bIsSet != false) {
                    /* WARNING: Could not recover jumptable at 0x00014197050c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->_padding_ + 0x10))(this,&this->CompiledFilter,param_1,0);
    return (bool)uVar1;
  }
  return false;
}

