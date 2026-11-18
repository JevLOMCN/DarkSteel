// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 8

// GetTestFlags @ 14603b700

EAutomationTestFlags __thiscall
UE::TimeManagement::FLinearRegressionSpec::GetTestFlags(FLinearRegressionSpec *this)

{
  return EngineFilter|EditorContext;
}

// GetTestSourceFileName @ 14603b710

FString * __thiscall
UE::TimeManagement::FLinearRegressionSpec::GetTestSourceFileName
          (FLinearRegressionSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Tests\\LinearRegressionTests.spec.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14603b740

int __thiscall
UE::TimeManagement::FLinearRegressionSpec::GetTestSourceFileLine(FLinearRegressionSpec *this)

{
  return 0xb;
}

// GetBeautifiedTestName @ 14603b750

FString * __thiscall
UE::TimeManagement::FLinearRegressionSpec::GetBeautifiedTestName
          (FLinearRegressionSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Time.LinearRegression");
  return __return_storage_ptr__;
}

// Define @ 14603b780

void __thiscall UE::TimeManagement::FLinearRegressionSpec::Define(FLinearRegressionSpec *this)

{
  FString local_78;
  undefined1 local_68 [16];
  undefined **local_58;
  FLinearRegressionSpec *local_50;
  undefined8 local_40;
  code *local_38 [2];
  undefined **local_28;
  FLinearRegressionSpec *local_20;
  undefined8 local_10;
  
  local_40 = 0;
  local_58 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::TimeManagement::FLinearRegressionSpec::Define'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_68._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::TimeManagement::FLinearRegressionSpec::Define'::__l2::<lambda_1>,void>
       ::Call;
  local_50 = this;
  FAutomationSpecBase::BeforeEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_68);
  local_10 = 0;
  local_28 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::TimeManagement::FLinearRegressionSpec::Define'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::TimeManagement::FLinearRegressionSpec::Define'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = this;
  ::FString::FString(&local_78,"Simple regression");
  local_68._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Tests\\LinearRegressionTests.spec.cpp"
  ;
  local_58 = (undefined **)0x1511d7030;
  local_68._0_8_ = 0x200000016;
  FAutomationSpecBase::It
            ((FAutomationSpecBase *)this,&local_78,(TFunction<void___cdecl(void)> *)local_38,
             (FSourceLocation *)local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_10 = 0;
  local_28 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::TimeManagement::FLinearRegressionSpec::Define'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::TimeManagement::FLinearRegressionSpec::Define'::__l2::<lambda_3>,void>
                ::Call;
  local_20 = this;
  ::FString::FString(&local_78,"Full buffer");
  local_68._0_8_ = 0x200000028;
  local_68._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Tests\\LinearRegressionTests.spec.cpp"
  ;
  local_58 = (undefined **)0x1511d7030;
  FAutomationSpecBase::It
            ((FAutomationSpecBase *)this,&local_78,(TFunction<void___cdecl(void)> *)local_38,
             (FSourceLocation *)local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1460407f0

void __thiscall
`UE::TimeManagement::FLinearRegressionSpec::Define'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType local_28;
  int local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  local_18 = 0;
  local_10 = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,5,&local_28,local_20,local_20 + 1);
  lVar1 = *(longlong *)this;
  pFVar2 = (ForAnyElementType *)(lVar1 + 0x198);
  if (pFVar2 != &local_28) {
    if (pFVar2->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2->Data);
    }
    pFVar2->Data = local_28.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar1 + 0x1a0) = local_20[0];
    *(int *)(lVar1 + 0x1a4) = local_20[1];
    local_20[0] = 0;
    local_20[1] = 0;
  }
  *(undefined1 *)(lVar1 + 0x1a8) = local_18;
  *(undefined8 *)(lVar1 + 0x1b0) = local_10;
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// operator() @ 1460408c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::TimeManagement::FLinearRegressionSpec::Define'::__l2::<lambda_2>::operator()(void *this)

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
  TVector2<double>_u_0 local_a0;
  TVector2<double>_u_0 local_90;
  TVector2<double>_u_0 local_80 [3];
  ulonglong local_50;
  
  local_a0._s_0.X = ___xmm_3ff00000000000003fd0000000000000;
  local_a0._s_0.Y = _UNK_1511da168;
  UE::TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
  ::Add((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
        (*(longlong *)this + 0x198),(TVector2<double> *)&local_a0._s_0);
  local_90._s_0.X = ___xmm_40000000000000003fe0000000000000;
  local_90._s_0.Y = _UNK_1511da178;
  UE::TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
  ::Add((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
        (*(longlong *)this + 0x198),(TVector2<double> *)&local_90._s_0);
  local_80[0]._s_0.X = ___xmm_40100000000000003ff0000000000000;
  local_80[0]._s_0.Y = _UNK_15076bb68;
  UE::TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
  ::Add((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
        (*(longlong *)this + 0x198),(TVector2<double> *)&local_80[0]._s_0);
  lVar4 = *(longlong *)this;
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
  if ((iVar11 != 0) && (pdVar9 = pdVar10 + uVar8 * 2, local_50 = uVar8, pdVar10 != pdVar9)) {
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
            (*(FAutomationTestBase **)this,L"(-0.25, -1)",dVar2 - dVar12 * __real_3fd0000000000000,
             __real_bff0000000000000,__real_3f1a36e2e0000000);
  FAutomationTestBase::TestEqual(*(FAutomationTestBase **)this,L"(0, 0)",dVar2,0.0,dVar6);
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)this,L"(0.75, 3)",dVar12 * __real_3fe8000000000000 + dVar2,
             __real_4008000000000000,dVar6);
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)this,L"(1.25, 5)",dVar12 * __real_3ff4000000000000 + dVar2,
             __real_4014000000000000,dVar6);
  return;
}

// operator() @ 146040bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::TimeManagement::FLinearRegressionSpec::Define'::__l2::<lambda_3>::operator()(void *this)

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
  TVector2<double>_u_0 local_c0;
  TVector2<double>_u_0 local_b0;
  TVector2<double>_u_0 local_a0;
  TVector2<double>_u_0 local_90;
  TVector2<double>_u_0 local_80;
  TVector2<double>_u_0 local_70 [3];
  ulonglong local_40;
  
  local_c0._s_0.X = 0.0;
  local_c0._s_0.Y = 0.0;
  UE::TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
  ::Add((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
        (*(longlong *)this + 0x198),(TVector2<double> *)&local_c0._s_0);
  local_b0._s_0.X = ___xmm_40340000000000003ff0000000000000;
  local_b0._s_0.Y = _UNK_1511da188;
  UE::TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
  ::Add((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
        (*(longlong *)this + 0x198),(TVector2<double> *)&local_b0._s_0);
  local_a0._s_0.X = ___xmm_403e0000000000004000000000000000;
  local_a0._s_0.Y = _UNK_1511da198;
  UE::TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
  ::Add((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
        (*(longlong *)this + 0x198),(TVector2<double> *)&local_a0._s_0);
  local_90._s_0.X = ___xmm_40440000000000004008000000000000;
  local_90._s_0.Y = _UNK_1511da1a8;
  UE::TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
  ::Add((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
        (*(longlong *)this + 0x198),(TVector2<double> *)&local_90._s_0);
  local_80._s_0.X = ___xmm_40490000000000004010000000000000;
  local_80._s_0.Y = _UNK_1511da1b8;
  UE::TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
  ::Add((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
        (*(longlong *)this + 0x198),(TVector2<double> *)&local_80._s_0);
  local_70[0]._s_0.X = ___xmm_404e0000000000004014000000000000;
  local_70[0]._s_0.Y = _UNK_1511da1c8;
  UE::TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
  ::Add((TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
        (*(longlong *)this + 0x198),(TVector2<double> *)&local_70[0]._s_0);
  lVar4 = *(longlong *)this;
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
  if ((iVar11 != 0) && (pdVar9 = pdVar10 + uVar8 * 2, local_40 = uVar8, pdVar10 != pdVar9)) {
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
            (*(FAutomationTestBase **)this,L"(-1, 0)",dVar2 - dVar12,0.0,__real_3f1a36e2e0000000);
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)this,L"(0, 10)",dVar2,__real_4024000000000000,dVar6);
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)this,L"(0.5, 15)",dVar12 * __real_3fe0000000000000 + dVar2,
             __real_402e000000000000,dVar6);
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)this,L"(6, 70)",dVar12 * __real_4018000000000000 + dVar2,
             __real_4051800000000000,dVar6);
  return;
}

