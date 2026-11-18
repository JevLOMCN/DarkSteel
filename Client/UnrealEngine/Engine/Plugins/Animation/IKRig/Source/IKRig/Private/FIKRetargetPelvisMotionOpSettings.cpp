// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 8

// StaticStruct @ 14deefd80

UScriptStruct * __cdecl FIKRetargetPelvisMotionOpSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOpSettings,
                         (UObject *)pUVar1,L"IKRetargetPelvisMotionOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton;
}

// FIKRetargetPelvisMotionOpSettings @ 14df16740

FIKRetargetPelvisMotionOpSettings * __thiscall
FIKRetargetPelvisMotionOpSettings::FIKRetargetPelvisMotionOpSettings
          (FIKRetargetPelvisMotionOpSettings *this,FIKRetargetPelvisMotionOpSettings *param_1)

{
  UObjectBase *this_00;
  double dVar1;
  undefined4 uVar2;
  FCompactPoseBoneIndex FVar3;
  
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = 0;
  this_00 = (UObjectBase *)param_1->_padding_;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    this->_padding_ = (longlong)this_00;
  }
  this->_padding_ = (longlong)&___7FIKRetargetPelvisMotionOpSettings__6B_;
  uVar2 = *(undefined4 *)&(param_1->SourcePelvisBone).field_0x8;
  FVar3 = (param_1->SourcePelvisBone).CachedCompactPoseIndex;
  (this->SourcePelvisBone).BoneName = (param_1->SourcePelvisBone).BoneName;
  *(undefined4 *)&(this->SourcePelvisBone).field_0x8 = uVar2;
  (this->SourcePelvisBone).CachedCompactPoseIndex = FVar3;
  uVar2 = *(undefined4 *)&(param_1->TargetPelvisBone).field_0x8;
  FVar3 = (param_1->TargetPelvisBone).CachedCompactPoseIndex;
  (this->TargetPelvisBone).BoneName = (param_1->TargetPelvisBone).BoneName;
  *(undefined4 *)&(this->TargetPelvisBone).field_0x8 = uVar2;
  (this->TargetPelvisBone).CachedCompactPoseIndex = FVar3;
  this->FloorConstraintWeight = param_1->FloorConstraintWeight;
  this->SourceCrotchOffset = param_1->SourceCrotchOffset;
  this->TargetCrotchOffset = param_1->TargetCrotchOffset;
  this->RotationAlpha = param_1->RotationAlpha;
  dVar1 = (param_1->RotationOffsetLocal).Yaw;
  (this->RotationOffsetLocal).Pitch = (param_1->RotationOffsetLocal).Pitch;
  (this->RotationOffsetLocal).Yaw = dVar1;
  (this->RotationOffsetLocal).Roll = (param_1->RotationOffsetLocal).Roll;
  dVar1 = (param_1->RotationOffsetGlobal).Yaw;
  (this->RotationOffsetGlobal).Pitch = (param_1->RotationOffsetGlobal).Pitch;
  (this->RotationOffsetGlobal).Yaw = dVar1;
  (this->RotationOffsetGlobal).Roll = (param_1->RotationOffsetGlobal).Roll;
  this->TranslationAlpha = param_1->TranslationAlpha;
  dVar1 = (param_1->TranslationOffsetLocal).field0_0x0._s_0.Y;
  (this->TranslationOffsetLocal).field0_0x0._s_0.X =
       (param_1->TranslationOffsetLocal).field0_0x0._s_0.X;
  (this->TranslationOffsetLocal).field0_0x0._s_0.Y = dVar1;
  (this->TranslationOffsetLocal).field0_0x0._s_0.Z =
       (param_1->TranslationOffsetLocal).field0_0x0._s_0.Z;
  dVar1 = (param_1->TranslationOffsetGlobal).field0_0x0._s_0.Y;
  (this->TranslationOffsetGlobal).field0_0x0._s_0.X =
       (param_1->TranslationOffsetGlobal).field0_0x0._s_0.X;
  (this->TranslationOffsetGlobal).field0_0x0._s_0.Y = dVar1;
  (this->TranslationOffsetGlobal).field0_0x0._s_0.Z =
       (param_1->TranslationOffsetGlobal).field0_0x0._s_0.Z;
  this->BlendToSourceTranslation = param_1->BlendToSourceTranslation;
  dVar1 = (param_1->BlendToSourceTranslationWeights).field0_0x0._s_0.Y;
  (this->BlendToSourceTranslationWeights).field0_0x0._s_0.X =
       (param_1->BlendToSourceTranslationWeights).field0_0x0._s_0.X;
  (this->BlendToSourceTranslationWeights).field0_0x0._s_0.Y = dVar1;
  (this->BlendToSourceTranslationWeights).field0_0x0._s_0.Z =
       (param_1->BlendToSourceTranslationWeights).field0_0x0._s_0.Z;
  this->ScaleHorizontal = param_1->ScaleHorizontal;
  this->ScaleVertical = param_1->ScaleVertical;
  this->AffectIKHorizontal = param_1->AffectIKHorizontal;
  this->AffectIKVertical = param_1->AffectIKVertical;
  this->DebugDrawSize = param_1->DebugDrawSize;
  this->DebugDrawThickness = param_1->DebugDrawThickness;
  dVar1 = (param_1->TranslationOffset_DEPRECATED).field0_0x0._s_0.Y;
  (this->TranslationOffset_DEPRECATED).field0_0x0._s_0.X =
       (param_1->TranslationOffset_DEPRECATED).field0_0x0._s_0.X;
  (this->TranslationOffset_DEPRECATED).field0_0x0._s_0.Y = dVar1;
  (this->TranslationOffset_DEPRECATED).field0_0x0._s_0.Z =
       (param_1->TranslationOffset_DEPRECATED).field0_0x0._s_0.Z;
  dVar1 = (param_1->RotationOffset_DEPRECATED).Yaw;
  (this->RotationOffset_DEPRECATED).Pitch = (param_1->RotationOffset_DEPRECATED).Pitch;
  (this->RotationOffset_DEPRECATED).Yaw = dVar1;
  (this->RotationOffset_DEPRECATED).Roll = (param_1->RotationOffset_DEPRECATED).Roll;
  this->bEnableDebugDraw_DEPRECATED = param_1->bEnableDebugDraw_DEPRECATED;
  return this;
}

// FIKRetargetPelvisMotionOpSettings @ 14df16920

FIKRetargetPelvisMotionOpSettings * __thiscall
FIKRetargetPelvisMotionOpSettings::FIKRetargetPelvisMotionOpSettings
          (FIKRetargetPelvisMotionOpSettings *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = (longlong)&___7FIKRetargetPelvisMotionOpSettings__6B_;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  (this->SourcePelvisBone).BoneName.ComparisonIndex = 0;
  (this->SourcePelvisBone).BoneName.Number = 0;
  puVar1 = &(this->SourcePelvisBone).field_0x8;
  (this->SourcePelvisBone).BoneIndex = -1;
  (this->SourcePelvisBone).bUseSkeletonIndex = 0;
  (this->SourcePelvisBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->TargetPelvisBone).BoneName.ComparisonIndex = 0;
  (this->TargetPelvisBone).BoneName.Number = 0;
  puVar1 = &(this->TargetPelvisBone).field_0x8;
  (this->TargetPelvisBone).BoneIndex = -1;
  (this->TargetPelvisBone).bUseSkeletonIndex = 0;
  (this->TargetPelvisBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->RotationAlpha = 1.0;
  this->FloorConstraintWeight = 0.0;
  this->SourceCrotchOffset = 0.0;
  this->TargetCrotchOffset = 0.0;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RotationOffsetLocal).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RotationOffsetLocal).Yaw = dVar3;
  (this->RotationOffsetLocal).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RotationOffsetGlobal).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RotationOffsetGlobal).Yaw = dVar3;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->TranslationAlpha = 1.0;
  (this->RotationOffsetGlobal).Roll = dVar3;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TranslationOffsetLocal).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TranslationOffsetLocal).field0_0x0._s_0.Y = (double)uVar2;
  (this->TranslationOffsetLocal).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TranslationOffsetGlobal).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TranslationOffsetGlobal).field0_0x0._s_0.Y = (double)uVar2;
  (this->TranslationOffsetGlobal).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->BlendToSourceTranslation = 0.0;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->BlendToSourceTranslationWeights).field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->BlendToSourceTranslationWeights).field0_0x0._s_0.Y = (double)uVar2;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->ScaleHorizontal = 1.0;
  this->ScaleVertical = 1.0;
  this->AffectIKHorizontal = 1.0;
  this->DebugDrawSize = 5.0;
  this->DebugDrawThickness = 5.0;
  (this->BlendToSourceTranslationWeights).field0_0x0._s_0.Z = (double)uVar2;
  this->AffectIKVertical = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TranslationOffset_DEPRECATED).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TranslationOffset_DEPRECATED).field0_0x0._s_0.Y = (double)uVar2;
  (this->TranslationOffset_DEPRECATED).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RotationOffset_DEPRECATED).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RotationOffset_DEPRECATED).Yaw = dVar3;
  (this->RotationOffset_DEPRECATED).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->bEnableDebugDraw_DEPRECATED = true;
  return this;
}

// operator= @ 14df1dac0

FIKRetargetPelvisMotionOpSettings * __thiscall
FIKRetargetPelvisMotionOpSettings::operator=
          (FIKRetargetPelvisMotionOpSettings *this,FIKRetargetPelvisMotionOpSettings *param_1)

{
  undefined4 uVar1;
  double dVar2;
  
  FIKRetargetOpSettingsBase::operator=
            ((FIKRetargetOpSettingsBase *)this,(FIKRetargetOpSettingsBase *)param_1);
  (this->SourcePelvisBone).BoneName = (param_1->SourcePelvisBone).BoneName;
  uVar1 = *(undefined4 *)&(param_1->SourcePelvisBone).field_0x8;
  *(uint *)&(this->SourcePelvisBone).field_0x8 =
       (uVar1 ^ *(uint *)&(this->SourcePelvisBone).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->SourcePelvisBone).field_0x8 =
       ((param_1->SourcePelvisBone).BoneIndex ^ SPULL(uVar1,0,0x1f)) & 0x7fffffffU ^
       *(uint *)&(param_1->SourcePelvisBone).field_0x8;
  (this->SourcePelvisBone).CachedCompactPoseIndex =
       (param_1->SourcePelvisBone).CachedCompactPoseIndex;
  (this->TargetPelvisBone).BoneName = (param_1->TargetPelvisBone).BoneName;
  uVar1 = *(undefined4 *)&(param_1->TargetPelvisBone).field_0x8;
  *(uint *)&(this->TargetPelvisBone).field_0x8 =
       (uVar1 ^ *(uint *)&(this->TargetPelvisBone).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->TargetPelvisBone).field_0x8 =
       ((param_1->TargetPelvisBone).BoneIndex ^ SPULL(uVar1,0,0x1f)) & 0x7fffffffU ^
       *(uint *)&(param_1->TargetPelvisBone).field_0x8;
  (this->TargetPelvisBone).CachedCompactPoseIndex =
       (param_1->TargetPelvisBone).CachedCompactPoseIndex;
  this->FloorConstraintWeight = param_1->FloorConstraintWeight;
  this->SourceCrotchOffset = param_1->SourceCrotchOffset;
  this->TargetCrotchOffset = param_1->TargetCrotchOffset;
  this->RotationAlpha = param_1->RotationAlpha;
  dVar2 = (param_1->RotationOffsetLocal).Yaw;
  (this->RotationOffsetLocal).Pitch = (param_1->RotationOffsetLocal).Pitch;
  (this->RotationOffsetLocal).Yaw = dVar2;
  (this->RotationOffsetLocal).Roll = (param_1->RotationOffsetLocal).Roll;
  dVar2 = (param_1->RotationOffsetGlobal).Yaw;
  (this->RotationOffsetGlobal).Pitch = (param_1->RotationOffsetGlobal).Pitch;
  (this->RotationOffsetGlobal).Yaw = dVar2;
  (this->RotationOffsetGlobal).Roll = (param_1->RotationOffsetGlobal).Roll;
  this->TranslationAlpha = param_1->TranslationAlpha;
  dVar2 = (param_1->TranslationOffsetLocal).field0_0x0._s_0.Y;
  (this->TranslationOffsetLocal).field0_0x0._s_0.X =
       (param_1->TranslationOffsetLocal).field0_0x0._s_0.X;
  (this->TranslationOffsetLocal).field0_0x0._s_0.Y = dVar2;
  (this->TranslationOffsetLocal).field0_0x0._s_0.Z =
       (param_1->TranslationOffsetLocal).field0_0x0._s_0.Z;
  dVar2 = (param_1->TranslationOffsetGlobal).field0_0x0._s_0.Y;
  (this->TranslationOffsetGlobal).field0_0x0._s_0.X =
       (param_1->TranslationOffsetGlobal).field0_0x0._s_0.X;
  (this->TranslationOffsetGlobal).field0_0x0._s_0.Y = dVar2;
  (this->TranslationOffsetGlobal).field0_0x0._s_0.Z =
       (param_1->TranslationOffsetGlobal).field0_0x0._s_0.Z;
  this->BlendToSourceTranslation = param_1->BlendToSourceTranslation;
  dVar2 = (param_1->BlendToSourceTranslationWeights).field0_0x0._s_0.Y;
  (this->BlendToSourceTranslationWeights).field0_0x0._s_0.X =
       (param_1->BlendToSourceTranslationWeights).field0_0x0._s_0.X;
  (this->BlendToSourceTranslationWeights).field0_0x0._s_0.Y = dVar2;
  (this->BlendToSourceTranslationWeights).field0_0x0._s_0.Z =
       (param_1->BlendToSourceTranslationWeights).field0_0x0._s_0.Z;
  this->ScaleHorizontal = param_1->ScaleHorizontal;
  this->ScaleVertical = param_1->ScaleVertical;
  this->AffectIKHorizontal = param_1->AffectIKHorizontal;
  this->AffectIKVertical = param_1->AffectIKVertical;
  this->DebugDrawSize = param_1->DebugDrawSize;
  this->DebugDrawThickness = param_1->DebugDrawThickness;
  dVar2 = (param_1->TranslationOffset_DEPRECATED).field0_0x0._s_0.Y;
  (this->TranslationOffset_DEPRECATED).field0_0x0._s_0.X =
       (param_1->TranslationOffset_DEPRECATED).field0_0x0._s_0.X;
  (this->TranslationOffset_DEPRECATED).field0_0x0._s_0.Y = dVar2;
  (this->TranslationOffset_DEPRECATED).field0_0x0._s_0.Z =
       (param_1->TranslationOffset_DEPRECATED).field0_0x0._s_0.Z;
  dVar2 = (param_1->RotationOffset_DEPRECATED).Yaw;
  (this->RotationOffset_DEPRECATED).Pitch = (param_1->RotationOffset_DEPRECATED).Pitch;
  (this->RotationOffset_DEPRECATED).Yaw = dVar2;
  (this->RotationOffset_DEPRECATED).Roll = (param_1->RotationOffset_DEPRECATED).Roll;
  this->bEnableDebugDraw_DEPRECATED = param_1->bEnableDebugDraw_DEPRECATED;
  return this;
}

// CopySettingsAtRuntime @ 14df2dd00

void __thiscall
FIKRetargetPelvisMotionOpSettings::CopySettingsAtRuntime
          (FIKRetargetPelvisMotionOpSettings *this,FIKRetargetOpSettingsBase *param_1)

{
  UPackage *pUVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  FName local_18;
  FName FStack_10;
  
  ::FName::FName(&local_18,"SourcePelvisBone");
  ::FName::FName(&FStack_10,"TargetPelvisBone");
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&local_28.AllocatorInstance,2,&local_28.ArrayMax);
  *(FName *)local_28.AllocatorInstance.Data = local_18;
  *(FName *)(local_28.AllocatorInstance.Data + 8) = FStack_10;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOpSettings,
                         (UObject *)pUVar1,L"IKRetargetPelvisMotionOpSettings");
  }
  FIKRetargetOpBase::CopyStructProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton,
             param_1,this,&local_28);
  if ((FName *)local_28.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// GetControllerType @ 14df37dd0

UClass * __thiscall
FIKRetargetPelvisMotionOpSettings::GetControllerType(FIKRetargetPelvisMotionOpSettings *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetPelvisMotionController.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetPelvisMotionController",
               &Z_Registration_Info_UClass_UIKRetargetPelvisMotionController.InnerSingleton,
               UIKRetargetPelvisMotionController::
               StaticRegisterNativesUIKRetargetPelvisMotionController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetPelvisMotionController>,
               InternalVTableHelperCtorCaller<UIKRetargetPelvisMotionController>,aFStackX_8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetPelvisMotionController.InnerSingleton;
}

// PostLoad @ 14df4c490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FIKRetargetPelvisMotionOpSettings::PostLoad(FIKRetargetPelvisMotionOpSettings *this,Type param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((int)param_1 < 10) {
    *(bool *)((longlong)&this->_padding_ + 4) = this->bEnableDebugDraw_DEPRECATED;
  }
  else if (10 < (int)param_1) {
    return;
  }
  dVar2 = (this->TranslationOffset_DEPRECATED).field0_0x0._s_0.Y;
  dVar1 = (this->TranslationOffset_DEPRECATED).field0_0x0._s_0.Z;
  (this->TranslationOffsetGlobal).field0_0x0._s_0.X =
       (this->TranslationOffset_DEPRECATED).field0_0x0._s_0.X;
  (this->TranslationOffsetGlobal).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->RotationOffset_DEPRECATED).Pitch;
  dVar3 = (this->RotationOffset_DEPRECATED).Yaw;
  (this->TranslationOffsetGlobal).field0_0x0._s_0.Z = dVar1;
  dVar1 = (this->RotationOffset_DEPRECATED).Roll;
  (this->RotationOffsetLocal).Pitch = dVar2;
  (this->RotationOffsetLocal).Yaw = dVar3;
  (this->RotationOffsetLocal).Roll = dVar1;
  return;
}

// Serialize @ 14df537b0

bool __thiscall
FIKRetargetPelvisMotionOpSettings::Serialize
          (FIKRetargetPelvisMotionOpSettings *this,FArchive *param_1)

{
  UScriptStruct *this_00;
  int iVar1;
  UPackage *pUVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOpSettings,
                         (UObject *)pUVar2,L"IKRetargetPelvisMotionOpSettings");
  }
  this_00 = Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOpSettings,
                         (UObject *)pUVar2,L"IKRetargetPelvisMotionOpSettings");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)this_00,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FIKRigObjectVersion::GUID);
    (**(code **)(this->_padding_ + 0x10))(this,iVar1);
  }
  return true;
}

