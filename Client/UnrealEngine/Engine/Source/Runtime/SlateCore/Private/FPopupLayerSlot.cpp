// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FPopupLayerSlot @ 1425bd670

FPopupLayerSlot * __thiscall FPopupLayerSlot::FPopupLayerSlot(FPopupLayerSlot *this)

{
  TVector2<double> TVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FSlotBase::FSlotBase((FSlotBase *)this);
  this->_padding_ = (longlong)&___7FPopupLayerSlot__6B_;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->DesktopPosition_Attribute).bIsSet = true;
  (this->DesktopPosition_Attribute).Value.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  *(undefined8 *)&(this->DesktopPosition_Attribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->DesktopPosition_Attribute).Getter = 0;
  *(undefined8 *)&(this->DesktopPosition_Attribute).Getter.field_0x8 = 0;
  (this->WidthOverride_Attribute).Value = 0.0;
  (this->WidthOverride_Attribute).bIsSet = false;
  *(undefined8 *)&(this->WidthOverride_Attribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->WidthOverride_Attribute).Getter = 0;
  *(undefined8 *)&(this->WidthOverride_Attribute).Getter.field_0x8 = 0;
  (this->HeightOverride_Attribute).Value = 0.0;
  (this->HeightOverride_Attribute).bIsSet = false;
  *(undefined8 *)&(this->HeightOverride_Attribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->HeightOverride_Attribute).Getter = 0;
  *(undefined8 *)&(this->HeightOverride_Attribute).Getter.field_0x8 = 0;
  (this->Scale_Attribute).Value = 1.0;
  (this->Scale_Attribute).bIsSet = true;
  *(undefined8 *)&(this->Scale_Attribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Scale_Attribute).Getter = 0;
  *(undefined8 *)&(this->Scale_Attribute).Getter.field_0x8 = 0;
  (this->Clamp_Attribute).Value = false;
  (this->Clamp_Attribute).bIsSet = true;
  *(undefined8 *)&(this->Clamp_Attribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Clamp_Attribute).Getter = 0;
  *(undefined8 *)&(this->Clamp_Attribute).Getter.field_0x8 = 0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->ClampBuffer_Attribute).bIsSet = true;
  (this->ClampBuffer_Attribute).Value.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  *(undefined8 *)&(this->ClampBuffer_Attribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ClampBuffer_Attribute).Getter = 0;
  *(undefined8 *)&(this->ClampBuffer_Attribute).Getter.field_0x8 = 0;
  return this;
}

// Construct @ 1425d2c80

void __thiscall
FPopupLayerSlot::Construct(FPopupLayerSlot *this,FChildren *param_1,FSlotArguments *param_2)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined1 local_f0 [24];
  float local_d8;
  bool local_d4;
  undefined1 local_d0 [24];
  float local_b8;
  bool local_b4;
  undefined1 local_b0 [24];
  bool local_98;
  bool local_97;
  undefined1 local_90 [24];
  double local_78;
  double dStack_70;
  bool local_68;
  undefined1 local_60 [24];
  double local_48;
  double dStack_40;
  bool local_38;
  undefined1 local_30 [40];
  
  bVar2 = (param_2->_DesktopPosition).bIsSet;
  if (bVar2 != false) {
    local_78 = (param_2->_DesktopPosition).Value.field0_0x0._s_0.X;
    dStack_70 = (param_2->_DesktopPosition).Value.field0_0x0._s_0.Y;
    local_68 = bVar2;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_DesktopPosition).Getter);
    (this->DesktopPosition_Attribute).bIsSet = local_68;
    (this->DesktopPosition_Attribute).Value.field0_0x0._s_0.X = local_78;
    (this->DesktopPosition_Attribute).Value.field0_0x0._s_0.Y = dStack_70;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(this->DesktopPosition_Attribute).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
    if ((void *)local_60._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_60._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_60);
  }
  bVar2 = (param_2->_WidthOverride).bIsSet;
  if (bVar2 != false) {
    fVar1 = (param_2->_WidthOverride).Value;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f0,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_WidthOverride).Getter);
    (this->WidthOverride_Attribute).Value = fVar1;
    (this->WidthOverride_Attribute).bIsSet = bVar2;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->WidthOverride_Attribute).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f0);
    if ((void *)local_f0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_f0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_f0);
  }
  bVar2 = (param_2->_HeightOverride).bIsSet;
  if (bVar2 != false) {
    local_d8 = (param_2->_HeightOverride).Value;
    local_d4 = bVar2;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_HeightOverride).Getter);
    (this->HeightOverride_Attribute).Value = local_d8;
    (this->HeightOverride_Attribute).bIsSet = local_d4;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HeightOverride_Attribute).Getter
               ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
    if ((void *)local_d0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_d0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_d0);
  }
  bVar2 = (param_2->_Scale).bIsSet;
  if (bVar2 != false) {
    local_b8 = (param_2->_Scale).Value;
    local_b4 = bVar2;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_Scale).Getter);
    (this->Scale_Attribute).Value = local_b8;
    (this->Scale_Attribute).bIsSet = local_b4;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Scale_Attribute).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
    if ((void *)local_b0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_b0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_b0);
  }
  bVar2 = (param_2->_ClampToWindow).bIsSet;
  if (bVar2 != false) {
    local_98 = (param_2->_ClampToWindow).Value;
    local_97 = bVar2;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_ClampToWindow).Getter);
    (this->Clamp_Attribute).Value = local_98;
    (this->Clamp_Attribute).bIsSet = local_97;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Clamp_Attribute).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    if ((void *)local_90._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_90._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_90);
  }
  bVar2 = (param_2->_ClampBuffer).bIsSet;
  if (bVar2 != false) {
    local_48 = (param_2->_ClampBuffer).Value.field0_0x0._s_0.X;
    dStack_40 = (param_2->_ClampBuffer).Value.field0_0x0._s_0.Y;
    local_38 = bVar2;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_30,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->_ClampBuffer).Getter);
    (this->ClampBuffer_Attribute).bIsSet = local_38;
    (this->ClampBuffer_Attribute).Value.field0_0x0._s_0.X = local_48;
    (this->ClampBuffer_Attribute).Value.field0_0x0._s_0.Y = dStack_40;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClampBuffer_Attribute).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_30);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_30);
    if ((void *)local_30._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_30._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_30);
  }
  lVar3 = param_2->_padding_;
  if (lVar3 != 0) {
    lVar4 = param_2->_padding_;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this);
    pTVar5 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = lVar3;
    this->_padding_ = lVar4;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  FSlotBase::SetOwner((FSlotBase *)this,param_1);
  return;
}

