// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// FPlayerControlRotationDebugBlock @ 14d655e80

FPlayerControlRotationDebugBlock * __thiscall
UE::Cameras::FPlayerControlRotationDebugBlock::FPlayerControlRotationDebugBlock
          (FPlayerControlRotationDebugBlock *this)

{
  int *piVar1;
  TArray<UE::Cameras::TCameraDebugGraphEntry<1>,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  TVector2<double> TVar11;
  
  pTVar2 = &(this->AxisActionAngularSpeedGraph).Entries;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPlayerControlRotationDebugBlock_Cameras_UE__6B_;
  this->_padding_ = 0;
  piVar1 = &(this->AxisActionAngularSpeedGraph).Entries.ArrayMax;
  this->_padding_ = 0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PawnTransform).Rotation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PawnTransform).Rotation.ZW.m128d_f64 = auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PawnTransform).Translation.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PawnTransform).Translation.ZW.m128d_f64 = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PawnTransform).Scale3D.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PawnTransform).Scale3D.ZW.m128d_f64 = auVar10;
  (this->FreezeReason).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreezeReason).Data.ArrayNum = 0;
  (this->FreezeReason).Data.ArrayMax = 0;
  (this->AxisActionAngularSpeedGraph).CurrentMinValue = 0.0;
  (this->AxisActionAngularSpeedGraph).CurrentMaxValue = 0.0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AxisActionAngularSpeedGraph).Entries.ArrayNum = 0;
  *piVar1 = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,0x14,&pTVar2->AllocatorInstance,0,piVar1);
  (this->AxisActionValueClock).Value._padding_ = 0;
  (this->AxisActionValueClock).Value._padding_ = 0;
  (this->AxisActionValueClock).Value._padding_ = 0;
  TVar11 = UE::Math::TVector2<double>::ZeroVector;
  (this->AxisActionValueClock).Value._padding_ = 0;
  *(TVector2<double>_u_0 *)&(this->AxisActionValueClock).Value =
       (TVector2<double>_u_0_s_0)TVar11.field0_0x0;
  (this->AxisActionValueClock).Value.TypeIndex = '\0';
  return this;
}

// GetStaticFields @ 14d661910

TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::Cameras::FPlayerControlRotationDebugBlock::GetStaticFields(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetStaticFields(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetStaticFields(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetStaticFields(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UE::Cameras::FPlayerControlRotationDebugBlock::GetStaticFields'::__l2::
             _dynamic_atexit_destructor_for__StaticFields__);
      _Init_thread_footer(&`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetStaticFields(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *)
         &`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetStaticFields(void)'
          ::__l2::StaticFields;
}

// GetTypeID @ 14d661cd0

FCameraObjectTypeID * __thiscall
UE::Cameras::FPlayerControlRotationDebugBlock::GetTypeID(FPlayerControlRotationDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d6630f0

bool __thiscall
UE::Cameras::FPlayerControlRotationDebugBlock::IsKindOf
          (FPlayerControlRotationDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FPlayerControlRotationDebugBlock>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d6667c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FPlayerControlRotationDebugBlock::OnDebugDraw
          (FPlayerControlRotationDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  TVector<double> *pTVar8;
  FText *pFVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  FLinearColor_u_0 local_138;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  TVector2<double>_u_0 local_e0;
  TRotator<double> local_d0;
  TVector<double>_u_0 local_b8;
  TRotator<double> local_a0;
  TVector<double>_u_0 local_88 [5];
  
  fVar7 = __real_40a00000;
  fVar6 = __real_3f800000;
  local_d0.Yaw = (this->CameraRotation).Yaw;
  local_a0.Yaw = (this->ControlRotation).Yaw;
  dVar5 = (this->PawnTransform).Rotation.ZW.m128d_f64[1];
  dVar12 = (double)GGameplayCamerasControlRotationDebugArrowLength;
  dVar2 = dVar12 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  local_b8._s_0.Z = dVar12 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  dVar12 = dVar12 * UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  local_110._s_0.X = (this->PawnTransform).Translation.XY.m128d_f64[0];
  local_110._s_0.Y = (this->PawnTransform).Translation.XY.m128d_f64[1];
  local_110._s_0.Z = (this->PawnTransform).Translation.ZW.m128d_f64[0];
  uVar19 = SUB84(dVar12,0);
  uVar20 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar21._8_4_ = uVar19;
  auVar21._0_8_ = dVar2;
  auVar21._12_4_ = uVar20;
  local_138._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::MandarianOrange.field0_0x0._s_0.R];
  local_d0.Pitch = 0.0;
  local_138._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::MandarianOrange.field0_0x0._s_0.G];
  local_d0.Roll = 0.0;
  local_a0.Pitch = 0.0;
  local_138._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::MandarianOrange.field0_0x0._s_0.B];
  local_a0.Roll = 0.0;
  auVar18 = *(undefined1 (*) [16])(this->PawnTransform).Rotation.ZW.m128d_f64;
  local_138._s_0.A = (float)FColorList::MandarianOrange.field0_0x0._3_1_ * __real_3b808081;
  local_b8._8_4_ = uVar19;
  local_b8._0_8_ = dVar2;
  local_b8._12_4_ = uVar20;
  local_88[0]._0_16_ = *(undefined1 (*) [16])(this->PawnTransform).Rotation.XY.m128d_f64;
  dVar1 = auVar18._0_8_;
  auVar13 = blendpd(local_88[0]._0_16_,auVar18,2);
  auVar22._0_8_ = auVar21._8_8_ * local_88[0]._0_8_ - local_88[0]._8_8_ * dVar2;
  auVar22._8_8_ = local_b8._s_0.Z * local_88[0]._8_8_ - dVar1 * dVar12;
  auVar23._8_4_ = uVar19;
  auVar23._0_8_ = dVar2;
  auVar23._12_4_ = uVar20;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_b8._s_0.Z;
  auVar10 = blendpd(auVar23,auVar10,2);
  auVar11._0_8_ = auVar10._0_8_ * dVar1 - auVar13._0_8_ * local_b8._s_0.Z;
  auVar11._8_8_ = auVar10._8_8_ * auVar18._8_8_ - auVar13._8_8_ * 0.0;
  auVar10 = *(undefined1 (*) [16])(this->PawnTransform).Rotation.XY.m128d_f64;
  auVar23 = blendpd(auVar22,auVar11,2);
  dVar3 = auVar22._8_8_ + auVar22._8_8_;
  dVar4 = auVar11._0_8_ + auVar11._0_8_;
  uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar24._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar24._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar16._8_4_ = SUB84(dVar4,0);
  auVar16._0_8_ = dVar3;
  auVar16._12_4_ = uVar19;
  auVar14._8_4_ = SUB84(dVar4,0);
  auVar14._0_8_ = dVar3;
  auVar14._12_4_ = uVar19;
  auVar23 = blendpd(auVar14,auVar24,2);
  auVar17._0_8_ = auVar16._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar3;
  auVar17._8_8_ = auVar24._0_8_ * auVar10._8_8_ - dVar1 * dVar4;
  auVar10 = blendpd(auVar10,auVar18,2);
  auVar13._8_4_ = SUB84(auVar17._8_8_,0);
  auVar13._0_8_ = auVar17._0_8_;
  auVar13._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
  auVar15._0_8_ = auVar23._0_8_ * dVar1 - auVar10._0_8_ * auVar24._0_8_;
  auVar15._8_8_ = auVar23._8_8_ * auVar18._8_8_ - auVar10._8_8_ * auVar24._8_8_;
  local_128._s_0.X = local_110._s_0.X + dVar3 * dVar5 + dVar2 + auVar13._8_8_;
  auVar18 = blendpd(auVar17,auVar15,2);
  local_128._s_0.Y = local_110._s_0.Y + dVar4 * dVar5 + dVar12 + auVar15._0_8_;
  local_f8._s_0.Z = auVar24._0_8_ * dVar5 + local_b8._s_0.Z + auVar18._0_8_;
  local_128._s_0.Z = local_110._s_0.Z + local_f8._s_0.Z;
  FCameraDebugRenderer::DrawDirectionalArrow
            (param_2,(TVector<double> *)&local_110._s_0,(TVector<double> *)&local_128._s_0,
             __real_40a00000,(FLinearColor *)&local_138._s_0,__real_3f800000);
  local_138._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::PaleGreen.field0_0x0._s_0.R];
  local_138._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::PaleGreen.field0_0x0._s_0.G];
  local_138._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::PaleGreen.field0_0x0._s_0.B];
  local_138._s_0.A = (float)FColorList::PaleGreen.field0_0x0._3_1_ * __real_3b808081;
  pTVar8 = UE::Math::TRotator<double>::RotateVector
                     (&local_d0,(TVector<double> *)&local_88[0]._s_0,
                      (TVector<double> *)&local_b8._s_0);
  local_128._s_0.Z = local_110._s_0.Z + (pTVar8->field0_0x0)._s_0.Z;
  local_128._s_0.Y = local_110._s_0.Y + (pTVar8->field0_0x0)._s_0.Y;
  local_128._s_0.X = local_110._s_0.X + (pTVar8->field0_0x0)._s_0.X;
  FCameraDebugRenderer::DrawDirectionalArrow
            (param_2,(TVector<double> *)&local_110._s_0,(TVector<double> *)&local_128._s_0,fVar7,
             (FLinearColor *)&local_138._s_0,fVar6);
  pTVar8 = UE::Math::TRotator<double>::RotateVector
                     (&local_a0,(TVector<double> *)&local_88[0]._s_0,
                      (TVector<double> *)&local_b8._s_0);
  local_f8._s_0.Z = local_110._s_0.Z + (pTVar8->field0_0x0)._s_0.Z;
  local_f8._s_0.Y = local_110._s_0.Y + (pTVar8->field0_0x0)._s_0.Y;
  local_f8._s_0.X = local_110._s_0.X + (pTVar8->field0_0x0)._s_0.X;
  local_138._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::Green.field0_0x0._s_0.R];
  local_138._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::Green.field0_0x0._s_0.G];
  local_138._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::Green.field0_0x0._s_0.B];
  local_138._s_0.A = (float)FColorList::Green.field0_0x0._3_1_ * __real_3b808081;
  FCameraDebugRenderer::DrawDirectionalArrow
            (param_2,(TVector<double> *)&local_110._s_0,(TVector<double> *)&local_f8._s_0,fVar7,
             (FLinearColor *)&local_138._s_0,__real_40000000);
  local_e0._s_0.X = ___xmm_40140000000000004014000000000000;
  local_e0._s_0.Y = _UNK_150ae9818;
  if (this->bIsFrozen == false) {
    ::FString::PrintfImpl((FString *)&local_128._s_0,L"camera: %+7.2f\n%s");
  }
  else {
    ::FString::PrintfImpl((FString *)&local_128._s_0,L"camera: %+7.2f, frozen: %+7.2f\n%s");
  }
  local_138._s_0.R = FLinearColor::sRGBToLinearTable[0xff];
  local_138._s_0.G = FLinearColor::sRGBToLinearTable[0xff];
  local_138._s_0.B = FLinearColor::sRGBToLinearTable[0xff];
  local_138._s_0.A = 0.75294125;
  FCameraDebugRenderer::DrawText
            (param_2,(TVector<double> *)&local_f8._s_0,(TVector2<double> *)&local_e0._s_0,
             (FString *)&local_128._s_0,(FLinearColor *)&local_138._s_0,(UFont *)0x0,fVar6);
  if ((longlong *)local_128._s_0.X != (longlong *)0x0) {
    FMemory::Free((void *)local_128._s_0.X);
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_128._s_0,L"PlayerControlRotationService",L"AxisBindingValue",
                      L"AxisBindingValue");
  FCameraDebugRenderer::DrawClock(param_2,&this->AxisActionValueClock,pFVar9);
  if ((longlong *)local_128._s_0.X != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_128._s_0.X + 0x10))();
  }
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_128._s_0,L"PlayerControlRotationService",
                      L"AxisBindingAngularSpeed",L"AxisBindingAngularSpeed");
  FCameraDebugRenderer::DrawGraph<1>(param_2,&this->AxisActionAngularSpeedGraph,pFVar9);
  if ((longlong *)local_128._s_0.X != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_128._s_0.X + 0x10))();
  }
  return;
}

// OnSerialize @ 14d66ea90

void __thiscall
UE::Cameras::FPlayerControlRotationDebugBlock::OnSerialize
          (FPlayerControlRotationDebugBlock *this,FArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res18 [8];
  
  pTVar3 = GetStaticFields();
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  iVar2 = pTVar3->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (pTVar3->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FCameraDebugBlockField_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar4 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar4 + 8))(*(longlong **)pFVar4,this,param_1);
    pFVar4 = pFVar4 + 8;
  }
  return;
}

