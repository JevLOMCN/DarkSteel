// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 6

// FFrameNumberTimeEvaluator @ 14603f3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FFrameNumberTimeEvaluator * __thiscall
FFrameNumberTimeEvaluator::FFrameNumberTimeEvaluator(FFrameNumberTimeEvaluator *this)

{
  TMap<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>_>
  *this_00;
  undefined ***pppuVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b4 [4];
  FGuid *local_b0;
  undefined1 *local_a8;
  FGuid local_a0;
  FGuid local_90;
  FGuid local_80;
  undefined1 local_68 [16];
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  (this->TimecodeTokenDefinitions).bIgnoreWhitespace = false;
  (this->TimecodeTokenDefinitions).Definitions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TimecodeTokenDefinitions).Definitions.ArrayNum = 0;
  (this->TimecodeTokenDefinitions).Definitions.ArrayMax = 0;
  (this->FrameTokenDefinitions).bIgnoreWhitespace = false;
  (this->FrameTokenDefinitions).Definitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameTokenDefinitions).Definitions.ArrayNum = 0;
  (this->FrameTokenDefinitions).Definitions.ArrayMax = 0;
  (this->TimeTokenDefinitions).bIgnoreWhitespace = false;
  (this->TimeTokenDefinitions).Definitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeTokenDefinitions).Definitions.ArrayNum = 0;
  (this->TimeTokenDefinitions).Definitions.ArrayMax = 0;
  FExpressionGrammar::FExpressionGrammar(&this->FrameGrammar);
  FExpressionGrammar::FExpressionGrammar(&this->TimecodeGrammar);
  FExpressionGrammar::FExpressionGrammar(&this->TimeGrammar);
  *(undefined8 *)&(this->TimeJumpTable).PreUnaryOps = 0;
  this_00 = &(this->TimeJumpTable).BinaryOps;
  *(undefined8 *)&(this->TimeJumpTable).PreUnaryOps.field_0x8 = 0;
  *(undefined8 *)&(this->TimeJumpTable).PreUnaryOps.field_0x20 = 0;
  *(undefined4 *)&(this->TimeJumpTable).PreUnaryOps.field_0x28 = 0;
  *(undefined4 *)&(this->TimeJumpTable).PreUnaryOps.field_0x2c = 0x80;
  *(undefined4 *)&(this->TimeJumpTable).PreUnaryOps.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TimeJumpTable).PreUnaryOps.field_0x34 = 0;
  *(undefined8 *)&(this->TimeJumpTable).PreUnaryOps.field_0x40 = 0;
  *(undefined4 *)&(this->TimeJumpTable).PreUnaryOps.field_0x48 = 0;
  *(undefined8 *)&(this->TimeJumpTable).PostUnaryOps = 0;
  *(undefined8 *)&(this->TimeJumpTable).PostUnaryOps.field_0x8 = 0;
  *(undefined8 *)&(this->TimeJumpTable).PostUnaryOps.field_0x20 = 0;
  *(undefined4 *)&(this->TimeJumpTable).PostUnaryOps.field_0x28 = 0;
  *(undefined4 *)&(this->TimeJumpTable).PostUnaryOps.field_0x2c = 0x80;
  *(undefined4 *)&(this->TimeJumpTable).PostUnaryOps.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TimeJumpTable).PostUnaryOps.field_0x34 = 0;
  *(undefined8 *)&(this->TimeJumpTable).PostUnaryOps.field_0x40 = 0;
  *(undefined4 *)&(this->TimeJumpTable).PostUnaryOps.field_0x48 = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->TimeJumpTable).BinaryOps.field_0x8 = 0;
  *(undefined8 *)&(this->TimeJumpTable).BinaryOps.field_0x20 = 0;
  *(undefined4 *)&(this->TimeJumpTable).BinaryOps.field_0x28 = 0;
  *(undefined4 *)&(this->TimeJumpTable).BinaryOps.field_0x2c = 0x80;
  *(undefined4 *)&(this->TimeJumpTable).BinaryOps.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TimeJumpTable).BinaryOps.field_0x34 = 0;
  *(undefined8 *)&(this->TimeJumpTable).BinaryOps.field_0x40 = 0;
  *(undefined4 *)&(this->TimeJumpTable).BinaryOps.field_0x48 = 0;
  *(undefined8 *)&(this->TimeJumpTable).BinaryShortCircuits = 0;
  *(undefined8 *)&(this->TimeJumpTable).BinaryShortCircuits.field_0x8 = 0;
  *(undefined8 *)&(this->TimeJumpTable).BinaryShortCircuits.field_0x20 = 0;
  *(undefined4 *)&(this->TimeJumpTable).BinaryShortCircuits.field_0x28 = 0;
  *(undefined4 *)&(this->TimeJumpTable).BinaryShortCircuits.field_0x2c = 0x80;
  *(undefined4 *)&(this->TimeJumpTable).BinaryShortCircuits.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TimeJumpTable).BinaryShortCircuits.field_0x34 = 0;
  *(undefined8 *)&(this->TimeJumpTable).BinaryShortCircuits.field_0x40 = 0;
  *(undefined4 *)&(this->TimeJumpTable).BinaryShortCircuits.field_0x48 = 0;
  TTokenDefinitions<wchar_t>::IgnoreWhitespace(&this->TimecodeTokenDefinitions);
  local_40 = (undefined ***)0x0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FTimecodeDelimiter>;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TimecodeTokenDefinitions,
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
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FDropcodeDelimiter>;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TimecodeTokenDefinitions,
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
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FPlus>;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TimecodeTokenDefinitions,
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
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FMinus>;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TimecodeTokenDefinitions,
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
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FBracketStart>;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TimecodeTokenDefinitions,
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
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FBracketEnd>;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TimecodeTokenDefinitions,
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
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = ExpressionParser::ConsumeLocalizedNumber;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TimecodeTokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  TTokenDefinitions<wchar_t>::IgnoreWhitespace(&this->FrameTokenDefinitions);
  local_40 = (undefined ***)0x0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FFrames>;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->FrameTokenDefinitions,
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
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FPlus>;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->FrameTokenDefinitions,
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
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FMinus>;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->FrameTokenDefinitions,
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
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FStar>;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->FrameTokenDefinitions,
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
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = ExpressionParser::ConsumeLocalizedNumber;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->FrameTokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  TTokenDefinitions<wchar_t>::IgnoreWhitespace(&this->TimeTokenDefinitions);
  local_40 = (undefined ***)0x0;
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FPlus>;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TimeTokenDefinitions,
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
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FMinus>;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TimeTokenDefinitions,
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
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FMillisecond>;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TimeTokenDefinitions,
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
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FMinute>;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TimeTokenDefinitions,
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
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FSecond>;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TimeTokenDefinitions,
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
  local_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FHour>;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TimeTokenDefinitions,
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
  local_50 = ExpressionParser::ConsumeLocalizedNumber;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
       ::Call;
  TTokenDefinitions<wchar_t>::DefineToken
            (&this->TimeTokenDefinitions,
             (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FTimecodeDelimiter>
            (&this->TimecodeGrammar,5,RightToLeft,false);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FDropcodeDelimiter>
            (&this->TimecodeGrammar,5,RightToLeft,false);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FPlus>
            (&this->TimeGrammar,5,RightToLeft,false);
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FStar>
            (&this->TimeGrammar,4,RightToLeft,false);
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FFrameNumberTimeEvaluator::FFrameNumberTimeEvaluator'::`2'::<lambda_1>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_50 = (code *)CONCAT71(local_50._1_7_,local_b8);
  local_40 = (undefined ***)0x0;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FFrameNumberTimeEvaluator::FFrameNumberTimeEvaluator'::__l2::<lambda_1>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
       ::Call;
  local_b0 = &local_a0;
  local_a8 = local_68;
  local_a0 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
             ::__l2::Global;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
              *)local_b4,(bool *)(local_b4 + 4));
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Impl::WrapBinaryFunction<double,double,void,`FFrameNumberTimeEvaluator::FFrameNumberTimeEvaluator'::`2'::<lambda_2>_>'::`3'::<lambda_1>,0,0>
              ::_vftable_;
  local_50 = (code *)CONCAT71(local_50._1_7_,local_b8);
  local_40 = (undefined ***)0x0;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FFrameNumberTimeEvaluator::FFrameNumberTimeEvaluator'::__l2::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
       ::Call;
  local_b0 = &local_a0;
  local_a8 = local_68;
  local_a0 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
             ::__l2::Global;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
              *)local_b4,(bool *)(local_b4 + 4));
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return this;
}

// operator() @ 1460407e0

double __thiscall
`FFrameNumberTimeEvaluator::FFrameNumberTimeEvaluator'::__l2::<lambda_1>::operator()
          (void *this,double param_1,double param_2)

{
  return param_1 + param_2;
}

// operator() @ 1460408b0

double __thiscall
`FFrameNumberTimeEvaluator::FFrameNumberTimeEvaluator'::__l2::<lambda_2>::operator()
          (void *this,double param_1,double param_2)

{
  return param_1 * param_2;
}

// EvaluateFrame @ 1460480d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FFrameTime,FExpressionError> * __thiscall
FFrameNumberTimeEvaluator::EvaluateFrame
          (FFrameNumberTimeEvaluator *this,
          TValueOrError<FFrameTime,FExpressionError> *__return_storage_ptr__,wchar_t *param_1,
          FFrameRate *param_2,FFrameRate *param_3,bool *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ITextData *pIVar4;
  code *pcVar5;
  FFrameRate FVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TValueOrError<FFrameTime,FExpressionError> *pTVar12;
  FScriptContainerElement *pFVar13;
  FText *pFVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  FExpressionNode *this_00;
  bool *pbVar19;
  FScriptContainerElement *pFVar20;
  double dVar21;
  undefined1 in_XMM2 [16];
  undefined1 auVar22 [16];
  undefined1 auStackY_108 [32];
  ForAnyElementType local_d8;
  uint local_d0;
  int local_cc;
  bool *local_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [8];
  FScriptContainerElement *local_b0;
  TValueOrError<FFrameTime,FExpressionError> *local_a8;
  FFrameRate *local_a0;
  FFrameRate *local_98;
  longlong local_90;
  FText local_88;
  FText local_78;
  TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_68;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_108;
  *param_4 = false;
  local_98 = param_3;
  local_c8 = param_4;
  local_a8 = __return_storage_ptr__;
  local_a0 = param_2;
  ExpressionParser::Lex<wchar_t>(&local_68,param_1,&this->FrameTokenDefinitions);
  uVar17 = (ulonglong)local_68.Variant.TypeIndex;
  if ((2 < uVar17) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar12 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar5)();
    return pTVar12;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar17) == '\0') {
    if ((local_68.Variant.TypeIndex != 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar5)();
      return pTVar12;
    }
    FText::FText(&local_88,(FText *)&local_68);
    if ((2 < local_68.Variant.TypeIndex) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar5)();
      return pTVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_68.Variant.TypeIndex])(&local_68);
    local_68.Variant.TypeIndex = 2;
    FText::FText((FText *)__return_storage_ptr__,&local_88);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    uVar17 = (ulonglong)local_68.Variant.TypeIndex;
    if ((2 < local_68.Variant.TypeIndex) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar5)();
      return pTVar12;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17] !=
        UE::Core::Private::
        TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
        ::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17])(&local_68);
    }
  }
  else {
    if ((local_68.Variant.TypeIndex != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar5)();
      return pTVar12;
    }
    uVar17 = 0;
    local_d0 = (uint)local_68.Variant._padding_;
    local_d8.Data = (FScriptContainerElement *)local_68.Variant._padding_;
    local_cc = local_68.Variant._padding_._4_4_;
    local_68.Variant._padding_ = 0;
    local_b0 = (FScriptContainerElement *)0x0;
    local_68.Variant._padding_ = 0;
    if ((2 < local_68.Variant.TypeIndex) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar5)();
      return pTVar12;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_68.Variant.TypeIndex] !=
        UE::Core::Private::
        TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
        ::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_68.Variant.TypeIndex])(&local_68);
    }
    bVar7 = false;
    bVar8 = false;
    local_68.Variant.TypeIndex = 2;
    uVar18 = uVar17;
    pbVar19 = param_4;
    uVar15 = local_d0;
    if (0 < (int)local_d0) {
      do {
        uVar16 = (uint)uVar17;
        uVar10 = 0;
        if ((int)uVar16 < (int)uVar15) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar15 = local_d0, bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar5)();
          return pTVar12;
        }
        uVar10 = *(uint *)(local_d8.Data + uVar18 + 0xc);
        uVar1 = *(uint *)(local_d8.Data + uVar18);
        pFVar20 = local_d8.Data + uVar18 + 0x18;
        uVar2 = *(uint *)(local_d8.Data + uVar18 + 4);
        uVar3 = *(uint *)(local_d8.Data + uVar18 + 8);
        pFVar13 = pFVar20;
        if (((uVar10 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FFrames>::GetTypeId(void)'
                        ::__l2::Global.D ||
             uVar3 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FFrames>::GetTypeId(void)'
                      ::__l2::Global.C) ||
            uVar2 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FFrames>::GetTypeId(void)'
                     ::__l2::Global.B) ||
            uVar1 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FFrames>::GetTypeId(void)'
                     ::__l2::Global.A) {
          pFVar13 = (FScriptContainerElement *)0x0;
        }
        if (pFVar13 == (FScriptContainerElement *)0x0) {
          pFVar13 = pFVar20;
          if ((((uVar10 ^ `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                          ::__l2::Global.D) != 0 ||
               (uVar3 ^ `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                        ::__l2::Global.C) != 0) ||
              (uVar2 ^ `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                       ::__l2::Global.B) != 0) ||
              (uVar1 ^ `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                       ::__l2::Global.A) != 0) {
            pFVar13 = local_b0;
          }
          if ((pFVar13 != (FScriptContainerElement *)0x0) ||
             ((((uVar10 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                           ::__l2::Global.D &&
                uVar3 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                         ::__l2::Global.C) &&
               uVar2 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                        ::__l2::Global.B) &&
               uVar1 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                        ::__l2::Global.A && (pFVar20 != (FScriptContainerElement *)0x0)))) {
            if (((((uVar10 ^ `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                             ::__l2::Global.D) == 0 &&
                  (uVar3 ^ `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                           ::__l2::Global.C) == 0) &&
                 (uVar2 ^ `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                          ::__l2::Global.B) == 0) &&
                 (uVar1 ^ `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                          ::__l2::Global.A) == 0) &&
               (bVar8 = bVar7, pFVar20 != (FScriptContainerElement *)0x0)) {
              bVar8 = true;
              bVar7 = bVar8;
            }
            goto LAB_1460483d1;
          }
        }
        else {
          *param_4 = true;
LAB_1460483d1:
          uVar10 = 0;
          if ((int)uVar16 < (int)uVar15) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar5)();
            return pTVar12;
          }
          this_00 = (FExpressionNode *)(local_d8.Data + uVar18);
          FExpressionNode::~FExpressionNode(this_00);
          iVar11 = (local_d0 - uVar16) + -1;
          if (iVar11 != 0) {
            memmove(this_00,this_00[1].InlineBytes + 0x10,(longlong)iVar11 * 0x60);
          }
          local_d0 = local_d0 - 1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,&local_d8,local_d0,&local_cc);
          uVar16 = uVar16 - 1;
          uVar18 = uVar18 - 0x60;
          uVar15 = local_d0;
        }
        uVar17 = (ulonglong)(uVar16 + 1);
        param_2 = local_a0;
        uVar18 = uVar18 + 0x60;
        pbVar19 = local_c8;
        __return_storage_ptr__ = local_a8;
      } while ((int)(uVar16 + 1) < (int)uVar15);
    }
    if (uVar15 == 1) {
      pFVar13 = local_d8.Data + 0x18;
      if (((*(uint *)(local_d8.Data + 0xc) !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
            ::__l2::Global.D ||
           *(uint *)(local_d8.Data + 8) !=
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
           ::__l2::Global.C) ||
          *(uint *)(local_d8.Data + 4) !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
          ::__l2::Global.B) ||
          *(uint *)local_d8.Data !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
          ::__l2::Global.A) {
        pFVar13 = (FScriptContainerElement *)0x0;
      }
      auVar22._8_8_ = 0;
      auVar22._0_8_ = *(ulonglong *)pFVar13;
      auVar22 = roundpd(in_XMM2,auVar22,1);
      dVar21 = auVar22._0_8_;
      if (__real_41dfffffffc00000 <= auVar22._0_8_) {
        dVar21 = __real_41dfffffffc00000;
      }
      if (dVar21 <= __real_c1e0000000000000) {
        dVar21 = __real_c1e0000000000000;
      }
      local_c0 = (uint)dVar21;
      if (bVar8) {
        local_c0 = -local_c0;
      }
      uStack_bc = 0;
      FVar6.Denominator = 0;
      FVar6.Numerator = local_c0;
      ConvertFrameTime((FFrameTime)&local_90,FVar6,*param_2);
      (__return_storage_ptr__->Variant)._padding_ = local_90;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
    }
    else {
      *pbVar19 = false;
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_78,L"TimeManagement",L"UnrecognizedFrame",
                           L"Format not recognized as a Frame number");
      (__return_storage_ptr__->Variant)._padding_ = 0;
      pIVar4 = (pFVar14->TextData).Reference;
      (__return_storage_ptr__->Variant)._padding_ = (longlong)pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_b8);
      }
      *(uint *)&(__return_storage_ptr__->Variant)._padding_ = pFVar14->Flags;
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
    }
    DestructItems<TExpressionToken<wchar_t>,int>
              ((TExpressionToken<wchar_t> *)local_d8.Data,local_d0);
    if ((TExpressionToken<wchar_t> *)local_d8.Data != (TExpressionToken<wchar_t> *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    uVar17 = (ulonglong)local_68.Variant.TypeIndex;
    if ((2 < local_68.Variant.TypeIndex) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar5)();
      return pTVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar17])(&local_68);
  }
  return __return_storage_ptr__;
}

// EvaluateTime @ 1460486b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FFrameTime,FExpressionError> * __thiscall
FFrameNumberTimeEvaluator::EvaluateTime
          (FFrameNumberTimeEvaluator *this,
          TValueOrError<FFrameTime,FExpressionError> *__return_storage_ptr__,wchar_t *param_1,
          FFrameRate param_2,bool *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ITextData *pIVar4;
  undefined1 auVar5 [16];
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ForAnyElementType FVar12;
  FFrameNumberTimeEvaluator *pFVar13;
  char cVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  TValueOrError<FFrameTime,FExpressionError> *pTVar18;
  FText *pFVar19;
  FScriptContainerElement *pFVar20;
  double *pdVar21;
  code *pcVar22;
  TExpressionToken<wchar_t> *this_00;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  uint uVar30;
  char cVar31;
  FScriptContainerElement *pFVar32;
  FExpressionNode *pFVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  int iStackX_24;
  undefined1 auStackY_a58 [32];
  TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> local_a28;
  char local_a18;
  uint local_a14;
  bool *local_a10;
  uint local_a08;
  undefined4 uStack_a04;
  uint local_a00;
  undefined4 uStack_9fc;
  undefined1 local_9f8 [4];
  undefined1 local_9f4 [4];
  undefined1 local_9f0 [4];
  undefined1 local_9ec [4];
  undefined1 local_9e8 [8];
  FFrameNumberTimeEvaluator *local_9e0;
  undefined1 local_9d8 [8];
  TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> local_9d0;
  FText local_9c0;
  FText local_9b0;
  TIOperatorEvaluationEnvironment<wchar_t> local_9a0;
  TOperatorJumpTable<void,wchar_t> *local_998;
  undefined8 local_990;
  FText local_988;
  FText local_978;
  FText local_968;
  FText local_958;
  FText local_948;
  undefined1 local_938 [24];
  uchar local_920 [40];
  undefined1 local_8f8 [24];
  uchar local_8e0 [40];
  undefined1 local_8b8 [24];
  uchar local_8a0 [40];
  undefined1 local_878 [24];
  uchar local_860 [40];
  undefined1 local_838 [24];
  uchar local_820 [40];
  undefined1 local_7f8 [24];
  uchar local_7e0 [40];
  undefined1 local_7b8 [64];
  undefined1 local_778 [64];
  undefined1 local_738 [64];
  undefined1 local_6f8 [64];
  undefined1 local_6b8 [64];
  undefined1 local_678 [64];
  undefined1 local_638 [64];
  TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_5f8;
  TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_5e0;
  undefined1 local_5c8 [64];
  byte local_588;
  TExpressionToken<wchar_t> local_578;
  TExpressionToken<wchar_t> local_518;
  TExpressionToken<wchar_t> local_4b8;
  TExpressionToken<wchar_t> local_458;
  TExpressionToken<wchar_t> local_3f8;
  TExpressionToken<wchar_t> local_398;
  TExpressionToken<wchar_t> local_338;
  TExpressionToken<wchar_t> local_2d8;
  TExpressionToken<wchar_t> local_278;
  TExpressionToken<wchar_t> local_218;
  TExpressionToken<wchar_t> local_1b8;
  TExpressionToken<wchar_t> local_158;
  TExpressionToken<wchar_t> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_a58;
  local_a10 = param_3;
  *param_3 = false;
  local_9e0 = this;
  ExpressionParser::Lex<wchar_t>(&local_5f8,param_1,&this->TimeTokenDefinitions);
  uVar23 = (ulonglong)local_5f8.Variant.TypeIndex;
  if ((2 < uVar23) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar15)) {
    pcVar22 = (code *)swi(3);
    pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
    return pTVar18;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar23) == '\0') {
    if ((local_5f8.Variant.TypeIndex != 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar15)) {
      pcVar22 = (code *)swi(3);
      pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
      return pTVar18;
    }
    FText::FText(&local_9c0,(FText *)&local_5f8);
    if ((2 < local_5f8.Variant.TypeIndex) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar15)) {
      pcVar22 = (code *)swi(3);
      pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
      return pTVar18;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_5f8.Variant.TypeIndex] !=
        UE::Core::Private::
        TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
        ::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_5f8.Variant.TypeIndex])(&local_5f8);
    }
    local_5f8.Variant.TypeIndex = 2;
    FText::FText((FText *)__return_storage_ptr__,&local_9c0);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_9c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_9c0.TextData.Reference + 0x10))();
    }
    uVar23 = (ulonglong)local_5f8.Variant.TypeIndex;
    if ((2 < local_5f8.Variant.TypeIndex) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar15)) {
      pcVar22 = (code *)swi(3);
      pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
      return pTVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar23])(&local_5f8);
    return __return_storage_ptr__;
  }
  if ((local_5f8.Variant.TypeIndex != 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index == TypeIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                          ,0x97,L""), bVar15)) {
    pcVar22 = (code *)swi(3);
    pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
    return pTVar18;
  }
  uVar23 = 0;
  local_a28.AllocatorInstance.Data = (FScriptContainerElement *)local_5f8.Variant._padding_;
  local_a28._8_8_ = local_5f8.Variant._padding_;
  local_5f8.Variant._padding_ = 0;
  local_5f8.Variant._padding_ = 0;
  if ((2 < local_5f8.Variant.TypeIndex) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar15)) {
    pcVar22 = (code *)swi(3);
    pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
    return pTVar18;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_5f8.Variant.TypeIndex])(&local_5f8);
  cVar31 = '\0';
  local_5f8.Variant.TypeIndex = 2;
  local_a18 = '\0';
  uVar30 = local_a28.ArrayNum;
  cVar14 = local_a18;
  if (0 < local_a28.ArrayNum) {
    uVar28 = uVar23;
    do {
      uVar25 = (uint)uVar28;
      uVar27 = 0;
      if ((int)uVar25 < (int)uVar30) {
        uVar27 = ~uVar25 >> 0x1f;
      }
      if (uVar27 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar22 = (code *)swi(3);
          pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
          return pTVar18;
        }
        uVar30 = local_a28.ArrayNum;
      }
      pFVar20 = local_a28.AllocatorInstance.Data + uVar23 + 0x18;
      if (((*(uint *)(local_a28.AllocatorInstance.Data + uVar23 + 0xc) !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
            ::__l2::Global.D ||
           *(uint *)(local_a28.AllocatorInstance.Data + uVar23 + 8) !=
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
           ::__l2::Global.C) ||
          *(uint *)(local_a28.AllocatorInstance.Data + uVar23 + 4) !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
          ::__l2::Global.B) ||
          *(uint *)(local_a28.AllocatorInstance.Data + uVar23) !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
          ::__l2::Global.A) {
        pFVar20 = (FScriptContainerElement *)0x0;
      }
      if (pFVar20 == (FScriptContainerElement *)0x0) {
        pFVar20 = local_a28.AllocatorInstance.Data + uVar23 + 0x18;
        if (((*(uint *)(local_a28.AllocatorInstance.Data + uVar23 + 0xc) !=
              `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
              ::__l2::Global.D ||
             *(uint *)(local_a28.AllocatorInstance.Data + uVar23 + 8) !=
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
             ::__l2::Global.C) ||
            *(uint *)(local_a28.AllocatorInstance.Data + uVar23 + 4) !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
            ::__l2::Global.B) ||
            *(uint *)(local_a28.AllocatorInstance.Data + uVar23) !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
            ::__l2::Global.A) {
          pFVar20 = (FScriptContainerElement *)0x0;
        }
        if (pFVar20 != (FScriptContainerElement *)0x0) goto LAB_146048a08;
      }
      else {
        cVar31 = '\x01';
LAB_146048a08:
        uVar27 = 0;
        if ((int)uVar25 < (int)uVar30) {
          uVar27 = ~uVar25 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar22 = (code *)swi(3);
          pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
          return pTVar18;
        }
        pFVar33 = (FExpressionNode *)
                  (local_a28.AllocatorInstance.Data + (longlong)(int)uVar25 * 0x60);
        FExpressionNode::~FExpressionNode(pFVar33);
        iVar16 = (local_a28.ArrayNum - uVar25) + -1;
        if (iVar16 != 0) {
          memmove(pFVar33,pFVar33[1].InlineBytes + 0x10,(longlong)iVar16 * 0x60);
        }
        iVar16 = local_a28.ArrayNum + -1;
        local_a28.ArrayNum = iVar16;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,&local_a28.AllocatorInstance,iVar16,&local_a28.ArrayMax);
        uVar25 = uVar25 - 1;
        uVar23 = uVar23 - 0x60;
        uVar30 = local_a28.ArrayNum;
      }
      uVar28 = (ulonglong)(uVar25 + 1);
      uVar23 = uVar23 + 0x60;
      param_3 = local_a10;
      cVar14 = cVar31;
    } while ((int)(uVar25 + 1) < (int)uVar30);
  }
  local_a18 = cVar14;
  uVar11 = __real_404e000000000000;
  uVar9 = __real_408f400000000000;
  iStackX_24 = param_2.Denominator;
  if ((int)uVar30 < 2) {
    if (0 < (int)uVar30) {
      pFVar20 = local_a28.AllocatorInstance.Data + 0x18;
      if (((*(uint *)(local_a28.AllocatorInstance.Data + 0xc) !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
            ::__l2::Global.D ||
           *(uint *)(local_a28.AllocatorInstance.Data + 8) !=
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
           ::__l2::Global.C) ||
          *(uint *)(local_a28.AllocatorInstance.Data + 4) !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
          ::__l2::Global.B) ||
          *(uint *)local_a28.AllocatorInstance.Data !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
          ::__l2::Global.A) {
        pFVar20 = (FScriptContainerElement *)0x0;
      }
      if (pFVar20 != (FScriptContainerElement *)0x0) {
        uVar27 = (uint)*(undefined8 *)pFVar20;
        uVar25 = (uint)((ulonglong)*(undefined8 *)pFVar20 >> 0x20);
        if (local_a18 != '\0') {
          uVar27 = uVar27 ^ (uint)__xmm_80000000000000008000000000000000;
          uVar25 = uVar25 ^ __xmm_80000000000000008000000000000000._4_4_;
        }
        uStack_9fc = 0;
        dVar38 = ((double)param_2.Numerator * (double)CONCAT44(uVar25,uVar27)) / (double)iStackX_24;
        auVar36._8_8_ = 0;
        auVar36._0_8_ = dVar38;
        auVar36 = roundpd(in_XMM2,auVar36,1);
        auVar35._8_8_ = 0;
        auVar35._0_8_ = (double)(int)(dVar38 - auVar36._0_8_) + dVar38;
        auVar35 = roundpd(auVar36,auVar35,1);
        dVar38 = auVar35._0_8_;
        if (__real_41dfffffffc00000 <= auVar35._0_8_) {
          dVar38 = __real_41dfffffffc00000;
        }
        if (dVar38 <= __real_c1e0000000000000) {
          dVar38 = __real_c1e0000000000000;
        }
        local_a00 = (uint)dVar38;
        (__return_storage_ptr__->Variant)._padding_ = (ulonglong)local_a00;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        DestructItems<TExpressionToken<wchar_t>,int>
                  ((TExpressionToken<wchar_t> *)local_a28.AllocatorInstance.Data,uVar30);
        if ((TExpressionToken<wchar_t> *)local_a28.AllocatorInstance.Data !=
            (TExpressionToken<wchar_t> *)0x0) {
          FMemory::Free(local_a28.AllocatorInstance.Data);
        }
        uVar23 = (ulonglong)local_5f8.Variant.TypeIndex;
        if ((2 < local_5f8.Variant.TypeIndex) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar15)) {
          pcVar22 = (code *)swi(3);
          pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
          return pTVar18;
        }
        pcVar22 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar23];
LAB_146049e0c:
        if (pcVar22 ==
            UE::Core::Private::
            TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
            ::Destruct) {
          return __return_storage_ptr__;
        }
        (*pcVar22)(&local_5f8);
        return __return_storage_ptr__;
      }
    }
    *param_3 = false;
    pFVar19 = FText::AsLocalizable_Advanced_LocText
                        (&local_948,L"TimeManagement",L"UnrecognizedTime",
                         L"Format not recognized as a time");
    (__return_storage_ptr__->Variant)._padding_ = 0;
    pIVar4 = (pFVar19->TextData).Reference;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_9e8);
    }
  }
  else {
    if ((uVar30 & 1) == 0) {
      uVar27 = 1;
      if (1 < (int)uVar30) {
        do {
          uVar25 = 0;
          if ((int)uVar27 < (int)uVar30) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if (uVar25 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar22 = (code *)swi(3);
              pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
              return pTVar18;
            }
            uVar30 = local_a28.ArrayNum;
          }
          lVar24 = (longlong)(int)uVar27 * 0x60;
          pwVar6 = *(wchar_t **)(local_a28.AllocatorInstance.Data + lVar24 + 0x40);
          pwVar7 = *(wchar_t **)(local_a28.AllocatorInstance.Data + lVar24 + 0x40 + 8);
          uVar1 = *(undefined8 *)(local_a28.AllocatorInstance.Data + lVar24 + 0x50);
          uVar25 = 0;
          if ((int)uVar27 < (int)uVar30) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if (uVar25 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar22 = (code *)swi(3);
              pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
              return pTVar18;
            }
            uVar30 = local_a28.ArrayNum;
          }
          FVar12.Data = local_a28.AllocatorInstance.Data;
          uVar25 = *(uint *)(local_a28.AllocatorInstance.Data + lVar24 + 8);
          uVar17 = *(uint *)(local_a28.AllocatorInstance.Data + lVar24 + 0xc);
          pFVar32 = local_a28.AllocatorInstance.Data + lVar24 + 0x18;
          uVar2 = *(uint *)(local_a28.AllocatorInstance.Data + lVar24 + 4);
          uVar3 = *(uint *)&local_a28.AllocatorInstance.Data[lVar24].field_0x0;
          pFVar20 = pFVar32;
          if (((uVar17 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FHour>::GetTypeId(void)'
                          ::__l2::Global.D ||
               uVar25 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FHour>::GetTypeId(void)'
                         ::__l2::Global.C) ||
              uVar2 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FHour>::GetTypeId(void)'
                       ::__l2::Global.B) ||
              uVar3 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FHour>::GetTypeId(void)'
                       ::__l2::Global.A) {
            pFVar20 = (FScriptContainerElement *)0x0;
          }
          if (pFVar20 == (FScriptContainerElement *)0x0) {
            pFVar20 = pFVar32;
            if (((uVar17 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinute>::GetTypeId(void)'
                            ::__l2::Global.D ||
                 uVar25 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinute>::GetTypeId(void)'
                           ::__l2::Global.C) ||
                uVar2 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinute>::GetTypeId(void)'
                         ::__l2::Global.B) ||
                uVar3 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinute>::GetTypeId(void)'
                         ::__l2::Global.A) {
              pFVar20 = (FScriptContainerElement *)0x0;
            }
            if (((pFVar20 == (FScriptContainerElement *)0x0) &&
                ((((uVar17 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSecond>::GetTypeId(void)'
                              ::__l2::Global.D ||
                   uVar25 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSecond>::GetTypeId(void)'
                             ::__l2::Global.C) ||
                  uVar2 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSecond>::GetTypeId(void)'
                           ::__l2::Global.B) ||
                  uVar3 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSecond>::GetTypeId(void)'
                           ::__l2::Global.A || (pFVar32 == (FScriptContainerElement *)0x0)))) &&
               ((((uVar17 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMillisecond>::GetTypeId(void)'
                             ::__l2::Global.D ||
                  uVar25 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMillisecond>::GetTypeId(void)'
                            ::__l2::Global.C) ||
                 uVar2 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMillisecond>::GetTypeId(void)'
                          ::__l2::Global.B) ||
                 uVar3 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMillisecond>::GetTypeId(void)'
                          ::__l2::Global.A || (pFVar32 == (FScriptContainerElement *)0x0)))) {
              pFVar19 = FText::AsLocalizable_Advanced_LocText
                                  (&local_978,L"TimeManagement",L"UnrecognizedTime",
                                   L"Format not recognized as a time");
              (__return_storage_ptr__->Variant)._padding_ = 0;
              pIVar4 = (pFVar19->TextData).Reference;
              (__return_storage_ptr__->Variant)._padding_ = (longlong)pIVar4;
              if (pIVar4 != (ITextData *)0x0) {
                (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_9f4);
              }
              *(uint *)&(__return_storage_ptr__->Variant)._padding_ = pFVar19->Flags;
              (__return_storage_ptr__->Variant).TypeIndex = '\x01';
              if (local_978.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_978.TextData.Reference + 0x10))();
              }
              DestructItems<TExpressionToken<wchar_t>,int>
                        ((TExpressionToken<wchar_t> *)local_a28.AllocatorInstance.Data,
                         local_a28.ArrayNum);
              if ((TExpressionToken<wchar_t> *)local_a28.AllocatorInstance.Data !=
                  (TExpressionToken<wchar_t> *)0x0) {
                FMemory::Free(local_a28.AllocatorInstance.Data);
              }
              uVar23 = (ulonglong)local_5f8.Variant.TypeIndex;
              if ((2 < local_5f8.Variant.TypeIndex) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0xd4,L""), bVar15)) {
                pcVar22 = (code *)swi(3);
                pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
                return pTVar18;
              }
              pcVar22 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                                  ::__l2::Destructors)[uVar23];
              goto LAB_146049e0c;
            }
          }
          uVar25 = uVar27 - 1;
          uVar17 = 0;
          if ((int)uVar25 < (int)uVar30) {
            uVar17 = ~uVar25 >> 0x1f;
          }
          if (uVar17 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar22 = (code *)swi(3);
              pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
              return pTVar18;
            }
            uVar30 = local_a28.ArrayNum;
          }
          lVar29 = (longlong)(int)uVar25 * 0x60;
          pFVar20 = local_a28.AllocatorInstance.Data + lVar29 + 0x18;
          if (((*(uint *)(local_a28.AllocatorInstance.Data + lVar29 + 0xc) !=
                `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                ::__l2::Global.D ||
               *(uint *)(local_a28.AllocatorInstance.Data + lVar29 + 8) !=
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
               ::__l2::Global.C) ||
              *(uint *)(local_a28.AllocatorInstance.Data + lVar29 + 4) !=
              `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
              ::__l2::Global.B) ||
              *(uint *)&local_a28.AllocatorInstance.Data[lVar29].field_0x0 !=
              `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
              ::__l2::Global.A) {
            pFVar20 = (FScriptContainerElement *)0x0;
          }
          if (pFVar20 == (FScriptContainerElement *)0x0) {
            pFVar19 = FText::AsLocalizable_Advanced_LocText
                                (&local_968,L"TimeManagement",L"UnrecognizedTime",
                                 L"Format not recognized as a time");
            (__return_storage_ptr__->Variant)._padding_ = 0;
            pIVar4 = (pFVar19->TextData).Reference;
            (__return_storage_ptr__->Variant)._padding_ = (longlong)pIVar4;
            if (pIVar4 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_9f0);
            }
            *(uint *)&(__return_storage_ptr__->Variant)._padding_ = pFVar19->Flags;
            (__return_storage_ptr__->Variant).TypeIndex = '\x01';
            if (local_968.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_968.TextData.Reference + 0x10))();
            }
            DestructItems<TExpressionToken<wchar_t>,int>
                      ((TExpressionToken<wchar_t> *)local_a28.AllocatorInstance.Data,
                       local_a28.ArrayNum);
            if ((TExpressionToken<wchar_t> *)local_a28.AllocatorInstance.Data !=
                (TExpressionToken<wchar_t> *)0x0) {
              FMemory::Free(local_a28.AllocatorInstance.Data);
            }
            uVar23 = (ulonglong)local_5f8.Variant.TypeIndex;
            if ((2 < local_5f8.Variant.TypeIndex) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                    ,0xd4,L""), bVar15)) {
              pcVar22 = (code *)swi(3);
              pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
              return pTVar18;
            }
            pcVar22 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                                ::__l2::Destructors)[uVar23];
            goto LAB_146049edf;
          }
          uVar25 = *(uint *)(FVar12.Data + lVar24 + 8);
          uVar17 = *(uint *)(FVar12.Data + lVar24 + 0xc);
          uVar2 = *(uint *)(FVar12.Data + lVar24 + 4);
          uVar3 = *(uint *)&FVar12.Data[lVar24].field_0x0;
          local_a14 = uVar27;
          if ((((uVar17 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FHour>::GetTypeId(void)'
                           ::__l2::Global.D &&
                uVar25 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FHour>::GetTypeId(void)'
                          ::__l2::Global.C) &&
               uVar2 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FHour>::GetTypeId(void)'
                        ::__l2::Global.B) &&
               uVar3 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FHour>::GetTypeId(void)'
                        ::__l2::Global.A) &&
             (FVar12.Data + lVar24 + 0x18 != (FScriptContainerElement *)0x0)) {
            local_7b8._16_8_ = &___7__FInlineDataStorage_UFStar_ExpressionParser___Impl__6B_;
            local_7b8._0_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                 ::__l2::Global.A;
            local_7b8._4_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                 ::__l2::Global.B;
            local_7b8._8_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                 ::__l2::Global.C;
            local_7b8._12_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                 ::__l2::Global.D;
            FExpressionNode::FExpressionNode(&local_578.Node,(FExpressionNode *)local_7b8);
            local_578.Context.TokenStart = pwVar6;
            local_578.Context.TokenEnd = pwVar7;
            local_578.Context._16_8_ = uVar1;
            FExpressionNode::~FExpressionNode((FExpressionNode *)local_7b8);
            TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                      (&local_a28,&local_578,uVar27 + 1);
            FExpressionNode::~FExpressionNode(&local_578.Node);
            uVar10 = __real_404e000000000000;
            local_8b8._4_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.B;
            local_8b8._0_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.A;
            local_8b8._8_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.C;
            local_8b8._12_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.D;
            __real_404e000000000000._0_1_ = (uchar)uVar11;
            __real_404e000000000000._1_1_ = SUB81(uVar11,1);
            __real_404e000000000000._2_1_ = SUB81(uVar11,2);
            __real_404e000000000000._3_1_ = SUB81(uVar11,3);
            __real_404e000000000000._4_1_ = SUB81(uVar11,4);
            __real_404e000000000000._5_1_ = SUB81(uVar11,5);
            __real_404e000000000000._6_1_ = SUB81(uVar11,6);
            __real_404e000000000000._7_1_ = SUB81(uVar11,7);
            local_8a0[0] = (uchar)__real_404e000000000000;
            local_8a0[1] = __real_404e000000000000._1_1_;
            local_8a0[2] = __real_404e000000000000._2_1_;
            local_8a0[3] = __real_404e000000000000._3_1_;
            local_8a0[4] = __real_404e000000000000._4_1_;
            local_8a0[5] = __real_404e000000000000._5_1_;
            local_8a0[6] = __real_404e000000000000._6_1_;
            local_8a0[7] = __real_404e000000000000._7_1_;
            local_8b8._16_8_ = &___7__FInlineDataStorage_N_Impl__6B_;
            __real_404e000000000000 = uVar10;
            FExpressionNode::FExpressionNode(&local_518.Node,(FExpressionNode *)local_8b8);
            local_518.Context.TokenStart = pwVar6;
            local_518.Context.TokenEnd = pwVar7;
            local_518.Context._16_8_ = uVar1;
            FExpressionNode::~FExpressionNode((FExpressionNode *)local_8b8);
            TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                      (&local_a28,&local_518,uVar27 + 2);
            FExpressionNode::~FExpressionNode(&local_518.Node);
            local_778._16_8_ = &___7__FInlineDataStorage_UFStar_ExpressionParser___Impl__6B_;
            local_778._0_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                 ::__l2::Global.A;
            local_778._4_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                 ::__l2::Global.B;
            local_778._8_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                 ::__l2::Global.C;
            local_778._12_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                 ::__l2::Global.D;
            FExpressionNode::FExpressionNode(&local_4b8.Node,(FExpressionNode *)local_778);
            local_4b8.Context.TokenStart = pwVar6;
            local_4b8.Context.TokenEnd = pwVar7;
            local_4b8.Context._16_8_ = uVar1;
            FExpressionNode::~FExpressionNode((FExpressionNode *)local_778);
            TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                      (&local_a28,&local_4b8,uVar27 + 3);
            FExpressionNode::~FExpressionNode(&local_4b8.Node);
            uVar10 = __real_404e000000000000;
            local_878._4_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.B;
            local_878._0_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.A;
            local_878._8_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.C;
            local_878._12_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.D;
            __real_404e000000000000._0_1_ = (uchar)uVar11;
            __real_404e000000000000._1_1_ = SUB81(uVar11,1);
            __real_404e000000000000._2_1_ = SUB81(uVar11,2);
            __real_404e000000000000._3_1_ = SUB81(uVar11,3);
            __real_404e000000000000._4_1_ = SUB81(uVar11,4);
            __real_404e000000000000._5_1_ = SUB81(uVar11,5);
            __real_404e000000000000._6_1_ = SUB81(uVar11,6);
            __real_404e000000000000._7_1_ = SUB81(uVar11,7);
            local_860[0] = (uchar)__real_404e000000000000;
            local_860[1] = __real_404e000000000000._1_1_;
            local_860[2] = __real_404e000000000000._2_1_;
            local_860[3] = __real_404e000000000000._3_1_;
            local_860[4] = __real_404e000000000000._4_1_;
            local_860[5] = __real_404e000000000000._5_1_;
            local_860[6] = __real_404e000000000000._6_1_;
            local_860[7] = __real_404e000000000000._7_1_;
            local_878._16_8_ = &___7__FInlineDataStorage_N_Impl__6B_;
            __real_404e000000000000 = uVar10;
            FExpressionNode::FExpressionNode(&local_458.Node,(FExpressionNode *)local_878);
            local_458.Context.TokenStart = pwVar6;
            local_458.Context.TokenEnd = pwVar7;
            local_458.Context._16_8_ = uVar1;
            FExpressionNode::~FExpressionNode((FExpressionNode *)local_878);
            TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                      (&local_a28,&local_458,uVar27 + 4);
            FExpressionNode::~FExpressionNode(&local_458.Node);
            local_738._16_8_ = &___7__FInlineDataStorage_UFStar_ExpressionParser___Impl__6B_;
            local_738._0_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                 ::__l2::Global.A;
            local_738._4_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                 ::__l2::Global.B;
            local_738._8_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                 ::__l2::Global.C;
            local_738._12_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                 ::__l2::Global.D;
            FExpressionNode::FExpressionNode(&local_3f8.Node,(FExpressionNode *)local_738);
            local_3f8.Context.TokenStart = pwVar6;
            local_3f8.Context.TokenEnd = pwVar7;
            local_3f8.Context._16_8_ = uVar1;
            FExpressionNode::~FExpressionNode((FExpressionNode *)local_738);
            TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                      (&local_a28,&local_3f8,uVar27 + 5);
            FExpressionNode::~FExpressionNode(&local_3f8.Node);
            uVar10 = __real_408f400000000000;
            local_838._4_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.B;
            local_838._0_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.A;
            local_838._8_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.C;
            local_838._12_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.D;
            uVar26 = uVar27 + 6;
            __real_408f400000000000._0_1_ = (uchar)uVar9;
            __real_408f400000000000._1_1_ = SUB81(uVar9,1);
            __real_408f400000000000._2_1_ = SUB81(uVar9,2);
            __real_408f400000000000._3_1_ = SUB81(uVar9,3);
            __real_408f400000000000._4_1_ = SUB81(uVar9,4);
            __real_408f400000000000._5_1_ = SUB81(uVar9,5);
            __real_408f400000000000._6_1_ = SUB81(uVar9,6);
            __real_408f400000000000._7_1_ = SUB81(uVar9,7);
            local_820[0] = (uchar)__real_408f400000000000;
            local_820[1] = __real_408f400000000000._1_1_;
            local_820[2] = __real_408f400000000000._2_1_;
            local_820[3] = __real_408f400000000000._3_1_;
            local_820[4] = __real_408f400000000000._4_1_;
            local_820[5] = __real_408f400000000000._5_1_;
            local_820[6] = __real_408f400000000000._6_1_;
            local_820[7] = __real_408f400000000000._7_1_;
            local_838._16_8_ = &___7__FInlineDataStorage_N_Impl__6B_;
            __real_408f400000000000 = uVar10;
            FExpressionNode::FExpressionNode(&local_398.Node,(FExpressionNode *)local_838);
            local_398.Context.TokenStart = pwVar6;
            local_398.Context.TokenEnd = pwVar7;
            local_398.Context._16_8_ = uVar1;
            FExpressionNode::~FExpressionNode((FExpressionNode *)local_838);
            TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                      (&local_a28,&local_398,uVar26);
            this_00 = &local_398;
LAB_1460493a0:
            FExpressionNode::~FExpressionNode(&this_00->Node);
            uVar30 = local_a28.ArrayNum;
          }
          else {
            if ((((uVar17 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinute>::GetTypeId(void)'
                             ::__l2::Global.D &&
                  uVar25 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinute>::GetTypeId(void)'
                            ::__l2::Global.C) &&
                 uVar2 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinute>::GetTypeId(void)'
                          ::__l2::Global.B) &&
                 uVar3 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinute>::GetTypeId(void)'
                          ::__l2::Global.A) &&
               (FVar12.Data + lVar24 + 0x18 != (FScriptContainerElement *)0x0)) {
              local_6f8._16_8_ = &___7__FInlineDataStorage_UFStar_ExpressionParser___Impl__6B_;
              local_6f8._0_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                   ::__l2::Global.A;
              local_6f8._4_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                   ::__l2::Global.B;
              local_6f8._8_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                   ::__l2::Global.C;
              local_6f8._12_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                   ::__l2::Global.D;
              FExpressionNode::FExpressionNode(&local_338.Node,(FExpressionNode *)local_6f8);
              local_338.Context.TokenStart = pwVar6;
              local_338.Context.TokenEnd = pwVar7;
              local_338.Context._16_8_ = uVar1;
              FExpressionNode::~FExpressionNode((FExpressionNode *)local_6f8);
              TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                        (&local_a28,&local_338,uVar27 + 1);
              FExpressionNode::~FExpressionNode(&local_338.Node);
              uVar10 = __real_404e000000000000;
              local_7f8._4_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                   ::__l2::Global.B;
              local_7f8._0_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                   ::__l2::Global.A;
              local_7f8._8_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                   ::__l2::Global.C;
              local_7f8._12_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                   ::__l2::Global.D;
              __real_404e000000000000._0_1_ = (uchar)uVar11;
              __real_404e000000000000._1_1_ = SUB81(uVar11,1);
              __real_404e000000000000._2_1_ = SUB81(uVar11,2);
              __real_404e000000000000._3_1_ = SUB81(uVar11,3);
              __real_404e000000000000._4_1_ = SUB81(uVar11,4);
              __real_404e000000000000._5_1_ = SUB81(uVar11,5);
              __real_404e000000000000._6_1_ = SUB81(uVar11,6);
              __real_404e000000000000._7_1_ = SUB81(uVar11,7);
              local_7e0[0] = (uchar)__real_404e000000000000;
              local_7e0[1] = __real_404e000000000000._1_1_;
              local_7e0[2] = __real_404e000000000000._2_1_;
              local_7e0[3] = __real_404e000000000000._3_1_;
              local_7e0[4] = __real_404e000000000000._4_1_;
              local_7e0[5] = __real_404e000000000000._5_1_;
              local_7e0[6] = __real_404e000000000000._6_1_;
              local_7e0[7] = __real_404e000000000000._7_1_;
              local_7f8._16_8_ = &___7__FInlineDataStorage_N_Impl__6B_;
              __real_404e000000000000 = uVar10;
              FExpressionNode::FExpressionNode(&local_2d8.Node,(FExpressionNode *)local_7f8);
              local_2d8.Context.TokenStart = pwVar6;
              local_2d8.Context.TokenEnd = pwVar7;
              local_2d8.Context._16_8_ = uVar1;
              FExpressionNode::~FExpressionNode((FExpressionNode *)local_7f8);
              TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                        (&local_a28,&local_2d8,uVar27 + 2);
              FExpressionNode::~FExpressionNode(&local_2d8.Node);
              local_6b8._16_8_ = &___7__FInlineDataStorage_UFStar_ExpressionParser___Impl__6B_;
              local_6b8._0_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                   ::__l2::Global.A;
              local_6b8._4_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                   ::__l2::Global.B;
              local_6b8._8_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                   ::__l2::Global.C;
              local_6b8._12_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                   ::__l2::Global.D;
              FExpressionNode::FExpressionNode(&local_278.Node,(FExpressionNode *)local_6b8);
              local_278.Context.TokenStart = pwVar6;
              local_278.Context.TokenEnd = pwVar7;
              local_278.Context._16_8_ = uVar1;
              FExpressionNode::~FExpressionNode((FExpressionNode *)local_6b8);
              TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                        (&local_a28,&local_278,uVar27 + 3);
              FExpressionNode::~FExpressionNode(&local_278.Node);
              uVar10 = __real_408f400000000000;
              local_938._4_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                   ::__l2::Global.B;
              local_938._0_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                   ::__l2::Global.A;
              local_938._8_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                   ::__l2::Global.C;
              local_938._12_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                   ::__l2::Global.D;
              uVar26 = uVar27 + 4;
              __real_408f400000000000._0_1_ = (uchar)uVar9;
              __real_408f400000000000._1_1_ = SUB81(uVar9,1);
              __real_408f400000000000._2_1_ = SUB81(uVar9,2);
              __real_408f400000000000._3_1_ = SUB81(uVar9,3);
              __real_408f400000000000._4_1_ = SUB81(uVar9,4);
              __real_408f400000000000._5_1_ = SUB81(uVar9,5);
              __real_408f400000000000._6_1_ = SUB81(uVar9,6);
              __real_408f400000000000._7_1_ = SUB81(uVar9,7);
              local_920[0] = (uchar)__real_408f400000000000;
              local_920[1] = __real_408f400000000000._1_1_;
              local_920[2] = __real_408f400000000000._2_1_;
              local_920[3] = __real_408f400000000000._3_1_;
              local_920[4] = __real_408f400000000000._4_1_;
              local_920[5] = __real_408f400000000000._5_1_;
              local_920[6] = __real_408f400000000000._6_1_;
              local_920[7] = __real_408f400000000000._7_1_;
              local_938._16_8_ = &___7__FInlineDataStorage_N_Impl__6B_;
              __real_408f400000000000 = uVar10;
              FExpressionNode::FExpressionNode(&local_218.Node,(FExpressionNode *)local_938);
              local_218.Context.TokenStart = pwVar6;
              local_218.Context.TokenEnd = pwVar7;
              local_218.Context._16_8_ = uVar1;
              FExpressionNode::~FExpressionNode((FExpressionNode *)local_938);
              TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                        (&local_a28,&local_218,uVar26);
              this_00 = &local_218;
              goto LAB_1460493a0;
            }
            uVar26 = uVar27;
            if ((((uVar17 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSecond>::GetTypeId(void)'
                             ::__l2::Global.D &&
                  uVar25 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSecond>::GetTypeId(void)'
                            ::__l2::Global.C) &&
                 uVar2 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSecond>::GetTypeId(void)'
                          ::__l2::Global.B) &&
                 uVar3 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSecond>::GetTypeId(void)'
                          ::__l2::Global.A) &&
               (FVar12.Data + lVar24 + 0x18 != (FScriptContainerElement *)0x0)) {
              local_678._16_8_ = &___7__FInlineDataStorage_UFStar_ExpressionParser___Impl__6B_;
              local_678._0_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                   ::__l2::Global.A;
              local_678._4_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                   ::__l2::Global.B;
              local_678._8_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                   ::__l2::Global.C;
              local_678._12_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                   ::__l2::Global.D;
              FExpressionNode::FExpressionNode(&local_1b8.Node,(FExpressionNode *)local_678);
              local_1b8.Context.TokenStart = pwVar6;
              local_1b8.Context.TokenEnd = pwVar7;
              local_1b8.Context._16_8_ = uVar1;
              FExpressionNode::~FExpressionNode((FExpressionNode *)local_678);
              TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                        (&local_a28,&local_1b8,uVar27 + 1);
              FExpressionNode::~FExpressionNode(&local_1b8.Node);
              uVar10 = __real_408f400000000000;
              local_8f8._4_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                   ::__l2::Global.B;
              local_8f8._0_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                   ::__l2::Global.A;
              local_8f8._8_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                   ::__l2::Global.C;
              local_8f8._12_4_ =
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                   ::__l2::Global.D;
              uVar26 = uVar27 + 2;
              __real_408f400000000000._0_1_ = (uchar)uVar9;
              __real_408f400000000000._1_1_ = SUB81(uVar9,1);
              __real_408f400000000000._2_1_ = SUB81(uVar9,2);
              __real_408f400000000000._3_1_ = SUB81(uVar9,3);
              __real_408f400000000000._4_1_ = SUB81(uVar9,4);
              __real_408f400000000000._5_1_ = SUB81(uVar9,5);
              __real_408f400000000000._6_1_ = SUB81(uVar9,6);
              __real_408f400000000000._7_1_ = SUB81(uVar9,7);
              local_8e0[0] = (uchar)__real_408f400000000000;
              local_8e0[1] = __real_408f400000000000._1_1_;
              local_8e0[2] = __real_408f400000000000._2_1_;
              local_8e0[3] = __real_408f400000000000._3_1_;
              local_8e0[4] = __real_408f400000000000._4_1_;
              local_8e0[5] = __real_408f400000000000._5_1_;
              local_8e0[6] = __real_408f400000000000._6_1_;
              local_8e0[7] = __real_408f400000000000._7_1_;
              local_8f8._16_8_ = &___7__FInlineDataStorage_N_Impl__6B_;
              __real_408f400000000000 = uVar10;
              FExpressionNode::FExpressionNode(&local_158.Node,(FExpressionNode *)local_8f8);
              local_158.Context.TokenStart = pwVar6;
              local_158.Context.TokenEnd = pwVar7;
              local_158.Context._16_8_ = uVar1;
              FExpressionNode::~FExpressionNode((FExpressionNode *)local_8f8);
              TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                        (&local_a28,&local_158,uVar26);
              this_00 = &local_158;
              goto LAB_1460493a0;
            }
          }
          uVar25 = 0;
          if ((int)local_a14 < (int)uVar30) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar22 = (code *)swi(3);
            pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
            return pTVar18;
          }
          pFVar33 = (FExpressionNode *)
                    (local_a28.AllocatorInstance.Data + (longlong)(int)uVar27 * 0x60);
          FExpressionNode::~FExpressionNode(pFVar33);
          iVar16 = (local_a28.ArrayNum - uVar27) + -1;
          if (iVar16 != 0) {
            memmove(pFVar33,pFVar33[1].InlineBytes + 0x10,(longlong)iVar16 * 0x60);
          }
          iVar16 = local_a28.ArrayNum + -1;
          local_a28.ArrayNum = iVar16;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,&local_a28.AllocatorInstance,iVar16,&local_a28.ArrayMax);
          uVar30 = local_a28.ArrayNum;
          uVar27 = uVar26 - 1;
          if (uVar26 - 1 != local_a28.ArrayNum - 1U) {
            local_638._4_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
                 ::__l2::Global.B;
            local_638._0_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
                 ::__l2::Global.A;
            local_638._8_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
                 ::__l2::Global.C;
            local_638._12_4_ =
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
                 ::__l2::Global.D;
            local_638._16_8_ = &___7__FInlineDataStorage_UFPlus_ExpressionParser___Impl__6B_;
            FExpressionNode::FExpressionNode(&local_f8.Node,(FExpressionNode *)local_638);
            local_f8.Context.TokenStart = pwVar6;
            local_f8.Context.TokenEnd = pwVar7;
            local_f8.Context._16_8_ = uVar1;
            FExpressionNode::~FExpressionNode((FExpressionNode *)local_638);
            TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>::Insert
                      (&local_a28,&local_f8,uVar26);
            FExpressionNode::~FExpressionNode(&local_f8.Node);
            uVar30 = local_a28.ArrayNum;
            uVar27 = uVar26;
          }
          uVar27 = uVar27 + 2;
          param_3 = local_a10;
        } while ((int)uVar27 < (int)uVar30);
      }
      pFVar13 = local_9e0;
      local_9d0.AllocatorInstance.Data = local_a28.AllocatorInstance.Data;
      *param_3 = true;
      local_a28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9d0.ArrayMax = local_a28.ArrayMax;
      local_a28.ArrayNum = 0;
      local_a28.ArrayMax = 0;
      local_9d0.ArrayNum = uVar30;
      ExpressionParser::Compile<wchar_t>(&local_5e0,&local_9d0,&local_9e0->TimeGrammar);
      uVar23 = (ulonglong)local_5e0.Variant.TypeIndex;
      if ((2 < local_5e0.Variant.TypeIndex) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x12f,L""), bVar15)) {
        pcVar22 = (code *)swi(3);
        pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
        return pTVar18;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar23 + 4) == '\0') {
        *param_3 = false;
        if ((local_5e0.Variant.TypeIndex != 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar15)) {
          pcVar22 = (code *)swi(3);
          pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
          return pTVar18;
        }
        FText::FText(&local_9b0,(FText *)&local_5e0);
        if ((2 < local_5e0.Variant.TypeIndex) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar15)) {
          pcVar22 = (code *)swi(3);
          pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
          return pTVar18;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_5e0.Variant.TypeIndex])(&local_5e0);
        local_5e0.Variant.TypeIndex = 2;
        FText::FText((FText *)__return_storage_ptr__,&local_9b0);
        (__return_storage_ptr__->Variant).TypeIndex = '\x01';
        if (local_9b0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_9b0.TextData.Reference + 0x10))();
        }
      }
      else {
        local_990 = 0;
        local_9a0 = (TIOperatorEvaluationEnvironment<wchar_t>)
                    &___7__TOperatorEvaluationEnvironment_X_W__6B_;
        local_998 = &pFVar13->TimeJumpTable;
        if ((local_5e0.Variant.TypeIndex != 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar15)) {
          pcVar22 = (code *)swi(3);
          pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
          return pTVar18;
        }
        ExpressionParser::Evaluate<wchar_t>
                  ((TValueOrError<FExpressionNode,FExpressionError> *)local_5c8,
                   (TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_> *)&local_5e0,
                   &local_9a0);
        uVar23 = (ulonglong)local_588;
        if ((2 < uVar23) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0x12f,L""), bVar15)) {
          pcVar22 = (code *)swi(3);
          pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
          return pTVar18;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar23) != '\0') {
          if ((local_588 != 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index == TypeIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                  ,0x97,L""), bVar15)) {
            pcVar22 = (code *)swi(3);
            pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
            return pTVar18;
          }
          pdVar21 = (double *)(local_5c8 + 0x18);
          if (((local_5c8._12_4_ !=
                `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                ::__l2::Global.D ||
               local_5c8._8_4_ !=
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
               ::__l2::Global.C) ||
              local_5c8._4_4_ !=
              `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
              ::__l2::Global.B) ||
              local_5c8._0_4_ !=
              `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
              ::__l2::Global.A) {
            pdVar21 = (double *)0x0;
          }
          if (pdVar21 == (double *)0x0) {
            *param_3 = false;
            pFVar19 = FText::AsLocalizable_Advanced_LocText
                                (&local_958,L"TimeManagement",L"UnrecognizedTimeResult",
                                 L"Unrecognized result returned from expression");
            (__return_storage_ptr__->Variant)._padding_ = 0;
            pIVar4 = (pFVar19->TextData).Reference;
            (__return_storage_ptr__->Variant)._padding_ = (longlong)pIVar4;
            if (pIVar4 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_9d8);
            }
            *(uint *)&(__return_storage_ptr__->Variant)._padding_ = pFVar19->Flags;
            (__return_storage_ptr__->Variant).TypeIndex = '\x01';
            if (local_958.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_958.TextData.Reference + 0x10))();
            }
            if ((2 < local_588) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                    ,0xd4,L""), bVar15)) {
              pcVar22 = (code *)swi(3);
              pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
              return pTVar18;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_588])(local_5c8);
            if ((2 < local_5e0.Variant.TypeIndex) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                    ,0xd4,L""), bVar15)) {
              pcVar22 = (code *)swi(3);
              pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
              return pTVar18;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[local_5e0.Variant.TypeIndex] !=
                UE::Core::Private::
                TDestructorCaller<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
                ::Destruct) {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[local_5e0.Variant.TypeIndex])(&local_5e0);
            }
            DestructItems<TExpressionToken<wchar_t>,int>
                      ((TExpressionToken<wchar_t> *)local_a28.AllocatorInstance.Data,
                       local_a28.ArrayNum);
            if ((TExpressionToken<wchar_t> *)local_a28.AllocatorInstance.Data !=
                (TExpressionToken<wchar_t> *)0x0) {
              FMemory::Free(local_a28.AllocatorInstance.Data);
            }
            uVar23 = (ulonglong)local_5f8.Variant.TypeIndex;
            if ((2 < local_5f8.Variant.TypeIndex) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                    ,0xd4,L""), bVar15)) {
              pcVar22 = (code *)swi(3);
              pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
              return pTVar18;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar23] ==
                UE::Core::Private::
                TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
                ::Destruct) {
              return __return_storage_ptr__;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar23])(&local_5f8);
            return __return_storage_ptr__;
          }
          dVar38 = *pdVar21;
          if (local_a18 != '\0') {
            dVar38 = (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) ^
                                      __xmm_80000000000000008000000000000000._4_4_,
                                      SUB84(dVar38,0) ^ (uint)__xmm_80000000000000008000000000000000
                                     );
          }
          uStack_a04 = 0;
          dVar37 = (dVar38 * __real_3f50624dd2f1a9fc * (double)param_2.Numerator) /
                   (double)iStackX_24;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = dVar37;
          auVar35 = roundpd(auVar34,auVar34,1);
          dVar38 = dVar37 - auVar35._0_8_;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (double)(int)dVar38 + dVar37;
          auVar35 = roundpd(ZEXT416((uint)(float)dVar38),auVar5,1);
          dVar38 = auVar35._0_8_;
          if (__real_41dfffffffc00000 <= auVar35._0_8_) {
            dVar38 = __real_41dfffffffc00000;
          }
          if (dVar38 <= __real_c1e0000000000000) {
            dVar38 = __real_c1e0000000000000;
          }
          local_a08 = (uint)dVar38;
          (__return_storage_ptr__->Variant)._padding_ = (ulonglong)local_a08;
          (__return_storage_ptr__->Variant).TypeIndex = '\0';
          if ((2 < local_588) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar15)) {
            pcVar22 = (code *)swi(3);
            pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
            return pTVar18;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[local_588])(local_5c8);
          if ((2 < local_5e0.Variant.TypeIndex) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar15)) {
            pcVar22 = (code *)swi(3);
            pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
            return pTVar18;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_5e0.Variant.TypeIndex] !=
              UE::Core::Private::
              TDestructorCaller<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
              ::Destruct) {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_5e0.Variant.TypeIndex])(&local_5e0);
          }
          DestructItems<TExpressionToken<wchar_t>,int>
                    ((TExpressionToken<wchar_t> *)local_a28.AllocatorInstance.Data,
                     local_a28.ArrayNum);
          if ((TExpressionToken<wchar_t> *)local_a28.AllocatorInstance.Data !=
              (TExpressionToken<wchar_t> *)0x0) {
            FMemory::Free(local_a28.AllocatorInstance.Data);
          }
          uVar23 = (ulonglong)local_5f8.Variant.TypeIndex;
          if ((2 < local_5f8.Variant.TypeIndex) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar15)) {
            pcVar22 = (code *)swi(3);
            pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
            return pTVar18;
          }
          pcVar22 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[uVar23];
          goto LAB_146049e0c;
        }
        *param_3 = false;
        if ((local_588 != 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar15)) {
          pcVar22 = (code *)swi(3);
          pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
          return pTVar18;
        }
        plVar8 = (longlong *)CONCAT44(local_5c8._4_4_,local_5c8._0_4_);
        (__return_storage_ptr__->Variant)._padding_ = (longlong)plVar8;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 8))(plVar8,local_9ec);
        }
        *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = local_5c8._8_4_;
        (__return_storage_ptr__->Variant).TypeIndex = '\x01';
        if ((2 < local_588) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar15)) {
          pcVar22 = (code *)swi(3);
          pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
          return pTVar18;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_588])(local_5c8);
      }
      uVar23 = (ulonglong)local_5e0.Variant.TypeIndex;
      if ((2 < local_5e0.Variant.TypeIndex) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar15)) {
        pcVar22 = (code *)swi(3);
        pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
        return pTVar18;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar23] !=
          UE::Core::Private::
          TDestructorCaller<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
          ::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar23])(&local_5e0);
      }
      DestructItems<TExpressionToken<wchar_t>,int>
                ((TExpressionToken<wchar_t> *)local_a28.AllocatorInstance.Data,local_a28.ArrayNum);
      if ((TExpressionToken<wchar_t> *)local_a28.AllocatorInstance.Data !=
          (TExpressionToken<wchar_t> *)0x0) {
        FMemory::Free(local_a28.AllocatorInstance.Data);
      }
      uVar23 = (ulonglong)local_5f8.Variant.TypeIndex;
      if ((2 < local_5f8.Variant.TypeIndex) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar15)) {
        pcVar22 = (code *)swi(3);
        pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
        return pTVar18;
      }
      pcVar22 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar23];
      goto LAB_146049edf;
    }
    pFVar19 = FText::AsLocalizable_Advanced_LocText
                        (&local_988,L"TimeManagement",L"UnrecognizedTimeMismatch",
                         L"Mismatched number of units and numeric tokens");
    (__return_storage_ptr__->Variant)._padding_ = 0;
    pIVar4 = (pFVar19->TextData).Reference;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)pIVar4;
    local_948.TextData.Reference = local_988.TextData.Reference;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_9f8);
      local_948.TextData.Reference = local_988.TextData.Reference;
    }
  }
  *(uint *)&(__return_storage_ptr__->Variant)._padding_ = pFVar19->Flags;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  if (local_948.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_948.TextData.Reference + 0x10))();
  }
  DestructItems<TExpressionToken<wchar_t>,int>
            ((TExpressionToken<wchar_t> *)local_a28.AllocatorInstance.Data,local_a28.ArrayNum);
  if ((TExpressionToken<wchar_t> *)local_a28.AllocatorInstance.Data !=
      (TExpressionToken<wchar_t> *)0x0) {
    FMemory::Free(local_a28.AllocatorInstance.Data);
  }
  uVar23 = (ulonglong)local_5f8.Variant.TypeIndex;
  if ((2 < local_5f8.Variant.TypeIndex) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar15)) {
    pcVar22 = (code *)swi(3);
    pTVar18 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar22)();
    return pTVar18;
  }
  pcVar22 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar23];
LAB_146049edf:
  (*pcVar22)(&local_5f8);
  return __return_storage_ptr__;
}

// EvaluateTimecode @ 146049f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TValueOrError<FFrameTime,FExpressionError> * __thiscall
FFrameNumberTimeEvaluator::EvaluateTimecode
          (FFrameNumberTimeEvaluator *this,
          TValueOrError<FFrameTime,FExpressionError> *__return_storage_ptr__,wchar_t *param_1,
          FFrameRate *param_2,FFrameRate *param_3,bool *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ITextData *pIVar5;
  code *pcVar6;
  FFrameRate FVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  TValueOrError<FFrameTime,FExpressionError> *pTVar13;
  FScriptContainerElement *pFVar14;
  FText *pFVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  FExpressionNode *this_00;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  char cVar29;
  uint unaff_R13D;
  int *piVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auStackY_158 [32];
  ForAnyElementType local_120;
  uint local_118;
  int local_114;
  bool *local_110;
  uint local_108;
  int local_104;
  float local_100;
  FFrameRate *local_f8;
  uint local_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  undefined1 local_e0 [8];
  TValueOrError<FFrameTime,FExpressionError> *local_d8;
  FFrameRate *local_d0;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_88;
  int local_70 [4];
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_d0 = param_3;
  *param_4 = false;
  local_110 = param_4;
  local_f8 = param_2;
  local_d8 = __return_storage_ptr__;
  ExpressionParser::Lex<wchar_t>(&local_88,param_1,&this->TimecodeTokenDefinitions);
  uVar21 = (ulonglong)local_88.Variant.TypeIndex;
  if ((2 < uVar21) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar6)();
    return pTVar13;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar21) == '\0') {
    if ((local_88.Variant.TypeIndex != 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar6)();
      return pTVar13;
    }
    FText::FText(&local_c8,(FText *)&local_88);
    if ((2 < local_88.Variant.TypeIndex) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar6)();
      return pTVar13;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_88.Variant.TypeIndex])(&local_88);
    local_88.Variant.TypeIndex = 2;
    FText::FText((FText *)__return_storage_ptr__,&local_c8);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
    }
    uVar21 = (ulonglong)local_88.Variant.TypeIndex;
    if ((2 < local_88.Variant.TypeIndex) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar6)();
      return pTVar13;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar21] !=
        UE::Core::Private::
        TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
        ::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar21])(&local_88);
    }
  }
  else {
    if ((local_88.Variant.TypeIndex != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar6)();
      return pTVar13;
    }
    local_118 = (uint)local_88.Variant._padding_;
    local_120.Data = (FScriptContainerElement *)local_88.Variant._padding_;
    local_114 = local_88.Variant._padding_._4_4_;
    local_88.Variant._padding_ = 0;
    local_88.Variant._padding_ = 0;
    if ((2 < local_88.Variant.TypeIndex) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar6)();
      return pTVar13;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_88.Variant.TypeIndex] !=
        UE::Core::Private::
        TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
        ::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_88.Variant.TypeIndex])(&local_88);
    }
    local_108 = unaff_R13D & 0xffffff00;
    uVar20 = 0;
    local_88.Variant.TypeIndex = 2;
    bVar9 = false;
    uVar25 = local_118;
    uVar31 = local_108;
    if (0 < (int)local_118) {
      pFVar16 = (FScriptContainerElement *)0x0;
      pFVar23 = pFVar16;
      do {
        uVar11 = 0;
        if ((int)uVar20 < (int)uVar25) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), uVar25 = local_118, bVar10)) {
          pcVar6 = (code *)swi(3);
          pTVar13 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar6)();
          return pTVar13;
        }
        uVar11 = *(uint *)(local_120.Data + 0xc + (longlong)pFVar23);
        uVar2 = *(uint *)(local_120.Data + (longlong)pFVar23);
        pFVar24 = local_120.Data + 0x18 + (longlong)pFVar23;
        uVar3 = *(uint *)(local_120.Data + 4 + (longlong)pFVar23);
        uVar4 = *(uint *)(local_120.Data + 8 + (longlong)pFVar23);
        pFVar14 = pFVar24;
        if (((uVar11 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FDropcodeDelimiter>::GetTypeId(void)'
                        ::__l2::Global.D ||
             uVar4 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FDropcodeDelimiter>::GetTypeId(void)'
                      ::__l2::Global.C) ||
            uVar3 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FDropcodeDelimiter>::GetTypeId(void)'
                     ::__l2::Global.B) ||
            uVar2 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FDropcodeDelimiter>::GetTypeId(void)'
                     ::__l2::Global.A) {
          pFVar14 = pFVar16;
        }
        if (pFVar14 == (FScriptContainerElement *)0x0) {
          pFVar14 = pFVar24;
          if (((uVar11 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FTimecodeDelimiter>::GetTypeId(void)'
                          ::__l2::Global.D ||
               uVar4 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FTimecodeDelimiter>::GetTypeId(void)'
                        ::__l2::Global.C) ||
              uVar3 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FTimecodeDelimiter>::GetTypeId(void)'
                       ::__l2::Global.B) ||
              uVar2 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FTimecodeDelimiter>::GetTypeId(void)'
                       ::__l2::Global.A) {
            pFVar14 = pFVar16;
          }
          if (pFVar14 == (FScriptContainerElement *)0x0) {
            if ((((((uVar3 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketStart>::GetTypeId(void)'
                              ::__l2::Global.B &&
                    uVar2 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketStart>::GetTypeId(void)'
                             ::__l2::Global.A) &&
                   uVar11 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketStart>::GetTypeId(void)'
                             ::__l2::Global.D) &&
                   uVar4 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketStart>::GetTypeId(void)'
                            ::__l2::Global.C) && (pFVar24 != (FScriptContainerElement *)0x0)) ||
                ((((uVar11 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketEnd>::GetTypeId(void)'
                              ::__l2::Global.D &&
                   uVar4 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketEnd>::GetTypeId(void)'
                            ::__l2::Global.C) &&
                  uVar3 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketEnd>::GetTypeId(void)'
                           ::__l2::Global.B) &&
                  uVar2 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FBracketEnd>::GetTypeId(void)'
                           ::__l2::Global.A && (pFVar24 != (FScriptContainerElement *)0x0)))) ||
               ((((uVar11 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
                             ::__l2::Global.D &&
                  uVar4 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
                           ::__l2::Global.C) &&
                 uVar3 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
                          ::__l2::Global.B) &&
                 uVar2 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FPlus>::GetTypeId(void)'
                          ::__l2::Global.A && (pFVar24 != (FScriptContainerElement *)0x0)))) {
LAB_14604a3c0:
              if (((uVar11 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                              ::__l2::Global.D &&
                   uVar4 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                            ::__l2::Global.C) &&
                  uVar3 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                           ::__l2::Global.B) &&
                  uVar2 == `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                           ::__l2::Global.A) goto LAB_14604a3e7;
            }
            else {
              if ((((uVar11 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                               ::__l2::Global.D ||
                    uVar4 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                             ::__l2::Global.C) ||
                   uVar3 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                            ::__l2::Global.B) ||
                   uVar2 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FMinus>::GetTypeId(void)'
                            ::__l2::Global.A) || (pFVar24 == (FScriptContainerElement *)0x0)) {
                if ((((uVar11 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                                 ::__l2::Global.D ||
                      uVar4 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                               ::__l2::Global.C) ||
                     uVar3 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                              ::__l2::Global.B) ||
                     uVar2 != `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FStar>::GetTypeId(void)'
                              ::__l2::Global.A) || (pFVar24 == (FScriptContainerElement *)0x0))
                goto LAB_14604a4a9;
                goto LAB_14604a3c0;
              }
LAB_14604a3e7:
              uVar31 = uVar31 & 0xff;
              if (pFVar24 != (FScriptContainerElement *)0x0) {
                uVar31 = 1;
              }
            }
            uVar11 = 0;
            if ((int)uVar20 < (int)uVar25) {
              uVar11 = ~uVar20 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar13 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar6)();
              return pTVar13;
            }
            this_00 = (FExpressionNode *)(local_120.Data + (longlong)pFVar23);
            FExpressionNode::~FExpressionNode(this_00);
            iVar12 = (local_118 - uVar20) + -1;
            if (iVar12 != 0) {
              memmove(this_00,this_00[1].InlineBytes + 0x10,(longlong)iVar12 * 0x60);
            }
            local_118 = local_118 - 1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,&local_120,local_118,&local_114);
            uVar20 = uVar20 - 1;
            pFVar23 = pFVar23 + -0x60;
            uVar25 = local_118;
          }
          else {
            *local_110 = true;
          }
        }
        else {
          bVar9 = true;
          *local_110 = true;
        }
LAB_14604a4a9:
        uVar20 = uVar20 + 1;
        pFVar23 = pFVar23 + 0x60;
        param_4 = local_110;
        __return_storage_ptr__ = local_d8;
      } while ((int)uVar20 < (int)uVar25);
    }
    local_108 = uVar31;
    fVar8 = __real_3f000000;
    uVar31 = 0;
    cVar29 = (char)local_108;
    if ((int)uVar25 < 8) {
      uVar20 = uVar25 - 1;
      local_70[0] = 0;
      local_70[1] = 0;
      local_70[2] = 0;
      local_70[3] = 0;
      if (-1 < (int)uVar20) {
        piVar30 = local_70;
        lVar22 = (longlong)(int)uVar20 * 0x60;
        do {
          uVar11 = 0;
          if ((int)uVar20 < (int)uVar25) {
            uVar11 = ~uVar20 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             uVar25 = local_118, bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar13 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar6)();
            return pTVar13;
          }
          pFVar23 = local_120.Data + lVar22 + 0x18;
          if ((uVar20 & 1) == 0) {
            if (((`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                  ::__l2::Global.A != *(uint *)(local_120.Data + lVar22) ||
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.D != *(uint *)(local_120.Data + lVar22 + 0xc)) ||
                `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                ::__l2::Global.C != *(uint *)(local_120.Data + lVar22 + 8)) ||
                `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                ::__l2::Global.B != *(uint *)(local_120.Data + lVar22 + 4)) {
              pFVar23 = (FScriptContainerElement *)0x0;
            }
            if (pFVar23 == (FScriptContainerElement *)0x0) {
              *local_110 = false;
              pFVar15 = FText::AsLocalizable_Advanced_LocText
                                  (&local_a8,L"TimeManagement",L"UnrecognizedTimecode",
                                   L"Format not recognized as Timecode");
              (__return_storage_ptr__->Variant)._padding_ = 0;
              pIVar5 = (pFVar15->TextData).Reference;
              (__return_storage_ptr__->Variant)._padding_ = (longlong)pIVar5;
              if (pIVar5 != (ITextData *)0x0) {
                (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_e4);
              }
              *(uint *)&(__return_storage_ptr__->Variant)._padding_ = pFVar15->Flags;
              (__return_storage_ptr__->Variant).TypeIndex = '\x01';
              if (local_a8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
              }
              goto LAB_14604aadd;
            }
            uVar11 = 0;
            if ((int)uVar20 < (int)uVar25) {
              uVar11 = ~uVar20 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar25 = local_118, bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar13 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar6)();
              return pTVar13;
            }
            if (uVar31 < 4) {
              pFVar23 = local_120.Data + lVar22 + 0x18;
              if (((*(uint *)(local_120.Data + lVar22 + 0xc) !=
                    `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                    ::__l2::Global.D ||
                   *(uint *)(local_120.Data + lVar22 + 8) !=
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                   ::__l2::Global.C) ||
                  *(uint *)(local_120.Data + lVar22 + 4) !=
                  `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                  ::__l2::Global.B) ||
                  `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                  ::__l2::Global.A != *(uint *)(local_120.Data + lVar22)) {
                pFVar23 = (FScriptContainerElement *)0x0;
              }
              iVar17 = (int)ROUND((float)*(double *)pFVar23 + (float)*(double *)pFVar23 + fVar8) >>
                       1;
              iVar12 = -iVar17;
              if (iVar12 < 0) {
                iVar12 = iVar17;
              }
              *piVar30 = iVar12;
            }
            uVar31 = uVar31 + 1;
            piVar30 = piVar30 + 1;
          }
          else {
            pFVar16 = pFVar23;
            if (((*(uint *)(local_120.Data + lVar22) !=
                  `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FTimecodeDelimiter>::GetTypeId(void)'
                  ::__l2::Global.A ||
                 *(uint *)(local_120.Data + lVar22 + 4) !=
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FTimecodeDelimiter>::GetTypeId(void)'
                 ::__l2::Global.B) ||
                *(uint *)(local_120.Data + lVar22 + 8) !=
                `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FTimecodeDelimiter>::GetTypeId(void)'
                ::__l2::Global.C) ||
                *(uint *)(local_120.Data + lVar22 + 0xc) !=
                `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FTimecodeDelimiter>::GetTypeId(void)'
                ::__l2::Global.D) {
              pFVar16 = (FScriptContainerElement *)0x0;
            }
            if ((pFVar16 == (FScriptContainerElement *)0x0) &&
               ((((*(uint *)(local_120.Data + lVar22 + 0xc) !=
                   `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FDropcodeDelimiter>::GetTypeId(void)'
                   ::__l2::Global.D ||
                  *(uint *)(local_120.Data + lVar22 + 8) !=
                  `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FDropcodeDelimiter>::GetTypeId(void)'
                  ::__l2::Global.C) ||
                 *(uint *)(local_120.Data + lVar22 + 4) !=
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FDropcodeDelimiter>::GetTypeId(void)'
                 ::__l2::Global.B) ||
                 *(uint *)(local_120.Data + lVar22) !=
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FDropcodeDelimiter>::GetTypeId(void)'
                 ::__l2::Global.A || (pFVar23 == (FScriptContainerElement *)0x0)))) {
              *local_110 = false;
              pFVar15 = FText::AsLocalizable_Advanced_LocText
                                  (&local_98,L"TimeManagement",L"UnrecognizedTimecode",
                                   L"Format not recognized as Timecode");
              (__return_storage_ptr__->Variant)._padding_ = 0;
              pIVar5 = (pFVar15->TextData).Reference;
              (__return_storage_ptr__->Variant)._padding_ = (longlong)pIVar5;
              if (pIVar5 != (ITextData *)0x0) {
                (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_e0);
              }
              *(uint *)&(__return_storage_ptr__->Variant)._padding_ = pFVar15->Flags;
              (__return_storage_ptr__->Variant).TypeIndex = '\x01';
              if (local_98.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
              }
              goto LAB_14604aadd;
            }
          }
          lVar22 = lVar22 + -0x60;
          uVar20 = uVar20 - 1;
        } while (-1 < (int)uVar20);
        cVar29 = (char)local_108;
      }
      dVar33 = (double)local_f8->Numerator / (double)local_f8->Denominator;
      iVar17 = (int)((longlong)ROUND(dVar33 + dVar33 + __real_3fe0000000000000) >> 1);
      uVar25 = local_70[1];
      iVar12 = local_70[0];
      if (0 < iVar17) {
        for (; iVar17 <= iVar12; iVar12 = iVar12 - iVar17) {
          uVar25 = uVar25 + 1;
        }
      }
      uVar31 = local_70[2];
      if (0x3b < (int)uVar25) {
        uVar31 = local_70[2] + uVar25 / 0x3c;
        uVar25 = uVar25 % 0x3c;
      }
      iVar17 = local_70[3];
      if (0x3b < (int)uVar31) {
        iVar17 = local_70[3] + uVar31 / 0x3c;
        uVar31 = uVar31 % 0x3c;
      }
      if (((double)CONCAT44((uint)((ulonglong)(dVar33 - ___real_403df853e2556b29) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar33 - ___real_403df853e2556b29,0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee2308c3a
          ) || ((double)CONCAT44((uint)((ulonglong)(dVar33 - ___real_404df853e2556b29) >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar33 - ___real_404df853e2556b29,0) &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                __real_3e45798ee2308c3a)) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      if ((bVar9) && (bVar10)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      iVar27 = (int)ROUND(__real_bf000000 - ((float)dVar33 + (float)dVar33)) >> 1;
      iVar28 = -iVar27;
      if (iVar28 < 1) {
        local_f0 = 0;
      }
      else {
        iVar1 = iVar12 / iVar28 + uVar25;
        iVar26 = iVar1 / 0x3c + uVar31;
        iVar17 = iVar26 / 0x3c + iVar17;
        iVar26 = iVar26 % 0x3c;
        if (bVar9) {
          iVar19 = 4;
          if (iVar28 < 0x1f) {
            iVar19 = 2;
          }
          iVar18 = iVar17 * 0x3c + iVar26;
          dVar33 = (double)iVar18 * __real_3fb999999999999a;
          auVar32._8_8_ = 0;
          auVar32._0_8_ = dVar33;
          if (0.0 <= dVar33) {
            auVar32 = roundpd(ZEXT816(0),auVar32,1);
            dVar33 = auVar32._0_8_;
          }
          else {
            auVar32 = roundpd(ZEXT816(0),auVar32,2);
            dVar33 = auVar32._0_8_;
          }
          iVar26 = iVar26 * iVar27 * -0x3c - (iVar18 - (int)dVar33) * iVar19;
        }
        else {
          iVar26 = iVar26 * iVar27 * -0x3c;
        }
        local_f0 = iVar12 % iVar28 + (iVar1 % 0x3c) * iVar28 + iVar26 + iVar27 * -0xe10 * iVar17;
      }
      uStack_ec = 0;
      FVar7.Denominator = 0;
      FVar7.Numerator = local_f0;
      ConvertFrameTime((FFrameTime)&local_104,FVar7,*local_f8);
      if (fVar8 <= local_100) {
        local_104 = local_104 + 1;
      }
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = 0;
      iVar12 = -local_104;
      if (cVar29 == '\0') {
        iVar12 = local_104;
      }
      *(int *)&(__return_storage_ptr__->Variant)._padding_ = iVar12;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
LAB_14604aadd:
      DestructItems<TExpressionToken<wchar_t>,int>
                ((TExpressionToken<wchar_t> *)local_120.Data,local_118);
      if ((TExpressionToken<wchar_t> *)local_120.Data != (TExpressionToken<wchar_t> *)0x0) {
        FMemory::Free(local_120.Data);
      }
      uVar21 = (ulonglong)local_88.Variant.TypeIndex;
      if ((2 < local_88.Variant.TypeIndex) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar13 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar6)();
        return pTVar13;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar21])(&local_88);
    }
    else {
      *param_4 = false;
      pFVar15 = FText::AsLocalizable_Advanced_LocText
                          (&local_b8,L"TimeManagement",L"UnrecognizedTimecode",
                           L"Format not recognized as Timecode");
      (__return_storage_ptr__->Variant)._padding_ = 0;
      pIVar5 = (pFVar15->TextData).Reference;
      (__return_storage_ptr__->Variant)._padding_ = (longlong)pIVar5;
      if (pIVar5 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_e8);
      }
      *(uint *)&(__return_storage_ptr__->Variant)._padding_ = pFVar15->Flags;
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      DestructItems<TExpressionToken<wchar_t>,int>
                ((TExpressionToken<wchar_t> *)local_120.Data,local_118);
      if ((TExpressionToken<wchar_t> *)local_120.Data != (TExpressionToken<wchar_t> *)0x0) {
        FMemory::Free(local_120.Data);
      }
      uVar21 = (ulonglong)local_88.Variant.TypeIndex;
      if ((2 < local_88.Variant.TypeIndex) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar13 = (TValueOrError<FFrameTime,FExpressionError> *)(*pcVar6)();
        return pTVar13;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar21])(&local_88);
    }
  }
  return __return_storage_ptr__;
}

