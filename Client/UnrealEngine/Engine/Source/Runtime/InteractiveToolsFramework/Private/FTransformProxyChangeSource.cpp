// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 7

// ~FTransformProxyChangeSource @ 149689300

void __thiscall
FTransformProxyChangeSource::~FTransformProxyChangeSource(FTransformProxyChangeSource *this)

{
  FTransformProxyChange *pFVar1;
  
  this->_padding_ = (longlong)&___7FTransformProxyChangeSource__6B_;
  pFVar1 = (this->ActiveChange).Ptr;
  if (pFVar1 != (FTransformProxyChange *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x48))(pFVar1,1);
  }
  this->_padding_ = (longlong)&___7IToolCommandChangeSource__6B_;
  return;
}

// BeginChange @ 149692710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTransformProxyChangeSource::BeginChange(FTransformProxyChangeSource *this)

{
  TUniquePtr<FTransformProxyChange,TDefaultDelete<FTransformProxyChange>_> *pTVar1;
  FTransformProxyChange *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  bool bVar33;
  FTransformProxyChange *pFVar34;
  longlong lVar35;
  UObject *pUVar36;
  double *pdVar37;
  undefined1 uVar38;
  code *pcVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  longlong local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar33 = FWeakObjectPtr::IsValid(&(this->Proxy).WeakPtr);
  if (!bVar33) {
    return;
  }
  pTVar1 = &this->ActiveChange;
  if ((this->ActiveChange).Ptr != (FTransformProxyChange *)0x0) {
    `FTransformProxyChangeSource::BeginChange'::__l5::<lambda_1>::operator()(local_98);
  }
  pFVar34 = ::operator_new(0xe0);
  if (pFVar34 == (FTransformProxyChange *)0x0) {
    pFVar34 = (FTransformProxyChange *)0x0;
  }
  else {
    *(undefined8 *)&pFVar34->field_0x8 = 0;
    *(undefined8 *)&pFVar34->field_0xd1 = 0;
    *(undefined4 *)&pFVar34->field_0xd9 = 0;
    *(undefined2 *)&pFVar34->field_0xdd = 0;
    pFVar34->field_0xdf = 0;
    *(undefined ***)pFVar34 = &___7FTransformProxyChange__6B_;
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
    uVar50 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    uVar51 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar20._8_4_ = uVar50;
    auVar20._0_8_ = (double)fVar3;
    auVar20._12_4_ = uVar51;
    *(undefined1 (*) [16])(pFVar34->From).Rotation.XY.m128d_f64 = auVar20;
    uVar48 = SUB84((double)fVar4,0);
    uVar49 = (undefined4)((ulonglong)(double)fVar4 >> 0x20);
    auVar18._8_4_ = uVar48;
    auVar18._0_8_ = (double)fVar6;
    auVar18._12_4_ = uVar49;
    *(undefined1 (*) [16])(pFVar34->From).Rotation.ZW.m128d_f64 = auVar18;
    fVar4 = GlobalVectorConstants::FloatZero.m128_f32[0];
    fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
    uVar46 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    uVar47 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    auVar16._8_4_ = uVar46;
    auVar16._0_8_ = (double)fVar4;
    auVar16._12_4_ = uVar47;
    *(undefined1 (*) [16])(pFVar34->From).Translation.XY.m128d_f64 = auVar16;
    uVar44 = SUB84((double)fVar5,0);
    uVar45 = (undefined4)((ulonglong)(double)fVar5 >> 0x20);
    auVar14._8_4_ = uVar44;
    auVar14._0_8_ = (double)fVar7;
    auVar14._12_4_ = uVar45;
    *(undefined1 (*) [16])(pFVar34->From).Translation.ZW.m128d_f64 = auVar14;
    fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar9 = GlobalVectorConstants::Float1110.m128_f32[3];
    uVar42 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    uVar43 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    auVar12._8_4_ = uVar42;
    auVar12._0_8_ = (double)fVar5;
    auVar12._12_4_ = uVar43;
    *(undefined1 (*) [16])(pFVar34->From).Scale3D.XY.m128d_f64 = auVar12;
    uVar40 = SUB84((double)fVar9,0);
    uVar41 = (undefined4)((ulonglong)(double)fVar9 >> 0x20);
    auVar10._8_4_ = uVar40;
    auVar10._0_8_ = (double)fVar8;
    auVar10._12_4_ = uVar41;
    *(undefined1 (*) [16])(pFVar34->From).Scale3D.ZW.m128d_f64 = auVar10;
    auVar21._8_4_ = uVar50;
    auVar21._0_8_ = (double)fVar3;
    auVar21._12_4_ = uVar51;
    *(undefined1 (*) [16])(pFVar34->To).Rotation.XY.m128d_f64 = auVar21;
    auVar19._8_4_ = uVar48;
    auVar19._0_8_ = (double)fVar6;
    auVar19._12_4_ = uVar49;
    *(undefined1 (*) [16])(pFVar34->To).Rotation.ZW.m128d_f64 = auVar19;
    auVar17._8_4_ = uVar46;
    auVar17._0_8_ = (double)fVar4;
    auVar17._12_4_ = uVar47;
    *(undefined1 (*) [16])(pFVar34->To).Translation.XY.m128d_f64 = auVar17;
    auVar15._8_4_ = uVar44;
    auVar15._0_8_ = (double)fVar7;
    auVar15._12_4_ = uVar45;
    *(undefined1 (*) [16])(pFVar34->To).Translation.ZW.m128d_f64 = auVar15;
    auVar13._8_4_ = uVar42;
    auVar13._0_8_ = (double)fVar5;
    auVar13._12_4_ = uVar43;
    *(undefined1 (*) [16])(pFVar34->To).Scale3D.XY.m128d_f64 = auVar13;
    auVar11._8_4_ = uVar40;
    auVar11._0_8_ = (double)fVar8;
    auVar11._12_4_ = uVar41;
    *(undefined1 (*) [16])(pFVar34->To).Scale3D.ZW.m128d_f64 = auVar11;
    pFVar34->bSetPivotMode = false;
  }
  if (pTVar1 == (TUniquePtr<FTransformProxyChange,TDefaultDelete<FTransformProxyChange>_> *)
                &local_90) {
    if (pFVar34 == (FTransformProxyChange *)0x0) goto LAB_149692857;
    lVar35 = *(longlong *)pFVar34;
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar34;
    if (pFVar2 == (FTransformProxyChange *)0x0) goto LAB_149692857;
    lVar35 = *(longlong *)pFVar2;
    pFVar34 = pFVar2;
  }
  (**(code **)(lVar35 + 0x48))(pFVar34,1);
LAB_149692857:
  pUVar36 = FWeakObjectPtr::Get(&(this->Proxy).WeakPtr);
  pdVar37 = (double *)(**(code **)(*(longlong *)pUVar36 + 0x2c0))(pUVar36,local_88);
  dVar22 = pdVar37[1];
  dVar23 = pdVar37[2];
  dVar24 = pdVar37[3];
  dVar25 = pdVar37[4];
  dVar26 = pdVar37[5];
  dVar27 = pdVar37[6];
  dVar28 = pdVar37[7];
  dVar29 = pdVar37[8];
  dVar30 = pdVar37[9];
  dVar31 = pdVar37[10];
  dVar32 = pdVar37[0xb];
  pFVar34 = pTVar1->Ptr;
  (pFVar34->From).Rotation.XY.m128d_f64[0] = *pdVar37;
  (pFVar34->From).Rotation.XY.m128d_f64[1] = dVar22;
  (pFVar34->From).Rotation.ZW.m128d_f64[0] = dVar23;
  (pFVar34->From).Rotation.ZW.m128d_f64[1] = dVar24;
  (pFVar34->From).Translation.XY.m128d_f64[0] = dVar25;
  (pFVar34->From).Translation.XY.m128d_f64[1] = dVar26;
  (pFVar34->From).Translation.ZW.m128d_f64[0] = dVar27;
  (pFVar34->From).Translation.ZW.m128d_f64[1] = dVar28;
  (pFVar34->From).Scale3D.XY.m128d_f64[0] = dVar29;
  (pFVar34->From).Scale3D.XY.m128d_f64[1] = dVar30;
  (pFVar34->From).Scale3D.ZW.m128d_f64[0] = dVar31;
  (pFVar34->From).Scale3D.ZW.m128d_f64[1] = dVar32;
  if (this->bOverrideSetPivotMode == false) {
    pUVar36 = FWeakObjectPtr::Get(&(this->Proxy).WeakPtr);
    uVar38 = pUVar36[6].field_0x19;
  }
  else {
    uVar38 = true;
  }
  pTVar1->Ptr->bSetPivotMode = (bool)uVar38;
  if (pTVar1->Ptr->bSetPivotMode == false) {
    pUVar36 = FWeakObjectPtr::Get(&(this->Proxy).WeakPtr);
    pcVar39 = *(code **)(*(longlong *)pUVar36 + 0x2d0);
  }
  else {
    pUVar36 = FWeakObjectPtr::Get(&(this->Proxy).WeakPtr);
    pcVar39 = *(code **)(*(longlong *)pUVar36 + 0x2e0);
  }
  (*pcVar39)(pUVar36);
  return;
}

// EndChange @ 14969da90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_> __thiscall
FTransformProxyChangeSource::EndChange(FTransformProxyChangeSource *this)

{
  FTransformProxyChange *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  UObject *pUVar14;
  double *pdVar15;
  FToolCommandChange *in_RDX;
  code *pcVar16;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar13 = FWeakObjectPtr::IsValid(&(this->Proxy).WeakPtr);
  if ((bVar13) &&
     (((this->ActiveChange).Ptr != (FTransformProxyChange *)0x0 ||
      (bVar13 = `FTransformProxyChangeSource::EndChange'::__l6::<lambda_1>::operator()(local_88),
      bVar13)))) {
    if (((this->ActiveChange).Ptr)->bSetPivotMode == false) {
      pUVar14 = FWeakObjectPtr::Get(&(this->Proxy).WeakPtr);
      pcVar16 = *(code **)(*(longlong *)pUVar14 + 0x2d8);
    }
    else {
      pUVar14 = FWeakObjectPtr::Get(&(this->Proxy).WeakPtr);
      pcVar16 = *(code **)(*(longlong *)pUVar14 + 0x2e8);
    }
    (*pcVar16)(pUVar14);
    if ((this->ActiveChange).Ptr != (FTransformProxyChange *)0x0) {
      pUVar14 = FWeakObjectPtr::Get(&(this->Proxy).WeakPtr);
      pdVar15 = (double *)(**(code **)(*(longlong *)pUVar14 + 0x2c0))(pUVar14,local_78);
      pFVar1 = (this->ActiveChange).Ptr;
      dVar2 = pdVar15[1];
      dVar3 = pdVar15[2];
      dVar4 = pdVar15[3];
      dVar5 = pdVar15[4];
      dVar6 = pdVar15[5];
      dVar7 = pdVar15[6];
      dVar8 = pdVar15[7];
      dVar9 = pdVar15[8];
      dVar10 = pdVar15[9];
      dVar11 = pdVar15[10];
      dVar12 = pdVar15[0xb];
      (pFVar1->To).Rotation.XY.m128d_f64[0] = *pdVar15;
      (pFVar1->To).Rotation.XY.m128d_f64[1] = dVar2;
      (pFVar1->To).Rotation.ZW.m128d_f64[0] = dVar3;
      (pFVar1->To).Rotation.ZW.m128d_f64[1] = dVar4;
      (pFVar1->To).Translation.XY.m128d_f64[0] = dVar5;
      (pFVar1->To).Translation.XY.m128d_f64[1] = dVar6;
      (pFVar1->To).Translation.ZW.m128d_f64[0] = dVar7;
      (pFVar1->To).Translation.ZW.m128d_f64[1] = dVar8;
      (pFVar1->To).Scale3D.XY.m128d_f64[0] = dVar9;
      (pFVar1->To).Scale3D.XY.m128d_f64[1] = dVar10;
      (pFVar1->To).Scale3D.ZW.m128d_f64[0] = dVar11;
      (pFVar1->To).Scale3D.ZW.m128d_f64[1] = dVar12;
      *in_RDX = (FToolCommandChange)(this->ActiveChange).Ptr;
      (this->ActiveChange).Ptr = (FTransformProxyChange *)0x0;
      return (TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_>)in_RDX;
    }
    if (1 < (byte)LogInteractiveToolsTransformProxy._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogInteractiveToolsTransformProxy);
    }
  }
  *in_RDX = (FToolCommandChange)0x0;
  return (TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_>)in_RDX;
}

// GetChangeDescription @ 1496a0600

FText * __thiscall
FTransformProxyChangeSource::GetChangeDescription
          (FTransformProxyChangeSource *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"UTransformProxy",L"FTransformProxyChangeDescription",
             L"TransformProxyChange");
  return __return_storage_ptr__;
}

// GetChangeTarget @ 1496a0660

UObject * __thiscall FTransformProxyChangeSource::GetChangeTarget(FTransformProxyChangeSource *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->Proxy).WeakPtr);
  return pUVar1;
}

// operator() @ 150543fd0

bool __thiscall `FTransformProxyChangeSource::BeginChange'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2732138716867854112>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2732138716867854112>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150544010

bool __thiscall `FTransformProxyChangeSource::EndChange'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2732138716867854091>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2732138716867854091>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

