// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1418a81b0

EAutomationTestFlags __thiscall
Tests::FExpressionParserMoveableTypes::GetTestFlags(FExpressionParserMoveableTypes *this)

{
  return SmokeFilter|EditorContext;
}

// IsStressTest @ 1418a81c0

bool __thiscall
Tests::FExpressionParserMoveableTypes::IsStressTest(FExpressionParserMoveableTypes *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1418a81d0

uint __thiscall
Tests::FExpressionParserMoveableTypes::GetRequiredDeviceNum(FExpressionParserMoveableTypes *this)

{
  return 1;
}

// GetTestSourceFileName @ 1418a81e0

FString * __thiscall
Tests::FExpressionParserMoveableTypes::GetTestSourceFileName
          (FExpressionParserMoveableTypes *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1418a8210

int __thiscall
Tests::FExpressionParserMoveableTypes::GetTestSourceFileLine(FExpressionParserMoveableTypes *this)

{
  return 0x401;
}

// GetTests @ 1418a8220

/* WARNING: Removing unreachable block (ram,0x0001418a830d) */
/* WARNING: Removing unreachable block (ram,0x0001418a83d8) */

void __thiscall
Tests::FExpressionParserMoveableTypes::GetTests
          (FExpressionParserMoveableTypes *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Expression Parser.Moveable Types");
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

// RunTest @ 1418a8400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Tests::FExpressionParserMoveableTypes::RunTest
          (FExpressionParserMoveableTypes *this,FString *param_1)

{
  code *pcVar1;
  int *piVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  FInlineDataStorage<Tests::FMoveableType> *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FInlineDataStorage<Tests::FMoveableType> *pFVar15;
  undefined1 auStackY_618 [32];
  int iStack_5e4;
  TTokenDefinitions<wchar_t> TStack_5e0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined1 auStack_5b8 [8];
  undefined1 auStack_5b0 [24];
  FString FStack_598;
  FGuid *pFStack_588;
  code **ppcStack_580;
  FGuid *pFStack_578;
  code **ppcStack_570;
  FString FStack_568;
  FGuid FStack_558;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined1 auStack_538 [16];
  FGuid FStack_528;
  undefined1 auStack_518 [16];
  undefined1 auStack_508 [16];
  undefined1 auStack_4f8 [32];
  int aiStack_4d8 [8];
  undefined1 auStack_4b8 [16];
  FInlineDataStorage<Tests::FMoveableType> aFStack_4a8 [2];
  code *pcStack_478;
  undefined8 uStack_468;
  undefined8 uStack_460;
  longlong lStack_458;
  longlong *plStack_450;
  undefined1 auStack_448 [16];
  FInlineDataStorage<Tests::FMoveableType> aFStack_438 [2];
  code *apcStack_408 [2];
  undefined **appuStack_3f8 [3];
  undefined ***pppuStack_3e0;
  code *apcStack_3d8 [2];
  undefined **appuStack_3c8 [3];
  undefined ***pppuStack_3b0;
  TValueOrError<FExpressionNode,FExpressionError> TStack_3a8;
  TValueOrError<FExpressionNode,FExpressionError> TStack_358;
  TValueOrError<FExpressionNode,FExpressionError> TStack_308;
  TOperatorJumpTable<void,wchar_t> TStack_2b8;
  FExpressionGrammar FStack_178;
  ulonglong uStack_38;
  
  piVar2 = FMoveableType::LeakCount;
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_618;
  auStack_4b8._4_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
       ::__l2::Global.B;
  auStack_4b8._0_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
       ::__l2::Global.A;
  auStack_4b8._8_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
       ::__l2::Global.C;
  auStack_4b8._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
       ::__l2::Global.D;
  FMoveableType::LeakCount = &iStack_5e4;
  pFVar15 = (FInlineDataStorage<Tests::FMoveableType> *)0x0;
  iStack_5e4 = 1;
  aFStack_4a8[0]._padding_ = (longlong)&___7__FInlineDataStorage_UFMoveableType_Tests___Impl__6B_;
  aFStack_4a8[0].Value._padding_ = (longlong)&___7FMoveableType_Tests__6B_;
  aFStack_4a8[0].Value.Id = 1;
  aFStack_4a8[0].Value.bOwnsLeak = true;
  auStack_4f8._0_4_ = 0;
  auStack_4f8._4_4_ = 0;
  auStack_4f8._8_4_ = 0;
  auStack_4f8._12_4_ = 0;
  FExpressionNode::operator=((FExpressionNode *)auStack_4f8,(FExpressionNode *)auStack_4b8);
  piVar6 = aiStack_4d8;
  if (((auStack_4f8._12_4_ !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
        ::__l2::Global.D ||
       auStack_4f8._8_4_ !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
       ::__l2::Global.C) ||
      auStack_4f8._4_4_ !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
      ::__l2::Global.B) ||
      auStack_4f8._0_4_ !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
      ::__l2::Global.A) {
    piVar6 = (int *)&DAT_00000008;
  }
  if (*piVar6 == 1) {
    *FMoveableType::LeakCount = *FMoveableType::LeakCount + 1;
    auStack_448._4_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
         ::__l2::Global.B;
    auStack_448._0_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
         ::__l2::Global.A;
    auStack_448._8_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
         ::__l2::Global.C;
    auStack_448._12_4_ =
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
         ::__l2::Global.D;
    aFStack_438[0]._padding_ = (longlong)&___7__FInlineDataStorage_UFMoveableType_Tests___Impl__6B_;
    aFStack_438[0].Value._padding_ = (longlong)&___7FMoveableType_Tests__6B_;
    aFStack_438[0].Value.Id = 1;
    aFStack_438[0].Value.bOwnsLeak = true;
    FExpressionNode::operator=((FExpressionNode *)auStack_4b8,(FExpressionNode *)auStack_448);
    pFVar9 = aFStack_438;
    if (((auStack_448._12_4_ == 0 && auStack_448._8_4_ == 0) && auStack_448._4_4_ == 0) &&
        auStack_448._0_4_ == 0) {
      pFVar9 = pFVar15;
    }
    if (pFVar9 != (FInlineDataStorage<Tests::FMoveableType> *)0x0) {
      (**(code **)pFVar9->_padding_)(pFVar9,0);
    }
    if ((((auStack_4b8._12_4_ == auStack_4f8._12_4_ && auStack_4b8._8_4_ == auStack_4f8._8_4_) &&
         auStack_4b8._4_4_ == auStack_4f8._4_4_) && auStack_4b8._0_4_ == auStack_4f8._0_4_) &&
       ((auStack_4f8._12_4_ != 0 || auStack_4f8._8_4_ != 0) ||
        (auStack_4f8._4_4_ != 0 || auStack_4f8._0_4_ != 0))) {
      pFVar9 = aFStack_4a8;
      if (((auStack_4b8._12_4_ == 0 && auStack_4b8._8_4_ == 0) && auStack_4b8._4_4_ == 0) &&
          auStack_4b8._0_4_ == 0) {
        pFVar9 = pFVar15;
      }
      pcVar1 = *(code **)(pFVar9->_padding_ + 0x10);
      if (pcVar1 == ::Impl::FInlineDataStorage<Tests::FMoveableType>::MoveAssign) {
        ::Impl::FInlineDataStorage<Tests::FMoveableType>::MoveAssign(pFVar9,auStack_4f8 + 0x10);
      }
      else {
        (*pcVar1)();
      }
    }
    else {
      pFVar9 = (FInlineDataStorage<Tests::FMoveableType> *)(auStack_4f8 + 0x10);
      if ((auStack_4f8._12_4_ == 0 && auStack_4f8._8_4_ == 0) &&
          (auStack_4f8._4_4_ == 0 && auStack_4f8._0_4_ == 0)) {
        pFVar9 = pFVar15;
      }
      uVar10 = auStack_4b8._12_4_;
      uVar13 = auStack_4b8._8_4_;
      uVar14 = auStack_4b8._4_4_;
      uVar12 = auStack_4b8._0_4_;
      if (pFVar9 != (FInlineDataStorage<Tests::FMoveableType> *)0x0) {
        (**(code **)pFVar9->_padding_)(pFVar9,0);
        uVar10 = auStack_4b8._12_4_;
        uVar13 = auStack_4b8._8_4_;
        uVar14 = auStack_4b8._4_4_;
        uVar12 = auStack_4b8._0_4_;
      }
      auStack_4f8._0_4_ = auStack_4b8._0_4_;
      auStack_4f8._4_4_ = auStack_4b8._4_4_;
      auStack_4f8._8_4_ = auStack_4b8._8_4_;
      auStack_4f8._12_4_ = auStack_4b8._12_4_;
      pFVar9 = aFStack_4a8;
      if (((uVar10 == 0 && uVar13 == 0) && uVar14 == 0) && uVar12 == 0) {
        pFVar9 = pFVar15;
      }
      if (pFVar9 != (FInlineDataStorage<Tests::FMoveableType> *)0x0) {
        pcVar1 = *(code **)(pFVar9->_padding_ + 8);
        if (pcVar1 == ::Impl::FInlineDataStorage<Tests::FMoveableType>::Reseat) {
          ::Impl::FInlineDataStorage<Tests::FMoveableType>::Reseat(pFVar9,auStack_4f8 + 0x10);
        }
        else {
          (*pcVar1)();
        }
        uStack_5c8 = 0;
        uStack_5c0 = 0;
        auStack_4b8._0_12_ = ZEXT812(0);
        auStack_4b8._12_4_ = 0;
        (**(code **)pFVar9->_padding_)(pFVar9,0);
      }
    }
    piVar6 = aiStack_4d8;
    if (((auStack_4f8._12_4_ !=
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
          ::__l2::Global.D ||
         auStack_4f8._8_4_ !=
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
         ::__l2::Global.C) ||
        auStack_4f8._4_4_ !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
        ::__l2::Global.B) ||
        auStack_4f8._0_4_ !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
        ::__l2::Global.A) {
      piVar6 = (int *)&DAT_00000008;
    }
    if (*piVar6 == 1) {
      TStack_5e0.bIgnoreWhitespace = false;
      TStack_5e0.Definitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_5e0.Definitions.ArrayNum = 0;
      TStack_5e0.Definitions.ArrayMax = 0;
      FExpressionGrammar::FExpressionGrammar(&FStack_178);
      TOperatorJumpTable<void,wchar_t>::TOperatorJumpTable<void,wchar_t>(&TStack_2b8);
      plStack_450 = (longlong *)0x0;
      uStack_468 = &
                   ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      pcStack_478 = UE::Core::Private::Function::
                    TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                    ::Call;
      uStack_460 = `Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_1>::
                   <lambda_invoker_cdecl>;
      iVar5 = TStack_5e0.Definitions.ArrayNum;
      if (TStack_5e0.Definitions.ArrayNum == TStack_5e0.Definitions.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1030,&TStack_5e0.Definitions.AllocatorInstance,
                           &TStack_5e0.Definitions.ArrayMax);
      }
      TStack_5e0.Definitions.ArrayNum = iVar5 + 1;
      pFVar11 = TStack_5e0.Definitions.AllocatorInstance.Data + (longlong)iVar5 * 0x30;
      *(code **)pFVar11 = pcStack_478;
      *(longlong **)(pFVar11 + 0x28) = plStack_450;
      *(undefined4 *)(pFVar11 + 0x10) = (undefined4)uStack_468;
      *(undefined4 *)(pFVar11 + 0x14) = uStack_468._4_4_;
      *(undefined4 *)(pFVar11 + 0x18) = (undefined4)uStack_460;
      *(undefined4 *)(pFVar11 + 0x1c) = uStack_460._4_4_;
      *(longlong *)(pFVar11 + 0x20) = lStack_458;
      if (*(longlong *)pFVar11 == 0) {
        if (pcStack_478 != (code *)0x0) {
          plVar7 = &uStack_468;
          if (plStack_450 != (longlong *)0x0) {
            plVar7 = plStack_450;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      else {
        pcStack_478 = (code *)0x0;
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (&FStack_178.PreUnaryOperators,(FGuid *)auStack_5b8,
                 (bool *)&`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
                          ::__l2::Global);
      FExpressionGrammar::DefineBinaryOperator<Tests::FOperator>(&FStack_178,1,RightToLeft,false);
      uStack_548 = 0;
      appuStack_3f8[0] =
           &
           ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_UFMoveableType_Tests__XV<lambda_2>__2____TestWithType_UFMoveableType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__2____TestWithType_UFMoveableType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      uStack_540 = 0;
      apcStack_408[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`Impl::WrapUnaryFunction<Tests::FMoveableType,void,`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
           ::Call;
      pFStack_588 = &FStack_558;
      pppuStack_3e0 = (undefined ***)0x0;
      FStack_558 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
                   ::__l2::Global;
      ppcStack_580 = apcStack_408;
      auStack_538._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
           ::__l2::Global.B;
      auStack_538._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
           ::__l2::Global.A;
      auStack_538._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
           ::__l2::Global.C;
      auStack_538._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
           ::__l2::Global.D;
      TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
                ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
                  *)&TStack_2b8,
                 (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
                  *)(auStack_5b8 + 4),(bool *)&pFStack_588);
      if (apcStack_408[0] != (code *)0x0) {
        pppuVar8 = appuStack_3f8;
        if (pppuStack_3e0 != (undefined ***)0x0) {
          pppuVar8 = pppuStack_3e0;
        }
        (*(code *)(*pppuVar8)[2])();
      }
      auStack_518._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
           ::__l2::Global.B;
      auStack_518._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
           ::__l2::Global.A;
      auStack_518._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
           ::__l2::Global.C;
      auStack_518._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FMoveableType>::GetTypeId(void)'
           ::__l2::Global.D;
      appuStack_3c8[0] =
           &
           ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_UFMoveableType_Tests__U12_XV<lambda_3>__2____TestWithType_UFMoveableType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_3>__2____TestWithType_UFMoveableType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      pppuStack_3b0 = (undefined ***)0x0;
      apcStack_3d8[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`Impl::WrapBinaryFunction<Tests::FMoveableType,Tests::FMoveableType,void,`Tests::TestWithType<Tests::FMoveableType>'::__l3::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
           ::Call;
      pFStack_578 = &FStack_528;
      ppcStack_570 = apcStack_3d8;
      FStack_528 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
                   ::__l2::Global;
      auStack_508 = auStack_518;
      TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
                ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
                  *)&TStack_2b8.BinaryOps,
                 (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
                  *)auStack_5b0,(bool *)&pFStack_578);
      if (apcStack_3d8[0] != (code *)0x0) {
        pppuVar8 = appuStack_3c8;
        if (pppuStack_3b0 != (undefined ***)0x0) {
          pppuVar8 = pppuStack_3b0;
        }
        (*(code *)(*pppuVar8)[2])();
      }
      ExpressionParser::Evaluate<wchar_t,void>
                (&TStack_3a8,L"+a",&TStack_5e0,&FStack_178,&TStack_2b8,(void *)0x0);
      if ((2 < TStack_3a8.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[TStack_3a8.Variant.TypeIndex])(&TStack_3a8);
      ExpressionParser::Evaluate<wchar_t,void>
                (&TStack_358,L"a+a",&TStack_5e0,&FStack_178,&TStack_2b8,(void *)0x0);
      if ((2 < TStack_358.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[TStack_358.Variant.TypeIndex])(&TStack_358);
      ExpressionParser::Evaluate<wchar_t,void>
                (&TStack_308,L"+a++a",&TStack_5e0,&FStack_178,&TStack_2b8,(void *)0x0);
      if ((2 < TStack_308.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[TStack_308.Variant.TypeIndex])(&TStack_308);
      TOperatorJumpTable<void,wchar_t>::~TOperatorJumpTable<void,wchar_t>(&TStack_2b8);
      FExpressionGrammar::~FExpressionGrammar(&FStack_178);
      DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
                ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                  *)TStack_5e0.Definitions.AllocatorInstance.Data,TStack_5e0.Definitions.ArrayNum);
      if ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
          TStack_5e0.Definitions.AllocatorInstance.Data !=
          (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)0x0
         ) {
        FMemory::Free(TStack_5e0.Definitions.AllocatorInstance.Data);
      }
      pFVar9 = (FInlineDataStorage<Tests::FMoveableType> *)(auStack_4f8 + 0x10);
      if (((auStack_4f8._12_4_ == 0 && auStack_4f8._8_4_ == 0) && auStack_4f8._4_4_ == 0) &&
          auStack_4f8._0_4_ == 0) {
        pFVar9 = pFVar15;
      }
      if (pFVar9 != (FInlineDataStorage<Tests::FMoveableType> *)0x0) {
        (**(code **)pFVar9->_padding_)(pFVar9,0);
      }
      pFVar9 = aFStack_4a8;
      if (((auStack_4b8._12_4_ == 0 && auStack_4b8._8_4_ == 0) && auStack_4b8._4_4_ == 0) &&
          auStack_4b8._0_4_ == 0) {
        pFVar9 = pFVar15;
      }
      if (pFVar9 != (FInlineDataStorage<Tests::FMoveableType> *)0x0) {
        (**(code **)pFVar9->_padding_)(pFVar9,0);
      }
      if (iStack_5e4 != 0) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        FMoveableType::LeakCount = piVar2;
        ::FString::PrintfImpl
                  (&FStack_568,
                   L"Expression node did not call wrapped type\'s destructors correctly. Potentially resulted in %d leaks."
                  );
        (*pcVar1)(this,&FStack_568,0);
        if (FStack_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_568.Data.AllocatorInstance.Data);
        }
        return false;
      }
      FMoveableType::LeakCount = piVar2;
      return true;
    }
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              (&FStack_598,
               L"Expression node move operator did not operate correctly. Expected moved-to state to be 1, it\'s actually %d."
              );
    (*pcVar1)(this,&FStack_598,0);
    auStack_5b0._8_8_ = FStack_598.Data.AllocatorInstance.Data;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              ((FString *)(auStack_5b0 + 8),
               L"Expression node move operator did not operate correctly. Expected moved-to state to be 1, it\'s actually %d."
              );
    (*pcVar1)(this,auStack_5b0 + 8,0);
  }
  if ((TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>
       *)auStack_5b0._8_8_ !=
      (TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>
       *)0x0) {
    FMemory::Free((void *)auStack_5b0._8_8_);
  }
  pFVar9 = (FInlineDataStorage<Tests::FMoveableType> *)(auStack_4f8 + 0x10);
  if (((auStack_4f8._12_4_ == 0 && auStack_4f8._8_4_ == 0) && auStack_4f8._4_4_ == 0) &&
      auStack_4f8._0_4_ == 0) {
    pFVar9 = pFVar15;
  }
  if (pFVar9 != (FInlineDataStorage<Tests::FMoveableType> *)0x0) {
    (**(code **)pFVar9->_padding_)(pFVar9,0);
  }
  pFVar9 = aFStack_4a8;
  if (((auStack_4b8._12_4_ == 0 && auStack_4b8._8_4_ == 0) && auStack_4b8._4_4_ == 0) &&
      auStack_4b8._0_4_ == 0) {
    pFVar9 = pFVar15;
  }
  if (pFVar9 != (FInlineDataStorage<Tests::FMoveableType> *)0x0) {
    (**(code **)pFVar9->_padding_)(pFVar9,0);
  }
  FMoveableType::LeakCount = piVar2;
  return false;
}

// GetBeautifiedTestName @ 1418a8410

FString * __thiscall
Tests::FExpressionParserMoveableTypes::GetBeautifiedTestName
          (FExpressionParserMoveableTypes *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Expression Parser.Moveable Types");
  return __return_storage_ptr__;
}

