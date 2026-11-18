// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 22

// SerializeField @ 14d5373c0

void __thiscall
UE::Cameras::TCameraDebugBlockField<int>::SerializeField
          (TCameraDebugBlockField<int> *this,FCameraDebugBlock *param_1,FArchive *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12);
  puVar1 = (uint *)**(undefined8 **)&param_2->field_0x8;
  if (puVar1 + 1 <= (uint *)(*(undefined8 **)&param_2->field_0x8)[1]) {
    *puVar2 = *puVar1;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
    return;
  }
  if ((param_2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d537400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_2,puVar2);
  return;
}

// SerializeField @ 14d537460

void __thiscall
UE::Cameras::TCameraDebugBlockField<FLinearColor>::SerializeField
          (TCameraDebugBlockField<FLinearColor> *this,FCameraDebugBlock *param_1,FArchive *param_2)

{
  ::operator<<(param_2,(FLinearColor *)
                       ((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12));
  return;
}

// SerializeField @ 14d5374f0

void __thiscall
UE::Cameras::TCameraDebugBlockField<UE::Cameras::FBlendStackEntryID>::SerializeField
          (TCameraDebugBlockField<UE::Cameras::FBlendStackEntryID> *this,FCameraDebugBlock *param_1,
          FArchive *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12);
  puVar1 = (uint *)**(undefined8 **)&param_2->field_0x8;
  if (puVar1 + 1 <= (uint *)(*(undefined8 **)&param_2->field_0x8)[1]) {
    *puVar2 = *puVar1;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
    return;
  }
  if ((param_2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d537530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_2,puVar2);
  return;
}

// SerializeField @ 14d5375c0

void __thiscall
UE::Cameras::TCameraDebugBlockField<FString>::SerializeField
          (TCameraDebugBlockField<FString> *this,FCameraDebugBlock *param_1,FArchive *param_2)

{
  ::operator<<(param_2,(FString *)
                       ((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12));
  return;
}

// SerializeField @ 14d537620

void __thiscall
UE::Cameras::TCameraDebugBlockField<bool>::SerializeField
          (TCameraDebugBlockField<bool> *this,FCameraDebugBlock *param_1,FArchive *param_2)

{
  ::operator<<(param_2,(bool *)((longlong)&param_1->_padding_ +
                               (ulonglong)*(ushort *)&this->field_0x12));
  return;
}

// SerializeField @ 14d537c90

void __thiscall
UE::Cameras::TCameraDebugBlockField<TArray<FString,TSizedDefaultAllocator<32>_>_>::SerializeField
          (TCameraDebugBlockField<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          FCameraDebugBlock *param_1,FArchive *param_2)

{
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
            (param_2,(TArray<FString,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12));
  return;
}

// SerializeField @ 14d5e0b80

void __thiscall
UE::Cameras::TCameraDebugBlockField<enum_ECollisionSafePosition>::SerializeField
          (void *this,FCameraDebugBlock *param_1,FArchive *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)
           ((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)((longlong)this + 0x12));
  puVar1 = (undefined1 *)**(undefined8 **)&param_2->field_0x8;
  if (puVar1 + 1 <= (undefined1 *)(*(undefined8 **)&param_2->field_0x8)[1]) {
    *puVar2 = *puVar1;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d5e0bb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar2,1);
  return;
}

// SerializeField @ 14d5e0c10

void __thiscall
UE::Cameras::TCameraDebugBlockField<enum_ECollisionSafePositionOffsetSpace>::SerializeField
          (void *this,FCameraDebugBlock *param_1,FArchive *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)
           ((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)((longlong)this + 0x12));
  puVar1 = (undefined1 *)**(undefined8 **)&param_2->field_0x8;
  if (puVar1 + 1 <= (undefined1 *)(*(undefined8 **)&param_2->field_0x8)[1]) {
    *puVar2 = *puVar1;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d5e0c49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar2,1);
  return;
}

// SerializeField @ 14d5e2340

void __thiscall
UE::Cameras::TCameraDebugBlockField<double>::SerializeField
          (TCameraDebugBlockField<double> *this,FCameraDebugBlock *param_1,FArchive *param_2)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  
  puVar2 = (ulong64 *)((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12);
  puVar1 = (ulong64 *)**(longlong **)&param_2->field_0x8;
  if (puVar1 + 1 <= (ulong64 *)(*(longlong **)&param_2->field_0x8)[1]) {
    *puVar2 = *puVar1;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 8;
    return;
  }
  if ((param_2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d5e2381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar2,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_2,puVar2);
  return;
}

// SerializeField @ 14d5e3940

void __thiscall
UE::Cameras::TCameraDebugBlockField<UE::Math::TVector2<double>_>::SerializeField
          (TCameraDebugBlockField<UE::Math::TVector2<double>_> *this,FCameraDebugBlock *param_1,
          FArchive *param_2)

{
  UE::Math::operator<<
            (param_2,(TVector2<double> *)
                     ((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12));
  return;
}

// SerializeField @ 14d5e3aa0

void __thiscall
UE::Cameras::TCameraDebugBlockField<float>::SerializeField
          (TCameraDebugBlockField<float> *this,FCameraDebugBlock *param_1,FArchive *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12);
  puVar1 = (uint *)**(undefined8 **)&param_2->field_0x8;
  if (puVar1 + 1 <= (uint *)(*(undefined8 **)&param_2->field_0x8)[1]) {
    *puVar2 = *puVar1;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
    return;
  }
  if ((param_2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d5e3ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_2,puVar2);
  return;
}

// SerializeField @ 14d5e3b80

void __thiscall
UE::Cameras::TCameraDebugBlockField<UE::Cameras::FBaseFramingCameraNodeEvaluator::FState>::
SerializeField(TCameraDebugBlockField<UE::Cameras::FBaseFramingCameraNodeEvaluator::FState> *this,
              FCameraDebugBlock *param_1,FArchive *param_2)

{
  FBaseFramingCameraNodeEvaluator::FState::Serialize
            ((FState *)((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12),
             param_2);
  return;
}

// SerializeField @ 14d5e3be0

void __thiscall
UE::Cameras::TCameraDebugBlockField<UE::Cameras::FBaseFramingCameraNodeEvaluator::FDesired>::
SerializeField(TCameraDebugBlockField<UE::Cameras::FBaseFramingCameraNodeEvaluator::FDesired> *this,
              FCameraDebugBlock *param_1,FArchive *param_2)

{
  TVector2<double> *pTVar1;
  
  pTVar1 = (TVector2<double> *)
           ((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12);
  UE::Math::operator<<(param_2,pTVar1);
  UE::Math::operator<<(param_2,pTVar1 + 1);
  ::operator<<(param_2,(bool *)(pTVar1 + 2));
  return;
}

// SerializeField @ 14d5e3c70

void __thiscall
UE::Cameras::TCameraDebugBlockField<UE::Cameras::FBaseFramingCameraNodeEvaluator::FWorldTargetInfos>
::SerializeField(TCameraDebugBlockField<UE::Cameras::FBaseFramingCameraNodeEvaluator::FWorldTargetInfos>
                 *this,FCameraDebugBlock *param_1,FArchive *param_2)

{
  TArrayPrivateFriend::
  Serialize<UE::Cameras::FCameraActorComputedTargetInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            (param_2,(TArray<UE::Cameras::FCameraActorComputedTargetInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12));
  return;
}

// SerializeField @ 14d5e3f90

void __thiscall
UE::Cameras::TCameraDebugBlockField<UE::Math::TVector<double>_>::SerializeField
          (TCameraDebugBlockField<UE::Math::TVector<double>_> *this,FCameraDebugBlock *param_1,
          FArchive *param_2)

{
  UE::Math::operator<<
            (param_2,(TVector<double> *)
                     ((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12));
  return;
}

// SerializeField @ 14d5e3ff0

void __thiscall
UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>::SerializeField
          (TCameraDebugBlockField<UE::Math::TRotator<double>_> *this,FCameraDebugBlock *param_1,
          FArchive *param_2)

{
  UE::Math::operator<<
            (param_2,(TRotator<double> *)
                     ((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12));
  return;
}

// SerializeField @ 14d5e58d0

void __thiscall
UE::Cameras::TCameraDebugBlockField<UE::Math::TTransform<double>_>::SerializeField
          (TCameraDebugBlockField<UE::Math::TTransform<double>_> *this,FCameraDebugBlock *param_1,
          FArchive *param_2)

{
  UE::Math::operator<<
            (param_2,(TTransform<double> *)
                     ((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12));
  return;
}

// SerializeField @ 14d64a0d0

void __thiscall
UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<3>_>::SerializeField
          (TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<3>_> *this,
          FCameraDebugBlock *param_1,FArchive *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar3 = (uint *)((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12);
  puVar1 = (uint *)**(undefined8 **)&param_2->field_0x8;
  if ((uint *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar1 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,puVar3);
    }
  }
  else {
    *puVar3 = *puVar1;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  puVar1 = puVar3 + 1;
  puVar2 = (uint *)**(undefined8 **)&param_2->field_0x8;
  if ((uint *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<UE::Cameras::TCameraDebugGraphEntry<3>,TSizedDefaultAllocator<32>_>
            (param_2,(TArray<UE::Cameras::TCameraDebugGraphEntry<3>,TSizedDefaultAllocator<32>_> *)
                     (puVar3 + 2));
  return;
}

// SerializeField @ 14d64a1e0

void __thiscall
UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<1>_>::SerializeField
          (TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<1>_> *this,
          FCameraDebugBlock *param_1,FArchive *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar3 = (uint *)((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12);
  puVar1 = (uint *)**(undefined8 **)&param_2->field_0x8;
  if ((uint *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar1 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,puVar3);
    }
  }
  else {
    *puVar3 = *puVar1;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  puVar1 = puVar3 + 1;
  puVar2 = (uint *)**(undefined8 **)&param_2->field_0x8;
  if ((uint *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<UE::Cameras::TCameraDebugGraphEntry<1>,TSizedDefaultAllocator<32>_>
            (param_2,(TArray<UE::Cameras::TCameraDebugGraphEntry<1>,TSizedDefaultAllocator<32>_> *)
                     (puVar3 + 2));
  return;
}

// SerializeField @ 14d64a2f0

void __thiscall
UE::Cameras::TCameraDebugBlockField<UE::Cameras::FCameraDebugClock>::SerializeField
          (TCameraDebugBlockField<UE::Cameras::FCameraDebugClock> *this,FCameraDebugBlock *param_1,
          FArchive *param_2)

{
  Cameras::FCameraDebugClock::Serialize
            ((FCameraDebugClock *)
             ((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12),param_2);
  return;
}

// SerializeField @ 14d64a350

void __thiscall
UE::Cameras::TCameraDebugBlockField<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::SerializeField(TCameraDebugBlockField<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                 *this,FCameraDebugBlock *param_1,FArchive *param_2)

{
  TArrayPrivateFriend::Serialize<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>
            (param_2,(TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12));
  return;
}

// SerializeField @ 14d64a3b0

void __thiscall
UE::Cameras::TCameraDebugBlockField<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
SerializeField(TCameraDebugBlockField<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *this,
              FCameraDebugBlock *param_1,FArchive *param_2)

{
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            (param_2,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&param_1->_padding_ + (ulonglong)*(ushort *)&this->field_0x12));
  return;
}

