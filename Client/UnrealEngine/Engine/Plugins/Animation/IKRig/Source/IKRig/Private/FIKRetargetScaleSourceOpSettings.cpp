// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 5

// StaticStruct @ 14def4760

UScriptStruct * __cdecl FIKRetargetScaleSourceOpSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetScaleSourceOpSettings,
                         (UObject *)pUVar1,L"IKRetargetScaleSourceOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOpSettings.OuterSingleton;
}

// FIKRetargetScaleSourceOpSettings @ 14df175b0

FIKRetargetScaleSourceOpSettings * __thiscall
FIKRetargetScaleSourceOpSettings::FIKRetargetScaleSourceOpSettings
          (FIKRetargetScaleSourceOpSettings *this,FIKRetargetScaleSourceOpSettings *param_1)

{
  UObjectBase *this_00;
  undefined4 uVar1;
  FCompactPoseBoneIndex FVar2;
  
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
  this->_padding_ = (longlong)&___7FIKRetargetScaleSourceOpSettings__6B_;
  this->SourceScaleFactor = param_1->SourceScaleFactor;
  this->ScalePivot = param_1->ScalePivot;
  uVar1 = *(undefined4 *)&(param_1->ScalePivotBone).field_0x8;
  FVar2 = (param_1->ScalePivotBone).CachedCompactPoseIndex;
  (this->ScalePivotBone).BoneName = (param_1->ScalePivotBone).BoneName;
  *(undefined4 *)&(this->ScalePivotBone).field_0x8 = uVar1;
  (this->ScalePivotBone).CachedCompactPoseIndex = FVar2;
  this->bProjectScalePivotToFloor = param_1->bProjectScalePivotToFloor;
  return this;
}

// operator= @ 14df1e1c0

FIKRetargetScaleSourceOpSettings * __thiscall
FIKRetargetScaleSourceOpSettings::operator=
          (FIKRetargetScaleSourceOpSettings *this,FIKRetargetScaleSourceOpSettings *param_1)

{
  undefined4 uVar1;
  
  FIKRetargetOpSettingsBase::operator=
            ((FIKRetargetOpSettingsBase *)this,(FIKRetargetOpSettingsBase *)param_1);
  this->SourceScaleFactor = param_1->SourceScaleFactor;
  this->ScalePivot = param_1->ScalePivot;
  (this->ScalePivotBone).BoneName = (param_1->ScalePivotBone).BoneName;
  uVar1 = *(undefined4 *)&(param_1->ScalePivotBone).field_0x8;
  *(uint *)&(this->ScalePivotBone).field_0x8 =
       (uVar1 ^ *(uint *)&(this->ScalePivotBone).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->ScalePivotBone).field_0x8 =
       ((param_1->ScalePivotBone).BoneIndex ^ SPULL(uVar1,0,0x1f)) & 0x7fffffffU ^
       *(uint *)&(param_1->ScalePivotBone).field_0x8;
  (this->ScalePivotBone).CachedCompactPoseIndex = (param_1->ScalePivotBone).CachedCompactPoseIndex;
  this->bProjectScalePivotToFloor = param_1->bProjectScalePivotToFloor;
  return this;
}

// CopySettingsAtRuntime @ 14df2e0d0

void __thiscall
FIKRetargetScaleSourceOpSettings::CopySettingsAtRuntime
          (FIKRetargetScaleSourceOpSettings *this,FIKRetargetOpSettingsBase *param_1)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FIKRetargetScaleSourceOpSettings::CopySettingsAtRuntime'::__l2::
             _dynamic_atexit_destructor_for__PropertiesToIgnore__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetScaleSourceOpSettings,
                         (UObject *)pUVar1,L"IKRetargetScaleSourceOpSettings");
  }
  FIKRetargetOpBase::CopyStructProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOpSettings.OuterSingleton,
             param_1,this,&PropertiesToIgnore);
  return;
}

// GetControllerType @ 14df37e10

UClass * __thiscall
FIKRetargetScaleSourceOpSettings::GetControllerType(FIKRetargetScaleSourceOpSettings *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetScaleSourceController.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetScaleSourceController",
               &Z_Registration_Info_UClass_UIKRetargetScaleSourceController.InnerSingleton,
               UIKRetargetScaleSourceController::
               StaticRegisterNativesUIKRetargetScaleSourceController,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIKRetargetScaleSourceController>,
               InternalVTableHelperCtorCaller<UIKRetargetScaleSourceController>,aFStackX_8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetScaleSourceController.InnerSingleton;
}

