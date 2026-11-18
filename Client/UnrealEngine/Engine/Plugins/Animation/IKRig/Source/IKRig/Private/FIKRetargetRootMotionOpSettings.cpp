// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 7

// StaticStruct @ 14def58c0

UScriptStruct * __cdecl FIKRetargetRootMotionOpSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRootMotionOpSettings,(UObject *)pUVar1
                         ,L"IKRetargetRootMotionOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton;
}

// FIKRetargetRootMotionOpSettings @ 14df17280

FIKRetargetRootMotionOpSettings * __thiscall
FIKRetargetRootMotionOpSettings::FIKRetargetRootMotionOpSettings
          (FIKRetargetRootMotionOpSettings *this,FIKRetargetRootMotionOpSettings *param_1)

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
  this->_padding_ = (longlong)&___7FIKRetargetRootMotionOpSettings__6B_;
  uVar2 = *(undefined4 *)&(param_1->SourceRoot).field_0x8;
  FVar3 = (param_1->SourceRoot).CachedCompactPoseIndex;
  (this->SourceRoot).BoneName = (param_1->SourceRoot).BoneName;
  *(undefined4 *)&(this->SourceRoot).field_0x8 = uVar2;
  (this->SourceRoot).CachedCompactPoseIndex = FVar3;
  uVar2 = *(undefined4 *)&(param_1->TargetRoot).field_0x8;
  FVar3 = (param_1->TargetRoot).CachedCompactPoseIndex;
  (this->TargetRoot).BoneName = (param_1->TargetRoot).BoneName;
  *(undefined4 *)&(this->TargetRoot).field_0x8 = uVar2;
  (this->TargetRoot).CachedCompactPoseIndex = FVar3;
  this->RootMotionSource = param_1->RootMotionSource;
  uVar2 = *(undefined4 *)&(param_1->TargetPelvis).field_0x8;
  FVar3 = (param_1->TargetPelvis).CachedCompactPoseIndex;
  (this->TargetPelvis).BoneName = (param_1->TargetPelvis).BoneName;
  *(undefined4 *)&(this->TargetPelvis).field_0x8 = uVar2;
  (this->TargetPelvis).CachedCompactPoseIndex = FVar3;
  this->bRotateWithPelvis = param_1->bRotateWithPelvis;
  this->RootHeightSource = param_1->RootHeightSource;
  dVar1 = (param_1->GlobalOffset).Rotation.XY.m128d_f64[1];
  (this->GlobalOffset).Rotation.XY.m128d_f64[0] = (param_1->GlobalOffset).Rotation.XY.m128d_f64[0];
  (this->GlobalOffset).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->GlobalOffset).Rotation.ZW.m128d_f64[1];
  (this->GlobalOffset).Rotation.ZW.m128d_f64[0] = (param_1->GlobalOffset).Rotation.ZW.m128d_f64[0];
  (this->GlobalOffset).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->GlobalOffset).Translation.XY.m128d_f64[1];
  (this->GlobalOffset).Translation.XY.m128d_f64[0] =
       (param_1->GlobalOffset).Translation.XY.m128d_f64[0];
  (this->GlobalOffset).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->GlobalOffset).Translation.ZW.m128d_f64[1];
  (this->GlobalOffset).Translation.ZW.m128d_f64[0] =
       (param_1->GlobalOffset).Translation.ZW.m128d_f64[0];
  (this->GlobalOffset).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->GlobalOffset).Scale3D.XY.m128d_f64[1];
  (this->GlobalOffset).Scale3D.XY.m128d_f64[0] = (param_1->GlobalOffset).Scale3D.XY.m128d_f64[0];
  (this->GlobalOffset).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->GlobalOffset).Scale3D.ZW.m128d_f64[1];
  (this->GlobalOffset).Scale3D.ZW.m128d_f64[0] = (param_1->GlobalOffset).Scale3D.ZW.m128d_f64[0];
  (this->GlobalOffset).Scale3D.ZW.m128d_f64[1] = dVar1;
  this->bMaintainOffsetFromPelvis = param_1->bMaintainOffsetFromPelvis;
  this->bPropagateToNonRetargetedChildren = param_1->bPropagateToNonRetargetedChildren;
  this->SourceRootBone_DEPRECATED = param_1->SourceRootBone_DEPRECATED;
  this->TargetRootBone_DEPRECATED = param_1->TargetRootBone_DEPRECATED;
  this->TargetPelvisBone_DEPRECATED = param_1->TargetPelvisBone_DEPRECATED;
  return this;
}

// operator= @ 14df1dfe0

FIKRetargetRootMotionOpSettings * __thiscall
FIKRetargetRootMotionOpSettings::operator=
          (FIKRetargetRootMotionOpSettings *this,FIKRetargetRootMotionOpSettings *param_1)

{
  undefined4 uVar1;
  double dVar2;
  
  FIKRetargetOpSettingsBase::operator=
            ((FIKRetargetOpSettingsBase *)this,(FIKRetargetOpSettingsBase *)param_1);
  (this->SourceRoot).BoneName = (param_1->SourceRoot).BoneName;
  uVar1 = *(undefined4 *)&(param_1->SourceRoot).field_0x8;
  *(uint *)&(this->SourceRoot).field_0x8 =
       (uVar1 ^ *(uint *)&(this->SourceRoot).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->SourceRoot).field_0x8 =
       ((param_1->SourceRoot).BoneIndex ^ SPULL(uVar1,0,0x1f)) & 0x7fffffffU ^
       *(uint *)&(param_1->SourceRoot).field_0x8;
  (this->SourceRoot).CachedCompactPoseIndex = (param_1->SourceRoot).CachedCompactPoseIndex;
  (this->TargetRoot).BoneName = (param_1->TargetRoot).BoneName;
  uVar1 = *(undefined4 *)&(param_1->TargetRoot).field_0x8;
  *(uint *)&(this->TargetRoot).field_0x8 =
       (uVar1 ^ *(uint *)&(this->TargetRoot).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->TargetRoot).field_0x8 =
       ((param_1->TargetRoot).BoneIndex ^ SPULL(uVar1,0,0x1f)) & 0x7fffffffU ^
       *(uint *)&(param_1->TargetRoot).field_0x8;
  (this->TargetRoot).CachedCompactPoseIndex = (param_1->TargetRoot).CachedCompactPoseIndex;
  this->RootMotionSource = param_1->RootMotionSource;
  (this->TargetPelvis).BoneName = (param_1->TargetPelvis).BoneName;
  uVar1 = *(undefined4 *)&(param_1->TargetPelvis).field_0x8;
  *(uint *)&(this->TargetPelvis).field_0x8 =
       (uVar1 ^ *(uint *)&(this->TargetPelvis).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->TargetPelvis).field_0x8 =
       ((param_1->TargetPelvis).BoneIndex ^ SPULL(uVar1,0,0x1f)) & 0x7fffffffU ^
       *(uint *)&(param_1->TargetPelvis).field_0x8;
  (this->TargetPelvis).CachedCompactPoseIndex = (param_1->TargetPelvis).CachedCompactPoseIndex;
  this->bRotateWithPelvis = param_1->bRotateWithPelvis;
  this->RootHeightSource = param_1->RootHeightSource;
  dVar2 = (param_1->GlobalOffset).Rotation.XY.m128d_f64[1];
  (this->GlobalOffset).Rotation.XY.m128d_f64[0] = (param_1->GlobalOffset).Rotation.XY.m128d_f64[0];
  (this->GlobalOffset).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->GlobalOffset).Rotation.ZW.m128d_f64[1];
  (this->GlobalOffset).Rotation.ZW.m128d_f64[0] = (param_1->GlobalOffset).Rotation.ZW.m128d_f64[0];
  (this->GlobalOffset).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->GlobalOffset).Translation.XY.m128d_f64[1];
  (this->GlobalOffset).Translation.XY.m128d_f64[0] =
       (param_1->GlobalOffset).Translation.XY.m128d_f64[0];
  (this->GlobalOffset).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->GlobalOffset).Translation.ZW.m128d_f64[1];
  (this->GlobalOffset).Translation.ZW.m128d_f64[0] =
       (param_1->GlobalOffset).Translation.ZW.m128d_f64[0];
  (this->GlobalOffset).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->GlobalOffset).Scale3D.XY.m128d_f64[1];
  (this->GlobalOffset).Scale3D.XY.m128d_f64[0] = (param_1->GlobalOffset).Scale3D.XY.m128d_f64[0];
  (this->GlobalOffset).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->GlobalOffset).Scale3D.ZW.m128d_f64[1];
  (this->GlobalOffset).Scale3D.ZW.m128d_f64[0] = (param_1->GlobalOffset).Scale3D.ZW.m128d_f64[0];
  (this->GlobalOffset).Scale3D.ZW.m128d_f64[1] = dVar2;
  this->bMaintainOffsetFromPelvis = param_1->bMaintainOffsetFromPelvis;
  this->bPropagateToNonRetargetedChildren = param_1->bPropagateToNonRetargetedChildren;
  this->SourceRootBone_DEPRECATED = param_1->SourceRootBone_DEPRECATED;
  this->TargetRootBone_DEPRECATED = param_1->TargetRootBone_DEPRECATED;
  this->TargetPelvisBone_DEPRECATED = param_1->TargetPelvisBone_DEPRECATED;
  return this;
}

// CopySettingsAtRuntime @ 14df2ded0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FIKRetargetRootMotionOpSettings::CopySettingsAtRuntime
          (FIKRetargetRootMotionOpSettings *this,FIKRetargetOpSettingsBase *param_1)

{
  UPackage *pUVar1;
  undefined1 auStackY_78 [32];
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  FName local_28;
  FName FStack_20;
  FName local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  ::FName::FName(&local_28,"SourceRootBone");
  ::FName::FName(&FStack_20,"TargetRootBone");
  ::FName::FName(&local_18,"TargetPelvisBone");
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,3,0,&local_38.AllocatorInstance,3,&local_38.ArrayMax);
  *(FName *)local_38.AllocatorInstance.Data = local_28;
  *(FName *)(local_38.AllocatorInstance.Data + 8) = FStack_20;
  *(FName *)(local_38.AllocatorInstance.Data + 0x10) = local_18;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRootMotionOpSettings,(UObject *)pUVar1
                         ,L"IKRetargetRootMotionOpSettings");
  }
  FIKRetargetOpBase::CopyStructProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton,
             param_1,this,&local_38);
  if ((FName *)local_38.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// GetControllerType @ 14df37df0

UClass * __thiscall
FIKRetargetRootMotionOpSettings::GetControllerType(FIKRetargetRootMotionOpSettings *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetRootMotionController.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetRootMotionController",
               &Z_Registration_Info_UClass_UIKRetargetRootMotionController.InnerSingleton,
               UIKRetargetRootMotionController::StaticRegisterNativesUIKRetargetRootMotionController
               ,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetRootMotionController>,
               InternalVTableHelperCtorCaller<UIKRetargetRootMotionController>,aFStackX_8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetRootMotionController.InnerSingleton;
}

// PostLoad @ 14df4c570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FIKRetargetRootMotionOpSettings::PostLoad(FIKRetargetRootMotionOpSettings *this,Type param_1)

{
  if ((int)param_1 < 5) {
    (this->SourceRoot).BoneName = this->SourceRootBone_DEPRECATED;
    (this->TargetRoot).BoneName = this->TargetRootBone_DEPRECATED;
    (this->TargetPelvis).BoneName = this->TargetPelvisBone_DEPRECATED;
  }
  return;
}

// Serialize @ 14df53970

bool __thiscall
FIKRetargetRootMotionOpSettings::Serialize(FIKRetargetRootMotionOpSettings *this,FArchive *param_1)

{
  UScriptStruct *this_00;
  int iVar1;
  UPackage *pUVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRootMotionOpSettings,(UObject *)pUVar2
                         ,L"IKRetargetRootMotionOpSettings");
  }
  this_00 = Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRootMotionOpSettings,(UObject *)pUVar2
                         ,L"IKRetargetRootMotionOpSettings");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)this_00,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FIKRigObjectVersion::GUID);
    (**(code **)(this->_padding_ + 0x10))(this,iVar1);
  }
  return true;
}

