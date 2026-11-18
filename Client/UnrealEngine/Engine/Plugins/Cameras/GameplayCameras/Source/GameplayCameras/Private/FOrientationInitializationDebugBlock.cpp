// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// GetTypeID @ 14d648dd0

FCameraObjectTypeID * __thiscall
UE::Cameras::FOrientationInitializationDebugBlock::GetTypeID
          (FOrientationInitializationDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d648de0

bool __thiscall
UE::Cameras::FOrientationInitializationDebugBlock::IsKindOf
          (FOrientationInitializationDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FOrientationInitializationDebugBlock>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d648e00

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
UE::Cameras::FOrientationInitializationDebugBlock::OnDebugDraw
          (FOrientationInitializationDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  TStringView<wchar_t> local_28;
  TVector2<double>_u_0 local_18;
  
  if (GGameplayCamerasDebugOrientationInitializationShowLastTargetPreservation) {
    FCameraIKAimDebugInfo::DebugDraw(&this->AimDebugInfo,param_1,param_2);
    local_18._s_0.X = ___xmm_c0240000000000004034000000000000;
    local_18._s_0.Y = _UNK_152ba61d8;
    FCameraDebugRenderer::DrawPoint
              (param_2,&this->LastEvaluatedTarget,__real_41200000,&FLinearColor::Green,0.0);
    local_28.Size = 0x10;
    local_28.DataPtr = L"Preserved Target";
    FCameraDebugRenderer::DrawTextView
              (param_2,&this->LastEvaluatedTarget,(TVector2<double> *)&local_18._s_0,&local_28,
               &FLinearColor::Green,(UFont *)0x0,__real_3f800000);
  }
  return;
}

// OnSerialize @ 14d648ed0

void __thiscall
UE::Cameras::FOrientationInitializationDebugBlock::OnSerialize
          (FOrientationInitializationDebugBlock *this,FArchive *param_1)

{
  UE::Math::operator<<(param_1,&this->LastEvaluatedTarget);
  Cameras::operator<<(param_1,&this->AimDebugInfo);
  return;
}

// FOrientationInitializationDebugBlock @ 14d655ac0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FOrientationInitializationDebugBlock * __thiscall
UE::Cameras::FOrientationInitializationDebugBlock::FOrientationInitializationDebugBlock
          (FOrientationInitializationDebugBlock *this,FOrientationInitializationService *param_1)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  undefined8 uVar4;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> _Dst;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> _Src;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->AimDebugInfo).Iterations.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0;
  this->_padding_ = (longlong)&___7FOrientationInitializationDebugBlock_Cameras_UE__6B_;
  (this->AimDebugInfo).Iterations.ArrayNum = 0;
  piVar1 = &(this->AimDebugInfo).Iterations.ArrayMax;
  *piVar1 = 4;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AimDebugInfo).DesiredTarget.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AimDebugInfo).DesiredTarget.field0_0x0._s_0.Y = (double)uVar4;
  (this->AimDebugInfo).DesiredTarget.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->AimDebugInfo).bSucceeded = false;
  dVar3 = (param_1->DebugLastEvaluatedTarget).field0_0x0._s_0.Y;
  (this->LastEvaluatedTarget).field0_0x0._s_0.X =
       (param_1->DebugLastEvaluatedTarget).field0_0x0._s_0.X;
  (this->LastEvaluatedTarget).field0_0x0._s_0.Y = dVar3;
  (this->LastEvaluatedTarget).field0_0x0._s_0.Z =
       (param_1->DebugLastEvaluatedTarget).field0_0x0._s_0.Z;
  if (this != (FOrientationInitializationDebugBlock *)
              &(param_1->YawPitchPreservationOverride).bIsSet) {
    iVar2 = (param_1->LastAimDebugInfo).Iterations.ArrayNum;
    _Src = (param_1->LastAimDebugInfo).Iterations.AllocatorInstance.SecondaryData;
    (this->AimDebugInfo).Iterations.ArrayNum = iVar2;
    if (_Src == (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
      _Src = (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)&param_1->LastAimDebugInfo
      ;
    }
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>_>
              (0x70,8,iVar2,4,
               (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> *)&this->AimDebugInfo,
               iVar2,piVar1);
    _Dst = (this->AimDebugInfo).Iterations.AllocatorInstance.SecondaryData;
    if (iVar2 != 0) {
      if (_Dst == (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
        _Dst = (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)&this->AimDebugInfo;
      }
      memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 * 0x70);
    }
  }
  dVar3 = (param_1->LastAimDebugInfo).DesiredTarget.field0_0x0._s_0.Y;
  (this->AimDebugInfo).DesiredTarget.field0_0x0._s_0.X =
       (param_1->LastAimDebugInfo).DesiredTarget.field0_0x0._s_0.X;
  (this->AimDebugInfo).DesiredTarget.field0_0x0._s_0.Y = dVar3;
  (this->AimDebugInfo).DesiredTarget.field0_0x0._s_0.Z =
       (param_1->LastAimDebugInfo).DesiredTarget.field0_0x0._s_0.Z;
  (this->AimDebugInfo).bSucceeded = (param_1->LastAimDebugInfo).bSucceeded;
  return this;
}

