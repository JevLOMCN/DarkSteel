// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FUnitExpressionParser @ 1417a4920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUnitExpressionParser * __thiscall
FUnitExpressionParser::FUnitExpressionParser(FUnitExpressionParser *this,EUnit param_1)

{
  TOperatorJumpTable<void,wchar_t> *this_00;
  undefined ***pppuVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b4 [4];
  FGuid *local_b0;
  FGuid *local_a8;
  FGuid local_a0;
  FGuid local_90;
  FGuid local_80;
  undefined1 local_68 [16];
  undefined **local_58;
  FUnitExpressionParser *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  (this->TokenDefinitions).bIgnoreWhitespace = false;
  (this->TokenDefinitions).Definitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TokenDefinitions).Definitions.ArrayNum = 0;
  (this->TokenDefinitions).Definitions.ArrayMax = 0;
  FExpressionGrammar::FExpressionGrammar(&this->Grammar);
  this_00 = &this->JumpTable;
  TOperatorJumpTable<void,wchar_t>::TOperatorJumpTable<void,wchar_t>(this_00);
  TTokenDefinitions<wchar_t>::IgnoreWhitespace(&this->TokenDefinitions);
  local_40 = (undefined ***)0x0;
  local_50 = (FUnitExpressionParser *)ExpressionParser::ConsumeSymbol<ExpressionParser::FPlusEquals>
  ;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_40 = (undefined ***)0x0;
  local_50 = (FUnitExpressionParser *)
             ExpressionParser::ConsumeSymbol<ExpressionParser::FMinusEquals>;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_40 = (undefined ***)0x0;
  local_50 = (FUnitExpressionParser *)ExpressionParser::ConsumeSymbol<ExpressionParser::FStarEquals>
  ;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_40 = (undefined ***)0x0;
  local_50 = (FUnitExpressionParser *)
             ExpressionParser::ConsumeSymbol<ExpressionParser::FForwardSlashEquals>;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_40 = (undefined ***)0x0;
  local_50 = (FUnitExpressionParser *)ExpressionParser::ConsumeSymbol<ExpressionParser::FPlus>;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_40 = (undefined ***)0x0;
  local_50 = (FUnitExpressionParser *)ExpressionParser::ConsumeSymbol<ExpressionParser::FMinus>;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_40 = (undefined ***)0x0;
  local_50 = (FUnitExpressionParser *)ExpressionParser::ConsumeSymbol<ExpressionParser::FStar>;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_40 = (undefined ***)0x0;
  local_50 = (FUnitExpressionParser *)
             ExpressionParser::ConsumeSymbol<ExpressionParser::FForwardSlash>;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_40 = (undefined ***)0x0;
  local_50 = (FUnitExpressionParser *)
             ExpressionParser::ConsumeSymbol<ExpressionParser::FSubExpressionStart>;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_40 = (undefined ***)0x0;
  local_50 = (FUnitExpressionParser *)
             ExpressionParser::ConsumeSymbol<ExpressionParser::FSubExpressionEnd>;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_40 = (undefined ***)0x0;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_1>,TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  local_50 = this;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_b0 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionStart>::GetTypeId(void)'
              ::__l2::Global;
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
              ::__l2::Global;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_const_&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)&this->Grammar,(TPairInitializer<FGuid_const_&,FGuid_const_&> *)local_b4,
             (bool *)&local_b0);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (&(this->Grammar).PreUnaryOperators,(FGuid *)local_b4,
             (bool *)&`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
                      ::__l2::Global);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (&(this->Grammar).PreUnaryOperators,(FGuid *)local_b4,
             (bool *)&`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                      ::__l2::Global);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FPlus>
            (&this->Grammar,5,RightToLeft,false);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FMinus>
            (&this->Grammar,5,RightToLeft,false);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FStar>
            (&this->Grammar,4,RightToLeft,false);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FForwardSlash>
            (&this->Grammar,4,RightToLeft,false);
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_U__FNumericUnit_N__XV<lambda_2>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = (FUnitExpressionParser *)CONCAT71(local_50._1_7_,local_b8);
  local_90 = (FGuid)ZEXT816(0);
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Impl::WrapUnaryFunction<FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
       ::Call;
  local_b0 = &local_a0;
  local_40 = (undefined ***)0x0;
  local_a0 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
             ::__l2::Global;
  local_a8 = (FGuid *)local_68;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
              *)local_b4,(bool *)&local_b0);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_U__FNumericUnit_N__XV<lambda_3>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_3>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = (FUnitExpressionParser *)CONCAT71(local_50._1_7_,local_b8);
  local_90 = (FGuid)ZEXT816(0);
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Impl::WrapUnaryFunction<FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
       ::Call;
  local_b0 = &local_a0;
  local_40 = (undefined ***)0x0;
  local_a0 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
             ::__l2::Global;
  local_a8 = (FGuid *)local_68;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
              *)local_b4,(bool *)&local_b0);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_U__FNumericUnit_N__U1_XV<lambda_4>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_4>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_40 = (undefined ***)0x0;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
       ::Call;
  local_b0 = &local_a0;
  local_50 = (FUnitExpressionParser *)CONCAT71(local_50._1_7_,param_1);
  local_a8 = (FGuid *)local_68;
  local_a0 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
             ::__l2::Global;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)&(this->JumpTable).BinaryOps,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
              *)local_b4,(bool *)&local_b0);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_U__FNumericUnit_N__U1_XV<lambda_5>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_5>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_40 = (undefined ***)0x0;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
       ::Call;
  local_b0 = &local_a0;
  local_50 = (FUnitExpressionParser *)CONCAT71(local_50._1_7_,param_1);
  local_a8 = (FGuid *)local_68;
  local_a0 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
             ::__l2::Global;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)&(this->JumpTable).BinaryOps,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
              *)local_b4,(bool *)&local_b0);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_U__FNumericUnit_N__U1_XV<lambda_6>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_6>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = (FUnitExpressionParser *)CONCAT71(local_50._1_7_,local_b8);
  local_40 = (undefined ***)0x0;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_6>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
       ::Call;
  local_b0 = &local_a0;
  local_a8 = (FGuid *)local_68;
  local_a0 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
             ::__l2::Global;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)&(this->JumpTable).BinaryOps,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
              *)local_b4,(bool *)&local_b0);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_U__FNumericUnit_N__U1_XV<lambda_7>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_7>__1___0FUnitExpressionParser__QEAA_W4EUnit___Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = (FUnitExpressionParser *)CONCAT71(local_50._1_7_,local_b8);
  local_40 = (undefined ***)0x0;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Impl::WrapBinaryFunction<FNumericUnit<double>,FNumericUnit<double>,void,`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_7>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
       ::Call;
  local_b0 = &local_a0;
  local_a8 = (FGuid *)local_68;
  local_a0 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlash>::GetTypeId(void)'
             ::__l2::Global;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)&(this->JumpTable).BinaryOps,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
              *)local_b4,(bool *)&local_b0);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return this;
}

// operator() @ 1417ad9a0

FNumericUnit<double> * __thiscall
`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_2>::operator()
          (void *this,FNumericUnit<double> *__return_storage_ptr__,FNumericUnit<double> *param_1)

{
  __return_storage_ptr__->Value = param_1->Value;
  __return_storage_ptr__->Units = param_1->Units;
  return __return_storage_ptr__;
}

// operator() @ 1417ad9e0

FNumericUnit<double> * __thiscall
`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_3>::operator()
          (void *this,FNumericUnit<double> *__return_storage_ptr__,FNumericUnit<double> *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = SUB84(param_1->Value,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar2 = (uint)((ulonglong)param_1->Value >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  __return_storage_ptr__->Units = param_1->Units;
  __return_storage_ptr__->Value = (double)CONCAT44(uVar2,uVar1);
  return __return_storage_ptr__;
}

// operator() @ 1417ae080

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_4>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FNumericUnit<double> *param_1,FNumericUnit<double> *param_2)

{
  double dVar1;
  ITextData *pIVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  EUnitType EVar8;
  EUnitType EVar9;
  int iVar10;
  FText *pFVar11;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar12;
  FTextFormat *pFVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  EUnit EVar17;
  EUnit EVar18;
  double dVar19;
  undefined1 local_res18 [16];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_d8;
  FFormatArgumentValue local_c8;
  FFormatArgumentValue local_a8;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48 [2];
  
  EVar18 = param_1->Units;
  EVar17 = param_2->Units;
  if (EVar18 == Unspecified) {
    if (EVar17 == Unspecified) goto LAB_1417ae4d5;
    EVar18 = *(EUnit *)this;
    if (EVar18 != Unspecified) goto LAB_1417ae12a;
  }
  else {
    if (EVar17 == Unspecified) {
      EVar17 = *(EUnit *)this;
LAB_1417ae12a:
      if (EVar17 == Unspecified) goto LAB_1417ae4d5;
    }
    EVar8 = FUnitConversion::GetUnitType(EVar17);
    EVar9 = FUnitConversion::GetUnitType(EVar18);
    if (EVar9 != EVar8) {
      pwVar16 = (wchar_t *)0x0;
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      pwVar15 = pwVar16;
      if (param_2->Units != Unspecified) {
        pwVar15 = DisplayStrings[param_2->Units];
      }
      pFVar11 = FText::FromString(&local_88,pwVar15);
      local_c8.Type = Text;
      FText::FText((FText *)&local_c8.TextValue,pFVar11);
      if ((local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
        return pTVar12;
      }
      if (((local_d8.AllocatorInstance.Data <= &local_c8) &&
          (&local_c8 <
           (FFormatArgumentValue *)
           (local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 0x20))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
        return pTVar12;
      }
      iVar10 = local_d8.ArrayNum;
      if (local_d8.ArrayNum == local_d8.ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
      }
      local_d8.ArrayNum = iVar10 + 1;
      lVar14 = (longlong)iVar10 * 0x20;
      *(Type *)&local_d8.AllocatorInstance.Data[lVar14].field_0x0 = local_c8.Type;
      *(ulonglong *)(local_d8.AllocatorInstance.Data + lVar14 + 8) =
           CONCAT44(local_c8.field1_0x8.IntValue._4_4_,local_c8.field1_0x8.FloatValue);
      *(ulonglong *)(local_d8.AllocatorInstance.Data + lVar14 + 8) =
           CONCAT44(local_c8.field1_0x8.IntValue._4_4_,local_c8.field1_0x8.FloatValue);
      *(float *)(local_d8.AllocatorInstance.Data + lVar14 + 8) = local_c8.field1_0x8.FloatValue;
      *(ulonglong *)(local_d8.AllocatorInstance.Data + lVar14 + 8) =
           CONCAT44(local_c8.field1_0x8.IntValue._4_4_,local_c8.field1_0x8.FloatValue);
      *(undefined8 *)&local_d8.AllocatorInstance.Data[lVar14 + 0x10].field_0x0 = 0;
      *(undefined4 *)(local_d8.AllocatorInstance.Data + lVar14 + 0x18) = 0;
      if ((local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
         (FText::FText((FText *)(local_d8.AllocatorInstance.Data + lVar14 + 0x10),
                       (FText *)&local_c8.TextValue),
         local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)
                     *(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (param_1->Units != Unspecified) {
        pwVar16 = DisplayStrings[param_1->Units];
      }
      pFVar11 = FText::FromString(&local_78,pwVar16);
      local_a8.Type = Text;
      FText::FText((FText *)&local_a8.TextValue,pFVar11);
      if ((local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
        return pTVar12;
      }
      if (((local_d8.AllocatorInstance.Data <= &local_a8) &&
          (&local_a8 <
           (FFormatArgumentValue *)
           (local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 0x20))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
        return pTVar12;
      }
      iVar10 = local_d8.ArrayNum;
      if (local_d8.ArrayNum == local_d8.ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
      }
      local_d8.ArrayNum = iVar10 + 1;
      lVar14 = (longlong)iVar10 * 0x20;
      *(Type *)&local_d8.AllocatorInstance.Data[lVar14].field_0x0 = local_a8.Type;
      *(ulonglong *)(local_d8.AllocatorInstance.Data + lVar14 + 8) =
           CONCAT44(local_a8.field1_0x8.IntValue._4_4_,local_a8.field1_0x8.FloatValue);
      *(ulonglong *)(local_d8.AllocatorInstance.Data + lVar14 + 8) =
           CONCAT44(local_a8.field1_0x8.IntValue._4_4_,local_a8.field1_0x8.FloatValue);
      *(float *)(local_d8.AllocatorInstance.Data + lVar14 + 8) = local_a8.field1_0x8.FloatValue;
      *(ulonglong *)(local_d8.AllocatorInstance.Data + lVar14 + 8) =
           CONCAT44(local_a8.field1_0x8.IntValue._4_4_,local_a8.field1_0x8.FloatValue);
      *(undefined8 *)&local_d8.AllocatorInstance.Data[lVar14 + 0x10].field_0x0 = 0;
      *(undefined4 *)(local_d8.AllocatorInstance.Data + lVar14 + 0x18) = 0;
      if ((local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
         (FText::FText((FText *)(local_d8.AllocatorInstance.Data + lVar14 + 0x10),
                       (FText *)&local_a8.TextValue),
         local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)
                     *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_58,L"UnitConversion",L"CannotAddErr",L"Cannot add {0} to {1}");
      pFVar13 = FTextFormat::FTextFormat(local_48,pFVar11,Default);
      pFVar11 = FText::Format(&local_68,pFVar13,&local_d8);
      *(undefined8 *)&__return_storage_ptr__->Variant = 0;
      pIVar2 = (pFVar11->TextData).Reference;
      *(ITextData **)&__return_storage_ptr__->Variant = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
      }
      *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar11->Flags;
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      if ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data == (FFormatArgumentValue *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_d8.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
LAB_1417ae4d5:
    if (EVar18 != Unspecified) {
      dVar1 = param_1->Value;
      dVar19 = FUnitConversion::Convert<double>(param_2->Value,EVar17,EVar18);
      dVar19 = dVar19 + dVar1;
      uVar4 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
              ::__l2::Global.B;
      uVar5 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
              ::__l2::Global.C;
      uVar6 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
              ::__l2::Global.D;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
           ::__l2::Global.A;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar4;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar5;
      *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar6;
      *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
           &___7__FInlineDataStorage_U__FNumericUnit_N___Impl__6B_;
      (__return_storage_ptr__->Variant).field_0x20 = EVar18;
      goto LAB_1417ae0f9;
    }
  }
  dVar19 = FUnitConversion::Convert<double>(param_1->Value,Unspecified,EVar17);
  dVar19 = dVar19 + param_2->Value;
  uVar4 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
          ::__l2::Global.B;
  uVar5 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
          ::__l2::Global.C;
  uVar6 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
          ::__l2::Global.D;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
       ::__l2::Global.A;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar4;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar5;
  *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar6;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage_U__FNumericUnit_N___Impl__6B_;
  (__return_storage_ptr__->Variant).field_0x20 = EVar17;
LAB_1417ae0f9:
  *(double *)&(__return_storage_ptr__->Variant).field_0x18 = dVar19;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 1417ae540

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_5>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FNumericUnit<double> *param_1,FNumericUnit<double> *param_2)

{
  double dVar1;
  ITextData *pIVar2;
  code *pcVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  EUnitType EVar9;
  EUnitType EVar10;
  int iVar11;
  FText *pFVar12;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar13;
  FTextFormat *pFVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  EUnit EVar18;
  EUnit EVar19;
  undefined1 local_res18 [16];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_d8;
  FFormatArgumentValue local_c8;
  FFormatArgumentValue local_a8;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48 [2];
  
  EVar19 = param_1->Units;
  EVar18 = param_2->Units;
  if (EVar19 == Unspecified) {
    if (EVar18 == Unspecified) goto LAB_1417ae995;
    EVar19 = *(EUnit *)this;
    if (EVar19 != Unspecified) goto LAB_1417ae5ea;
  }
  else {
    if (EVar18 == Unspecified) {
      EVar18 = *(EUnit *)this;
LAB_1417ae5ea:
      if (EVar18 == Unspecified) goto LAB_1417ae995;
    }
    EVar9 = FUnitConversion::GetUnitType(EVar18);
    EVar10 = FUnitConversion::GetUnitType(EVar19);
    if (EVar10 != EVar9) {
      pwVar17 = (wchar_t *)0x0;
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      pwVar16 = pwVar17;
      if (param_2->Units != Unspecified) {
        pwVar16 = DisplayStrings[param_2->Units];
      }
      pFVar12 = FText::FromString(&local_88,pwVar16);
      local_c8.Type = Text;
      FText::FText((FText *)&local_c8.TextValue,pFVar12);
      if ((local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        pTVar13 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
        return pTVar13;
      }
      if (((local_d8.AllocatorInstance.Data <= &local_c8) &&
          (&local_c8 <
           (FFormatArgumentValue *)
           (local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 0x20))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        pTVar13 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
        return pTVar13;
      }
      iVar11 = local_d8.ArrayNum;
      if (local_d8.ArrayNum == local_d8.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
      }
      local_d8.ArrayNum = iVar11 + 1;
      lVar15 = (longlong)iVar11 * 0x20;
      *(Type *)&local_d8.AllocatorInstance.Data[lVar15].field_0x0 = local_c8.Type;
      *(ulonglong *)(local_d8.AllocatorInstance.Data + lVar15 + 8) =
           CONCAT44(local_c8.field1_0x8.IntValue._4_4_,local_c8.field1_0x8.FloatValue);
      *(ulonglong *)(local_d8.AllocatorInstance.Data + lVar15 + 8) =
           CONCAT44(local_c8.field1_0x8.IntValue._4_4_,local_c8.field1_0x8.FloatValue);
      *(float *)(local_d8.AllocatorInstance.Data + lVar15 + 8) = local_c8.field1_0x8.FloatValue;
      *(ulonglong *)(local_d8.AllocatorInstance.Data + lVar15 + 8) =
           CONCAT44(local_c8.field1_0x8.IntValue._4_4_,local_c8.field1_0x8.FloatValue);
      *(undefined8 *)&local_d8.AllocatorInstance.Data[lVar15 + 0x10].field_0x0 = 0;
      *(undefined4 *)(local_d8.AllocatorInstance.Data + lVar15 + 0x18) = 0;
      if ((local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
         (FText::FText((FText *)(local_d8.AllocatorInstance.Data + lVar15 + 0x10),
                       (FText *)&local_c8.TextValue),
         local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)
                     *(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (param_1->Units != Unspecified) {
        pwVar17 = DisplayStrings[param_1->Units];
      }
      pFVar12 = FText::FromString(&local_78,pwVar17);
      local_a8.Type = Text;
      FText::FText((FText *)&local_a8.TextValue,pFVar12);
      if ((local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        pTVar13 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
        return pTVar13;
      }
      if (((local_d8.AllocatorInstance.Data <= &local_a8) &&
          (&local_a8 <
           (FFormatArgumentValue *)
           (local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 0x20))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        pTVar13 = (TValueOrError<FExpressionNode,FExpressionError> *)(*pcVar3)();
        return pTVar13;
      }
      iVar11 = local_d8.ArrayNum;
      if (local_d8.ArrayNum == local_d8.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
      }
      local_d8.ArrayNum = iVar11 + 1;
      lVar15 = (longlong)iVar11 * 0x20;
      *(Type *)&local_d8.AllocatorInstance.Data[lVar15].field_0x0 = local_a8.Type;
      *(ulonglong *)(local_d8.AllocatorInstance.Data + lVar15 + 8) =
           CONCAT44(local_a8.field1_0x8.IntValue._4_4_,local_a8.field1_0x8.FloatValue);
      *(ulonglong *)(local_d8.AllocatorInstance.Data + lVar15 + 8) =
           CONCAT44(local_a8.field1_0x8.IntValue._4_4_,local_a8.field1_0x8.FloatValue);
      *(float *)(local_d8.AllocatorInstance.Data + lVar15 + 8) = local_a8.field1_0x8.FloatValue;
      *(ulonglong *)(local_d8.AllocatorInstance.Data + lVar15 + 8) =
           CONCAT44(local_a8.field1_0x8.IntValue._4_4_,local_a8.field1_0x8.FloatValue);
      *(undefined8 *)&local_d8.AllocatorInstance.Data[lVar15 + 0x10].field_0x0 = 0;
      *(undefined4 *)(local_d8.AllocatorInstance.Data + lVar15 + 0x18) = 0;
      if ((local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
         (FText::FText((FText *)(local_d8.AllocatorInstance.Data + lVar15 + 0x10),
                       (FText *)&local_a8.TextValue),
         local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)
                     *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_58,L"UnitConversion",L"CannotSubtractErr",
                           L"Cannot subtract {1} from {0}");
      pFVar14 = FTextFormat::FTextFormat(local_48,pFVar12,Default);
      pFVar12 = FText::Format(&local_68,pFVar14,&local_d8);
      *(undefined8 *)&__return_storage_ptr__->Variant = 0;
      pIVar2 = (pFVar12->TextData).Reference;
      *(ITextData **)&__return_storage_ptr__->Variant = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
      }
      *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar12->Flags;
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      if ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data == (FFormatArgumentValue *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_d8.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
LAB_1417ae995:
    if (EVar19 != Unspecified) {
      dVar1 = param_1->Value;
      dVar4 = FUnitConversion::Convert<double>(param_2->Value,EVar18,EVar19);
      uVar5 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
              ::__l2::Global.B;
      uVar6 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
              ::__l2::Global.C;
      uVar7 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
              ::__l2::Global.D;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
           ::__l2::Global.A;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar5;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar6;
      *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar7;
      *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
           &___7__FInlineDataStorage_U__FNumericUnit_N___Impl__6B_;
      *(double *)&(__return_storage_ptr__->Variant).field_0x18 = dVar1 - dVar4;
      (__return_storage_ptr__->Variant).field_0x20 = EVar19;
      goto LAB_1417ae5be;
    }
  }
  dVar4 = FUnitConversion::Convert<double>(param_1->Value,Unspecified,EVar18);
  dVar1 = param_2->Value;
  uVar5 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
          ::__l2::Global.B;
  uVar6 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
          ::__l2::Global.C;
  uVar7 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
          ::__l2::Global.D;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
       ::__l2::Global.A;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar5;
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar6;
  *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar7;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage_U__FNumericUnit_N___Impl__6B_;
  *(double *)&(__return_storage_ptr__->Variant).field_0x18 = dVar4 - dVar1;
  (__return_storage_ptr__->Variant).field_0x20 = EVar18;
LAB_1417ae5be:
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// operator() @ 1417aea10

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_6>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FNumericUnit<double> *param_1,FNumericUnit<double> *param_2)

{
  double dVar1;
  double dVar2;
  ITextData *pIVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FText *pFVar7;
  EUnit EVar8;
  bool bVar9;
  undefined1 local_res18 [16];
  FText local_18;
  
  EVar8 = param_2->Units;
  if ((param_1->Units == Unspecified) ||
     (bVar9 = EVar8 == Unspecified, EVar8 = param_1->Units, bVar9)) {
    dVar1 = param_1->Value;
    dVar2 = param_2->Value;
    uVar4 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
            ::__l2::Global.B;
    uVar5 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
            ::__l2::Global.C;
    uVar6 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
            ::__l2::Global.D;
    *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
         ::__l2::Global.A;
    *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar4;
    *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar5;
    *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar6;
    *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
         &___7__FInlineDataStorage_U__FNumericUnit_N___Impl__6B_;
    *(double *)&(__return_storage_ptr__->Variant).field_0x18 = dVar1 * dVar2;
    (__return_storage_ptr__->Variant).field_0x20 = EVar8;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
  }
  else {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UnitConversion",L"InvalidMultiplication",
                        L"Cannot multiply by numbers with units");
    *(undefined8 *)&__return_storage_ptr__->Variant = 0;
    pIVar3 = (pFVar7->TextData).Reference;
    *(ITextData **)&__return_storage_ptr__->Variant = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res18);
    }
    *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar7->Flags;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 1417aeaf0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`FUnitExpressionParser::FUnitExpressionParser'::__l2::<lambda_7>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          FNumericUnit<double> *param_1,FNumericUnit<double> *param_2)

{
  double dVar1;
  double dVar2;
  EUnit EVar3;
  ITextData *pIVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FText *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined1 local_res20 [8];
  FText local_18;
  
  if (param_2->Units == Unspecified) {
    dVar1 = param_2->Value;
    if (dVar1 != 0.0) {
      dVar2 = param_1->Value;
      EVar3 = param_1->Units;
      uVar5 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
              ::__l2::Global.B;
      uVar6 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
              ::__l2::Global.C;
      uVar7 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
              ::__l2::Global.D;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
           ::__l2::Global.A;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar5;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar6;
      *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar7;
      *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
           &___7__FInlineDataStorage_U__FNumericUnit_N___Impl__6B_;
      *(double *)&(__return_storage_ptr__->Variant).field_0x18 = dVar2 / dVar1;
      (__return_storage_ptr__->Variant).field_0x20 = EVar3;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
    pwVar10 = L"DivideByZero";
    pwVar9 = L"DivideByZero";
  }
  else {
    pwVar10 = L"Cannot divide by numbers with units";
    pwVar9 = L"InvalidDivision";
  }
  pFVar8 = FText::AsLocalizable_Advanced_LocText(&local_18,L"UnitConversion",pwVar9,pwVar10);
  *(undefined8 *)&__return_storage_ptr__->Variant = 0;
  pIVar4 = (pFVar8->TextData).Reference;
  *(ITextData **)&__return_storage_ptr__->Variant = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res20);
  }
  *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar8->Flags;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  if (local_18.TextData.Reference == (ITextData *)0x0) {
    return __return_storage_ptr__;
  }
  (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  return __return_storage_ptr__;
}

// ConsumeNumberWithUnits @ 1417bc810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __thiscall
FUnitExpressionParser::ConsumeNumberWithUnits
          (FUnitExpressionParser *this,TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  TTokenStream<wchar_t> *this_00;
  TOptional<FExpressionError> *pTVar4;
  ulonglong uVar5;
  FExpressionNode *this_01;
  EUnit *pEVar6;
  ulonglong uVar7;
  uint uVar8;
  EUnit EVar10;
  undefined1 auStack_198 [32];
  EUnit local_178 [8];
  double local_170;
  TOptional<TStringToken<wchar_t>_> local_168;
  TExpressionTokenConsumer<wchar_t> *local_148;
  wchar_t *local_140;
  wchar_t *pwStack_138;
  int local_130;
  int iStack_12c;
  TStringToken<wchar_t> local_128;
  TOptional<TStringToken<wchar_t>_> local_110;
  TOptional<TStringToken<wchar_t>_> local_f0;
  undefined1 local_c8 [24];
  double local_b0;
  EUnit local_a8;
  undefined1 local_88 [24];
  double local_70;
  uchar local_68;
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_148 = param_1;
  this_00 = TExpressionTokenConsumer<wchar_t>::GetStream(param_1);
  local_170 = 0.0;
  ExpressionParser::ParseLocalizedNumberWithAgnosticFallback
            (&local_168,this_00,(TStringToken<wchar_t> *)0x0,&local_170);
  if (local_168.bIsSet != false) {
    TTokenStream<wchar_t>::ParseWhitespace(this_00,&local_f0,&local_168.TypedValue);
    uVar7 = 0;
    bVar3 = false;
    local_128.LineNumber = 0;
    local_128.CharacterIndex = 0;
    local_128.TokenStart = (wchar_t *)0x0;
    local_128.TokenEnd = (wchar_t *)0x0;
    if (local_168.bIsSet == false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FExpressionError> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pEVar6 = &ParseCandidates[0].Unit;
    local_140 = local_168.TypedValue.TokenStart;
    pwStack_138 = local_168.TypedValue.TokenEnd;
    local_130 = local_168.TypedValue.LineNumber;
    iStack_12c = local_168.TypedValue.CharacterIndex;
    uVar9 = uVar7;
    EVar10 = local_178[0];
    do {
      if (local_168.bIsSet == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TOptional<FExpressionError> *)(*pcVar1)();
          return pTVar4;
        }
      }
      TTokenStream<wchar_t>::ParseTokenIgnoreCase
                (this_00,&local_110,((FParseCandidate *)(pEVar6 + -8))->String,&local_168.TypedValue
                );
      if (local_168.bIsSet == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TOptional<FExpressionError> *)(*pcVar1)();
          return pTVar4;
        }
      }
      uVar5 = (longlong)local_168.TypedValue.TokenEnd - (longlong)pwStack_138 >> 1;
      if ((local_110.bIsSet == false) || (uVar5 <= uVar7)) {
        local_168.bIsSet = true;
        local_168.TypedValue.TokenStart = local_140;
        local_168.TypedValue.TokenEnd = pwStack_138;
        local_168.TypedValue.LineNumber = local_130;
        local_168.TypedValue.CharacterIndex = iStack_12c;
      }
      else {
        if (pEVar6 != local_178) {
          EVar10 = *pEVar6;
          bVar3 = true;
        }
        local_128.TokenStart = local_110.TypedValue.TokenStart;
        local_128.TokenEnd = local_110.TypedValue.TokenEnd;
        local_128.LineNumber = local_110.TypedValue.LineNumber;
        local_128.CharacterIndex = local_110.TypedValue.CharacterIndex;
        uVar7 = uVar5;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      pEVar6 = pEVar6 + 0x10;
    } while (uVar8 < 0xb3);
    if (bVar3) {
      local_c8._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
           ::__l2::Global.A;
      local_c8._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
           ::__l2::Global.B;
      local_c8._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
           ::__l2::Global.C;
      local_c8._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
           ::__l2::Global.D;
      local_c8._16_8_ = &___7__FInlineDataStorage_U__FNumericUnit_N___Impl__6B_;
      local_b0 = local_170;
      local_a8 = EVar10;
      TExpressionTokenConsumer<wchar_t>::Add(local_148,&local_128,(FExpressionNode *)local_c8);
      this_01 = (FExpressionNode *)local_c8;
    }
    else {
      local_88._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
           ::__l2::Global.A;
      local_88._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
           ::__l2::Global.B;
      local_88._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
           ::__l2::Global.C;
      local_88._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
           ::__l2::Global.D;
      local_70 = local_170;
      local_88._16_8_ = &___7__FInlineDataStorage_U__FNumericUnit_N___Impl__6B_;
      local_68 = 'L';
      if (local_168.bIsSet == false) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TOptional<FExpressionError> *)(*pcVar1)();
          return pTVar4;
        }
      }
      TExpressionTokenConsumer<wchar_t>::Add
                (local_148,&local_168.TypedValue,(FExpressionNode *)local_88);
      this_01 = (FExpressionNode *)local_88;
    }
    FExpressionNode::~FExpressionNode(this_01);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// Evaluate @ 1417c7cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FNumericUnit<double>,FExpressionError> * __thiscall
FUnitExpressionParser::Evaluate
          (FUnitExpressionParser *this,
          TValueOrError<FNumericUnit<double>,FExpressionError> *__return_storage_ptr__,
          wchar_t *param_1,FNumericUnit<double> *param_2)

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
  TValueOrError<FNumericUnit<double>,FExpressionError> *pTVar12;
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
  undefined1 local_478 [8];
  TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> local_470;
  FText local_460;
  FText local_450;
  TIOperatorEvaluationEnvironment<wchar_t> local_440;
  TOperatorJumpTable<void,wchar_t> *local_438;
  undefined8 local_430;
  undefined1 local_428 [24];
  double local_410;
  EUnit local_408;
  FText local_3e8;
  undefined1 local_3d8 [64];
  undefined1 local_398 [64];
  undefined1 local_358 [64];
  undefined1 local_318 [64];
  TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_2d8;
  TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_2c0;
  undefined1 local_2a8 [32];
  undefined1 local_288 [32];
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
    pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
      pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
      return pTVar12;
    }
    FText::FText(&local_460,(FText *)&local_2d8);
    if ((2 < local_2d8.Variant.TypeIndex) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
      pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
    pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
      pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
        pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
        pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
                        ::__l2::Global.A) || (pIVar14 == (ITextData *)0x0)) goto LAB_1417c8353;
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
    local_410 = param_2->Value;
    local_428._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
         ::__l2::Global.A;
    local_428._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
         ::__l2::Global.B;
    local_428._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
         ::__l2::Global.C;
    local_428._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
         ::__l2::Global.D;
    local_428._16_8_ = &___7__FInlineDataStorage_U__FNumericUnit_N___Impl__6B_;
    local_408 = param_2->Units;
    FExpressionNode::FExpressionNode((FExpressionNode *)local_d8,(FExpressionNode *)local_428);
    local_d8._64_8_ = IVar7;
    local_d8._72_8_ = IVar8;
    local_d8._80_8_ = IVar1;
    FExpressionNode::~FExpressionNode((FExpressionNode *)local_428);
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
        pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
LAB_1417c8353:
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
    pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
      pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
      return pTVar12;
    }
    FText::FText(&local_450,(FText *)&local_2c0);
    if ((2 < local_2c0.Variant.TypeIndex) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
    uVar16 = (ulonglong)local_2c0.Variant.TypeIndex;
    if ((2 < local_2c0.Variant.TypeIndex) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
      return pTVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_2c0);
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
      pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
      pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
      pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
        pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
        return pTVar12;
      }
      plVar9 = (longlong *)CONCAT44(local_2a8._4_4_,local_2a8._0_4_);
      (__return_storage_ptr__->Variant)._padding_ = (longlong)plVar9;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9,local_478);
      }
      *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = local_2a8._8_4_;
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if ((2 < local_268) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
        pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
        pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
    }
    else {
      if ((local_268 != 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TValueOrError<FNumericUnit<double>,FExpressionError> *)(*pcVar6)();
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
        pIVar14 = (ITextData *)(local_2a8 + 0x18);
        if (((local_2a8._12_4_ !=
              `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
              ::__l2::Global.D ||
             local_2a8._8_4_ !=
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
             ::__l2::Global.C) ||
            local_2a8._4_4_ !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
            ::__l2::Global.B) ||
            local_2a8._0_4_ !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FNumericUnit<double>_>::GetTypeId(void)'
            ::__l2::Global.A) {
          pIVar14 = pIVar17;
        }
        if (pIVar14 == (ITextData *)0x0) {
          pFVar15 = FText::AsLocalizable_Advanced_LocText
                              (&local_3e8,L"UnitConversion",L"UnrecognizedResult",
                               L"Unrecognized result returned from expression");
          FExpressionError::FExpressionError((FExpressionError *)__return_storage_ptr__,pFVar15);
          (__return_storage_ptr__->Variant).TypeIndex = '\x01';
          if (local_3e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_3e8.TextData.Reference + 0x10))();
          }
        }
        else {
          *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 0x4c;
          *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = *(undefined1 *)(pIVar14 + 1)
          ;
          (__return_storage_ptr__->Variant)._padding_ = (longlong)*pIVar14;
          (__return_storage_ptr__->Variant).TypeIndex = '\0';
        }
      }
      else {
        (__return_storage_ptr__->Variant)._padding_ = (longlong)*pIVar14;
        *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 0x4c;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
      }
      TValueOrError<FExpressionNode,FExpressionError>::
      ~TValueOrError<FExpressionNode,FExpressionError>
                ((TValueOrError<FExpressionNode,FExpressionError> *)local_2a8);
      TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::
      ~TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                (&local_2c0);
      DestructItems<TExpressionToken<wchar_t>,int>
                ((TExpressionToken<wchar_t> *)local_488.AllocatorInstance.Data,local_488.ArrayNum);
      if ((TExpressionToken<wchar_t> *)local_488.AllocatorInstance.Data !=
          (TExpressionToken<wchar_t> *)0x0) {
        FMemory::Free(local_488.AllocatorInstance.Data);
      }
      TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
      ::
      ~TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
                (&local_2d8);
    }
  }
  return __return_storage_ptr__;
}

