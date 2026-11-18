// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// FFrameRateParser @ 1418bb490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FFrameRateParser * __thiscall FFrameRateParser::FFrameRateParser(FFrameRateParser *this)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b4 [4];
  FGuid *local_b0;
  code **local_a8;
  FGuid local_a0;
  FGuid local_90;
  FGuid local_80;
  code *local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  (this->TokenDefinitions).Definitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TokenDefinitions).Definitions.ArrayNum = 0;
  (this->TokenDefinitions).Definitions.ArrayMax = 0;
  FExpressionGrammar::FExpressionGrammar(&this->Grammar);
  TOperatorJumpTable<void,wchar_t>::TOperatorJumpTable<void,wchar_t>(&this->JumpTable);
  (this->TokenDefinitions).bIgnoreWhitespace = true;
  iVar1 = (this->TokenDefinitions).Definitions.ArrayNum;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_40 = (longlong *)0x0;
  uStack_50 = ExpressionParser::ConsumeSymbol<_anonymous_namespace_::FSeconds>;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  if (iVar1 == (this->TokenDefinitions).Definitions.ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&(this->TokenDefinitions).Definitions.AllocatorInstance,
                       &(this->TokenDefinitions).Definitions.ArrayMax);
  }
  (this->TokenDefinitions).Definitions.ArrayNum = iVar1 + 1;
  pFVar3 = (this->TokenDefinitions).Definitions.AllocatorInstance.Data + (longlong)iVar1 * 0x30;
  *(code **)pFVar3 = local_68[0];
  *(longlong **)(pFVar3 + 0x28) = local_40;
  *(undefined4 *)(pFVar3 + 0x10) = (undefined4)local_58;
  *(undefined4 *)(pFVar3 + 0x14) = local_58._4_4_;
  *(undefined4 *)(pFVar3 + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)(pFVar3 + 0x1c) = uStack_50._4_4_;
  *(longlong *)(pFVar3 + 0x20) = local_48;
  if ((*(longlong *)pFVar3 == 0) && (local_68[0] != (code *)0x0)) {
    plVar2 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar1 = (this->TokenDefinitions).Definitions.ArrayNum;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_40 = (longlong *)0x0;
  uStack_50 = ExpressionParser::ConsumeSymbol<_anonymous_namespace_::FFramesPerSecond>;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  if (iVar1 == (this->TokenDefinitions).Definitions.ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&(this->TokenDefinitions).Definitions.AllocatorInstance,
                       &(this->TokenDefinitions).Definitions.ArrayMax);
  }
  (this->TokenDefinitions).Definitions.ArrayNum = iVar1 + 1;
  pFVar3 = (this->TokenDefinitions).Definitions.AllocatorInstance.Data + (longlong)iVar1 * 0x30;
  *(code **)pFVar3 = local_68[0];
  *(longlong **)(pFVar3 + 0x28) = local_40;
  *(undefined4 *)(pFVar3 + 0x10) = (undefined4)local_58;
  *(undefined4 *)(pFVar3 + 0x14) = local_58._4_4_;
  *(undefined4 *)(pFVar3 + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)(pFVar3 + 0x1c) = uStack_50._4_4_;
  *(longlong *)(pFVar3 + 0x20) = local_48;
  if ((*(longlong *)pFVar3 == 0) && (local_68[0] != (code *)0x0)) {
    plVar2 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar1 = (this->TokenDefinitions).Definitions.ArrayNum;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_40 = (longlong *)0x0;
  uStack_50 = ExpressionParser::ConsumeSymbol<_anonymous_namespace_::FNonDropFrame>;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  if (iVar1 == (this->TokenDefinitions).Definitions.ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&(this->TokenDefinitions).Definitions.AllocatorInstance,
                       &(this->TokenDefinitions).Definitions.ArrayMax);
  }
  (this->TokenDefinitions).Definitions.ArrayNum = iVar1 + 1;
  pFVar3 = (this->TokenDefinitions).Definitions.AllocatorInstance.Data + (longlong)iVar1 * 0x30;
  *(code **)pFVar3 = local_68[0];
  *(longlong **)(pFVar3 + 0x28) = local_40;
  *(undefined4 *)(pFVar3 + 0x10) = (undefined4)local_58;
  *(undefined4 *)(pFVar3 + 0x14) = local_58._4_4_;
  *(undefined4 *)(pFVar3 + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)(pFVar3 + 0x1c) = uStack_50._4_4_;
  *(longlong *)(pFVar3 + 0x20) = local_48;
  if ((*(longlong *)pFVar3 == 0) && (local_68[0] != (code *)0x0)) {
    plVar2 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar1 = (this->TokenDefinitions).Definitions.ArrayNum;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_40 = (longlong *)0x0;
  uStack_50 = ExpressionParser::ConsumeSymbol<_anonymous_namespace_::FDropFrame>;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  if (iVar1 == (this->TokenDefinitions).Definitions.ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&(this->TokenDefinitions).Definitions.AllocatorInstance,
                       &(this->TokenDefinitions).Definitions.ArrayMax);
  }
  (this->TokenDefinitions).Definitions.ArrayNum = iVar1 + 1;
  pFVar3 = (this->TokenDefinitions).Definitions.AllocatorInstance.Data + (longlong)iVar1 * 0x30;
  *(code **)pFVar3 = local_68[0];
  *(longlong **)(pFVar3 + 0x28) = local_40;
  *(undefined4 *)(pFVar3 + 0x10) = (undefined4)local_58;
  *(undefined4 *)(pFVar3 + 0x14) = local_58._4_4_;
  *(undefined4 *)(pFVar3 + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)(pFVar3 + 0x1c) = uStack_50._4_4_;
  *(longlong *)(pFVar3 + 0x20) = local_48;
  if ((*(longlong *)pFVar3 == 0) && (local_68[0] != (code *)0x0)) {
    plVar2 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar1 = (this->TokenDefinitions).Definitions.ArrayNum;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_40 = (longlong *)0x0;
  uStack_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FForwardSlash>;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  if (iVar1 == (this->TokenDefinitions).Definitions.ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&(this->TokenDefinitions).Definitions.AllocatorInstance,
                       &(this->TokenDefinitions).Definitions.ArrayMax);
  }
  (this->TokenDefinitions).Definitions.ArrayNum = iVar1 + 1;
  pFVar3 = (this->TokenDefinitions).Definitions.AllocatorInstance.Data + (longlong)iVar1 * 0x30;
  *(code **)pFVar3 = local_68[0];
  *(longlong **)(pFVar3 + 0x28) = local_40;
  *(undefined4 *)(pFVar3 + 0x10) = (undefined4)local_58;
  *(undefined4 *)(pFVar3 + 0x14) = local_58._4_4_;
  *(undefined4 *)(pFVar3 + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)(pFVar3 + 0x1c) = uStack_50._4_4_;
  *(longlong *)(pFVar3 + 0x20) = local_48;
  if ((*(longlong *)pFVar3 == 0) && (local_68[0] != (code *)0x0)) {
    plVar2 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar1 = (this->TokenDefinitions).Definitions.ArrayNum;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_50 = ExpressionParser::ConsumeLocalizedNumberWithAgnosticFallback;
  local_40 = (longlong *)0x0;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  if (iVar1 == (this->TokenDefinitions).Definitions.ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&(this->TokenDefinitions).Definitions.AllocatorInstance,
                       &(this->TokenDefinitions).Definitions.ArrayMax);
  }
  (this->TokenDefinitions).Definitions.ArrayNum = iVar1 + 1;
  pFVar3 = (this->TokenDefinitions).Definitions.AllocatorInstance.Data + (longlong)iVar1 * 0x30;
  *(code **)pFVar3 = local_68[0];
  *(longlong **)(pFVar3 + 0x28) = local_40;
  *(undefined4 *)(pFVar3 + 0x10) = (undefined4)local_58;
  *(undefined4 *)(pFVar3 + 0x14) = local_58._4_4_;
  *(undefined4 *)(pFVar3 + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)(pFVar3 + 0x1c) = uStack_50._4_4_;
  *(longlong *)(pFVar3 + 0x20) = local_48;
  if ((*(longlong *)pFVar3 == 0) && (local_68[0] != (code *)0x0)) {
    plVar2 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FExpressionGrammar::DefineBinaryOperator<ExpressionParser::FForwardSlash>
            (&this->Grammar,1,RightToLeft,false);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (&(this->Grammar).PostUnaryOperators,(FGuid *)local_b4,(bool *)&DAT_154b7f980);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (&(this->Grammar).PostUnaryOperators,(FGuid *)local_b4,(bool *)&DAT_154b7f990);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (&(this->Grammar).PostUnaryOperators,(FGuid *)local_b4,(bool *)&DAT_154b7f9a0);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (&(this->Grammar).PostUnaryOperators,(FGuid *)local_b4,(bool *)&DAT_154b7f9b0);
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_NXV<lambda_1>__1___0FFrameRateParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V1_1___0FFrameRateParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_50 = (code *)CONCAT71(uStack_50._1_7_,local_b8);
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_1>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_b0 = &local_a0;
  local_a8 = local_68;
  local_a0.C = (undefined4)uRam0000000154b7f988;
  local_a0.D = uRam0000000154b7f988._4_4_;
  local_a0.A = _DAT_154b7f980;
  local_a0.B = DAT_154b7f980_4;
  local_80 = (FGuid)ZEXT816(0);
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  local_40 = (longlong *)0x0;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)&(this->JumpTable).PostUnaryOps,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
              *)local_b4,(bool *)&local_b0);
  if (local_68[0] != (code *)0x0) {
    plVar2 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_NXV<lambda_2>__1___0FFrameRateParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__1___0FFrameRateParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_50 = (code *)CONCAT71(uStack_50._1_7_,local_b8);
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_b0 = &local_a0;
  local_a8 = local_68;
  local_a0.C = (undefined4)uRam0000000154b7f998;
  local_a0.D = uRam0000000154b7f998._4_4_;
  local_a0.A = _DAT_154b7f990;
  local_a0.B = DAT_154b7f990_4;
  local_80 = (FGuid)ZEXT816(0);
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  local_40 = (longlong *)0x0;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)&(this->JumpTable).PostUnaryOps,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
              *)local_b4,(bool *)&local_b0);
  if (local_68[0] != (code *)0x0) {
    plVar2 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_NXV<lambda_3>__1___0FFrameRateParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_3>__1___0FFrameRateParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_50 = (code *)CONCAT71(uStack_50._1_7_,local_b8);
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_b0 = &local_a0;
  local_a8 = local_68;
  local_a0.C = (undefined4)uRam0000000154b7f9a8;
  local_a0.D = uRam0000000154b7f9a8._4_4_;
  local_a0.A = _DAT_154b7f9a0;
  local_a0.B = DAT_154b7f9a0_4;
  local_80 = (FGuid)ZEXT816(0);
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  local_40 = (longlong *)0x0;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)&(this->JumpTable).PostUnaryOps,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
              *)local_b4,(bool *)&local_b0);
  if (local_68[0] != (code *)0x0) {
    plVar2 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_NXV<lambda_4>__1___0FFrameRateParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_4>__1___0FFrameRateParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_50 = (code *)CONCAT71(uStack_50._1_7_,local_b8);
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapUnaryFunction<double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_b0 = &local_a0;
  local_a8 = local_68;
  local_a0.C = (undefined4)uRam0000000154b7f9b8;
  local_a0.D = uRam0000000154b7f9b8._4_4_;
  local_a0.A = _DAT_154b7f9b0;
  local_a0.B = DAT_154b7f9b0_4;
  local_80 = (FGuid)ZEXT816(0);
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  local_40 = (longlong *)0x0;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)&(this->JumpTable).PostUnaryOps,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
              *)local_b4,(bool *)&local_b0);
  if (local_68[0] != (code *)0x0) {
    plVar2 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_NNXV<lambda_5>__1___0FFrameRateParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_5>__1___0FFrameRateParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_50 = (code *)CONCAT71(uStack_50._1_7_,local_b8);
  local_40 = (longlong *)0x0;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FFrameRateParser::FFrameRateParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
                ::Call;
  local_b0 = &local_a0;
  local_a8 = local_68;
  local_a0 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FForwardSlash>::GetTypeId(void)'
             ::__l2::Global;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
              *)&(this->JumpTable).BinaryOps,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
              *)local_b4,(bool *)&local_b0);
  if (local_68[0] != (code *)0x0) {
    plVar2 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return this;
}

// operator() @ 1418c0300

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`FFrameRateParser::FFrameRateParser'::__l2::<lambda_1>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1 + __real_3fe0000000000000;
  auVar4 = roundpd(auVar4,auVar4,1);
  if (((auVar4._0_8_ == param_1) && (0.0 < param_1)) && (param_1 < __real_41dfffffffc00000)) {
    uVar1 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
            ::__l2::Global.B;
    uVar2 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
            ::__l2::Global.C;
    uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
            ::__l2::Global.D;
    *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
         ::__l2::Global.A;
    *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar1;
    *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar2;
    *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar3;
    *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
         &___7__FInlineDataStorage_UFFrameRate___Impl__6B_;
    *(ulonglong *)&(__return_storage_ptr__->Variant).field_0x18 =
         (ulonglong)(uint)(int)param_1 << 0x20 | 1;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
    return __return_storage_ptr__;
  }
  FFrameRateParser::MakeFrameRateFromInterval(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// operator() @ 1418c2f70

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`FFrameRateParser::FFrameRateParser'::__l2::<lambda_2>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          double param_1)

{
  FFrameRateParser::MakeFrameRateFromFPS(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// operator() @ 1418c3370

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`FFrameRateParser::FFrameRateParser'::__l2::<lambda_3>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          double param_1)

{
  FFrameRateParser::MakeFrameRateFromFPS(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// operator() @ 1418c3770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`FFrameRateParser::FFrameRateParser'::__l2::<lambda_4>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          double param_1)

{
  double dVar1;
  double dVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  undefined1 auStackY_148 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_108;
  undefined1 local_f8 [8];
  FText local_f0;
  FTextFormat local_e0;
  FText local_d0;
  FTextFormat local_c0;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  double local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_68;
  double local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  dVar2 = __real_404df851eb851eb8;
  dVar1 = __real_403df851eb851eb8;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (((double)CONCAT44((uint)((ulonglong)(param_1 - __real_403df851eb851eb8) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(param_1 - __real_403df851eb851eb8,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2eb1c432d) ||
     ((double)CONCAT44((uint)((ulonglong)(param_1 - __real_404df851eb851eb8) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(param_1 - __real_404df851eb851eb8,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2eb1c432d)) {
    FFrameRateParser::MakeFrameRateFromFPS(__return_storage_ptr__,param_1);
  }
  else {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_d0,L"FFrameRate",L"InvalidDropFrameFPS",
                        L"Drop frame not supported for FPS specified: {0}.\nDrop frame timecode is only supported for NTSC_30 ({1}fps) and NTSC_60 ({2}fps) frame rates."
                       );
    pFVar4 = FTextFormat::FTextFormat(&local_c0,pFVar3,Default);
    local_80 = dVar1;
    local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_a8.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_78 = (longlong *)0x0;
    local_70 = 0;
    local_58 = (longlong *)0x0;
    local_50 = 0;
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60 = dVar2;
    local_a8.Type = Double;
    local_88 = 3;
    local_68 = 3;
    local_108.ArrayNum = 3;
    local_a8.field1_0x8.DoubleValue = param_1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,0,&local_108.AllocatorInstance,3,&local_108.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_108.AllocatorInstance.Data,&local_a8,3);
    local_e0.TextFormatData.Object = (pFVar4->TextFormatData).Object;
    local_e0.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar4->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_e0.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e0.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_e0.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_f0,&local_e0,&local_108);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
    if ((FFormatArgumentValue *)local_108.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
    if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar4->TextFormatData).SharedReferenceCount.ReferenceController);
    *(ITextData **)&__return_storage_ptr__->Variant = local_f0.TextData.Reference;
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 8))
                (local_f0.TextData.Reference,local_f8);
    }
    *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = local_f0.Flags;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    }
    if (local_d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 1418c3ed0

TValueOrError<FExpressionNode,FExpressionError> * __thiscall
`FFrameRateParser::FFrameRateParser'::__l2::<lambda_5>::operator()
          (void *this,TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,
          double param_1,double param_2)

{
  FFrameRateParser::MakeFrameRate(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Evaluate @ 1418d7790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FFrameRate,FExpressionError> * __thiscall
FFrameRateParser::Evaluate
          (FFrameRateParser *this,TValueOrError<FFrameRate,FExpressionError> *__return_storage_ptr__
          ,wchar_t *param_1)

{
  double dVar1;
  ITextData *pIVar2;
  code *pcVar3;
  double dVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  TValueOrError<FFrameRate,FExpressionError> *pTVar8;
  TValueOrError<FExpressionNode,FExpressionError> *pTVar9;
  longlong *plVar10;
  FText *pFVar11;
  double *pdVar12;
  ulonglong uVar13;
  undefined1 auStack_248 [32];
  undefined1 local_228 [4];
  undefined1 local_224 [4];
  TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> local_220;
  FText local_210;
  FText local_200;
  FText local_1f0;
  TIOperatorEvaluationEnvironment<wchar_t> local_1e0;
  TOperatorJumpTable<void,wchar_t> *local_1d8;
  undefined8 local_1d0;
  FText local_1c8;
  TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_1b8;
  TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_1a0;
  undefined1 local_188 [64];
  byte local_148;
  FText local_138;
  longlong local_120 [5];
  byte local_f8;
  TValueOrError<FExpressionNode,FExpressionError> local_e8;
  TValueOrError<FExpressionNode,FExpressionError> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_248;
  ExpressionParser::Lex<wchar_t>(&local_1b8,param_1,&this->TokenDefinitions);
  uVar13 = (ulonglong)local_1b8.Variant.TypeIndex;
  if ((2 < uVar13) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
    return pTVar8;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar13) == '\0') {
    if ((local_1b8.Variant.TypeIndex != 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
      return pTVar8;
    }
    FText::FText(&local_210,(FText *)&local_1b8);
    if ((2 < local_1b8.Variant.TypeIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
      return pTVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_1b8.Variant.TypeIndex])(&local_1b8);
    local_1b8.Variant.TypeIndex = 2;
    FText::FText((FText *)__return_storage_ptr__,&local_210);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_210.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_210.TextData.Reference + 0x10))();
    }
    uVar13 = (ulonglong)local_1b8.Variant.TypeIndex;
    if ((2 < local_1b8.Variant.TypeIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
      return pTVar8;
    }
  }
  else {
    if ((local_1b8.Variant.TypeIndex != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
      return pTVar8;
    }
    local_220.AllocatorInstance.Data = (FScriptContainerElement *)local_1b8.Variant._padding_;
    local_220.ArrayNum = (uint)local_1b8.Variant._padding_;
    local_220.ArrayMax = local_1b8.Variant._padding_._4_4_;
    local_1b8.Variant._padding_ = 0;
    local_1b8.Variant._padding_ = 0;
    if ((2 < local_1b8.Variant.TypeIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
      return pTVar8;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_1b8.Variant.TypeIndex] !=
        UE::Core::Private::
        TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
        ::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_1b8.Variant.TypeIndex])(&local_1b8);
    }
    local_1b8.Variant.TypeIndex = 2;
    ExpressionParser::Compile<wchar_t>(&local_1a0,&local_220,&this->Grammar);
    uVar13 = (ulonglong)local_1a0.Variant.TypeIndex;
    if ((2 < local_1a0.Variant.TypeIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
      return pTVar8;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar13 + 4) == '\0') {
      if ((local_1a0.Variant.TypeIndex != 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
        return pTVar8;
      }
      FText::FText(&local_200,(FText *)&local_1a0);
      if ((2 < local_1a0.Variant.TypeIndex) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
        return pTVar8;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_1a0.Variant.TypeIndex])(&local_1a0);
      local_1a0.Variant.TypeIndex = 2;
      FText::FText((FText *)__return_storage_ptr__,&local_200);
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if (local_200.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
      }
    }
    else {
      local_1d0 = 0;
      local_1e0 = (TIOperatorEvaluationEnvironment<wchar_t>)
                  &___7__TOperatorEvaluationEnvironment_X_W__6B_;
      local_1d8 = &this->JumpTable;
      if ((local_1a0.Variant.TypeIndex != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
        return pTVar8;
      }
      ExpressionParser::Evaluate<wchar_t>
                ((TValueOrError<FExpressionNode,FExpressionError> *)local_188,
                 (TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_> *)&local_1a0,
                 &local_1e0);
      uVar13 = (ulonglong)local_148;
      if ((2 < uVar13) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
        return pTVar8;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar13) == '\0') {
        if ((local_148 != 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
          return pTVar8;
        }
        plVar10 = (longlong *)CONCAT44(local_188._4_4_,local_188._0_4_);
        (__return_storage_ptr__->Variant)._padding_ = (longlong)plVar10;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 8))(plVar10,local_228);
        }
        *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = local_188._8_4_;
        (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      }
      else {
        if ((local_148 != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
          return pTVar8;
        }
        dVar4 = __real_3ff0000000000000;
        pdVar12 = (double *)(local_188 + 0x18);
        if (((local_188._4_4_ !=
              `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
              ::__l2::Global.B ||
             local_188._0_4_ !=
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
             ::__l2::Global.A) ||
            local_188._12_4_ !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
            ::__l2::Global.D) ||
            local_188._8_4_ !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
            ::__l2::Global.C) {
          pdVar12 = (double *)0x0;
        }
        if (pdVar12 == (double *)0x0) {
          pdVar12 = (double *)(local_188 + 0x18);
          if (((local_188._12_4_ !=
                `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
                ::__l2::Global.D ||
               local_188._8_4_ !=
               `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
               ::__l2::Global.C) ||
              local_188._4_4_ !=
              `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.B) ||
              local_188._0_4_ !=
              `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.A) {
            pdVar12 = (double *)0x0;
          }
          if (pdVar12 == (double *)0x0) {
LAB_1418d7f2d:
            pFVar11 = FText::AsLocalizable_Advanced_LocText
                                (&local_1c8,L"FFrameRate",L"UnrecognizedResult",
                                 L"Unrecognized result returned from expression");
            (__return_storage_ptr__->Variant)._padding_ = 0;
            pIVar2 = (pFVar11->TextData).Reference;
            (__return_storage_ptr__->Variant)._padding_ = (longlong)pIVar2;
            if (pIVar2 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_224);
            }
            *(uint *)&(__return_storage_ptr__->Variant)._padding_ = pFVar11->Flags;
            (__return_storage_ptr__->Variant).TypeIndex = '\x01';
            if (local_1c8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
            }
            if ((2 < local_148) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
              return pTVar8;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_148])(local_188);
            if ((2 < local_1a0.Variant.TypeIndex) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
              return pTVar8;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[local_1a0.Variant.TypeIndex] !=
                UE::Core::Private::
                TDestructorCaller<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
                ::Destruct) {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[local_1a0.Variant.TypeIndex])(&local_1a0);
            }
            uVar13 = (ulonglong)local_1b8.Variant.TypeIndex;
            if ((2 < local_1b8.Variant.TypeIndex) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
              return pTVar8;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar13] ==
                UE::Core::Private::
                TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
                ::Destruct) {
              return __return_storage_ptr__;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar13])(&local_1b8);
            return __return_storage_ptr__;
          }
          (__return_storage_ptr__->Variant)._padding_ = (longlong)*pdVar12;
          (__return_storage_ptr__->Variant).TypeIndex = '\0';
        }
        else {
          dVar1 = *pdVar12;
          bVar6 = dVar1 <= __real_3ff0000000000000;
          if (bVar6) {
            pTVar9 = MakeFrameRateFromInterval(&local_e8,dVar1);
          }
          else {
            pTVar9 = MakeFrameRateFromFPS(&local_98,dVar1);
          }
          local_f8 = (pTVar9->Variant).TypeIndex;
          uVar13 = (ulonglong)local_f8;
          if ((2 < local_f8) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x105,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
            return pTVar8;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                      ::__l2::MoveConstructors)[uVar13])(&local_138,pTVar9);
          if (bVar6) {
            if ((2 < local_e8.Variant.TypeIndex) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
              return pTVar8;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_e8.Variant.TypeIndex])(&local_e8);
          }
          if (dVar4 < dVar1) {
            if ((2 < local_98.Variant.TypeIndex) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
              return pTVar8;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_98.Variant.TypeIndex])(&local_98);
          }
          uVar13 = (ulonglong)local_f8;
          if ((2 < local_f8) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
            return pTVar8;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar13) == '\0') {
            if ((local_f8 != 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
              return pTVar8;
            }
            FText::FText(&local_1f0,&local_138);
            uVar13 = (ulonglong)local_f8;
            if ((2 < local_f8) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
              return pTVar8;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar13])(&local_138);
            local_f8 = 2;
            FText::FText((FText *)__return_storage_ptr__,&local_1f0);
            (__return_storage_ptr__->Variant).TypeIndex = '\x01';
            if (local_1f0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
            }
            uVar13 = (ulonglong)local_f8;
            if ((2 < local_f8) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
              return pTVar8;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar13])(&local_138);
          }
          else {
            if ((local_f8 != 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
              return pTVar8;
            }
            bVar5 = local_f8;
            plVar10 = local_120;
            if (((local_138._12_4_ !=
                  `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
                  ::__l2::Global.D ||
                 local_138.Flags !=
                 `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
                 ::__l2::Global.C) ||
                local_138.TextData.Reference._4_4_ !=
                `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
                ::__l2::Global.B) ||
                (uint)local_138.TextData.Reference !=
                `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
                ::__l2::Global.A) {
              plVar10 = (longlong *)0x0;
            }
            if (plVar10 == (longlong *)0x0) {
              if ((2 < local_f8) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
                return pTVar8;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[bVar5] !=
                  UE::Core::Private::
                  TDestructorCaller<TValueOrError<FExpressionNode,FExpressionError>::FEmptyType>::
                  Destruct) {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[bVar5])(&local_138);
              }
              goto LAB_1418d7f2d;
            }
            (__return_storage_ptr__->Variant)._padding_ = *plVar10;
            (__return_storage_ptr__->Variant).TypeIndex = '\0';
            if ((2 < local_f8) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
              return pTVar8;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[bVar5] !=
                UE::Core::Private::
                TDestructorCaller<TValueOrError<FExpressionNode,FExpressionError>::FEmptyType>::
                Destruct) {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[bVar5])(&local_138);
            }
          }
        }
      }
      if ((2 < local_148) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
        return pTVar8;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_148])(local_188);
    }
    uVar13 = (ulonglong)local_1a0.Variant.TypeIndex;
    if ((2 < local_1a0.Variant.TypeIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
      return pTVar8;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] !=
        UE::Core::Private::
        TDestructorCaller<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
        ::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(&local_1a0);
    }
    uVar13 = (ulonglong)local_1b8.Variant.TypeIndex;
    if ((2 < local_1b8.Variant.TypeIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TValueOrError<FFrameRate,FExpressionError> *)(*pcVar3)();
      return pTVar8;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar13] !=
      UE::Core::Private::
      TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
      ::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar13])(&local_1b8);
  }
  return __return_storage_ptr__;
}

// Get @ 1418dc330

FFrameRateParser * __cdecl FFrameRateParser::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FFrameRateParser&___ptr64___cdecl_FFrameRateParser::Get(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FFrameRateParser&___ptr64___cdecl_FFrameRateParser::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FFrameRateParser&___ptr64___cdecl_FFrameRateParser::Get(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FFrameRateParser(&`public:_static_class_FFrameRateParser&___ptr64___cdecl_FFrameRateParser::Get(void)'
                        ::__l2::StaticFrameRateParser);
      atexit(`FFrameRateParser::Get'::__l2::_dynamic_atexit_destructor_for__StaticFrameRateParser__)
      ;
      _Init_thread_footer(&`public:_static_class_FFrameRateParser&___ptr64___cdecl_FFrameRateParser::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FFrameRateParser&___ptr64___cdecl_FFrameRateParser::Get(void)'::
              __l2::StaticFrameRateParser;
    }
  }
  return &`public:_static_class_FFrameRateParser&___ptr64___cdecl_FFrameRateParser::Get(void)'::__l2
          ::StaticFrameRateParser;
}

// MakeFrameRate @ 1418e7bb0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
FFrameRateParser::MakeFrameRate
          (TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,double param_1,
          double param_2)

{
  ITextData *pIVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  undefined1 local_res10 [16];
  double local_res20;
  double local_78;
  FText local_70;
  FText local_60;
  FTextFormat local_50 [4];
  
  local_res20 = 0.0;
  local_78 = 0.0;
  if (((param_1 <= 0.0) || (dVar2 = modf(param_1,&local_res20), dVar2 != 0.0)) ||
     (__real_41dfffffffc00000 < local_res20)) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_70,L"FFrameRate",L"InvalidNumerator",
                        L"Invalid framerate numerator: {0}");
    pFVar7 = FTextFormat::FTextFormat(local_50,pFVar6,Default);
    pFVar6 = FText::Format<double>(&local_60,pFVar7,param_1);
    *(undefined8 *)&__return_storage_ptr__->Variant = 0;
    pIVar1 = (pFVar6->TextData).Reference;
    *(ITextData **)&__return_storage_ptr__->Variant = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar6->Flags;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    TVar8.Reference = local_70.TextData.Reference;
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
      TVar8.Reference = local_70.TextData.Reference;
    }
  }
  else {
    if (((0.0 < param_2) && (dVar2 = modf(param_2,&local_78), dVar2 == 0.0)) &&
       (local_78 <= __real_41dfffffffc00000)) {
      uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.B;
      uVar4 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.C;
      uVar5 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.D;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
           ::__l2::Global.A;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar3;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar4;
      *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar5;
      *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
           &___7__FInlineDataStorage_UFFrameRate___Impl__6B_;
      *(ulonglong *)&(__return_storage_ptr__->Variant).field_0x18 =
           CONCAT44((int)local_78,(int)local_res20);
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_60,L"FFrameRate",L"InvalidDenominator",
                        L"Invalid framerate denominator: {0}");
    pFVar7 = FTextFormat::FTextFormat(local_50,pFVar6,Default);
    pFVar6 = FText::Format<double>(&local_70,pFVar7,param_2);
    *(undefined8 *)&__return_storage_ptr__->Variant = 0;
    pIVar1 = (pFVar6->TextData).Reference;
    *(ITextData **)&__return_storage_ptr__->Variant = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar6->Flags;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    TVar8.Reference = local_60.TextData.Reference;
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
      TVar8.Reference = local_60.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// MakeFrameRateFromFPS @ 1418e7dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
FFrameRateParser::MakeFrameRateFromFPS
          (TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,double param_1)

{
  ITextData *pIVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  TRefCountPtr<ITextData> TVar6;
  uint uVar7;
  uint uVar8;
  undefined8 in_XMM1_Qb;
  undefined1 auVar9 [16];
  undefined1 local_res10 [24];
  FText local_48;
  FText local_38;
  FTextFormat local_28 [2];
  
  auVar9._8_8_ = in_XMM1_Qb;
  auVar9._0_8_ = param_1;
  if ((param_1 <= 0.0) || (__real_41dfffffffc00000 <= param_1)) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"FFrameRate",L"OutOfBoundsFPS",
                        L"Invalid FPS specified: {0} (out of bounds)");
    pFVar5 = FTextFormat::FTextFormat(local_28,pFVar4,Default);
    pFVar4 = FText::Format<double>(&local_38,pFVar5,param_1);
    *(undefined8 *)&__return_storage_ptr__->Variant = 0;
    pIVar1 = (pFVar4->TextData).Reference;
    *(ITextData **)&__return_storage_ptr__->Variant = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar4->Flags;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    TVar6.Reference = local_48.TextData.Reference;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      TVar6.Reference = local_48.TextData.Reference;
    }
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_1 + __real_3fe0000000000000;
    auVar9 = roundpd(auVar9,auVar2,1);
    if (auVar9._0_8_ == param_1) {
      uVar7 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.B;
      uVar8 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.C;
      uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.D;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
           ::__l2::Global.A;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar7;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar8;
      *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar3;
      *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
           &___7__FInlineDataStorage_UFFrameRate___Impl__6B_;
      *(ulonglong *)&(__return_storage_ptr__->Variant).field_0x18 =
           (ulonglong)(uint)(int)auVar9._0_8_ | 0x100000000;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
    uVar7 = SUB84(param_1 - ___real_4037f9db22d0e560,0) &
            (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar8 = (uint)((ulonglong)(param_1 - ___real_4037f9db22d0e560) >> 0x20) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((double)CONCAT44(uVar8,uVar7) < __real_3f1a36e2eb1c432d ||
        (double)CONCAT44(uVar8,uVar7) == __real_3f1a36e2eb1c432d) {
      uVar7 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.B;
      uVar8 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.C;
      uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.D;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
           ::__l2::Global.A;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar7;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar8;
      *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar3;
      *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
           &___7__FInlineDataStorage_UFFrameRate___Impl__6B_;
      *(undefined8 *)&(__return_storage_ptr__->Variant).field_0x18 = 0x3e900005dc0;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
    uVar7 = SUB84(param_1 - __real_403df851eb851eb8,0) &
            (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar8 = (uint)((ulonglong)(param_1 - __real_403df851eb851eb8) >> 0x20) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((double)CONCAT44(uVar8,uVar7) < __real_3f1a36e2eb1c432d ||
        (double)CONCAT44(uVar8,uVar7) == __real_3f1a36e2eb1c432d) {
      uVar7 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.B;
      uVar8 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.C;
      uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.D;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
           ::__l2::Global.A;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar7;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar8;
      *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar3;
      *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
           &___7__FInlineDataStorage_UFFrameRate___Impl__6B_;
      *(undefined8 *)&(__return_storage_ptr__->Variant).field_0x18 = 0x3e900007530;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
    uVar7 = SUB84(param_1 - __real_404df851eb851eb8,0) &
            (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar8 = (uint)((ulonglong)(param_1 - __real_404df851eb851eb8) >> 0x20) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((double)CONCAT44(uVar8,uVar7) < __real_3f1a36e2eb1c432d ||
        (double)CONCAT44(uVar8,uVar7) == __real_3f1a36e2eb1c432d) {
      uVar7 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.B;
      uVar8 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.C;
      uVar3 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
              ::__l2::Global.D;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x0 =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<FFrameRate>::GetTypeId(void)'
           ::__l2::Global.A;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x4 = uVar7;
      *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = uVar8;
      *(uint *)&(__return_storage_ptr__->Variant).field_0xc = uVar3;
      *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
           &___7__FInlineDataStorage_UFFrameRate___Impl__6B_;
      *(undefined8 *)&(__return_storage_ptr__->Variant).field_0x18 = 0x3e90000ea60;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"FFrameRate",L"FractionalFrameRate_Format",
                        L"Fractional FPS specified: {0}.\nPlease use x/y notation to define such framerates."
                       );
    pFVar5 = FTextFormat::FTextFormat(local_28,pFVar4,Default);
    pFVar4 = FText::Format<double>(&local_48,pFVar5,param_1);
    *(undefined8 *)&__return_storage_ptr__->Variant = 0;
    pIVar1 = (pFVar4->TextData).Reference;
    *(ITextData **)&__return_storage_ptr__->Variant = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar4->Flags;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    TVar6.Reference = local_38.TextData.Reference;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      TVar6.Reference = local_38.TextData.Reference;
    }
  }
  if (TVar6.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar6.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// MakeFrameRateFromInterval @ 1418e8090

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
FFrameRateParser::MakeFrameRateFromInterval
          (TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,double param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  undefined1 local_res10 [24];
  FText local_48;
  FText local_38;
  FTextFormat local_28 [2];
  
  if (0.0 < param_1) {
    MakeFrameRateFromFPS(__return_storage_ptr__,__real_3ff0000000000000 / param_1);
  }
  else {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"FFrameRate",L"InvalidInterval",
                        L"Invalid interval specified: {0}");
    pFVar3 = FTextFormat::FTextFormat(local_28,pFVar2,Default);
    pFVar2 = FText::Format<double>(&local_48,pFVar3,param_1);
    *(undefined8 *)&__return_storage_ptr__->Variant = 0;
    pIVar1 = (pFVar2->TextData).Reference;
    *(ITextData **)&__return_storage_ptr__->Variant = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    *(uint *)&(__return_storage_ptr__->Variant).field_0x8 = pFVar2->Flags;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

