// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// <lambda_invoker_cdecl> @ 1418a9380

TOptional<FExpressionError> * __cdecl
`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  undefined1 local_res8 [32];
  
  operator()(local_res8,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FShortCircuitParser @ 1418bd320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FShortCircuitParser * __thiscall FShortCircuitParser::FShortCircuitParser(FShortCircuitParser *this)

{
  TMap<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>_>
  *this_00;
  TMap<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>_>
  *this_01;
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b4 [4];
  FGuid *local_b0;
  FGuid *local_a8;
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
  *(undefined8 *)&(this->JumpTable).PreUnaryOps = 0;
  this_00 = &(this->JumpTable).BinaryOps;
  *(undefined8 *)&(this->JumpTable).PreUnaryOps.field_0x8 = 0;
  this_01 = &(this->JumpTable).BinaryShortCircuits;
  *(undefined8 *)&(this->JumpTable).PreUnaryOps.field_0x20 = 0;
  *(undefined4 *)&(this->JumpTable).PreUnaryOps.field_0x28 = 0;
  *(undefined4 *)&(this->JumpTable).PreUnaryOps.field_0x2c = 0x80;
  *(undefined4 *)&(this->JumpTable).PreUnaryOps.field_0x34 = 0;
  *(undefined4 *)&(this->JumpTable).PreUnaryOps.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->JumpTable).PreUnaryOps.field_0x40 = 0;
  *(undefined4 *)&(this->JumpTable).PreUnaryOps.field_0x48 = 0;
  *(undefined8 *)&(this->JumpTable).PostUnaryOps = 0;
  *(undefined8 *)&(this->JumpTable).PostUnaryOps.field_0x8 = 0;
  *(undefined8 *)&(this->JumpTable).PostUnaryOps.field_0x20 = 0;
  *(undefined4 *)&(this->JumpTable).PostUnaryOps.field_0x28 = 0;
  *(undefined4 *)&(this->JumpTable).PostUnaryOps.field_0x2c = 0x80;
  *(undefined4 *)&(this->JumpTable).PostUnaryOps.field_0x34 = 0;
  *(undefined4 *)&(this->JumpTable).PostUnaryOps.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->JumpTable).PostUnaryOps.field_0x40 = 0;
  *(undefined4 *)&(this->JumpTable).PostUnaryOps.field_0x48 = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->JumpTable).BinaryOps.field_0x8 = 0;
  *(undefined8 *)&(this->JumpTable).BinaryOps.field_0x20 = 0;
  *(undefined4 *)&(this->JumpTable).BinaryOps.field_0x28 = 0;
  *(undefined4 *)&(this->JumpTable).BinaryOps.field_0x2c = 0x80;
  *(undefined4 *)&(this->JumpTable).BinaryOps.field_0x34 = 0;
  *(undefined4 *)&(this->JumpTable).BinaryOps.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->JumpTable).BinaryOps.field_0x40 = 0;
  *(undefined4 *)&(this->JumpTable).BinaryOps.field_0x48 = 0;
  *(undefined8 *)&this_01->field_0x0 = 0;
  *(undefined8 *)&(this->JumpTable).BinaryShortCircuits.field_0x8 = 0;
  *(undefined8 *)&(this->JumpTable).BinaryShortCircuits.field_0x20 = 0;
  *(undefined4 *)&(this->JumpTable).BinaryShortCircuits.field_0x28 = 0;
  *(undefined4 *)&(this->JumpTable).BinaryShortCircuits.field_0x2c = 0x80;
  *(undefined4 *)&(this->JumpTable).BinaryShortCircuits.field_0x34 = 0;
  *(undefined4 *)&(this->JumpTable).BinaryShortCircuits.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->JumpTable).BinaryShortCircuits.field_0x40 = 0;
  *(undefined4 *)&(this->JumpTable).BinaryShortCircuits.field_0x48 = 0;
  (this->TokenDefinitions).bIgnoreWhitespace = true;
  iVar1 = (this->TokenDefinitions).Definitions.ArrayNum;
  local_40 = (longlong *)0x0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                ::Call;
  uStack_50 = `FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
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
  uStack_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FSubExpressionStart>;
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
  uStack_50 = ExpressionParser::ConsumeSymbol<ExpressionParser::FSubExpressionEnd>;
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
  uStack_50 = ExpressionParser::ConsumeSymbol<Tests::FAnd>;
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
  uStack_50 = ExpressionParser::ConsumeSymbol<Tests::FOr>;
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
  local_b0 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionStart>::GetTypeId(void)'
              ::__l2::Global;
  local_a8 = &`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<ExpressionParser::FSubExpressionEnd>::GetTypeId(void)'
              ::__l2::Global;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,FGuid_const_&>_>
            ((TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
              *)&this->Grammar,(TPairInitializer<FGuid_const_&,FGuid_const_&> *)local_b4,
             (bool *)(local_b4 + 4));
  FExpressionGrammar::DefineBinaryOperator<Tests::FAnd>(&this->Grammar,1,RightToLeft,true);
  FExpressionGrammar::DefineBinaryOperator<Tests::FOr>(&this->Grammar,1,RightToLeft,true);
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction__N_NUFShortCircuitTestContext__V<lambda_2>__1___0FShortCircuitParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBUFShortCircuitTestContext___Z__V<lambda_2>__1___0FShortCircuitParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_50 = (code *)CONCAT71(uStack_50._1_7_,local_b8);
  local_40 = (longlong *)0x0;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<bool,bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*>
                ::Call;
  local_b0 = &local_a0;
  local_a8 = (FGuid *)local_68;
  local_a0 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FAnd>::GetTypeId(void)'
             ::__l2::Global;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_&&>
              *)local_b4,(bool *)(local_b4 + 4));
  if (local_68[0] != (code *)0x0) {
    plVar2 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction__N_NUFShortCircuitTestContext__V<lambda_3>__1___0FShortCircuitParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBUFShortCircuitTestContext___Z__V<lambda_3>__1___0FShortCircuitParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_50 = (code *)CONCAT71(uStack_50._1_7_,local_b8);
  local_40 = (longlong *)0x0;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapBinaryFunction<bool,bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*>
                ::Call;
  local_b0 = &local_a0;
  local_a8 = (FGuid *)local_68;
  local_a0 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOr>::GetTypeId(void)'
             ::__l2::Global;
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_&&>
              *)local_b4,(bool *)(local_b4 + 4));
  if (local_68[0] != (code *)0x0) {
    plVar2 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapShortCircuitFunction__NUFShortCircuitTestContext__V<lambda_4>__1___0FShortCircuitParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_NAEBVFExpressionNode__PEBUFShortCircuitTestContext___Z__V<lambda_4>__1___0FShortCircuitParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_50 = (code *)CONCAT71(uStack_50._1_7_,local_b8);
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapShortCircuitFunction<bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_4>_>'::__l3::<lambda_1>,bool,FExpressionNode_const_&,FShortCircuitTestContext_const_*>
                ::Call;
  local_b0 = &local_a0;
  local_a8 = (FGuid *)local_68;
  local_a0 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOr>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = (FGuid)ZEXT816(0);
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  local_40 = (longlong *)0x0;
  TSet<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_01,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_&&>
              *)local_b4,(bool *)(local_b4 + 4));
  if (local_68[0] != (code *)0x0) {
    plVar2 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapShortCircuitFunction__NUFShortCircuitTestContext__V<lambda_5>__1___0FShortCircuitParser__QEAA_XZ__Impl__YA_AV__TFunction___A6A_NAEBVFExpressionNode__PEBUFShortCircuitTestContext___Z__V<lambda_5>__1___0FShortCircuitParser__QEAA_XZ__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uStack_50 = (code *)CONCAT71(uStack_50._1_7_,local_b8);
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Impl::WrapShortCircuitFunction<bool,FShortCircuitTestContext,`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_5>_>'::__l3::<lambda_1>,bool,FExpressionNode_const_&,FShortCircuitTestContext_const_*>
                ::Call;
  local_b0 = &local_a0;
  local_a8 = (FGuid *)local_68;
  local_a0 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FAnd>::GetTypeId(void)'
             ::__l2::Global;
  local_80 = (FGuid)ZEXT816(0);
  local_90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global;
  local_40 = (longlong *)0x0;
  TSet<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_&&>_>
            ((TSet<TTuple<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>,0>,FDefaultSetAllocator>
              *)this_01,
             (TPairInitializer<FOperatorFunctionID_const_&,TFunction<bool___cdecl(FExpressionNode_const_&,FShortCircuitTestContext_const_*)>_&&>
              *)local_b4,(bool *)(local_b4 + 4));
  if (local_68[0] != (code *)0x0) {
    plVar2 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return this;
}

// operator() @ 1418c0390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __thiscall
`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_1>::operator()
          (void *this,TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  bool bVar3;
  int iVar4;
  undefined ***pppuVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined1 local_78 [12];
  uint uStack_6c;
  undefined **local_68;
  uchar local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pwVar1 = (param_1->Stream).Start;
  pwVar2 = (param_1->Stream).ReadPos;
  if (((pwVar2 < pwVar1) || ((param_1->Stream).End + -4 < pwVar2)) || (*pwVar2 != L't')) {
LAB_1418c0477:
    local_80 = 0;
  }
  else {
    iVar4 = wcsncmp(pwVar2,L"true",4);
    if (iVar4 != 0) goto LAB_1418c0477;
    local_98._8_8_ = pwVar2 + 4;
    _local_78 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                ::__l2::Global;
    local_98._16_8_ = ((longlong)pwVar2 - (longlong)pwVar1 >> 1) << 0x20;
    local_80 = 1;
    local_68 = &___7__FInlineDataStorage__N_Impl__6B_;
    local_60 = '\x01';
    local_98._0_8_ = pwVar2;
    TExpressionTokenConsumer<wchar_t>::Add
              (param_1,(TStringToken<wchar_t> *)local_98,(FExpressionNode *)local_78);
    pppuVar5 = &local_68;
    if (((uStack_6c == 0 && local_78._8_4_ == 0) && local_78._4_4_ == 0) && local_78._0_4_ == 0) {
      pppuVar5 = (undefined ***)0x0;
    }
    if (pppuVar5 != (undefined ***)0x0) {
      (*(code *)**pppuVar5)(pppuVar5,0);
    }
  }
  pwVar1 = (param_1->Stream).ReadPos;
  pwVar2 = (param_1->Stream).Start;
  if (((pwVar2 <= pwVar1) && (pwVar1 <= (param_1->Stream).End + -5)) && (*pwVar1 == L'f')) {
    iVar4 = wcsncmp(pwVar1,L"false",5);
    if (iVar4 == 0) {
      stack0xffffffffffffff90 = pwVar1 + 5;
      local_78._0_8_ = pwVar1;
      bVar3 = true;
      local_68 = (undefined **)(((longlong)pwVar1 - (longlong)pwVar2 >> 1) << 0x20);
      goto LAB_1418c04d8;
    }
  }
  bVar3 = false;
LAB_1418c04d8:
  local_98._16_8_ = local_68;
  if (bVar3) {
    local_98._0_8_ = local_78._0_8_;
    local_98._8_8_ = stack0xffffffffffffff90;
    local_80 = 1;
    local_68 = &___7__FInlineDataStorage__N_Impl__6B_;
    _local_78 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
                ::__l2::Global;
    local_60 = '\0';
    TExpressionTokenConsumer<wchar_t>::Add
              (param_1,(TStringToken<wchar_t> *)local_98,(FExpressionNode *)local_78);
    pppuVar5 = &local_68;
    if (((uStack_6c == 0 && local_78._8_4_ == 0) && local_78._4_4_ == 0) && local_78._0_4_ == 0) {
      pppuVar5 = (undefined ***)0x0;
    }
    if (pppuVar5 != (undefined ***)0x0) {
      (*(code *)**pppuVar5)(pppuVar5,0);
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// operator() @ 1418c2fa0

bool __thiscall
`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_2>::operator()
          (void *this,bool param_1,bool param_2,FShortCircuitTestContext *param_3)

{
  param_3->NumOperatorsCalled = param_3->NumOperatorsCalled + 1;
  if ((param_1) && (param_2)) {
    return true;
  }
  return false;
}

// operator() @ 1418c33a0

bool __thiscall
`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_3>::operator()
          (void *this,bool param_1,bool param_2,FShortCircuitTestContext *param_3)

{
  param_3->NumOperatorsCalled = param_3->NumOperatorsCalled + 1;
  if ((!param_1) && (!param_2)) {
    return false;
  }
  return true;
}

// operator() @ 1418c39d0

bool __thiscall
`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_4>::operator()(void *this,bool param_1)

{
  return param_1;
}

// operator() @ 1418c3f00

bool __thiscall
`FShortCircuitParser::FShortCircuitParser'::__l2::<lambda_5>::operator()(void *this,bool param_1)

{
  return !param_1;
}

// Evaluate @ 1418d8190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<bool,FExpressionError> * __thiscall
FShortCircuitParser::Evaluate
          (FShortCircuitParser *this,TValueOrError<bool,FExpressionError> *__return_storage_ptr__,
          wchar_t *param_1,FShortCircuitTestContext *param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  TValueOrError<bool,FExpressionError> *pTVar5;
  undefined1 *puVar6;
  FText *pFVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_> local_120;
  FText local_110;
  FText local_100;
  TIOperatorEvaluationEnvironment<wchar_t> local_f0;
  TOperatorJumpTable<FShortCircuitTestContext,wchar_t> *local_e8;
  FShortCircuitTestContext *local_e0;
  FText local_d8;
  TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_c8;
  TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>
  local_b0;
  TValueOrError<FExpressionNode,FExpressionError> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  ExpressionParser::Lex<wchar_t>(&local_c8,param_1,&this->TokenDefinitions);
  uVar8 = (ulonglong)local_c8.Variant.TypeIndex;
  if ((2 < uVar8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
    return pTVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8) == '\0') {
    if ((local_c8.Variant.TypeIndex != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
      return pTVar5;
    }
    FText::FText(&local_110,(FText *)&local_c8);
    if ((2 < local_c8.Variant.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
      return pTVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_c8.Variant.TypeIndex])(&local_c8);
    local_c8.Variant.TypeIndex = 2;
    FText::FText((FText *)__return_storage_ptr__,&local_110);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_110.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
    }
    uVar8 = (ulonglong)local_c8.Variant.TypeIndex;
    if ((2 < local_c8.Variant.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
      return pTVar5;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::
        TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
        ::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(&local_c8);
    }
  }
  else {
    if ((local_c8.Variant.TypeIndex != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
      return pTVar5;
    }
    local_120.AllocatorInstance.Data = (FScriptContainerElement *)local_c8.Variant._padding_;
    local_120.ArrayNum = (uint)local_c8.Variant._padding_;
    local_120.ArrayMax = local_c8.Variant._padding_._4_4_;
    local_c8.Variant._padding_ = 0;
    local_c8.Variant._padding_ = 0;
    if ((2 < local_c8.Variant.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
      return pTVar5;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_c8.Variant.TypeIndex] !=
        UE::Core::Private::
        TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
        ::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_c8.Variant.TypeIndex])(&local_c8);
    }
    local_c8.Variant.TypeIndex = 2;
    ExpressionParser::Compile<wchar_t>(&local_b0,&local_120,&this->Grammar);
    uVar8 = (ulonglong)local_b0.Variant.TypeIndex;
    if ((2 < local_b0.Variant.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
      return pTVar5;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8 + 4) == '\0') {
      if ((local_b0.Variant.TypeIndex != 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
        return pTVar5;
      }
      FText::FText(&local_100,(FText *)&local_b0);
      if ((2 < local_b0.Variant.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
        return pTVar5;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_b0.Variant.TypeIndex])(&local_b0);
      local_b0.Variant.TypeIndex = 2;
      FText::FText((FText *)__return_storage_ptr__,&local_100);
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if (local_100.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
      }
    }
    else {
      local_f0 = (TIOperatorEvaluationEnvironment<wchar_t>)
                 &___7__TOperatorEvaluationEnvironment_UFShortCircuitTestContext___W__6B_;
      local_e8 = &this->JumpTable;
      local_e0 = param_2;
      if ((local_b0.Variant.TypeIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
        return pTVar5;
      }
      ExpressionParser::Evaluate<wchar_t>
                (&local_98,(TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_> *)&local_b0,
                 &local_f0);
      uVar8 = (ulonglong)local_98.Variant.TypeIndex;
      if ((2 < uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
        return pTVar5;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FExpressionNode,FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar8) == '\0') {
        if ((local_98.Variant.TypeIndex != 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
          return pTVar5;
        }
        plVar3 = (longlong *)CONCAT44(local_98.Variant._4_4_,local_98.Variant._0_4_);
        (__return_storage_ptr__->Variant)._padding_ = (longlong)plVar3;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))(plVar3,local_128);
        }
        *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = local_98.Variant._8_4_;
        (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      }
      else {
        if ((local_98.Variant.TypeIndex != 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
          return pTVar5;
        }
        puVar6 = &local_98.Variant.field_0x18;
        if (((local_98.Variant._12_4_ !=
              `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
              ::__l2::Global.D ||
             local_98.Variant._8_4_ !=
             `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
             ::__l2::Global.C) ||
            local_98.Variant._4_4_ !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
            ::__l2::Global.B) ||
            local_98.Variant._0_4_ !=
            `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<bool>::GetTypeId(void)'
            ::__l2::Global.A) {
          puVar6 = (undefined1 *)0x0;
        }
        if (puVar6 == (undefined1 *)0x0) {
          pFVar7 = FText::AsLocalizable_Advanced_LocText
                             (&local_d8,L"Anon",L"UnrecognizedResult",
                              L"Unrecognized result returned from expression");
          (__return_storage_ptr__->Variant)._padding_ = 0;
          pIVar1 = (pFVar7->TextData).Reference;
          (__return_storage_ptr__->Variant)._padding_ = (longlong)pIVar1;
          if (pIVar1 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_124);
          }
          *(uint *)&(__return_storage_ptr__->Variant)._padding_ = pFVar7->Flags;
          (__return_storage_ptr__->Variant).TypeIndex = '\x01';
          if (local_d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
          }
          if ((2 < local_98.Variant.TypeIndex) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
            return pTVar5;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[local_98.Variant.TypeIndex])(&local_98);
          if ((2 < local_b0.Variant.TypeIndex) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
            return pTVar5;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_b0.Variant.TypeIndex] !=
              UE::Core::Private::
              TDestructorCaller<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
              ::Destruct) {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_b0.Variant.TypeIndex])(&local_b0);
          }
          uVar8 = (ulonglong)local_c8.Variant.TypeIndex;
          if ((2 < local_c8.Variant.TypeIndex) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
            return pTVar5;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar8] ==
              UE::Core::Private::
              TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
              ::Destruct) {
            return __return_storage_ptr__;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar8])(&local_c8);
          return __return_storage_ptr__;
        }
        *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = *puVar6;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
      }
      if ((2 < local_98.Variant.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
        return pTVar5;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_98.Variant.TypeIndex])(&local_98);
    }
    uVar8 = (ulonglong)local_b0.Variant.TypeIndex;
    if ((2 < local_b0.Variant.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
      return pTVar5;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::
        TDestructorCaller<TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
        ::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TCompiledToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<struct_TCompiledToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(&local_b0);
    }
    uVar8 = (ulonglong)local_c8.Variant.TypeIndex;
    if ((2 < local_c8.Variant.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TValueOrError<bool,FExpressionError> *)(*pcVar2)();
      return pTVar5;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::
        TDestructorCaller<TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FEmptyType>
        ::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<TExpressionToken<wchar_t>,TSizedDefaultAllocator<32>_>,FExpressionError>::FWrapErrorType,TValueOrError<class_TArray<class_TExpressionToken<wchar_t>,class_TSizedDefaultAllocator<32>_>,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(&local_c8);
    }
  }
  return __return_storage_ptr__;
}

