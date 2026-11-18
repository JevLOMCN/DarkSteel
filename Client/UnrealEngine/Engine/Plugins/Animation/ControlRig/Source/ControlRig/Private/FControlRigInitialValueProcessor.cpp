// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 11

// ControlValueToInitialValue<FEulerTransform,UE::MovieScene::FIntermediate3DTransform> @ 14a390df0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FControlRigInitialValueProcessor::
ControlValueToInitialValue<FEulerTransform,UE::MovieScene::FIntermediate3DTransform>
          (FControlRigInitialValueProcessor *this,UControlRig *param_1,FRigControlElement *param_2,
          FIntermediate3DTransform *param_3)

{
  ERigControlType EVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [8];
  undefined1 auVar8 [16];
  FRigControlValue *pFVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ERigControlValueType local_res18 [8];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [8];
  undefined8 uStack_150;
  undefined8 local_148;
  TRotator<double> aTStack_140 [2];
  TVector<double>_u_0 local_108;
  undefined1 local_f0 [8];
  float fStack_e8;
  float fStack_e4;
  double local_e0;
  TRotator<double> local_d8 [8];
  
  EVar1 = (param_2->Settings).ControlType;
  dVar6 = 0.0;
  _local_158 = ZEXT816(0);
  auVar8 = _local_158;
  if (EVar1 == Transform) {
    local_res18[0] = Current;
    pFVar9 = UControlRig::GetControlValue(param_1,(FRigControlValue *)local_f0,param_2,local_res18);
    dVar4 = (double)(pFVar9->FloatStorage).Float03;
    dVar5 = (double)(pFVar9->FloatStorage).Float01;
    dVar6 = (double)(pFVar9->FloatStorage).Float11;
    local_e0 = (double)(pFVar9->FloatStorage).Float12;
    uVar10 = (undefined8)(pFVar9->FloatStorage).Float20;
    uVar2 = (undefined8)(pFVar9->FloatStorage).Float21;
    uVar3 = (undefined8)(pFVar9->FloatStorage).Float22;
    fStack_e8 = (float)SUB84(dVar6,0);
    local_f0 = (double)(pFVar9->FloatStorage).Float10;
    fStack_e4 = (float)(int)((ulonglong)dVar6 >> 0x20);
    local_178._8_4_ = SUB84(dVar5,0);
    local_178._0_8_ = (double)(pFVar9->FloatStorage).Float00;
    local_178._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_168._8_4_ = SUB84(dVar4,0);
    local_168._0_8_ = (double)(pFVar9->FloatStorage).Float02;
    local_168._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_178,local_d8);
    uVar15 = SUB84(local_e0,0);
    uVar16 = (undefined4)((ulonglong)local_e0 >> 0x20);
    fVar11 = (float)local_f0._0_4_;
    fVar12 = (float)local_f0._4_4_;
    fVar13 = fStack_e8;
    fVar14 = fStack_e4;
  }
  else {
    if (EVar1 != TransformNoScale) {
      if (EVar1 == EulerTransform) {
        local_res18[0] = Current;
        pFVar9 = UControlRig::GetControlValue
                           (param_1,(FRigControlValue *)local_f0,param_2,local_res18);
        dVar6 = (double)(pFVar9->FloatStorage).Float11;
        auVar7 = (undefined1  [8])(double)(pFVar9->FloatStorage).Float03;
        dVar4 = (double)(pFVar9->FloatStorage).Float10;
        uVar3 = (double)(pFVar9->FloatStorage).Float20;
        uVar10 = (double)(pFVar9->FloatStorage).Float12;
        uVar2 = (double)(pFVar9->FloatStorage).Float13;
      }
      else {
        uStack_150 = 0.0;
        local_158 = (undefined1  [8])0x0;
        auVar7 = local_158;
        dVar4 = uStack_150;
        uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        _local_158 = auVar8;
      }
      goto LAB_14a3910bb;
    }
    local_res18[0] = Current;
    pFVar9 = UControlRig::GetControlValue(param_1,(FRigControlValue *)local_f0,param_2,local_res18);
    uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dVar4 = (double)(pFVar9->FloatStorage).Float01;
    dVar6 = (double)(pFVar9->FloatStorage).Float11;
    uStack_150._0_4_ = (float)SUB84(dVar6,0);
    local_158 = (undefined1  [8])(double)(pFVar9->FloatStorage).Float10;
    uStack_150._4_4_ = (float)(int)((ulonglong)dVar6 >> 0x20);
    dVar6 = (double)(pFVar9->FloatStorage).Float03;
    local_148 = (double)(pFVar9->FloatStorage).Float12;
    local_178._8_4_ = SUB84(dVar4,0);
    local_178._0_8_ = (double)(pFVar9->FloatStorage).Float00;
    local_178._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_168._8_4_ = SUB84(dVar6,0);
    local_168._0_8_ = (double)(pFVar9->FloatStorage).Float02;
    local_168._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_178,aTStack_140);
    fVar11 = (float)local_158._0_4_;
    fVar12 = (float)local_158._4_4_;
    fVar13 = (float)uStack_150;
    fVar14 = uStack_150._4_4_;
    uVar15 = (undefined4)local_148;
    uVar16 = local_148._4_4_;
  }
  dVar4 = (double)CONCAT44(fVar14,fVar13);
  dVar6 = (double)CONCAT44(uVar16,uVar15);
  auVar7 = (undefined1  [8])CONCAT44(fVar12,fVar11);
LAB_14a3910bb:
  UControlRig::GetControlSpecifiedEulerAngle
            (param_1,(TVector<double> *)&local_108._s_0,param_2,false);
  param_3->T_X = (double)auVar7;
  param_3->T_Y = dVar4;
  param_3->T_Z = dVar6;
  param_3->R_X = local_108._s_0.X;
  param_3->R_Y = local_108._s_0.Y;
  param_3->R_Z = local_108._s_0.Z;
  param_3->S_X = (double)uVar10;
  param_3->S_Y = (double)uVar2;
  param_3->S_Z = (double)uVar3;
  return;
}

// TryCacheInitialValues<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector> @ 14a3b1960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FControlRigInitialValueProcessor::
TryCacheInitialValues<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector>
          (FControlRigInitialValueProcessor *this,FEntityAllocation *param_1,
          TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  int iVar5;
  uchar *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  FRigControlElement *pFVar15;
  ulonglong uVar16;
  UControlRig *pUVar17;
  FRigControlValue *pFVar18;
  FComponentHeader *pFVar19;
  FComponentHeader *pFVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  FComponentHeader *pFVar26;
  undefined1 auStackY_268 [32];
  ERigControlValueType local_238 [4];
  undefined2 local_234 [2];
  undefined1 local_230 [8];
  FWeakObjectPtr local_228;
  FControlRigInitialValueProcessor *local_220;
  FComponentHeader *local_218;
  FComponentHeader *local_210;
  FRigControlElement *local_208;
  EComponentHeaderLockMode local_200;
  EComponentHeaderLockMode local_1fc;
  ulonglong local_1f8;
  uchar *local_1f0;
  uchar *local_1e8;
  undefined8 local_1e0;
  TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FFloatIntermediateVector>_>
  local_1d0;
  TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType_const_&,unsigned_short_const_&>
  local_1b0;
  FSparseArrayAllocationInfo local_1a0;
  FWeakObjectPtr *local_190;
  undefined2 *local_188;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FInitialValueIndex>_> local_180;
  FRigControlValue local_160;
  FRigControlValue local_dc;
  FWeakObjectPtr local_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_220 = this;
  FEntityAllocation::TryWriteComponents<UE::MovieScene::FFloatIntermediateVector>
            (param_1,&local_1d0,param_2,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  lVar24 = local_1d0._24_8_;
  if (local_1d0._24_8_ == 0) {
    bVar12 = false;
  }
  else {
    if (this->InitialValueCache == (FInitialValueCache *)0x0) {
      pFVar15 = (FRigControlElement *)0x0;
    }
    else {
      pFVar15 = (FRigControlElement *)
                FInitialValueCache::
                GetStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                          (this->InitialValueCache,(FComponentTypeID)param_2);
    }
    pFVar20 = param_1->ComponentHeaders;
    pFVar26 = pFVar20 + param_1->NumComponents;
    for (; local_208 = pFVar15, pFVar20 != pFVar26; pFVar20 = pFVar20 + 1) {
      local_218 = pFVar20;
      if ((TComponentTypeID<UE::MovieScene::FControlRigSourceData>)(pFVar20->ComponentType).Value ==
          this->ControlRigComponents->ControlRigSource) goto LAB_14a3b1a55;
    }
    pFVar20 = (FComponentHeader *)0x0;
    local_218 = (FComponentHeader *)0x0;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Header",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                        ,0x2cd,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      uVar13 = (*pcVar7)();
      return (bool)uVar13;
    }
LAB_14a3b1a55:
    local_1fc = param_1->LockMode;
    if (local_1fc == Mutex) {
      AcquireSRWLockShared((PSRWLOCK)&pFVar20->ReadWriteLock);
    }
    LOCK();
    pFVar20->ScheduledAccessCount = (atomic<int>)((int)pFVar20->ScheduledAccessCount + 1);
    UNLOCK();
    pFVar26 = param_1->ComponentHeaders;
    local_1e8 = pFVar20->Components;
    pFVar19 = pFVar26 + param_1->NumComponents;
    for (; pFVar26 != pFVar19; pFVar26 = pFVar26 + 1) {
      local_210 = pFVar26;
      if ((TComponentTypeID<FName>)(pFVar26->ComponentType).Value ==
          this->TracksComponents->GenericParameterName) goto LAB_14a3b1ae7;
    }
    pFVar26 = (FComponentHeader *)0x0;
    local_210 = (FComponentHeader *)0x0;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Header",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                        ,0x2cd,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      uVar13 = (*pcVar7)();
      return (bool)uVar13;
    }
LAB_14a3b1ae7:
    local_200 = param_1->LockMode;
    if (local_200 == Mutex) {
      AcquireSRWLockShared((PSRWLOCK)&pFVar26->ReadWriteLock);
    }
    LOCK();
    pFVar26->ScheduledAccessCount = (atomic<int>)((int)pFVar26->ScheduledAccessCount + 1);
    UNLOCK();
    puVar6 = pFVar26->Components;
    uVar16 = (ulonglong)param_1->Size;
    local_1f8 = uVar16;
    local_1f0 = puVar6;
    if (pFVar15 == (FRigControlElement *)0x0) {
      iVar14 = 0;
      if (uVar16 != 0) {
        lVar22 = 0;
        lVar21 = 0;
        do {
          pUVar17 = UMovieSceneControlRigParameterEvaluatorSystem::GetRigFromTrack
                              (this->ParameterSystem,
                               *(UMovieSceneControlRigParameterTrack **)(local_1e8 + lVar22 * 8));
          if ((pUVar17 != (UControlRig *)0x0) &&
             (pFVar15 = (FRigControlElement *)
                        (**(code **)(pUVar17->_padding_ + 0x3c8))
                                  (pUVar17,puVar6 + (longlong)iVar14 * 8),
             pFVar15 != (FRigControlElement *)0x0)) {
            local_238[1] = 1;
            pFVar18 = UControlRig::GetControlValue(pUVar17,&local_dc,pFVar15,local_238 + 1);
            local_1e0._0_4_ = (pFVar18->FloatStorage).Float00;
            local_1e0._4_4_ = (pFVar18->FloatStorage).Float01;
            fVar4 = (pFVar18->FloatStorage).Float02;
            *(double *)(lVar21 + lVar24) = (double)(float)(undefined4)local_1e0;
            *(double *)(lVar21 + 8 + lVar24) = (double)(float)local_1e0._4_4_;
            *(double *)(lVar21 + 0x10 + lVar24) = (double)fVar4;
            *(undefined8 *)(lVar21 + 0x18 + lVar24) = 0;
            lVar24 = local_1d0._24_8_;
          }
          iVar14 = iVar14 + 1;
          lVar22 = lVar22 + 1;
          lVar21 = lVar21 + 0x20;
          pFVar20 = local_218;
          this = local_220;
          pFVar26 = local_210;
        } while (lVar22 < (longlong)uVar16);
      }
    }
    else {
      FEntityAllocation::WriteComponents<UE::MovieScene::FInitialValueIndex>
                (param_1,&local_180,this->BuiltInComponents->InitialValueIndex,
                 (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
      pFVar15 = local_208;
      local_230._4_4_ = 0;
      if (local_1f8 != 0) {
        lVar22 = 0;
        lVar21 = 0;
        do {
          uVar11 = local_230._4_4_;
          pUVar17 = UMovieSceneControlRigParameterEvaluatorSystem::GetRigFromTrack
                              (this->ParameterSystem,
                               *(UMovieSceneControlRigParameterTrack **)(local_1e8 + lVar22 * 8));
          lVar23 = lVar24;
          if (pUVar17 != (UControlRig *)0x0) {
            puVar6 = local_1f0 + (longlong)(int)uVar11 * 8;
            local_208 = (FRigControlElement *)
                        (**(code **)(pUVar17->_padding_ + 0x3c8))(pUVar17,puVar6);
            this = local_220;
            if (local_208 != (FRigControlElement *)0x0) {
              TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
              ::FindPropertyIndex((TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                                   *)pFVar15,(UObject *)local_230,(FName *)pUVar17);
              if (local_230[2] == '\0') {
                local_238[0] = Current;
                pFVar18 = UControlRig::GetControlValue(pUVar17,&local_160,local_208,local_238);
                lVar23 = local_1d0._24_8_;
                lVar25 = (longlong)(int)uVar11 * 0x20;
                local_1e0._0_4_ = (pFVar18->FloatStorage).Float00;
                local_1e0._4_4_ = (pFVar18->FloatStorage).Float01;
                fVar4 = (pFVar18->FloatStorage).Float02;
                *(double *)(lVar21 + lVar24) = (double)(float)(undefined4)local_1e0;
                *(double *)(lVar21 + 8 + lVar24) = (double)(float)local_1e0._4_4_;
                *(double *)(lVar21 + 0x10 + lVar24) = (double)fVar4;
                *(undefined8 *)(lVar21 + 0x18 + lVar24) = 0;
                local_58.ObjectIndex = 0;
                local_58.ObjectSerialNumber = 0;
                if (GC::GIsIncrementalReachabilityPending != false) {
                  GC::MarkAsReachable((UObject *)pUVar17);
                }
                local_228.ObjectIndex = 0;
                local_228.ObjectSerialNumber = 0;
                local_1b0.Value = (ushort *)pUVar17;
                if (GC::GIsIncrementalReachabilityPending != false) {
                  GC::MarkAsReachable((UObject *)pUVar17);
                }
                FWeakObjectPtr::operator=(&local_228,(FObjectPtr)&local_1b0.Value);
                local_58 = local_228;
                local_50 = *(undefined8 *)puVar6;
                local_48 = 2;
                if (*(int *)&pFVar15->field_0x3c == 0) {
                  iVar14 = Core::Private::
                           ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x20,8,1,(ForAnyElementType *)&pFVar15->field_0x8,
                                      (int *)&pFVar15->field_0x10,(int *)&pFVar15->field_0x14);
                  TBitArray<FDefaultBitArrayAllocator>::Add
                            ((TBitArray<FDefaultBitArrayAllocator> *)&pFVar15->field_0x18,false);
                }
                else {
                  iVar14 = *(int *)&pFVar15->field_0x38;
                  iVar5 = *(int *)((longlong)iVar14 * 0x20 + 4 + *(longlong *)&pFVar15->field_0x8);
                  iVar1 = *(int *)&pFVar15->field_0x3c + -1;
                  *(int *)&pFVar15->field_0x38 = iVar5;
                  *(int *)&pFVar15->field_0x3c = iVar1;
                  if (iVar1 != 0) {
                    *(undefined4 *)((longlong)iVar5 * 0x20 + *(longlong *)&pFVar15->field_0x8) =
                         0xffffffff;
                  }
                }
                TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::AllocateIndex
                          ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)
                           &pFVar15->field_0x8,&local_1a0,iVar14);
                iVar14 = local_1a0.Index;
                if (local_1a0.Pointer != (undefined8 *)0x0) {
                  puVar2 = (undefined8 *)(lVar25 + lVar23);
                  uVar8 = puVar2[1];
                  *(undefined8 *)local_1a0.Pointer = *puVar2;
                  *(undefined8 *)((longlong)local_1a0.Pointer + 8) = uVar8;
                  puVar2 = (undefined8 *)(lVar25 + 0x10 + lVar23);
                  uVar8 = puVar2[1];
                  *(undefined8 *)((longlong)local_1a0.Pointer + 0x10) = *puVar2;
                  *(undefined8 *)((longlong)local_1a0.Pointer + 0x18) = uVar8;
                }
                if ((0xfffe < local_1a0.Index) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("NewIndex < int32(uint16(0xFFFF))",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneInitialValueCache.h"
                                        ,0x184,L""), bVar12)) {
                  pcVar7 = (code *)swi(3);
                  uVar13 = (*pcVar7)();
                  return (bool)uVar13;
                }
                local_190 = &local_58;
                local_234[0] = (undefined2)iVar14;
                local_188 = local_234;
                TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType_const_&,unsigned_short_const_&>_>
                          ((TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                            *)&pFVar15->field_0x40,&local_1b0,(bool *)&local_190);
                *(undefined2 *)(local_180._24_8_ + lVar22 * 2) = local_234[0];
                this = local_220;
              }
              else {
                puVar2 = (undefined8 *)
                         ((ulonglong)(ushort)local_230._0_2_ * 0x20 +
                         *(longlong *)&pFVar15->field_0x8);
                uVar8 = puVar2[1];
                puVar3 = (undefined8 *)
                         ((ulonglong)(ushort)local_230._0_2_ * 0x20 + 0x10 +
                         *(longlong *)&pFVar15->field_0x8);
                uVar9 = *puVar3;
                uVar10 = puVar3[1];
                *(undefined8 *)(lVar21 + lVar24) = *puVar2;
                ((undefined8 *)(lVar21 + lVar24))[1] = uVar8;
                puVar2 = (undefined8 *)(lVar21 + 0x10 + lVar24);
                *puVar2 = uVar9;
                puVar2[1] = uVar10;
                this = local_220;
              }
            }
          }
          lVar22 = lVar22 + 1;
          local_230._4_4_ = local_230._4_4_ + 1;
          lVar21 = lVar21 + 0x20;
          pFVar20 = local_218;
          lVar24 = lVar23;
          pFVar26 = local_210;
        } while (lVar22 < (longlong)local_1f8);
      }
      if (local_180._0_8_ != 0) {
        if ((ulonglong)local_180._8_8_ < *(ulonglong *)(local_180._0_8_ + 0x28)) {
          local_180._8_8_ = *(ulonglong *)(local_180._0_8_ + 0x28);
        }
        *(undefined8 *)(local_180._0_8_ + 0x28) = local_180._8_8_;
        LOCK();
        *(int *)(local_180._0_8_ + 0x30) = *(int *)(local_180._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_180._16_4_ == 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)(local_180._0_8_ + 0x20));
        }
      }
    }
    LOCK();
    pFVar26->ScheduledAccessCount = (atomic<int>)((int)pFVar26->ScheduledAccessCount + -1);
    UNLOCK();
    bVar12 = true;
    if (local_200 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar26->ReadWriteLock);
    }
    LOCK();
    pFVar20->ScheduledAccessCount = (atomic<int>)((int)pFVar20->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_1fc == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar20->ReadWriteLock);
    }
  }
  if (local_1d0._0_8_ != 0) {
    if ((ulonglong)local_1d0._8_8_ < *(ulonglong *)(local_1d0._0_8_ + 0x28)) {
      local_1d0._8_8_ = *(ulonglong *)(local_1d0._0_8_ + 0x28);
    }
    *(undefined8 *)(local_1d0._0_8_ + 0x28) = local_1d0._8_8_;
    LOCK();
    *(int *)(local_1d0._0_8_ + 0x30) = *(int *)(local_1d0._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_1d0._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_1d0._0_8_ + 0x20));
    }
  }
  return bVar12;
}

// TryCacheInitialValues<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,FEulerTransform,UE::MovieScene::FIntermediate3DTransform> @ 14a3b1fa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FControlRigInitialValueProcessor::
TryCacheInitialValues<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,FEulerTransform,UE::MovieScene::FIntermediate3DTransform>
          (FControlRigInitialValueProcessor *this,FEntityAllocation *param_1,
          TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> param_2)

{
  undefined8 *puVar1;
  FIntermediate3DTransform *pFVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  EComponentHeaderLockMode EVar5;
  EComponentHeaderLockMode EVar6;
  uchar *puVar7;
  uchar *puVar8;
  longlong lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  undefined1 uVar19;
  FInitialValueIndex FVar20;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  *pTVar21;
  UControlRig *pUVar22;
  FRigControlElement *pFVar23;
  ulonglong uVar24;
  undefined6 extraout_var;
  FComponentHeader *pFVar25;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  *pTVar26;
  undefined2 *puVar27;
  int iVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  *pTVar31;
  ushort local_res20;
  char local_res22;
  FComponentHeader *local_b8;
  FComponentHeader *local_b0;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  FEntityAllocation::TryWriteComponents<UE::MovieScene::FIntermediate3DTransform>
            (param_1,(TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FIntermediate3DTransform>_>
                      *)local_78,param_2,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  if ((undefined8 *)local_78._24_8_ == (undefined8 *)0x0) {
    bVar18 = false;
  }
  else {
    pTVar26 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
               *)0x0;
    pTVar21 = pTVar26;
    if (this->InitialValueCache != (FInitialValueCache *)0x0) {
      pTVar21 = FInitialValueCache::
                GetStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                          (this->InitialValueCache,(FComponentTypeID)param_2);
    }
    local_b8 = param_1->ComponentHeaders;
    pFVar25 = local_b8 + param_1->NumComponents;
    for (; local_b8 != pFVar25; local_b8 = local_b8 + 1) {
      if ((TComponentTypeID<UE::MovieScene::FControlRigSourceData>)(local_b8->ComponentType).Value
          == this->ControlRigComponents->ControlRigSource) goto LAB_14a3b208a;
    }
    local_b8 = (FComponentHeader *)0x0;
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Header",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                        ,0x2cd,L"");
    if (bVar18) {
      pcVar10 = (code *)swi(3);
      uVar19 = (*pcVar10)();
      return (bool)uVar19;
    }
LAB_14a3b208a:
    EVar5 = param_1->LockMode;
    if (EVar5 == Mutex) {
      AcquireSRWLockShared((PSRWLOCK)&local_b8->ReadWriteLock);
    }
    LOCK();
    local_b8->ScheduledAccessCount = (atomic<int>)((int)local_b8->ScheduledAccessCount + 1);
    UNLOCK();
    local_b0 = param_1->ComponentHeaders;
    puVar7 = local_b8->Components;
    pFVar25 = local_b0 + param_1->NumComponents;
    for (; local_b0 != pFVar25; local_b0 = local_b0 + 1) {
      if ((TComponentTypeID<FName>)(local_b0->ComponentType).Value ==
          this->TracksComponents->GenericParameterName) goto LAB_14a3b2115;
    }
    local_b0 = (FComponentHeader *)0x0;
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Header",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                        ,0x2cd,L"");
    if (bVar18) {
      pcVar10 = (code *)swi(3);
      uVar19 = (*pcVar10)();
      return (bool)uVar19;
    }
LAB_14a3b2115:
    EVar6 = param_1->LockMode;
    if (EVar6 == Mutex) {
      AcquireSRWLockShared((PSRWLOCK)&local_b0->ReadWriteLock);
    }
    LOCK();
    local_b0->ScheduledAccessCount = (atomic<int>)((int)local_b0->ScheduledAccessCount + 1);
    UNLOCK();
    puVar8 = local_b0->Components;
    uVar29 = (ulonglong)param_1->Size;
    if (pTVar21 ==
        (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
         *)0x0) {
      pTVar21 = pTVar26;
      if (uVar29 != 0) {
        do {
          pUVar22 = UMovieSceneControlRigParameterEvaluatorSystem::GetRigFromTrack
                              (this->ParameterSystem,
                               *(UMovieSceneControlRigParameterTrack **)
                                (puVar7 + (longlong)pTVar26 * 8));
          iVar28 = (int)pTVar21;
          if ((pUVar22 != (UControlRig *)0x0) &&
             (pFVar23 = (FRigControlElement *)
                        (**(code **)(pUVar22->_padding_ + 0x3c8))
                                  (pUVar22,puVar8 + (longlong)iVar28 * 8),
             pFVar23 != (FRigControlElement *)0x0)) {
            ControlValueToInitialValue<FEulerTransform,UE::MovieScene::FIntermediate3DTransform>
                      (this,pUVar22,pFVar23,
                       (FIntermediate3DTransform *)(local_78._24_8_ + (longlong)iVar28 * 9 * 8));
          }
          pTVar26 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                     *)((longlong)&pTVar26->_padding_ + 1);
          pTVar21 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                     *)(ulonglong)(iVar28 + 1);
        } while ((longlong)pTVar26 < (longlong)uVar29);
      }
    }
    else {
      FEntityAllocation::WriteComponents<UE::MovieScene::FInitialValueIndex>
                (param_1,(TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FInitialValueIndex>_>
                          *)local_58,this->BuiltInComponents->InitialValueIndex,
                 (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
      puVar27 = (undefined2 *)local_58._24_8_;
      puVar30 = (undefined8 *)local_78._24_8_;
      pTVar31 = pTVar26;
      if (uVar29 != 0) {
        do {
          pUVar22 = UMovieSceneControlRigParameterEvaluatorSystem::GetRigFromTrack
                              (this->ParameterSystem,
                               *(UMovieSceneControlRigParameterTrack **)
                                (puVar7 + (longlong)pTVar31 * 8));
          iVar28 = (int)pTVar26;
          if ((pUVar22 != (UControlRig *)0x0) &&
             (pFVar23 = (FRigControlElement *)
                        (**(code **)(pUVar22->_padding_ + 0x3c8))
                                  (pUVar22,puVar8 + (longlong)iVar28 * 8),
             pFVar23 != (FRigControlElement *)0x0)) {
            TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
            ::FindPropertyIndex(pTVar21,(UObject *)&local_res20,(FName *)pUVar22);
            if (local_res22 == '\0') {
              pFVar2 = (FIntermediate3DTransform *)(local_78._24_8_ + (longlong)iVar28 * 9 * 8);
              ControlValueToInitialValue<FEulerTransform,UE::MovieScene::FIntermediate3DTransform>
                        (this,pUVar22,pFVar23,pFVar2);
              FVar20 = TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                       ::AddInitialValue(pTVar21,(UObject *)&stack0x00000008,
                                         (FIntermediate3DTransform *)pUVar22,(FName *)pFVar2);
              *puVar27 = *(undefined2 *)CONCAT62(extraout_var,FVar20.Index);
            }
            else {
              uVar24 = (ulonglong)local_res20;
              lVar9 = *(longlong *)&pTVar21->PropertyValues;
              puVar1 = (undefined8 *)(lVar9 + uVar24 * 0x48);
              uVar11 = puVar1[1];
              puVar3 = (undefined8 *)(lVar9 + 0x10 + uVar24 * 0x48);
              uVar12 = *puVar3;
              uVar13 = puVar3[1];
              puVar3 = (undefined8 *)(lVar9 + 0x20 + uVar24 * 0x48);
              uVar14 = *puVar3;
              uVar15 = puVar3[1];
              puVar3 = (undefined8 *)(lVar9 + 0x30 + uVar24 * 0x48);
              uVar16 = *puVar3;
              uVar17 = puVar3[1];
              uVar4 = *(undefined8 *)(lVar9 + 0x40 + uVar24 * 0x48);
              *puVar30 = *puVar1;
              puVar30[1] = uVar11;
              puVar30[2] = uVar12;
              puVar30[3] = uVar13;
              puVar30[4] = uVar14;
              puVar30[5] = uVar15;
              puVar30[6] = uVar16;
              puVar30[7] = uVar17;
              puVar30[8] = uVar4;
            }
          }
          pTVar26 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                     *)(ulonglong)(iVar28 + 1);
          pTVar31 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                     *)((longlong)&pTVar31->_padding_ + 1);
          puVar27 = puVar27 + 1;
          puVar30 = puVar30 + 9;
        } while ((longlong)pTVar31 < (longlong)uVar29);
      }
      if (local_58._0_8_ != 0) {
        if ((ulonglong)local_58._8_8_ < *(ulonglong *)(local_58._0_8_ + 0x28)) {
          local_58._8_8_ = *(ulonglong *)(local_58._0_8_ + 0x28);
        }
        *(undefined8 *)(local_58._0_8_ + 0x28) = local_58._8_8_;
        LOCK();
        *(int *)(local_58._0_8_ + 0x30) = *(int *)(local_58._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_58._16_4_ == 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)(local_58._0_8_ + 0x20));
        }
      }
    }
    LOCK();
    local_b0->ScheduledAccessCount = (atomic<int>)((int)local_b0->ScheduledAccessCount + -1);
    UNLOCK();
    bVar18 = true;
    if (EVar6 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_b0->ReadWriteLock);
    }
    LOCK();
    local_b8->ScheduledAccessCount = (atomic<int>)((int)local_b8->ScheduledAccessCount + -1);
    UNLOCK();
    if (EVar5 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_b8->ReadWriteLock);
    }
  }
  if (local_78._0_8_ != 0) {
    if ((ulonglong)local_78._8_8_ < *(ulonglong *)(local_78._0_8_ + 0x28)) {
      local_78._8_8_ = *(ulonglong *)(local_78._0_8_ + 0x28);
    }
    *(undefined8 *)(local_78._0_8_ + 0x28) = local_78._8_8_;
    LOCK();
    *(int *)(local_78._0_8_ + 0x30) = *(int *)(local_78._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_78._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_78._0_8_ + 0x20));
    }
  }
  return bVar18;
}

// TryCacheInitialValues<UE::MovieScene::FFloatPropertyTraits,float,double> @ 14a3b2430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FControlRigInitialValueProcessor::
TryCacheInitialValues<UE::MovieScene::FFloatPropertyTraits,float,double>
          (FControlRigInitialValueProcessor *this,FEntityAllocation *param_1,
          TComponentTypeID<double> param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *pTVar11;
  UControlRig *pUVar12;
  FRigControlElement *pFVar13;
  FRigControlValue *pFVar14;
  ulonglong uVar15;
  TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *pTVar16;
  double *pdVar17;
  FControlRigInitialValueProcessor *pFVar18;
  longlong lVar19;
  TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *pTVar20;
  int iVar21;
  TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *pTVar22;
  undefined1 auStackY_258 [32];
  ERigControlValueType local_228 [4];
  undefined2 local_224 [2];
  undefined1 local_220 [16];
  FControlRigInitialValueProcessor *local_210;
  FWeakObjectPtr local_208;
  longlong local_200;
  TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *local_1f8;
  TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *local_1f0;
  UControlRig *local_1e8;
  EComponentHeaderLockMode local_1dc;
  EComponentHeaderLockMode local_1d8;
  longlong local_1d0;
  undefined1 local_1c8 [16];
  ulonglong local_1b8;
  int local_1b0;
  double *local_1a8;
  FSparseArrayAllocationInfo local_1a0;
  FWeakObjectPtr *local_190;
  undefined2 *local_188;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FInitialValueIndex>_> local_180;
  FRigControlValue local_160;
  FRigControlValue local_dc;
  FWeakObjectPtr local_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_210 = this;
  FEntityAllocation::TryWriteComponents<double>
            (param_1,(TComponentLock<UE::MovieScene::TWriteOptional<double>_> *)(local_1c8 + 8),
             param_2,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  if (local_1a8 == (double *)0x0) {
    bVar8 = false;
  }
  else {
    pTVar16 = (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)0x0;
    pTVar11 = pTVar16;
    if (this->InitialValueCache != (FInitialValueCache *)0x0) {
      pTVar11 = FInitialValueCache::GetStorage<UE::MovieScene::FFloatPropertyTraits>
                          (this->InitialValueCache,(FComponentTypeID)param_2);
    }
    local_1f8 = (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)
                param_1->ComponentHeaders;
    plVar6 = &local_1f8->_padding_;
    for (; local_220._8_8_ = pTVar11,
        local_1f8 !=
        (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)
        (plVar6 + (ulonglong)param_1->NumComponents * 7);
        local_1f8 = (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)
                    &(local_1f8->PropertyValues).field_0x30) {
      pTVar22 = local_1f8;
      if (*(TComponentTypeID<UE::MovieScene::FControlRigSourceData> *)
           &(local_1f8->PropertyValues).field_0x2e == this->ControlRigComponents->ControlRigSource)
      goto LAB_14a3b252f;
    }
    local_1f8 = (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)0x0;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Header",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0x2cd,L"");
    pTVar22 = pTVar16;
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
LAB_14a3b252f:
    local_1d8 = param_1->LockMode;
    if (local_1d8 == Mutex) {
      AcquireSRWLockShared((PSRWLOCK)&(pTVar22->PropertyValues).field_0x18);
    }
    LOCK();
    puVar1 = &(pTVar22->PropertyValues).field_0x28;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    UNLOCK();
    local_1d0 = *(longlong *)&(pTVar22->PropertyValues).field_0x10;
    local_1f0 = (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)
                param_1->ComponentHeaders;
    plVar6 = &local_1f0->_padding_;
    for (; local_1f0 !=
           (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)
           (plVar6 + (ulonglong)param_1->NumComponents * 7);
        local_1f0 = (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)
                    &(local_1f0->PropertyValues).field_0x30) {
      pTVar20 = local_1f0;
      if (*(TComponentTypeID<FName> *)&(local_1f0->PropertyValues).field_0x2e ==
          this->TracksComponents->GenericParameterName) goto LAB_14a3b25bc;
    }
    local_1f0 = (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)0x0;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Header",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0x2cd,L"");
    pTVar20 = pTVar16;
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
LAB_14a3b25bc:
    local_1dc = param_1->LockMode;
    if (local_1dc == Mutex) {
      AcquireSRWLockShared((PSRWLOCK)&(pTVar20->PropertyValues).field_0x18);
    }
    pFVar18 = local_210;
    LOCK();
    puVar1 = &(pTVar20->PropertyValues).field_0x28;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    UNLOCK();
    local_200 = *(longlong *)&(pTVar20->PropertyValues).field_0x10;
    uVar2 = param_1->Size;
    uVar15 = (ulonglong)uVar2;
    if (pTVar11 == (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)0x0) {
      if (uVar15 != 0) {
        lVar19 = local_1d0 - (longlong)local_1a8;
        pdVar17 = local_1a8;
        pTVar11 = pTVar16;
        do {
          pUVar12 = UMovieSceneControlRigParameterEvaluatorSystem::GetRigFromTrack
                              (pFVar18->ParameterSystem,
                               *(UMovieSceneControlRigParameterTrack **)((longlong)pdVar17 + lVar19)
                              );
          if ((pUVar12 != (UControlRig *)0x0) &&
             (pFVar13 = (FRigControlElement *)
                        (**(code **)(pUVar12->_padding_ + 0x3c8))
                                  (pUVar12,local_200 + (longlong)(int)pTVar11 * 8),
             pFVar13 != (FRigControlElement *)0x0)) {
            local_228[1] = 1;
            pFVar14 = UControlRig::GetControlValue(pUVar12,&local_dc,pFVar13,local_228 + 1);
            *pdVar17 = (double)(pFVar14->FloatStorage).Float00;
          }
          pTVar11 = (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)
                    (ulonglong)((int)pTVar11 + 1);
          pTVar16 = (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)
                    ((longlong)&pTVar16->_padding_ + 1);
          pdVar17 = pdVar17 + 1;
          pTVar20 = local_1f0;
          pTVar22 = local_1f8;
        } while ((longlong)pTVar16 < (longlong)uVar15);
      }
    }
    else {
      FEntityAllocation::WriteComponents<UE::MovieScene::FInitialValueIndex>
                (param_1,&local_180,local_210->BuiltInComponents->InitialValueIndex,
                 (FEntityAllocationWriteContext)(local_210->WriteContext).SystemSerial);
      if (uVar15 != 0) {
        pTVar11 = pTVar16;
        do {
          pUVar12 = UMovieSceneControlRigParameterEvaluatorSystem::GetRigFromTrack
                              (pFVar18->ParameterSystem,
                               *(UMovieSceneControlRigParameterTrack **)
                                (local_1d0 + (longlong)pTVar16 * 8));
          iVar21 = (int)pTVar11;
          if ((pUVar12 != (UControlRig *)0x0) &&
             (pFVar13 = (FRigControlElement *)
                        (**(code **)(pUVar12->_padding_ + 0x3c8))
                                  (pUVar12,local_200 + (longlong)iVar21 * 8), pFVar18 = local_210,
             pFVar13 != (FRigControlElement *)0x0)) {
            TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FindPropertyIndex
                      ((TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)
                       local_220._8_8_,(UObject *)local_220,(FName *)pUVar12);
            if (local_220[2] == '\0') {
              local_228[0] = Current;
              pFVar14 = UControlRig::GetControlValue(pUVar12,&local_160,pFVar13,local_228);
              local_58.ObjectIndex = 0;
              local_58.ObjectSerialNumber = 0;
              local_1a8[(longlong)pTVar16] = (double)(pFVar14->FloatStorage).Float00;
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable((UObject *)pUVar12);
              }
              local_208.ObjectIndex = 0;
              local_208.ObjectSerialNumber = 0;
              local_1e8 = pUVar12;
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable((UObject *)pUVar12);
              }
              FWeakObjectPtr::operator=(&local_208,(FObjectPtr)&local_1e8);
              uVar7 = local_220._8_8_;
              local_58 = local_208;
              iVar3 = *(int *)&((TSparseArray<double,FDefaultSparseArrayAllocator> *)
                               (local_220._8_8_ + 8))->field_0x34;
              local_48 = 2;
              local_50 = *(undefined8 *)(local_200 + (longlong)iVar21 * 8);
              if (iVar3 == 0) {
                iVar10 = Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (8,8,1,(ForAnyElementType *)(local_220._8_8_ + 8),
                                    (int *)&((TSparseArray<double,FDefaultSparseArrayAllocator> *)
                                            (local_220._8_8_ + 8))->field_0x8,
                                    (int *)&((TSparseArray<double,FDefaultSparseArrayAllocator> *)
                                            (local_220._8_8_ + 8))->field_0xc);
                TBitArray<FDefaultBitArrayAllocator>::Add
                          ((TBitArray<FDefaultBitArrayAllocator> *)
                           &((TSparseArray<double,FDefaultSparseArrayAllocator> *)(uVar7 + 8))->
                            field_0x10,false);
              }
              else {
                iVar10 = *(int *)&((TSparseArray<double,FDefaultSparseArrayAllocator> *)
                                  (local_220._8_8_ + 8))->field_0x30;
                iVar3 = iVar3 + -1;
                lVar19 = *(longlong *)(local_220._8_8_ + 8);
                iVar4 = *(int *)(lVar19 + 4 + (longlong)iVar10 * 8);
                *(int *)&((TSparseArray<double,FDefaultSparseArrayAllocator> *)(local_220._8_8_ + 8)
                         )->field_0x30 = iVar4;
                *(int *)&((TSparseArray<double,FDefaultSparseArrayAllocator> *)(local_220._8_8_ + 8)
                         )->field_0x34 = iVar3;
                if (iVar3 != 0) {
                  *(undefined4 *)(lVar19 + (longlong)iVar4 * 8) = 0xffffffff;
                }
              }
              TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::AllocateIndex
                        ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)(uVar7 + 8),
                         &local_1a0,iVar10);
              iVar3 = local_1a0.Index;
              if (local_1a0.Pointer != (double *)0x0) {
                *(double *)local_1a0.Pointer = local_1a8[iVar21];
              }
              if ((0xfffe < local_1a0.Index) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NewIndex < int32(uint16(0xFFFF))",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneInitialValueCache.h"
                                     ,0x184,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
              local_190 = &local_58;
              local_188 = local_224;
              local_224[0] = (undefined2)iVar3;
              TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType_const_&,unsigned_short_const_&>_>
                        ((TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
                          *)(local_220._8_8_ + 0x40),
                         (TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FKeyType_const_&,unsigned_short_const_&>
                          *)local_1c8,(bool *)&local_190);
              *(undefined2 *)(local_180._24_8_ + (longlong)pTVar16 * 2) = local_224[0];
              pFVar18 = local_210;
            }
            else {
              local_1a8[(longlong)pTVar16] =
                   *(double *)
                    (*(longlong *)(local_220._8_8_ + 8) + (ulonglong)(ushort)local_220._0_2_ * 8);
              pFVar18 = local_210;
            }
          }
          pTVar11 = (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)
                    (ulonglong)(iVar21 + 1);
          pTVar16 = (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)
                    ((longlong)&pTVar16->_padding_ + 1);
          pTVar20 = local_1f0;
          pTVar22 = local_1f8;
        } while ((longlong)pTVar16 < (longlong)(ulonglong)uVar2);
      }
      if (local_180._0_8_ != 0) {
        if ((ulonglong)local_180._8_8_ < *(ulonglong *)(local_180._0_8_ + 0x28)) {
          local_180._8_8_ = *(ulonglong *)(local_180._0_8_ + 0x28);
        }
        *(undefined8 *)(local_180._0_8_ + 0x28) = local_180._8_8_;
        LOCK();
        *(int *)(local_180._0_8_ + 0x30) = *(int *)(local_180._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_180._16_4_ == 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)(local_180._0_8_ + 0x20));
        }
      }
    }
    LOCK();
    puVar1 = &(pTVar20->PropertyValues).field_0x28;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    bVar8 = true;
    if (local_1dc == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&(pTVar20->PropertyValues).field_0x18);
    }
    LOCK();
    puVar1 = &(pTVar22->PropertyValues).field_0x28;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (local_1d8 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&(pTVar22->PropertyValues).field_0x18);
    }
  }
  if ((ushort *)local_1c8._8_8_ != (ushort *)0x0) {
    if (local_1b8 < *(ulonglong *)(local_1c8._8_8_ + 0x28)) {
      local_1b8 = *(ulonglong *)(local_1c8._8_8_ + 0x28);
    }
    *(ulonglong *)(local_1c8._8_8_ + 0x28) = local_1b8;
    LOCK();
    *(int *)(local_1c8._8_8_ + 0x30) = *(int *)(local_1c8._8_8_ + 0x30) + -1;
    UNLOCK();
    if (local_1b0 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_1c8._8_8_ + 0x20));
    }
  }
  return bVar8;
}

// TryInterrogateValues<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector> @ 14a3b29e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FControlRigInitialValueProcessor::
TryInterrogateValues<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector>
          (FControlRigInitialValueProcessor *this,FEntityAllocation *param_1,
          TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
  *this_00;
  FInterrogationChannelInfo *this_01;
  UControlRig *this_02;
  UClass *pUVar13;
  FRigControlElement *pFVar14;
  undefined8 *puVar15;
  FRigControlValue *pFVar16;
  FComponentHeader *pFVar17;
  atomic<int> *paVar18;
  undefined1 (*pauVar19) [16];
  FComponentHeader *pFVar20;
  longlong lVar21;
  ERigControlValueType local_res8 [8];
  ushort local_res20;
  char local_res22;
  FInterrogationChannel local_128 [2];
  EComponentHeaderLockMode local_120;
  uchar *local_118;
  TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
  *local_110;
  atomic<int> *local_108;
  undefined1 local_100 [48];
  FRigControlValue local_d0;
  
  FEntityAllocation::TryWriteComponents<UE::MovieScene::FFloatIntermediateVector>
            (param_1,(TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FFloatIntermediateVector>_>
                      *)local_100,param_2,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  if ((undefined1 (*) [16])local_100._24_8_ == (undefined1 (*) [16])0x0) {
    bVar11 = false;
  }
  else {
    pFVar20 = param_1->ComponentHeaders;
    pFVar17 = pFVar20 + param_1->NumComponents;
    uVar4 = param_1->Size;
    for (; pFVar20 != pFVar17; pFVar20 = pFVar20 + 1) {
      if ((TComponentTypeID<UE::MovieScene::FInterrogationKey>)(pFVar20->ComponentType).Value ==
          (this->BuiltInComponents->Interrogation).OutputKey) {
        if (pFVar20 == (FComponentHeader *)0x0) goto LAB_14a3b2a75;
        goto LAB_14a3b2aa0;
      }
    }
    pFVar20 = (FComponentHeader *)0x0;
LAB_14a3b2a75:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Header",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                        ,0x2cd,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
LAB_14a3b2aa0:
    local_120 = param_1->LockMode;
    if (local_120 == Mutex) {
      AcquireSRWLockShared((PSRWLOCK)&pFVar20->ReadWriteLock);
    }
    paVar18 = &pFVar20->ScheduledAccessCount;
    LOCK();
    *paVar18 = (atomic<int>)((int)*paVar18 + 1);
    UNLOCK();
    local_118 = pFVar20->Components;
    local_108 = paVar18;
    if (this->InitialValueCache == (FInitialValueCache *)0x0) {
      this_00 = (TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                 *)0x0;
    }
    else {
      this_00 = FInitialValueCache::
                GetStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                          (this->InitialValueCache,(FComponentTypeID)param_2);
    }
    local_110 = (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
                 *)(**(code **)*this->Interrogation)();
    lVar21 = 0;
    pauVar19 = (undefined1 (*) [16])local_100._24_8_;
    if ((ulonglong)uVar4 != 0) {
      do {
        local_128[0].Value = *(int *)(local_118 + lVar21 * 8);
        this_01 = TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
                  ::Find(local_110,local_128);
        if (this_01 != (FInterrogationChannelInfo *)0x0) {
          this_02 = (UControlRig *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
          if (this_02 == (UControlRig *)0x0) {
LAB_14a3b2b79:
            this_02 = (UControlRig *)0x0;
          }
          else {
            pUVar13 = Z_Construct_UClass_UControlRig_NoRegister();
            iVar5 = (int)pUVar13->_padding_;
            if ((*(int *)(this_02->_padding_ + 0x38) < iVar5) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
                &pUVar13->_padding_)) goto LAB_14a3b2b79;
          }
          if (((this_02 != (UControlRig *)0x0) &&
              ((this_01->PropertyBinding).PropertyName != (FName)0x0)) &&
             (pFVar14 = (FRigControlElement *)
                        (**(code **)(this_02->_padding_ + 0x3c8))(this_02,&this_01->PropertyBinding)
             , pFVar14 != (FRigControlElement *)0x0)) {
            if (this_00 !=
                (TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                 *)0x0) {
              TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
              ::FindPropertyIndex(this_00,(UObject *)&local_res20,(FName *)this_02);
              if (local_res22 == '\0') {
                puVar15 = (undefined8 *)0x0;
              }
              else {
                puVar15 = (undefined8 *)
                          ((ulonglong)local_res20 * 0x20 + *(longlong *)&this_00->PropertyValues);
              }
              if (puVar15 != (undefined8 *)0x0) {
                uVar8 = puVar15[1];
                uVar9 = puVar15[2];
                uVar10 = puVar15[3];
                *(undefined8 *)*pauVar19 = *puVar15;
                *(undefined8 *)(*pauVar19 + 8) = uVar8;
                *(undefined8 *)pauVar19[1] = uVar9;
                *(undefined8 *)(pauVar19[1] + 8) = uVar10;
                goto LAB_14a3b2c4a;
              }
            }
            local_res8[0] = Current;
            pFVar16 = UControlRig::GetControlValue(this_02,&local_d0,pFVar14,local_res8);
            uVar2 = (pFVar16->FloatStorage).Float00;
            uVar3 = (pFVar16->FloatStorage).Float01;
            fVar1 = (pFVar16->FloatStorage).Float02;
            auVar7._8_4_ = SUB84((double)(float)uVar3,0);
            auVar7._0_8_ = (double)(float)uVar2;
            auVar7._12_4_ = (int)((ulonglong)(double)(float)uVar3 >> 0x20);
            *pauVar19 = auVar7;
            *(double *)pauVar19[1] = (double)fVar1;
            *(undefined8 *)(pauVar19[1] + 8) = 0;
          }
        }
LAB_14a3b2c4a:
        lVar21 = lVar21 + 1;
        paVar18 = local_108;
        pauVar19 = pauVar19 + 2;
      } while (lVar21 < (longlong)(ulonglong)uVar4);
    }
    LOCK();
    *paVar18 = (atomic<int>)((int)*paVar18 + -1);
    UNLOCK();
    bVar11 = true;
    if (local_120 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar20->ReadWriteLock);
    }
  }
  if (local_100._0_8_ != 0) {
    if ((ulonglong)local_100._8_8_ < *(ulonglong *)(local_100._0_8_ + 0x28)) {
      local_100._8_8_ = *(ulonglong *)(local_100._0_8_ + 0x28);
    }
    *(undefined8 *)(local_100._0_8_ + 0x28) = local_100._8_8_;
    LOCK();
    *(int *)(local_100._0_8_ + 0x30) = *(int *)(local_100._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_100._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_100._0_8_ + 0x20));
    }
  }
  return bVar11;
}

// TryInterrogateValues<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,FEulerTransform,UE::MovieScene::FIntermediate3DTransform> @ 14a3b2d00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FControlRigInitialValueProcessor::
TryInterrogateValues<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,FEulerTransform,UE::MovieScene::FIntermediate3DTransform>
          (FControlRigInitialValueProcessor *this,FEntityAllocation *param_1,
          TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> param_2)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  *this_00;
  FInterrogationChannelInfo *this_01;
  UControlRig *pUVar13;
  UClass *pUVar14;
  FRigControlElement *pFVar15;
  FComponentHeader *pFVar16;
  undefined8 *puVar17;
  longlong lVar18;
  atomic<int> *paVar19;
  FComponentHeader *pFVar20;
  int iVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  ushort local_res20;
  char local_res22;
  FInterrogationChannel local_88 [2];
  EComponentHeaderLockMode local_80;
  uchar *local_78;
  ulonglong local_70;
  TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
  *local_68;
  atomic<int> *local_60;
  undefined1 local_58 [32];
  
  FEntityAllocation::TryWriteComponents<UE::MovieScene::FIntermediate3DTransform>
            (param_1,(TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FIntermediate3DTransform>_>
                      *)local_58,param_2,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  puVar23 = (undefined8 *)local_58._24_8_;
  if ((undefined8 *)local_58._24_8_ == (undefined8 *)0x0) {
    bVar11 = false;
  }
  else {
    pFVar20 = param_1->ComponentHeaders;
    pFVar16 = pFVar20 + param_1->NumComponents;
    uVar22 = (ulonglong)param_1->Size;
    for (; pFVar20 != pFVar16; pFVar20 = pFVar20 + 1) {
      if ((TComponentTypeID<UE::MovieScene::FInterrogationKey>)(pFVar20->ComponentType).Value ==
          (this->BuiltInComponents->Interrogation).OutputKey) {
        if (pFVar20 == (FComponentHeader *)0x0) goto LAB_14a3b2d91;
        goto LAB_14a3b2dbc;
      }
    }
    pFVar20 = (FComponentHeader *)0x0;
LAB_14a3b2d91:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Header",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                        ,0x2cd,L"");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      uVar12 = (*pcVar3)();
      return (bool)uVar12;
    }
LAB_14a3b2dbc:
    local_80 = param_1->LockMode;
    if (local_80 == Mutex) {
      AcquireSRWLockShared((PSRWLOCK)&pFVar20->ReadWriteLock);
    }
    paVar19 = &pFVar20->ScheduledAccessCount;
    LOCK();
    *paVar19 = (atomic<int>)((int)*paVar19 + 1);
    UNLOCK();
    local_78 = pFVar20->Components;
    local_60 = paVar19;
    if (this->InitialValueCache == (FInitialValueCache *)0x0) {
      this_00 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                 *)0x0;
    }
    else {
      this_00 = FInitialValueCache::
                GetStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                          (this->InitialValueCache,(FComponentTypeID)param_2);
    }
    local_68 = (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
                *)(**(code **)*this->Interrogation)();
    iVar21 = 0;
    lVar18 = 0;
    local_70 = uVar22;
    if (uVar22 != 0) {
      do {
        local_88[0].Value = *(int *)(local_78 + lVar18 * 8);
        this_01 = TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
                  ::Find(local_68,local_88);
        if (this_01 != (FInterrogationChannelInfo *)0x0) {
          pUVar13 = (UControlRig *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
          if (pUVar13 == (UControlRig *)0x0) {
LAB_14a3b2e98:
            pUVar13 = (UControlRig *)0x0;
          }
          else {
            pUVar14 = Z_Construct_UClass_UControlRig_NoRegister();
            iVar2 = (int)pUVar14->_padding_;
            if ((*(int *)(pUVar13->_padding_ + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar14->_padding_)) goto LAB_14a3b2e98;
          }
          if (((pUVar13 != (UControlRig *)0x0) &&
              ((this_01->PropertyBinding).PropertyName != (FName)0x0)) &&
             (pFVar15 = (FRigControlElement *)
                        (**(code **)(pUVar13->_padding_ + 0x3c8))(pUVar13,&this_01->PropertyBinding)
             , pFVar15 != (FRigControlElement *)0x0)) {
            if (this_00 !=
                (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                 *)0x0) {
              TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
              ::FindPropertyIndex(this_00,(UObject *)&local_res20,(FName *)pUVar13);
              if (local_res22 == '\0') {
                puVar17 = (undefined8 *)0x0;
              }
              else {
                puVar17 = (undefined8 *)
                          (*(longlong *)&this_00->PropertyValues + (ulonglong)local_res20 * 0x48);
              }
              if (puVar17 != (undefined8 *)0x0) {
                uVar4 = puVar17[1];
                uVar5 = puVar17[2];
                uVar6 = puVar17[3];
                uVar7 = puVar17[4];
                uVar8 = puVar17[5];
                uVar9 = puVar17[6];
                uVar10 = puVar17[7];
                uVar1 = puVar17[8];
                *puVar23 = *puVar17;
                puVar23[1] = uVar4;
                puVar23[2] = uVar5;
                puVar23[3] = uVar6;
                puVar23[4] = uVar7;
                puVar23[5] = uVar8;
                puVar23[6] = uVar9;
                puVar23[7] = uVar10;
                puVar23[8] = uVar1;
                goto LAB_14a3b2f5f;
              }
            }
            ControlValueToInitialValue<FEulerTransform,UE::MovieScene::FIntermediate3DTransform>
                      (this,pUVar13,pFVar15,
                       (FIntermediate3DTransform *)(local_58._24_8_ + (longlong)iVar21 * 9 * 8));
          }
        }
LAB_14a3b2f5f:
        iVar21 = iVar21 + 1;
        lVar18 = lVar18 + 1;
        puVar23 = puVar23 + 9;
        paVar19 = local_60;
      } while (lVar18 < (longlong)local_70);
    }
    LOCK();
    *paVar19 = (atomic<int>)((int)*paVar19 + -1);
    UNLOCK();
    bVar11 = true;
    if (local_80 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar20->ReadWriteLock);
    }
  }
  if (local_58._0_8_ != 0) {
    if ((ulonglong)local_58._8_8_ < *(ulonglong *)(local_58._0_8_ + 0x28)) {
      local_58._8_8_ = *(ulonglong *)(local_58._0_8_ + 0x28);
    }
    *(undefined8 *)(local_58._0_8_ + 0x28) = local_58._8_8_;
    LOCK();
    *(int *)(local_58._0_8_ + 0x30) = *(int *)(local_58._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_58._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_58._0_8_ + 0x20));
    }
  }
  return bVar11;
}

// TryInterrogateValues<UE::MovieScene::FFloatPropertyTraits,float,double> @ 14a3b3010

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FControlRigInitialValueProcessor::
TryInterrogateValues<UE::MovieScene::FFloatPropertyTraits,float,double>
          (FControlRigInitialValueProcessor *this,FEntityAllocation *param_1,
          TComponentTypeID<double> param_2)

{
  double *pdVar1;
  int iVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *this_00;
  FInterrogationChannelInfo *this_01;
  UControlRig *this_02;
  UClass *pUVar7;
  FRigControlElement *pFVar8;
  FRigControlValue *pFVar9;
  FComponentHeader *pFVar10;
  atomic<int> *paVar11;
  double *pdVar12;
  FComponentHeader *pFVar13;
  ulonglong uVar14;
  ERigControlValueType local_res8 [8];
  ushort local_res20;
  char local_res22;
  FInterrogationChannel local_108 [2];
  EComponentHeaderLockMode local_100;
  TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
  *local_f8;
  atomic<int> *local_f0;
  undefined1 local_e8 [32];
  FRigControlValue local_c8;
  
  FEntityAllocation::TryWriteComponents<double>
            (param_1,(TComponentLock<UE::MovieScene::TWriteOptional<double>_> *)local_e8,param_2,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  if ((double *)local_e8._24_8_ == (double *)0x0) {
    bVar5 = false;
  }
  else {
    pFVar13 = param_1->ComponentHeaders;
    pFVar10 = pFVar13 + param_1->NumComponents;
    uVar14 = (ulonglong)param_1->Size;
    for (; pFVar13 != pFVar10; pFVar13 = pFVar13 + 1) {
      if ((TComponentTypeID<UE::MovieScene::FInterrogationKey>)(pFVar13->ComponentType).Value ==
          (this->BuiltInComponents->Interrogation).OutputKey) {
        if (pFVar13 == (FComponentHeader *)0x0) goto LAB_14a3b30a1;
        goto LAB_14a3b30cc;
      }
    }
    pFVar13 = (FComponentHeader *)0x0;
LAB_14a3b30a1:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Header",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0x2cd,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
LAB_14a3b30cc:
    local_100 = param_1->LockMode;
    if (local_100 == Mutex) {
      AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
    }
    paVar11 = &pFVar13->ScheduledAccessCount;
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
    puVar3 = pFVar13->Components;
    local_f0 = paVar11;
    if (this->InitialValueCache == (FInitialValueCache *)0x0) {
      this_00 = (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)0x0;
    }
    else {
      this_00 = FInitialValueCache::GetStorage<UE::MovieScene::FFloatPropertyTraits>
                          (this->InitialValueCache,(FComponentTypeID)param_2);
    }
    local_f8 = (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
                *)(**(code **)*this->Interrogation)();
    if (uVar14 != 0) {
      pdVar12 = (double *)local_e8._24_8_;
      do {
        local_108[0].Value = *(int *)((longlong)pdVar12 + ((longlong)puVar3 - local_e8._24_8_));
        this_01 = TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
                  ::Find(local_f8,local_108);
        if (this_01 != (FInterrogationChannelInfo *)0x0) {
          this_02 = (UControlRig *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
          if (this_02 == (UControlRig *)0x0) {
LAB_14a3b3191:
            this_02 = (UControlRig *)0x0;
          }
          else {
            pUVar7 = Z_Construct_UClass_UControlRig_NoRegister();
            iVar2 = (int)pUVar7->_padding_;
            if ((*(int *)(this_02->_padding_ + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar7->_padding_)) goto LAB_14a3b3191;
          }
          if (((this_02 != (UControlRig *)0x0) &&
              ((this_01->PropertyBinding).PropertyName != (FName)0x0)) &&
             (pFVar8 = (FRigControlElement *)
                       (**(code **)(this_02->_padding_ + 0x3c8))(this_02,&this_01->PropertyBinding),
             pFVar8 != (FRigControlElement *)0x0)) {
            if (((this_00 == (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits> *)0x0) ||
                (TPropertyValueStorage<UE::MovieScene::FFloatPropertyTraits>::FindPropertyIndex
                           (this_00,(UObject *)&local_res20,(FName *)this_02), local_res22 == '\0'))
               || (pdVar1 = (double *)
                            (*(longlong *)&this_00->PropertyValues + (ulonglong)local_res20 * 8),
                  pdVar1 == (double *)0x0)) {
              local_res8[0] = Current;
              pFVar9 = UControlRig::GetControlValue(this_02,&local_c8,pFVar8,local_res8);
              *pdVar12 = (double)(pFVar9->FloatStorage).Float00;
            }
            else {
              *pdVar12 = *pdVar1;
            }
          }
        }
        pdVar12 = pdVar12 + 1;
        uVar14 = uVar14 - 1;
        paVar11 = local_f0;
      } while (uVar14 != 0);
    }
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + -1);
    UNLOCK();
    bVar5 = true;
    if (local_100 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
    }
  }
  if (local_e8._0_8_ != 0) {
    if ((ulonglong)local_e8._8_8_ < *(ulonglong *)(local_e8._0_8_ + 0x28)) {
      local_e8._8_8_ = *(ulonglong *)(local_e8._0_8_ + 0x28);
    }
    *(undefined8 *)(local_e8._0_8_ + 0x28) = local_e8._8_8_;
    LOCK();
    *(int *)(local_e8._0_8_ + 0x30) = *(int *)(local_e8._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_e8._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_e8._0_8_ + 0x20));
    }
  }
  return bVar5;
}

// Finalize @ 14a409520

void __thiscall
UE::MovieScene::FControlRigInitialValueProcessor::Finalize(FControlRigInitialValueProcessor *this)

{
  this->Interrogation = (IInterrogationExtension *)0x0;
  this->InitialValueCache = (FInitialValueCache *)0x0;
  this->ParameterSystem = (UMovieSceneControlRigParameterEvaluatorSystem *)0x0;
  return;
}

// Initialize @ 14a41f770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FControlRigInitialValueProcessor::Initialize
          (FControlRigInitialValueProcessor *this,UMovieSceneEntitySystemLinker *param_1,
          FInitialValueCache *param_2)

{
  int iVar1;
  IInterrogationExtension *pIVar2;
  UMovieSceneControlRigParameterEvaluatorSystem *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  FEntityAllocationWriteContext *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FEntityAllocationWriteContext local_res8;
  FString local_28;
  FString local_18;
  
  pIVar2 = UMovieSceneEntitySystemLinker::FindExtension<UE::MovieScene::IInterrogationExtension>
                     (param_1);
  this->Interrogation = pIVar2;
  local_res8.SystemSerial = (ulong64)UMovieSceneControlRigParameterEvaluatorSystem::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_res8.SystemSerial != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8.SystemSerial);
  }
  pUVar3 = (UMovieSceneControlRigParameterEvaluatorSystem *)
           UMovieSceneEntitySystemLinker::FindSystem
                     (param_1,(TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  if (pUVar3 == (UMovieSceneControlRigParameterEvaluatorSystem *)0x0) {
    pUVar3 = (UMovieSceneControlRigParameterEvaluatorSystem *)0x0;
  }
  else {
    pUVar4 = UMovieSceneControlRigParameterEvaluatorSystem::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<UMovieSceneControlRigParameterEvaluatorSystem>(&local_28);
      pwVar7 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                         (&local_18,(UMovieSceneEntitySystem *)pUVar3);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar8);
    }
  }
  this->ParameterSystem = pUVar3;
  this->InitialValueCache = param_2;
  pFVar6 = FEntityAllocationWriteContext::FEntityAllocationWriteContext
                     (&local_res8,&param_1->EntityManager);
  (this->WriteContext).SystemSerial = pFVar6->SystemSerial;
  return;
}

// PopulateFilter @ 14a433850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FControlRigInitialValueProcessor::PopulateFilter
          (FControlRigInitialValueProcessor *this,FEntityComponentFilter *param_1)

{
  undefined1 auStack_48 [32];
  initializer_list<UE::MovieScene::FComponentTypeID> local_28;
  FComponentTypeID local_18;
  TComponentTypeID<FName> local_16;
  ushort local_14;
  FComponentTypeID local_12;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_18.Value = *(ushort *)&this->ControlRigComponents->ControlRigSource;
  local_16 = this->TracksComponents->GenericParameterName;
  local_14 = (this->ControlRigComponents->Tags).ControlRigParameter.Value;
  local_28._First = &local_18;
  local_28._Last = &local_12;
  FComponentMask::SetAll(&param_1->AllMask,&local_28);
  return;
}

// Process @ 14a4357d0

void __thiscall
UE::MovieScene::FControlRigInitialValueProcessor::Process
          (FControlRigInitialValueProcessor *this,FEntityAllocation *param_1,FComponentMask *param_2
          )

{
  TComponentTypeID<UE::MovieScene::FInterrogationKey> TVar1;
  bool bVar2;
  
  if (this->ParameterSystem != (UMovieSceneControlRigParameterEvaluatorSystem *)0x0) {
    if ((((this->Interrogation == (IInterrogationExtension *)0x0) ||
         (TVar1 = (this->BuiltInComponents->Interrogation).OutputKey,
         TVar1 == (TComponentTypeID<UE::MovieScene::FInterrogationKey>)0xffff)) ||
        ((param_2->Bits).NumBits <= (int)(uint)(ushort)TVar1)) ||
       ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[(ushort)TVar1 >> 5].Pad >>
         ((ushort)TVar1 & 0x1f) & 1) == 0)) {
      bVar2 = TryCacheInitialValues<UE::MovieScene::FFloatPropertyTraits,float,double>
                        (this,param_1,(this->TracksComponents->Parameters).Scalar.InitialValue);
      if (!bVar2) {
        bVar2 = TryCacheInitialValues<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector>
                          (this,param_1,(this->TracksComponents->Parameters).Vector3.InitialValue);
        if (!bVar2) {
          TryCacheInitialValues<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,FEulerTransform,UE::MovieScene::FIntermediate3DTransform>
                    (this,param_1,(this->TracksComponents->Parameters).Transform.InitialValue);
        }
      }
    }
    else {
      bVar2 = TryInterrogateValues<UE::MovieScene::FFloatPropertyTraits,float,double>
                        (this,param_1,(this->TracksComponents->Parameters).Scalar.InitialValue);
      if (!bVar2) {
        bVar2 = TryInterrogateValues<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector>
                          (this,param_1,(this->TracksComponents->Parameters).Vector3.InitialValue);
        if (!bVar2) {
          TryInterrogateValues<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,FEulerTransform,UE::MovieScene::FIntermediate3DTransform>
                    (this,param_1,(this->TracksComponents->Parameters).Transform.InitialValue);
          return;
        }
      }
    }
  }
  return;
}

