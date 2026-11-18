// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1418a8480

EAutomationTestFlags __thiscall
Tests::FExpressionParserAllocatedTypes::GetTestFlags(FExpressionParserAllocatedTypes *this)

{
  return SmokeFilter|EditorContext;
}

// IsStressTest @ 1418a8490

bool __thiscall
Tests::FExpressionParserAllocatedTypes::IsStressTest(FExpressionParserAllocatedTypes *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1418a84a0

uint __thiscall
Tests::FExpressionParserAllocatedTypes::GetRequiredDeviceNum(FExpressionParserAllocatedTypes *this)

{
  return 1;
}

// GetTestSourceFileName @ 1418a84b0

FString * __thiscall
Tests::FExpressionParserAllocatedTypes::GetTestSourceFileName
          (FExpressionParserAllocatedTypes *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1418a84e0

int __thiscall
Tests::FExpressionParserAllocatedTypes::GetTestSourceFileLine(FExpressionParserAllocatedTypes *this)

{
  return 0x416;
}

// GetTests @ 1418a84f0

/* WARNING: Removing unreachable block (ram,0x0001418a85dd) */
/* WARNING: Removing unreachable block (ram,0x0001418a86a8) */

void __thiscall
Tests::FExpressionParserAllocatedTypes::GetTests
          (FExpressionParserAllocatedTypes *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Expression Parser.Allocated Types");
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

// RunTest @ 1418a86d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Tests::FExpressionParserAllocatedTypes::RunTest
          (FExpressionParserAllocatedTypes *this,FString *param_1)

{
  code *pcVar1;
  int *piVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FExpressionNode *pFVar6;
  uchar *puVar7;
  longlong *plVar8;
  undefined ***pppuVar9;
  FScriptContainerElement *pFVar10;
  uchar *puVar11;
  undefined1 auStackY_e28 [32];
  int iStack_df4;
  TTokenDefinitions<wchar_t> TStack_df0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined1 auStack_dc8 [8];
  undefined1 auStack_dc0 [24];
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  uint uStack_d98;
  uint uStack_d94;
  uint uStack_d90;
  uint uStack_d8c;
  FGuid FStack_d88;
  uint uStack_d78;
  uint uStack_d74;
  uint uStack_d70;
  uint uStack_d6c;
  uint uStack_d68;
  uint uStack_d64;
  uint uStack_d60;
  uint uStack_d5c;
  FString FStack_d58;
  FString FStack_d48;
  undefined1 *puStack_d38;
  code **ppcStack_d30;
  FGuid *pFStack_d28;
  code **ppcStack_d20;
  FString FStack_d18;
  FHugeType FStack_d08;
  FHugeType FStack_8f8;
  undefined1 auStack_4e8 [64];
  FExpressionNode FStack_4a8;
  code *pcStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  longlong lStack_448;
  longlong *plStack_440;
  code *apcStack_438 [2];
  undefined **appuStack_428 [3];
  undefined ***pppuStack_410;
  code *apcStack_408 [2];
  undefined **appuStack_3f8 [3];
  undefined ***pppuStack_3e0;
  FExpressionNode FStack_3d8;
  TValueOrError<FExpressionNode,FExpressionError> TStack_398;
  TValueOrError<FExpressionNode,FExpressionError> TStack_348;
  TValueOrError<FExpressionNode,FExpressionError> TStack_2f8;
  TOperatorJumpTable<void,wchar_t> TStack_2a8;
  FExpressionGrammar FStack_168;
  ulonglong uStack_28;
  
  piVar2 = FMoveableType::LeakCount;
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_e28;
  FMoveableType::LeakCount = &iStack_df4;
  FStack_d08._padding_._0_4_ = 1;
  FStack_d08._padding_ = (longlong)&___7FHugeType_Tests__6B_;
  FStack_d08._padding_._4_1_ = 1;
  iStack_df4 = 1;
  FExpressionNode::FExpressionNode<Tests::FHugeType>(&FStack_4a8,&FStack_d08);
  puVar11 = (uchar *)0x0;
  auStack_4e8._0_4_ = 0;
  auStack_4e8._4_4_ = 0;
  auStack_4e8._8_4_ = 0;
  auStack_4e8._12_4_ = 0;
  FExpressionNode::operator=((FExpressionNode *)auStack_4e8,&FStack_4a8);
  puVar7 = puVar11;
  if (((auStack_4e8._12_4_ ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
        ::__l2::Global.D &&
       auStack_4e8._8_4_ ==
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
       ::__l2::Global.C) &&
      auStack_4e8._4_4_ ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
      ::__l2::Global.B) &&
      auStack_4e8._0_4_ ==
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar7 = (uchar *)auStack_4e8._24_8_;
  }
  if (*(int *)(puVar7 + 8) == 1) {
    FStack_8f8._padding_._0_4_ = 1;
    FStack_8f8._padding_._4_1_ = 1;
    FStack_8f8._padding_ = (longlong)&___7FHugeType_Tests__6B_;
    *FMoveableType::LeakCount = *FMoveableType::LeakCount + 1;
    pFVar6 = FExpressionNode::FExpressionNode<Tests::FHugeType>(&FStack_3d8,&FStack_8f8);
    FExpressionNode::operator=(&FStack_4a8,pFVar6);
    puVar7 = FStack_3d8.InlineBytes;
    if (((FStack_3d8.TypeId.D == 0 && FStack_3d8.TypeId.C == 0) && FStack_3d8.TypeId.B == 0) &&
        FStack_3d8.TypeId.A == 0) {
      puVar7 = puVar11;
    }
    if (puVar7 != (uchar *)0x0) {
      (*(code *)**(undefined8 **)puVar7)(puVar7,0);
    }
    if ((((FStack_4a8.TypeId.D == auStack_4e8._12_4_ && FStack_4a8.TypeId.C == auStack_4e8._8_4_) &&
         FStack_4a8.TypeId.B == auStack_4e8._4_4_) && FStack_4a8.TypeId.A == auStack_4e8._0_4_) &&
       (((auStack_4e8._4_4_ != 0 || auStack_4e8._0_4_ != 0) || auStack_4e8._12_4_ != 0) ||
        auStack_4e8._8_4_ != 0)) {
      puVar7 = FStack_4a8.InlineBytes;
      if (((FStack_4a8.TypeId.D == 0 && FStack_4a8.TypeId.C == 0) && FStack_4a8.TypeId.B == 0) &&
          FStack_4a8.TypeId.A == 0) {
        puVar7 = puVar11;
      }
      (**(code **)(*(longlong *)puVar7 + 0x10))(puVar7,auStack_4e8 + 0x10);
    }
    else {
      puVar7 = auStack_4e8 + 0x10;
      if ((auStack_4e8._12_4_ == 0 && auStack_4e8._8_4_ == 0) &&
          (auStack_4e8._4_4_ == 0 && auStack_4e8._0_4_ == 0)) {
        puVar7 = puVar11;
      }
      if (puVar7 != (uchar *)0x0) {
        (*(code *)**(undefined8 **)puVar7)(puVar7,0);
      }
      auStack_4e8._0_4_ = FStack_4a8.TypeId.A;
      auStack_4e8._4_4_ = FStack_4a8.TypeId.B;
      auStack_4e8._8_4_ = FStack_4a8.TypeId.C;
      auStack_4e8._12_4_ = FStack_4a8.TypeId.D;
      puVar7 = FStack_4a8.InlineBytes;
      if (((FStack_4a8.TypeId.D == 0 && FStack_4a8.TypeId.C == 0) && FStack_4a8.TypeId.B == 0) &&
          FStack_4a8.TypeId.A == 0) {
        puVar7 = puVar11;
      }
      if (puVar7 != (uchar *)0x0) {
        (**(code **)(*(longlong *)puVar7 + 8))(puVar7,auStack_4e8 + 0x10);
        uStack_dd8 = 0;
        uStack_dd0 = 0;
        FStack_4a8.TypeId.A = 0;
        FStack_4a8.TypeId.B = 0;
        FStack_4a8.TypeId.C = 0;
        FStack_4a8.TypeId.D = 0;
        (*(code *)**(undefined8 **)puVar7)(puVar7,0);
      }
    }
    puVar7 = puVar11;
    if (((auStack_4e8._12_4_ ==
          `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
          ::__l2::Global.D &&
         auStack_4e8._8_4_ ==
         `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
         ::__l2::Global.C) &&
        auStack_4e8._4_4_ ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
        ::__l2::Global.B) &&
        auStack_4e8._0_4_ ==
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
        ::__l2::Global.A) {
      puVar7 = (uchar *)auStack_4e8._24_8_;
    }
    if (*(int *)(puVar7 + 8) == 1) {
      TStack_df0.bIgnoreWhitespace = false;
      TStack_df0.Definitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_df0.Definitions.ArrayNum = 0;
      TStack_df0.Definitions.ArrayMax = 0;
      FExpressionGrammar::FExpressionGrammar(&FStack_168);
      TOperatorJumpTable<void,wchar_t>::TOperatorJumpTable<void,wchar_t>(&TStack_2a8);
      plStack_440 = (longlong *)0x0;
      uStack_458 = &
                   ___7__TFunction_OwnedObject_P6A_AU__TOptional_UFExpressionError____AEAV__TExpressionTokenConsumer__W___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      pcStack_468 = UE::Core::Private::Function::
                    TFunctionRefCaller<TOptional<FExpressionError>_(__cdecl*)(TExpressionTokenConsumer<wchar_t>_&),TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                    ::Call;
      uStack_450 = `Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_1>::<lambda_invoker_cdecl>
      ;
      iVar5 = TStack_df0.Definitions.ArrayNum;
      if (TStack_df0.Definitions.ArrayNum == TStack_df0.Definitions.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1030,&TStack_df0.Definitions.AllocatorInstance,
                           &TStack_df0.Definitions.ArrayMax);
      }
      TStack_df0.Definitions.ArrayNum = iVar5 + 1;
      pFVar10 = TStack_df0.Definitions.AllocatorInstance.Data + (longlong)iVar5 * 0x30;
      *(code **)pFVar10 = pcStack_468;
      *(longlong **)(pFVar10 + 0x28) = plStack_440;
      *(undefined4 *)(pFVar10 + 0x10) = (undefined4)uStack_458;
      *(undefined4 *)(pFVar10 + 0x14) = uStack_458._4_4_;
      *(undefined4 *)(pFVar10 + 0x18) = (undefined4)uStack_450;
      *(undefined4 *)(pFVar10 + 0x1c) = uStack_450._4_4_;
      *(longlong *)(pFVar10 + 0x20) = lStack_448;
      if (*(longlong *)pFVar10 == 0) {
        if (pcStack_468 != (code *)0x0) {
          plVar8 = &uStack_458;
          if (plStack_440 != (longlong *)0x0) {
            plVar8 = plStack_440;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      else {
        pcStack_468 = (code *)0x0;
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (&FStack_168.PreUnaryOperators,(FGuid *)auStack_dc8,
                 (bool *)&`public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
                          ::__l2::Global);
      FExpressionGrammar::DefineBinaryOperator<Tests::FOperator>(&FStack_168,1,RightToLeft,false);
      uStack_d98 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                   ::__l2::Global.A;
      uStack_d94 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                   ::__l2::Global.B;
      uStack_d90 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                   ::__l2::Global.C;
      uStack_d8c = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                   ::__l2::Global.D;
      appuStack_428[0] =
           &
           ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapUnaryFunction_UFHugeType_Tests__XV<lambda_2>__2____TestWithType_UFHugeType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__PEBX_Z__V<lambda_2>__2____TestWithType_UFHugeType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      apcStack_438[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`Impl::WrapUnaryFunction<Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,void_const_*>
           ::Call;
      puStack_d38 = auStack_dc0 + 8;
      ppcStack_d30 = apcStack_438;
      auStack_dc0._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
           ::__l2::Global.A;
      auStack_dc0._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
           ::__l2::Global.B;
      auStack_dc0._16_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
           ::__l2::Global.C;
      auStack_dc0._20_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
           ::__l2::Global.D;
      uStack_da8 = 0;
      uStack_da0 = 0;
      pppuStack_410 = (undefined ***)0x0;
      TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>_>
                ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
                  *)&TStack_2a8,
                 (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>_&&>
                  *)(auStack_dc8 + 4),(bool *)&puStack_d38);
      if (apcStack_438[0] != (code *)0x0) {
        pppuVar9 = appuStack_428;
        if (pppuStack_410 != (undefined ***)0x0) {
          pppuVar9 = pppuStack_410;
        }
        (*(code *)(*pppuVar9)[2])();
      }
      uStack_d6c = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                   ::__l2::Global.D;
      uStack_d5c = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                   ::__l2::Global.D;
      appuStack_3f8[0] =
           &
           ___7__TFunction_OwnedObject_V<lambda_1>__2____WrapBinaryFunction_UFHugeType_Tests__U12_XV<lambda_3>__2____TestWithType_UFHugeType_Tests___2_YA_NPEAVFAutomationTestBase___Z__Impl__YA_AV__TFunction___A6A_AV__TValueOrError_VFExpressionNode__UFExpressionError____AEBVFExpressionNode__0PEBX_Z__V<lambda_3>__2____TestWithType_UFHugeType_Tests___Tests__YA_NPEAVFAutomationTestBase___Z__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      apcStack_408[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`Impl::WrapBinaryFunction<Tests::FHugeType,Tests::FHugeType,void,`Tests::TestWithType<Tests::FHugeType>'::__l3::<lambda_3>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
           ::Call;
      pFStack_d28 = &FStack_d88;
      ppcStack_d20 = apcStack_408;
      uStack_d78 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                   ::__l2::Global.A;
      uStack_d74 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                   ::__l2::Global.B;
      uStack_d70 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                   ::__l2::Global.C;
      uStack_d68 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                   ::__l2::Global.A;
      uStack_d64 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                   ::__l2::Global.B;
      uStack_d60 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FHugeType>::GetTypeId(void)'
                   ::__l2::Global.C;
      FStack_d88 = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<Tests::FOperator>::GetTypeId(void)'
                   ::__l2::Global;
      pppuStack_3e0 = (undefined ***)0x0;
      TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>_>
                ((TSet<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_>,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>,0>,FDefaultSetAllocator>
                  *)&TStack_2a8.BinaryOps,
                 (TPairInitializer<FOperatorFunctionID_const_&,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>_&&>
                  *)auStack_dc0,(bool *)&pFStack_d28);
      if (apcStack_408[0] != (code *)0x0) {
        pppuVar9 = appuStack_3f8;
        if (pppuStack_3e0 != (undefined ***)0x0) {
          pppuVar9 = pppuStack_3e0;
        }
        (*(code *)(*pppuVar9)[2])();
      }
      ExpressionParser::Evaluate<wchar_t,void>
                (&TStack_398,L"+a",&TStack_df0,&FStack_168,&TStack_2a8,(void *)0x0);
      if ((2 < TStack_398.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[TStack_398.Variant.TypeIndex])(&TStack_398);
      ExpressionParser::Evaluate<wchar_t,void>
                (&TStack_348,L"a+a",&TStack_df0,&FStack_168,&TStack_2a8,(void *)0x0);
      if ((2 < TStack_348.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[TStack_348.Variant.TypeIndex])(&TStack_348);
      ExpressionParser::Evaluate<wchar_t,void>
                (&TStack_2f8,L"+a++a",&TStack_df0,&FStack_168,&TStack_2a8,(void *)0x0);
      if ((2 < TStack_2f8.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<class_FExpressionNode,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[TStack_2f8.Variant.TypeIndex])(&TStack_2f8);
      TOperatorJumpTable<void,wchar_t>::~TOperatorJumpTable<void,wchar_t>(&TStack_2a8);
      FExpressionGrammar::~FExpressionGrammar(&FStack_168);
      DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
                ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                  *)TStack_df0.Definitions.AllocatorInstance.Data,TStack_df0.Definitions.ArrayNum);
      if ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
          TStack_df0.Definitions.AllocatorInstance.Data !=
          (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)0x0
         ) {
        FMemory::Free(TStack_df0.Definitions.AllocatorInstance.Data);
      }
      puVar7 = auStack_4e8 + 0x10;
      if (((auStack_4e8._12_4_ == 0 && auStack_4e8._8_4_ == 0) && auStack_4e8._4_4_ == 0) &&
          auStack_4e8._0_4_ == 0) {
        puVar7 = puVar11;
      }
      if (puVar7 != (uchar *)0x0) {
        (*(code *)**(undefined8 **)puVar7)(puVar7,0);
      }
      puVar7 = FStack_4a8.InlineBytes;
      if (((FStack_4a8.TypeId.D == 0 && FStack_4a8.TypeId.C == 0) && FStack_4a8.TypeId.B == 0) &&
          FStack_4a8.TypeId.A == 0) {
        puVar7 = puVar11;
      }
      if (puVar7 != (uchar *)0x0) {
        (*(code *)**(undefined8 **)puVar7)(puVar7,0);
      }
      if (iStack_df4 != 0) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        FMoveableType::LeakCount = piVar2;
        ::FString::PrintfImpl
                  (&FStack_d18,
                   L"Expression node did not call wrapped type\'s destructors correctly. Potentially resulted in %d leaks."
                  );
        (*pcVar1)(this,&FStack_d18,0);
        if (FStack_d18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_d18.Data.AllocatorInstance.Data);
        }
        return false;
      }
      FMoveableType::LeakCount = piVar2;
      return true;
    }
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              (&FStack_d48,
               L"Expression node move operator did not operate correctly. Expected moved-to state to be 1, it\'s actually %d."
              );
    (*pcVar1)(this,&FStack_d48,0);
    FStack_d58.Data.AllocatorInstance.Data = FStack_d48.Data.AllocatorInstance.Data;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              (&FStack_d58,
               L"Expression node move operator did not operate correctly. Expected moved-to state to be 1, it\'s actually %d."
              );
    (*pcVar1)(this,&FStack_d58,0);
  }
  if (FStack_d58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d58.Data.AllocatorInstance.Data);
  }
  puVar7 = auStack_4e8 + 0x10;
  if (((auStack_4e8._12_4_ == 0 && auStack_4e8._8_4_ == 0) && auStack_4e8._4_4_ == 0) &&
      auStack_4e8._0_4_ == 0) {
    puVar7 = puVar11;
  }
  if (puVar7 != (uchar *)0x0) {
    (*(code *)**(undefined8 **)puVar7)(puVar7,0);
  }
  puVar7 = FStack_4a8.InlineBytes;
  if (((FStack_4a8.TypeId.D == 0 && FStack_4a8.TypeId.C == 0) && FStack_4a8.TypeId.B == 0) &&
      FStack_4a8.TypeId.A == 0) {
    puVar7 = puVar11;
  }
  if (puVar7 != (uchar *)0x0) {
    (*(code *)**(undefined8 **)puVar7)(puVar7,0);
  }
  FMoveableType::LeakCount = piVar2;
  return false;
}

// GetBeautifiedTestName @ 1418a86e0

FString * __thiscall
Tests::FExpressionParserAllocatedTypes::GetBeautifiedTestName
          (FExpressionParserAllocatedTypes *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Expression Parser.Allocated Types");
  return __return_storage_ptr__;
}

