// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// FBasicMathExpressionEvaluator @ 1417a0a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBasicMathExpressionEvaluator * __thiscall
FBasicMathExpressionEvaluator::FBasicMathExpressionEvaluator(FBasicMathExpressionEvaluator *this)

{
  undefined ***pppuVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  FGuid *local_80;
  FGuid *local_78;
  code *local_68 [2];
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  (this->TokenDefinitions).bIgnoreWhitespace = false;
  (this->TokenDefinitions).Definitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TokenDefinitions).Definitions.ArrayNum = 0;
  (this->TokenDefinitions).Definitions.ArrayMax = 0;
  FExpressionGrammar::FExpressionGrammar(&this->Grammar);
  TOperatorJumpTable<void,wchar_t>::TOperatorJumpTable<void,wchar_t>(&this->JumpTable);
  TTokenDefinitions<wchar_t>::IgnoreWhitespace(&this->TokenDefinitions);
  local_40 = (undefined ***)0x0;
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FSubExpressionStart>;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_40 = (undefined ***)0x0;
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FSubExpressionEnd>;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  DefineArithmeticTokens(&this->TokenDefinitions);
  local_40 = (undefined ***)0x0;
  local_50 = ExpressionParser::ConsumeLocalizedNumberWithAgnosticFallback;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_80 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionStart>::GetTypeId(void)'
              ::__l2::Global;
  local_78 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
              ::__l2::Global;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_const_&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)&this->Grammar,(TPairInitializer<FGuid_const_&,FGuid_const_&> *)local_88,
             (bool *)&local_80);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (&(this->Grammar).PreUnaryOperators,(FGuid *)local_88,
             (bool *)&`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
                      ::__l2::Global);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (&(this->Grammar).PreUnaryOperators,(FGuid *)local_88,
             (bool *)&`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                      ::__l2::Global);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (&(this->Grammar).PreUnaryOperators,(FGuid *)local_88,
             (bool *)&`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSquareRoot>::GetTypeId(void)'
                      ::__l2::Global);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FPlus>
            (&this->Grammar,5,LeftToRight,false);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FMinus>
            (&this->Grammar,5,LeftToRight,false);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FStar>
            (&this->Grammar,4,LeftToRight,false);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FForwardSlash>
            (&this->Grammar,4,LeftToRight,false);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FPercent>
            (&this->Grammar,4,LeftToRight,false);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FPower>
            (&this->Grammar,3,RightToLeft,false);
  MapArithmeticOperators(&this->JumpTable);
  return this;
}

// operator() @ 1417ac810

double __thiscall
`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_1>::operator()
          (void *this,double param_1)

{
  return param_1;
}

// operator() @ 1417ad9c0

double __thiscall
`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_2>::operator()
          (void *this,double param_1)

{
  return (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(param_1,0) ^ (uint)__xmm_80000000000000008000000000000000);
}

// operator() @ 1417ada10

double __thiscall
`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_3>::operator()
          (void *this,double param_1)

{
  return (double)SQRT((float)param_1);
}

// operator() @ 1417ae530

double __thiscall
`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_4>::operator()
          (void *this,double param_1,double param_2)

{
  return param_1 + param_2;
}

// operator() @ 1417aea00

double __thiscall
`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_5>::operator()
          (void *this,double param_1,double param_2)

{
  return param_1 - param_2;
}

// operator() @ 1417aeae0

double __thiscall
`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_6>::operator()
          (void *this,double param_1,double param_2)

{
  return param_1 * param_2;
}

// operator() @ 1417aebd0

double __thiscall
`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_7>::operator()
          (void *this,double param_1,double param_2)

{
  float fVar1;
  
  fVar1 = powf((float)param_1,(float)param_2);
  return (double)fVar1;
}

// operator() @ 1417aec00

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_8>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          double param_1,double param_2)

{
  ITextData *pIVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FText *pFVar5;
  undefined1 local_res20 [8];
  FText local_18;
  
  if (param_2 == 0.0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"BasicMathExpressionEvaluator",L"DivisionByZero",
                        L"Division by zero");
    *(undefined8 *)&__return_storage_ptr__->Variant = 0;
    pIVar1 = (pFVar5->TextData).Reference;
    *(ITextData **)&__return_storage_ptr__->Variant = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
    }
    *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar5->Flags;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  else {
    uVar2 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
            ::__l2::Global.B;
    uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
            ::__l2::Global.C;
    uVar4 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
            ::__l2::Global.D;
    *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.A;
    *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar2;
    *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar3;
    *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar4;
    *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
         &___7__FInlineDataStorage_N_Impl__6B_;
    *(double *)&(__return_storage_ptr__->Variant).field_0x18 = param_1 / param_2;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
  }
  return __return_storage_ptr__;
}

// operator() @ 1417aecc0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_9>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          double param_1,double param_2)

{
  ITextData *pIVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FText *pFVar5;
  float fVar6;
  undefined1 local_res20 [8];
  FText local_18;
  
  if (param_2 == 0.0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"BasicMathExpressionEvaluator",L"ModZero",L"Modulo zero");
    *(undefined8 *)&__return_storage_ptr__->Variant = 0;
    pIVar1 = (pFVar5->TextData).Reference;
    *(ITextData **)&__return_storage_ptr__->Variant = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
    }
    *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar5->Flags;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  else {
    fVar6 = FGenericPlatformMath::Fmod((float)param_1,(float)param_2);
    uVar2 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
            ::__l2::Global.B;
    uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
            ::__l2::Global.C;
    uVar4 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
            ::__l2::Global.D;
    *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.A;
    *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar2;
    *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar3;
    *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar4;
    *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
         &___7__FInlineDataStorage_N_Impl__6B_;
    *(double *)&(__return_storage_ptr__->Variant).field_0x18 = (double)fVar6;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
  }
  return __return_storage_ptr__;
}

// DefineArithmeticOperators @ 1417c2d60

void __cdecl FBasicMathExpressionEvaluator::DefineArithmeticOperators(FExpressionGrammar *param_1)

{
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (&param_1->PreUnaryOperators,(FGuid *)&stack0x00000008,
             (bool *)&`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
                      ::__l2::Global);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (&param_1->PreUnaryOperators,(FGuid *)&stack0x00000008,
             (bool *)&`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                      ::__l2::Global);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (&param_1->PreUnaryOperators,(FGuid *)&stack0x00000008,
             (bool *)&`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSquareRoot>::GetTypeId(void)'
                      ::__l2::Global);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FPlus>(param_1,5,LeftToRight,false);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FMinus>(param_1,5,LeftToRight,false);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FStar>(param_1,4,LeftToRight,false);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FForwardSlash>
            (param_1,4,LeftToRight,false);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FPercent>(param_1,4,LeftToRight,false);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FPower>(param_1,3,RightToLeft,false);
  return;
}

// DefineArithmeticTokens @ 1417c2e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FBasicMathExpressionEvaluator::DefineArithmeticTokens(TTokenDefinitions<wchar_t> *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined **local_48;
  code *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_30 = (undefined ***)0x0;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_40 = ExpressionParser::ConsumeSymbol<ExpressionParser::FPlusEquals>;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (param_1,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_30 = (undefined ***)0x0;
  local_40 = ExpressionParser::ConsumeSymbol<ExpressionParser::FMinusEquals>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (param_1,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_30 = (undefined ***)0x0;
  local_40 = ExpressionParser::ConsumeSymbol<ExpressionParser::FStarEquals>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (param_1,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_30 = (undefined ***)0x0;
  local_40 = ExpressionParser::ConsumeSymbol<ExpressionParser::FForwardSlashEquals>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (param_1,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_30 = (undefined ***)0x0;
  local_40 = ExpressionParser::ConsumeSymbol<ExpressionParser::FPlus>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (param_1,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_30 = (undefined ***)0x0;
  local_40 = ExpressionParser::ConsumeSymbol<ExpressionParser::FMinus>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (param_1,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_30 = (undefined ***)0x0;
  local_40 = ExpressionParser::ConsumeSymbol<ExpressionParser::FStar>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (param_1,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_30 = (undefined ***)0x0;
  local_40 = ExpressionParser::ConsumeSymbol<ExpressionParser::FForwardSlash>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (param_1,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_30 = (undefined ***)0x0;
  local_40 = ExpressionParser::ConsumeSymbol<ExpressionParser::FPercent>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (param_1,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_30 = (undefined ***)0x0;
  local_40 = ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (param_1,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_30 = (undefined ***)0x0;
  local_40 = ExpressionParser::ConsumeSymbol<ExpressionParser::FPower>;
  local_48 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (param_1,(TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                      *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// Evaluate @ 1417c6a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<double,FExpressionError> * __thiscall
FBasicMathExpressionEvaluator::Evaluate
          (FBasicMathExpressionEvaluator *this,
          TValueOrError<double,FExpressionError> *__return_storage_ptr__,wchar_t *param_1,
          double param_2)

{
  ITextData IVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  ITextData IVar7;
  ITextData IVar8;
  longlong *plVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  TValueOrError<double,FExpressionError> *pTVar12;
  ITextData *pIVar13;
  ITextData *pIVar14;
  FText *pFVar15;
  FExpressionNode *this_00;
  ulonglong uVar16;
  ITextData *pIVar17;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  longlong local_490;
  TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> local_488;
  undefined1 local_478 [4];
  undefined1 local_474 [4];
  TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> local_470;
  FText local_460;
  FText local_450;
  TIOperatorEvaluationEnvironment<wchar_t> local_440;
  TOperatorJumpTable<void,wchar_t> *local_438;
  undefined8 local_430;
  FText local_428;
  undefined1 local_418 [24];
  double local_400;
  undefined1 local_3d8 [64];
  undefined1 local_398 [64];
  undefined1 local_358 [64];
  undefined1 local_318 [64];
  TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_2d8;
  TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_2c0;
  undefined1 local_2a8 [64];
  byte local_268;
  undefined1 local_258 [96];
  undefined1 local_1f8 [96];
  undefined1 local_198 [96];
  undefined1 local_138 [96];
  undefined1 local_d8 [96];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  ExpressionParser::Lex<wchar_t>(&local_2d8,param_1,&this->TokenDefinitions);
  uVar16 = (ulonglong)local_2d8.Variant.TypeIndex;
  if ((2 < uVar16) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
    return pTVar12;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar16) == '\0') {
    if ((local_2d8.Variant.TypeIndex != 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
      return pTVar12;
    }
    FText::FText(&local_460,(FText *)&local_2d8);
    if ((2 < local_2d8.Variant.TypeIndex) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
      return pTVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_2d8.Variant.TypeIndex])(&local_2d8);
    local_2d8.Variant.TypeIndex = 2;
    FText::FText((FText *)__return_storage_ptr__,&local_460);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_460.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_460.TextData.Reference + 0x10))();
    }
    uVar16 = (ulonglong)local_2d8.Variant.TypeIndex;
    if ((2 < local_2d8.Variant.TypeIndex) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
      return pTVar12;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16] ==
        UE::Core::Private::
        TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
        ::Destruct) {
      return __return_storage_ptr__;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_2d8);
    return __return_storage_ptr__;
  }
  if ((local_2d8.Variant.TypeIndex != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index == TypeIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                          ,0x97,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
    return pTVar12;
  }
  local_488._8_8_ = local_2d8.Variant._padding_;
  pIVar17 = (ITextData *)0x0;
  local_470.ArrayNum = (uint)local_2d8.Variant._padding_;
  local_488.AllocatorInstance.Data = (FScriptContainerElement *)local_2d8.Variant._padding_;
  local_2d8.Variant._padding_ = 0;
  local_2d8.Variant._padding_ = 0;
  if (2 < local_2d8.Variant.TypeIndex) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                        ,0xd4,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
      return pTVar12;
    }
    local_470.ArrayNum = local_488.ArrayNum;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_2d8.Variant.TypeIndex] !=
      UE::Core::Private::
      TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
      ::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_2d8.Variant.TypeIndex])(&local_2d8);
    local_470.ArrayNum = local_488.ArrayNum;
  }
  local_2d8.Variant.TypeIndex = 2;
  if (local_470.ArrayNum != 0) {
    if (local_470.ArrayNum < 1) {
      local_490 = (longlong)local_470.ArrayNum;
      local_498 = 0;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
        return pTVar12;
      }
      local_470.ArrayNum = local_488.ArrayNum;
    }
    IVar1 = *(ITextData *)(local_488.AllocatorInstance.Data + 0x50);
    IVar7 = *(ITextData *)(local_488.AllocatorInstance.Data + 0x40);
    IVar8 = *(ITextData *)(local_488.AllocatorInstance.Data + 0x48);
    if (local_470.ArrayNum < 1) {
      local_490 = (longlong)local_470.ArrayNum;
      local_498 = 0;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
        return pTVar12;
      }
      local_470.ArrayNum = local_488.ArrayNum;
    }
    uVar2 = *(uint *)(local_488.AllocatorInstance.Data + 0xc);
    pIVar14 = (ITextData *)(local_488.AllocatorInstance.Data + 0x18);
    uVar3 = *(uint *)local_488.AllocatorInstance.Data;
    uVar4 = *(uint *)(local_488.AllocatorInstance.Data + 4);
    uVar5 = *(uint *)(local_488.AllocatorInstance.Data + 8);
    pIVar13 = pIVar14;
    if (((uVar2 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlusEquals>::GetTypeId(void)'
                   ::__l2::Global.D ||
         uVar5 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlusEquals>::GetTypeId(void)'
                  ::__l2::Global.C) ||
        uVar4 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlusEquals>::GetTypeId(void)'
                 ::__l2::Global.B) ||
        uVar3 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlusEquals>::GetTypeId(void)'
                 ::__l2::Global.A) {
      pIVar13 = pIVar17;
    }
    if (pIVar13 == (ITextData *)0x0) {
      pIVar13 = pIVar14;
      if (((uVar2 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinusEquals>::GetTypeId(void)'
                     ::__l2::Global.D ||
           uVar5 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinusEquals>::GetTypeId(void)'
                    ::__l2::Global.C) ||
          uVar4 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinusEquals>::GetTypeId(void)'
                   ::__l2::Global.B) ||
          uVar3 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinusEquals>::GetTypeId(void)'
                   ::__l2::Global.A) {
        pIVar13 = pIVar17;
      }
      if (pIVar13 == (ITextData *)0x0) {
        if ((((uVar2 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStarEquals>::GetTypeId(void)'
                        ::__l2::Global.D &&
              uVar5 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStarEquals>::GetTypeId(void)'
                       ::__l2::Global.C) &&
             uVar4 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStarEquals>::GetTypeId(void)'
                      ::__l2::Global.B) &&
             uVar3 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStarEquals>::GetTypeId(void)'
                      ::__l2::Global.A) && (pIVar14 != (ITextData *)0x0)) {
          local_358._16_8_ = &___7__FInlineDataStorage_UFStar_ExpressionParser___Impl__6B_;
          local_358._0_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
               ::__l2::Global.A;
          local_358._4_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
               ::__l2::Global.B;
          local_358._8_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
               ::__l2::Global.C;
          local_358._12_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
               ::__l2::Global.D;
          FExpressionNode::FExpressionNode
                    ((FExpressionNode *)local_198,(FExpressionNode *)local_358);
          local_198._64_8_ = IVar7;
          local_198._72_8_ = IVar8;
          local_198._80_8_ = IVar1;
          FExpressionNode::~FExpressionNode((FExpressionNode *)local_358);
          TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                    (&local_488,(TExpressionToken<wchar_t> *)local_198,0);
          this_00 = (FExpressionNode *)local_198;
        }
        else {
          if ((((uVar2 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlashEquals>::GetTypeId(void)'
                          ::__l2::Global.D ||
                uVar5 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlashEquals>::GetTypeId(void)'
                         ::__l2::Global.C) ||
               uVar4 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlashEquals>::GetTypeId(void)'
                        ::__l2::Global.B) ||
               uVar3 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlashEquals>::GetTypeId(void)'
                        ::__l2::Global.A) || (pIVar14 == (ITextData *)0x0)) goto LAB_1417c708f;
          local_318._16_8_ = &___7__FInlineDataStorage_UFForwardSlash_ExpressionParser___Impl__6B_;
          local_318._0_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlash>::GetTypeId(void)'
               ::__l2::Global.A;
          local_318._4_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlash>::GetTypeId(void)'
               ::__l2::Global.B;
          local_318._8_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlash>::GetTypeId(void)'
               ::__l2::Global.C;
          local_318._12_4_ =
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlash>::GetTypeId(void)'
               ::__l2::Global.D;
          FExpressionNode::FExpressionNode
                    ((FExpressionNode *)local_138,(FExpressionNode *)local_318);
          local_138._64_8_ = IVar7;
          local_138._72_8_ = IVar8;
          local_138._80_8_ = IVar1;
          FExpressionNode::~FExpressionNode((FExpressionNode *)local_318);
          TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                    (&local_488,(TExpressionToken<wchar_t> *)local_138,0);
          this_00 = (FExpressionNode *)local_138;
        }
      }
      else {
        local_398._16_8_ = &___7__FInlineDataStorage_UFMinus_ExpressionParser___Impl__6B_;
        local_398._0_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
             ::__l2::Global.A;
        local_398._4_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
             ::__l2::Global.B;
        local_398._8_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
             ::__l2::Global.C;
        local_398._12_4_ =
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
             ::__l2::Global.D;
        FExpressionNode::FExpressionNode((FExpressionNode *)local_1f8,(FExpressionNode *)local_398);
        local_1f8._64_8_ = IVar7;
        local_1f8._72_8_ = IVar8;
        local_1f8._80_8_ = IVar1;
        FExpressionNode::~FExpressionNode((FExpressionNode *)local_398);
        TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                  (&local_488,(TExpressionToken<wchar_t> *)local_1f8,0);
        this_00 = (FExpressionNode *)local_1f8;
      }
    }
    else {
      local_3d8._16_8_ = &___7__FInlineDataStorage_UFPlus_ExpressionParser___Impl__6B_;
      local_3d8._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
           ::__l2::Global.A;
      local_3d8._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
           ::__l2::Global.B;
      local_3d8._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
           ::__l2::Global.C;
      local_3d8._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
           ::__l2::Global.D;
      FExpressionNode::FExpressionNode((FExpressionNode *)local_258,(FExpressionNode *)local_3d8);
      local_258._64_8_ = IVar7;
      local_258._72_8_ = IVar8;
      local_258._80_8_ = IVar1;
      FExpressionNode::~FExpressionNode((FExpressionNode *)local_3d8);
      TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                (&local_488,(TExpressionToken<wchar_t> *)local_258,0);
      this_00 = (FExpressionNode *)local_258;
    }
    FExpressionNode::~FExpressionNode(this_00);
    local_418._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.A;
    local_418._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.B;
    local_418._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.C;
    local_418._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
         ::__l2::Global.D;
    local_418._16_8_ = &___7__FInlineDataStorage_N_Impl__6B_;
    local_400 = param_2;
    FExpressionNode::FExpressionNode((FExpressionNode *)local_d8,(FExpressionNode *)local_418);
    local_d8._64_8_ = IVar7;
    local_d8._72_8_ = IVar8;
    local_d8._80_8_ = IVar1;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_418);
    TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
              (&local_488,(TExpressionToken<wchar_t> *)local_d8,0);
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_d8);
    if (local_488.ArrayNum < 3) {
      local_498 = 2;
      local_490 = (longlong)local_488.ArrayNum;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
        return pTVar12;
      }
    }
    FVar10.Data = local_488.AllocatorInstance.Data;
    FExpressionNode::~FExpressionNode((FExpressionNode *)(local_488.AllocatorInstance.Data + 0xc0));
    if (local_488.ArrayNum + -3 != 0) {
      memmove((ITextData *)(FVar10.Data + 0xc0),(ITextData *)(FVar10.Data + 0x120),
              (longlong)(local_488.ArrayNum + -3) * 0x60);
    }
    local_470.ArrayNum = local_488.ArrayNum - 1;
  }
LAB_1417c708f:
  local_470.AllocatorInstance.Data = local_488.AllocatorInstance.Data;
  local_470.ArrayMax = local_488.ArrayMax;
  local_488.ArrayNum = 0;
  local_488.ArrayMax = 0;
  local_488.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ExpressionParser::Compile<wchar_t>(&local_2c0,&local_470,&this->Grammar);
  uVar16 = (ulonglong)local_2c0.Variant.TypeIndex;
  if ((2 < local_2c0.Variant.TypeIndex) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
    return pTVar12;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar16 + 4) == '\0') {
    if ((local_2c0.Variant.TypeIndex != 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
      return pTVar12;
    }
    FText::FText(&local_450,(FText *)&local_2c0);
    if ((2 < local_2c0.Variant.TypeIndex) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
      return pTVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_2c0.Variant.TypeIndex])(&local_2c0);
    local_2c0.Variant.TypeIndex = 2;
    FText::FText((FText *)__return_storage_ptr__,&local_450);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_450.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_450.TextData.Reference + 0x10))();
    }
  }
  else {
    local_430 = 0;
    local_440 = (TIOperatorEvaluationEnvironment<wchar_t>)
                &___7__TOperatorEvaluationEnvironment_X_W__6B_;
    local_438 = &this->JumpTable;
    if ((local_2c0.Variant.TypeIndex != 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
      return pTVar12;
    }
    ExpressionParser::Evaluate<wchar_t>
              ((TValueOrError<FExpressionNode,FExpressionError> *)local_2a8,
               (TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_> *)&local_2c0,&local_440)
    ;
    uVar16 = (ulonglong)local_268;
    if ((2 < uVar16) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
      return pTVar12;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar16) == '\0') {
      if ((local_268 != 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
        return pTVar12;
      }
      plVar9 = (longlong *)CONCAT44(local_2a8._4_4_,local_2a8._0_4_);
      (__return_storage_ptr__->Variant)._padding_ = (longlong)plVar9;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9,local_478);
      }
      *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = local_2a8._8_4_;
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    }
    else {
      if ((local_268 != 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
        return pTVar12;
      }
      pIVar14 = (ITextData *)(local_2a8 + 0x18);
      if (((local_2a8._12_4_ !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
            ::__l2::Global.D ||
           local_2a8._8_4_ !=
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
           ::__l2::Global.C) ||
          local_2a8._4_4_ !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
          ::__l2::Global.B) ||
          local_2a8._0_4_ !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
          ::__l2::Global.A) {
        pIVar14 = pIVar17;
      }
      if (pIVar14 == (ITextData *)0x0) {
        pFVar15 = FText::AsLocalizable_Advanced_LocText
                            (&local_428,L"BasicMathExpressionEvaluator",L"UnrecognizedResult",
                             L"Unrecognized result returned from expression");
        (__return_storage_ptr__->Variant)._padding_ = 0;
        pIVar17 = (pFVar15->TextData).Reference;
        (__return_storage_ptr__->Variant)._padding_ = (longlong)pIVar17;
        if (pIVar17 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar17 + 8))(pIVar17,local_474);
        }
        *(uint *)&(__return_storage_ptr__->Variant)._padding_ = pFVar15->Flags;
        (__return_storage_ptr__->Variant).TypeIndex = '\x01';
        if (local_428.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_428.TextData.Reference + 0x10))();
        }
        if ((2 < local_268) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
          return pTVar12;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_268])(local_2a8);
        if ((2 < local_2c0.Variant.TypeIndex) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
          return pTVar12;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[local_2c0.Variant.TypeIndex] !=
            UE::Core::Private::
            TDestructorCaller<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
            ::Destruct) {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[local_2c0.Variant.TypeIndex])(&local_2c0);
        }
        DestructItems<TExpressionToken<wchar_t>,int>
                  ((TExpressionToken<wchar_t> *)local_488.AllocatorInstance.Data,local_488.ArrayNum)
        ;
        if ((TExpressionToken<wchar_t> *)local_488.AllocatorInstance.Data !=
            (TExpressionToken<wchar_t> *)0x0) {
          FMemory::Free(local_488.AllocatorInstance.Data);
        }
        uVar16 = (ulonglong)local_2d8.Variant.TypeIndex;
        if ((2 < local_2d8.Variant.TypeIndex) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
          return pTVar12;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar16] ==
            UE::Core::Private::
            TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
            ::Destruct) {
          return __return_storage_ptr__;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar16])(&local_2d8);
        return __return_storage_ptr__;
      }
      (__return_storage_ptr__->Variant)._padding_ = (longlong)*pIVar14;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
    }
    if ((2 < local_268) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
      return pTVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_268])(local_2a8);
  }
  uVar16 = (ulonglong)local_2c0.Variant.TypeIndex;
  if ((2 < local_2c0.Variant.TypeIndex) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
    return pTVar12;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16] !=
      UE::Core::Private::
      TDestructorCaller<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
      ::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_2c0);
  }
  DestructItems<TExpressionToken<wchar_t>,int>
            ((TExpressionToken<wchar_t> *)local_488.AllocatorInstance.Data,local_488.ArrayNum);
  if ((TExpressionToken<wchar_t> *)local_488.AllocatorInstance.Data !=
      (TExpressionToken<wchar_t> *)0x0) {
    FMemory::Free(local_488.AllocatorInstance.Data);
  }
  uVar16 = (ulonglong)local_2d8.Variant.TypeIndex;
  if ((2 < local_2d8.Variant.TypeIndex) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TValueOrError<double,FExpressionError> *)(*pcVar6)();
    return pTVar12;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16] !=
      UE::Core::Private::
      TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
      ::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_2d8);
  }
  return __return_storage_ptr__;
}

// MapArithmeticOperators @ 1417e2e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FBasicMathExpressionEvaluator::MapArithmeticOperators(TOperatorJumpTable<void,wchar_t> *param_1)

{
  undefined ***pppuVar1;
  TMap<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>_>
  *this;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_94 [4];
  FGuid *local_90;
  code **local_88;
  FGuid local_80;
  FGuid local_70;
  FGuid local_60;
  code *local_48 [2];
  undefined **local_38;
  undefined1 local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_1>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_1>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_70 = (FGuid)ZEXT816(0);
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
             ::__l2::Global;
  local_88 = local_48;
  local_20 = (undefined ***)0x0;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)param_1,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
              *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_2>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = local_98;
  local_70 = (FGuid)ZEXT816(0);
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_20 = (undefined ***)0x0;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
             ::__l2::Global;
  local_88 = local_48;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)param_1,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
              *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_3>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = local_98;
  local_70 = (FGuid)ZEXT816(0);
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapUnaryFunction<double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_20 = (undefined ***)0x0;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSquareRoot>::GetTypeId(void)'
             ::__l2::Global;
  local_88 = local_48;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)param_1,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
              *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  this = &param_1->BinaryOps;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_4>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = local_98;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_4>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
                      *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_5>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = local_98;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_5>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
                      *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_6>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = local_98;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_6>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
                      *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_7>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = local_98;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_7>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPower>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
                      *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_8>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = local_98;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_8>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlash>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
                      *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::`2'::<lambda_9>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = local_98;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FBasicMathExpressionEvaluator::MapArithmeticOperators'::__l2::<lambda_9>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_90 = &local_80;
  local_88 = local_48;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPercent>::GetTypeId(void)'
             ::__l2::Global;
  local_70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  local_60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
                      *)local_94,(bool *)(local_94 + 4));
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

