// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d649c80

UClass * __cdecl UIsCameraRigTransitionCondition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIsCameraRigTransitionCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"IsCameraRigTransitionCondition",
               &Z_Registration_Info_UClass_UIsCameraRigTransitionCondition.InnerSingleton,
               StaticRegisterNativesUIsCameraRigTransitionCondition,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIsCameraRigTransitionCondition>,
               InternalVTableHelperCtorCaller<UIsCameraRigTransitionCondition>,local_res8,
               UCameraRigTransitionCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIsCameraRigTransitionCondition.InnerSingleton;
}

// UIsCameraRigTransitionCondition @ 14d657790

UIsCameraRigTransitionCondition * __thiscall
UIsCameraRigTransitionCondition::UIsCameraRigTransitionCondition
          (UIsCameraRigTransitionCondition *this,FVTableHelper *param_1)

{
  UCameraRigTransitionCondition::UCameraRigTransitionCondition
            ((UCameraRigTransitionCondition *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->PreviousCameraRig).field0_0x0.DebugPtr = (UCameraRigAsset *)0x0;
  (this->NextCameraRig).field0_0x0.DebugPtr = (UCameraRigAsset *)0x0;
  return this;
}

// UIsCameraRigTransitionCondition @ 14d6577d0

UIsCameraRigTransitionCondition * __thiscall
UIsCameraRigTransitionCondition::UIsCameraRigTransitionCondition
          (UIsCameraRigTransitionCondition *this,FObjectInitializer *param_1)

{
  UCameraRigTransitionCondition::UCameraRigTransitionCondition
            ((UCameraRigTransitionCondition *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->PreviousCameraRig).field0_0x0.DebugPtr = (UCameraRigAsset *)0x0;
  (this->NextCameraRig).field0_0x0.DebugPtr = (UCameraRigAsset *)0x0;
  return this;
}

// ~UIsCameraRigTransitionCondition @ 14d6585f0

void __thiscall
UIsCameraRigTransitionCondition::~UIsCameraRigTransitionCondition
          (UIsCameraRigTransitionCondition *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraRigTransitionCondition::~UCameraRigTransitionCondition
            ((UCameraRigTransitionCondition *)this);
  return;
}

// GetPrivateStaticClass @ 14d661110

UClass * __cdecl UIsCameraRigTransitionCondition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIsCameraRigTransitionCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"IsCameraRigTransitionCondition",
               &Z_Registration_Info_UClass_UIsCameraRigTransitionCondition.InnerSingleton,
               StaticRegisterNativesUIsCameraRigTransitionCondition,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UIsCameraRigTransitionCondition>,
               InternalVTableHelperCtorCaller<UIsCameraRigTransitionCondition>,local_res8,
               UCameraRigTransitionCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIsCameraRigTransitionCondition.InnerSingleton;
}

// OnTransitionMatches @ 14d66f010

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UIsCameraRigTransitionCondition::OnTransitionMatches
          (UIsCameraRigTransitionCondition *this,FCameraRigTransitionConditionMatchParams *param_1)

{
  UCameraRigAsset *pUVar1;
  bool bVar2;
  bool bVar3;
  
  pUVar1 = (this->PreviousCameraRig).field0_0x0.DebugPtr;
  if ((pUVar1 == (UCameraRigAsset *)0x0) || (pUVar1 == param_1->FromCameraRig)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  pUVar1 = (this->NextCameraRig).field0_0x0.DebugPtr;
  if ((pUVar1 == (UCameraRigAsset *)0x0) || (pUVar1 == param_1->ToCameraRig)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((bVar2) && (bVar3)) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUIsCameraRigTransitionCondition @ 14d673430

void __cdecl
UIsCameraRigTransitionCondition::StaticRegisterNativesUIsCameraRigTransitionCondition(void)

{
  return;
}

