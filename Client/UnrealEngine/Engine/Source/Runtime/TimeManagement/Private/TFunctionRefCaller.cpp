// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 5

// Call @ 146043be0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::TimeManagement::FLinearRegressionSpec::Define'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType FStack_28;
  int aiStack_20 [2];
  undefined1 uStack_18;
  undefined8 uStack_10;
  
  FStack_28.Data = (FScriptContainerElement *)0x0;
  aiStack_20[0] = 0;
  aiStack_20[1] = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,5,&FStack_28,aiStack_20,aiStack_20 + 1);
  lVar1 = *(longlong *)param_1;
  pFVar2 = (ForAnyElementType *)(lVar1 + 0x198);
  if (pFVar2 != &FStack_28) {
    if (pFVar2->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2->Data);
    }
    pFVar2->Data = FStack_28.Data;
    FStack_28.Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar1 + 0x1a0) = aiStack_20[0];
    *(int *)(lVar1 + 0x1a4) = aiStack_20[1];
    aiStack_20[0] = 0;
    aiStack_20[1] = 0;
  }
  *(undefined1 *)(lVar1 + 0x1a8) = uStack_18;
  *(undefined8 *)(lVar1 + 0x1b0) = uStack_10;
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  return;
}

// Call @ 146043bf0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FFrameNumberTimeEvaluator::FFrameNumberTimeEvaluator'::__l2::<lambda_1>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,void **param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  uchar *puVar4;
  
  puVar4 = param_2->InlineBytes + 8;
  auVar3._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar3._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar3._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar3._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.D;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  dVar1 = *(double *)puVar4;
  puVar4 = param_3->InlineBytes + 8;
  if ((((param_3->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_3->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_3->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_3->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  dVar2 = *(double *)puVar4;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar3;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage_N_Impl__6B_;
  *(double *)&(__return_storage_ptr__->Variant).field_0x18 = dVar1 + dVar2;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// Call @ 146043cb0

TValueOrError<FExpressionNode,FExpressionError> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Impl::WrapBinaryFunction<double,double,void,`FFrameNumberTimeEvaluator::FFrameNumberTimeEvaluator'::__l2::<lambda_2>_>'::__l3::<lambda_1>,TValueOrError<FExpressionNode,FExpressionError>,FExpressionNode_const_&,FExpressionNode_const_&,void_const_*>
::Call(TValueOrError<FExpressionNode,FExpressionError> *__return_storage_ptr__,void *param_1,
      FExpressionNode *param_2,FExpressionNode *param_3,void **param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  uchar *puVar4;
  
  puVar4 = param_2->InlineBytes + 8;
  auVar3._4_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.B;
  auVar3._0_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.A;
  auVar3._8_4_ = `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
                 ::__l2::Global.C;
  auVar3._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.D;
  if ((((param_2->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_2->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_2->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_2->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  dVar1 = *(double *)puVar4;
  puVar4 = param_3->InlineBytes + 8;
  if ((((param_3->TypeId).D !=
        `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
        ::__l2::Global.D ||
       (param_3->TypeId).C !=
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
       ::__l2::Global.C) ||
      (param_3->TypeId).B !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.B) ||
      (param_3->TypeId).A !=
      `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<double>::GetTypeId(void)'
      ::__l2::Global.A) {
    puVar4 = (uchar *)0x0;
  }
  dVar2 = *(double *)puVar4;
  *(undefined1 (*) [16])&__return_storage_ptr__->Variant = auVar3;
  *(undefined ***)&(__return_storage_ptr__->Variant).field_0x10 =
       &___7__FInlineDataStorage_N_Impl__6B_;
  *(double *)&(__return_storage_ptr__->Variant).field_0x18 = dVar1 * dVar2;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// Call @ 146043d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::TimeManagement::FLinearRegressionSpec::Define'::__l2::<lambda_2>,void>::Call
          (void *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  ulonglong uVar8;
  double *pdVar9;
  double *pdVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TVector2<double>_u_0 TStack_a0;
  TVector2<double>_u_0 TStack_90;
  TVector2<double>_u_0 aTStack_80 [3];
  ulonglong uStack_50;
  
  TStack_a0._s_0.X = ___xmm_3ff00000000000003fd0000000000000;
  TStack_a0._s_0.Y = _UNK_1511da168;
  TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Add
            ((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0x198),(TVector2<double> *)&TStack_a0._s_0);
  TStack_90._s_0.X = ___xmm_40000000000000003fe0000000000000;
  TStack_90._s_0.Y = _UNK_1511da178;
  TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Add
            ((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0x198),(TVector2<double> *)&TStack_90._s_0);
  aTStack_80[0]._s_0.X = ___xmm_40100000000000003ff0000000000000;
  aTStack_80[0]._s_0.Y = _UNK_15076bb68;
  TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Add
            ((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0x198),(TVector2<double> *)&aTStack_80[0]._s_0);
  lVar4 = *(longlong *)param_1;
  pdVar10 = *(double **)(lVar4 + 0x198);
  if (*(char *)(lVar4 + 0x1a8) == '\0') {
    iVar11 = *(int *)(lVar4 + 0x1b0);
  }
  else {
    iVar11 = *(int *)(lVar4 + 0x1a0);
  }
  if ((iVar11 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar6 = __real_3f1a36e2e0000000;
  uVar8 = (ulonglong)iVar11;
  dVar13 = 0.0;
  dVar12 = 0.0;
  dVar14 = 0.0;
  dVar2 = 0.0;
  if ((iVar11 != 0) && (pdVar9 = pdVar10 + uVar8 * 2, uStack_50 = uVar8, pdVar10 != pdVar9)) {
    dVar12 = 0.0;
    dVar2 = 0.0;
    dVar14 = 0.0;
    dVar13 = 0.0;
    do {
      dVar3 = *pdVar10;
      pdVar1 = pdVar10 + 1;
      dVar13 = dVar3 + dVar13;
      dVar14 = *pdVar1 + dVar14;
      pdVar10 = pdVar10 + 2;
      dVar2 = *pdVar1 * dVar3 + dVar2;
      dVar12 = dVar3 * dVar3 + dVar12;
    } while (pdVar10 != pdVar9);
  }
  if (uVar8 == 0) {
    dVar12 = 0.0;
  }
  else {
    dVar12 = dVar12 - (dVar13 * dVar13) / (double)uVar8;
  }
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar3 = __real_3ff0000000000000 / (double)uVar8;
    dVar12 = (dVar2 - dVar13 * dVar14 * dVar3) / dVar12;
    dVar2 = dVar3 * dVar14 - dVar3 * dVar13 * dVar12;
  }
  else {
    dVar12 = 0.0;
    dVar2 = 0.0;
  }
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)param_1,L"(-0.25, -1)",
             dVar2 - dVar12 * __real_3fd0000000000000,__real_bff0000000000000,
             __real_3f1a36e2e0000000);
  FAutomationTestBase::TestEqual(*(FAutomationTestBase **)param_1,L"(0, 0)",dVar2,0.0,dVar6);
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)param_1,L"(0.75, 3)",dVar12 * __real_3fe8000000000000 + dVar2,
             __real_4008000000000000,dVar6);
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)param_1,L"(1.25, 5)",dVar12 * __real_3ff4000000000000 + dVar2,
             __real_4014000000000000,dVar6);
  return;
}

// Call @ 146043d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::TimeManagement::FLinearRegressionSpec::Define'::__l2::<lambda_3>,void>::Call
          (void *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  ulonglong uVar8;
  double *pdVar9;
  double *pdVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TVector2<double>_u_0 TStack_c0;
  TVector2<double>_u_0 TStack_b0;
  TVector2<double>_u_0 TStack_a0;
  TVector2<double>_u_0 TStack_90;
  TVector2<double>_u_0 TStack_80;
  TVector2<double>_u_0 aTStack_70 [3];
  ulonglong uStack_40;
  
  TStack_c0._s_0.X = 0.0;
  TStack_c0._s_0.Y = 0.0;
  TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Add
            ((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0x198),(TVector2<double> *)&TStack_c0._s_0);
  TStack_b0._s_0.X = ___xmm_40340000000000003ff0000000000000;
  TStack_b0._s_0.Y = _UNK_1511da188;
  TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Add
            ((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0x198),(TVector2<double> *)&TStack_b0._s_0);
  TStack_a0._s_0.X = ___xmm_403e0000000000004000000000000000;
  TStack_a0._s_0.Y = _UNK_1511da198;
  TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Add
            ((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0x198),(TVector2<double> *)&TStack_a0._s_0);
  TStack_90._s_0.X = ___xmm_40440000000000004008000000000000;
  TStack_90._s_0.Y = _UNK_1511da1a8;
  TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Add
            ((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0x198),(TVector2<double> *)&TStack_90._s_0);
  TStack_80._s_0.X = ___xmm_40490000000000004010000000000000;
  TStack_80._s_0.Y = _UNK_1511da1b8;
  TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Add
            ((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0x198),(TVector2<double> *)&TStack_80._s_0);
  aTStack_70[0]._s_0.X = ___xmm_404e0000000000004014000000000000;
  aTStack_70[0]._s_0.Y = _UNK_1511da1c8;
  TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Add
            ((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0x198),(TVector2<double> *)&aTStack_70[0]._s_0);
  lVar4 = *(longlong *)param_1;
  pdVar10 = *(double **)(lVar4 + 0x198);
  if (*(char *)(lVar4 + 0x1a8) == '\0') {
    iVar11 = *(int *)(lVar4 + 0x1b0);
  }
  else {
    iVar11 = *(int *)(lVar4 + 0x1a0);
  }
  if ((iVar11 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar6 = __real_3f1a36e2e0000000;
  uVar8 = (ulonglong)iVar11;
  dVar13 = 0.0;
  dVar12 = 0.0;
  dVar14 = 0.0;
  dVar2 = 0.0;
  if ((iVar11 != 0) && (pdVar9 = pdVar10 + uVar8 * 2, uStack_40 = uVar8, pdVar10 != pdVar9)) {
    dVar12 = 0.0;
    dVar2 = 0.0;
    dVar14 = 0.0;
    dVar13 = 0.0;
    do {
      dVar3 = *pdVar10;
      pdVar1 = pdVar10 + 1;
      dVar13 = dVar3 + dVar13;
      dVar14 = *pdVar1 + dVar14;
      pdVar10 = pdVar10 + 2;
      dVar2 = *pdVar1 * dVar3 + dVar2;
      dVar12 = dVar3 * dVar3 + dVar12;
    } while (pdVar10 != pdVar9);
  }
  if (uVar8 == 0) {
    dVar12 = 0.0;
  }
  else {
    dVar12 = dVar12 - (dVar13 * dVar13) / (double)uVar8;
  }
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar3 = __real_3ff0000000000000 / (double)uVar8;
    dVar12 = (dVar2 - dVar14 * dVar13 * dVar3) / dVar12;
    dVar2 = dVar3 * dVar14 - dVar3 * dVar13 * dVar12;
  }
  else {
    dVar12 = 0.0;
    dVar2 = 0.0;
  }
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)param_1,L"(-1, 0)",dVar2 - dVar12,0.0,__real_3f1a36e2e0000000)
  ;
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)param_1,L"(0, 10)",dVar2,__real_4024000000000000,dVar6);
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)param_1,L"(0.5, 15)",dVar12 * __real_3fe0000000000000 + dVar2,
             __real_402e000000000000,dVar6);
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)param_1,L"(6, 70)",dVar12 * __real_4018000000000000 + dVar2,
             __real_4051800000000000,dVar6);
  return;
}

