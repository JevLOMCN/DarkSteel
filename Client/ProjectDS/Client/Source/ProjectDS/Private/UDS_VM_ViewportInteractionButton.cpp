// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 33

// SetEvent_Pressed_WrapperImpl @ 14b6ef230

void __cdecl
UDS_VM_ViewportInteractionButton::SetEvent_Pressed_WrapperImpl(void *param_1,void *param_2)

{
  TMulticastDelegate<void___cdecl(FDS_ViewportInteractionEvent_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(FDS_ViewportInteractionEvent_const_&),FDefaultDelegateUserPolicy>
               *)((longlong)param_1 + 0xa0),param_2);
  return;
}

// SetEvent_Released_WrapperImpl @ 14b6ef240

void __cdecl
UDS_VM_ViewportInteractionButton::SetEvent_Released_WrapperImpl(void *param_1,void *param_2)

{
  if (*(int *)((longlong)param_1 + 0x100) == 1) {
    *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  }
  TMulticastDelegate<void___cdecl(FDS_ViewportInteractionEvent_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(FDS_ViewportInteractionEvent_const_&),FDefaultDelegateUserPolicy>
               *)((longlong)param_1 + 0xc0),param_2);
  return;
}

// SetEvent_ChangedMoveVector_WrapperImpl @ 14b6ef250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UDS_VM_ViewportInteractionButton::SetEvent_ChangedMoveVector_WrapperImpl
          (void *param_1,void *param_2)

{
  float fVar1;
  int iVar2;
  USceneComponent *this;
  uint uVar3;
  bool bVar4;
  UObject *pUVar5;
  float fVar6;
  FWeakObjectPtr FStackX_8;
  TRotator<double> TStack_58;
  TRotator<double> aTStack_40 [2];
  
  iVar2 = *(int *)((longlong)param_1 + 0x100);
  if ((iVar2 == 1) || (iVar2 == 2)) {
    OnChangedMoveVector_CharacterEquip(param_1,param_2);
  }
  else if (iVar2 == 3) {
    ADS_CustomizeRenderRoom::GetSpawnedRenderRoom();
    bVar4 = TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr> *)&FStackX_8,
                       (void *)0x0);
    if (!bVar4) {
      pUVar5 = FWeakObjectPtr::Get(&FStackX_8);
      uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      this = *(USceneComponent **)&pUVar5[0x11].field_0x20;
      if (this != (USceneComponent *)0x0) {
        if (__real_41200000 <
            (float)((uint)*(float *)((longlong)param_2 + 0x58) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          if (*(float *)((longlong)param_2 + 0x58) <= 0.0) {
            *(undefined4 *)((longlong)param_1 + 0x104) = 0x3f800000;
          }
          else {
            *(undefined4 *)((longlong)param_1 + 0x104) = 0xbf800000;
          }
        }
        fVar1 = *(float *)((longlong)param_1 + 0x104);
        if (__real_322bcc77 < (float)((uint)fVar1 & uVar3)) {
          fVar6 = DS_CommonDataHelper::CharViewerRotateScale();
          USceneComponent::GetComponentRotation(this,&TStack_58);
          aTStack_40[0].Pitch = TStack_58.Pitch;
          aTStack_40[0].Roll = TStack_58.Roll;
          aTStack_40[0].Yaw = (double)((float)TStack_58.Yaw + fVar6 * fVar1);
          USceneComponent::MoveComponent
                    (this,&UE::Math::TVector<double>::ZeroVector,aTStack_40,true,(FHitResult *)0x0,
                     MOVECOMP_NoFlags,None);
        }
      }
    }
  }
  TMulticastDelegate<void___cdecl(FDS_ViewportInteractionEvent_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(FDS_ViewportInteractionEvent_const_&),FDefaultDelegateUserPolicy>
               *)((longlong)param_1 + 0xe0),param_2);
  return;
}

// SetEvent_MouseWheel_WrapperImpl @ 14b6ef260

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDS_VM_ViewportInteractionButton::SetEvent_MouseWheel_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  ADS_CustomizeRenderRoom *this;
  UDS_ViewerManager *this_00;
  FWeakObjectPtr aFStackX_8 [4];
  
  if (*(int *)((longlong)param_1 + 0x100) == 1) {
    this_00 = UDS_ViewerManager::GetInst();
    if (this_00 != (UDS_ViewerManager *)0x0) {
      UDS_ViewerManager::OnZoomInOutEvent(this_00,*(bool *)((longlong)param_2 + 0x60));
      return;
    }
  }
  else if (*(int *)((longlong)param_1 + 0x100) == 3) {
    ADS_CustomizeRenderRoom::GetSpawnedRenderRoom();
    bVar1 = TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr> *)aFStackX_8,
                       (void *)0x0);
    if (!bVar1) {
      this = (ADS_CustomizeRenderRoom *)FWeakObjectPtr::Get(aFStackX_8);
      ADS_CustomizeRenderRoom::StartZoomInOut(this,*(bool *)((longlong)param_2 + 0x60));
      return;
    }
  }
  return;
}

// StaticClass @ 14b6ef270

UClass * __cdecl UDS_VM_ViewportInteractionButton::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ViewportInteractionButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ViewportInteractionButton",
               &Z_Registration_Info_UClass_UDS_VM_ViewportInteractionButton.InnerSingleton,
               StaticRegisterNativesUDS_VM_ViewportInteractionButton,0x2a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ViewportInteractionButton>,
               InternalVTableHelperCtorCaller<UDS_VM_ViewportInteractionButton>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ViewportInteractionButton.InnerSingleton;
}

// UDS_VM_ViewportInteractionButton @ 14b6f3050

UDS_VM_ViewportInteractionButton * __thiscall
UDS_VM_ViewportInteractionButton::UDS_VM_ViewportInteractionButton
          (UDS_VM_ViewportInteractionButton *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ViewportInteractionButton__6B_;
  *(undefined8 *)&this->OnPressDelegate = 0;
  *(undefined8 *)&(this->OnPressDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPressDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnReleaseDelegate = 0;
  *(undefined8 *)&(this->OnReleaseDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnReleaseDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChangedMoveVector = 0;
  *(undefined8 *)&(this->OnChangedMoveVector).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedMoveVector).field_0x10 = 0;
  this->ActionType = None;
  this->RotateActionInfo = 0.0;
  *(undefined8 *)&(this->OnPressDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnReleaseDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedMoveVector).field_0x18 = 2;
  (this->Event_Pressed)._padding_ = '\0';
  (this->Event_Pressed).bIsPressed = false;
  (this->Event_Pressed).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_Pressed).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_Pressed).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Event_Pressed).MoveVectorSize = 0.0;
  (this->Event_Pressed).MoveVectorSizeX = 0.0;
  (this->Event_Pressed).MoveVectorSizeY = 0.0;
  (this->Event_Pressed).MoveVectorDeltaSize = 0.0;
  (this->Event_Pressed).MoveVectorDeltaSizeX = 0.0;
  (this->Event_Pressed).MoveVectorDeltaSizeY = 0.0;
  (this->Event_Pressed).bIsMouseWheelUp = false;
  (this->Event_Pressed).MoveVector.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Event_Released)._padding_ = '\0';
  (this->Event_Released).bIsPressed = false;
  (this->Event_Released).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_Released).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_Released).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Event_Released).MoveVectorSize = 0.0;
  (this->Event_Released).MoveVectorSizeX = 0.0;
  (this->Event_Released).MoveVectorSizeY = 0.0;
  (this->Event_Released).MoveVectorDeltaSize = 0.0;
  (this->Event_Released).MoveVectorDeltaSizeX = 0.0;
  (this->Event_Released).MoveVectorDeltaSizeY = 0.0;
  (this->Event_Released).bIsMouseWheelUp = false;
  (this->Event_Released).MoveVector.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Event_ChangedMoveVector)._padding_ = '\0';
  (this->Event_ChangedMoveVector).bIsPressed = false;
  (this->Event_ChangedMoveVector).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_ChangedMoveVector).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_ChangedMoveVector).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Event_ChangedMoveVector).MoveVectorSize = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorSizeX = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorSizeY = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorDeltaSize = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorDeltaSizeX = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorDeltaSizeY = 0.0;
  (this->Event_ChangedMoveVector).bIsMouseWheelUp = false;
  (this->Event_ChangedMoveVector).MoveVector.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Event_MouseWheel)._padding_ = '\0';
  (this->Event_MouseWheel).bIsPressed = false;
  (this->Event_MouseWheel).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_MouseWheel).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_MouseWheel).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Event_MouseWheel).MoveVectorSize = 0.0;
  (this->Event_MouseWheel).MoveVectorSizeX = 0.0;
  (this->Event_MouseWheel).MoveVectorSizeY = 0.0;
  (this->Event_MouseWheel).MoveVectorDeltaSize = 0.0;
  (this->Event_MouseWheel).MoveVectorDeltaSizeX = 0.0;
  (this->Event_MouseWheel).MoveVectorDeltaSizeY = 0.0;
  (this->Event_MouseWheel).bIsMouseWheelUp = false;
  (this->Event_MouseWheel).MoveVector.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// UDS_VM_ViewportInteractionButton @ 14b6f3260

UDS_VM_ViewportInteractionButton * __thiscall
UDS_VM_ViewportInteractionButton::UDS_VM_ViewportInteractionButton
          (UDS_VM_ViewportInteractionButton *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ViewportInteractionButton__6B_;
  *(undefined8 *)&this->OnPressDelegate = 0;
  *(undefined8 *)&(this->OnPressDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPressDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnReleaseDelegate = 0;
  *(undefined8 *)&(this->OnReleaseDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnReleaseDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChangedMoveVector = 0;
  *(undefined8 *)&(this->OnChangedMoveVector).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedMoveVector).field_0x10 = 0;
  this->ActionType = None;
  this->RotateActionInfo = 0.0;
  *(undefined8 *)&(this->OnPressDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnReleaseDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedMoveVector).field_0x18 = 2;
  (this->Event_Pressed)._padding_ = '\0';
  (this->Event_Pressed).bIsPressed = false;
  (this->Event_Pressed).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_Pressed).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_Pressed).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Event_Pressed).MoveVectorSize = 0.0;
  (this->Event_Pressed).MoveVectorSizeX = 0.0;
  (this->Event_Pressed).MoveVectorSizeY = 0.0;
  (this->Event_Pressed).MoveVectorDeltaSize = 0.0;
  (this->Event_Pressed).MoveVectorDeltaSizeX = 0.0;
  (this->Event_Pressed).MoveVectorDeltaSizeY = 0.0;
  (this->Event_Pressed).bIsMouseWheelUp = false;
  (this->Event_Pressed).MoveVector.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Event_Released)._padding_ = '\0';
  (this->Event_Released).bIsPressed = false;
  (this->Event_Released).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_Released).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_Released).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Event_Released).MoveVectorSize = 0.0;
  (this->Event_Released).MoveVectorSizeX = 0.0;
  (this->Event_Released).MoveVectorSizeY = 0.0;
  (this->Event_Released).MoveVectorDeltaSize = 0.0;
  (this->Event_Released).MoveVectorDeltaSizeX = 0.0;
  (this->Event_Released).MoveVectorDeltaSizeY = 0.0;
  (this->Event_Released).bIsMouseWheelUp = false;
  (this->Event_Released).MoveVector.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Event_ChangedMoveVector)._padding_ = '\0';
  (this->Event_ChangedMoveVector).bIsPressed = false;
  (this->Event_ChangedMoveVector).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_ChangedMoveVector).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_ChangedMoveVector).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Event_ChangedMoveVector).MoveVectorSize = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorSizeX = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorSizeY = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorDeltaSize = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorDeltaSizeX = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorDeltaSizeY = 0.0;
  (this->Event_ChangedMoveVector).bIsMouseWheelUp = false;
  (this->Event_ChangedMoveVector).MoveVector.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Event_MouseWheel)._padding_ = '\0';
  (this->Event_MouseWheel).bIsPressed = false;
  (this->Event_MouseWheel).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_MouseWheel).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_MouseWheel).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Event_MouseWheel).MoveVectorSize = 0.0;
  (this->Event_MouseWheel).MoveVectorSizeX = 0.0;
  (this->Event_MouseWheel).MoveVectorSizeY = 0.0;
  (this->Event_MouseWheel).MoveVectorDeltaSize = 0.0;
  (this->Event_MouseWheel).MoveVectorDeltaSizeX = 0.0;
  (this->Event_MouseWheel).MoveVectorDeltaSizeY = 0.0;
  (this->Event_MouseWheel).bIsMouseWheelUp = false;
  (this->Event_MouseWheel).MoveVector.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// ~UDS_VM_ViewportInteractionButton @ 14b6f4820

void __thiscall
UDS_VM_ViewportInteractionButton::~UDS_VM_ViewportInteractionButton
          (UDS_VM_ViewportInteractionButton *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ViewportInteractionButton__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedMoveVector).field_0x8,*(int *)&(this->OnChangedMoveVector).field_0x10
            );
  pvVar1 = *(void **)&(this->OnChangedMoveVector).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedMoveVector);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnReleaseDelegate).field_0x8,*(int *)&(this->OnReleaseDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnReleaseDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReleaseDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPressDelegate).field_0x8,*(int *)&(this->OnPressDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnPressDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPressDelegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f70a0

IClassDescriptor * __thiscall
UDS_VM_ViewportInteractionButton::GetFieldNotificationDescriptor
          (UDS_VM_ViewportInteractionButton *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ViewportInteractionButton::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f7d20

UClass * __cdecl UDS_VM_ViewportInteractionButton::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ViewportInteractionButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ViewportInteractionButton",
               &Z_Registration_Info_UClass_UDS_VM_ViewportInteractionButton.InnerSingleton,
               StaticRegisterNativesUDS_VM_ViewportInteractionButton,0x2a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ViewportInteractionButton>,
               InternalVTableHelperCtorCaller<UDS_VM_ViewportInteractionButton>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ViewportInteractionButton.InnerSingleton;
}

// GetTickableTickType @ 14b6f8340

ETickableTickType __thiscall
UDS_VM_ViewportInteractionButton::GetTickableTickType(UDS_VM_ViewportInteractionButton *this)

{
  return Conditional;
}

// IsUpdate @ 14b6f8380

bool __thiscall UDS_VM_ViewportInteractionButton::IsUpdate(UDS_VM_ViewportInteractionButton *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_ViewportInteractionButton @ 14b6f84f0

void __cdecl
UDS_VM_ViewportInteractionButton::StaticRegisterNativesUDS_VM_ViewportInteractionButton(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ViewportInteractionButton_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b6f9210

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_ViewportInteractionButton::__VTableCtorCaller(FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UDS_ViewModelBase *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_ViewportInteractionButton__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    *(undefined2 *)&this[1]._padding_ = 0;
    this[1].ViewModelContext =
         (TSharedPtr<FDS_ViewModelContext,1>)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[1].Visibility =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    this[1].TextPropertyIDList =
         (TArray<UE::FieldNotification::FFieldId,TSizedDefaultAllocator<32>_>)
         UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    ((TVector2<double>_u_0 *)(this + 2))->_s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    *(undefined2 *)&this[2]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[2]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[2]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[2]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(TVector2<double>_u_0 *)&this[2]._padding_ = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    *(undefined1 *)&this[2].TextPropertyIDList.AllocatorInstance.Data = 0;
    *(undefined2 *)&this[2].TextPropertyIDList.ArrayNum = 0;
    ((TVector2<double>_u_0 *)(this + 3))->_s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[3]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[3]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[3]._padding_ = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    this[3]._padding_ = 0;
    *(undefined1 *)&this[3]._padding_ = 0;
    *(undefined2 *)&this[3]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[3]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[3].ViewModelContext.SharedReferenceCount =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[3].VMName.Number =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[3].TextPropertyIDList.ArrayNum =
         (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    this[4]._padding_ = 0;
    *(undefined1 *)&this[4]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execOnEvent_ChangedMoveVector @ 14b6f9660

void __cdecl
UDS_VM_ViewportInteractionButton::execOnEvent_ChangedMoveVector
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_ViewportInteractionEvent *pFVar2;
  FDS_ViewportInteractionEvent local_78;
  
  local_78.CurPoint.field0_0x0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_78._padding_ = '\0';
  local_78.bIsPressed = false;
  local_78.MoveVectorSize = 0.0;
  local_78.MoveVectorSizeX = 0.0;
  local_78.MoveVectorSizeY = 0.0;
  local_78.MoveVectorDeltaSize = 0.0;
  local_78.MoveVectorDeltaSizeX = 0.0;
  local_78.MoveVectorDeltaSizeY = 0.0;
  local_78.PressedPoint.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_78.bIsMouseWheelUp = false;
  local_78.ReleasedPoint.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78.MoveVector.field0_0x0._s_0 = local_78.CurPoint.field0_0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar2 = &local_78;
  if ((FDS_ViewportInteractionEvent *)param_2->MostRecentPropertyAddress !=
      (FDS_ViewportInteractionEvent *)0x0) {
    pFVar2 = (FDS_ViewportInteractionEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnEvent_ChangedMoveVector((UDS_VM_ViewportInteractionButton *)param_1,pFVar2);
  return;
}

// execOnEvent_MouseWheel @ 14b6f9730

void __cdecl
UDS_VM_ViewportInteractionButton::execOnEvent_MouseWheel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_ViewportInteractionEvent *pFVar2;
  FDS_ViewportInteractionEvent local_78;
  
  local_78.CurPoint.field0_0x0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_78._padding_ = '\0';
  local_78.bIsPressed = false;
  local_78.MoveVectorSize = 0.0;
  local_78.MoveVectorSizeX = 0.0;
  local_78.MoveVectorSizeY = 0.0;
  local_78.MoveVectorDeltaSize = 0.0;
  local_78.MoveVectorDeltaSizeX = 0.0;
  local_78.MoveVectorDeltaSizeY = 0.0;
  local_78.PressedPoint.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_78.bIsMouseWheelUp = false;
  local_78.ReleasedPoint.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78.MoveVector.field0_0x0._s_0 = local_78.CurPoint.field0_0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar2 = &local_78;
  if ((FDS_ViewportInteractionEvent *)param_2->MostRecentPropertyAddress !=
      (FDS_ViewportInteractionEvent *)0x0) {
    pFVar2 = (FDS_ViewportInteractionEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnEvent_MouseWheel((UDS_VM_ViewportInteractionButton *)param_1,pFVar2);
  return;
}

// execOnEvent_Pressed @ 14b6f9800

void __cdecl
UDS_VM_ViewportInteractionButton::execOnEvent_Pressed
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_ViewportInteractionEvent *pFVar2;
  FDS_ViewportInteractionEvent local_78;
  
  local_78.CurPoint.field0_0x0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_78._padding_ = '\0';
  local_78.bIsPressed = false;
  local_78.MoveVectorSize = 0.0;
  local_78.MoveVectorSizeX = 0.0;
  local_78.MoveVectorSizeY = 0.0;
  local_78.MoveVectorDeltaSize = 0.0;
  local_78.MoveVectorDeltaSizeX = 0.0;
  local_78.MoveVectorDeltaSizeY = 0.0;
  local_78.PressedPoint.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_78.bIsMouseWheelUp = false;
  local_78.ReleasedPoint.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78.MoveVector.field0_0x0._s_0 = local_78.CurPoint.field0_0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar2 = &local_78;
  if ((FDS_ViewportInteractionEvent *)param_2->MostRecentPropertyAddress !=
      (FDS_ViewportInteractionEvent *)0x0) {
    pFVar2 = (FDS_ViewportInteractionEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnEvent_Pressed((UDS_VM_ViewportInteractionButton *)param_1,pFVar2);
  return;
}

// execOnEvent_Released @ 14b6f98d0

void __cdecl
UDS_VM_ViewportInteractionButton::execOnEvent_Released
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_ViewportInteractionEvent *pFVar2;
  FDS_ViewportInteractionEvent local_78;
  
  local_78.CurPoint.field0_0x0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_78._padding_ = '\0';
  local_78.bIsPressed = false;
  local_78.MoveVectorSize = 0.0;
  local_78.MoveVectorSizeX = 0.0;
  local_78.MoveVectorSizeY = 0.0;
  local_78.MoveVectorDeltaSize = 0.0;
  local_78.MoveVectorDeltaSizeX = 0.0;
  local_78.MoveVectorDeltaSizeY = 0.0;
  local_78.PressedPoint.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_78.bIsMouseWheelUp = false;
  local_78.ReleasedPoint.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78.MoveVector.field0_0x0._s_0 = local_78.CurPoint.field0_0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar2 = &local_78;
  if ((FDS_ViewportInteractionEvent *)param_2->MostRecentPropertyAddress !=
      (FDS_ViewportInteractionEvent *)0x0) {
    pFVar2 = (FDS_ViewportInteractionEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnEvent_Released((UDS_VM_ViewportInteractionButton *)param_1,pFVar2);
  return;
}

// Init_CharacterEquip @ 14bdc78e0

void __thiscall
UDS_VM_ViewportInteractionButton::Init_CharacterEquip(UDS_VM_ViewportInteractionButton *this)

{
  return;
}

// OnChangedMoveVector_CharacterEquip @ 14bdca770

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_VM_ViewportInteractionButton::OnChangedMoveVector_CharacterEquip
          (UDS_VM_ViewportInteractionButton *this,FDS_ViewportInteractionEvent *param_1)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  bool bVar4;
  UDS_ViewerManager *this_00;
  UObject *pUVar5;
  TRotator<double> *pTVar6;
  AActor *this_01;
  float fVar7;
  FWeakObjectPtr local_res18 [2];
  TRotator<double> local_48 [2];
  
  this_00 = UDS_ViewerManager::GetInst();
  if (this_00 != (UDS_ViewerManager *)0x0) {
    UDS_ViewerManager::GetSelectedViewerCharacter(this_00);
    bVar4 = TWeakObjectPtr<ADS_ViewerCharacter,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_ViewerCharacter,FWeakObjectPtr> *)local_res18,(void *)0x0
                      );
    uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    if (!bVar4) {
      if (__real_41200000 <
          (float)((uint)param_1->MoveVectorDeltaSizeX & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        if (param_1->MoveVectorDeltaSizeX <= 0.0) {
          (this->RotateActionInfo).RotateFactor = 1.0;
        }
        else {
          (this->RotateActionInfo).RotateFactor = -1.0;
        }
      }
      fVar1 = (this->RotateActionInfo).RotateFactor;
      if (__real_322bcc77 < (float)((uint)fVar1 & uVar3)) {
        fVar7 = DS_CommonDataHelper::CharViewerRotateScale();
        pUVar5 = FWeakObjectPtr::Get(local_res18);
        if (*(USceneComponent **)(pUVar5 + 0xb) == (USceneComponent *)0x0) {
          pTVar6 = local_48;
          local_48[0].Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
          local_48[0].Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
          local_48[0].Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
        }
        else {
          pTVar6 = USceneComponent::GetComponentRotation
                             (*(USceneComponent **)(pUVar5 + 0xb),local_48);
        }
        local_48[0].Roll = pTVar6->Roll;
        dVar2 = pTVar6->Yaw;
        this_01 = (AActor *)FWeakObjectPtr::Get(local_res18);
        local_48[0].Pitch = 0.0;
        local_48[0].Roll = 0.0;
        local_48[0].Yaw = (double)((float)dVar2 + fVar7 * fVar1);
        AActor::SetActorRotation(this_01,local_48,None);
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this_00->RotateViewerCharacterDelegate);
      }
    }
  }
  return;
}

// OnChangedMoveVector_Customize @ 14bdca900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_VM_ViewportInteractionButton::OnChangedMoveVector_Customize
          (UDS_VM_ViewportInteractionButton *this,FDS_ViewportInteractionEvent *param_1)

{
  float fVar1;
  USceneComponent *this_00;
  uint uVar2;
  bool bVar3;
  UObject *pUVar4;
  float fVar5;
  FWeakObjectPtr local_res18 [2];
  TRotator<double> local_58;
  TRotator<double> local_40 [2];
  
  ADS_CustomizeRenderRoom::GetSpawnedRenderRoom();
  bVar3 = TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr> *)local_res18,
                     (void *)0x0);
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(local_res18);
    uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    this_00 = *(USceneComponent **)&pUVar4[0x11].field_0x20;
    if (this_00 != (USceneComponent *)0x0) {
      if (__real_41200000 <
          (float)((uint)param_1->MoveVectorDeltaSizeX & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        if (param_1->MoveVectorDeltaSizeX <= 0.0) {
          (this->RotateActionInfo).RotateFactor = 1.0;
        }
        else {
          (this->RotateActionInfo).RotateFactor = -1.0;
        }
      }
      fVar1 = (this->RotateActionInfo).RotateFactor;
      if (__real_322bcc77 < (float)((uint)fVar1 & uVar2)) {
        fVar5 = DS_CommonDataHelper::CharViewerRotateScale();
        USceneComponent::GetComponentRotation(this_00,&local_58);
        local_40[0].Pitch = local_58.Pitch;
        local_40[0].Roll = local_58.Roll;
        local_40[0].Yaw = (double)((float)local_58.Yaw + fVar5 * fVar1);
        USceneComponent::MoveComponent
                  (this_00,&UE::Math::TVector<double>::ZeroVector,local_40,true,(FHitResult *)0x0,
                   MOVECOMP_NoFlags,None);
      }
    }
  }
  return;
}

// OnEvent_ChangedMoveVector @ 14bdce7f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_VM_ViewportInteractionButton::OnEvent_ChangedMoveVector
          (UDS_VM_ViewportInteractionButton *this,FDS_ViewportInteractionEvent *param_1)

{
  float fVar1;
  EDS_ViewportInteractionActionType EVar2;
  USceneComponent *this_00;
  uint uVar3;
  bool bVar4;
  UObject *pUVar5;
  float fVar6;
  FWeakObjectPtr local_res8;
  TRotator<double> local_58;
  TRotator<double> local_40 [2];
  
  EVar2 = this->ActionType;
  if ((EVar2 == CharacterEquip) || (EVar2 == MountManagement)) {
    OnChangedMoveVector_CharacterEquip(this,param_1);
  }
  else if (EVar2 == Customize) {
    ADS_CustomizeRenderRoom::GetSpawnedRenderRoom();
    bVar4 = TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr> *)&local_res8,
                       (void *)0x0);
    if (!bVar4) {
      pUVar5 = FWeakObjectPtr::Get(&local_res8);
      uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      this_00 = *(USceneComponent **)&pUVar5[0x11].field_0x20;
      if (this_00 != (USceneComponent *)0x0) {
        if (__real_41200000 <
            (float)((uint)param_1->MoveVectorDeltaSizeX & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          if (param_1->MoveVectorDeltaSizeX <= 0.0) {
            (this->RotateActionInfo).RotateFactor = 1.0;
          }
          else {
            (this->RotateActionInfo).RotateFactor = -1.0;
          }
        }
        fVar1 = (this->RotateActionInfo).RotateFactor;
        if (__real_322bcc77 < (float)((uint)fVar1 & uVar3)) {
          fVar6 = DS_CommonDataHelper::CharViewerRotateScale();
          USceneComponent::GetComponentRotation(this_00,&local_58);
          local_40[0].Pitch = local_58.Pitch;
          local_40[0].Roll = local_58.Roll;
          local_40[0].Yaw = (double)((float)local_58.Yaw + fVar6 * fVar1);
          USceneComponent::MoveComponent
                    (this_00,&UE::Math::TVector<double>::ZeroVector,local_40,true,(FHitResult *)0x0,
                     MOVECOMP_NoFlags,None);
        }
      }
    }
  }
  TMulticastDelegate<void___cdecl(FDS_ViewportInteractionEvent_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnChangedMoveVector,param_1);
  return;
}

// OnEvent_MouseWheel @ 14bdce990

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_ViewportInteractionButton::OnEvent_MouseWheel
          (UDS_VM_ViewportInteractionButton *this,FDS_ViewportInteractionEvent *param_1)

{
  bool bVar1;
  ADS_CustomizeRenderRoom *this_00;
  UDS_ViewerManager *this_01;
  FWeakObjectPtr local_res8 [4];
  
  if (this->ActionType == CharacterEquip) {
    this_01 = UDS_ViewerManager::GetInst();
    if (this_01 != (UDS_ViewerManager *)0x0) {
      UDS_ViewerManager::OnZoomInOutEvent(this_01,param_1->bIsMouseWheelUp);
      return;
    }
  }
  else if (this->ActionType == Customize) {
    ADS_CustomizeRenderRoom::GetSpawnedRenderRoom();
    bVar1 = TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr> *)local_res8,
                       (void *)0x0);
    if (!bVar1) {
      this_00 = (ADS_CustomizeRenderRoom *)FWeakObjectPtr::Get(local_res8);
      ADS_CustomizeRenderRoom::StartZoomInOut(this_00,param_1->bIsMouseWheelUp);
      return;
    }
  }
  return;
}

// OnEvent_Pressed @ 14bdcea10

void __thiscall
UDS_VM_ViewportInteractionButton::OnEvent_Pressed
          (UDS_VM_ViewportInteractionButton *this,FDS_ViewportInteractionEvent *param_1)

{
  TMulticastDelegate<void___cdecl(FDS_ViewportInteractionEvent_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnPressDelegate,param_1);
  return;
}

// OnEvent_Released @ 14bdcea30

void __thiscall
UDS_VM_ViewportInteractionButton::OnEvent_Released
          (UDS_VM_ViewportInteractionButton *this,FDS_ViewportInteractionEvent *param_1)

{
  if (this->ActionType == CharacterEquip) {
    (this->RotateActionInfo).RotateFactor = 0.0;
  }
  TMulticastDelegate<void___cdecl(FDS_ViewportInteractionEvent_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnReleaseDelegate,param_1);
  return;
}

// OnMouseWheel_CharacterEquip @ 14bdd05b0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_ViewportInteractionButton::OnMouseWheel_CharacterEquip
          (UDS_VM_ViewportInteractionButton *this,FDS_ViewportInteractionEvent *param_1)

{
  UDS_ViewerManager *this_00;
  
  this_00 = UDS_ViewerManager::GetInst();
  if (this_00 != (UDS_ViewerManager *)0x0) {
    UDS_ViewerManager::OnZoomInOutEvent(this_00,param_1->bIsMouseWheelUp);
    return;
  }
  return;
}

// OnMouseWheel_Customize @ 14bdd05e0

void __thiscall
UDS_VM_ViewportInteractionButton::OnMouseWheel_Customize
          (UDS_VM_ViewportInteractionButton *this,FDS_ViewportInteractionEvent *param_1)

{
  bool bVar1;
  ADS_CustomizeRenderRoom *this_00;
  FWeakObjectPtr local_res18 [2];
  
  ADS_CustomizeRenderRoom::GetSpawnedRenderRoom();
  bVar1 = TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_CustomizeRenderRoom,FWeakObjectPtr> *)local_res18,
                     (void *)0x0);
  if (!bVar1) {
    this_00 = (ADS_CustomizeRenderRoom *)FWeakObjectPtr::Get(local_res18);
    ADS_CustomizeRenderRoom::StartZoomInOut(this_00,param_1->bIsMouseWheelUp);
  }
  return;
}

// OnPressed_CharacterEquip @ 14bdd14b0

void __thiscall
UDS_VM_ViewportInteractionButton::OnPressed_CharacterEquip
          (UDS_VM_ViewportInteractionButton *this,FDS_ViewportInteractionEvent *param_1)

{
  return;
}

// OnReleased_CharacterEquip @ 14bdd19a0

void __thiscall
UDS_VM_ViewportInteractionButton::OnReleased_CharacterEquip
          (UDS_VM_ViewportInteractionButton *this,FDS_ViewportInteractionEvent *param_1)

{
  (this->RotateActionInfo).RotateFactor = 0.0;
  return;
}

// OnUpdate @ 14bddf6e0

void __thiscall
UDS_VM_ViewportInteractionButton::OnUpdate(UDS_VM_ViewportInteractionButton *this,float param_1)

{
  return;
}

// ResetVariables @ 14bde34c0

void __thiscall
UDS_VM_ViewportInteractionButton::ResetVariables(UDS_VM_ViewportInteractionButton *this)

{
  this->ActionType = None;
  this->RotateActionInfo = 0.0;
  return;
}

// SetActionType @ 14bde34d0

void __thiscall
UDS_VM_ViewportInteractionButton::SetActionType
          (UDS_VM_ViewportInteractionButton *this,EDS_ViewportInteractionActionType *param_1)

{
  this->ActionType = None;
  this->RotateActionInfo = 0.0;
  this->ActionType = *param_1;
  return;
}

// Update_CharacterEquip @ 14bdfb1c0

void __thiscall
UDS_VM_ViewportInteractionButton::Update_CharacterEquip
          (UDS_VM_ViewportInteractionButton *this,float param_1)

{
  return;
}

