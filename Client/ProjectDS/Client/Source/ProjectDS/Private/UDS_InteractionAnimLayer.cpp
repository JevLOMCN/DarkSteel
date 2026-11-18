// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 36

// StaticClass @ 14b4bd140

UClass * __cdecl UDS_InteractionAnimLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAnimLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAnimLayer",
               &Z_Registration_Info_UClass_UDS_InteractionAnimLayer.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAnimLayer,0x470,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InteractionAnimLayer>,
               InternalVTableHelperCtorCaller<UDS_InteractionAnimLayer>,local_res8,
               UDS_AnimLayerBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAnimLayer.InnerSingleton;
}

// UDS_InteractionAnimLayer @ 14b4c1e10

UDS_InteractionAnimLayer * __thiscall
UDS_InteractionAnimLayer::UDS_InteractionAnimLayer
          (UDS_InteractionAnimLayer *this,FVTableHelper *param_1)

{
  UDS_AnimLayerBase::UDS_AnimLayerBase((UDS_AnimLayerBase *)this,param_1);
  this->TamingShapeType = Max;
  this->_padding_ = (longlong)&___7UDS_InteractionAnimLayer__6B_;
  this->EatingStartTime = 0.0;
  this->bEnableActionHandlingControlRig = false;
  this->bUseChair = false;
  this->InteractionState = None;
  this->InteractionEndAnimState = None;
  this->TamingBeginIndex = 0;
  return this;
}

// ~UDS_InteractionAnimLayer @ 14b4c25b0

void __thiscall UDS_InteractionAnimLayer::~UDS_InteractionAnimLayer(UDS_InteractionAnimLayer *this)

{
  this->_padding_ = (longlong)&___7UDS_InteractionAnimLayer__6B_;
  UDS_AnimLayerBase::~UDS_AnimLayerBase((UDS_AnimLayerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c5320

UClass * __cdecl UDS_InteractionAnimLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAnimLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAnimLayer",
               &Z_Registration_Info_UClass_UDS_InteractionAnimLayer.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAnimLayer,0x470,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InteractionAnimLayer>,
               InternalVTableHelperCtorCaller<UDS_InteractionAnimLayer>,local_res8,
               UDS_AnimLayerBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAnimLayer.InnerSingleton;
}

// ShouldChangeCharStateEvent @ 14b4c53e0

bool __thiscall UDS_InteractionAnimLayer::ShouldChangeCharStateEvent(UDS_InteractionAnimLayer *this)

{
  return true;
}

// StaticRegisterNativesUDS_InteractionAnimLayer @ 14b4c5740

void __cdecl UDS_InteractionAnimLayer::StaticRegisterNativesUDS_InteractionAnimLayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x11;
  local_18.DataPtr = Z_Construct_UClass_UDS_InteractionAnimLayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDirectionAngleFromVelocity @ 14b4c7510

void __cdecl
UDS_InteractionAnimLayer::execGetDirectionAngleFromVelocity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_AnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)param_1);
  *(float *)param_3 = pFVar1->DirectionAngleFromVelocity;
  return;
}

// execGetInteractionEndAnimState @ 14b4c7550

void __cdecl
UDS_InteractionAnimLayer::execGetInteractionEndAnimState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1c].field_0x3;
  return;
}

// execGetInteractionState @ 14b4c7580

void __cdecl
UDS_InteractionAnimLayer::execGetInteractionState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1c].field_0x2;
  return;
}

// execGetMoveSpeed @ 14b4c75e0

void __cdecl
UDS_InteractionAnimLayer::execGetMoveSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_AnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)param_1);
  *(float *)param_3 = pFVar1->MoveSpeed;
  return;
}

// execGetMoveSpeedRatio @ 14b4c7620

void __cdecl
UDS_InteractionAnimLayer::execGetMoveSpeedRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_AnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)param_1);
  *(float *)param_3 = pFVar1->MoveSpeedRatio;
  return;
}

// execGetRotationVelocity @ 14b4c7660

void __cdecl
UDS_InteractionAnimLayer::execGetRotationVelocity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_AnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)param_1);
  *(float *)param_3 = pFVar1->RotationVelocity;
  return;
}

// execGetTamingBeginIndex @ 14b4c76a0

void __cdecl
UDS_InteractionAnimLayer::execGetTamingBeginIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x1c].field_0x8;
  return;
}

// execGetTamingShapeType @ 14b4c76d0

void __cdecl
UDS_InteractionAnimLayer::execGetTamingShapeType(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1c].field_0x4;
  return;
}

// execHasAcceleration @ 14b4c7700

void __cdecl
UDS_InteractionAnimLayer::execHasAcceleration(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_AnimSharedData *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)param_1);
  *(bool *)param_3 = pFVar1->bHasAcceleration;
  return;
}

// execIsEnableActionHandlingControlRig @ 14b4c7740

void __cdecl
UDS_InteractionAnimLayer::execIsEnableActionHandlingControlRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x1c);
  return;
}

// execIsInEatingState @ 14b4c7770

void __cdecl
UDS_InteractionAnimLayer::execIsInEatingState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsInEatingState((UDS_InteractionAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsInteractingWithChair @ 14b4c77b0

void __cdecl
UDS_InteractionAnimLayer::execIsInteractingWithChair(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1c].field_0x1;
  return;
}

// execIsInteractionState @ 14b4c77e0

void __cdecl
UDS_InteractionAnimLayer::execIsInteractionState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x1c].field_0x2 != '\0';
  return;
}

// execOnBlendOut_LiftUp_Finish @ 14b4c7810

void __cdecl
UDS_InteractionAnimLayer::execOnBlendOut_LiftUp_Finish
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
  OnBlendOut_LiftUp_Finish((UDS_InteractionAnimLayer *)param_1,pFVar5,pFVar6);
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

// execOnBlendOut_LiftUp_PreThrow_Begin @ 14b4c7940

void __cdecl
UDS_InteractionAnimLayer::execOnBlendOut_LiftUp_PreThrow_Begin
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
  OnBlendOut_LiftUp_PreThrow_Begin((UDS_InteractionAnimLayer *)param_1,pFVar5,pFVar6);
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

// execOnBlendOut_LiftUp_PreThrow_End @ 14b4c7a70

void __cdecl
UDS_InteractionAnimLayer::execOnBlendOut_LiftUp_PreThrow_End
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
  OnBlendOut_LiftUp_PreThrow_End((UDS_InteractionAnimLayer *)param_1,pFVar5,pFVar6);
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

// execOnBlendOut_LiftUp_Start @ 14b4c7ba0

void __cdecl
UDS_InteractionAnimLayer::execOnBlendOut_LiftUp_Start
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
  OnBlendOut_LiftUp_Start((UDS_InteractionAnimLayer *)param_1,pFVar5,pFVar6);
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

// UDS_InteractionAnimLayer @ 14b864d80

UDS_InteractionAnimLayer * __thiscall
UDS_InteractionAnimLayer::UDS_InteractionAnimLayer
          (UDS_InteractionAnimLayer *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->TamingShapeType = Max;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_InteractionAnimLayer__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->EatingStartTime = 0.0;
  this->bEnableActionHandlingControlRig = false;
  this->bUseChair = false;
  this->InteractionState = None;
  this->InteractionEndAnimState = None;
  this->TamingBeginIndex = 0;
  return this;
}

// operator() @ 14b865e10

void __thiscall
`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Finish'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  undefined8 local_res18 [2];
  FReadAccessScope local_28;
  
  if (*(longlong *)(*(longlong *)this + 0x430) != 0) {
    local_res8[0] = 0x42;
    local_res18[0] = *(undefined8 *)(*(longlong *)(*(longlong *)this + 0x430) + 8);
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_LiftUp>
              ((ulong64 *)&local_res10,(EDS_AbilityTagType *)local_res18);
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *)
                       &local_res10,(void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&local_res10);
      local_res8[0] = 6;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 4),&local_28);
      if ((*(int *)&pUVar3[4].field_0x10 != 0) &&
         (plVar1 = *(longlong **)&pUVar3[4].field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))(plVar1,local_res8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
  }
  return;
}

// operator() @ 14b865ec0

void __thiscall
`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_Begin'::__l2::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  undefined8 local_res18 [2];
  FReadAccessScope local_28;
  
  if (*(longlong *)(*(longlong *)this + 0x430) != 0) {
    local_res8[0] = 0x42;
    local_res18[0] = *(undefined8 *)(*(longlong *)(*(longlong *)this + 0x430) + 8);
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_LiftUp>
              ((ulong64 *)&local_res10,(EDS_AbilityTagType *)local_res18);
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *)
                       &local_res10,(void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&local_res10);
      local_res8[0] = 2;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 4),&local_28);
      if ((*(int *)&pUVar3[4].field_0x10 != 0) &&
         (plVar1 = *(longlong **)&pUVar3[4].field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))(plVar1,local_res8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
  }
  return;
}

// operator() @ 14b865f70

void __thiscall
`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_End'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  undefined8 local_res18 [2];
  FReadAccessScope local_28;
  
  if (*(longlong *)(*(longlong *)this + 0x430) != 0) {
    local_res8[0] = 0x42;
    local_res18[0] = *(undefined8 *)(*(longlong *)(*(longlong *)this + 0x430) + 8);
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_LiftUp>
              ((ulong64 *)&local_res10,(EDS_AbilityTagType *)local_res18);
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *)
                       &local_res10,(void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&local_res10);
      local_res8[0] = 3;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 4),&local_28);
      if ((*(int *)&pUVar3[4].field_0x10 != 0) &&
         (plVar1 = *(longlong **)&pUVar3[4].field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))(plVar1,local_res8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
  }
  return;
}

// operator() @ 14b866020

void __thiscall
`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Start'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  undefined8 local_res18 [2];
  FReadAccessScope local_28;
  
  if (*(longlong *)(*(longlong *)this + 0x430) != 0) {
    local_res8[0] = 0x42;
    local_res18[0] = *(undefined8 *)(*(longlong *)(*(longlong *)this + 0x430) + 8);
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_LiftUp>
              ((ulong64 *)&local_res10,(EDS_AbilityTagType *)local_res18);
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *)
                       &local_res10,(void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&local_res10);
      local_res8[0] = 1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 4),&local_28);
      if ((*(int *)&pUVar3[4].field_0x10 != 0) &&
         (plVar1 = *(longlong **)&pUVar3[4].field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))(plVar1,local_res8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
  }
  return;
}

// IsInEatingState @ 14b87da10

bool __thiscall UDS_InteractionAnimLayer::IsInEatingState(UDS_InteractionAnimLayer *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  return dVar1 < this->EatingStartTime + __real_3ff0000000000000;
}

// OnBlendOut_LiftUp_Finish @ 14b881780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Finish
          (UDS_InteractionAnimLayer *this,FAnimUpdateContext *param_1,FAnimNodeReference *param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  UDS_InteractionAnimLayer *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Finish'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Finish'::__l2::<lambda_1>,void>
                ::Call;
  local_30 = this;
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// OnBlendOut_LiftUp_PreThrow_Begin @ 14b881800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_Begin
          (UDS_InteractionAnimLayer *this,FAnimUpdateContext *param_1,FAnimNodeReference *param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  UDS_InteractionAnimLayer *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_Begin'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_Begin'::__l2::<lambda_1>,void>
                ::Call;
  local_30 = this;
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// OnBlendOut_LiftUp_PreThrow_End @ 14b881880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_End
          (UDS_InteractionAnimLayer *this,FAnimUpdateContext *param_1,FAnimNodeReference *param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  UDS_InteractionAnimLayer *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_End'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_End'::__l2::<lambda_1>,void>
                ::Call;
  local_30 = this;
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// OnBlendOut_LiftUp_Start @ 14b881900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Start
          (UDS_InteractionAnimLayer *this,FAnimUpdateContext *param_1,FAnimNodeReference *param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  UDS_InteractionAnimLayer *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Start'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Start'::__l2::<lambda_1>,void>
                ::Call;
  local_30 = this;
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// OnChangedCharState @ 14b885c00

void __thiscall
UDS_InteractionAnimLayer::OnChangedCharState
          (UDS_InteractionAnimLayer *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  double dVar1;
  FDS_ChangedCharStateInfo local_38;
  
  local_38.StateTag.TagName = (param_2->StateTag).TagName;
  local_38.bIsStateTagOn = param_2->bIsStateTagOn;
  local_38._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_38.AddedCharState = param_2->AddedCharState;
  local_38.RemovedCharState = param_2->RemovedCharState;
  local_38.AddedCharDetailState = param_2->AddedCharDetailState;
  local_38.RemovedCharDetailState = param_2->RemovedCharDetailState;
  RefreshInteractionState(this,param_1,&local_38);
  local_38.AddedCharDetailState = param_2->AddedCharDetailState;
  local_38.RemovedCharDetailState = param_2->RemovedCharDetailState;
  if (local_38.AddedCharDetailState == Cooking_Eat) {
    dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
    this->EatingStartTime = dVar1;
  }
  return;
}

// RefreshCookingState @ 14b896660

void __thiscall
UDS_InteractionAnimLayer::RefreshCookingState
          (UDS_InteractionAnimLayer *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  double dVar1;
  
  if (param_2->AddedCharDetailState == Cooking_Eat) {
    dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
    this->EatingStartTime = dVar1;
  }
  return;
}

// RefreshInteractionState @ 14b896b40

void __thiscall
UDS_InteractionAnimLayer::RefreshInteractionState
          (UDS_InteractionAnimLayer *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  UDS_CharStateData *pUVar3;
  UObject *pUVar4;
  FGameplayTag *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  EDS_InteractionAnimState *pEVar7;
  longlong lVar8;
  FWeakObjectPtr local_res10 [2];
  undefined1 local_res20;
  EDS_StateTagType local_88 [8];
  ForAnyElementType local_80;
  int local_78;
  int local_74 [11];
  FWeakObjectPtr local_48;
  EDS_CharState local_40;
  undefined8 local_38 [2];
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if ((bVar2) &&
     ((param_2->AddedCharState != Interaction || (param_2->RemovedCharState != Interaction)))) {
    pEVar7 = &this->InteractionState;
    *pEVar7 = None;
    this->bEnableActionHandlingControlRig = false;
    this->bUseChair = false;
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_40 = Interaction;
    bVar2 = UDS_CharStateData::HasCharState(pUVar3,&local_40);
    if (bVar2) {
      this->InteractionEndAnimState = None;
    }
    switch(param_2->AddedCharDetailState) {
    case Interaction_Mining:
      *pEVar7 = Mining;
      break;
    case Interaction_Harvesting:
      *pEVar7 = Harvesting;
      break;
    case Interaction_Logging:
      *pEVar7 = Logging;
      break;
    case Interaction_BoxOpen:
      *pEVar7 = BoxOpen;
      this->InteractionEndAnimState = BoxOpen;
      break;
    case Interaction_Condensing:
      *pEVar7 = Condensing;
      break;
    case Interaction_Etc:
      *pEVar7 = Etc;
      break;
    case Interaction_NPCGimmick:
      *pEVar7 = NPCGimmick;
      break;
    case Interaction_NPCCamp:
      *pEVar7 = NPCCamp;
      this->InteractionEndAnimState = NPCCamp;
      local_res20 = 0x36;
      local_38[0] = 0;
      if (this->_padding_ != 0) {
        local_38[0] = *(undefined8 *)(this->_padding_ + 8);
      }
      UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCCamp>
                ((ulong64 *)&local_48,(EDS_AbilityTagType *)local_38);
      bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr> *)
                         &local_48,(void *)0x0);
      if (!bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&local_48);
        this->bUseChair = (bool)pUVar4[3].field_0x1a;
      }
      break;
    case Interaction_OpenLocks:
      *pEVar7 = Unlock;
      break;
    case Interaction_Archeology:
      *pEVar7 = Archeology;
      break;
    case Interaction_Linguistics:
      *pEVar7 = Linguistics;
      break;
    case Interaction_Hold:
      this->bEnableActionHandlingControlRig = true;
      *pEVar7 = Hold;
    }
    pEVar7 = &this->InteractionState;
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_74[1] = 0x47;
    bVar2 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)(local_74 + 1));
    if (bVar2) {
      this->bEnableActionHandlingControlRig = true;
      *pEVar7 = LiftUp;
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
      local_74[2] = 0x48;
      bVar2 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)(local_74 + 2));
      if (bVar2) {
        *pEVar7 = LiftUp_PreThrow_Begin;
      }
      else {
        pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
        local_74[3] = 0x49;
        bVar2 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)(local_74 + 3));
        if (bVar2) {
          *pEVar7 = LiftUp_PreThrow_End;
        }
        else {
          pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
          local_74[4] = 0x4a;
          bVar2 = UDS_CharStateData::HasCharDetailState
                            (pUVar3,(EDS_CharDetailState *)(local_74 + 4));
          if (bVar2) {
            *pEVar7 = LiftUp_Throw;
          }
          else {
            pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
            local_74[5] = 0x4b;
            bVar2 = UDS_CharStateData::HasCharDetailState
                              (pUVar3,(EDS_CharDetailState *)(local_74 + 5));
            if (bVar2) {
              *pEVar7 = LiftUp_PutDown;
            }
          }
        }
      }
    }
    pEVar7 = &this->InteractionState;
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_74[6] = 0x4d;
    bVar2 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)(local_74 + 6));
    if (bVar2) {
      *pEVar7 = Taming;
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
      local_74[7] = 0x4e;
      bVar2 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)(local_74 + 7));
      if (bVar2) {
        pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        local_88[0] = Interaction_NPCTaming_Begin;
        pFVar5 = FDS_GameplayTags::GetStateTag(local_88);
        pTVar6 = UDS_CharStateData::GetAniIndexList(pUVar3,pFVar5);
        local_80.Data = (FScriptContainerElement *)0x0;
        local_78 = pTVar6->ArrayNum;
        lVar8 = (longlong)local_78;
        _Src = (pTVar6->AllocatorInstance).Data;
        if (local_78 == 0) {
          local_74[0] = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_78,0,&local_80,local_78,local_74);
          memcpy(local_80.Data,_Src,lVar8 << 2);
        }
        if ((local_78 < 2) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this->TamingBeginIndex = *(undefined4 *)(local_80.Data + 4);
        if ((local_78 < 1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this->TamingShapeType = (EDS_MountShapeType)*local_80.Data;
        this->InteractionState = Taming_Begin;
        FMemory::Free(local_80.Data);
      }
      else {
        pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
        local_74[8] = 0x4f;
        bVar2 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)(local_74 + 8));
        if (bVar2) {
          *pEVar7 = Taming_Proccess;
        }
        else {
          pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
          local_74[9] = 0x50;
          bVar2 = UDS_CharStateData::HasCharDetailState
                            (pUVar3,(EDS_CharDetailState *)(local_74 + 9));
          if (bVar2) {
            *pEVar7 = Taming_Success;
          }
          else {
            pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
            local_74[10] = 0x51;
            bVar2 = UDS_CharStateData::HasCharDetailState
                              (pUVar3,(EDS_CharDetailState *)(local_74 + 10));
            if (bVar2) {
              *pEVar7 = Taming_Fail;
            }
          }
        }
      }
    }
  }
  return;
}

