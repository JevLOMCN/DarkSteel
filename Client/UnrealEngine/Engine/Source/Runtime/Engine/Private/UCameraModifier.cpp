// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 30

// StaticClass @ 1476722f0

UClass * __cdecl UCameraModifier::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraModifier",
               &Z_Registration_Info_UClass_UCameraModifier.InnerSingleton,
               StaticRegisterNativesUCameraModifier,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraModifier>,InternalVTableHelperCtorCaller<UCameraModifier>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraModifier.InnerSingleton;
}

// UCameraModifier @ 147688dd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraModifier * __thiscall
UCameraModifier::UCameraModifier(UCameraModifier *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCameraModifier__6B_;
  (this->CameraOwner).field0_0x0.DebugPtr = (APlayerCameraManager *)0x0;
  return this;
}

// UCameraModifier @ 147688e00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraModifier * __thiscall
UCameraModifier::UCameraModifier(UCameraModifier *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Priority = '\x7f';
  this->_padding_ = (longlong)&___7UCameraModifier__6B_;
  (this->CameraOwner).field0_0x0.DebugPtr = (APlayerCameraManager *)0x0;
  return this;
}

// ~UCameraModifier @ 14768aad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraModifier::~UCameraModifier(UCameraModifier *this)

{
  this->_padding_ = (longlong)&___7UCameraModifier__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddedToCamera @ 147694040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraModifier::AddedToCamera(UCameraModifier *this,APlayerCameraManager *param_1)

{
  APlayerCameraManager *this_00;
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  FName local_res8;
  FName local_res10;
  
  this_00 = (this->CameraOwner).field0_0x0.DebugPtr;
  pcVar6 = &DAT_00000002;
  if (this_00 != (APlayerCameraManager *)0x0) {
    pcVar4 = strstr("&UCameraModifier::OnCameraOwnerDestroyed","::");
    if (pcVar4 == (char *)0x0) {
LAB_1476940ba:
      pcVar5 = &DAT_00000002;
LAB_1476940bd:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      do {
        pcVar5 = pcVar4;
        pcVar4 = strstr(pcVar5 + 1,"::");
      } while (pcVar4 != (char *)0x0);
      if (pcVar5 == (char *)0x0) goto LAB_1476940ba;
      pcVar5 = pcVar5 + 2;
      if (*pcVar5 == '0') goto LAB_1476940bd;
    }
    ::FName::FName(&local_res8,pcVar5);
    if (*(char *)((longlong)&this_00->_padding_ + 6) != '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnDestroyed");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
              ::__l2::DelegateFName;
      bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this_00,false);
      if ((!bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DelegateOwner->IsValidLowLevelFast(false)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                             ,0xd7,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar3 = FSparseDelegateStorage::Remove((UObject *)this_00,FVar2,(UObject *)this,local_res8);
      *(bool *)((longlong)&this_00->_padding_ + 6) = bVar3;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (param_1 == (APlayerCameraManager *)0x0)) {
    (this->CameraOwner).field0_0x0.DebugPtr = param_1;
    if (param_1 == (APlayerCameraManager *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->CameraOwner).field0_0x0.DebugPtr = param_1;
  }
  pcVar4 = strstr("&UCameraModifier::OnCameraOwnerDestroyed","::");
  if (pcVar4 != (char *)0x0) {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if ((pcVar5 != (char *)0x0) && (pcVar6 = pcVar5 + 2, pcVar5[2] != '0')) goto LAB_147694228;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_147694228:
  ::FName::FName(&local_res10,pcVar6);
  TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
  ::__Internal_AddDynamic<UCameraModifier>
            ((TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
              *)((longlong)&param_1->_padding_ + 6),this,(pmf_1e07ff77)0x1476bd970,local_res10);
  return;
}

// BlueprintModifyCamera @ 1476950f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraModifier::BlueprintModifyCamera
          (UCameraModifier *this,float param_1,TVector<double> *param_2,TRotator<double> *param_3,
          float param_4,TVector<double> *param_5,TRotator<double> *param_6,float *param_7)

{
  UFunction *pUVar1;
  float local_88 [2];
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  float local_50;
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double dStack_28;
  double local_20;
  float local_18;
  
  local_80 = (param_2->field0_0x0)._s_0.X;
  dStack_78 = (param_2->field0_0x0)._s_0.Y;
  local_70 = (param_2->field0_0x0)._s_0.Z;
  local_68 = param_3->Pitch;
  dStack_60 = param_3->Yaw;
  local_58 = param_3->Roll;
  local_50 = param_4;
  local_48 = (param_5->field0_0x0)._s_0.X;
  dStack_40 = (param_5->field0_0x0)._s_0.Y;
  local_38 = (param_5->field0_0x0)._s_0.Z;
  local_30 = param_6->Pitch;
  dStack_28 = param_6->Yaw;
  local_20 = param_6->Roll;
  local_18 = *param_7;
  local_88[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCameraModifier_BlueprintModifyCamera);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_88);
  (param_5->field0_0x0)._s_0.X = local_48;
  (param_5->field0_0x0)._s_0.Y = dStack_40;
  (param_5->field0_0x0)._s_0.Z = local_38;
  param_6->Pitch = local_30;
  param_6->Yaw = dStack_28;
  param_6->Roll = local_20;
  *param_7 = local_18;
  return;
}

// BlueprintModifyPostProcess @ 147695210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraModifier::BlueprintModifyPostProcess
          (UCameraModifier *this,float param_1,float *param_2,FPostProcessSettings *param_3)

{
  UFunction *pUVar1;
  undefined1 auStack_7d8 [32];
  float local_7b8;
  float local_7b4;
  FPostProcessSettings local_7a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_7d8;
  FPostProcessSettings::FPostProcessSettings(&local_7a8);
  local_7b4 = *param_2;
  local_7b8 = param_1;
  FPostProcessSettings::operator=(&local_7a8,param_3);
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCameraModifier_BlueprintModifyPostProcess);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_7b8);
  *param_2 = local_7b4;
  FPostProcessSettings::operator=(param_3,&local_7a8);
  if (local_7a8.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a8.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return;
}

// DisableModifier @ 14769fce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraModifier::DisableModifier(UCameraModifier *this,bool param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)&this->field_0x28;
  if (param_1) {
    *(uint *)&this->field_0x28 = uVar1 & 0xfffffff7 | 4;
    return;
  }
  if (ZPULL(uVar1,2,1) == 0) {
    *(uint *)&this->field_0x28 = uVar1 | 8;
  }
  return;
}

// DisplayDebug @ 14769fd60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraModifier::DisplayDebug
          (UCameraModifier *this,UCanvas *param_1,FDebugDisplayInfo *param_2,float *param_3,
          float *param_4)

{
  return;
}

// EnableModifier @ 1476a6640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraModifier::EnableModifier(UCameraModifier *this)

{
  undefined1 *puVar1;
  
  this->bDisabled = 0;
  this->bPendingDisable = 0;
  return;
}

// GetPrivateStaticClass @ 1476b45f0

UClass * __cdecl UCameraModifier::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraModifier",
               &Z_Registration_Info_UClass_UCameraModifier.InnerSingleton,
               StaticRegisterNativesUCameraModifier,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraModifier>,InternalVTableHelperCtorCaller<UCameraModifier>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraModifier.InnerSingleton;
}

// GetTargetAlpha @ 1476b5860

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

float __thiscall UCameraModifier::GetTargetAlpha(UCameraModifier *this)

{
  if (this->bPendingDisable != 0) {
    return 0.0;
  }
  return __real_3f800000;
}

// GetViewTarget @ 1476b6540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

AActor * __thiscall UCameraModifier::GetViewTarget(UCameraModifier *this)

{
  APlayerCameraManager *pAVar1;
  AActor *pAVar2;
  
  pAVar1 = (this->CameraOwner).field0_0x0.DebugPtr;
  if (pAVar1 == (APlayerCameraManager *)0x0) {
    return (AActor *)0x0;
  }
  if ((pAVar1->PendingViewTarget).Target.field0_0x0.DebugPtr != (AActor *)0x0) {
    FTViewTarget::CheckViewTarget(&pAVar1->PendingViewTarget,(pAVar1->PCOwner).field0_0x0.DebugPtr);
    pAVar2 = (pAVar1->PendingViewTarget).Target.field0_0x0.DebugPtr;
    if (pAVar2 != (AActor *)0x0) {
      return pAVar2;
    }
  }
  FTViewTarget::CheckViewTarget(&pAVar1->ViewTarget,(pAVar1->PCOwner).field0_0x0.DebugPtr);
  return (pAVar1->ViewTarget).Target.field0_0x0.DebugPtr;
}

// GetWorld @ 1476b6710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UWorld * __thiscall UCameraModifier::GetWorld(UCameraModifier *this)

{
  TObjectPtr<APlayerCameraManager>_u_0 this_00;
  bool bVar1;
  FUObjectItem *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  TObjectPtr<APlayerCameraManager>_u_0 aTStackX_8 [4];
  
  this_00 = (TObjectPtr<APlayerCameraManager>_u_0)(this->CameraOwner).field0_0x0.DebugPtr;
  if (this_00.DebugPtr == (APlayerCameraManager *)0x0) {
    return (UWorld *)0x0;
  }
  if (((this_00.DebugPtr)->_padding_ & 0x10) == 0) {
    if (((this_00.DebugPtr)->_padding_ == 0) &&
       (aTStackX_8[0] = this_00,
       bVar1 = `AActor::GetWorld'::__l3::<lambda_1>::operator()(aTStackX_8), !bVar1)) {
      return (UWorld *)0x0;
    }
    if (((*(uint *)((this_00.DebugPtr)->_padding_ + 8) >> 0xf & 1) == 0) &&
       (pFVar2 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((this_00.DebugPtr)->_padding_ + 0xc)),
       ((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
      pUVar3 = Z_Construct_UClass_ULevel_NoRegister();
      pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00.DebugPtr,pUVar3);
      if (pUVar4 != (UObject *)0x0) {
        return *(UWorld **)&pUVar4[4].field_0x20;
      }
    }
  }
  return (UWorld *)0x0;
}

// IsDisabled @ 1476ba900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall UCameraModifier::IsDisabled(UCameraModifier *this)

{
  return this->bDisabled;
}

// IsPendingDisable @ 1476babf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall UCameraModifier::IsPendingDisable(UCameraModifier *this)

{
  return this->bPendingDisable;
}

// ModifyCamera @ 1476bc600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraModifier::ModifyCamera
          (UCameraModifier *this,float param_1,TVector<double> *param_2,TRotator<double> *param_3,
          float param_4,TVector<double> *param_5,TRotator<double> *param_6,float *param_7)

{
  return;
}

// ModifyCamera @ 1476bc610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UCameraModifier::ModifyCamera(UCameraModifier *this,float param_1,FMinimalViewInfo *param_2)

{
  TRotator<double> *pTVar1;
  float *pfVar2;
  UFunction *pUVar3;
  undefined4 in_XMM1_Db;
  undefined1 auStack_1058 [32];
  float local_1038;
  FMinimalViewInfo *local_1030;
  TRotator<double> *local_1028;
  float *local_1020;
  float local_1018 [4];
  float local_1008 [2];
  double local_1000;
  double dStack_ff8;
  double local_ff0;
  double local_fe8;
  double dStack_fe0;
  double local_fd8;
  float local_fd0;
  double local_fc8;
  double dStack_fc0;
  double local_fb8;
  double local_fb0;
  double dStack_fa8;
  double local_fa0;
  float local_f98;
  double local_f88;
  double dStack_f80;
  double local_f78;
  double local_f68;
  double dStack_f60;
  double local_f58;
  float local_f48;
  float local_f44;
  FPostProcessSettings local_f38;
  FPostProcessSettings local_7c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1058;
  (**(code **)(this->_padding_ + 0x310))();
  local_f88 = (param_2->Rotation).Pitch;
  dStack_f80 = (param_2->Rotation).Yaw;
  pTVar1 = &param_2->Rotation;
  local_f78 = (param_2->Rotation).Roll;
  pfVar2 = &param_2->FOV;
  local_f68 = (param_2->Location).field0_0x0._s_0.X;
  dStack_f60 = (param_2->Location).field0_0x0._s_0.Y;
  local_f58 = (param_2->Location).field0_0x0._s_0.Z;
  local_1038 = *pfVar2;
  local_1030 = param_2;
  local_1028 = pTVar1;
  local_1020 = pfVar2;
  (**(code **)(this->_padding_ + 0x2c8))(this,CONCAT44(in_XMM1_Db,param_1),&local_f68,&local_f88);
  local_1000 = (param_2->Location).field0_0x0._s_0.X;
  dStack_ff8 = (param_2->Location).field0_0x0._s_0.Y;
  local_ff0 = (param_2->Location).field0_0x0._s_0.Z;
  local_fd0 = *pfVar2;
  local_fe8 = pTVar1->Pitch;
  dStack_fe0 = (param_2->Rotation).Yaw;
  local_fd8 = (param_2->Rotation).Roll;
  local_fc8 = (param_2->Location).field0_0x0._s_0.X;
  dStack_fc0 = (param_2->Location).field0_0x0._s_0.Y;
  local_fb8 = (param_2->Location).field0_0x0._s_0.Z;
  local_fb0 = pTVar1->Pitch;
  dStack_fa8 = (param_2->Rotation).Yaw;
  local_fa0 = (param_2->Rotation).Roll;
  local_1008[0] = param_1;
  local_f98 = local_fd0;
  pUVar3 = UObject::FindFunctionChecked((UObject *)this,NAME_UCameraModifier_BlueprintModifyCamera);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar3,local_1008);
  (param_2->Location).field0_0x0._s_0.X = local_fc8;
  (param_2->Location).field0_0x0._s_0.Y = dStack_fc0;
  (param_2->Location).field0_0x0._s_0.Z = local_fb8;
  pTVar1->Pitch = local_fb0;
  (param_2->Rotation).Yaw = dStack_fa8;
  (param_2->Rotation).Roll = local_fa0;
  *pfVar2 = local_f98;
  if ((this->CameraOwner).field0_0x0.DebugPtr != (APlayerCameraManager *)0x0) {
    local_1018[0] = 0.0;
    FPostProcessSettings::FPostProcessSettings(&local_7c8);
    (**(code **)(this->_padding_ + 0x318))(this,CONCAT44(in_XMM1_Db,param_1),local_1018,&local_7c8);
    FPostProcessSettings::FPostProcessSettings(&local_f38);
    local_f44 = local_1018[0];
    local_f48 = param_1;
    FPostProcessSettings::operator=(&local_f38,&local_7c8);
    pUVar3 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UCameraModifier_BlueprintModifyPostProcess);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_f48);
    local_1018[0] = local_f44;
    FPostProcessSettings::operator=(&local_7c8,&local_f38);
    if (local_f38.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_f38.WeightedBlendables.Array.AllocatorInstance.Data);
    }
    if (0.0 < local_1018[0]) {
      APlayerCameraManager::AddCachedPPBlend
                ((this->CameraOwner).field0_0x0.DebugPtr,&local_7c8,local_1018[0],VTBlendOrder_Base)
      ;
    }
    if (local_7c8.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_7c8.WeightedBlendables.Array.AllocatorInstance.Data);
    }
  }
  if ((this->bPendingDisable != 0) && (this->Alpha <= 0.0)) {
    (**(code **)(this->_padding_ + 0x2f0))(this,1);
  }
  return false;
}

// ModifyPostProcess @ 1476bd4e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraModifier::ModifyPostProcess
          (UCameraModifier *this,float param_1,float *param_2,FPostProcessSettings *param_3)

{
  return;
}

// OnCameraOwnerDestroyed @ 1476bd970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraModifier::OnCameraOwnerDestroyed(UCameraModifier *this,AActor *param_1)

{
  APlayerCameraManager *pAVar1;
  bool bVar2;
  
  pAVar1 = (this->CameraOwner).field0_0x0.DebugPtr;
  if (pAVar1 == (APlayerCameraManager *)0x0) {
    bVar2 = param_1 == (AActor *)0x0;
  }
  else {
    bVar2 = pAVar1 == (APlayerCameraManager *)param_1;
  }
  if (bVar2) {
    (this->CameraOwner).field0_0x0.DebugPtr = (APlayerCameraManager *)0x0;
  }
  return;
}

// ProcessViewRotation @ 1476bfd80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UCameraModifier::ProcessViewRotation
          (UCameraModifier *this,AActor *param_1,float param_2,TRotator<double> *param_3,
          TRotator<double> *param_4)

{
  return false;
}

// StaticRegisterNativesUCameraModifier @ 1476ca400

void __cdecl UCameraModifier::StaticRegisterNativesUCameraModifier(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UCameraModifier_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ToggleModifier @ 1476cabc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraModifier::ToggleModifier(UCameraModifier *this)

{
  if (this->bDisabled != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001476cabc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2f8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001476cabd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f0))(this,0);
  return;
}

// UpdateAlpha @ 1476cc4b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraModifier::UpdateAlpha(UCameraModifier *this,float param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)(**(code **)(this->_padding_ + 0x2b0))();
  lVar1 = 0x38;
  if (fVar2 == 0.0) {
    lVar1 = 0x3c;
  }
  fVar4 = *(float *)((longlong)&this->_padding_ + lVar1);
  if (fVar4 <= 0.0) {
    this->Alpha = fVar2;
    return;
  }
  fVar3 = this->Alpha;
  fVar4 = param_1 / fVar4;
  if (fVar2 < fVar3) {
    fVar3 = fVar3 - fVar4;
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
    this->Alpha = fVar3;
    return;
  }
  fVar4 = fVar4 + fVar3;
  if (fVar2 <= fVar4) {
    fVar4 = fVar2;
  }
  this->Alpha = fVar4;
  return;
}

// execDisableModifier @ 1476cfff0

void __cdecl UCameraModifier::execDisableModifier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2f0))(param_1,local_res8[0] != 0);
  return;
}

// execEnableModifier @ 1476d0090

void __cdecl UCameraModifier::execEnableModifier(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001476d00a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2f8))();
  return;
}

// execGetViewTarget @ 1476d0d00

void __cdecl UCameraModifier::execGetViewTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2e8))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execIsDisabled @ 1476d1120

void __cdecl UCameraModifier::execIsDisabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsPendingDisable @ 1476d1400

void __cdecl UCameraModifier::execIsPendingDisable(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2e0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execOnCameraOwnerDestroyed @ 1476d3060

void __cdecl
UCameraModifier::execOnCameraOwnerDestroyed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8 == *(longlong *)&param_1[1].field_0x8) {
    *(undefined8 *)&param_1[1].field_0x8 = 0;
  }
  return;
}

