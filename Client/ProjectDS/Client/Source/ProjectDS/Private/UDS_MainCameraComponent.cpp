// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 58

// StaticClass @ 14b4e4c30

UClass * __cdecl UDS_MainCameraComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainCameraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainCameraComponent",
               &Z_Registration_Info_UClass_UDS_MainCameraComponent.InnerSingleton,
               StaticRegisterNativesUDS_MainCameraComponent,0xda0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MainCameraComponent>,
               InternalVTableHelperCtorCaller<UDS_MainCameraComponent>,local_res8,
               UDS_CameraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainCameraComponent.InnerSingleton;
}

// UDS_MainCameraComponent @ 14b4e8bd0

UDS_MainCameraComponent * __thiscall
UDS_MainCameraComponent::UDS_MainCameraComponent
          (UDS_MainCameraComponent *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UDS_CameraComponent::UDS_CameraComponent((UDS_CameraComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->OnCameraStateChangeDelegate).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnCameraStateChangeDelegate = 0;
  *(undefined8 *)&(this->OnCameraStateChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCameraStateChangeDelegate).field_0x10 = 0;
  (this->CameraBoomPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CameraCommonData).CameraBattleCurvePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraCommonData).CameraBattleCurvePath.Data.ArrayNum = 0;
  (this->CameraCommonData).CameraBattleCurvePath.Data.ArrayMax = 0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.ArrayNum = 0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.ArrayMax = 0;
  *(undefined8 *)&this->CameraStateMap = 0;
  *(undefined8 *)&(this->CameraStateMap).field_0x8 = 0;
  *(undefined8 *)&(this->CameraStateMap).field_0x20 = 0;
  this->bCommandRotationLock = false;
  *(undefined4 *)&(this->CameraStateMap).field_0x28 = 0;
  *(undefined4 *)&(this->CameraStateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CameraStateMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CameraStateMap).field_0x34 = 0;
  *(undefined8 *)&(this->CameraStateMap).field_0x40 = 0;
  *(undefined4 *)&(this->CameraStateMap).field_0x48 = 0;
  *(undefined8 *)&this->CameraStateMap_SkillMode = 0;
  *(undefined8 *)&(this->CameraStateMap_SkillMode).field_0x8 = 0;
  *(undefined8 *)&(this->CameraStateMap_SkillMode).field_0x20 = 0;
  *(undefined4 *)&(this->CameraStateMap_SkillMode).field_0x28 = 0;
  *(undefined4 *)&(this->CameraStateMap_SkillMode).field_0x2c = 0x80;
  *(undefined4 *)&(this->CameraStateMap_SkillMode).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CameraStateMap_SkillMode).field_0x34 = 0;
  *(undefined8 *)&(this->CameraStateMap_SkillMode).field_0x40 = 0;
  *(undefined4 *)&(this->CameraStateMap_SkillMode).field_0x48 = 0;
  (this->NowCameraStatePtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DefaultCurveData).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->DistanceCurveData).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->RotationCurveData).field0_0x0.DebugPtr = (UCurveBase *)0x0;
  (this->FOVCurveData).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->CameraInterp_Distance).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->CameraInterp_Rotation).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->CameraInterp_FOV).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->CameraInterp_TargetOffset).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->CameraInterp_SocketOffset).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->CameraInterp_LookAt).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->NotifyStartTimerHandle).Handle = 0;
  (this->NotifyEndTimerHandle).Handle = 0;
  (this->InputIgnoreStartTimerHandle).Handle = 0;
  (this->InputIgnoreEndTimerHandle).Handle = 0;
  this->CurrentSkillModeID = 0;
  this->NowCameraStateType = None;
  this->IsBattleMode = false;
  this->bActorSequencerPlaying = false;
  this->CameraNotifyState = None;
  this->NotifyDistance = 0.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->NotifyRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->NotifyRotation).Yaw = dVar2;
  (this->NotifyRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->NotifySocketName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NotifySocketName).Data.ArrayNum = 0;
  (this->NotifySocketName).Data.ArrayMax = 0;
  this->NotifyFOV = 0.0;
  this->NotifyDuration = 2.0;
  this->bNotifyDistanceProcessing = false;
  this->bNotifyRotationProcessing = false;
  this->bNotifyFOVProcessing = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NotifySocketOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NotifySocketOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->NotifySocketOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->OriginalNotifyLootAtRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->OriginalNotifyLootAtRotation).Yaw = dVar2;
  (this->OriginalNotifyLootAtRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->NotifySkeletalMesh).WeakPtr = (FWeakObjectPtr)0x0;
  this->InputIgnoreStartTime = 0.0;
  this->InputIgnoreEndTime = 0.0;
  this->InputIgnoreTime = 0.0;
  this->bChangedDistance = false;
  return this;
}

// ~UDS_MainCameraComponent @ 14b4e9b40

void __thiscall UDS_MainCameraComponent::~UDS_MainCameraComponent(UDS_MainCameraComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->NotifySocketName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CameraStateMap_SkillMode).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CameraStateMap_SkillMode).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_CameraStateBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_CameraStateBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_CameraStateBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CameraStateMap_SkillMode);
  *(undefined4 *)&(this->CameraStateMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CameraStateMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_CameraStateType,TObjectPtr<UDS_CameraStateBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_CameraStateType,TObjectPtr<UDS_CameraStateBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->CameraStateMap);
  pFVar1 = (this->CameraCommonData).CameraZoomCurvePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CameraCommonData).CameraBattleCurvePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCameraStateChangeDelegate).field_0x8,
             *(int *)&(this->OnCameraStateChangeDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnCameraStateChangeDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCameraStateChangeDelegate);
  UDS_CameraComponent::~UDS_CameraComponent((UDS_CameraComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b4eb810

UClass * __cdecl UDS_MainCameraComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainCameraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainCameraComponent",
               &Z_Registration_Info_UClass_UDS_MainCameraComponent.InnerSingleton,
               StaticRegisterNativesUDS_MainCameraComponent,0xda0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MainCameraComponent>,
               InternalVTableHelperCtorCaller<UDS_MainCameraComponent>,local_res8,
               UDS_CameraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainCameraComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_MainCameraComponent @ 14b4ec180

void __cdecl UDS_MainCameraComponent::StaticRegisterNativesUDS_MainCameraComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_MainCameraComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b4ecd70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_MainCameraComponent::__VTableCtorCaller(FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_CameraComponent *this;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = GetPrivateStaticClass();
  this = (UDS_CameraComponent *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_CameraComponent *)0x0) {
    UDS_CameraComponent::UDS_CameraComponent(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
    this[1]._padding_ = (longlong)dVar2;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Roll;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40000000;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
    this[1]._padding_ = (longlong)dVar2;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Roll;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execOnCameraBattleMode @ 14b4ed400

void __cdecl
UDS_MainCameraComponent::execOnCameraBattleMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnCameraBattleMode((UDS_MainCameraComponent *)param_1,local_res10[0] != 0);
  return;
}

// execOnInputChange @ 14b4ed490

void __cdecl
UDS_MainCameraComponent::execOnInputChange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  TVector<double>_u_0 *pTVar3;
  byte local_res10 [16];
  EDS_InputFlags local_res20 [2];
  TVector<double>_u_0 local_38;
  undefined1 local_20;
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_20 = 0;
  local_38._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_38._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pbVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
  local_38._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar3 = &local_38;
  if ((TVector<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector<double>_u_0 *)0x0) {
    pTVar3 = (TVector<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20[0] = (EDS_InputFlags)*pbVar2;
  OnInputChange((UDS_MainCameraComponent *)param_1,local_res20,(FInputActionValue *)&pTVar3->_s_0);
  return;
}

// UDS_MainCameraComponent @ 14bc2ada0

UDS_MainCameraComponent * __thiscall
UDS_MainCameraComponent::UDS_MainCameraComponent
          (UDS_MainCameraComponent *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UDS_CameraComponent::UDS_CameraComponent((UDS_CameraComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->OnCameraStateChangeDelegate).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnCameraStateChangeDelegate = 0;
  *(undefined8 *)&(this->OnCameraStateChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCameraStateChangeDelegate).field_0x10 = 0;
  (this->CameraBoomPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CameraCommonData).CameraBattleCurvePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraCommonData).CameraBattleCurvePath.Data.ArrayNum = 0;
  (this->CameraCommonData).CameraBattleCurvePath.Data.ArrayMax = 0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.ArrayNum = 0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.ArrayMax = 0;
  *(undefined8 *)&this->CameraStateMap = 0;
  *(undefined8 *)&(this->CameraStateMap).field_0x8 = 0;
  *(undefined8 *)&(this->CameraStateMap).field_0x20 = 0;
  this->bCommandRotationLock = false;
  *(undefined4 *)&(this->CameraStateMap).field_0x28 = 0;
  *(undefined4 *)&(this->CameraStateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CameraStateMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CameraStateMap).field_0x34 = 0;
  *(undefined8 *)&(this->CameraStateMap).field_0x40 = 0;
  *(undefined4 *)&(this->CameraStateMap).field_0x48 = 0;
  *(undefined8 *)&this->CameraStateMap_SkillMode = 0;
  *(undefined8 *)&(this->CameraStateMap_SkillMode).field_0x8 = 0;
  *(undefined8 *)&(this->CameraStateMap_SkillMode).field_0x20 = 0;
  *(undefined4 *)&(this->CameraStateMap_SkillMode).field_0x28 = 0;
  *(undefined4 *)&(this->CameraStateMap_SkillMode).field_0x2c = 0x80;
  *(undefined4 *)&(this->CameraStateMap_SkillMode).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CameraStateMap_SkillMode).field_0x34 = 0;
  *(undefined8 *)&(this->CameraStateMap_SkillMode).field_0x40 = 0;
  *(undefined4 *)&(this->CameraStateMap_SkillMode).field_0x48 = 0;
  (this->NowCameraStatePtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DefaultCurveData).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->DistanceCurveData).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->RotationCurveData).field0_0x0.DebugPtr = (UCurveBase *)0x0;
  (this->FOVCurveData).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->CameraInterp_Distance).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->CameraInterp_Rotation).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->CameraInterp_FOV).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->CameraInterp_TargetOffset).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->CameraInterp_SocketOffset).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->CameraInterp_LookAt).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->NotifyStartTimerHandle).Handle = 0;
  (this->NotifyEndTimerHandle).Handle = 0;
  (this->InputIgnoreStartTimerHandle).Handle = 0;
  (this->InputIgnoreEndTimerHandle).Handle = 0;
  this->CurrentSkillModeID = 0;
  this->NowCameraStateType = None;
  this->IsBattleMode = false;
  this->bActorSequencerPlaying = false;
  this->CameraNotifyState = None;
  this->NotifyDistance = 0.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->NotifyRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->NotifyRotation).Yaw = dVar2;
  (this->NotifyRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->NotifySocketName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NotifySocketName).Data.ArrayNum = 0;
  (this->NotifySocketName).Data.ArrayMax = 0;
  this->NotifyFOV = 0.0;
  this->NotifyDuration = 2.0;
  this->bNotifyDistanceProcessing = false;
  this->bNotifyRotationProcessing = false;
  this->bNotifyFOVProcessing = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NotifySocketOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NotifySocketOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->NotifySocketOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->OriginalNotifyLootAtRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->OriginalNotifyLootAtRotation).Yaw = dVar2;
  (this->OriginalNotifyLootAtRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->NotifySkeletalMesh).WeakPtr = (FWeakObjectPtr)0x0;
  this->InputIgnoreStartTime = 0.0;
  this->InputIgnoreEndTime = 0.0;
  this->InputIgnoreTime = 0.0;
  this->bChangedDistance = false;
  return this;
}

// BeginPlay @ 14bc2e300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_MainCameraComponent::BeginPlay(UDS_MainCameraComponent *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_CameraInterp *pUVar3;
  FWeakObjectPtr local_res8 [2];
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  ADS_PlayerController::GetPlayerController();
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_MainCameraComponent>
              (&ADS_PlayerController::ChangeInputDelegate,
               (UDS_MainCameraComponent *)(local_res8 + 1),(pmf_da16205b *)this);
  }
  if ((this->CameraInterp_SocketOffset).field0_0x0.DebugPtr == (UDS_CameraInterp *)0x0) {
    pUVar2 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UDS_CameraInterp>(pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->CameraInterp_SocketOffset).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->CameraInterp_TargetOffset).field0_0x0.DebugPtr == (UDS_CameraInterp *)0x0) {
    pUVar2 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UDS_CameraInterp>(pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->CameraInterp_TargetOffset).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->CameraInterp_LookAt).field0_0x0.DebugPtr == (UDS_CameraInterp *)0x0) {
    pUVar2 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UDS_CameraInterp>(pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->CameraInterp_LookAt).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->CameraInterp_Distance).field0_0x0.DebugPtr == (UDS_CameraInterp *)0x0) {
    pUVar2 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UDS_CameraInterp>(pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->CameraInterp_Distance).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->CameraInterp_Rotation).field0_0x0.DebugPtr == (UDS_CameraInterp *)0x0) {
    pUVar2 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UDS_CameraInterp>(pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->CameraInterp_Rotation).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->CameraInterp_FOV).field0_0x0.DebugPtr == (UDS_CameraInterp *)0x0) {
    pUVar2 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UDS_CameraInterp>(pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->CameraInterp_FOV).field0_0x0.DebugPtr = pUVar3;
  }
  return;
}

// ChangeCameraState @ 14bc302a0

void __thiscall
UDS_MainCameraComponent::ChangeCameraState
          (UDS_MainCameraComponent *this,EDS_CameraStateType param_1,bool param_2)

{
  TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr> *this_00;
  EDS_CameraStateType EVar1;
  longlong lVar2;
  UDS_CameraStateBase *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  UObject *pUVar11;
  UDS_EntityManager *this_01;
  ulong64 uVar12;
  TObjectPtr<UDS_CameraStateBase> *pTVar13;
  TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr> TVar14;
  undefined1 *puVar15;
  FObjectPtr_u_0 FVar16;
  uint uVar17;
  longlong lVar18;
  FWeakObjectPtr local_168;
  FWeakObjectPtr local_160;
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  ulong64 local_148;
  UDS_CameraStateBase *local_140;
  undefined8 local_138 [2];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  FString local_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  FDestructionSentinel local_58;
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  
  ADS_PlayerController::GetPlayerController();
  bVar6 = FWeakObjectPtr::IsValid(&local_158);
  if (bVar6) {
    pUVar11 = FWeakObjectPtr::Get(&local_158);
    lVar18 = *(longlong *)&pUVar11[0x16].field_0x20;
    if ((lVar18 != 0) && ((EVar1 = this->NowCameraStateType, EVar1 != param_1 || (param_2)))) {
      this_00 = &this->NowCameraStatePtr;
      local_160 = this_00->WeakPtr;
      uVar12 = 0;
      this->NowCameraStateType = param_1;
      if (param_1 == CameraStateSkillMode) {
        this_01 = UDS_EntityManager::GetInst();
        if (this_01 != (UDS_EntityManager *)0x0) {
          uVar12 = UDS_EntityManager::GetCurrentMainCharEntityID(this_01,true);
        }
        local_148 = uVar12;
        UDS_AbilityDataSet::GetAbilityData<UDS_SkillModeAbilityData>
                  ((ulong64 *)&local_150,(EDS_AbilityTagType *)&local_148);
        bVar6 = FWeakObjectPtr::IsValid(&local_150);
        if (bVar6) {
          pUVar11 = FWeakObjectPtr::Get(&local_150);
          uVar17 = *(uint *)&pUVar11[2].field_0x8;
          if (*(int *)&(this->CameraStateMap_SkillMode).field_0x8 !=
              *(int *)&(this->CameraStateMap_SkillMode).field_0x34) {
            puVar15 = *(undefined1 **)&(this->CameraStateMap_SkillMode).field_0x40;
            if (puVar15 == (undefined1 *)0x0) {
              puVar15 = &(this->CameraStateMap_SkillMode).field_0x38;
            }
            iVar9 = *(int *)(puVar15 +
                            (ulonglong)
                            (*(int *)&(this->CameraStateMap_SkillMode).field_0x48 - 1U & uVar17) * 4
                            );
            if (iVar9 != -1) {
              lVar2 = *(longlong *)&this->CameraStateMap_SkillMode;
              do {
                if (*(uint *)(lVar2 + (longlong)iVar9 * 0x18) == uVar17) {
                  pTVar13 = TMapBase<int,TObjectPtr<UDS_CameraStateBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_CameraStateBase>,0>_>
                            ::FindChecked((TMapBase<int,TObjectPtr<UDS_CameraStateBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_CameraStateBase>,0>_>
                                           *)&this->CameraStateMap_SkillMode,uVar17);
                  pUVar3 = (pTVar13->field0_0x0).DebugPtr;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    if (pUVar3 != (UDS_CameraStateBase *)0x0) {
                      UE::GC::MarkAsReachable((UObject *)pUVar3);
                    }
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar3 != (UDS_CameraStateBase *)0x0)) {
                      UE::GC::MarkAsReachable((UObject *)pUVar3);
                    }
                  }
                  local_168.ObjectIndex = 0;
                  local_168.ObjectSerialNumber = 0;
                  local_140 = pUVar3;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar3 != (UDS_CameraStateBase *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)pUVar3);
                  }
                  FVar16.Handle = (UObject *)&local_140;
                  goto LAB_14bc30404;
                }
                iVar9 = *(int *)(lVar2 + 0x10 + (longlong)iVar9 * 0x18);
              } while (iVar9 != -1);
            }
          }
          local_168.ObjectIndex = 0;
          local_168.ObjectSerialNumber = 0;
          FVar16.Handle = (UObject *)local_138;
          local_138[0] = 0;
LAB_14bc30404:
          FWeakObjectPtr::operator=(&local_168,(FObjectPtr)FVar16);
          this_00->WeakPtr = local_168;
        }
      }
      else {
        TVar14 = GetCameraState(this,(EDS_CameraStateType)local_40);
                    /* WARNING: Load size is inaccurate */
        this_00->WeakPtr = *TVar14.WeakPtr;
      }
      bVar6 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (!bVar6) {
        TVar14 = GetCameraState(this,(EDS_CameraStateType)local_38);
                    /* WARNING: Load size is inaccurate */
        this_00->WeakPtr = *TVar14.WeakPtr;
      }
      bVar6 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (bVar6) {
        pUVar11 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        local_128 = *(undefined4 *)&pUVar11[1].field_0x18;
        local_124 = *(undefined4 *)&pUVar11[1].field_0x1c;
        local_120 = *(undefined4 *)&pUVar11[1].field_0x20;
        local_11c = *(undefined4 *)&pUVar11[1].field_0x24;
        local_118 = *(undefined4 *)(pUVar11 + 2);
        local_114 = *(undefined4 *)&pUVar11[2].field_0x4;
        local_110 = *(undefined4 *)&pUVar11[2].field_0x8;
        local_10c = *(undefined4 *)&pUVar11[2].field_0xc;
        local_108 = *(undefined4 *)&pUVar11[2].field_0x10;
        local_104 = *(undefined4 *)&pUVar11[2].field_0x14;
        local_100 = *(undefined4 *)&pUVar11[2].field_0x18;
        local_fc = *(undefined4 *)&pUVar11[2].field_0x1c;
        local_f8 = *(undefined8 *)&pUVar11[2].field_0x20;
        uStack_f0 = *(undefined8 *)(pUVar11 + 3);
        local_e8 = *(undefined8 *)&pUVar11[3].field_0x8;
        local_e0 = *(undefined8 *)&pUVar11[3].field_0x10;
        uStack_d8 = *(undefined8 *)&pUVar11[3].field_0x18;
        local_d0 = *(undefined8 *)&pUVar11[3].field_0x20;
        local_c8 = *(undefined8 *)(pUVar11 + 4);
        uStack_c0 = *(undefined8 *)&pUVar11[4].field_0x8;
        local_b8 = *(undefined8 *)&pUVar11[4].field_0x10;
        ::FString::FString(&local_b0,(FString *)&pUVar11[4].field_0x18);
        local_a0 = *(undefined4 *)(pUVar11 + 5);
        local_9c = *(undefined4 *)&pUVar11[5].field_0x4;
        local_98 = *(undefined4 *)&pUVar11[5].field_0x8;
        local_94 = *(undefined4 *)&pUVar11[5].field_0xc;
        local_90 = *(undefined4 *)&pUVar11[5].field_0x10;
        local_8c = *(undefined4 *)&pUVar11[5].field_0x14;
        local_88 = *(undefined4 *)&pUVar11[5].field_0x18;
        local_84 = pUVar11[5].field_0x1c;
        local_83 = pUVar11[5].field_0x1d;
        local_80 = *(undefined8 *)&pUVar11[5].field_0x20;
        uStack_78 = *(undefined8 *)(pUVar11 + 6);
        local_70 = *(undefined8 *)&pUVar11[6].field_0x8;
        local_68 = *(undefined4 *)&pUVar11[6].field_0x10;
        *(undefined4 *)(lVar18 + 0x2818) = local_10c;
        *(undefined4 *)(lVar18 + 0x2814) = local_110;
        bVar6 = FWeakObjectPtr::IsValid(&local_160);
        if (bVar6) {
          pUVar11 = FWeakObjectPtr::Get(&local_160);
          (**(code **)(*(longlong *)pUVar11 + 0x2c8))(pUVar11);
        }
        pUVar11 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        (**(code **)(*(longlong *)pUVar11 + 0x2c0))(pUVar11,local_160,EVar1);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnCameraStateChangeDelegate,(FWriteAccessScope *)&local_58);
      puVar15 = &(this->OnCameraStateChangeDelegate).field_0x1c;
      *(int *)puVar15 = *(int *)puVar15 + 1;
      bVar6 = false;
      uVar17 = *(int *)&(this->OnCameraStateChangeDelegate).field_0x10 - 1;
      if (-1 < (int)uVar17) {
        lVar18 = (longlong)(int)uVar17 << 4;
        bVar6 = false;
        do {
          uVar10 = 0;
          if ((int)uVar17 < *(int *)&(this->OnCameraStateChangeDelegate).field_0x10) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar2 = *(longlong *)&(this->OnCameraStateChangeDelegate).field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar18) == 0) ||
              (plVar4 = *(longlong **)(lVar2 + lVar18), plVar4 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar4 + 0x68))(), cVar8 == '\0')) {
            bVar6 = true;
          }
          lVar18 = lVar18 + -0x10;
          uVar17 = uVar17 - 1;
        } while (-1 < (int)uVar17);
      }
      puVar15 = &(this->OnCameraStateChangeDelegate).field_0x1c;
      *(int *)puVar15 = *(int *)puVar15 + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->OnCameraStateChangeDelegate,false);
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
    }
  }
  return;
}

// CheckCameraState @ 14bc314a0

void __thiscall UDS_MainCameraComponent::CheckCameraState(UDS_MainCameraComponent *this)

{
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *this_00;
  bool bVar1;
  EDS_CameraStateType EVar2;
  UObject *pUVar3;
  UDS_ConstructionManager *pUVar4;
  ADS_PlayerController *this_01;
  UDS_CharStateData *pUVar5;
  UDS_EntityManager *this_02;
  UWN_AbilitySystemComponent *this_03;
  FGameplayTag *pFVar6;
  EDS_CharState local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> local_28;
  ulong64 local_20;
  
  ADS_MainCharacter::GetMainPlayer();
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar1) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res20);
  (**(code **)(*(longlong *)&pUVar3[0x29].field_0x10 + 0x78))();
  bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals(&local_28,(void *)0x0);
  if (bVar1) {
    return;
  }
  this_00 = &this->CharStateData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar1) {
    return;
  }
  ADS_PlayerController::GetPlayerController();
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar1) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res20);
  (**(code **)(*(longlong *)&pUVar3[0x29].field_0x10 + 0x178))(&pUVar3[0x29].field_0x10,&local_30);
  bVar1 = FWeakObjectPtr::IsValid(&local_30);
  if (!bVar1) {
    return;
  }
  pUVar4 = UDS_ConstructionManager::GetInst();
  if ((pUVar4 == (UDS_ConstructionManager *)0x0) || (pUVar4->IsConstructionMode != true)) {
    this_01 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res18);
    bVar1 = ADS_PlayerController::HasInputFlag(this_01,LOCK_ON_TARGET);
    if (bVar1) {
      EVar2 = CameraStateLockOnTarget;
    }
    else {
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_res10 = SkillMode;
      bVar1 = UDS_CharStateData::HasCharState(pUVar5,&local_res10);
      if (bVar1) {
        local_res10 = CONCAT71(local_res10._1_7_,0x18);
        this_02 = UDS_EntityManager::GetInst();
        local_20 = 0;
        if (this_02 != (UDS_EntityManager *)0x0) {
          local_20 = UDS_EntityManager::GetCurrentMainCharEntityID(this_02,true);
        }
        UDS_AbilityDataSet::GetAbilityData<UDS_SkillModeAbilityData>
                  ((ulong64 *)&local_38,(EDS_AbilityTagType *)&local_20);
        bVar1 = FWeakObjectPtr::IsValid(&local_38);
        if (!bVar1) {
          return;
        }
        pUVar3 = FWeakObjectPtr::Get(&local_38);
        if (*(int *)&pUVar3[2].field_0x8 == this->CurrentSkillModeID) {
          return;
        }
        pUVar3 = FWeakObjectPtr::Get(&local_38);
        EVar2 = CameraStateSkillMode;
        this->CurrentSkillModeID = *(int *)&pUVar3[2].field_0x8;
      }
      else {
        this->CurrentSkillModeID = 0;
        if (this->bCommandRotationLock != true) {
          this_03 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_30);
          local_res10 = CONCAT71(local_res10._1_7_,0x25);
          pFVar6 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res10);
          bVar1 = UWN_AbilitySystemComponent::HasTag(this_03,pFVar6);
          if (!bVar1) {
            pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
            local_res10 = Battle;
            bVar1 = UDS_CharStateData::HasCharState(pUVar5,&local_res10);
            if (bVar1) {
              pUVar3 = FWeakObjectPtr::Get(&local_res18);
              EVar2 = CameraStateBattle;
              if (pUVar3[0x3d].field_0x21 != '\x01') {
                EVar2 = CameraStateBattle2;
              }
            }
            else {
              pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
              local_res10 = Warp;
              bVar1 = UDS_CharStateData::HasCharState(pUVar5,&local_res10);
              if (bVar1) {
                EVar2 = CameraStateWarpEnd;
              }
              else {
                pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                local_res10 = CONCAT44(local_res10._4_4_,0x26);
                bVar1 = UDS_CharStateData::HasCharDetailState
                                  (pUVar5,(EDS_CharDetailState *)&local_res10);
                if (bVar1) {
                  EVar2 = CameraStatePowerJump;
                }
                else {
                  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                  local_res10 = Swim;
                  bVar1 = UDS_CharStateData::HasCharState(pUVar5,&local_res10);
                  if (bVar1) {
                    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                    local_res10 = CONCAT44(local_res10._4_4_,6);
                    bVar1 = UDS_CharStateData::HasCharDetailState
                                      (pUVar5,(EDS_CharDetailState *)&local_res10);
                    EVar2 = bVar1 + CameraStateSwim;
                  }
                  else {
                    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                    local_res10 = CONCAT44(local_res10._4_4_,0x5e);
                    bVar1 = UDS_CharStateData::HasCharDetailState
                                      (pUVar5,(EDS_CharDetailState *)&local_res10);
                    if (bVar1) {
                      EVar2 = CameraStateOnAirShip;
                    }
                    else {
                      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                      local_res10 = CONCAT44(local_res10._4_4_,0x1e);
                      bVar1 = UDS_CharStateData::HasCharDetailState
                                        (pUVar5,(EDS_CharDetailState *)&local_res10);
                      if (bVar1) {
                        EVar2 = CameraStateHovering;
                      }
                      else {
                        pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                        local_res10 = CONCAT44(local_res10._4_4_,0x1f);
                        bVar1 = UDS_CharStateData::HasCharDetailState
                                          (pUVar5,(EDS_CharDetailState *)&local_res10);
                        if (!bVar1) {
                          pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                          local_res10 = CONCAT44(local_res10._4_4_,0x20);
                          bVar1 = UDS_CharStateData::HasCharDetailState
                                            (pUVar5,(EDS_CharDetailState *)&local_res10);
                          if (!bVar1) {
                            pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                            local_res10 = CONCAT44(local_res10._4_4_,0x21);
                            bVar1 = UDS_CharStateData::HasCharDetailState
                                              (pUVar5,(EDS_CharDetailState *)&local_res10);
                            if (!bVar1) {
                              pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                              local_res10 = Mount;
                              bVar1 = UDS_CharStateData::HasCharState(pUVar5,&local_res10);
                              if (!bVar1) {
                                pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr)
                                ;
                                local_res10 = Interaction;
                                bVar1 = UDS_CharStateData::HasCharState(pUVar5,&local_res10);
                                if (bVar1) {
                                  pUVar5 = (UDS_CharStateData *)
                                           FWeakObjectPtr::Get(&this_00->WeakPtr);
                                  local_res10 = CONCAT44(local_res10._4_4_,0x4d);
                                  bVar1 = UDS_CharStateData::HasCharDetailState
                                                    (pUVar5,(EDS_CharDetailState *)&local_res10);
                                  if (bVar1) {
                                    EVar2 = CameraStateTaming;
                                    goto LAB_14bc3194e;
                                  }
                                }
                                pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr)
                                ;
                                local_res10 = Interaction;
                                bVar1 = UDS_CharStateData::HasCharState(pUVar5,&local_res10);
                                if (bVar1) {
                                  pUVar5 = (UDS_CharStateData *)
                                           FWeakObjectPtr::Get(&this_00->WeakPtr);
                                  local_res10 = CONCAT44(local_res10._4_4_,0x42);
                                  bVar1 = UDS_CharStateData::HasCharDetailState
                                                    (pUVar5,(EDS_CharDetailState *)&local_res10);
                                  if (bVar1) {
                                    EVar2 = CameraStateCamp;
                                    goto LAB_14bc3194e;
                                  }
                                }
                                pUVar3 = FWeakObjectPtr::Get(&local_res18);
                                if (pUVar3[0x3d].field_0x21 == '\x01') {
                                  ChangeCameraState(this,CameraStateBase,false);
                                  return;
                                }
                                ChangeCameraState(this,CameraStateBase2,false);
                                return;
                              }
                              pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                              local_res10._0_4_ = AniCut|ToggleSkill|AutoMove|Shield;
                              bVar1 = UDS_CharStateData::HasCharDetailState
                                                (pUVar5,(EDS_CharDetailState *)&local_res10);
                              if (bVar1) {
                                pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr)
                                ;
                                local_res10 = CONCAT44(local_res10._4_4_,0x65);
                                bVar1 = UDS_CharStateData::HasCharDetailState
                                                  (pUVar5,(EDS_CharDetailState *)&local_res10);
                                EVar2 = bVar1 + CameraStateMountAir;
                              }
                              else {
                                pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr)
                                ;
                                local_res10 = CONCAT44(local_res10._4_4_,0x65);
                                bVar1 = UDS_CharStateData::HasCharDetailState
                                                  (pUVar5,(EDS_CharDetailState *)&local_res10);
                                EVar2 = bVar1 + CameraStateMount;
                              }
                              goto LAB_14bc3194e;
                            }
                          }
                        }
                        EVar2 = CameraStateAirDash;
                      }
                    }
                  }
                }
              }
            }
            goto LAB_14bc3194e;
          }
        }
        EVar2 = CameraStateLockFront;
      }
    }
  }
  else {
    EVar2 = CameraStateConstruction;
  }
LAB_14bc3194e:
  ChangeCameraState(this,EVar2,false);
  return;
}

// CloseDebugWindow @ 14bc32af0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_MainCameraComponent::CloseDebugWindow(UDS_MainCameraComponent *this)

{
  UDS_WindowManager *this_00;
  float local_res10 [2];
  uint local_res18 [4];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res10[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,-4,local_res18,local_res10);
  }
  return;
}

// CreateCameraState @ 14bc335a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr> __thiscall
UDS_MainCameraComponent::CreateCameraState
          (UDS_MainCameraComponent *this,EDS_CameraStateType param_1)

{
  TMap<EDS_CameraStateType,TObjectPtr<UDS_CameraStateBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CameraStateType,TObjectPtr<UDS_CameraStateBase>,0>_>
  *this_00;
  int iVar1;
  TObjectPtr<UDS_CameraStateBase> *pTVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  undefined7 in_register_00000011;
  FWeakObjectPtr this_01;
  undefined1 *puVar6;
  TObjectPtr<UDS_CameraStateBase>_u_0 TVar7;
  EDS_CameraStateType in_R8B;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  TObjectPtr<UDS_CameraStateBase>_u_0 local_d0;
  TObjectPtr<UDS_CameraStateBase>_u_0 local_c8;
  undefined1 *local_c0;
  TObjectPtr<UDS_CameraStateBase>_u_0 *local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  this_01._1_7_ = in_register_00000011;
  this_01.ObjectIndex._0_1_ = param_1;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  this_00 = &this->CameraStateMap;
  if (*(int *)&(this->CameraStateMap).field_0x8 != *(int *)&(this->CameraStateMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->CameraStateMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->CameraStateMap).field_0x38;
    }
    iVar1 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->CameraStateMap).field_0x48 - 1) &
                              (ulonglong)in_R8B) * 4);
    if (iVar1 != -1) {
      do {
        if (*(EDS_CameraStateType *)(*(longlong *)this_00 + (longlong)iVar1 * 0x18) == in_R8B) {
          pTVar2 = TMapBase<enum_EDS_CameraStateType,TObjectPtr<UDS_CameraStateBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CameraStateType,TObjectPtr<UDS_CameraStateBase>,0>_>
                   ::FindChecked(this_00,in_R8B);
          TVar7.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar2->field0_0x0).DebugPtr;
          goto LAB_14bc3374c;
        }
        iVar1 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  switch(in_R8B) {
  default:
    pUVar4 = GetTransientPackageAsObject();
    local_c8.DebugPtr = NewObject<UDS_CameraStateBase>(pUVar4);
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14bc33721;
    goto joined_r0x00014bc336b5;
  case CameraStateLockFront:
    pUVar4 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_CameraStateLockFront_NoRegister();
    break;
  case CameraStateLockOnTarget:
    pUVar4 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_CameraStateLockOnTarget_NoRegister();
    break;
  case CameraStateFreeView:
    pUVar4 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_CameraStateFreeView_NoRegister();
  }
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._8_8_ = pUVar4;
  local_c8.DebugPtr =
       (UDS_CameraStateBase *)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar5 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
joined_r0x00014bc336b5:
    if (local_c8.DebugPtr != (UDS_CameraStateBase *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_c8.DebugPtr);
    }
  }
LAB_14bc33721:
  local_c0 = local_d8;
  local_b8 = &local_c8;
  TSet<TTuple<enum_EDS_CameraStateType,TObjectPtr<UDS_CameraStateBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_CameraStateType,TObjectPtr<UDS_CameraStateBase>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CameraStateType_&,TObjectPtr<UDS_CameraStateBase>_&>_>
            (this_00,(TPairInitializer<EDS_CameraStateType_&,TObjectPtr<UDS_CameraStateBase>_&> *)
                     &local_d0.ObjectPtr,(bool *)&local_c0);
  TVar7 = local_c8;
LAB_14bc3374c:
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar7.DebugPtr != (UDS_CameraStateBase *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar7.DebugPtr != (UDS_CameraStateBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
    }
  }
  *(undefined8 *)this_01 = 0;
  local_d0 = TVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar7.DebugPtr != (UDS_CameraStateBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_01,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr>)this_01;
}

// CreateCameraState_SkillMode @ 14bc33800

TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr> __thiscall
UDS_MainCameraComponent::CreateCameraState_SkillMode(UDS_MainCameraComponent *this,int param_1)

{
  TObjectPtr<UDS_CameraStateBase> *pTVar1;
  UObject *pUVar2;
  int in_register_00000014;
  FWeakObjectPtr this_00;
  TPairInitializer<int_const_&,TObjectPtr<UDS_CameraStateBase>_&> local_res8;
  undefined1 local_res18 [8];
  undefined1 *local_18;
  TObjectPtr<UDS_CameraStateBase> **local_10;
  
  this_00.ObjectSerialNumber = in_register_00000014;
  this_00.ObjectIndex = param_1;
  pUVar2 = GetTransientPackageAsObject();
  local_res8.Value = (TObjectPtr<UDS_CameraStateBase> *)NewObject<UDS_CameraStateBase>(pUVar2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UDS_CameraStateBase *)local_res8.Value != (UDS_CameraStateBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.Value);
  }
  local_18 = local_res18;
  local_10 = &local_res8.Value;
  TSet<TTuple<int,TObjectPtr<UDS_CameraStateBase>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_CameraStateBase>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,TObjectPtr<UDS_CameraStateBase>_&>_>
            ((TSet<TTuple<int,TObjectPtr<UDS_CameraStateBase>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_CameraStateBase>,0>,FDefaultSetAllocator>
              *)&this->CameraStateMap_SkillMode,&local_res8,(bool *)&local_18);
  pTVar1 = local_res8.Value;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if ((UDS_CameraStateBase *)local_res8.Value != (UDS_CameraStateBase *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_res8.Value);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_CameraStateBase *)pTVar1 != (UDS_CameraStateBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pTVar1);
    }
  }
  local_res8.Key = (int *)pTVar1;
  *(undefined8 *)this_00 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UDS_CameraStateBase *)pTVar1 != (UDS_CameraStateBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pTVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr>)this_00;
}

// EndPlay @ 14bc3a4c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_MainCameraComponent::EndPlay(UDS_MainCameraComponent *this,Type param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res18 [2];
  
  USceneComponent::EndPlay((USceneComponent *)this,param_1);
  ADS_PlayerController::GetPlayerController();
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    FWeakObjectPtr::Get(local_res18);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &ADS_PlayerController::ChangeInputDelegate,this);
  }
  return;
}

// GetCameraFOV @ 14bc3f8b0

float __thiscall UDS_MainCameraComponent::GetCameraFOV(UDS_MainCameraComponent *this)

{
  bool bVar1;
  UDS_CameraStateBase *this_00;
  float fVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->NowCameraStatePtr).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_CameraStateBase *)FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
    fVar2 = UDS_CameraStateBase::GetFOV(this_00);
    return fVar2;
  }
  return 0.0;
}

// GetCameraRotation @ 14bc3f8f0

TRotator<double> * __thiscall
UDS_MainCameraComponent::GetCameraRotation
          (UDS_MainCameraComponent *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  bool bVar2;
  UDS_CameraStateBase *this_00;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->NowCameraStatePtr).WeakPtr);
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  if (bVar2) {
    this_00 = (UDS_CameraStateBase *)FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
    UDS_CameraStateBase::GetCameraRotation(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  __return_storage_ptr__->Yaw = dVar1;
  __return_storage_ptr__->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return __return_storage_ptr__;
}

// GetCameraState @ 14bc3f960

TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr> __thiscall
UDS_MainCameraComponent::GetCameraState(UDS_MainCameraComponent *this,EDS_CameraStateType param_1)

{
  longlong lVar1;
  UDS_CameraStateBase *pUVar2;
  int iVar3;
  TObjectPtr<UDS_CameraStateBase> *pTVar4;
  undefined7 in_register_00000011;
  FWeakObjectPtr this_00;
  EDS_CameraStateType in_R8B;
  undefined1 *puVar5;
  UDS_CameraStateBase *local_res8;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ObjectIndex._0_1_ = param_1;
  if (*(int *)&(this->CameraStateMap).field_0x8 != *(int *)&(this->CameraStateMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CameraStateMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CameraStateMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(this->CameraStateMap).field_0x48 - 1) &
                              (ulonglong)in_R8B) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->CameraStateMap;
      do {
        if (*(EDS_CameraStateType *)(lVar1 + (longlong)iVar3 * 0x18) == in_R8B) {
          pTVar4 = TMapBase<enum_EDS_CameraStateType,TObjectPtr<UDS_CameraStateBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CameraStateType,TObjectPtr<UDS_CameraStateBase>,0>_>
                   ::FindChecked(&this->CameraStateMap,in_R8B);
          pUVar2 = (pTVar4->field0_0x0).DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar2 != (UDS_CameraStateBase *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar2 != (UDS_CameraStateBase *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
          }
          *(undefined8 *)this_00 = 0;
          local_res8 = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar2 != (UDS_CameraStateBase *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
          return (TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr>)this_00;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  *(undefined8 *)this_00 = 0;
  local_res8 = (UDS_CameraStateBase *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr>)this_00;
}

// GetCameraYaw @ 14bc3fa60

float __thiscall UDS_MainCameraComponent::GetCameraYaw(UDS_MainCameraComponent *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->NowCameraStatePtr).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
    return (float)*(double *)&pUVar2[0xf].field_0x18;
  }
  return 0.0;
}

// GetNowCameraState @ 14bc42cc0

TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr> __thiscall
UDS_MainCameraComponent::GetNowCameraState(UDS_MainCameraComponent *this)

{
  FWeakObjectPtr FVar1;
  EDS_CameraStateType in_DL;
  undefined7 in_register_00000011;
  
  FVar1._1_7_ = in_register_00000011;
  FVar1.ObjectIndex._0_1_ = in_DL;
  GetCameraState(this,in_DL);
  return (TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr>)FVar1;
}

// GetSkillModeCameraState @ 14bc43ff0

TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr> __thiscall
UDS_MainCameraComponent::GetSkillModeCameraState(UDS_MainCameraComponent *this,int param_1)

{
  longlong lVar1;
  UDS_CameraStateBase *pUVar2;
  int iVar3;
  TObjectPtr<UDS_CameraStateBase> *pTVar4;
  int in_register_00000014;
  FWeakObjectPtr this_00;
  uint in_R8D;
  undefined1 *puVar5;
  UDS_CameraStateBase *local_res8;
  
  this_00.ObjectSerialNumber = in_register_00000014;
  this_00.ObjectIndex = param_1;
  if (*(int *)&(this->CameraStateMap_SkillMode).field_0x8 !=
      *(int *)&(this->CameraStateMap_SkillMode).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CameraStateMap_SkillMode).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CameraStateMap_SkillMode).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->CameraStateMap_SkillMode).field_0x48 - 1U & in_R8D) *
                              4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->CameraStateMap_SkillMode;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar3 * 0x18) == in_R8D) {
          pTVar4 = TMapBase<int,TObjectPtr<UDS_CameraStateBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_CameraStateBase>,0>_>
                   ::FindChecked((TMapBase<int,TObjectPtr<UDS_CameraStateBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_CameraStateBase>,0>_>
                                  *)&this->CameraStateMap_SkillMode,in_R8D);
          pUVar2 = (pTVar4->field0_0x0).DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar2 != (UDS_CameraStateBase *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar2 != (UDS_CameraStateBase *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
          }
          *(undefined8 *)this_00 = 0;
          local_res8 = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar2 != (UDS_CameraStateBase *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
          return (TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr>)this_00;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  *(undefined8 *)this_00 = 0;
  local_res8 = (UDS_CameraStateBase *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr>)this_00;
}

// GetZoomInOutValue @ 14bc45180

float __thiscall UDS_MainCameraComponent::GetZoomInOutValue(UDS_MainCameraComponent *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->NowCameraStatePtr).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
    return *(float *)&pUVar2[0x10].field_0x18;
  }
  return 0.0;
}

// InitCameraComponent @ 14bc47550

void __thiscall UDS_MainCameraComponent::InitCameraComponent(UDS_MainCameraComponent *this)

{
  bool bVar1;
  UObject *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_58;
  undefined8 uStack_50;
  FDestructionSentinel local_48;
  UObject *local_30;
  
  ADS_PlayerController::GetPlayerController();
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    FWeakObjectPtr::Get(&local_res18);
    uStack_50._0_4_ = 0;
    local_58 = (UObject *)OnInputChange;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_MainCameraComponent>
              (&ADS_PlayerController::ChangeInputDelegate,(UDS_MainCameraComponent *)&local_res20,
               (pmf_da16205b *)this);
    pUVar2 = FWeakObjectPtr::Get(&local_res18);
    local_58 = (UObject *)OnCameraBattleMode;
    uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar2[0x32].field_0x20,
               (FWriteAccessScope *)&local_48);
    local_30 = pUVar2 + 0x33;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_MainCameraComponent____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_MainCameraComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res20 = (FWeakObjectPtr)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_MainCameraComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res20);
      puVar3[4] = local_58;
      puVar3[5] = uStack_50;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    uStack_50 = uStack_50 & 0xffffffff00000000;
    local_58 = (UObject *)OnChangedCursorState;
    pUVar2 = FWeakObjectPtr::Get(&local_res18);
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_MainCameraComponent>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               (pUVar2 + 0x39),(UDS_MainCameraComponent *)&local_res20,(pmf_0df9d4ae *)this);
    ADS_MainCharacter::GetMainPlayer();
    bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res10,(void *)0x0)
    ;
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res10);
      pUVar2 = *(UObject **)&pUVar2[0x41].field_0x8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar2 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_58 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
      (this->CameraBoomPtr).WeakPtr = local_res20;
      FWeakObjectPtr::Get(&local_res10);
      UDS_CharInfoData::GetData((ulong64)&local_res20);
      (this->CharInfoData).WeakPtr = local_res20;
      FWeakObjectPtr::Get(&local_res10);
      UDS_CharStateData::GetData((ulong64)&local_res20);
      (this->CharStateData).WeakPtr = local_res20;
      pUVar2 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
      uStack_50 = uStack_50 & 0xffffffff00000000;
      local_58 = (UObject *)OnChangedCharState;
      pUVar2 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_MainCameraComponent>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                  *)&pUVar2[7].field_0x20,(UDS_MainCameraComponent *)&local_res20,
                 (pmf_0cc00bdb *)this);
      pUVar2 = FWeakObjectPtr::Get(&local_res10);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x43].field_0x10,this
                );
      uStack_50 = uStack_50 & 0xffffffff00000000;
      local_58 = (UObject *)OnChangeActorSequencerPlay;
      pUVar2 = FWeakObjectPtr::Get(&local_res10);
      TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_MainCameraComponent>
                ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
                 &pUVar2[0x43].field_0x10,(UDS_MainCameraComponent *)&local_res20,
                 (pmf_0df9d4ae *)this);
    }
    (**(code **)(this->_padding_ + 0x700))(this);
    ChangeCameraState(this,CameraStateBase,false);
    bVar1 = TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr>::UEOpEquals
                      (&this->NowCameraStatePtr,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
      (**(code **)(*(longlong *)pUVar2 + 0x2e8))(pUVar2);
    }
  }
  return;
}

// InitializeCameraStateData @ 14bc48d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_MainCameraComponent::InitializeCameraStateData(UDS_MainCameraComponent *this)

{
  code *pcVar1;
  UDS_CameraStateBase *pUVar2;
  bool bVar3;
  uint uVar4;
  UDS_LogManager *pUVar5;
  UDS_EntityManager *this_00;
  FDS_CharacterBaseTableRow *pFVar6;
  FDS_CameraPresetTableRow *pFVar7;
  FDS_CameraParametersTableRow *pFVar8;
  UDS_SkillDataSet *this_01;
  FDS_SkillModeTableRow *pFVar9;
  UObject *pUVar10;
  ulonglong uVar11;
  FWeakObjectPtr FVar12;
  uint uVar13;
  ulonglong uVar14;
  FWeakObjectPtr FVar15;
  undefined1 auStackY_b18 [32];
  FWeakObjectPtr local_ad8;
  undefined1 local_ad0 [8];
  FWeakObjectPtr local_ac8;
  int local_ac0 [2];
  FDS_EntityBase *local_ab8;
  FWeakObjectPtr local_ab0;
  FWeakObjectPtr local_aa8;
  UDS_MainCameraComponent *local_aa0;
  UDS_CameraStateBase *local_a98;
  FDS_CameraCommonData *local_a90;
  TArray<int,TSizedDefaultAllocator<32>_> local_a88;
  TPairInitializer<int_const_&,TObjectPtr<UDS_CameraStateBase>_&> local_a78;
  int *local_a68;
  UDS_CameraStateBase **local_a60;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_a58;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_938;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_818;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b18;
  local_a90 = &this->CameraCommonData;
  local_aa0 = this;
  FDS_CameraCommonData::SetData(local_a90);
  ADS_PlayerController::GetPlayerController();
  bVar3 = FWeakObjectPtr::IsValid(&local_ab0);
  if (bVar3) {
    this_00 = UDS_EntityManager::GetInst();
    if ((this_00 == (UDS_EntityManager *)0x0) ||
       (local_ab8 = UDS_EntityManager::GetCurrentMainCharEntityBase(this_00,true),
       local_ab8 == (FDS_EntityBase *)0x0)) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_MainCameraComponent::InitializeCameraStateData",0x32,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_158.Ptr,0x21f,L"mainplayer EntityBase is nullptr.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      pFVar6 = FDS_CharacterBaseTableRow::Get(local_ab8->TableID,true);
      if (pFVar6 == (FDS_CharacterBaseTableRow *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_938._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_938,"UDS_MainCameraComponent::InitializeCameraStateData",0x32,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_938.Ptr,0x226,L"characterBaseTable is nullptr %d");
          if ((void *)local_938._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_938._padding_);
          }
        }
      }
      else {
        pFVar7 = FDS_CameraPresetTableRow::Get((longlong)pFVar6->ID_CameraPreset,true);
        if (pFVar7 == (FDS_CameraPresetTableRow *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            local_818._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_818,"UDS_MainCameraComponent::InitializeCameraStateData",0x32,Yes);
            UDS_LogManager::PrintLog
                      (pUVar5,1,Warning,local_818.Ptr,0x22d,L"cameraPresetTable is nullptr");
            if ((void *)local_818._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_818._padding_);
            }
          }
        }
        else {
          uVar14 = 0;
          uVar11 = uVar14;
          if (0 < (pFVar7->CameraState).ArrayNum) {
            do {
              uVar13 = (uint)uVar14;
              uVar4 = 0;
              if ((int)uVar13 < (pFVar7->CameraState).ArrayNum) {
                uVar4 = ~uVar13 >> 0x1f;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              if ((-1 < (int)uVar13) && ((int)uVar13 < (pFVar7->ID_CameraParameter).ArrayNum)) {
                uVar4 = 0;
                if ((int)uVar13 < (pFVar7->ID_CameraParameter).ArrayNum) {
                  uVar4 = ~uVar13 >> 0x1f;
                }
                if ((uVar4 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                pFVar8 = FDS_CameraParametersTableRow::Get
                                   ((longlong)
                                    *(int *)((pFVar7->ID_CameraParameter).AllocatorInstance.Data +
                                            uVar11 * 4),true);
                if (pFVar8 == (FDS_CameraParametersTableRow *)0x0) {
                  pUVar5 = UDS_LogManager::GetInst();
                  if (pUVar5 != (UDS_LogManager *)0x0) {
                    pUVar5 = UDS_LogManager::GetInst();
                    local_6f8._padding_ = 0;
                    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                              (&local_6f8,"UDS_MainCameraComponent::InitializeCameraStateData",0x32,
                               Yes);
                    UDS_LogManager::PrintLog
                              (pUVar5,1,Warning,local_6f8.Ptr,0x23f,
                               L"FDS_CameraParametersTableRow is nullptr %d");
                    if ((void *)local_6f8._padding_ != (void *)0x0) {
                      FMemory::Free((void *)local_6f8._padding_);
                    }
                  }
                }
                else {
                  CreateCameraState(local_aa0,(EDS_CameraStateType)&local_ad8);
                  bVar3 = TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr>::UEOpEquals
                                    ((TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr> *)
                                     &local_ad8,(void *)0x0);
                  if (bVar3) {
                    pUVar5 = UDS_LogManager::GetInst();
                    if (pUVar5 != (UDS_LogManager *)0x0) {
                      pUVar5 = UDS_LogManager::GetInst();
                      local_5d8._padding_ = 0;
                      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                                (&local_5d8,"UDS_MainCameraComponent::InitializeCameraStateData",
                                 0x32,Yes);
                      UDS_LogManager::PrintLog
                                (pUVar5,1,Warning,local_5d8.Ptr,0x246,
                                 L"UDS_CameraStateBase is nullptr %d");
                      if ((void *)local_5d8._padding_ != (void *)0x0) {
                        FMemory::Free((void *)local_5d8._padding_);
                      }
                    }
                  }
                  else {
                    pUVar10 = FWeakObjectPtr::Get(&local_ad8);
                    (**(code **)(*(longlong *)pUVar10 + 0x2b0))(pUVar10,local_ab0,pFVar8,local_a90);
                  }
                }
              }
              uVar14 = (ulonglong)(uVar13 + 1);
              uVar11 = uVar11 + 1;
            } while ((int)(uVar13 + 1) < (pFVar7->CameraState).ArrayNum);
          }
          TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_aa8);
          bVar3 = FWeakObjectPtr::IsValid(&local_aa8);
          if (bVar3) {
            this_01 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_aa8);
            UDS_SkillDataSet::GetAllSkillModeList(this_01,&local_a88);
            uVar11 = (ulonglong)local_a88.ArrayNum;
            local_ab8 = (FDS_EntityBase *)CONCAT44(local_ab8._4_4_,local_a88.ArrayNum);
            local_ad8 = (FWeakObjectPtr)((longlong)local_a88.AllocatorInstance.Data + uVar11 * 4);
            FVar12 = local_ad8;
            FVar15 = (FWeakObjectPtr)local_a88.AllocatorInstance.Data;
LAB_14bc49220:
            if (local_a88.ArrayNum != (int)uVar11) {
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_ad0);
            }
            if (FVar15 == FVar12) {
              if ((FWeakObjectPtr)local_a88.AllocatorInstance.Data == (FWeakObjectPtr)0x0) {
                return;
              }
              FMemory::Free(local_a88.AllocatorInstance.Data);
              return;
            }
            if ((*(int *)FVar15 != 0) &&
               (pFVar9 = FDS_SkillModeTableRow::Get((longlong)*(int *)FVar15,true),
               pFVar9 != (FDS_SkillModeTableRow *)0x0)) {
              pFVar8 = FDS_CameraParametersTableRow::Get
                                 ((longlong)pFVar9->ID_SkillAimModeCamera,true);
              if (pFVar8 != (FDS_CameraParametersTableRow *)0x0) {
                local_ac0[0] = pFVar9->ID;
                pUVar10 = GetTransientPackageAsObject();
                local_a98 = NewObject<UDS_CameraStateBase>(pUVar10);
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_a98 != (UDS_CameraStateBase *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_a98);
                }
                local_a68 = local_ac0;
                local_a60 = &local_a98;
                TSet<TTuple<int,TObjectPtr<UDS_CameraStateBase>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_CameraStateBase>,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<int_const_&,TObjectPtr<UDS_CameraStateBase>_&>_>
                          ((TSet<TTuple<int,TObjectPtr<UDS_CameraStateBase>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_CameraStateBase>,0>,FDefaultSetAllocator>
                            *)&local_aa0->CameraStateMap_SkillMode,&local_a78,(bool *)&local_a68);
                pUVar2 = local_a98;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  if (local_a98 != (UDS_CameraStateBase *)0x0) {
                    UE::GC::MarkAsReachable((UObject *)local_a98);
                  }
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar2 != (UDS_CameraStateBase *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)pUVar2);
                  }
                }
                local_ac8.ObjectIndex = 0;
                local_ac8.ObjectSerialNumber = 0;
                local_a78.Value = (TObjectPtr<UDS_CameraStateBase> *)pUVar2;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar2 != (UDS_CameraStateBase *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar2);
                }
                FWeakObjectPtr::operator=(&local_ac8,(FObjectPtr)&local_a78.Value);
                bVar3 = TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr>::UEOpEquals
                                  ((TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr> *)&local_ac8,
                                   (void *)0x0);
                if (!bVar3) {
                  pUVar5 = UDS_LogManager::GetInst();
                  if (pUVar5 != (UDS_LogManager *)0x0) {
                    pUVar5 = UDS_LogManager::GetInst();
                    local_278._padding_ = 0;
                    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                              (&local_278,"UDS_MainCameraComponent::InitializeCameraStateData",0x32,
                               Yes);
                    UDS_LogManager::PrintLog
                              (pUVar5,1,Display,local_278.Ptr,0x26d,
                               L"[GS] SkillMode Camera init. (SkilModeID: %d   CameraParameterID: %d)"
                              );
                    if ((void *)local_278._padding_ != (void *)0x0) {
                      FMemory::Free((void *)local_278._padding_);
                    }
                  }
                  pUVar10 = FWeakObjectPtr::Get(&local_ac8);
                  (**(code **)(*(longlong *)pUVar10 + 0x2b8))(pUVar10,local_ab0,pFVar8,local_a90);
                  FVar12 = local_ad8;
                  goto LAB_14bc49525;
                }
                pUVar5 = UDS_LogManager::GetInst();
                FVar12 = local_ad8;
                if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bc49525;
                pUVar5 = UDS_LogManager::GetInst();
                local_398._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_398,"UDS_MainCameraComponent::InitializeCameraStateData",0x32,Yes)
                ;
                UDS_LogManager::PrintLog
                          (pUVar5,1,Warning,local_398.Ptr,0x269,
                           L"UDS_CameraStateBase is nullptr EDS_CameraStateType::CameraStateSkillMode."
                          );
                FVar12 = local_ad8;
                if ((void *)local_398._padding_ == (void *)0x0) goto LAB_14bc49525;
                FMemory::Free((void *)local_398._padding_);
                uVar11 = (ulonglong)local_ab8 & 0xffffffff;
                FVar15 = (FWeakObjectPtr)((longlong)FVar15 + 4);
                FVar12 = local_ad8;
                goto LAB_14bc49220;
              }
              pUVar5 = UDS_LogManager::GetInst();
              if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bc49525;
              pUVar5 = UDS_LogManager::GetInst();
              local_4b8._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_4b8,"UDS_MainCameraComponent::InitializeCameraStateData",0x32,Yes);
              UDS_LogManager::PrintLog
                        (pUVar5,1,Warning,local_4b8.Ptr,0x262,
                         L"FDS_CameraParametersTableRow is nullptr %d");
              FVar12 = local_ad8;
              if ((void *)local_4b8._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_4b8._padding_);
                uVar11 = (ulonglong)local_ab8 & 0xffffffff;
                FVar15 = (FWeakObjectPtr)((longlong)FVar15 + 4);
                FVar12 = local_ad8;
                goto LAB_14bc49220;
              }
            }
LAB_14bc49525:
            uVar11 = (ulonglong)local_ab8 & 0xffffffff;
            FVar15 = (FWeakObjectPtr)((longlong)FVar15 + 4);
            goto LAB_14bc49220;
          }
        }
      }
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_a58._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_a58,"UDS_MainCameraComponent::InitializeCameraStateData",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_a58.Ptr,0x218,L"playerController is nullptr.")
      ;
      if ((void *)local_a58._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_a58._padding_);
      }
    }
  }
  return;
}

// OnCameraBattleMode @ 14bc4c580

void __thiscall
UDS_MainCameraComponent::OnCameraBattleMode(UDS_MainCameraComponent *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->CameraBoomPtr,(void *)0x0);
  if (!bVar1) {
    this->IsBattleMode = this->IsBattleMode == false;
  }
  return;
}

// OnCameraNotifyBegin @ 14bc4c5c0

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
UDS_MainCameraComponent::OnCameraNotifyBegin(UDS_MainCameraComponent *this,float param_1)

{
  FTimerHandle *pFVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  FString *pFVar5;
  UCurveFloat *pUVar6;
  UClass *pUVar7;
  FPayload *pFVar8;
  TRotator<double> *pTVar9;
  FTimerManager *pFVar10;
  FTimerData *pFVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  int iVar14;
  int iVar15;
  longlong *this_00;
  undefined4 in_EDX;
  uint uVar16;
  longlong lVar17;
  UDS_MainCameraComponent *local_res8;
  FDelegateAllocation local_88;
  TRotator<double> local_78;
  TQuat<double> local_58;
  
  if ((this->DefaultCurveData).field0_0x0.DebugPtr != (UCurveFloat *)0x0) goto LAB_14bc4c6af;
  pFVar5 = FWN_SoftObjectUtils::GetObjectPath
                     ((FString *)&local_88,&(this->CameraCommonData).CameraZoomCurvePath,false);
  local_58.X = 0.0;
  pTVar9 = &local_78;
  local_58.Y = 0.0;
  local_58.Z = 0.0;
  local_58.W = 0.0;
  local_78.Pitch = (double)(pFVar5->Data).AllocatorInstance.Data;
  iVar15 = (pFVar5->Data).ArrayNum;
  iVar14 = iVar15 + -1;
  if (iVar15 == 0) {
    iVar14 = 0;
  }
  local_78.Yaw = (double)CONCAT44(local_78.Yaw._4_4_,iVar14);
  FSoftObjectPath::SetPath((FSoftObjectPath *)&local_58,(TStringView<wchar_t> *)pTVar9);
  if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_88.DelegateAllocator);
  }
  pUVar6 = (UCurveFloat *)FSoftObjectPath::ResolveObject((FSoftObjectPath *)&local_58);
  if (pUVar6 == (UCurveFloat *)0x0) {
LAB_14bc4c681:
    pUVar6 = (UCurveFloat *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UCurveFloat_NoRegister();
    pTVar9 = (TRotator<double> *)pUVar6->_padding_;
    iVar15 = (int)pUVar7->_padding_;
    if ((*(int *)&pTVar9[2].Yaw < iVar15) ||
       ((longlong *)*(undefined1 **)((wchar_t *)pTVar9[2].Pitch + (longlong)iVar15 * 4) !=
        &pUVar7->_padding_)) goto LAB_14bc4c681;
  }
  in_EDX = SUB84(pTVar9,0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->DefaultCurveData).field0_0x0.DebugPtr = pUVar6;
  if ((void *)local_58.Z != (void *)0x0) {
    FMemory::Free((void *)local_58.Z);
  }
LAB_14bc4c6af:
  this->CameraNotifyState = Start;
  this_00 = &this->_padding_;
  local_58.X = (double)this->_padding_;
  local_58.Y = (double)this->_padding_;
  local_58.Z = (double)this->_padding_;
  local_58.W = (double)this->_padding_;
  pFVar8 = FRotationConversionCache::GetOrCreatePayload((FRotationConversionCache *)this_00);
  lVar17 = -(ulonglong)((pFVar8->CachedQuat).W != local_58.W);
  auVar2._8_4_ = (int)lVar17;
  auVar2._0_8_ = -(ulonglong)((pFVar8->CachedQuat).Z != local_58.Z);
  auVar2._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
  uVar16 = movmskpd(in_EDX,auVar2);
  lVar17 = -(ulonglong)((pFVar8->CachedQuat).Y != local_58.Y);
  auVar3._8_4_ = (int)lVar17;
  auVar3._0_8_ = -(ulonglong)((pFVar8->CachedQuat).X != local_58.X);
  auVar3._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
  iVar15 = movmskpd((int)this_00,auVar3);
  if ((uVar16 & 0x3fffffff) != 0 || iVar15 != 0) {
    (pFVar8->CachedQuat).X = local_58.X;
    (pFVar8->CachedQuat).Y = local_58.Y;
    (pFVar8->CachedQuat).Z = local_58.Z;
    (pFVar8->CachedQuat).W = local_58.W;
    pTVar9 = UE::Math::TQuat<double>::Rotator(&local_58,&local_78);
    dVar4 = pTVar9->Yaw;
    (pFVar8->CachedRotator).Pitch = pTVar9->Pitch;
    (pFVar8->CachedRotator).Yaw = dVar4;
    (pFVar8->CachedRotator).Roll = pTVar9->Roll;
  }
  dVar4 = (pFVar8->CachedRotator).Yaw;
  (this->OriginalNotifyLootAtRotation).Pitch = (pFVar8->CachedRotator).Pitch;
  (this->OriginalNotifyLootAtRotation).Yaw = dVar4;
  (this->OriginalNotifyLootAtRotation).Roll = (pFVar8->CachedRotator).Roll;
  if (param_1 <= 0.0) {
    this->CameraNotifyState = Playing;
  }
  else {
    pFVar10 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar1 = &this->NotifyStartTimerHandle;
    pFVar11 = FTimerManager::FindTimer(pFVar10,pFVar1);
    if (pFVar11 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar10,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
    pFVar10 = FDS_TimerManager::Get((UObject *)0x0);
    local_78.Yaw = (double)((ulonglong)local_78.Yaw & 0xffffffff00000000);
    local_78.Pitch = (double)OnNotifyBeginFinished;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_88);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar13 = FDelegateHandle::GenerateNewID();
      puVar12[2] = uVar13;
      *puVar12 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_MainCameraComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar12[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_res8);
      puVar12[4] = local_78.Pitch;
      puVar12[5] = local_78.Yaw;
    }
    FTimerManager::SetTimer
              (pFVar10,&this->NotifyStartTimerHandle,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_88
               ,param_1,false,__real_bf800000);
    if (local_88.DelegateSize != 0) {
      if (local_88.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        return;
      }
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
  }
  return;
}

// OnCameraNotifyDistance @ 14bc4c8d0

void __thiscall
UDS_MainCameraComponent::OnCameraNotifyDistance
          (UDS_MainCameraComponent *this,float param_1,UCurveFloat *param_2,float param_3)

{
  bool bVar1;
  ADS_PlayerController *this_00;
  FWeakObjectPtr local_res8;
  
  if ((this->CameraInterp_Distance).field0_0x0.DebugPtr != (UDS_CameraInterp *)0x0) {
    ADS_PlayerController::GetPlayerController();
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res8);
      bVar1 = ADS_PlayerController::HasInputFlag(this_00,LOCK_ZOOM_IN_OUT);
      if (!bVar1) {
        if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_2 == (UCurveFloat *)0x0))
        {
          (this->DistanceCurveData).field0_0x0.DebugPtr = param_2;
          if (param_2 == (UCurveFloat *)0x0) {
            return;
          }
        }
        else {
          UE::GC::MarkAsReachable((UObject *)param_2);
          (this->DistanceCurveData).field0_0x0.DebugPtr = param_2;
        }
        UDS_CameraInterp::Initialize
                  ((this->CameraInterp_Distance).field0_0x0.DebugPtr,(UCurveBase *)param_2);
        this->NotifyDistance = param_1;
        this->NotifyDuration = param_3;
        this->bChangedDistance = false;
        this->bNotifyDistanceProcessing = true;
      }
    }
  }
  return;
}

// OnCameraNotifyEnd @ 14bc4c9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_MainCameraComponent::OnCameraNotifyEnd
          (UDS_MainCameraComponent *this,AActor *param_1,bool param_2)

{
  UDS_CameraInterp *pUVar1;
  UCurveFloat *pUVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  ADS_PlayerController *pAVar6;
  UObject *pUVar7;
  UDS_CameraStateBase *this_00;
  FTimerManager *pFVar8;
  FTimerData *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  float fVar12;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr local_1a8;
  FDelegateAllocation local_1a0;
  code *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this->CameraNotifyState = End;
  fVar12 = DS_CommonDataHelper::CameraNotifiyReturnTime();
  pUVar1 = (this->CameraInterp_LookAt).field0_0x0.DebugPtr;
  this->NotifyDuration = fVar12;
  if (pUVar1 != (UDS_CameraInterp *)0x0) {
    UDS_CameraInterp::Initialize(pUVar1,(UCurveBase *)(this->DefaultCurveData).field0_0x0.DebugPtr);
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_178,"UDS_MainCameraComponent::OnCameraNotifyEnd",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Display,local_178.Ptr,0x514,L"Distance: %f  FOV: %f");
    if ((void *)local_178._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_178._padding_);
    }
  }
  if (this->bNotifyRotationProcessing == true) {
    this->bNotifyRotationProcessing = false;
    ADS_PlayerController::GetPlayerController();
    bVar4 = FWeakObjectPtr::IsValid(&local_1a8);
    if (bVar4) {
      pAVar6 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_1a8);
      ADS_PlayerController::RemoveInputFlag(pAVar6,LOCK_CAMERA_ROTATION);
    }
  }
  if (param_2) {
    if (((this->bNotifyDistanceProcessing == param_2) && (this->bChangedDistance == false)) &&
       (this->bChangedDistance = param_2,
       (this->CameraInterp_Distance).field0_0x0.DebugPtr != (UDS_CameraInterp *)0x0)) {
      ADS_PlayerController::GetPlayerController();
      bVar4 = FWeakObjectPtr::IsValid(&local_1a8);
      if (bVar4 == param_2) {
        pAVar6 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_1a8);
        ADS_PlayerController::RemoveInputFlag(pAVar6,LOCK_ZOOM_IN_OUT);
      }
      pUVar2 = (this->DefaultCurveData).field0_0x0.DebugPtr;
      if (pUVar2 != (UCurveFloat *)0x0) {
        UDS_CameraInterp::Initialize
                  ((this->CameraInterp_Distance).field0_0x0.DebugPtr,(UCurveBase *)pUVar2);
        UDS_CameraInterp::Initialize
                  ((this->CameraInterp_TargetOffset).field0_0x0.DebugPtr,
                   (UCurveBase *)(this->DefaultCurveData).field0_0x0.DebugPtr);
        UDS_CameraInterp::Initialize
                  ((this->CameraInterp_SocketOffset).field0_0x0.DebugPtr,
                   (UCurveBase *)(this->DefaultCurveData).field0_0x0.DebugPtr);
      }
      pUVar7 = FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
      this->NotifyDistance = *(float *)&pUVar7[0x10].field_0x18;
    }
    if ((this->bNotifyFOVProcessing == true) &&
       (pUVar1 = (this->CameraInterp_FOV).field0_0x0.DebugPtr, pUVar1 != (UDS_CameraInterp *)0x0)) {
      UDS_CameraInterp::Initialize
                (pUVar1,(UCurveBase *)(this->DefaultCurveData).field0_0x0.DebugPtr);
      this_00 = (UDS_CameraStateBase *)FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
      fVar12 = UDS_CameraStateBase::GetFOV(this_00);
      this->NotifyFOV = fVar12;
    }
    pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar9 = FTimerManager::FindTimer(pFVar8,&this->NotifyEndTimerHandle);
    if (pFVar9 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar8,(FTimerHandle)(this->NotifyEndTimerHandle).Handle);
    }
    (this->NotifyEndTimerHandle).Handle = 0;
    pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
    fVar12 = this->NotifyDuration;
    local_188 = OnReturnFinished;
    uStack_180 = 0;
    local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1a0.DelegateSize = 0;
    puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_1a0);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_MainCameraComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar10[3] = 0;
      local_1a8 = (FWeakObjectPtr)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_1a8);
      puVar10[4] = local_188;
      puVar10[5] = CONCAT44(uStack_17c,uStack_180);
    }
    FTimerManager::SetTimer
              (pFVar8,&this->NotifyEndTimerHandle,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
               &local_1a0,fVar12,false,__real_bf800000);
    if (local_1a0.DelegateSize != 0) {
      if (local_1a0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        return;
      }
      (*(code *)**(undefined8 **)local_1a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1a0,0,0,0x10);
      local_1a0.DelegateSize = 0;
    }
    if (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1a0.DelegateAllocator);
    }
  }
  else {
    pcVar3 = *(code **)(this->_padding_ + 0x6a8);
    pUVar7 = FWeakObjectPtr::Get(&(this->CameraBoomPtr).WeakPtr);
    (*pcVar3)(this,*(undefined4 *)&pUVar7[0xe].field_0x20);
    (**(code **)(this->_padding_ + 0x6b8))(this,(int)this->_padding_);
    OnReturnFinished(this);
  }
  return;
}

// OnCameraNotifyFOV @ 14bc4cde0

void __thiscall
UDS_MainCameraComponent::OnCameraNotifyFOV
          (UDS_MainCameraComponent *this,float param_1,UCurveFloat *param_2,float param_3)

{
  if ((this->CameraInterp_FOV).field0_0x0.DebugPtr != (UDS_CameraInterp *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
      (this->FOVCurveData).field0_0x0.DebugPtr = param_2;
    }
    else {
      (this->FOVCurveData).field0_0x0.DebugPtr = param_2;
      if (param_2 == (UCurveFloat *)0x0) {
        return;
      }
    }
    UDS_CameraInterp::Initialize((this->CameraInterp_FOV).field0_0x0.DebugPtr,(UCurveBase *)param_2)
    ;
    this->NotifyFOV = param_1;
    this->NotifyDuration = param_3;
    this->bNotifyFOVProcessing = true;
  }
  return;
}

// OnCameraNotifyInputIgnore @ 14bc4ce80

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
UDS_MainCameraComponent::OnCameraNotifyInputIgnore
          (UDS_MainCameraComponent *this,float param_1,float param_2)

{
  double dVar1;
  float fVar2;
  FTimerManager *pFVar3;
  FTimerData *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UDS_MainCameraComponent *local_res20;
  FDelegateAllocation local_78;
  code *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  if (param_2 == 0.0) {
    return;
  }
  this->InputIgnoreStartTime = (double)param_1;
  this->InputIgnoreEndTime = (double)param_2;
  pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar4 = FTimerManager::FindTimer(pFVar3,&this->InputIgnoreStartTimerHandle);
  if (pFVar4 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer
              (pFVar3,(FTimerHandle)(this->InputIgnoreStartTimerHandle).Handle);
  }
  (this->InputIgnoreStartTimerHandle).Handle = 0;
  pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar4 = FTimerManager::FindTimer(pFVar3,&this->InputIgnoreEndTimerHandle);
  if (pFVar4 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(pFVar3,(FTimerHandle)(this->InputIgnoreEndTimerHandle).Handle)
    ;
  }
  (this->InputIgnoreEndTimerHandle).Handle = 0;
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  this->InputIgnoreTime = dVar1;
  pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
  uStack_60 = 0;
  local_68 = OnInputIgnoreStart;
  local_78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_78.DelegateSize = 0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_78);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_MainCameraComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar5[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res20);
    puVar5[4] = local_68;
    puVar5[5] = CONCAT44(uStack_5c,uStack_60);
  }
  fVar2 = __real_bf800000;
  FTimerManager::SetTimer
            (pFVar3,&this->InputIgnoreStartTimerHandle,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_78,
             param_1,false,__real_bf800000);
  if (local_78.DelegateSize != 0) {
    if (local_78.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
    goto LAB_14bc4d068;
    (*(code *)**(undefined8 **)local_78.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_78,0,0,0x10);
    local_78.DelegateSize = 0;
  }
  if (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_78.DelegateAllocator);
  }
LAB_14bc4d068:
  pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
  local_68 = OnInputIgnoreEnd;
  uStack_60 = 0;
  local_78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_78.DelegateSize = 0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_78);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_MainCameraComponent____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar5[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res20);
    puVar5[4] = local_68;
    puVar5[5] = CONCAT44(uStack_5c,uStack_60);
  }
  FTimerManager::SetTimer
            (pFVar3,&this->InputIgnoreEndTimerHandle,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_78,
             param_2,false,fVar2);
  if ((local_78.DelegateSize != 0) &&
     (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_78.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_78,0,0,0x10);
    local_78.DelegateSize = 0;
  }
  if (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_78.DelegateAllocator);
  }
  return;
}

// OnCameraNotifyRotation @ 14bc4d1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MainCameraComponent::OnCameraNotifyRotation
          (UDS_MainCameraComponent *this,TRotator<double> *param_1,UCurveBase *param_2,float param_3
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_198 [32];
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((this->CameraInterp_Rotation).field0_0x0.DebugPtr != (UDS_CameraInterp *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UCurveBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
      (this->RotationCurveData).field0_0x0.DebugPtr = param_2;
    }
    else {
      (this->RotationCurveData).field0_0x0.DebugPtr = param_2;
      if (param_2 == (UCurveBase *)0x0) {
        return;
      }
    }
    UDS_CameraInterp::Initialize((this->CameraInterp_Rotation).field0_0x0.DebugPtr,param_2);
    dVar2 = param_1->Pitch;
    dVar3 = param_1->Yaw;
    this->bNotifyRotationProcessing = true;
    dVar1 = param_1->Roll;
    (this->NotifyRotation).Pitch = dVar2;
    (this->NotifyRotation).Yaw = dVar3;
    (this->NotifyRotation).Roll = dVar1;
    this->NotifyDuration = param_3;
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      ::FString::PrintfImpl(&local_158,L"P=%f Y=%f R=%f");
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_MainCameraComponent::OnCameraNotifyRotation",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Display,local_148.Ptr,0x4ac,L"%f : %s");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnCameraNotifySocket @ 14bc4d380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_MainCameraComponent::OnCameraNotifySocket
          (UDS_MainCameraComponent *this,AActor *param_1,FString *param_2,TVector<double> *param_3)

{
  double dVar1;
  UDS_CameraInterp *pUVar2;
  UCurveFloat *pUVar3;
  double dVar4;
  FDS_EntityBase *pFVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr local_res10;
  AActor *local_18 [2];
  
  if ((param_1 != (AActor *)0x0) && (1 < (param_2->Data).ArrayNum)) {
    ::FString::operator=(&this->NotifySocketName,param_2);
    dVar4 = (param_3->field0_0x0)._s_0.Y;
    pUVar2 = (this->CameraInterp_TargetOffset).field0_0x0.DebugPtr;
    dVar1 = (param_3->field0_0x0)._s_0.Z;
    (this->NotifySocketOffset).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
    (this->NotifySocketOffset).field0_0x0._s_0.Y = dVar4;
    (this->NotifySocketOffset).field0_0x0._s_0.Z = dVar1;
    if ((pUVar2 != (UDS_CameraInterp *)0x0) &&
       (pUVar3 = (this->DefaultCurveData).field0_0x0.DebugPtr, pUVar3 != (UCurveFloat *)0x0)) {
      UDS_CameraInterp::Initialize(pUVar2,(UCurveBase *)pUVar3);
    }
    pUVar2 = (this->CameraInterp_SocketOffset).field0_0x0.DebugPtr;
    if ((pUVar2 != (UDS_CameraInterp *)0x0) &&
       (pUVar3 = (this->DefaultCurveData).field0_0x0.DebugPtr, pUVar3 != (UCurveFloat *)0x0)) {
      UDS_CameraInterp::Initialize(pUVar2,(UCurveBase *)pUVar3);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_18);
    pFVar5 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
    if (pFVar5 != (FDS_EntityBase *)0x0) {
      pFVar6 = (FWeakObjectPtr *)(**(code **)(pFVar5->_padding_ + 0x80))(pFVar5,local_18);
      (this->NotifySkeletalMesh).WeakPtr = *pFVar6;
    }
  }
  return;
}

// OnChangeActorSequencerPlay @ 14bc4d4a0

void __thiscall
UDS_MainCameraComponent::OnChangeActorSequencerPlay(UDS_MainCameraComponent *this,bool param_1)

{
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *this_00;
  bool bVar1;
  EDS_CameraStateType EVar2;
  UObject *pUVar3;
  UDS_ConstructionManager *pUVar4;
  ADS_PlayerController *this_01;
  UDS_CharStateData *pUVar5;
  UDS_EntityManager *this_02;
  UWN_AbilitySystemComponent *this_03;
  FGameplayTag *pFVar6;
  EDS_CharState EStackX_10;
  FWeakObjectPtr FStackX_18;
  FWeakObjectPtr FStackX_20;
  FWeakObjectPtr FStack_38;
  FWeakObjectPtr FStack_30;
  TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> TStack_28;
  ulong64 uStack_20;
  
  this->bActorSequencerPlaying = param_1;
  if (!param_1) {
    return;
  }
  ADS_MainCharacter::GetMainPlayer();
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&FStackX_20,(void *)0x0);
  if (bVar1) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&FStackX_20);
  (**(code **)(*(longlong *)&pUVar3[0x29].field_0x10 + 0x78))();
  bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals(&TStack_28,(void *)0x0);
  if (bVar1) {
    return;
  }
  this_00 = &this->CharStateData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar1) {
    return;
  }
  ADS_PlayerController::GetPlayerController();
  bVar1 = FWeakObjectPtr::IsValid(&FStackX_18);
  if (!bVar1) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&FStackX_20);
  (**(code **)(*(longlong *)&pUVar3[0x29].field_0x10 + 0x178))(&pUVar3[0x29].field_0x10,&FStack_30);
  bVar1 = FWeakObjectPtr::IsValid(&FStack_30);
  if (!bVar1) {
    return;
  }
  pUVar4 = UDS_ConstructionManager::GetInst();
  if ((pUVar4 == (UDS_ConstructionManager *)0x0) || (pUVar4->IsConstructionMode != true)) {
    this_01 = (ADS_PlayerController *)FWeakObjectPtr::Get(&FStackX_18);
    bVar1 = ADS_PlayerController::HasInputFlag(this_01,LOCK_ON_TARGET);
    if (bVar1) {
      EVar2 = CameraStateLockOnTarget;
    }
    else {
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      EStackX_10 = SkillMode;
      bVar1 = UDS_CharStateData::HasCharState(pUVar5,&EStackX_10);
      if (bVar1) {
        EStackX_10 = CONCAT71(EStackX_10._1_7_,0x18);
        this_02 = UDS_EntityManager::GetInst();
        uStack_20 = 0;
        if (this_02 != (UDS_EntityManager *)0x0) {
          uStack_20 = UDS_EntityManager::GetCurrentMainCharEntityID(this_02,true);
        }
        UDS_AbilityDataSet::GetAbilityData<UDS_SkillModeAbilityData>
                  ((ulong64 *)&FStack_38,(EDS_AbilityTagType *)&uStack_20);
        bVar1 = FWeakObjectPtr::IsValid(&FStack_38);
        if (!bVar1) {
          return;
        }
        pUVar3 = FWeakObjectPtr::Get(&FStack_38);
        if (*(int *)&pUVar3[2].field_0x8 == this->CurrentSkillModeID) {
          return;
        }
        pUVar3 = FWeakObjectPtr::Get(&FStack_38);
        EVar2 = CameraStateSkillMode;
        this->CurrentSkillModeID = *(int *)&pUVar3[2].field_0x8;
      }
      else {
        this->CurrentSkillModeID = 0;
        if (this->bCommandRotationLock != true) {
          this_03 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&FStack_30);
          EStackX_10 = CONCAT71(EStackX_10._1_7_,0x25);
          pFVar6 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&EStackX_10);
          bVar1 = UWN_AbilitySystemComponent::HasTag(this_03,pFVar6);
          if (!bVar1) {
            pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
            EStackX_10 = Battle;
            bVar1 = UDS_CharStateData::HasCharState(pUVar5,&EStackX_10);
            if (bVar1) {
              pUVar3 = FWeakObjectPtr::Get(&FStackX_18);
              EVar2 = CameraStateBattle;
              if (pUVar3[0x3d].field_0x21 != '\x01') {
                EVar2 = CameraStateBattle2;
              }
            }
            else {
              pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
              EStackX_10 = Warp;
              bVar1 = UDS_CharStateData::HasCharState(pUVar5,&EStackX_10);
              if (bVar1) {
                EVar2 = CameraStateWarpEnd;
              }
              else {
                pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                EStackX_10 = CONCAT44(EStackX_10._4_4_,0x26);
                bVar1 = UDS_CharStateData::HasCharDetailState
                                  (pUVar5,(EDS_CharDetailState *)&EStackX_10);
                if (bVar1) {
                  EVar2 = CameraStatePowerJump;
                }
                else {
                  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                  EStackX_10 = Swim;
                  bVar1 = UDS_CharStateData::HasCharState(pUVar5,&EStackX_10);
                  if (bVar1) {
                    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                    EStackX_10 = CONCAT44(EStackX_10._4_4_,6);
                    bVar1 = UDS_CharStateData::HasCharDetailState
                                      (pUVar5,(EDS_CharDetailState *)&EStackX_10);
                    EVar2 = bVar1 + CameraStateSwim;
                  }
                  else {
                    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                    EStackX_10 = CONCAT44(EStackX_10._4_4_,0x5e);
                    bVar1 = UDS_CharStateData::HasCharDetailState
                                      (pUVar5,(EDS_CharDetailState *)&EStackX_10);
                    if (bVar1) {
                      EVar2 = CameraStateOnAirShip;
                    }
                    else {
                      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                      EStackX_10 = CONCAT44(EStackX_10._4_4_,0x1e);
                      bVar1 = UDS_CharStateData::HasCharDetailState
                                        (pUVar5,(EDS_CharDetailState *)&EStackX_10);
                      if (bVar1) {
                        EVar2 = CameraStateHovering;
                      }
                      else {
                        pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                        EStackX_10 = CONCAT44(EStackX_10._4_4_,0x1f);
                        bVar1 = UDS_CharStateData::HasCharDetailState
                                          (pUVar5,(EDS_CharDetailState *)&EStackX_10);
                        if (!bVar1) {
                          pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                          EStackX_10 = CONCAT44(EStackX_10._4_4_,0x20);
                          bVar1 = UDS_CharStateData::HasCharDetailState
                                            (pUVar5,(EDS_CharDetailState *)&EStackX_10);
                          if (!bVar1) {
                            pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                            EStackX_10 = CONCAT44(EStackX_10._4_4_,0x21);
                            bVar1 = UDS_CharStateData::HasCharDetailState
                                              (pUVar5,(EDS_CharDetailState *)&EStackX_10);
                            if (!bVar1) {
                              pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                              EStackX_10 = Mount;
                              bVar1 = UDS_CharStateData::HasCharState(pUVar5,&EStackX_10);
                              if (!bVar1) {
                                pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr)
                                ;
                                EStackX_10 = Interaction;
                                bVar1 = UDS_CharStateData::HasCharState(pUVar5,&EStackX_10);
                                if (bVar1) {
                                  pUVar5 = (UDS_CharStateData *)
                                           FWeakObjectPtr::Get(&this_00->WeakPtr);
                                  EStackX_10 = CONCAT44(EStackX_10._4_4_,0x4d);
                                  bVar1 = UDS_CharStateData::HasCharDetailState
                                                    (pUVar5,(EDS_CharDetailState *)&EStackX_10);
                                  if (bVar1) {
                                    EVar2 = CameraStateTaming;
                                    goto LAB_14bc3194e;
                                  }
                                }
                                pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr)
                                ;
                                EStackX_10 = Interaction;
                                bVar1 = UDS_CharStateData::HasCharState(pUVar5,&EStackX_10);
                                if (bVar1) {
                                  pUVar5 = (UDS_CharStateData *)
                                           FWeakObjectPtr::Get(&this_00->WeakPtr);
                                  EStackX_10 = CONCAT44(EStackX_10._4_4_,0x42);
                                  bVar1 = UDS_CharStateData::HasCharDetailState
                                                    (pUVar5,(EDS_CharDetailState *)&EStackX_10);
                                  if (bVar1) {
                                    EVar2 = CameraStateCamp;
                                    goto LAB_14bc3194e;
                                  }
                                }
                                pUVar3 = FWeakObjectPtr::Get(&FStackX_18);
                                if (pUVar3[0x3d].field_0x21 == '\x01') {
                                  ChangeCameraState(this,CameraStateBase,false);
                                  return;
                                }
                                ChangeCameraState(this,CameraStateBase2,false);
                                return;
                              }
                              pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
                              EStackX_10._0_4_ = AniCut|ToggleSkill|AutoMove|Shield;
                              bVar1 = UDS_CharStateData::HasCharDetailState
                                                (pUVar5,(EDS_CharDetailState *)&EStackX_10);
                              if (bVar1) {
                                pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr)
                                ;
                                EStackX_10 = CONCAT44(EStackX_10._4_4_,0x65);
                                bVar1 = UDS_CharStateData::HasCharDetailState
                                                  (pUVar5,(EDS_CharDetailState *)&EStackX_10);
                                EVar2 = bVar1 + CameraStateMountAir;
                              }
                              else {
                                pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_00->WeakPtr)
                                ;
                                EStackX_10 = CONCAT44(EStackX_10._4_4_,0x65);
                                bVar1 = UDS_CharStateData::HasCharDetailState
                                                  (pUVar5,(EDS_CharDetailState *)&EStackX_10);
                                EVar2 = bVar1 + CameraStateMount;
                              }
                              goto LAB_14bc3194e;
                            }
                          }
                        }
                        EVar2 = CameraStateAirDash;
                      }
                    }
                  }
                }
              }
            }
            goto LAB_14bc3194e;
          }
        }
        EVar2 = CameraStateLockFront;
      }
    }
  }
  else {
    EVar2 = CameraStateConstruction;
  }
LAB_14bc3194e:
  ChangeCameraState(this,EVar2,false);
  return;
}

// OnChangedCharState @ 14bc4d660

void __thiscall
UDS_MainCameraComponent::OnChangedCharState
          (UDS_MainCameraComponent *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  EDS_CharDetailState EVar1;
  bool bVar2;
  FDS_CharStateInfo *pFVar3;
  ADS_MainCharacter *pAVar4;
  FWeakObjectPtr local_res10 [2];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_18 [2];
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar2) {
    ADS_PlayerController::GetPlayerController();
    bVar2 = FWeakObjectPtr::IsValid(local_18);
    if (bVar2) {
      ADS_MainCharacter::GetMainPlayer();
      bVar2 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res20,
                         (void *)0x0);
      if (!bVar2) {
        FWeakObjectPtr::Get(local_res10);
        pFVar3 = UDS_CharStateData::GetCharStateInfo(&param_2->StateTag);
        EVar1 = pFVar3->DetailState;
        if (param_2->bIsStateTagOn == true) {
          if (EVar1 == AirDash) {
            pAVar4 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res20);
            ADS_MainCharacter::OnStartAirDash(pAVar4);
            return;
          }
          if (EVar1 == FlyingCrash) {
            pAVar4 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res20);
            ADS_MainCharacter::OnStartFlyingCrash(pAVar4);
            return;
          }
          if (EVar1 == PowerJumpCharging) {
            pAVar4 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res20);
            ADS_MainCharacter::OnChargingPowerJump(pAVar4);
            return;
          }
          if (EVar1 == PowerJump) {
            pAVar4 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res20);
            ADS_MainCharacter::OnStartPowerJump(pAVar4);
            return;
          }
        }
        else if (EVar1 == PowerJumpCharging) {
          pAVar4 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res20);
          ADS_MainCharacter::OnEndChargingPowerJump(pAVar4);
        }
        else if (EVar1 == PowerJump) {
          pAVar4 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res20);
          ADS_MainCharacter::OnEndPowerJump(pAVar4);
          return;
        }
      }
    }
  }
  return;
}

// OnChangedCursorState @ 14bc4da00

void __thiscall
UDS_MainCameraComponent::OnChangedCursorState(UDS_MainCameraComponent *this,bool param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->NowCameraStatePtr).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x318))(pUVar2,param_1);
  }
  return;
}

// OnChangedInputFlag @ 14bc4dab0

void __thiscall
UDS_MainCameraComponent::OnChangedInputFlag
          (UDS_MainCameraComponent *this,EDS_InputFlags *param_1,FInputActionValue *param_2)

{
  bool bVar1;
  ADS_PlayerController *pAVar2;
  double dVar3;
  FWeakObjectPtr local_res20;
  
  ADS_PlayerController::GetPlayerController();
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar1) {
    if (0.0 < this->InputIgnoreTime) {
      dVar3 = UDS_TimeUtilManager::GetCurrentServerTime();
      if ((this->InputIgnoreTime + this->InputIgnoreStartTime <= dVar3) &&
         (dVar3 <= this->InputIgnoreTime + this->InputIgnoreEndTime)) {
        return;
      }
    }
    if ((*param_1 == MOUSE_WHEEL) && (0.0 < this->NotifyDistance)) {
      this->bChangedDistance = true;
      pAVar2 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res20);
      ADS_PlayerController::RemoveInputFlag(pAVar2,LOCK_ZOOM_IN_OUT);
    }
    if ((*param_1 == MOUSE_MOVE) &&
       (((UE::Math::TRotator<double>::ZeroRotator.Pitch != (this->NotifyRotation).Pitch ||
         (UE::Math::TRotator<double>::ZeroRotator.Yaw != (this->NotifyRotation).Yaw)) ||
        (UE::Math::TRotator<double>::ZeroRotator.Roll != (this->NotifyRotation).Roll)))) {
      pAVar2 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res20);
      ADS_PlayerController::RemoveInputFlag(pAVar2,LOCK_CAMERA_ROTATION);
    }
  }
  return;
}

// OnInputChange @ 14bc4f6b0

void __thiscall
UDS_MainCameraComponent::OnInputChange
          (UDS_MainCameraComponent *this,EDS_InputFlags *param_1,FInputActionValue *param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  UDS_CameraStateBase *this_00;
  UObject *pUVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  double local_38;
  double dStack_30;
  
  switch(*param_1) {
  case MOUSE_LEFT_PRESSED:
  case MOUSE_RIGHT_PRESSED:
    bVar4 = FWeakObjectPtr::IsValid(&(this->NowCameraStatePtr).WeakPtr);
    if (bVar4) {
      pUVar5 = FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
      (**(code **)(*(longlong *)pUVar5 + 0x2f8))(pUVar5);
    }
    break;
  case MOUSE_LEFT_RELEASED:
  case MOUSE_RIGHT_RELEASED:
    bVar4 = FWeakObjectPtr::IsValid(&(this->NowCameraStatePtr).WeakPtr);
    if (bVar4) {
      pUVar5 = FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
      (**(code **)(*(longlong *)pUVar5 + 0x300))(pUVar5);
    }
    break;
  case MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case MOUSE_RIGHT_PRESSED|MOUSE_LEFT_PRESSED:
  case MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED:
  case MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case MOUSE_RIGHT_RELEASED|MOUSE_LEFT_PRESSED:
  case MOUSE_RIGHT_RELEASED|MOUSE_LEFT_RELEASED:
  case MOUSE_RIGHT_RELEASED|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED:
  case MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_PRESSED:
  case MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED:
  case MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case MOUSE_WHEEL|MOUSE_LEFT_PRESSED:
  case MOUSE_WHEEL|MOUSE_LEFT_RELEASED:
  case MOUSE_WHEEL|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case MOUSE_WHEEL|MOUSE_RIGHT_PRESSED:
  case MOUSE_WHEEL|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_PRESSED:
  case MOUSE_WHEEL|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED:
  case MOUSE_WHEEL|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case MOUSE_WHEEL|MOUSE_RIGHT_RELEASED:
  case MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_PRESSED:
  case MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_RELEASED:
  case MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED:
  case MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_PRESSED:
  case MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED:
  case MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_START|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_RIGHT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_START|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_RIGHT_RELEASED:
  case GAMEPAD_ROTATE_START|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_START|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_START|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED|
       MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_WHEEL:
  case GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED:
  case GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED
  :
  case GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED
       |MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_RIGHT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_RIGHT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED|
       MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_WHEEL:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_WHEEL|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_WHEEL|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_WHEEL|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_WHEEL|MOUSE_RIGHT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_WHEEL|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_WHEEL|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_WHEEL|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED|
       MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_RELEASED|
       MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|
       MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|
       MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|
       MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_RIGHT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED|
       MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_RIGHT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_RIGHT_RELEASED|MOUSE_LEFT_RELEASED|
       MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|
       MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|
       MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_RIGHT_RELEASED|MOUSE_RIGHT_PRESSED|
       MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_WHEEL:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_LEFT_RELEASED|
       MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_PRESSED|
       MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_PRESSED|
       MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_PRESSED|
       MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|
       MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|
       MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|
       MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|
       MOUSE_RIGHT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|
       MOUSE_RIGHT_PRESSED|MOUSE_LEFT_PRESSED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|
       MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED:
  case GAMEPAD_ROTATE_TRIGGERED|GAMEPAD_ROTATE_START|MOUSE_WHEEL|MOUSE_RIGHT_RELEASED|
       MOUSE_RIGHT_PRESSED|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED:
    break;
  case MOUSE_WHEEL:
    bVar4 = FWeakObjectPtr::IsValid(&(this->NowCameraStatePtr).WeakPtr);
    if (bVar4) {
      uVar1 = *(undefined8 *)&(param_2->Value).field0_0x0;
      this_00 = (UDS_CameraStateBase *)FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
      UDS_CameraStateBase::SetZoomDelta
                (this_00,(float)(double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                                                 __xmm_80000000000000008000000000000000._4_4_,
                                                 (uint)uVar1 ^
                                                 (uint)__xmm_80000000000000008000000000000000));
    }
    break;
  case GAMEPAD_ROTATE_START:
    FWeakObjectPtr::IsValid(&(this->NowCameraStatePtr).WeakPtr);
    break;
  case GAMEPAD_ROTATE_TRIGGERED:
    bVar4 = FWeakObjectPtr::IsValid(&(this->NowCameraStatePtr).WeakPtr);
    if (bVar4) {
      uVar1 = *(undefined8 *)((longlong)&(param_2->Value).field0_0x0 + 8);
      uVar7 = (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000;
      uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      dVar2 = (param_2->Value).field0_0x0._s_0.X;
      pUVar5 = FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
      dStack_30 = (double)CONCAT44(uVar8,uVar7);
      pcVar6 = *(code **)(*(longlong *)pUVar5 + 0x308);
      local_38 = dVar2;
LAB_14bc4f814:
      (*pcVar6)(pUVar5,&local_38);
    }
    break;
  case GAMEPAD_ROTATE_END:
    bVar4 = FWeakObjectPtr::IsValid(&(this->NowCameraStatePtr).WeakPtr);
    if (bVar4) {
      dVar2 = (param_2->Value).field0_0x0._s_0.X;
      dVar3 = (param_2->Value).field0_0x0._s_0.Y;
      pUVar5 = FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
      pcVar6 = *(code **)(*(longlong *)pUVar5 + 0x310);
      local_38 = dVar2;
      dStack_30 = dVar3;
      goto LAB_14bc4f814;
    }
    break;
  default:
    goto switchD_14bc4f6f0_default;
  }
switchD_14bc4f6f0_default:
  return;
}

// OnInputIgnoreEnd @ 14bc4f8e0

void __thiscall UDS_MainCameraComponent::OnInputIgnoreEnd(UDS_MainCameraComponent *this)

{
  bool bVar1;
  ADS_PlayerController *pAVar2;
  FWeakObjectPtr local_res10 [3];
  
  ADS_PlayerController::GetPlayerController();
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    if (0.0 < this->NotifyDistance) {
      pAVar2 = (ADS_PlayerController *)FWeakObjectPtr::Get(local_res10);
      ADS_PlayerController::RemoveInputFlag(pAVar2,LOCK_ZOOM_IN_OUT);
    }
    if (((UE::Math::TRotator<double>::ZeroRotator.Pitch != (this->NotifyRotation).Pitch) ||
        (UE::Math::TRotator<double>::ZeroRotator.Yaw != (this->NotifyRotation).Yaw)) ||
       (UE::Math::TRotator<double>::ZeroRotator.Roll != (this->NotifyRotation).Roll)) {
      pAVar2 = (ADS_PlayerController *)FWeakObjectPtr::Get(local_res10);
      ADS_PlayerController::RemoveInputFlag(pAVar2,LOCK_CAMERA_ROTATION);
    }
  }
  return;
}

// OnInputIgnoreStart @ 14bc4f980

void __thiscall UDS_MainCameraComponent::OnInputIgnoreStart(UDS_MainCameraComponent *this)

{
  bool bVar1;
  ADS_PlayerController *pAVar2;
  FWeakObjectPtr local_res10 [3];
  
  ADS_PlayerController::GetPlayerController();
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    if (0.0 < this->NotifyDistance) {
      pAVar2 = (ADS_PlayerController *)FWeakObjectPtr::Get(local_res10);
      ADS_PlayerController::AddInputFlag(pAVar2,LOCK_ZOOM_IN_OUT);
    }
    if (((UE::Math::TRotator<double>::ZeroRotator.Pitch != (this->NotifyRotation).Pitch) ||
        (UE::Math::TRotator<double>::ZeroRotator.Yaw != (this->NotifyRotation).Yaw)) ||
       (UE::Math::TRotator<double>::ZeroRotator.Roll != (this->NotifyRotation).Roll)) {
      pAVar2 = (ADS_PlayerController *)FWeakObjectPtr::Get(local_res10);
      ADS_PlayerController::AddInputFlag(pAVar2,LOCK_CAMERA_ROTATION);
    }
  }
  return;
}

// OnNotifyBeginFinished @ 14bc50d20

void __thiscall UDS_MainCameraComponent::OnNotifyBeginFinished(UDS_MainCameraComponent *this)

{
  this->CameraNotifyState = Playing;
  return;
}

// OnOpenDebugWindow @ 14bc50d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MainCameraComponent::OnOpenDebugWindow(UDS_MainCameraComponent *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar6;
  undefined1 auStackY_198 [32];
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  FWeakObjectPtr local_158;
  UDS_UserWidget *local_150;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_MainCameraComponent::OnOpenDebugWindow",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x461,L"InWidget is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pFVar4 = ::operator_new(0x20);
    local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar6 = (FDS_ViewModelContext *)local_168.SharedReferenceCount.ReferenceController;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar4->field_0x1c = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->ViewModelTemplateKey = None;
      pFVar6 = pFVar4;
    }
    local_168.Object = pFVar6;
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext__P6AXPEAU1__Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar6;
      local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar4;
    }
    if ((local_168.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar6 = local_168.Object;
    pUVar5 = FDS_ViewModelContext::StaticStruct();
    *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar5;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_168);
    }
    if ((local_168.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (local_168.Object)->ViewModelTemplateKey = W_DebugCamera;
    local_148.Object = local_168.Object;
    local_148.SharedReferenceCount.ReferenceController =
         local_168.SharedReferenceCount.ReferenceController;
    if ((FDS_ViewModelContext *)local_168.SharedReferenceCount.ReferenceController !=
        (FDS_ViewModelContext *)0x0) {
      LOCK();
      (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_158.ObjectIndex = 0;
    local_158.ObjectSerialNumber = 0;
    local_150 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_150);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_158,&local_148,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnReturnFinished @ 14bc52cb0

void __thiscall UDS_MainCameraComponent::OnReturnFinished(UDS_MainCameraComponent *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 local_18 [2];
  
  this->CameraNotifyState = None;
  this->NotifyDistance = 0.0;
  dVar4 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  pFVar1 = &this->NotifySocketName;
  (this->NotifyRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->NotifyRotation).Yaw = dVar4;
  (this->NotifyRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->NotifyFOV = 0.0;
  this->InputIgnoreStartTime = 0.0;
  this->InputIgnoreEndTime = 0.0;
  if (pFVar1 != (FString *)local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NotifySocketName).Data.ArrayNum = 0;
    (this->NotifySocketName).Data.ArrayMax = 0;
  }
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NotifySocketOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->NotifySocketOffset).field0_0x0._s_0.Y = (double)uVar3;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bNotifyDistanceProcessing = false;
  this->bNotifyRotationProcessing = false;
  this->bNotifyFOVProcessing = false;
  (this->NotifySocketOffset).field0_0x0._s_0.Z = (double)uVar3;
  return;
}

// OpenDebugWindow @ 14bc54a10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_MainCameraComponent::OpenDebugWindow(UDS_MainCameraComponent *this)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  UDS_MainCameraComponent *local_res10;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    local_78 = OnOpenDebugWindow;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_MainCameraComponent____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_MainCameraComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_MainCameraComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = local_78;
      puVar1[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_78,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_58);
    UDS_WindowManager::OpenWindow(this_00,-4,pTVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_68 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
                 (FDestructionSentinel *)&local_78);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

// RefreshCameraComponent @ 14bc56b20

void __thiscall UDS_MainCameraComponent::RefreshCameraComponent(UDS_MainCameraComponent *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  ADS_MainCharacter::GetMainPlayer();
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar1) {
    FWeakObjectPtr::Get(&local_res8);
    UDS_CharStateData::GetData((ulong64)&local_res10);
    (this->CharStateData).WeakPtr = local_res10;
    pUVar2 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    pUVar2 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_MainCameraComponent>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar2[7].field_0x20,(UDS_MainCameraComponent *)&local_res10,(pmf_0cc00bdb *)this
              );
  }
  (**(code **)(this->_padding_ + 0x700))(this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->NowCameraStatePtr).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2f0))(pUVar2);
    ChangeCameraState(this,CameraStateBase,true);
  }
  return;
}

// ReturnToOriginalDistance @ 14bc5bd50

void __thiscall UDS_MainCameraComponent::ReturnToOriginalDistance(UDS_MainCameraComponent *this)

{
  UCurveFloat *pUVar1;
  bool bVar2;
  ADS_PlayerController *this_00;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  
  if ((this->CameraInterp_Distance).field0_0x0.DebugPtr != (UDS_CameraInterp *)0x0) {
    ADS_PlayerController::GetPlayerController();
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar2) {
      this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res8);
      ADS_PlayerController::RemoveInputFlag(this_00,LOCK_ZOOM_IN_OUT);
    }
    pUVar1 = (this->DefaultCurveData).field0_0x0.DebugPtr;
    if (pUVar1 != (UCurveFloat *)0x0) {
      UDS_CameraInterp::Initialize
                ((this->CameraInterp_Distance).field0_0x0.DebugPtr,(UCurveBase *)pUVar1);
      UDS_CameraInterp::Initialize
                ((this->CameraInterp_TargetOffset).field0_0x0.DebugPtr,
                 (UCurveBase *)(this->DefaultCurveData).field0_0x0.DebugPtr);
      UDS_CameraInterp::Initialize
                ((this->CameraInterp_SocketOffset).field0_0x0.DebugPtr,
                 (UCurveBase *)(this->DefaultCurveData).field0_0x0.DebugPtr);
    }
    pUVar3 = FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
    this->NotifyDistance = *(float *)&pUVar3[0x10].field_0x18;
  }
  return;
}

// ReturnToOriginalFOV @ 14bc5be10

void __thiscall UDS_MainCameraComponent::ReturnToOriginalFOV(UDS_MainCameraComponent *this)

{
  UDS_CameraInterp *this_00;
  UDS_CameraStateBase *this_01;
  float fVar1;
  
  this_00 = (this->CameraInterp_FOV).field0_0x0.DebugPtr;
  if (this_00 != (UDS_CameraInterp *)0x0) {
    UDS_CameraInterp::Initialize(this_00,(UCurveBase *)(this->DefaultCurveData).field0_0x0.DebugPtr)
    ;
    this_01 = (UDS_CameraStateBase *)FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
    fVar1 = UDS_CameraStateBase::GetFOV(this_01);
    this->NotifyFOV = fVar1;
  }
  return;
}

// SetCameraFOV @ 14bc5d5b0

void __thiscall UDS_MainCameraComponent::SetCameraFOV(UDS_MainCameraComponent *this,float param_1)

{
  bool bVar1;
  UDS_CameraStateBase *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->NowCameraStatePtr).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_CameraStateBase *)FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
    UDS_CameraStateBase::SetFOV(this_00,param_1);
  }
  return;
}

// SetCameraRotation @ 14bc5d600

void __thiscall
UDS_MainCameraComponent::SetCameraRotation(UDS_MainCameraComponent *this,TRotator<double> *param_1)

{
  bool bVar1;
  UDS_CameraStateBase *this_00;
  TRotator<double> local_28;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->NowCameraStatePtr).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_CameraStateBase *)FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
    local_28.Pitch = param_1->Pitch;
    local_28.Yaw = param_1->Yaw;
    local_28.Roll = param_1->Roll;
    UDS_CameraStateBase::SetCameraRotation(this_00,&local_28);
  }
  return;
}

// SetZoomInOutValue @ 14bc65290

void __thiscall
UDS_MainCameraComponent::SetZoomInOutValue(UDS_MainCameraComponent *this,float param_1)

{
  bool bVar1;
  UDS_CameraStateBase *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->NowCameraStatePtr).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_CameraStateBase *)FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
    UDS_CameraStateBase::SetZoomInOutValue(this_00,param_1);
  }
  return;
}

// ShowDebugCameraWidget @ 14bc65e60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MainCameraComponent::ShowDebugCameraWidget(UDS_MainCameraComponent *this,bool param_1)

{
  UDS_WindowManager *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  float local_res10 [2];
  UDS_MainCameraComponent *local_res18 [2];
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  if (param_1) {
    pUVar1 = UDS_WindowManager::GetInst();
    if (pUVar1 != (UDS_WindowManager *)0x0) {
      local_88 = OnOpenDebugWindow;
      uStack_80 = 0;
      local_68 = (undefined1  [8])0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_50);
      local_38 = &local_60;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_MainCameraComponent____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_MainCameraComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_res18[0] = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_MainCameraComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)local_res18);
        puVar2[4] = local_88;
        puVar2[5] = CONCAT44(uStack_7c,uStack_80);
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &local_88,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_68);
      UDS_WindowManager::OpenWindow(pUVar1,-4,pTVar4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_88);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_78 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                   (FDestructionSentinel *)&local_88);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
  }
  else {
    pUVar1 = UDS_WindowManager::GetInst();
    if (pUVar1 != (UDS_WindowManager *)0x0) {
      local_res10[0] = 0.0;
      local_res18[0] = (UDS_MainCameraComponent *)((ulonglong)local_res18[0] & 0xffffffff00000000);
      UDS_WindowManager::CloseWindow(pUVar1,-4,(uint *)local_res18,local_res10);
      return;
    }
  }
  return;
}

// TickComponent @ 14bc678b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_MainCameraComponent::TickComponent
          (UDS_MainCameraComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr> *this_00;
  longlong *plVar1;
  EDS_CameraNotifyState EVar2;
  UDS_CameraInterp *pUVar3;
  bool bVar4;
  UObject *pUVar5;
  UDS_CameraStateBase *this_01;
  UObject *pUVar6;
  UDS_CharInfoData *this_02;
  undefined4 in_XMM1_Db;
  float local_res8 [2];
  FWeakObjectPtr local_68;
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> local_60;
  TVector<double>_u_0 local_58 [2];
  
  UDS_CameraComponent::TickComponent((UDS_CameraComponent *)this,param_1,param_2,param_3);
  this_00 = &this->NowCameraStatePtr;
  bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)pUVar5 + 0x2d0))(pUVar5,CONCAT44(in_XMM1_Db,param_1));
  }
  ADS_PlayerController::GetPlayerController();
  bVar4 = FWeakObjectPtr::IsValid(&local_68);
  if (bVar4) {
    ADS_MainCharacter::GetMainPlayer();
    bVar4 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals(&local_60,(void *)0x0);
    if (!bVar4) {
      if (this->bActorSequencerPlaying == true) {
        this_01 = (UDS_CameraStateBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        pUVar5 = FWeakObjectPtr::Get(&(this->CameraBoomPtr).WeakPtr);
        UDS_CameraStateBase::SetZoomInOutValue(this_01,*(float *)&pUVar5[0xe].field_0x20);
      }
      else {
        EVar2 = this->CameraNotifyState;
        if (EVar2 == None) {
          CheckCameraState(this);
          bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
          if (bVar4) {
            pUVar5 = FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
            (**(code **)(*(longlong *)pUVar5 + 0x2d8))(pUVar5,CONCAT44(in_XMM1_Db,param_1));
          }
          bVar4 = FWeakObjectPtr::IsValid(&(this->NowCameraStatePtr).WeakPtr);
          if (bVar4) {
            pUVar5 = FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
            (**(code **)(*(longlong *)pUVar5 + 0x2e0))(pUVar5,CONCAT44(in_XMM1_Db,param_1));
            bVar4 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                              (&this->CharInfoData,(void *)0x0);
            if (!bVar4) {
              this_02 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&(this->CharInfoData).WeakPtr);
              pUVar5 = FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
              UDS_CharInfoData::SetCameraYaw(this_02,(float)*(double *)&pUVar5[0xf].field_0x18);
            }
          }
        }
        else {
          if (((EVar2 - Start & 0xfd) == 0) && (1 < (this->NotifySocketName).Data.ArrayNum)) {
            if ((this->CameraInterp_SocketOffset).field0_0x0.DebugPtr != (UDS_CameraInterp *)0x0) {
              local_58[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_58[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              local_58[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              if (EVar2 == Start) {
              }
              else if (EVar2 == End) {
                pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
                local_58[0]._0_8_ = *(undefined8 *)(pUVar5 + 0x10);
                local_58[0]._8_8_ = *(undefined8 *)&pUVar5[0x10].field_0x8;
                local_58[0]._16_8_ = *(undefined8 *)&pUVar5[0x10].field_0x10;
              }
              pUVar5 = FWeakObjectPtr::Get(&(this->CameraBoomPtr).WeakPtr);
              if ((((double)local_58[0]._0_8_ == *(double *)(pUVar5 + 0xf)) &&
                  ((double)local_58[0]._8_8_ == *(double *)&pUVar5[0xf].field_0x8)) &&
                 ((double)local_58[0]._16_8_ == *(double *)&pUVar5[0xf].field_0x10)) {
                UDS_CameraInterp::Reset((this->CameraInterp_SocketOffset).field0_0x0.DebugPtr);
              }
              else {
                pUVar3 = (this->CameraInterp_SocketOffset).field0_0x0.DebugPtr;
                local_res8[0] = 1.0;
                pUVar5 = FWeakObjectPtr::Get(&(this->CameraBoomPtr).WeakPtr);
                pUVar6 = FWeakObjectPtr::Get(&(this->CameraBoomPtr).WeakPtr);
                UDS_CameraInterp::UpdateVector
                          (pUVar3,(TVector<double> *)(pUVar6 + 0xf),param_1,
                           (TVector<double> *)(pUVar5 + 0xf),(TVector<double> *)&local_58[0]._s_0,
                           &this->NotifyDuration,local_res8);
              }
            }
            if ((this->CameraInterp_TargetOffset).field0_0x0.DebugPtr != (UDS_CameraInterp *)0x0) {
              local_58[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_58[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              local_58[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              if (this->CameraNotifyState == Start) {
              }
              else if (this->CameraNotifyState == End) {
                pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
                local_58[0]._0_8_ = *(undefined8 *)&pUVar5[2].field_0x20;
                local_58[0]._8_8_ = *(undefined8 *)(pUVar5 + 3);
                local_58[0]._16_8_ = *(undefined8 *)&pUVar5[3].field_0x8;
              }
              pUVar5 = FWeakObjectPtr::Get(&(this->CameraBoomPtr).WeakPtr);
              if ((((double)local_58[0]._0_8_ == *(double *)&pUVar5[0xf].field_0x18) &&
                  ((double)local_58[0]._8_8_ == *(double *)&pUVar5[0xf].field_0x20)) &&
                 ((double)local_58[0]._16_8_ == *(double *)(pUVar5 + 0x10))) {
                UDS_CameraInterp::Reset((this->CameraInterp_TargetOffset).field0_0x0.DebugPtr);
              }
              else {
                pUVar3 = (this->CameraInterp_TargetOffset).field0_0x0.DebugPtr;
                local_res8[0] = 1.0;
                pUVar5 = FWeakObjectPtr::Get(&(this->CameraBoomPtr).WeakPtr);
                pUVar6 = FWeakObjectPtr::Get(&(this->CameraBoomPtr).WeakPtr);
                UDS_CameraInterp::UpdateVector
                          (pUVar3,(TVector<double> *)&pUVar6[0xf].field_0x18,param_1,
                           (TVector<double> *)&pUVar5[0xf].field_0x18,
                           (TVector<double> *)&local_58[0]._s_0,&this->NotifyDuration,local_res8);
              }
            }
            UpdateNotifyLookAt(this,param_1);
          }
          if (((this->bNotifyDistanceProcessing != false) &&
              ((this->CameraInterp_Distance).field0_0x0.DebugPtr != (UDS_CameraInterp *)0x0)) &&
             (bVar4 = FWeakObjectPtr::IsValid(&(this->CameraBoomPtr).WeakPtr), bVar4)) {
            pUVar3 = (this->CameraInterp_Distance).field0_0x0.DebugPtr;
            local_res8[0] = 1.0;
            if (this->CameraNotifyState == Playing) {
              pUVar5 = FWeakObjectPtr::Get(&(this->CameraBoomPtr).WeakPtr);
              pUVar6 = FWeakObjectPtr::Get(&(this->CameraBoomPtr).WeakPtr);
              UDS_CameraInterp::UpdateNotifyFloat
                        (pUVar3,(float *)&pUVar6[0xe].field_0x20,param_1,
                         (float *)&pUVar5[0xe].field_0x20,&this->NotifyDuration,local_res8);
            }
            else {
              pUVar5 = FWeakObjectPtr::Get(&(this->CameraBoomPtr).WeakPtr);
              pUVar6 = FWeakObjectPtr::Get(&(this->CameraBoomPtr).WeakPtr);
              UDS_CameraInterp::UpdateFloat
                        (pUVar3,(float *)&pUVar6[0xe].field_0x20,param_1,
                         (float *)&pUVar5[0xe].field_0x20,&this->NotifyDistance,
                         &this->NotifyDuration,local_res8);
            }
          }
          UpdateNotifyRotation(this,param_1);
          if ((this->bNotifyFOVProcessing != false) &&
             (pUVar3 = (this->CameraInterp_FOV).field0_0x0.DebugPtr,
             pUVar3 != (UDS_CameraInterp *)0x0)) {
            plVar1 = &this->_padding_;
            local_res8[0] = 1.0;
            if (this->CameraNotifyState == Playing) {
              UDS_CameraInterp::UpdateNotifyFloat
                        (pUVar3,(float *)plVar1,param_1,(float *)plVar1,&this->NotifyDuration,
                         local_res8);
            }
            else {
              UDS_CameraInterp::UpdateFloat
                        (pUVar3,(float *)plVar1,param_1,(float *)plVar1,&this->NotifyFOV,
                         &this->NotifyDuration,local_res8);
            }
          }
        }
      }
    }
  }
  return;
}

// UpdateNotifyDistance @ 14bc6d080

void __thiscall
UDS_MainCameraComponent::UpdateNotifyDistance(UDS_MainCameraComponent *this,float param_1)

{
  TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr> *this_00;
  UDS_CameraInterp *this_01;
  bool bVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  float local_res8 [2];
  
  if ((this->bNotifyDistanceProcessing != false) &&
     ((this->CameraInterp_Distance).field0_0x0.DebugPtr != (UDS_CameraInterp *)0x0)) {
    this_00 = &this->CameraBoomPtr;
    bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar1) {
      this_01 = (this->CameraInterp_Distance).field0_0x0.DebugPtr;
      local_res8[0] = 1.0;
      if (this->CameraNotifyState == Playing) {
        pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        UDS_CameraInterp::UpdateNotifyFloat
                  (this_01,(float *)&pUVar3[0xe].field_0x20,param_1,(float *)&pUVar2[0xe].field_0x20
                   ,&this->NotifyDuration,local_res8);
      }
      else {
        pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        UDS_CameraInterp::UpdateFloat
                  (this_01,(float *)&pUVar3[0xe].field_0x20,param_1,(float *)&pUVar2[0xe].field_0x20
                   ,&this->NotifyDistance,&this->NotifyDuration,local_res8);
      }
    }
  }
  return;
}

// UpdateNotifyFOV @ 14bc6d1b0

void __thiscall
UDS_MainCameraComponent::UpdateNotifyFOV(UDS_MainCameraComponent *this,float param_1)

{
  longlong *plVar1;
  UDS_CameraInterp *this_00;
  float local_res8 [8];
  
  if ((this->bNotifyFOVProcessing != false) &&
     (this_00 = (this->CameraInterp_FOV).field0_0x0.DebugPtr, this_00 != (UDS_CameraInterp *)0x0)) {
    plVar1 = &this->_padding_;
    local_res8[0] = 1.0;
    if (this->CameraNotifyState == Playing) {
      UDS_CameraInterp::UpdateNotifyFloat
                (this_00,(float *)plVar1,param_1,(float *)plVar1,&this->NotifyDuration,local_res8);
      return;
    }
    UDS_CameraInterp::UpdateFloat
              (this_00,(float *)plVar1,param_1,(float *)plVar1,&this->NotifyFOV,
               &this->NotifyDuration,local_res8);
  }
  return;
}

// UpdateNotifyLookAt @ 14bc6d240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UDS_MainCameraComponent::UpdateNotifyLookAt(UDS_MainCameraComponent *this,float param_1)

{
  EDS_CameraNotifyState EVar1;
  code *pcVar2;
  UDS_CameraInterp *this_00;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  bool bVar11;
  int iVar13;
  undefined7 extraout_var;
  UObject *pUVar14;
  FName *pFVar15;
  TMatrix<double> *this_01;
  TRotator<double> *pTVar16;
  undefined4 uVar17;
  uint uVar18;
  UDS_MainCameraComponent *pUVar19;
  wchar_t *pwVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar44;
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auStackY_1d8 [32];
  FName local_198 [2];
  TRotator<double> local_188;
  TRotator<double> local_168;
  TRotator<double> local_150;
  double local_138;
  double local_130;
  double local_128;
  TRotator<double> local_120;
  TVector<double>_u_0 local_108;
  TMatrix<double> local_e8;
  ulonglong local_68;
  uint uVar12;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *this_02;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((this->CameraInterp_LookAt).field0_0x0.DebugPtr == (UDS_CameraInterp *)0x0) {
    return;
  }
  pUVar19 = this;
  USceneComponent::GetComponentRotation((USceneComponent *)this,&local_150);
  uVar17 = SUB84(pUVar19,0);
  EVar1 = this->CameraNotifyState;
  uVar12 = (uint)EVar1;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = local_150.Roll;
  local_168.Roll = local_150.Roll;
  local_168.Pitch = local_150.Pitch;
  local_168.Yaw = local_150.Yaw;
  if (EVar1 == Start) {
    this_02 = &this->NotifySkeletalMesh;
    bVar11 = FWeakObjectPtr::IsValid(&this_02->WeakPtr);
    uVar17 = SUB84(this_02,0);
    uVar12 = (uint)CONCAT71(extraout_var,bVar11);
    if (!bVar11) {
      auVar35._8_8_ = 0;
      auVar35._0_8_ = local_168.Roll;
      goto LAB_14bc6d3f8;
    }
    local_188.Roll = (double)this->_padding_;
    dVar4 = (double)this->_padding_;
    dVar5 = (double)this->_padding_;
    pUVar14 = FWeakObjectPtr::Get(&(this->NotifySkeletalMesh).WeakPtr);
    pcVar2 = *(code **)(*(longlong *)pUVar14 + 0x528);
    if ((this->NotifySocketName).Data.ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(this->NotifySocketName).Data.AllocatorInstance.Data;
    }
    pFVar15 = ::FName::FName(local_198,pwVar20);
    (*pcVar2)(pUVar14,&local_138,*pFVar15);
    local_138 = local_138 + (this->NotifySocketOffset).field0_0x0._s_0.X;
    local_130 = local_130 + (this->NotifySocketOffset).field0_0x0._s_0.Y;
    local_128 = local_128 + (this->NotifySocketOffset).field0_0x0._s_0.Z;
    local_108._s_0.X = local_138 - dVar4;
    local_108._s_0.Y = local_130 - dVar5;
    local_108._s_0.Z = local_128 - local_188.Roll;
    this_01 = UE::Math::TRotationMatrix<double>::MakeFromX
                        (&local_e8,(TVector<double> *)&local_108._s_0);
    pTVar16 = UE::Math::TMatrix<double>::Rotator(this_01,&local_188);
    uVar12 = (uint)pTVar16;
    uVar17 = SUB84(this_01,0);
    local_168.Roll = local_188.Roll;
  }
  else {
    if (EVar1 != End) goto LAB_14bc6d3f8;
    local_150.Pitch = (double)this->_padding_;
    local_150.Yaw = (double)this->_padding_;
    local_150.Roll = (double)this->_padding_;
    uVar12 = 3;
    local_168.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_188.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_188.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  }
  auVar35._8_8_ = 0;
  auVar35._0_8_ = local_168.Roll;
  local_168.Pitch = local_188.Pitch;
  local_168.Yaw = local_188.Yaw;
LAB_14bc6d3f8:
  this_00 = (this->CameraInterp_LookAt).field0_0x0.DebugPtr;
  dVar4 = local_150.Roll - auVar35._0_8_;
  dVar5 = 0.0 - auVar35._8_8_;
  dVar44 = local_150.Yaw - local_168.Yaw;
  local_198[0] = __real_3f1a36e2e0000000;
  auVar27._8_4_ = SUB84(dVar44,0);
  auVar27._0_8_ = local_150.Pitch - local_168.Pitch;
  auVar27._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  auVar28 = divpd(auVar27,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar35 = roundpd(auVar35,auVar28,3);
  dVar8 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar36._0_8_ = auVar35._0_8_ * dVar8;
  dVar9 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar36._8_8_ = auVar35._8_8_ * dVar9;
  auVar29._8_4_ = SUB84(dVar5,0);
  auVar29._0_8_ = dVar4;
  auVar29._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar42 = (local_150.Pitch - local_168.Pitch) - auVar36._0_8_;
  dVar44 = dVar44 - auVar36._8_8_;
  auVar35 = divpd(auVar29,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar35 = roundpd(auVar36,auVar35,3);
  dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar30._8_4_ = SUB84(dVar44,0);
  auVar30._0_8_ = dVar42;
  auVar30._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  dVar4 = dVar4 - auVar35._0_8_ * dVar6;
  dVar5 = dVar5 - auVar35._8_8_ * dVar7;
  uVar21 = -(ulonglong)(0.0 <= dVar42);
  uVar23 = -(ulonglong)(0.0 <= dVar44);
  auVar37._0_8_ = uVar21 & (ulonglong)dVar42;
  auVar37._8_4_ = (undefined4)(uVar23 & (ulonglong)dVar44);
  auVar37._12_4_ = (undefined4)((uVar23 & (ulonglong)dVar44) >> 0x20);
  dVar44 = auVar30._8_8_ + dVar9;
  uVar22 = -(ulonglong)(0.0 <= dVar4);
  uVar24 = -(ulonglong)(0.0 <= dVar5);
  auVar45._0_4_ = ~(uint)uVar21 & SUB84(dVar42 + dVar8,0);
  auVar45._4_4_ = ~(uint)(uVar21 >> 0x20) & (uint)((ulonglong)(dVar42 + dVar8) >> 0x20);
  auVar45._8_4_ = ~(uint)uVar23 & SUB84(dVar44,0);
  auVar45._12_4_ = ~(uint)(uVar23 >> 0x20) & (uint)((ulonglong)dVar44 >> 0x20);
  auVar45 = auVar45 | auVar37;
  auVar31._8_4_ = SUB84(dVar5,0);
  auVar31._0_8_ = dVar4;
  auVar31._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar44 = auVar31._8_8_ + dVar7;
  auVar43._0_4_ = ~(uint)uVar22 & SUB84(dVar4 + dVar6,0);
  auVar43._4_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)(dVar4 + dVar6) >> 0x20);
  auVar43._8_4_ = ~(uint)uVar24 & SUB84(dVar44,0);
  auVar43._12_4_ = ~(uint)(uVar24 >> 0x20) & (uint)((ulonglong)dVar44 >> 0x20);
  auVar28._8_4_ = (int)((ulonglong)dVar5 & uVar24);
  auVar28._0_8_ = (ulonglong)dVar4 & uVar22;
  auVar28._12_4_ = (int)(((ulonglong)dVar5 & uVar24) >> 0x20);
  auVar43 = auVar43 | auVar28;
  uVar22 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar43._0_8_);
  uVar24 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar43._8_8_);
  uVar23 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar45._0_8_);
  uVar25 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar45._8_8_);
  auVar38._0_8_ = uVar22 & (ulonglong)(auVar43._0_8_ - dVar6);
  uVar21 = uVar24 & (ulonglong)(auVar43._8_8_ - dVar7);
  auVar38._8_4_ = (undefined4)uVar21;
  auVar38._12_4_ = (undefined4)(uVar21 >> 0x20);
  auVar32._0_4_ = ~(uint)uVar22 & auVar43._0_4_;
  auVar32._4_4_ = ~(uint)(uVar22 >> 0x20) & auVar43._4_4_;
  auVar32._8_4_ = ~(uint)uVar24 & auVar43._8_4_;
  auVar32._12_4_ = ~(uint)(uVar24 >> 0x20) & auVar43._12_4_;
  auVar38 = auVar38 | auVar32;
  auVar33._8_4_ = __real_3f1a36e2e0000000.ComparisonIndex.Value.Value;
  auVar33._0_4_ = __real_3f1a36e2e0000000.ComparisonIndex.Value;
  auVar33._4_4_ = __real_3f1a36e2e0000000.Number;
  auVar33._12_4_ = __real_3f1a36e2e0000000.Number;
  auVar39._0_8_ =
       (double)CONCAT44(auVar38._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar38._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar39._8_4_ = auVar38._8_4_ & _UNK_15061cc88;
  auVar39._12_4_ = auVar38._12_4_ & _UNK_15061cc8c;
  auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < auVar39._8_8_);
  auVar34._0_8_ = -(ulonglong)((double)__real_3f1a36e2e0000000 < auVar39._0_8_);
  uVar18 = movmskpd(uVar17,auVar34);
  auVar40._0_8_ = uVar23 & (ulonglong)(auVar45._0_8_ - dVar8);
  uVar21 = uVar25 & (ulonglong)(auVar45._8_8_ - dVar9);
  auVar40._8_4_ = (undefined4)uVar21;
  auVar40._12_4_ = (undefined4)(uVar21 >> 0x20);
  auVar3._4_4_ = ~(uint)(uVar23 >> 0x20) & auVar45._4_4_;
  auVar3._0_4_ = ~(uint)uVar23 & auVar45._0_4_;
  auVar3._8_4_ = ~(uint)uVar25 & auVar45._8_4_;
  auVar3._12_4_ = ~(uint)(uVar25 >> 0x20) & auVar45._12_4_;
  auVar40 = auVar40 | auVar3;
  auVar41._0_8_ =
       (double)CONCAT44(auVar40._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar40._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar41._8_4_ = auVar40._8_4_ & _UNK_15061cc88;
  auVar41._12_4_ = auVar40._12_4_ & _UNK_15061cc8c;
  lVar26 = -(ulonglong)((double)__real_3f1a36e2e0000000 < auVar41._8_8_);
  auVar10._8_4_ = (int)lVar26;
  auVar10._0_8_ = -(ulonglong)((double)__real_3f1a36e2e0000000 < auVar41._0_8_);
  auVar10._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
  iVar13 = movmskpd(uVar12,auVar10);
  if ((uVar18 & 0x3fffffff) == 0 && iVar13 == 0) {
    UDS_CameraInterp::Reset(this_00);
  }
  else {
    local_198[0].Number = __real_3f1a36e2e0000000.Number;
    local_198[0].ComparisonIndex.Value = 0x3f800000;
    UDS_CameraInterp::UpdateRotation
              (this_00,&local_120,param_1,&local_150,&local_168,&this->NotifyDuration,
               (float *)local_198);
    if (this->CameraNotifyState == Start) {
      local_188.Pitch = local_120.Pitch;
      local_188.Yaw = local_120.Yaw;
      local_188.Roll = local_120.Roll;
      USceneComponent::SetWorldRotation
                ((USceneComponent *)this,&local_188,false,(FHitResult *)0x0,None);
    }
    else if (this->CameraNotifyState == End) {
      local_188.Pitch = local_120.Pitch;
      local_188.Yaw = local_120.Yaw;
      local_188.Roll = local_120.Roll;
      USceneComponent::SetRelativeRotation
                ((USceneComponent *)this,&local_188,false,(FHitResult *)0x0,None);
    }
  }
  return;
}

// UpdateNotifyRotation @ 14bc6d600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MainCameraComponent::UpdateNotifyRotation(UDS_MainCameraComponent *this,float param_1)

{
  UDS_CameraInterp *this_00;
  bool bVar1;
  UObject *pUVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_1f8 [32];
  float local_1b8 [2];
  FWeakObjectPtr local_1b0;
  FString local_1a8;
  FString local_198;
  TRotator<double> local_188;
  TRotator<double> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((this->bNotifyRotationProcessing != false) &&
     ((this->CameraInterp_Rotation).field0_0x0.DebugPtr != (UDS_CameraInterp *)0x0)) {
    ADS_PlayerController::GetPlayerController();
    bVar1 = FWeakObjectPtr::IsValid(&local_1b0);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_1b0);
      (**(code **)(*(longlong *)pUVar2 + 0x7a8))(pUVar2,&local_170);
      this_00 = (this->CameraInterp_Rotation).field0_0x0.DebugPtr;
      local_1b8[0] = 1.0;
      if (this->CameraNotifyState == Playing) {
        UDS_CameraInterp::UpdateNotifyRotation
                  (this_00,&local_188,param_1,&local_170,&this->NotifyDuration,local_1b8);
      }
      else {
        UDS_CameraInterp::UpdateRotation
                  (this_00,&local_188,param_1,&local_170,&this->NotifyRotation,&this->NotifyDuration
                   ,local_1b8);
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        ::FString::PrintfImpl(&local_198,L"P=%f Y=%f R=%f");
        ::FString::PrintfImpl(&local_1a8,L"P=%f Y=%f R=%f");
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_MainCameraComponent::UpdateNotifyRotation",0x2d,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Display,local_158.Ptr,0x159,L"%s - %s");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
      }
      pUVar2 = FWeakObjectPtr::Get(&local_1b0);
      (**(code **)(*(longlong *)pUVar2 + 0x7b0))(pUVar2,&local_188);
    }
  }
  return;
}

// UpdateNotifySocketOffset @ 14bc6d890

void __thiscall
UDS_MainCameraComponent::UpdateNotifySocketOffset(UDS_MainCameraComponent *this,float param_1)

{
  TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr> *this_00;
  UDS_CameraInterp *this_01;
  UObject *pUVar1;
  UObject *pUVar2;
  float local_res8 [2];
  TVector<double>_u_0 local_38 [2];
  
  if ((this->CameraInterp_SocketOffset).field0_0x0.DebugPtr != (UDS_CameraInterp *)0x0) {
    local_38[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_38[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_38[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (this->CameraNotifyState == Start) {
    }
    else if (this->CameraNotifyState == End) {
      pUVar1 = FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
      local_38[0]._0_8_ = *(undefined8 *)(pUVar1 + 0x10);
      local_38[0]._8_8_ = *(undefined8 *)&pUVar1[0x10].field_0x8;
      local_38[0]._16_8_ = *(undefined8 *)&pUVar1[0x10].field_0x10;
    }
    this_00 = &this->CameraBoomPtr;
    pUVar1 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if ((((double)local_38[0]._0_8_ == *(double *)(pUVar1 + 0xf)) &&
        ((double)local_38[0]._8_8_ == *(double *)&pUVar1[0xf].field_0x8)) &&
       ((double)local_38[0]._16_8_ == *(double *)&pUVar1[0xf].field_0x10)) {
      UDS_CameraInterp::Reset((this->CameraInterp_SocketOffset).field0_0x0.DebugPtr);
      return;
    }
    this_01 = (this->CameraInterp_SocketOffset).field0_0x0.DebugPtr;
    local_res8[0] = 1.0;
    pUVar1 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_CameraInterp::UpdateVector
              (this_01,(TVector<double> *)(pUVar2 + 0xf),param_1,(TVector<double> *)(pUVar1 + 0xf),
               (TVector<double> *)&local_38[0]._s_0,&this->NotifyDuration,local_res8);
  }
  return;
}

// UpdateNotifyTargetOffset @ 14bc6da10

void __thiscall
UDS_MainCameraComponent::UpdateNotifyTargetOffset(UDS_MainCameraComponent *this,float param_1)

{
  TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr> *this_00;
  UDS_CameraInterp *this_01;
  UObject *pUVar1;
  UObject *pUVar2;
  float local_res8 [2];
  TVector<double>_u_0 local_38 [2];
  
  if ((this->CameraInterp_TargetOffset).field0_0x0.DebugPtr != (UDS_CameraInterp *)0x0) {
    local_38[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_38[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_38[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (this->CameraNotifyState == Start) {
    }
    else if (this->CameraNotifyState == End) {
      pUVar1 = FWeakObjectPtr::Get(&(this->NowCameraStatePtr).WeakPtr);
      local_38[0]._0_8_ = *(undefined8 *)&pUVar1[2].field_0x20;
      local_38[0]._8_8_ = *(undefined8 *)(pUVar1 + 3);
      local_38[0]._16_8_ = *(undefined8 *)&pUVar1[3].field_0x8;
    }
    this_00 = &this->CameraBoomPtr;
    pUVar1 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if ((((double)local_38[0]._0_8_ == *(double *)&pUVar1[0xf].field_0x18) &&
        ((double)local_38[0]._8_8_ == *(double *)&pUVar1[0xf].field_0x20)) &&
       ((double)local_38[0]._16_8_ == *(double *)(pUVar1 + 0x10))) {
      UDS_CameraInterp::Reset((this->CameraInterp_TargetOffset).field0_0x0.DebugPtr);
      return;
    }
    this_01 = (this->CameraInterp_TargetOffset).field0_0x0.DebugPtr;
    local_res8[0] = 1.0;
    pUVar1 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_CameraInterp::UpdateVector
              (this_01,(TVector<double> *)&pUVar2[0xf].field_0x18,param_1,
               (TVector<double> *)&pUVar1[0xf].field_0x18,(TVector<double> *)&local_38[0]._s_0,
               &this->NotifyDuration,local_res8);
  }
  return;
}

