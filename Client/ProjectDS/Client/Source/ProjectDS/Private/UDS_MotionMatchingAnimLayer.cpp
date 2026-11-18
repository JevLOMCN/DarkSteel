// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 61

// StaticClass @ 14b4f3750

UClass * __cdecl UDS_MotionMatchingAnimLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MotionMatchingAnimLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MotionMatchingAnimLayer",
               &Z_Registration_Info_UClass_UDS_MotionMatchingAnimLayer.InnerSingleton,
               StaticRegisterNativesUDS_MotionMatchingAnimLayer,0x510,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MotionMatchingAnimLayer>,
               InternalVTableHelperCtorCaller<UDS_MotionMatchingAnimLayer>,local_res8,
               UDS_AnimLayerBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MotionMatchingAnimLayer.InnerSingleton;
}

// UDS_MotionMatchingAnimLayer @ 14b4f7550

UDS_MotionMatchingAnimLayer * __thiscall
UDS_MotionMatchingAnimLayer::UDS_MotionMatchingAnimLayer
          (UDS_MotionMatchingAnimLayer *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AnimLayerBase::UDS_AnimLayerBase((UDS_AnimLayerBase *)this,param_1);
  *(undefined ***)this = &___7UDS_MotionMatchingAnimLayer__6B_;
  (this->TrajectoryComponent).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->MotionMatchingChooserMap = 0;
  *(undefined8 *)&(this->MotionMatchingChooserMap).field_0x8 = 0;
  *(undefined8 *)&(this->MotionMatchingChooserMap).field_0x20 = 0;
  (this->MotionMatchingData).SearchThrottleTime = 0.0;
  (this->MotionMatchingData).BlendTime = 0.3;
  (this->MotionMatchingData).PoseReselectHistory = 0.0;
  *(undefined4 *)&(this->MotionMatchingChooserMap).field_0x28 = 0;
  *(undefined4 *)&(this->MotionMatchingChooserMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MotionMatchingChooserMap).field_0x34 = 0;
  *(undefined4 *)&(this->MotionMatchingChooserMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MotionMatchingChooserMap).field_0x40 = 0;
  *(undefined4 *)&(this->MotionMatchingChooserMap).field_0x48 = 0;
  (this->DefaultMotionMatchingChooser).field0_0x0.DebugPtr = (UChooserTable *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->FutureVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->FutureVelocity).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->CurrentWeaponType = None;
  this->bIsBattleState = false;
  this->bIsPreBattleState = false;
  this->bIsPivoting90 = false;
  this->bIsPivoting180 = false;
  this->bIsInAir = false;
  this->bIsLandMove = false;
  this->bIsStarting = false;
  this->bShouldUpdateChooser = false;
  this->ChooserUpdateReaminTime = 0.0;
  this->PivotTimeRemaining = 0.0;
  this->LandMoveEndTime = 0.0;
  (this->FutureVelocity).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// ~UDS_MotionMatchingAnimLayer @ 14b4f84b0

void __thiscall
UDS_MotionMatchingAnimLayer::~UDS_MotionMatchingAnimLayer(UDS_MotionMatchingAnimLayer *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &___7UDS_MotionMatchingAnimLayer__6B_;
  *(undefined4 *)&(this->MotionMatchingChooserMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MotionMatchingChooserMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_WeaponType,TObjectPtr<UChooserTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_WeaponType,TObjectPtr<UChooserTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->MotionMatchingChooserMap);
  UDS_AnimLayerBase::~UDS_AnimLayerBase((UDS_AnimLayerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4f9a70

UClass * __cdecl UDS_MotionMatchingAnimLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MotionMatchingAnimLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MotionMatchingAnimLayer",
               &Z_Registration_Info_UClass_UDS_MotionMatchingAnimLayer.InnerSingleton,
               StaticRegisterNativesUDS_MotionMatchingAnimLayer,0x510,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MotionMatchingAnimLayer>,
               InternalVTableHelperCtorCaller<UDS_MotionMatchingAnimLayer>,local_res8,
               UDS_AnimLayerBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MotionMatchingAnimLayer.InnerSingleton;
}

// ShouldChangeCharStateEvent @ 14b4fa670

bool __thiscall
UDS_MotionMatchingAnimLayer::ShouldChangeCharStateEvent(UDS_MotionMatchingAnimLayer *this)

{
  return true;
}

// StaticRegisterNativesUDS_MotionMatchingAnimLayer @ 14b4fa7b0

void __cdecl UDS_MotionMatchingAnimLayer::StaticRegisterNativesUDS_MotionMatchingAnimLayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x13;
  local_18.DataPtr = Z_Construct_UClass_UDS_MotionMatchingAnimLayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDesiredFacing @ 14b4fb850

void __cdecl
UDS_MotionMatchingAnimLayer::execGetDesiredFacing(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  TQuat<double> *pTVar2;
  TQuat<double> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetDesiredFacing((UDS_MotionMatchingAnimLayer *)param_1,&local_28);
  dVar1 = pTVar2->Y;
  *(double *)param_3 = pTVar2->X;
  *(double *)((longlong)param_3 + 8) = dVar1;
  dVar1 = pTVar2->W;
  *(double *)((longlong)param_3 + 0x10) = pTVar2->Z;
  *(double *)((longlong)param_3 + 0x18) = dVar1;
  return;
}

// execGetLastNonZeroVelocity @ 14b4fb940

void __cdecl
UDS_MotionMatchingAnimLayer::execGetLastNonZeroVelocity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetLastNonZeroVelocity((UDS_MotionMatchingAnimLayer *)param_1,&local_28);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar2->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar1;
  *(double *)((longlong)param_3 + 0x10) = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// execGetLeanAmount @ 14b4fb990

void __cdecl
UDS_MotionMatchingAnimLayer::execGetLeanAmount(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x3f8))(param_1,local_18);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetMotionMatchingBlendTime @ 14b4fb9d0

void __cdecl
UDS_MotionMatchingAnimLayer::execGetMotionMatchingBlendTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 1000))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetMoveSpeed @ 14b4fbaa0

void __cdecl
UDS_MotionMatchingAnimLayer::execGetMoveSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetMoveSpeed((UDS_MotionMatchingAnimLayer *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetOffsetRootTranslationHalfLife @ 14b4fbae0

void __cdecl
UDS_MotionMatchingAnimLayer::execGetOffsetRootTranslationHalfLife
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetOffsetRootTranslationHalfLife((UDS_MotionMatchingAnimLayer *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetOffsetRootTranslationMode @ 14b4fbb20

void __cdecl
UDS_MotionMatchingAnimLayer::execGetOffsetRootTranslationMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  EOffsetRootBoneMode EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = GetOffsetRootTranslationMode((UDS_MotionMatchingAnimLayer *)param_1);
  *(EOffsetRootBoneMode *)param_3 = EVar1;
  return;
}

// execGetPoseSearchInterruptMode @ 14b4fbb60

void __cdecl
UDS_MotionMatchingAnimLayer::execGetPoseSearchInterruptMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x400))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetPoseSearchQueryTrajectory @ 14b4fbba0

void __cdecl
UDS_MotionMatchingAnimLayer::execGetPoseSearchQueryTrajectory
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FTransformTrajectory *pFVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = GetPoseSearchQueryTrajectory((UDS_MotionMatchingAnimLayer *)param_1);
  if (param_3 != pFVar2) {
    iVar1 = (pFVar2->Samples).ArrayNum;
    _Src = (pFVar2->Samples).AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(int *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,iVar1,*(int *)((longlong)param_3 + 0xc),param_3,iVar1,
               (int *)((longlong)param_3 + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar1 << 6);
    }
  }
  return;
}

// execIsBattleState @ 14b4fbd10

void __cdecl
UDS_MotionMatchingAnimLayer::execIsBattleState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1f].field_0x11;
  return;
}

// execIsEnableSteering @ 14b4fbd40

void __cdecl
UDS_MotionMatchingAnimLayer::execIsEnableSteering(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x3e0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsLandMoveState @ 14b4fbdc0

void __cdecl
UDS_MotionMatchingAnimLayer::execIsLandMoveState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsLandMoveState((UDS_MotionMatchingAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsMoving @ 14b4fbed0

void __cdecl
UDS_MotionMatchingAnimLayer::execIsMoving(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x3f0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsPivoting180 @ 14b4fbf50

void __cdecl
UDS_MotionMatchingAnimLayer::execIsPivoting180(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsPivoting180((UDS_MotionMatchingAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsPivoting90 @ 14b4fbf90

void __cdecl
UDS_MotionMatchingAnimLayer::execIsPivoting90(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsPivoting90((UDS_MotionMatchingAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsPivoting @ 14b4fbfd0

void __cdecl
UDS_MotionMatchingAnimLayer::execIsPivoting(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsPivoting((UDS_MotionMatchingAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsStarting @ 14b4fc050

void __cdecl
UDS_MotionMatchingAnimLayer::execIsStarting(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsStarting((UDS_MotionMatchingAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execOnPostUpdateMotionMatching @ 14b4fc2a0

void __cdecl
UDS_MotionMatchingAnimLayer::execOnPostUpdateMotionMatching
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FAnimUpdateContext *pFVar3;
  FProperty *pFVar4;
  FAnimUpdateContext *pFVar5;
  FAnimNodeReference *pFVar6;
  undefined1 local_28 [8];
  longlong *plStack_20;
  FAnimNodeReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28 = (undefined1  [8])0x0;
  plStack_20 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  pFVar3 = (FAnimUpdateContext *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pFVar5 = (FAnimUpdateContext *)local_28;
  if (pFVar3 != (FAnimUpdateContext *)0x0) {
    pFVar5 = pFVar3;
  }
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar6 = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    pFVar6 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnPostUpdateMotionMatching((UDS_MotionMatchingAnimLayer *)param_1,pFVar5,pFVar6);
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_20 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_20 + 8))(plStack_20,1);
    }
  }
  return;
}

// execOnUpdateDatabaseSearch @ 14b4fc3d0

void __cdecl
UDS_MotionMatchingAnimLayer::execOnUpdateDatabaseSearch
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FAnimUpdateContext *pFVar3;
  FProperty *pFVar4;
  FAnimUpdateContext *pFVar5;
  FAnimNodeReference *pFVar6;
  undefined1 local_28 [8];
  longlong *plStack_20;
  FAnimNodeReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28 = (undefined1  [8])0x0;
  plStack_20 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  pFVar3 = (FAnimUpdateContext *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pFVar5 = (FAnimUpdateContext *)local_28;
  if (pFVar3 != (FAnimUpdateContext *)0x0) {
    pFVar5 = pFVar3;
  }
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar6 = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    pFVar6 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnUpdateDatabaseSearch((UDS_MotionMatchingAnimLayer *)param_1,pFVar5,pFVar6);
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_20 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_20 + 8))(plStack_20,1);
    }
  }
  return;
}

// UDS_MotionMatchingAnimLayer @ 14b865100

UDS_MotionMatchingAnimLayer * __thiscall
UDS_MotionMatchingAnimLayer::UDS_MotionMatchingAnimLayer
          (UDS_MotionMatchingAnimLayer *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  (this->MotionMatchingData).BlendTime = 0.3;
  (this->MotionMatchingData).PoseReselectHistory = 0.0;
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  *(undefined8 *)&this->field_0x448 = 0;
  *(undefined8 *)&this->field_0x450 = 0;
  (this->TrajectoryComponent).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->MotionMatchingChooserMap = 0;
  *(undefined8 *)&(this->MotionMatchingChooserMap).field_0x8 = 0;
  *(undefined8 *)&(this->MotionMatchingChooserMap).field_0x20 = 0;
  (this->MotionMatchingData).SearchThrottleTime = 0.0;
  *(undefined ***)this = &___7UDS_MotionMatchingAnimLayer__6B_;
  *(undefined8 *)&this->field_0x430 = 0;
  *(undefined4 *)&(this->MotionMatchingChooserMap).field_0x28 = 0;
  *(undefined4 *)&(this->MotionMatchingChooserMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MotionMatchingChooserMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MotionMatchingChooserMap).field_0x34 = 0;
  *(undefined8 *)&(this->MotionMatchingChooserMap).field_0x40 = 0;
  *(undefined4 *)&(this->MotionMatchingChooserMap).field_0x48 = 0;
  (this->DefaultMotionMatchingChooser).field0_0x0.DebugPtr = (UChooserTable *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->FutureVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->FutureVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->FutureVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  this->CurrentWeaponType = None;
  this->bIsBattleState = false;
  this->bIsPreBattleState = false;
  this->bIsPivoting90 = false;
  this->bIsPivoting180 = false;
  this->bIsInAir = false;
  this->bIsLandMove = false;
  this->bIsStarting = false;
  this->bShouldUpdateChooser = false;
  this->ChooserUpdateReaminTime = 0.0;
  this->PivotTimeRemaining = 0.0;
  this->LandMoveEndTime = 0.0;
  return this;
}

// GetCurrentChooserTable @ 14b8774c0

TObjectPtr<UChooserTable> __thiscall
UDS_MotionMatchingAnimLayer::GetCurrentChooserTable(UDS_MotionMatchingAnimLayer *this)

{
  TObjectPtr<UChooserTable> *pTVar1;
  UChooserTable *pUVar2;
  TObjectPtr<UChooserTable>_u_0 in_RDX;
  
  if (this->bIsBattleState == true) {
    pTVar1 = TMapBase<enum_EDS_WeaponType,TObjectPtr<UChooserTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,TObjectPtr<UChooserTable>,0>_>
             ::Find(&this->MotionMatchingChooserMap,this->CurrentWeaponType);
    pUVar2 = (pTVar1->field0_0x0).DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar2 == (UChooserTable *)0x0) goto LAB_14b877522;
    }
    else {
      if (pUVar2 == (UChooserTable *)0x0) goto LAB_14b877522;
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (in_RDX.DebugPtr)->_padding_ = (longlong)pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      return (TObjectPtr<UChooserTable>)in_RDX.DebugPtr;
    }
  }
  else {
LAB_14b877522:
    pUVar2 = (this->DefaultMotionMatchingChooser).field0_0x0.DebugPtr;
    (in_RDX.DebugPtr)->_padding_ = (longlong)pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      return (TObjectPtr<UChooserTable>)in_RDX.DebugPtr;
    }
    if (pUVar2 == (UChooserTable *)0x0) {
      return (TObjectPtr<UChooserTable>)in_RDX.DebugPtr;
    }
  }
  UE::GC::MarkAsReachable((UObject *)pUVar2);
  return (TObjectPtr<UChooserTable>)in_RDX;
}

// GetDesiredFacing @ 14b8775c0

TQuat<double> * __thiscall
UDS_MotionMatchingAnimLayer::GetDesiredFacing
          (UDS_MotionMatchingAnimLayer *this,TQuat<double> *__return_storage_ptr__)

{
  bool bVar1;
  UDS_CharacterTrajectoryComponent *this_00;
  FTransformTrajectory *pFVar2;
  FTransformTrajectorySample local_48;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->TrajectoryComponent).WeakPtr);
  local_48.Facing.X._0_4_ = UE::Math::TQuat<double>::Identity.X._0_4_;
  local_48.Facing.X._4_4_ = UE::Math::TQuat<double>::Identity.X._4_4_;
  local_48.Facing.Y._0_4_ = UE::Math::TQuat<double>::Identity.Y._0_4_;
  local_48.Facing.Y._4_4_ = UE::Math::TQuat<double>::Identity.Y._4_4_;
  local_48.Facing.Z._0_4_ = UE::Math::TQuat<double>::Identity.Z._0_4_;
  local_48.Facing.Z._4_4_ = UE::Math::TQuat<double>::Identity.Z._4_4_;
  local_48.Facing.W._0_4_ = UE::Math::TQuat<double>::Identity.W._0_4_;
  local_48.Facing.W._4_4_ = UE::Math::TQuat<double>::Identity.W._4_4_;
  if (bVar1) {
    local_48.TimeInSeconds = 0.0;
    local_48.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_48.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_48.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this_00 = (UDS_CharacterTrajectoryComponent *)
              FWeakObjectPtr::Get(&(this->TrajectoryComponent).WeakPtr);
    pFVar2 = UDS_CharacterTrajectoryComponent::GetPoseSearchQueryTrajectory(this_00);
    UPoseSearchTrajectoryLibrary::GetTransformTrajectorySampleAtTime
              (pFVar2,__real_3f000000,&local_48,false);
  }
  *(undefined4 *)&__return_storage_ptr__->X = local_48.Facing.X._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->X + 4) = local_48.Facing.X._4_4_;
  *(undefined4 *)&__return_storage_ptr__->Y = local_48.Facing.Y._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Y + 4) = local_48.Facing.Y._4_4_;
  *(undefined4 *)&__return_storage_ptr__->Z = local_48.Facing.Z._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Z + 4) = local_48.Facing.Z._4_4_;
  *(undefined4 *)&__return_storage_ptr__->W = local_48.Facing.W._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->W + 4) = local_48.Facing.W._4_4_;
  return __return_storage_ptr__;
}

// GetLastNonZeroVelocity @ 14b877c70

TVector<double> * __thiscall
UDS_MotionMatchingAnimLayer::GetLastNonZeroVelocity
          (UDS_MotionMatchingAnimLayer *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  FDS_AnimSharedData *pFVar3;
  
  pFVar3 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  dVar2 = (pFVar3->LastNonZeroVelocity).field0_0x0._s_0.Y;
  dVar1 = (pFVar3->LastNonZeroVelocity).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pFVar3->LastNonZeroVelocity).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetLeanAmount @ 14b877d70

TVector2<double> * __thiscall
UDS_MotionMatchingAnimLayer::GetLeanAmount
          (UDS_MotionMatchingAnimLayer *this,TVector2<double> *__return_storage_ptr__)

{
  TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> TVar1;
  TWeakObjectPtr<AActor,FWeakObjectPtr> TVar2;
  FDS_AnimSharedData *this_00;
  
  this_00 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  TVar1.WeakPtr.ObjectIndex = *(int *)&this->field_0x450;
  TVar1.WeakPtr.ObjectSerialNumber = *(int *)&this->field_0x454;
  TVar2.WeakPtr.ObjectIndex = *(int *)&this->field_0x428;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&this->field_0x42c;
  FDS_AnimSharedData::GetLeanAmount(this_00,__return_storage_ptr__,TVar2,TVar1);
  return __return_storage_ptr__;
}

// GetMotionMatchingBlendTime @ 14b8780a0

float __thiscall
UDS_MotionMatchingAnimLayer::GetMotionMatchingBlendTime(UDS_MotionMatchingAnimLayer *this)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double *pdVar13;
  char cVar14;
  FDS_AnimSharedData *pFVar15;
  FDS_AnimSharedData *pFVar16;
  double *pdVar17;
  longlong lVar18;
  float fVar19;
  double local_148 [36];
  float local_24;
  
  pFVar15 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  lVar18 = 2;
  pdVar13 = local_148;
  do {
    pdVar17 = pdVar13;
    pFVar16 = pFVar15;
    dVar1 = (pFVar16->ActorLocation).field0_0x0._s_0.X;
    dVar10 = (pFVar16->ActorLocation).field0_0x0._s_0.Y;
    dVar11 = (pFVar16->ActorLocation).field0_0x0._s_0.Z;
    pFVar15 = (FDS_AnimSharedData *)((pFVar16->LastNonZeroVelocity).field0_0x0.XYZ + 2);
    *pdVar17 = *(double *)pFVar16;
    pdVar17[1] = dVar1;
    dVar1 = (pFVar16->ActorRotation).Pitch;
    dVar12 = (pFVar16->ActorRotation).Yaw;
    pdVar17[2] = dVar10;
    pdVar17[3] = dVar11;
    dVar10 = (pFVar16->ActorRotation).Roll;
    dVar11 = *(double *)&pFVar16->RotationVelocity;
    pdVar17[4] = dVar1;
    pdVar17[5] = dVar12;
    dVar1 = (pFVar16->Velocity).field0_0x0._s_0.X;
    dVar12 = (pFVar16->Velocity).field0_0x0._s_0.Y;
    pdVar17[6] = dVar10;
    pdVar17[7] = dVar11;
    dVar10 = (pFVar16->Velocity).field0_0x0._s_0.Z;
    dVar11 = (pFVar16->VelocityLastFrame).field0_0x0._s_0.X;
    pdVar17[8] = dVar1;
    pdVar17[9] = dVar12;
    dVar1 = (pFVar16->VelocityLastFrame).field0_0x0._s_0.Y;
    dVar12 = (pFVar16->VelocityLastFrame).field0_0x0._s_0.Z;
    pdVar17[10] = dVar10;
    pdVar17[0xb] = dVar11;
    dVar10 = (pFVar16->LastNonZeroVelocity).field0_0x0._s_0.X;
    dVar11 = (pFVar16->LastNonZeroVelocity).field0_0x0._s_0.Y;
    pdVar17[0xc] = dVar1;
    pdVar17[0xd] = dVar12;
    pdVar17[0xe] = dVar10;
    pdVar17[0xf] = dVar11;
    lVar18 = lVar18 + -1;
    pdVar13 = pdVar17 + 0x10;
  } while (lVar18 != 0);
  dVar1 = (pFVar16->VelocityAcceleration).field0_0x0._s_0.X;
  uVar2 = *(undefined4 *)((longlong)&(pFVar16->VelocityAcceleration).field0_0x0 + 8);
  uVar3 = *(undefined4 *)((longlong)&(pFVar16->VelocityAcceleration).field0_0x0 + 0xc);
  uVar4 = *(undefined4 *)((longlong)&(pFVar16->VelocityAcceleration).field0_0x0 + 0x10);
  uVar5 = *(undefined4 *)((longlong)&(pFVar16->VelocityAcceleration).field0_0x0 + 0x14);
  pdVar17[0x10] = *(double *)pFVar15;
  pdVar17[0x11] = dVar1;
  uVar6 = *(undefined4 *)&(pFVar16->LocalVelocity2D).field0_0x0;
  uVar7 = *(undefined4 *)((longlong)&(pFVar16->LocalVelocity2D).field0_0x0 + 4);
  uVar8 = *(undefined4 *)((longlong)&(pFVar16->LocalVelocity2D).field0_0x0 + 8);
  uVar9 = *(undefined4 *)((longlong)&(pFVar16->LocalVelocity2D).field0_0x0 + 0xc);
  dVar1 = (pFVar16->LocalVelocity2D).field0_0x0._s_0.Z;
  *(undefined4 *)(pdVar17 + 0x12) = uVar2;
  *(undefined4 *)((longlong)pdVar17 + 0x94) = uVar3;
  *(undefined4 *)(pdVar17 + 0x13) = uVar4;
  *(undefined4 *)((longlong)pdVar17 + 0x9c) = uVar5;
  *(undefined4 *)(pdVar17 + 0x14) = uVar6;
  *(undefined4 *)((longlong)pdVar17 + 0xa4) = uVar7;
  *(undefined4 *)(pdVar17 + 0x15) = uVar8;
  *(undefined4 *)((longlong)pdVar17 + 0xac) = uVar9;
  pdVar17[0x16] = dVar1;
  cVar14 = (**(code **)(*(longlong *)this + 0x3f0))(this);
  fVar19 = (this->MotionMatchingData).BlendTime;
  if ((cVar14 != '\0') && (local_24 < __real_42c80000)) {
    fVar19 = fVar19 * __real_3f000000;
  }
  return fVar19;
}

// GetMoveSpeed @ 14b8787d0

float __thiscall UDS_MotionMatchingAnimLayer::GetMoveSpeed(UDS_MotionMatchingAnimLayer *this)

{
  FDS_AnimSharedData *pFVar1;
  
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  return pFVar1->MoveSpeed;
}

// GetOffsetRootTranslationHalfLife @ 14b879050

float __thiscall
UDS_MotionMatchingAnimLayer::GetOffsetRootTranslationHalfLife(UDS_MotionMatchingAnimLayer *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3f0))();
  if (cVar1 != '\0') {
    return __real_3e4ccccd;
  }
  return __real_3dcccccd;
}

// GetOffsetRootTranslationMode @ 14b879090

EOffsetRootBoneMode __thiscall
UDS_MotionMatchingAnimLayer::GetOffsetRootTranslationMode(UDS_MotionMatchingAnimLayer *this)

{
  char cVar1;
  EOffsetRootBoneMode EVar2;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3f0))();
  EVar2 = Release;
  if (cVar1 != '\0') {
    EVar2 = Interpolate;
  }
  return EVar2;
}

// GetPoseSearchInterruptMode @ 14b879100

EPoseSearchInterruptMode __thiscall
UDS_MotionMatchingAnimLayer::GetPoseSearchInterruptMode(UDS_MotionMatchingAnimLayer *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  FDS_AnimSharedData *pFVar7;
  FDS_AnimSharedData *pFVar8;
  double *pdVar9;
  longlong lVar10;
  double local_148 [25];
  char local_80;
  char local_7f;
  
  pFVar7 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  lVar10 = 2;
  pdVar6 = local_148;
  do {
    pdVar9 = pdVar6;
    pFVar8 = pFVar7;
    dVar1 = (pFVar8->ActorLocation).field0_0x0._s_0.X;
    dVar2 = (pFVar8->ActorLocation).field0_0x0._s_0.Y;
    dVar3 = (pFVar8->ActorLocation).field0_0x0._s_0.Z;
    pFVar7 = (FDS_AnimSharedData *)((pFVar8->LastNonZeroVelocity).field0_0x0.XYZ + 2);
    *pdVar9 = *(double *)pFVar8;
    pdVar9[1] = dVar1;
    dVar1 = (pFVar8->ActorRotation).Pitch;
    dVar4 = (pFVar8->ActorRotation).Yaw;
    pdVar9[2] = dVar2;
    pdVar9[3] = dVar3;
    dVar2 = (pFVar8->ActorRotation).Roll;
    dVar3 = *(double *)&pFVar8->RotationVelocity;
    pdVar9[4] = dVar1;
    pdVar9[5] = dVar4;
    dVar1 = (pFVar8->Velocity).field0_0x0._s_0.X;
    dVar4 = (pFVar8->Velocity).field0_0x0._s_0.Y;
    pdVar9[6] = dVar2;
    pdVar9[7] = dVar3;
    dVar2 = (pFVar8->Velocity).field0_0x0._s_0.Z;
    dVar3 = (pFVar8->VelocityLastFrame).field0_0x0._s_0.X;
    pdVar9[8] = dVar1;
    pdVar9[9] = dVar4;
    dVar1 = (pFVar8->VelocityLastFrame).field0_0x0._s_0.Y;
    dVar4 = (pFVar8->VelocityLastFrame).field0_0x0._s_0.Z;
    pdVar9[10] = dVar2;
    pdVar9[0xb] = dVar3;
    dVar2 = (pFVar8->LastNonZeroVelocity).field0_0x0._s_0.X;
    dVar3 = (pFVar8->LastNonZeroVelocity).field0_0x0._s_0.Y;
    pdVar9[0xc] = dVar1;
    pdVar9[0xd] = dVar4;
    pdVar9[0xe] = dVar2;
    pdVar9[0xf] = dVar3;
    lVar10 = lVar10 + -1;
    pdVar6 = pdVar9 + 0x10;
  } while (lVar10 != 0);
  dVar1 = (pFVar8->VelocityAcceleration).field0_0x0._s_0.X;
  dVar2 = (pFVar8->VelocityAcceleration).field0_0x0._s_0.Y;
  dVar3 = (pFVar8->VelocityAcceleration).field0_0x0._s_0.Z;
  pdVar9[0x10] = *(double *)pFVar7;
  pdVar9[0x11] = dVar1;
  dVar4 = (pFVar8->LocalVelocity2D).field0_0x0._s_0.X;
  dVar5 = (pFVar8->LocalVelocity2D).field0_0x0._s_0.Y;
  dVar1 = (pFVar8->LocalVelocity2D).field0_0x0._s_0.Z;
  pdVar9[0x12] = dVar2;
  pdVar9[0x13] = dVar3;
  pdVar9[0x14] = dVar4;
  pdVar9[0x15] = dVar5;
  pdVar9[0x16] = dVar1;
  if ((local_7f == local_80) && (this->bIsPreBattleState == this->bIsBattleState)) {
    return DoNotInterrupt;
  }
  return InterruptOnDatabaseChange;
}

// GetPoseSearchQueryTrajectory @ 14b8792b0

FTransformTrajectory * __thiscall
UDS_MotionMatchingAnimLayer::GetPoseSearchQueryTrajectory(UDS_MotionMatchingAnimLayer *this)

{
  bool bVar1;
  UDS_CharacterTrajectoryComponent *this_00;
  FTransformTrajectory *pFVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->TrajectoryComponent).WeakPtr);
  if (!bVar1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`UDS_MotionMatchingAnimLayer::GetPoseSearchQueryTrajectory'::__l5::
               _dynamic_atexit_destructor_for__EmptyTrajectory__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    return &EmptyTrajectory;
  }
  this_00 = (UDS_CharacterTrajectoryComponent *)
            FWeakObjectPtr::Get(&(this->TrajectoryComponent).WeakPtr);
  pFVar2 = UDS_CharacterTrajectoryComponent::GetPoseSearchQueryTrajectory(this_00);
  return pFVar2;
}

// IsEnableSteering @ 14b87d960

bool __thiscall UDS_MotionMatchingAnimLayer::IsEnableSteering(UDS_MotionMatchingAnimLayer *this)

{
  return true;
}

// IsLandMoveState @ 14b87da80

bool __thiscall UDS_MotionMatchingAnimLayer::IsLandMoveState(UDS_MotionMatchingAnimLayer *this)

{
  return this->bIsLandMove;
}

// IsMoving @ 14b87dbd0

bool __thiscall UDS_MotionMatchingAnimLayer::IsMoving(UDS_MotionMatchingAnimLayer *this)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  FDS_AnimSharedData *pFVar8;
  FDS_AnimSharedData *pFVar9;
  longlong lVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  double local_148 [40];
  
  pFVar8 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  lVar10 = 2;
  pdVar7 = local_148;
  do {
    pdVar11 = pdVar7;
    pFVar9 = pFVar8;
    dVar2 = (pFVar9->ActorLocation).field0_0x0._s_0.X;
    dVar3 = (pFVar9->ActorLocation).field0_0x0._s_0.Y;
    dVar4 = (pFVar9->ActorLocation).field0_0x0._s_0.Z;
    pFVar8 = (FDS_AnimSharedData *)((pFVar9->LastNonZeroVelocity).field0_0x0.XYZ + 2);
    *pdVar11 = *(double *)pFVar9;
    pdVar11[1] = dVar2;
    dVar2 = (pFVar9->ActorRotation).Pitch;
    dVar5 = (pFVar9->ActorRotation).Yaw;
    pdVar11[2] = dVar3;
    pdVar11[3] = dVar4;
    dVar3 = (pFVar9->ActorRotation).Roll;
    dVar4 = *(double *)&pFVar9->RotationVelocity;
    pdVar11[4] = dVar2;
    pdVar11[5] = dVar5;
    dVar2 = (pFVar9->Velocity).field0_0x0._s_0.X;
    dVar5 = (pFVar9->Velocity).field0_0x0._s_0.Y;
    pdVar11[6] = dVar3;
    pdVar11[7] = dVar4;
    dVar3 = (pFVar9->Velocity).field0_0x0._s_0.Z;
    dVar4 = (pFVar9->VelocityLastFrame).field0_0x0._s_0.X;
    pdVar11[8] = dVar2;
    pdVar11[9] = dVar5;
    dVar2 = (pFVar9->VelocityLastFrame).field0_0x0._s_0.Y;
    dVar5 = (pFVar9->VelocityLastFrame).field0_0x0._s_0.Z;
    pdVar11[10] = dVar3;
    pdVar11[0xb] = dVar4;
    dVar3 = (pFVar9->LastNonZeroVelocity).field0_0x0._s_0.X;
    dVar4 = (pFVar9->LastNonZeroVelocity).field0_0x0._s_0.Y;
    pdVar11[0xc] = dVar2;
    pdVar11[0xd] = dVar5;
    pdVar11[0xe] = dVar3;
    pdVar11[0xf] = dVar4;
    lVar10 = lVar10 + -1;
    pdVar7 = pdVar11 + 0x10;
  } while (lVar10 != 0);
  dVar2 = (pFVar9->VelocityAcceleration).field0_0x0._s_0.X;
  dVar3 = (pFVar9->VelocityAcceleration).field0_0x0._s_0.Y;
  dVar4 = (pFVar9->VelocityAcceleration).field0_0x0._s_0.Z;
  pdVar11[0x10] = *(double *)pFVar8;
  pdVar11[0x11] = dVar2;
  dVar5 = (pFVar9->LocalVelocity2D).field0_0x0._s_0.X;
  dVar6 = (pFVar9->LocalVelocity2D).field0_0x0._s_0.Y;
  dVar2 = (pFVar9->LocalVelocity2D).field0_0x0._s_0.Z;
  pdVar11[0x12] = dVar3;
  pdVar11[0x13] = dVar4;
  pdVar11[0x14] = dVar5;
  pdVar11[0x15] = dVar6;
  pdVar11[0x16] = dVar2;
  if ((char)((ulonglong)local_148[0] >> 0x18) == '\0') {
    uVar12 = SUB84(local_148[8],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar13 = (uint)((ulonglong)local_148[8] >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((((__real_3fb99999a0000000 <= (double)CONCAT44(uVar13,uVar12) &&
           (double)CONCAT44(uVar13,uVar12) != __real_3fb99999a0000000) ||
         (uVar12 = SUB84(local_148[9],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar13 = (uint)((ulonglong)local_148[9] >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3fb99999a0000000 <= (double)CONCAT44(uVar13,uVar12) &&
         (double)CONCAT44(uVar13,uVar12) != __real_3fb99999a0000000)) ||
        (uVar12 = SUB84(local_148[10],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar13 = (uint)((ulonglong)local_148[10] >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3fb99999a0000000 <= (double)CONCAT44(uVar13,uVar12) &&
        (double)CONCAT44(uVar13,uVar12) != __real_3fb99999a0000000)) &&
       (((uVar1 = *(undefined8 *)&(this->FutureVelocity).field0_0x0,
         uVar12 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar13 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3fb99999a0000000 <= (double)CONCAT44(uVar13,uVar12) &&
         (double)CONCAT44(uVar13,uVar12) != __real_3fb99999a0000000 ||
         (uVar1 = *(undefined8 *)((longlong)&(this->FutureVelocity).field0_0x0 + 8),
         uVar12 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar13 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3fb99999a0000000 <= (double)CONCAT44(uVar13,uVar12) &&
         (double)CONCAT44(uVar13,uVar12) != __real_3fb99999a0000000)) ||
        (uVar1 = *(undefined8 *)((longlong)&(this->FutureVelocity).field0_0x0 + 0x10),
        uVar12 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar13 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3fb99999a0000000 <= (double)CONCAT44(uVar13,uVar12) &&
        (double)CONCAT44(uVar13,uVar12) != __real_3fb99999a0000000)))) {
      return true;
    }
  }
  return false;
}

// IsMovingAccelerating @ 14b87dd30

bool __thiscall UDS_MotionMatchingAnimLayer::IsMovingAccelerating(UDS_MotionMatchingAnimLayer *this)

{
  FDS_AnimSharedData *pFVar1;
  
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  return pFVar1->bHasAcceleration;
}

// IsMovingDecelerating @ 14b87dda0

bool __thiscall UDS_MotionMatchingAnimLayer::IsMovingDecelerating(UDS_MotionMatchingAnimLayer *this)

{
  undefined8 uVar1;
  FDS_AnimSharedData *pFVar2;
  
  pFVar2 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  uVar1 = *(undefined8 *)&(pFVar2->Velocity).field0_0x0;
  if (((((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3fb99999a0000000) &&
       (uVar1 = *(undefined8 *)((longlong)&(pFVar2->Velocity).field0_0x0 + 8),
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3fb99999a0000000)) &&
      (uVar1 = *(undefined8 *)((longlong)&(pFVar2->Velocity).field0_0x0 + 0x10),
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3fb99999a0000000)) && (pFVar2->bHasAcceleration == false)) {
    return true;
  }
  return false;
}

// IsPivoting180 @ 14b87de00

bool __thiscall UDS_MotionMatchingAnimLayer::IsPivoting180(UDS_MotionMatchingAnimLayer *this)

{
  return this->bIsPivoting180;
}

// IsPivoting90 @ 14b87de10

bool __thiscall UDS_MotionMatchingAnimLayer::IsPivoting90(UDS_MotionMatchingAnimLayer *this)

{
  return this->bIsPivoting90;
}

// IsPivoting @ 14b87de20

bool __thiscall UDS_MotionMatchingAnimLayer::IsPivoting(UDS_MotionMatchingAnimLayer *this)

{
  if ((this->bIsPivoting90 == false) && (this->bIsPivoting180 == false)) {
    return false;
  }
  return true;
}

// IsStarting @ 14b87e320

bool __thiscall UDS_MotionMatchingAnimLayer::IsStarting(UDS_MotionMatchingAnimLayer *this)

{
  return this->bIsStarting;
}

// IsValidReferencedPtr @ 14b87ec00

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

bool __thiscall UDS_MotionMatchingAnimLayer::IsValidReferencedPtr(UDS_MotionMatchingAnimLayer *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UDS_AnimInstanceBase::IsValidReferencedPtr((UDS_AnimInstanceBase *)this);
  if (bVar2) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x450);
    if (bVar2) {
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x448);
      if (bVar2) {
        bVar2 = FWeakObjectPtr::IsValid(&(this->TrajectoryComponent).WeakPtr);
        if (bVar2) {
          return true;
        }
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7274884785003036767>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_MotionMatchingAnimLayer.cpp"
                           ,0x5f,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

// MarkMotionMatchingChooserDirty @ 14b87fb30

void __thiscall
UDS_MotionMatchingAnimLayer::MarkMotionMatchingChooserDirty
          (UDS_MotionMatchingAnimLayer *this,bool param_1)

{
  if (param_1) {
    this->bShouldUpdateChooser = true;
    this->ChooserUpdateReaminTime = 0.33;
  }
  return;
}

// OnBindAnimationEvents @ 14b8814f0

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

void __thiscall
UDS_MotionMatchingAnimLayer::OnBindAnimationEvents(UDS_MotionMatchingAnimLayer *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [2];
  
  UDS_AnimInstanceBase::OnBindAnimationEvents((UDS_AnimInstanceBase *)this);
  UDS_CharInfoData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x10,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WeaponType),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_MotionMatchingAnimLayer>
              (&pUVar2[7].field_0x10,(UDS_MotionMatchingAnimLayer *)(local_res8 + 1),
               (pmf_034ee98d)this);
  }
  return;
}

// OnChangedCharState @ 14b886190

void __thiscall
UDS_MotionMatchingAnimLayer::OnChangedCharState
          (UDS_MotionMatchingAnimLayer *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,FDS_ChangedCharStateInfo *param_2
          )

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  UDS_CharStateData *pUVar4;
  double dVar5;
  FWeakObjectPtr local_res10;
  EDS_CharState local_res20;
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
    this->bIsPreBattleState = this->bIsBattleState;
    pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res20 = Battle;
    bVar1 = UDS_CharStateData::HasCharState(pUVar4,&local_res20);
    this->bIsBattleState = bVar1;
    pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res20._0_4_ = ToggleSkill|Shield;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar4,(EDS_CharDetailState *)&local_res20);
    pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res20 = CONCAT44(local_res20._4_4_,0x24);
    bVar2 = UDS_CharStateData::HasCharDetailState(pUVar4,(EDS_CharDetailState *)&local_res20);
    if ((bVar1) || (bVar1 = false, bVar2)) {
      bVar1 = true;
    }
    bVar2 = this->bIsLandMove;
    if (((this->bIsInAir == true) && (bVar1 == false)) &&
       (cVar3 = (**(code **)(*(longlong *)this + 0x3f0))(this), cVar3 == '\x01')) {
      this->bIsLandMove = true;
      dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
      this->LandMoveEndTime = dVar5 + __real_3ff0000000000000;
    }
    this->bIsInAir = bVar1;
    if ((this->bIsBattleState != this->bIsPreBattleState) || (this->bIsLandMove != bVar2)) {
      this->bShouldUpdateChooser = true;
      this->ChooserUpdateReaminTime = 0.33;
    }
  }
  return;
}

// OnChangedWeaponType @ 14b8868c0

void __thiscall
UDS_MotionMatchingAnimLayer::OnChangedWeaponType
          (UDS_MotionMatchingAnimLayer *this,EDS_WeaponType param_1)

{
  this->bShouldUpdateChooser = true;
  this->ChooserUpdateReaminTime = 0.33;
  this->CurrentWeaponType = param_1;
  return;
}

// OnClearVariables @ 14b887ad0

void __thiscall UDS_MotionMatchingAnimLayer::OnClearVariables(UDS_MotionMatchingAnimLayer *this)

{
  FWeakObjectPtr FStackX_8;
  undefined8 uStackX_10;
  
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  *(int *)&this->field_0x450 = FStackX_8.ObjectIndex;
  *(int *)&this->field_0x454 = FStackX_8.ObjectSerialNumber;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  *(int *)&this->field_0x448 = FStackX_8.ObjectIndex;
  *(int *)&this->field_0x44c = FStackX_8.ObjectSerialNumber;
  return;
}

// OnInitVariables @ 14b889e70

void __thiscall UDS_MotionMatchingAnimLayer::OnInitVariables(UDS_MotionMatchingAnimLayer *this)

{
  longlong *plVar1;
  FWeakObjectPtr *pFVar2;
  undefined1 local_res8 [32];
  
  UDS_AnimLayerBase::OnInitVariables((UDS_AnimLayerBase *)this);
  plVar1 = *(longlong **)&this->field_0x430;
  if (plVar1 != (longlong *)0x0) {
    pFVar2 = (FWeakObjectPtr *)(**(code **)(*plVar1 + 0x1c0))(plVar1,local_res8);
    (this->TrajectoryComponent).WeakPtr = *pFVar2;
    this->bShouldUpdateChooser = true;
    this->ChooserUpdateReaminTime = 0.33;
  }
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88b360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDS_MotionMatchingAnimLayer::OnNativeThreadSafeUpdateAnimation
          (UDS_MotionMatchingAnimLayer *this,float param_1)

{
  FName *pFVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  UDS_CharacterTrajectoryComponent *pUVar14;
  FTransformTrajectory *pFVar15;
  FDS_AnimSharedData *pFVar16;
  TRotator<double> *pTVar17;
  int iVar18;
  FName *pFVar19;
  float *pfVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  FTransformTrajectorySample local_118;
  FTransformTrajectorySample local_d8;
  TRotator<double> local_98;
  TRotator<double> local_80;
  TRotator<double> local_68 [2];
  
  cVar10 = (**(code **)(*(longlong *)this + 0x3f0))();
  local_118.Facing.X = UE::Math::TQuat<double>::Identity.X;
  local_118.Facing.Y = UE::Math::TQuat<double>::Identity.Y;
  local_118.TimeInSeconds = 0.0;
  local_118.Facing.Z = UE::Math::TQuat<double>::Identity.Z;
  local_118.Facing.W = UE::Math::TQuat<double>::Identity.W;
  local_118.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_118.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_118.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pUVar14 = (UDS_CharacterTrajectoryComponent *)
            FWeakObjectPtr::Get(&(this->TrajectoryComponent).WeakPtr);
  pFVar15 = UDS_CharacterTrajectoryComponent::GetPoseSearchQueryTrajectory(pUVar14);
  UPoseSearchTrajectoryLibrary::GetTransformTrajectorySampleAtTime
            (pFVar15,__real_3f000000,&local_118,false);
  local_d8.Facing.X = UE::Math::TQuat<double>::Identity.X;
  local_d8.Facing.Y = UE::Math::TQuat<double>::Identity.Y;
  local_d8.TimeInSeconds = 0.0;
  local_d8.Facing.Z = UE::Math::TQuat<double>::Identity.Z;
  local_d8.Facing.W = UE::Math::TQuat<double>::Identity.W;
  local_d8.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_d8.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_d8.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pUVar14 = (UDS_CharacterTrajectoryComponent *)
            FWeakObjectPtr::Get(&(this->TrajectoryComponent).WeakPtr);
  pFVar15 = UDS_CharacterTrajectoryComponent::GetPoseSearchQueryTrajectory(pUVar14);
  UPoseSearchTrajectoryLibrary::GetTransformTrajectorySampleAtTime
            (pFVar15,__real_3ecccccd,&local_d8,false);
  dVar5 = (local_118.Position.field0_0x0._s_0.Y - local_d8.Position.field0_0x0._s_0.Y) *
          _UNK_15104e4d8;
  dVar6 = (local_118.Position.field0_0x0._s_0.Z - local_d8.Position.field0_0x0._s_0.Z) *
          ___xmm_40240000000000004024000000000000;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = (local_118.Position.field0_0x0._s_0.X - local_d8.Position.field0_0x0._s_0.X) *
                 ___xmm_40240000000000004024000000000000;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&(this->FutureVelocity).field0_0x0 = auVar4;
  (this->FutureVelocity).field0_0x0._s_0.Z = dVar6;
  cVar11 = (**(code **)(*(longlong *)this + 0x3f0))(this);
  if (cVar10 != cVar11) {
    this->bShouldUpdateChooser = true;
    this->ChooserUpdateReaminTime = 0.33;
  }
  pFVar16 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  bVar21 = true;
  if ((this->bIsPivoting90 == false) && (this->bIsPivoting180 == false)) {
    iVar18 = 0;
  }
  else {
    iVar18 = 1;
  }
  cVar10 = (**(code **)(*(longlong *)this + 0x3f0))(this);
  if (cVar10 == '\x01') {
    local_158._s_0.X = (this->FutureVelocity).field0_0x0._s_0.X;
    local_158._s_0.Y = (this->FutureVelocity).field0_0x0._s_0.Y;
    local_158._s_0.Z = (this->FutureVelocity).field0_0x0._s_0.Z;
    UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_158._s_0,&local_80);
    local_138._s_0.X = (pFVar16->Velocity).field0_0x0._s_0.X;
    local_138._s_0.Y = (pFVar16->Velocity).field0_0x0._s_0.Y;
    local_138._s_0.Z = (pFVar16->Velocity).field0_0x0._s_0.Z;
    UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_138._s_0,&local_98);
    local_138._s_0.X = local_98.Pitch;
    local_138._s_0.Y = local_98.Yaw;
    local_138._s_0.Z = local_98.Roll;
    local_158._s_0.X = local_80.Pitch;
    local_158._s_0.Y = local_80.Yaw;
    local_158._s_0.Z = local_80.Roll;
    pTVar17 = UKismetMathLibrary::NormalizedDeltaRotator
                        (local_68,(TRotator<double> *)&local_158._s_0,
                         (TRotator<double> *)&local_138._s_0);
    fVar24 = (float)(double)CONCAT44((uint)((ulonglong)pTVar17->Yaw >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(pTVar17->Yaw,0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (fVar24 < __real_42700000) {
      if (0.0 <= this->PivotTimeRemaining) {
        cVar10 = this->bIsPivoting90;
        this->PivotTimeRemaining = this->PivotTimeRemaining - param_1;
      }
      else {
        this->bIsPivoting90 = false;
        this->bIsPivoting180 = false;
        cVar10 = '\0';
      }
    }
    else {
      cVar10 = fVar24 < __real_43070000;
      this->PivotTimeRemaining = 1.0;
      this->bIsPivoting90 = (bool)cVar10;
      this->bIsPivoting180 = !(bool)cVar10;
    }
    if (cVar10 == '\0') goto LAB_14b88b7c7;
  }
  else {
    this->bIsPivoting90 = false;
    this->bIsPivoting180 = false;
LAB_14b88b7c7:
    if (this->bIsPivoting180 == false) {
      iVar13 = 0;
      goto LAB_14b88b5f3;
    }
  }
  iVar13 = 1;
LAB_14b88b5f3:
  if (iVar13 != iVar18) {
    this->bShouldUpdateChooser = true;
    this->ChooserUpdateReaminTime = 0.33;
  }
  bVar3 = this->bIsLandMove;
  if (bVar3 == true) {
    pFVar16 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
    dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
    if ((this->LandMoveEndTime <= dVar5 && dVar5 != this->LandMoveEndTime) ||
       ((((uVar2 = *(undefined8 *)&(pFVar16->Velocity).field0_0x0,
          uVar22 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar23 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar23,uVar22) < __real_3fb99999a0000000 ||
          (double)CONCAT44(uVar23,uVar22) == __real_3fb99999a0000000 &&
          (uVar2 = *(undefined8 *)((longlong)&(pFVar16->Velocity).field0_0x0 + 8),
          uVar22 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar23 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar23,uVar22) < __real_3fb99999a0000000 ||
          (double)CONCAT44(uVar23,uVar22) == __real_3fb99999a0000000)) &&
         (uVar2 = *(undefined8 *)((longlong)&(pFVar16->Velocity).field0_0x0 + 0x10),
         uVar22 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar23 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar23,uVar22) < __real_3fb99999a0000000 ||
         (double)CONCAT44(uVar23,uVar22) == __real_3fb99999a0000000)) &&
        (pFVar16->bHasAcceleration == false)))) {
      this->bIsLandMove = false;
      this->LandMoveEndTime = 0.0;
    }
  }
  bVar9 = true;
  if (this->bIsLandMove != bVar3) {
    this->bShouldUpdateChooser = true;
    this->ChooserUpdateReaminTime = 0.33;
  }
  pFVar16 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  bVar3 = this->bIsStarting;
  cVar10 = (**(code **)(*(longlong *)this + 0x3f0))(this);
  if (cVar10 == '\x01') {
    dVar5 = (pFVar16->Velocity).field0_0x0._s_0.X;
    dVar6 = (pFVar16->Velocity).field0_0x0._s_0.Y;
    dVar7 = (this->FutureVelocity).field0_0x0._s_0.X;
    dVar8 = (this->FutureVelocity).field0_0x0._s_0.Y;
    dVar5 = SQRT(dVar5 * dVar5 + dVar6 * dVar6) + __real_4059000000000000;
    if ((this->CurrentSelectedDatabase != (UPoseSearchDatabase *)0x0) &&
       (((uint)this->CurrentSelectedDatabase->_padding_ >> 0x1e & 1) == 0)) {
      pFVar19 = (FName *)(this->CurrentSelectedDatabase->Tags).AllocatorInstance.Data;
      pFVar1 = pFVar19 + (this->CurrentSelectedDatabase->Tags).ArrayNum;
      for (; pFVar19 != pFVar1; pFVar19 = pFVar19 + 1) {
        bVar12 = ::FName::Equals(*pFVar19,L"Pivots");
        if (bVar12) goto LAB_14b88b79e;
      }
    }
    bVar9 = false;
LAB_14b88b79e:
    if ((SQRT(dVar7 * dVar7 + dVar8 * dVar8) < dVar5) || (bVar9)) {
      bVar21 = false;
    }
  }
  else {
    bVar21 = pFVar16->bIsActiveInput == true;
  }
  pfVar20 = &this->ChooserUpdateReaminTime;
  this->bIsStarting = bVar21;
  if (bVar21 != bVar3) {
    this->bShouldUpdateChooser = true;
    *pfVar20 = 0.33;
  }
  if (0.0 < *pfVar20) {
    *pfVar20 = *pfVar20 - param_1;
  }
  return;
}

// OnPostUpdateMotionMatching @ 14b88e8e0

void __thiscall
UDS_MotionMatchingAnimLayer::OnPostUpdateMotionMatching
          (UDS_MotionMatchingAnimLayer *this,FAnimUpdateContext *param_1,FAnimNodeReference *param_2
          )

{
  EAnimNodeReferenceConversionResult local_res8 [8];
  bool local_res20 [8];
  TObjectPtr<UObject>_u_0 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  double local_80;
  double dStack_78;
  double local_70;
  UPoseSearchDatabase *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  FName local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  FMotionMatchingAnimNodeReference local_18;
  
  UMotionMatchingAnimNodeLibrary::ConvertToMotionMatchingNode(&local_18,param_2,local_res8);
  local_88 = 0x3f800000;
  local_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_98.DebugPtr = (UObject *)0x0;
  local_90 = 0;
  local_8c = 0;
  local_84 = 0;
  local_68 = (UPoseSearchDatabase *)0x0;
  local_5c = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_60 = 0x7f7fffff;
  local_58 = UE::PoseSearch::DefaultRole;
  UMotionMatchingAnimNodeLibrary::GetMotionMatchingSearchResult
            (&local_18,(FPoseSearchBlueprintResult *)&local_98.ObjectPtr,local_res20);
  this->CurrentSelectedDatabase = local_68;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// OnUnBindAnimationEvents @ 14b894400

void __thiscall
UDS_MotionMatchingAnimLayer::OnUnBindAnimationEvents(UDS_MotionMatchingAnimLayer *this)

{
  char cVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8 [4];
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar1 == '\x01') {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x20,this);
  }
  UDS_CharInfoData::GetData((ulong64)local_res8);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x10,this);
  }
  return;
}

// OnUpdateDatabaseSearch @ 14b894e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_MotionMatchingAnimLayer::OnUpdateDatabaseSearch
          (UDS_MotionMatchingAnimLayer *this,FAnimUpdateContext *param_1,FAnimNodeReference *param_2
          )

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  EPoseSearchInterruptMode EVar6;
  int iVar7;
  TObjectPtr<UChooserTable> *pTVar8;
  UClass *pUVar9;
  UChooserTable *pUVar10;
  char cVar11;
  ForAnyElementType FVar12;
  undefined1 auStackY_178 [32];
  undefined1 local_128 [8];
  TArray<UPoseSearchDatabase_*,TSizedDefaultAllocator<32>_> local_120;
  EAnimNodeReferenceConversionResult local_110 [8];
  longlong local_108;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_100;
  UClass *local_f0;
  FInstancedStruct local_e8;
  FMotionMatchingAnimNodeReference local_d8;
  FChooserEvaluationContext local_c8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((this->bShouldUpdateChooser == false) && (this->ChooserUpdateReaminTime <= 0.0)) {
    return;
  }
  this->bShouldUpdateChooser = false;
  cVar11 = UE::GC::GIsIncrementalReachabilityPending;
  if (this->bIsBattleState == true) {
    pTVar8 = TMapBase<enum_EDS_WeaponType,TObjectPtr<UChooserTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,TObjectPtr<UChooserTable>,0>_>
             ::Find(&this->MotionMatchingChooserMap,this->CurrentWeaponType);
    pUVar10 = (pTVar8->field0_0x0).DebugPtr;
    if ((bool)cVar11 == false) {
      if (pUVar10 != (UChooserTable *)0x0) goto LAB_14b894ed7;
      goto LAB_14b8950cd;
    }
    if (pUVar10 == (UChooserTable *)0x0) goto LAB_14b8950cd;
    UE::GC::MarkAsReachable((UObject *)pUVar10);
    cVar11 = UE::GC::GIsIncrementalReachabilityPending;
LAB_14b894ed7:
    if (cVar11 != '\0') goto LAB_14b894edc;
LAB_14b894ee4:
    local_c8.Params.ArrayMax = 4;
    local_c8.DebuggingInfo.CurrentChooser = (UObject *)0x0;
    local_c8.DebuggingInfo.bCurrentDebugTarget = false;
    local_c8.Params.AllocatorInstance.SecondaryData = (ForElementType<FStructView>)0x0;
    local_c8.Params.ArrayNum = 0;
    local_c8.ObjectParams.ArrayNum = 0;
    local_c8.ObjectParams.ArrayMax = 4;
    FChooserEvaluationContext::AddObjectParam(&local_c8,(UObject *)this);
    UChooserFunctionLibrary::MakeEvaluateChooser(&local_e8,pUVar10);
    local_f0 = Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f0 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_f0);
    }
    UChooserFunctionLibrary::EvaluateObjectChooserBaseMulti
              (&local_100,&local_c8,&local_e8,(TSubclassOf<UObject>)&local_f0,false);
    local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.ArrayNum = 0;
    local_120.ArrayMax = 0;
    if (local_100.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_100.ArrayNum);
    }
    if (0 < local_100.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_100.ArrayNum,&local_120.AllocatorInstance,0,&local_120.ArrayMax);
    }
    iVar4 = local_100.ArrayNum;
    pFVar1 = local_100.AllocatorInstance.Data + (longlong)local_100.ArrayNum * 8;
    FVar12.Data = local_100.AllocatorInstance.Data;
    while( true ) {
      if (local_100.ArrayNum != iVar4) {
        local_128[0] = 0;
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_128);
      }
      if (FVar12.Data == pFVar1) break;
      lVar2 = *(longlong *)FVar12.Data;
      if (lVar2 == 0) {
LAB_14b895122:
        local_108 = 0;
        FVar12.Data = FVar12.Data + 8;
      }
      else {
        pUVar9 = Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
        iVar7 = (int)pUVar9->_padding_;
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar7) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar9->_padding_)) goto LAB_14b895122;
        local_108 = lVar2;
        if ((local_120.AllocatorInstance.Data <= (FScriptContainerElement *)&local_108) &&
           (((FScriptContainerElement *)&local_108 <
             local_120.AllocatorInstance.Data + (longlong)local_120.ArrayMax * 8 &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = local_120.ArrayNum;
        if (local_120.ArrayNum == local_120.ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_120.AllocatorInstance,&local_120.ArrayMax);
        }
        FVar12.Data = FVar12.Data + 8;
        local_120.ArrayNum = iVar7 + 1;
        *(longlong *)(local_120.AllocatorInstance.Data + (longlong)iVar7 * 8) = local_108;
      }
    }
    UMotionMatchingAnimNodeLibrary::ConvertToMotionMatchingNode(&local_d8,param_2,local_110);
    if (local_120.ArrayNum != 0) {
      EVar6 = (**(code **)(*(longlong *)this + 0x400))(this);
      UMotionMatchingAnimNodeLibrary::SetDatabasesToSearch(&local_d8,&local_120,EVar6);
    }
    if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
    if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
    FInstancedStruct::Reset(&local_e8);
    if (local_c8.Params.AllocatorInstance.SecondaryData != (ForElementType<FStructView>)0x0) {
      FMemory::Free((void *)local_c8.Params.AllocatorInstance.SecondaryData);
    }
  }
  else {
LAB_14b8950cd:
    pUVar10 = (this->DefaultMotionMatchingChooser).field0_0x0.DebugPtr;
    if ((bool)cVar11 == false) {
      if (pUVar10 != (UChooserTable *)0x0) goto LAB_14b894ee4;
    }
    else if (pUVar10 != (UChooserTable *)0x0) {
LAB_14b894edc:
      UE::GC::MarkAsReachable((UObject *)pUVar10);
      goto LAB_14b894ee4;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7274884785003037008>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_MotionMatchingAnimLayer.cpp"
                       ,0x150,"false");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ShouldUpdateMotionMatchingChooser @ 14b899be0

bool __thiscall
UDS_MotionMatchingAnimLayer::ShouldUpdateMotionMatchingChooser(UDS_MotionMatchingAnimLayer *this)

{
  if ((this->bShouldUpdateChooser == false) && (this->ChooserUpdateReaminTime <= 0.0)) {
    return false;
  }
  return true;
}

// UpdateFutureVelocity @ 14b8a2250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDS_MotionMatchingAnimLayer::UpdateFutureVelocity(UDS_MotionMatchingAnimLayer *this)

{
  undefined1 auVar1 [16];
  double dVar2;
  char cVar3;
  char cVar4;
  UDS_CharacterTrajectoryComponent *pUVar5;
  FTransformTrajectory *pFVar6;
  double dVar7;
  FTransformTrajectorySample local_88;
  FTransformTrajectorySample local_48;
  
  cVar3 = (**(code **)(*(longlong *)this + 0x3f0))();
  local_88.Facing.X = UE::Math::TQuat<double>::Identity.X;
  local_88.Facing.Y = UE::Math::TQuat<double>::Identity.Y;
  local_88.TimeInSeconds = 0.0;
  local_88.Facing.Z = UE::Math::TQuat<double>::Identity.Z;
  local_88.Facing.W = UE::Math::TQuat<double>::Identity.W;
  local_88.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_88.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_88.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pUVar5 = (UDS_CharacterTrajectoryComponent *)
           FWeakObjectPtr::Get(&(this->TrajectoryComponent).WeakPtr);
  pFVar6 = UDS_CharacterTrajectoryComponent::GetPoseSearchQueryTrajectory(pUVar5);
  UPoseSearchTrajectoryLibrary::GetTransformTrajectorySampleAtTime
            (pFVar6,__real_3f000000,&local_88,false);
  local_48.Facing.X = UE::Math::TQuat<double>::Identity.X;
  local_48.Facing.Y = UE::Math::TQuat<double>::Identity.Y;
  local_48.TimeInSeconds = 0.0;
  local_48.Facing.Z = UE::Math::TQuat<double>::Identity.Z;
  local_48.Facing.W = UE::Math::TQuat<double>::Identity.W;
  local_48.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_48.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pUVar5 = (UDS_CharacterTrajectoryComponent *)
           FWeakObjectPtr::Get(&(this->TrajectoryComponent).WeakPtr);
  pFVar6 = UDS_CharacterTrajectoryComponent::GetPoseSearchQueryTrajectory(pUVar5);
  UPoseSearchTrajectoryLibrary::GetTransformTrajectorySampleAtTime
            (pFVar6,__real_3ecccccd,&local_48,false);
  dVar2 = (local_88.Position.field0_0x0._s_0.Y - local_48.Position.field0_0x0._s_0.Y) *
          _UNK_15104e4d8;
  dVar7 = (local_88.Position.field0_0x0._s_0.Z - local_48.Position.field0_0x0._s_0.Z) *
          ___xmm_40240000000000004024000000000000;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = (local_88.Position.field0_0x0._s_0.X - local_48.Position.field0_0x0._s_0.X) *
                 ___xmm_40240000000000004024000000000000;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&(this->FutureVelocity).field0_0x0 = auVar1;
  (this->FutureVelocity).field0_0x0._s_0.Z = dVar7;
  cVar4 = (**(code **)(*(longlong *)this + 0x3f0))(this);
  if (cVar3 != cVar4) {
    this->bShouldUpdateChooser = true;
    this->ChooserUpdateReaminTime = 0.33;
  }
  return;
}

// UpdateLandMove @ 14b8a2460

void __thiscall
UDS_MotionMatchingAnimLayer::UpdateLandMove(UDS_MotionMatchingAnimLayer *this,float param_1)

{
  double dVar1;
  undefined8 uVar2;
  bool bVar3;
  FDS_AnimSharedData *pFVar4;
  double dVar5;
  
  bVar3 = this->bIsLandMove;
  if (bVar3 == true) {
    pFVar4 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
    dVar1 = this->LandMoveEndTime;
    dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
    if ((dVar1 < dVar5) ||
       ((((uVar2 = *(undefined8 *)&(pFVar4->Velocity).field0_0x0,
          (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3fb99999a0000000 &&
          (uVar2 = *(undefined8 *)((longlong)&(pFVar4->Velocity).field0_0x0 + 8),
          (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3fb99999a0000000)) &&
         (uVar2 = *(undefined8 *)((longlong)&(pFVar4->Velocity).field0_0x0 + 0x10),
         (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3fb99999a0000000)) && (pFVar4->bHasAcceleration == false)))) {
      this->bIsLandMove = false;
      this->LandMoveEndTime = 0.0;
    }
  }
  if (this->bIsLandMove != bVar3) {
    this->bShouldUpdateChooser = true;
    this->ChooserUpdateReaminTime = 0.33;
  }
  return;
}

// UpdatePivoting @ 14b8a3420

void __thiscall
UDS_MotionMatchingAnimLayer::UpdatePivoting(UDS_MotionMatchingAnimLayer *this,float param_1)

{
  char cVar1;
  FDS_AnimSharedData *pFVar2;
  TRotator<double> *pTVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TRotator<double> local_68;
  TRotator<double> local_50;
  TRotator<double> local_38 [2];
  
  pFVar2 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  iVar5 = 0;
  if ((this->bIsPivoting90 != false) || (iVar4 = 0, this->bIsPivoting180 != false)) {
    iVar4 = 1;
  }
  cVar1 = (**(code **)(*(longlong *)this + 0x3f0))(this);
  if (cVar1 == '\x01') {
    local_a8._s_0.X = (this->FutureVelocity).field0_0x0._s_0.X;
    local_a8._s_0.Y = (this->FutureVelocity).field0_0x0._s_0.Y;
    local_a8._s_0.Z = (this->FutureVelocity).field0_0x0._s_0.Z;
    UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_a8._s_0,&local_50);
    local_88._s_0.X = (pFVar2->Velocity).field0_0x0._s_0.X;
    local_88._s_0.Y = (pFVar2->Velocity).field0_0x0._s_0.Y;
    local_88._s_0.Z = (pFVar2->Velocity).field0_0x0._s_0.Z;
    UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_88._s_0,&local_68);
    local_88._s_0.X = local_68.Pitch;
    local_88._s_0.Y = local_68.Yaw;
    local_88._s_0.Z = local_68.Roll;
    local_a8._s_0.X = local_50.Pitch;
    local_a8._s_0.Y = local_50.Yaw;
    local_a8._s_0.Z = local_50.Roll;
    pTVar3 = UKismetMathLibrary::NormalizedDeltaRotator
                       (local_38,(TRotator<double> *)&local_a8._s_0,
                        (TRotator<double> *)&local_88._s_0);
    fVar6 = (float)(double)CONCAT44((uint)((ulonglong)pTVar3->Yaw >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(pTVar3->Yaw,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (fVar6 < __real_42700000) {
      if (0.0 <= this->PivotTimeRemaining) {
        cVar1 = this->bIsPivoting90;
        this->PivotTimeRemaining = this->PivotTimeRemaining - param_1;
      }
      else {
        this->bIsPivoting90 = false;
        this->bIsPivoting180 = false;
        cVar1 = '\0';
      }
    }
    else {
      cVar1 = fVar6 < __real_43070000;
      this->PivotTimeRemaining = 1.0;
      this->bIsPivoting90 = (bool)cVar1;
      this->bIsPivoting180 = !(bool)cVar1;
    }
    if (cVar1 == '\0') goto LAB_14b8a3585;
  }
  else {
    this->bIsPivoting90 = false;
    this->bIsPivoting180 = false;
LAB_14b8a3585:
    if (this->bIsPivoting180 == false) goto LAB_14b8a3593;
  }
  iVar5 = 1;
LAB_14b8a3593:
  if (iVar5 != iVar4) {
    this->bShouldUpdateChooser = true;
    this->ChooserUpdateReaminTime = 0.33;
  }
  return;
}

// UpdateStarting @ 14b8a3750

void __thiscall UDS_MotionMatchingAnimLayer::UpdateStarting(UDS_MotionMatchingAnimLayer *this)

{
  FName *pFVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  bool bVar7;
  FDS_AnimSharedData *pFVar8;
  FName *pFVar9;
  double dVar10;
  
  pFVar8 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  bVar2 = this->bIsStarting;
  cVar6 = (**(code **)(*(longlong *)this + 0x3f0))();
  if (cVar6 == '\x01') {
    dVar3 = (this->FutureVelocity).field0_0x0._s_0.X;
    dVar4 = (this->FutureVelocity).field0_0x0._s_0.Y;
    dVar10 = (pFVar8->Velocity).field0_0x0._s_0.X;
    dVar5 = (pFVar8->Velocity).field0_0x0._s_0.Y;
    dVar10 = SQRT(dVar10 * dVar10 + dVar5 * dVar5) + __real_4059000000000000;
    if ((this->CurrentSelectedDatabase != (UPoseSearchDatabase *)0x0) &&
       (((uint)this->CurrentSelectedDatabase->_padding_ >> 0x1e & 1) == 0)) {
      pFVar9 = (FName *)(this->CurrentSelectedDatabase->Tags).AllocatorInstance.Data;
      pFVar1 = pFVar9 + (this->CurrentSelectedDatabase->Tags).ArrayNum;
      for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 1) {
        bVar7 = ::FName::Equals(*pFVar9,L"Pivots");
        if (bVar7) {
          bVar7 = true;
          goto LAB_14b8a382e;
        }
      }
    }
    bVar7 = false;
LAB_14b8a382e:
    if ((SQRT(dVar4 * dVar4 + dVar3 * dVar3) < dVar10) || (bVar7)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
  }
  else {
    bVar7 = pFVar8->bIsActiveInput == true;
  }
  this->bIsStarting = bVar7;
  if (bVar7 != bVar2) {
    this->bShouldUpdateChooser = true;
    this->ChooserUpdateReaminTime = 0.33;
  }
  return;
}

