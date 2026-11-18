// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// CreateMutation @ 14a400b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FInitialControlRigParameterValueMutation::CreateMutation
          (FInitialControlRigParameterValueMutation *this,FEntityManager *param_1,
          FComponentMask *param_2)

{
  ushort uVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  
  FControlRigComponentTypes::Get();
  pFVar2 = FMovieSceneTracksComponentTypes::Get();
  uVar1 = (pFVar2->Parameters).Bool.PropertyTag.Value;
  if (((uVar1 != 0xffff) && ((int)(uint)uVar1 < (param_2->Bits).NumBits)) &&
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      != 0)) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(pFVar2->Parameters).Bool.InitialValue
                       );
    return;
  }
  uVar1 = (pFVar2->Parameters).Byte.PropertyTag.Value;
  if (((uVar1 != 0xffff) && ((int)(uint)uVar1 < (param_2->Bits).NumBits)) &&
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      != 0)) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&(pFVar2->Parameters).Byte.InitialValue
                       );
    return;
  }
  uVar1 = (pFVar2->Parameters).Integer.PropertyTag.Value;
  if (((uVar1 != 0xffff) && ((int)(uint)uVar1 < (param_2->Bits).NumBits)) &&
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      != 0)) {
    FComponentMask::Set(param_2,(FComponentTypeID)
                                *(ushort *)&(pFVar2->Parameters).Integer.InitialValue);
    return;
  }
  uVar1 = (pFVar2->Parameters).Scalar.PropertyTag.Value;
  if (((uVar1 != 0xffff) && ((int)(uint)uVar1 < (param_2->Bits).NumBits)) &&
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      != 0)) {
    FComponentMask::Set(param_2,(FComponentTypeID)
                                *(ushort *)&(pFVar2->Parameters).Scalar.InitialValue);
    return;
  }
  uVar1 = (pFVar2->Parameters).Vector3.PropertyTag.Value;
  if (((uVar1 != 0xffff) && ((int)(uint)uVar1 < (param_2->Bits).NumBits)) &&
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      != 0)) {
    FComponentMask::Set(param_2,(FComponentTypeID)
                                *(ushort *)&(pFVar2->Parameters).Vector3.InitialValue);
    return;
  }
  uVar1 = (pFVar2->Parameters).Transform.PropertyTag.Value;
  if (((uVar1 != 0xffff) && ((int)(uint)uVar1 < (param_2->Bits).NumBits)) &&
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      != 0)) {
    FComponentMask::Set(param_2,(FComponentTypeID)
                                *(ushort *)&(pFVar2->Parameters).Transform.InitialValue);
    return;
  }
  return;
}

// InitializeAllocation @ 14a420800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FInitialControlRigParameterValueMutation::InitializeAllocation
          (FInitialControlRigParameterValueMutation *this,FEntityAllocation *param_1,
          FComponentMask *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uchar *puVar3;
  ERigControlType EVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  float fVar8;
  FAccumulatedControlRigValues *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uchar *puVar16;
  longlong lVar17;
  bool bVar18;
  FControlRigComponentTypes *pFVar19;
  FMovieSceneTracksComponentTypes *pFVar20;
  UControlRig *pUVar21;
  FRigControlElement *pFVar22;
  FRigControlValue *pFVar23;
  UControlRig *pUVar24;
  EComponentHeaderLockMode EVar25;
  uint *puVar26;
  UControlRig *pUVar27;
  UControlRig *pUVar28;
  UControlRig *pUVar29;
  uint uVar30;
  ulonglong uVar31;
  double *pdVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStack_888 [32];
  longlong local_868;
  longlong local_860;
  EComponentHeaderLockMode local_858;
  UControlRig *local_850;
  undefined8 local_848;
  FAccumulatedControlRigValues *local_838;
  ERigControlValueType local_830;
  ERigControlValueType local_82f;
  ERigControlValueType local_82e;
  ERigControlValueType local_82d;
  ERigControlValueType local_82c;
  ERigControlValueType local_82b;
  ERigControlValueType local_82a;
  ERigControlValueType local_829;
  UControlRig *local_828;
  FAccumulatedControlRigValues *local_820;
  UControlRig *local_818;
  undefined8 local_810;
  EComponentHeaderLockMode local_800;
  EComponentHeaderLockMode local_7fc;
  undefined1 local_7f8 [16];
  undefined8 local_7e8;
  TRotator<double> local_7e0;
  undefined4 local_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined8 local_7b8;
  double local_7a8;
  double dStack_7a0;
  undefined8 local_798;
  TRotator<double> local_790;
  double local_778;
  double dStack_770;
  double local_768;
  TVector<double>_u_0 local_758;
  TVector<double>_u_0 local_740;
  TVector<double>_u_0 local_728;
  TVector<double>_u_0 local_708;
  double local_6f0;
  double local_6e8;
  double local_6e0;
  double local_6d8;
  double dStack_6d0;
  double local_6c8;
  FEulerTransform_Float local_6b8;
  undefined1 local_688 [16];
  undefined1 local_678 [16];
  undefined1 local_668 [32];
  double local_648;
  double dStack_640;
  double local_638;
  double local_630;
  double dStack_628;
  double local_620;
  double local_618;
  double dStack_610;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double local_5d0;
  double dStack_5c8;
  undefined4 local_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  double local_5b0;
  double dStack_5a8;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined8 local_590;
  double local_588;
  double dStack_580;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  double local_568;
  double dStack_560;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  double local_548;
  double local_538;
  double dStack_530;
  undefined1 local_528 [16];
  float local_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float local_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float local_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float local_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  FRigControlValue local_4c8;
  FRigControlValue local_444;
  FRigControlValue local_3c0;
  FRigControlValue local_33c;
  FRigControlValue local_2b8;
  FRigControlValue local_234;
  FRigControlValue local_1b0;
  FRigControlValue local_12c;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_850 = (UControlRig *)param_2;
  local_820 = (FAccumulatedControlRigValues *)this;
  pFVar19 = FControlRigComponentTypes::Get();
  pFVar20 = FMovieSceneTracksComponentTypes::Get();
  local_828 = (UControlRig *)param_1->ComponentHeaders;
  pUVar28 = (UControlRig *)0x0;
  plVar14 = &local_828->_padding_;
  for (; local_828 != (UControlRig *)(plVar14 + (ulonglong)param_1->NumComponents * 7);
      local_828 = (UControlRig *)&local_828->_padding_) {
    pUVar24 = local_828;
    if ((TComponentTypeID<UE::MovieScene::FAccumulatedControlEntryIndex>)
        ((FComponentTypeID *)((longlong)((atomic<int> *)&local_828->_padding_ + 1) + 2))->Value ==
        pFVar19->AccumulatedControlEntryIndex) goto LAB_14a4208b7;
  }
  local_828 = (UControlRig *)0x0;
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pUVar24 = pUVar28;
  if (bVar18) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_14a4208b7:
  local_7fc = param_1->LockMode;
  if (local_7fc == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pUVar24->_padding_);
  }
  LOCK();
  *(atomic<int> *)&pUVar24->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pUVar24->_padding_ + 1);
  UNLOCK();
  local_818 = (UControlRig *)param_1->ComponentHeaders;
  puVar26 = (uint *)pUVar24->_padding_;
  plVar14 = &local_818->_padding_;
  for (; local_818 != (UControlRig *)(plVar14 + (ulonglong)param_1->NumComponents * 7);
      local_818 = (UControlRig *)&local_818->_padding_) {
    pUVar21 = local_818;
    if ((TComponentTypeID<FName>)
        ((FComponentTypeID *)((longlong)((atomic<int> *)&local_818->_padding_ + 1) + 2))->Value ==
        pFVar20->GenericParameterName) goto LAB_14a42093b;
  }
  local_818 = (UControlRig *)0x0;
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pUVar21 = pUVar28;
  if (bVar18) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_14a42093b:
  local_800 = param_1->LockMode;
  if (local_800 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pUVar21->_padding_);
  }
  LOCK();
  *(atomic<int> *)&pUVar21->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pUVar21->_padding_ + 1);
  UNLOCK();
  uVar5 = (pFVar20->Parameters).Bool.PropertyTag.Value;
  local_848 = (uchar *)pUVar21->_padding_;
  uVar6 = param_1->Size;
  uVar31 = (ulonglong)uVar6;
  local_858 = CONCAT22(local_858._2_2_,uVar6);
  if (((uVar5 == 0xffff) || ((int)*(atomic<int> *)&local_850->_padding_ <= (int)(uint)uVar5)) ||
     ((*(uint *)((longlong)&local_850->_padding_ + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) &
      1) == 0)) {
    uVar5 = (pFVar20->Parameters).Byte.PropertyTag.Value;
    if (((uVar5 == 0xffff) || ((int)*(atomic<int> *)&local_850->_padding_ <= (int)(uint)uVar5)) ||
       ((*(uint *)((longlong)&local_850->_padding_ + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f)
        & 1) == 0)) {
      uVar5 = (pFVar20->Parameters).Integer.PropertyTag.Value;
      if (((uVar5 == 0xffff) || ((int)*(atomic<int> *)&local_850->_padding_ <= (int)(uint)uVar5)) ||
         ((*(uint *)((longlong)&local_850->_padding_ + (ulonglong)(uVar5 >> 5) * 4) >>
           (uVar5 & 0x1f) & 1) == 0)) {
        uVar5 = (pFVar20->Parameters).Scalar.PropertyTag.Value;
        if (((uVar5 == 0xffff) || ((int)*(atomic<int> *)&local_850->_padding_ <= (int)(uint)uVar5))
           || ((*(uint *)((longlong)&local_850->_padding_ + (ulonglong)(uVar5 >> 5) * 4) >>
                (uVar5 & 0x1f) & 1) == 0)) {
          bVar18 = FComponentMask::Contains
                             ((FComponentMask *)local_850,
                              (FComponentTypeID)(pFVar20->Parameters).Vector3.PropertyTag.Value);
          if (!bVar18) {
            bVar18 = FComponentMask::Contains
                               ((FComponentMask *)local_850,
                                (FComponentTypeID)(pFVar20->Parameters).Transform.PropertyTag.Value)
            ;
            if (!bVar18) goto LAB_14a421a29;
            local_850 = (UControlRig *)param_1->ComponentHeaders;
            plVar14 = &local_850->_padding_;
            for (; local_850 != (UControlRig *)(plVar14 + (ulonglong)param_1->NumComponents * 7);
                local_850 = (UControlRig *)&local_850->_padding_) {
              pUVar27 = local_850;
              if ((TComponentTypeID<UE::MovieScene::FIntermediate3DTransform>)
                  ((FComponentTypeID *)((longlong)((atomic<int> *)&local_850->_padding_ + 1) + 2))->
                  Value == (pFVar20->Parameters).Transform.InitialValue) goto LAB_14a421405;
            }
            local_850 = (UControlRig *)0x0;
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Header",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                ,0x2cd,L"");
            pUVar27 = pUVar28;
            if (bVar18) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
LAB_14a421405:
            local_838 = (FAccumulatedControlRigValues *)CONCAT44(local_838._4_4_,param_1->LockMode);
            if (param_1->LockMode == Mutex) {
              AcquireSRWLockExclusive((PSRWLOCK)&pUVar27->_padding_);
            }
            LOCK();
            paVar1 = (atomic<int> *)&pUVar27->_padding_;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + 1);
            UNLOCK();
            if ((aVar2 != (atomic<int>)0x0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PreviousAccessCount == 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                    ,0x487,
                                    L"Component header is still in use when it is being opened for write!"
                                   ), bVar18)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            puVar16 = local_848;
            pdVar32 = (double *)pUVar27->_padding_;
            local_858 = LockFree;
            pUVar24 = pUVar28;
            lVar17 = local_860;
            for (; local_860 = lVar17, uVar31 != 0; uVar31 = uVar31 - 1) {
              EVar25 = (EComponentHeaderLockMode)pUVar24;
              pFVar9 = *(FAccumulatedControlRigValues **)
                        &(local_820->ParameterValuesByTrack).field_0x8;
              local_848._6_2_ = (undefined2)((ulonglong)local_848 >> 0x30);
              local_848 = (uchar *)CONCAT26(local_848._6_2_,*(undefined6 *)puVar26);
              pUVar24 = pUVar28;
              if (((short)*puVar26 != -1) &&
                 (local_848._2_2_ = (short)((uint6)*(undefined6 *)puVar26 >> 0x10),
                 bVar18 = local_848._2_2_ != -1, bVar18)) {
                iVar7 = (pFVar9->ValuesArray).ArrayNum;
                local_860 = (longlong)iVar7;
                uVar30 = *puVar26 & 0xffff;
                if (iVar7 <= (int)uVar30) {
                  local_868 = (longlong)(int)uVar30;
                  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  lVar17 = local_860;
                  if (bVar18) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
                local_860 = lVar17;
                pUVar24 = (UControlRig *)
                          FWeakObjectPtr::Get((FWeakObjectPtr *)
                                              ((pFVar9->ValuesArray).AllocatorInstance.Data +
                                              (ulonglong)uVar30 * 0x88));
                EVar25 = local_858;
              }
              pFVar22 = (FRigControlElement *)
                        (**(code **)(pUVar24->_padding_ + 0x3c8))
                                  (pUVar24,puVar16 + (longlong)(int)EVar25 * 8);
              if (pFVar22 != (FRigControlElement *)0x0) {
                EVar4 = (pFVar22->Settings).ControlType;
                if (EVar4 == Transform) {
                  local_829 = Current;
                  pFVar23 = UControlRig::GetControlValue(pUVar24,&local_12c,pFVar22,&local_829);
                  local_4f8 = (pFVar23->FloatStorage).Float00;
                  fStack_4f4 = (pFVar23->FloatStorage).Float01;
                  fStack_4f0 = (pFVar23->FloatStorage).Float02;
                  fStack_4ec = (pFVar23->FloatStorage).Float03;
                  local_4e8 = (pFVar23->FloatStorage).Float10;
                  fStack_4e4 = (pFVar23->FloatStorage).Float11;
                  fStack_4e0 = (pFVar23->FloatStorage).Float12;
                  fStack_4dc = (pFVar23->FloatStorage).Float13;
                  local_4d8 = (pFVar23->FloatStorage).Float20;
                  fStack_4d4 = (pFVar23->FloatStorage).Float21;
                  fStack_4d0 = (pFVar23->FloatStorage).Float22;
                  fStack_4cc = (pFVar23->FloatStorage).Float23;
                  local_668._8_8_ = (undefined8)fStack_4f4;
                  local_668._0_8_ = (undefined8)local_4f8;
                  dStack_7a0 = (double)fStack_4e4;
                  uVar35 = SUB84((double)fStack_4ec,0);
                  uVar36 = (undefined4)((ulonglong)(double)fStack_4ec >> 0x20);
                  dVar11 = (double)fStack_4d4;
                  local_7a8 = (double)local_4e8;
                  local_798 = (double)fStack_4e0;
                  dVar12 = (double)local_4d8;
                  dVar13 = (double)fStack_4d0;
                  local_528._8_4_ = uVar35;
                  local_528._0_8_ = (double)fStack_4f0;
                  local_528._12_4_ = uVar36;
                  local_668._24_4_ = uVar35;
                  local_668._16_8_ = (double)fStack_4f0;
                  local_668._28_4_ = uVar36;
                  local_648 = local_7a8;
                  dStack_640 = dStack_7a0;
                  local_638 = local_798;
                  local_538 = (double)local_668._0_8_;
                  dStack_530 = (double)local_668._8_8_;
                  UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_668,&local_790);
                  local_778 = dVar12;
                  dStack_770 = dVar11;
                  local_768 = dVar13;
                  local_630 = dVar12;
                  dStack_628 = dVar11;
                  local_620 = dVar13;
                  UControlRig::GetControlSpecifiedEulerAngle
                            (pUVar24,(TVector<double> *)&local_728._s_0,pFVar22,false);
                  uStack_570 = SUB84(local_728._s_0.X,0);
                  uStack_56c = (undefined4)((ulonglong)local_728._0_8_ >> 0x20);
                  uVar35 = SUB84(local_778,0);
                  uVar36 = (undefined4)((ulonglong)local_778 >> 0x20);
                  uVar38 = (undefined4)((ulonglong)dStack_770 >> 0x20);
                  local_790.Roll = local_728._s_0.X;
                  local_790.Pitch = local_728._s_0.Y;
                  local_790.Yaw = local_728._s_0.Z;
                  uVar39 = SUB84(local_768,0);
                  uVar40 = (undefined4)((ulonglong)local_768 >> 0x20);
                  *pdVar32 = local_7a8;
                  pdVar32[1] = dStack_7a0;
                  *(undefined4 *)(pdVar32 + 2) = (undefined4)local_798;
                  *(undefined4 *)((longlong)pdVar32 + 0x14) = local_798._4_4_;
                  *(undefined4 *)(pdVar32 + 3) = uStack_570;
                  *(undefined4 *)((longlong)pdVar32 + 0x1c) = uStack_56c;
                  local_588 = local_7a8;
                  dStack_580 = dStack_7a0;
                  local_578 = (undefined4)local_798;
                  uStack_574 = local_798._4_4_;
                  local_548 = local_768;
                  uStack_550 = dStack_770._0_4_;
                  local_568 = local_728._s_0.Y;
                  dStack_560 = local_728._s_0.Z;
                  uVar37 = dStack_770._0_4_;
                  uVar33 = local_728._s_0.Y;
                  uVar34 = local_728._s_0.Z;
                  local_558 = uVar35;
                  uStack_554 = uVar36;
                  uStack_54c = uVar38;
                }
                else {
                  if (EVar4 != TransformNoScale) {
                    if (EVar4 == EulerTransform) {
                      local_82b = Current;
                      pFVar23 = UControlRig::GetControlValue(pUVar24,&local_234,pFVar22,&local_82b);
                      local_6b8.RotationPitch = (pFVar23->FloatStorage).Float00;
                      local_6b8.RotationYaw = (pFVar23->FloatStorage).Float01;
                      local_6b8.RotationRoll = (pFVar23->FloatStorage).Float02;
                      local_6b8.TranslationX = (pFVar23->FloatStorage).Float03;
                      local_6b8.TranslationY = (pFVar23->FloatStorage).Float10;
                      local_6b8.TranslationZ = (pFVar23->FloatStorage).Float11;
                      local_6b8.ScaleX = (pFVar23->FloatStorage).Float12;
                      local_6b8.ScaleY = (pFVar23->FloatStorage).Float13;
                      local_6b8.ScaleZ = (pFVar23->FloatStorage).Float20;
                      FRigControlValue::FEulerTransform_Float::ToTransform
                                (&local_6b8,(FEulerTransform *)&local_708._s_0);
                      UControlRig::GetControlSpecifiedEulerAngle
                                (pUVar24,(TVector<double> *)&local_758._s_0,pFVar22,false);
                      uStack_600 = SUB84(local_758._s_0.X,0);
                      uStack_5fc = (undefined4)((ulonglong)local_758._0_8_ >> 0x20);
                      *pdVar32 = local_708._s_0.X;
                      pdVar32[1] = local_708._s_0.Y;
                      *(undefined4 *)(pdVar32 + 2) = local_708._16_4_;
                      *(undefined4 *)((longlong)pdVar32 + 0x14) = local_708._20_4_;
                      *(undefined4 *)(pdVar32 + 3) = uStack_600;
                      *(undefined4 *)((longlong)pdVar32 + 0x1c) = uStack_5fc;
                      local_618 = local_708._s_0.X;
                      dStack_610 = local_708._s_0.Y;
                      local_6f0 = local_758._s_0.Y;
                      pdVar32[4] = local_758._s_0.Y;
                      pdVar32[5] = local_758._s_0.Z;
                      local_608 = local_708._16_4_;
                      uStack_604 = local_708._20_4_;
                      pdVar32[6] = local_6d8;
                      pdVar32[7] = dStack_6d0;
                      pdVar32[8] = local_6c8;
                      local_6e8 = local_758._s_0.Z;
                      local_6e0 = local_758._s_0.X;
                      local_5d8 = local_6c8;
                      local_5f8 = local_758._s_0.Y;
                      dStack_5f0 = local_758._s_0.Z;
                      local_5e8 = local_6d8;
                      dStack_5e0 = dStack_6d0;
                    }
                    goto LAB_14a42199d;
                  }
                  local_82a = Current;
                  pFVar23 = UControlRig::GetControlValue(pUVar24,&local_1b0,pFVar22,&local_82a);
                  uVar33 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
                  uVar36 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
                  uVar35 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
                  local_518 = (pFVar23->FloatStorage).Float00;
                  fStack_514 = (pFVar23->FloatStorage).Float01;
                  fStack_510 = (pFVar23->FloatStorage).Float02;
                  fStack_50c = (pFVar23->FloatStorage).Float03;
                  local_508 = (pFVar23->FloatStorage).Float10;
                  fStack_504 = (pFVar23->FloatStorage).Float11;
                  fStack_500 = (pFVar23->FloatStorage).Float12;
                  fStack_4fc = (pFVar23->FloatStorage).Float13;
                  uVar37 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
                  uVar15 = (ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20;
                  local_7f8._8_4_ = SUB84((double)fStack_504,0);
                  local_7f8._0_8_ = (double)local_508;
                  local_7f8._12_4_ = (int)((ulonglong)(double)fStack_504 >> 0x20);
                  local_7e8 = (double)fStack_500;
                  local_688._8_4_ = SUB84((double)fStack_514,0);
                  local_688._0_8_ = (double)local_518;
                  local_688._12_4_ = (int)((ulonglong)(double)fStack_514 >> 0x20);
                  local_678._8_4_ = SUB84((double)fStack_50c,0);
                  local_678._0_8_ = (double)fStack_510;
                  local_678._12_4_ = (int)((ulonglong)(double)fStack_50c >> 0x20);
                  UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_688,&local_7e0);
                  local_7c8 = uVar35;
                  uStack_7c4 = uVar36;
                  local_7b8 = uVar33;
                  uStack_7c0 = uVar37;
                  uStack_7bc = (int)uVar15;
                  UControlRig::GetControlSpecifiedEulerAngle
                            (pUVar24,(TVector<double> *)&local_740._s_0,pFVar22,false);
                  uStack_5b8 = SUB84(local_740._s_0.X,0);
                  uStack_5b4 = (undefined4)((ulonglong)local_740._0_8_ >> 0x20);
                  uVar39 = (undefined4)local_7b8;
                  uVar40 = (undefined4)((ulonglong)local_7b8 >> 0x20);
                  local_7e0.Roll = local_740._s_0.X;
                  local_7e0.Pitch = local_740._s_0.Y;
                  local_7e0.Yaw = local_740._s_0.Z;
                  *pdVar32 = (double)local_7f8._0_8_;
                  pdVar32[1] = (double)local_7f8._8_8_;
                  local_5c0 = (undefined4)local_7e8;
                  uStack_5bc = local_7e8._4_4_;
                  *(undefined4 *)(pdVar32 + 2) = (undefined4)local_7e8;
                  *(undefined4 *)((longlong)pdVar32 + 0x14) = local_7e8._4_4_;
                  *(undefined4 *)(pdVar32 + 3) = uStack_5b8;
                  *(undefined4 *)((longlong)pdVar32 + 0x1c) = uStack_5b4;
                  local_5d0 = (double)local_7f8._0_8_;
                  dStack_5c8 = (double)local_7f8._8_8_;
                  local_590 = local_7b8;
                  local_5a0 = local_7c8;
                  uStack_59c = uStack_7c4;
                  uStack_598 = uStack_7c0;
                  uStack_594 = uStack_7bc;
                  local_5b0 = local_740._s_0.Y;
                  dStack_5a8 = local_740._s_0.Z;
                  uVar35 = local_7c8;
                  uVar36 = uStack_7c4;
                  uVar37 = uStack_7c0;
                  uVar38 = uStack_7bc;
                  uVar33 = local_740._s_0.Y;
                  uVar34 = local_740._s_0.Z;
                }
                pdVar32[4] = (double)uVar33;
                pdVar32[5] = (double)uVar34;
                *(undefined4 *)(pdVar32 + 6) = uVar35;
                *(undefined4 *)((longlong)pdVar32 + 0x34) = uVar36;
                *(undefined4 *)(pdVar32 + 7) = uVar37;
                *(undefined4 *)((longlong)pdVar32 + 0x3c) = uVar38;
                pdVar32[8] = (double)CONCAT44(uVar40,uVar39);
              }
LAB_14a42199d:
              puVar26 = (uint *)((longlong)puVar26 + 6);
              local_858 = local_858 + Mutex;
              pUVar24 = (UControlRig *)(ulonglong)local_858;
              pdVar32 = pdVar32 + 9;
              pUVar27 = local_850;
              pUVar21 = local_818;
              lVar17 = local_860;
            }
            goto LAB_14a421a00;
          }
          local_850 = (UControlRig *)param_1->ComponentHeaders;
          plVar14 = &local_850->_padding_;
          for (; local_850 != (UControlRig *)(plVar14 + (ulonglong)param_1->NumComponents * 7);
              local_850 = (UControlRig *)&local_850->_padding_) {
            pUVar27 = local_850;
            if ((TComponentTypeID<UE::MovieScene::FFloatIntermediateVector>)
                ((FComponentTypeID *)((longlong)((atomic<int> *)&local_850->_padding_ + 1) + 2))->
                Value == (pFVar20->Parameters).Vector3.InitialValue) goto LAB_14a421202;
          }
          local_850 = (UControlRig *)0x0;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Header",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                              ,0x2cd,L"");
          pUVar27 = pUVar28;
          if (bVar18) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
LAB_14a421202:
          local_858 = param_1->LockMode;
          if (local_858 == Mutex) {
            AcquireSRWLockExclusive((PSRWLOCK)&pUVar27->_padding_);
          }
          LOCK();
          paVar1 = (atomic<int> *)&pUVar27->_padding_;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + 1);
          UNLOCK();
          if ((aVar2 != (atomic<int>)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PreviousAccessCount == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                  ,0x487,
                                  L"Component header is still in use when it is being opened for write!"
                                 ), bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          puVar16 = local_848;
          if (uVar31 != 0) {
            pdVar32 = (double *)((uchar *)pUVar27->_padding_ + 0x10);
            pUVar24 = pUVar28;
            do {
              local_838 = *(FAccumulatedControlRigValues **)
                           &(local_820->ParameterValuesByTrack).field_0x8;
              local_848 = (uchar *)CONCAT26(local_848._6_2_,*(undefined6 *)puVar26);
              pUVar21 = pUVar28;
              if (((short)*puVar26 != -1) &&
                 (local_848._2_2_ = (short)((uint6)*(undefined6 *)puVar26 >> 0x10),
                 bVar18 = local_848._2_2_ != -1, bVar18)) {
                uVar30 = *puVar26 & 0xffff;
                iVar7 = (local_838->ValuesArray).ArrayNum;
                if (iVar7 <= (int)uVar30) {
                  local_868 = (longlong)(int)uVar30;
                  local_860 = (longlong)iVar7;
                  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar18) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
                pUVar21 = (UControlRig *)
                          FWeakObjectPtr::Get((FWeakObjectPtr *)
                                              ((local_838->ValuesArray).AllocatorInstance.Data +
                                              (ulonglong)uVar30 * 0x88));
              }
              pFVar22 = (FRigControlElement *)
                        (**(code **)(pUVar21->_padding_ + 0x3c8))
                                  (pUVar21,puVar16 + (longlong)(int)pUVar24 * 8);
              if (pFVar22 != (FRigControlElement *)0x0) {
                local_82c = Current;
                pFVar23 = UControlRig::GetControlValue(pUVar21,&local_2b8,pFVar22,&local_82c);
                puVar3 = *(uchar **)&pFVar23->FloatStorage;
                fVar8 = (pFVar23->FloatStorage).Float02;
                pdVar32[-2] = (double)SUB84(puVar3,0);
                local_810._4_4_ = (float)((ulonglong)puVar3 >> 0x20);
                pdVar32[-1] = (double)local_810._4_4_;
                *pdVar32 = (double)fVar8;
                pdVar32[1] = 0.0;
                local_810 = puVar3;
              }
              pUVar24 = (UControlRig *)(ulonglong)((int)pUVar24 + 1);
              puVar26 = (uint *)((longlong)puVar26 + 6);
              pdVar32 = pdVar32 + 4;
              uVar31 = uVar31 - 1;
              pUVar27 = local_850;
              pUVar21 = local_818;
            } while (uVar31 != 0);
          }
        }
        else {
          local_850 = (UControlRig *)param_1->ComponentHeaders;
          plVar14 = &local_850->_padding_;
          for (; local_850 != (UControlRig *)(plVar14 + (ulonglong)param_1->NumComponents * 7);
              local_850 = (UControlRig *)&local_850->_padding_) {
            pUVar27 = local_850;
            if ((TComponentTypeID<double>)
                ((FComponentTypeID *)((longlong)((atomic<int> *)&local_850->_padding_ + 1) + 2))->
                Value == (pFVar20->Parameters).Scalar.InitialValue) goto LAB_14a421022;
          }
          local_850 = (UControlRig *)0x0;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Header",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                              ,0x2cd,L"");
          pUVar27 = pUVar28;
          if (bVar18) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
LAB_14a421022:
          local_858 = param_1->LockMode;
          if (local_858 == Mutex) {
            AcquireSRWLockExclusive((PSRWLOCK)&pUVar27->_padding_);
          }
          LOCK();
          paVar1 = (atomic<int> *)&pUVar27->_padding_;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + 1);
          UNLOCK();
          if ((aVar2 != (atomic<int>)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PreviousAccessCount == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                  ,0x487,
                                  L"Component header is still in use when it is being opened for write!"
                                 ), bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          puVar16 = local_848;
          local_810 = (uchar *)pUVar27->_padding_;
          pUVar24 = pUVar28;
          pUVar29 = pUVar28;
          if (uVar31 != 0) {
            do {
              local_838 = *(FAccumulatedControlRigValues **)
                           &(local_820->ParameterValuesByTrack).field_0x8;
              local_848 = (uchar *)CONCAT26(local_848._6_2_,*(undefined6 *)puVar26);
              pUVar21 = pUVar28;
              if (((short)*puVar26 != -1) &&
                 (local_848._2_2_ = (short)((uint6)*(undefined6 *)puVar26 >> 0x10),
                 bVar18 = local_848._2_2_ != -1, bVar18)) {
                uVar30 = *puVar26 & 0xffff;
                iVar7 = (local_838->ValuesArray).ArrayNum;
                if (iVar7 <= (int)uVar30) {
                  local_868 = (longlong)(int)uVar30;
                  local_860 = (longlong)iVar7;
                  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar18) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
                pUVar21 = (UControlRig *)
                          FWeakObjectPtr::Get((FWeakObjectPtr *)
                                              ((local_838->ValuesArray).AllocatorInstance.Data +
                                              (ulonglong)uVar30 * 0x88));
              }
              pFVar22 = (FRigControlElement *)
                        (**(code **)(pUVar21->_padding_ + 0x3c8))
                                  (pUVar21,puVar16 + (longlong)(int)pUVar29 * 8);
              if (pFVar22 != (FRigControlElement *)0x0) {
                local_82d = Current;
                pFVar23 = UControlRig::GetControlValue(pUVar21,&local_33c,pFVar22,&local_82d);
                *(double *)(local_810 + (longlong)pUVar24 * 8) =
                     (double)(pFVar23->FloatStorage).Float00;
              }
              pUVar24 = (UControlRig *)((longlong)&pUVar24->_padding_ + 1);
              puVar26 = (uint *)((longlong)puVar26 + 6);
              pUVar27 = local_850;
              pUVar29 = (UControlRig *)(ulonglong)((int)pUVar29 + 1);
              pUVar21 = local_818;
            } while ((longlong)pUVar24 < (longlong)uVar31);
          }
        }
      }
      else {
        local_850 = (UControlRig *)param_1->ComponentHeaders;
        plVar14 = &local_850->_padding_;
        for (; local_850 != (UControlRig *)(plVar14 + (ulonglong)param_1->NumComponents * 7);
            local_850 = (UControlRig *)&local_850->_padding_) {
          pUVar27 = local_850;
          if ((TComponentTypeID<int>)
              ((FComponentTypeID *)((longlong)((atomic<int> *)&local_850->_padding_ + 1) + 2))->
              Value == (pFVar20->Parameters).Integer.InitialValue) goto LAB_14a420e34;
        }
        local_850 = (UControlRig *)0x0;
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Header",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                            ,0x2cd,L"");
        pUVar27 = pUVar28;
        if (bVar18) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
LAB_14a420e34:
        local_858 = param_1->LockMode;
        if (local_858 == Mutex) {
          AcquireSRWLockExclusive((PSRWLOCK)&pUVar27->_padding_);
        }
        LOCK();
        paVar1 = (atomic<int> *)&pUVar27->_padding_;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        if ((aVar2 != (atomic<int>)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("PreviousAccessCount == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                ,0x487,
                                L"Component header is still in use when it is being opened for write!"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        puVar16 = local_848;
        local_810 = (uchar *)pUVar27->_padding_;
        pUVar24 = pUVar28;
        pUVar29 = pUVar28;
        if (uVar31 != 0) {
          do {
            local_838 = *(FAccumulatedControlRigValues **)
                         &(local_820->ParameterValuesByTrack).field_0x8;
            local_848 = (uchar *)CONCAT26(local_848._6_2_,*(undefined6 *)puVar26);
            pUVar21 = pUVar28;
            if (((short)*puVar26 != -1) &&
               (local_848._2_2_ = (short)((uint6)*(undefined6 *)puVar26 >> 0x10),
               bVar18 = local_848._2_2_ != -1, bVar18)) {
              uVar30 = *puVar26 & 0xffff;
              iVar7 = (local_838->ValuesArray).ArrayNum;
              if (iVar7 <= (int)uVar30) {
                local_868 = (longlong)(int)uVar30;
                local_860 = (longlong)iVar7;
                bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar18) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              pUVar21 = (UControlRig *)
                        FWeakObjectPtr::Get((FWeakObjectPtr *)
                                            ((local_838->ValuesArray).AllocatorInstance.Data +
                                            (ulonglong)uVar30 * 0x88));
            }
            pFVar22 = (FRigControlElement *)
                      (**(code **)(pUVar21->_padding_ + 0x3c8))
                                (pUVar21,puVar16 + (longlong)(int)pUVar29 * 8);
            if (pFVar22 != (FRigControlElement *)0x0) {
              local_82e = Current;
              pFVar23 = UControlRig::GetControlValue(pUVar21,&local_3c0,pFVar22,&local_82e);
              *(float *)(local_810 + (longlong)pUVar24 * 4) = (pFVar23->FloatStorage).Float00;
            }
            pUVar24 = (UControlRig *)((longlong)&pUVar24->_padding_ + 1);
            puVar26 = (uint *)((longlong)puVar26 + 6);
            pUVar27 = local_850;
            pUVar29 = (UControlRig *)(ulonglong)((int)pUVar29 + 1);
            pUVar21 = local_818;
          } while ((longlong)pUVar24 < (longlong)uVar31);
        }
      }
    }
    else {
      local_850 = (UControlRig *)param_1->ComponentHeaders;
      plVar14 = &local_850->_padding_;
      for (; local_850 != (UControlRig *)(plVar14 + (ulonglong)param_1->NumComponents * 7);
          local_850 = (UControlRig *)&local_850->_padding_) {
        pUVar27 = local_850;
        if ((TComponentTypeID<unsigned_char>)
            ((FComponentTypeID *)((longlong)((atomic<int> *)&local_850->_padding_ + 1) + 2))->Value
            == (pFVar20->Parameters).Byte.InitialValue) goto LAB_14a420c22;
      }
      local_850 = (UControlRig *)0x0;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2cd,L"");
      pUVar27 = pUVar28;
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
LAB_14a420c22:
      local_858 = param_1->LockMode;
      if (local_858 == Mutex) {
        AcquireSRWLockExclusive((PSRWLOCK)&pUVar27->_padding_);
      }
      LOCK();
      paVar1 = (atomic<int> *)&pUVar27->_padding_;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      if ((aVar2 != (atomic<int>)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("PreviousAccessCount == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                              ,0x487,
                              L"Component header is still in use when it is being opened for write!"
                             ), bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      puVar16 = local_848;
      local_810 = (uchar *)pUVar27->_padding_;
      pUVar24 = pUVar28;
      pUVar29 = pUVar28;
      if (uVar31 != 0) {
        do {
          local_838 = *(FAccumulatedControlRigValues **)
                       &(local_820->ParameterValuesByTrack).field_0x8;
          local_848 = (uchar *)CONCAT26(local_848._6_2_,*(undefined6 *)puVar26);
          pUVar21 = pUVar28;
          if (((short)*puVar26 != -1) &&
             (local_848._2_2_ = (short)((uint6)*(undefined6 *)puVar26 >> 0x10),
             bVar18 = local_848._2_2_ != -1, bVar18)) {
            uVar30 = *puVar26 & 0xffff;
            iVar7 = (local_838->ValuesArray).ArrayNum;
            if (iVar7 <= (int)uVar30) {
              local_868 = (longlong)(int)uVar30;
              local_860 = (longlong)iVar7;
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            pUVar21 = (UControlRig *)
                      FWeakObjectPtr::Get((FWeakObjectPtr *)
                                          ((local_838->ValuesArray).AllocatorInstance.Data +
                                          (ulonglong)uVar30 * 0x88));
          }
          pFVar22 = (FRigControlElement *)
                    (**(code **)(pUVar21->_padding_ + 0x3c8))
                              (pUVar21,puVar16 + (longlong)(int)pUVar29 * 8);
          if (pFVar22 != (FRigControlElement *)0x0) {
            local_82f = Current;
            pFVar23 = UControlRig::GetControlValue(pUVar21,&local_444,pFVar22,&local_82f);
            local_810[(longlong)&pUVar24->_padding_] = *(uchar *)&(pFVar23->FloatStorage).Float00;
          }
          pUVar24 = (UControlRig *)((longlong)&pUVar24->_padding_ + 1);
          puVar26 = (uint *)((longlong)puVar26 + 6);
          pUVar27 = local_850;
          pUVar29 = (UControlRig *)(ulonglong)((int)pUVar29 + 1);
          pUVar21 = local_818;
        } while ((longlong)pUVar24 < (longlong)uVar31);
      }
    }
    if ((UControlRig *)pUVar27->_padding_ != (UControlRig *)0x0) {
      pUVar28 = (UControlRig *)pUVar27->_padding_;
    }
    pUVar27->_padding_ = (longlong)pUVar28;
    LOCK();
    *(atomic<int> *)&pUVar27->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pUVar27->_padding_ + -1);
    UNLOCK();
    EVar25 = local_858;
  }
  else {
    local_850 = (UControlRig *)param_1->ComponentHeaders;
    plVar14 = &local_850->_padding_;
    for (; local_850 != (UControlRig *)(plVar14 + (ulonglong)param_1->NumComponents * 7);
        local_850 = (UControlRig *)&local_850->_padding_) {
      pUVar27 = local_850;
      if ((TComponentTypeID<bool>)
          ((FComponentTypeID *)((longlong)((atomic<int> *)&local_850->_padding_ + 1) + 2))->Value ==
          (pFVar20->Parameters).Bool.InitialValue) goto LAB_14a420a1a;
    }
    local_850 = (UControlRig *)0x0;
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Header",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                        ,0x2cd,L"");
    pUVar27 = pUVar28;
    if (bVar18) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
LAB_14a420a1a:
    local_838 = (FAccumulatedControlRigValues *)CONCAT44(local_838._4_4_,param_1->LockMode);
    if (param_1->LockMode == Mutex) {
      AcquireSRWLockExclusive((PSRWLOCK)&pUVar27->_padding_);
    }
    LOCK();
    paVar1 = (atomic<int> *)&pUVar27->_padding_;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if ((aVar2 != (atomic<int>)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("PreviousAccessCount == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                            ,0x487,
                            L"Component header is still in use when it is being opened for write!"),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar9 = local_820;
    puVar16 = local_848;
    local_810 = (uchar *)pUVar27->_padding_;
    pUVar24 = pUVar28;
    pUVar29 = pUVar28;
    if (uVar6 != 0) {
      do {
        local_820 = *(FAccumulatedControlRigValues **)&(pFVar9->ParameterValuesByTrack).field_0x8;
        uVar30 = *puVar26;
        local_848 = (uchar *)CONCAT44(CONCAT22(local_848._6_2_,(short)puVar26[1]),uVar30);
        pUVar21 = pUVar28;
        if (((short)uVar30 != -1) &&
           (local_848._2_2_ = (short)(uVar30 >> 0x10), bVar18 = local_848._2_2_ != -1, bVar18)) {
          uVar30 = uVar30 & 0xffff;
          iVar7 = (local_820->ValuesArray).ArrayNum;
          if (iVar7 <= (int)uVar30) {
            local_868 = (longlong)(int)uVar30;
            local_860 = (longlong)iVar7;
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          pUVar21 = (UControlRig *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        ((local_820->ValuesArray).AllocatorInstance.Data +
                                        (ulonglong)uVar30 * 0x88));
        }
        pFVar22 = (FRigControlElement *)
                  (**(code **)(pUVar21->_padding_ + 0x3c8))
                            (pUVar21,puVar16 + (longlong)(int)pUVar24 * 8);
        if (pFVar22 != (FRigControlElement *)0x0) {
          local_830 = Current;
          pFVar23 = UControlRig::GetControlValue(pUVar21,&local_4c8,pFVar22,&local_830);
          local_810[(longlong)&pUVar29->_padding_] = *(uchar *)&(pFVar23->FloatStorage).Float00;
        }
        pUVar29 = (UControlRig *)((longlong)&pUVar29->_padding_ + 1);
        puVar26 = (uint *)((longlong)puVar26 + 6);
        pUVar27 = local_850;
        pUVar24 = (UControlRig *)(ulonglong)((int)pUVar24 + 1);
        pUVar21 = local_818;
      } while ((longlong)pUVar29 < (longlong)(ulonglong)(ushort)(undefined2)local_858);
    }
LAB_14a421a00:
    if ((UControlRig *)pUVar27->_padding_ != (UControlRig *)0x0) {
      pUVar28 = (UControlRig *)pUVar27->_padding_;
    }
    pUVar27->_padding_ = (longlong)pUVar28;
    LOCK();
    *(atomic<int> *)&pUVar27->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pUVar27->_padding_ + -1);
    UNLOCK();
    EVar25 = (EComponentHeaderLockMode)local_838;
  }
  pUVar24 = local_828;
  if (EVar25 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pUVar27->_padding_);
    pUVar24 = local_828;
  }
LAB_14a421a29:
  LOCK();
  *(atomic<int> *)&pUVar21->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pUVar21->_padding_ + -1)
  ;
  UNLOCK();
  if (local_800 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pUVar21->_padding_);
  }
  LOCK();
  *(atomic<int> *)&pUVar24->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pUVar24->_padding_ + -1)
  ;
  UNLOCK();
  if (local_7fc == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pUVar24->_padding_);
  }
  return;
}

// InitializeUnmodifiedAllocation @ 14a423dd0

void __thiscall
UE::MovieScene::FInitialControlRigParameterValueMutation::InitializeUnmodifiedAllocation
          (FInitialControlRigParameterValueMutation *this,FEntityAllocation *param_1,
          FComponentMask *param_2)

{
  return;
}

