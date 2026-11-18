// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 34

// StaticClass @ 14b4f3530

UClass * __cdecl UDS_MountAnimLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAnimLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAnimLayer",
               &Z_Registration_Info_UClass_UDS_MountAnimLayer.InnerSingleton,
               StaticRegisterNativesUDS_MountAnimLayer,0x470,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MountAnimLayer>,
               InternalVTableHelperCtorCaller<UDS_MountAnimLayer>,local_res8,
               UDS_AnimLayerBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAnimLayer.InnerSingleton;
}

// UDS_MountAnimLayer @ 14b4f8060

UDS_MountAnimLayer * __thiscall
UDS_MountAnimLayer::UDS_MountAnimLayer(UDS_MountAnimLayer *this,FVTableHelper *param_1)

{
  UDS_AnimLayerBase::UDS_AnimLayerBase((UDS_AnimLayerBase *)this,param_1);
  this->bIsMount = false;
  this->bMountJump = false;
  *(undefined ***)this = &___7UDS_MountAnimLayer__6B_;
  this->bMountFly = false;
  this->MountAnimIndex = 0;
  this->MountShapeType = Max;
  this->MountState = None;
  this->PreMountState = None;
  return this;
}

// ~UDS_MountAnimLayer @ 14b4f8730

void __thiscall UDS_MountAnimLayer::~UDS_MountAnimLayer(UDS_MountAnimLayer *this)

{
  *(undefined ***)this = &___7UDS_MountAnimLayer__6B_;
  UDS_AnimLayerBase::~UDS_AnimLayerBase((UDS_AnimLayerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4fa4f0

UClass * __cdecl UDS_MountAnimLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAnimLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAnimLayer",
               &Z_Registration_Info_UClass_UDS_MountAnimLayer.InnerSingleton,
               StaticRegisterNativesUDS_MountAnimLayer,0x470,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MountAnimLayer>,
               InternalVTableHelperCtorCaller<UDS_MountAnimLayer>,local_res8,
               UDS_AnimLayerBase::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAnimLayer.InnerSingleton;
}

// ShouldChangeCharStateEvent @ 14b4fa680

bool __thiscall UDS_MountAnimLayer::ShouldChangeCharStateEvent(UDS_MountAnimLayer *this)

{
  return true;
}

// StaticRegisterNativesUDS_MountAnimLayer @ 14b4fa920

void __cdecl UDS_MountAnimLayer::StaticRegisterNativesUDS_MountAnimLayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UDS_MountAnimLayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetMountAnimIndex @ 14b4fba10

void __cdecl
UDS_MountAnimLayer::execGetMountAnimIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uint *)param_3 = (uint)(0 < *(int *)&param_1[0x1b].field_0x24);
  return;
}

// execGetMountAnimState @ 14b4fba40

void __cdecl
UDS_MountAnimLayer::execGetMountAnimState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1c].field_0x1;
  return;
}

// execGetMountShapeType @ 14b4fba70

void __cdecl
UDS_MountAnimLayer::execGetMountShapeType(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x1c);
  return;
}

// execGetRotationVelocity @ 14b4fbc50

void __cdecl
UDS_MountAnimLayer::execGetRotationVelocity(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetRotationVelocity((UDS_MountAnimLayer *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execHasAccelation @ 14b4fbc90

void __cdecl UDS_MountAnimLayer::execHasAccelation(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = HasAccelation((UDS_MountAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsInAir @ 14b4fbd80

void __cdecl UDS_MountAnimLayer::execIsInAir(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsInAir((UDS_MountAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsMaxWalkSpeed @ 14b4fbe00

void __cdecl UDS_MountAnimLayer::execIsMaxWalkSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsMaxWalkSpeed((UDS_MountAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsMount @ 14b4fbe40

void __cdecl UDS_MountAnimLayer::execIsMount(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1b].field_0x20;
  return;
}

// execIsMountFly @ 14b4fbe70

void __cdecl UDS_MountAnimLayer::execIsMountFly(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1b].field_0x22;
  return;
}

// execIsMountJump @ 14b4fbea0

void __cdecl UDS_MountAnimLayer::execIsMountJump(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1b].field_0x21;
  return;
}

// execIsMoving @ 14b4fbf10

void __cdecl UDS_MountAnimLayer::execIsMoving(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsMoving((UDS_MountAnimLayer *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execOnOutReadyState @ 14b4fc170

void __cdecl UDS_MountAnimLayer::execOnOutReadyState(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnOutReadyState((UDS_MountAnimLayer *)param_1,pFVar5,pFVar6);
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

// UDS_MountAnimLayer @ 14b865250

UDS_MountAnimLayer * __thiscall
UDS_MountAnimLayer::UDS_MountAnimLayer(UDS_MountAnimLayer *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->MountShapeType = Max;
  this->MountState = None;
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined ***)this = &___7UDS_MountAnimLayer__6B_;
  *(undefined8 *)&this->field_0x438 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  *(undefined8 *)&this->field_0x448 = 0;
  *(undefined8 *)&this->field_0x450 = 0;
  this->bIsMount = false;
  this->bMountJump = false;
  this->bMountFly = false;
  this->MountAnimIndex = 0;
  this->PreMountState = None;
  return this;
}

// operator() @ 14b8660d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
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

void __thiscall `UDS_MountAnimLayer::OnOutReadyState'::__l2::<lambda_1>::operator()(void *this)

{
  FDS_EntityBase *this_00;
  UObject *pUVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  EDS_AbilityTagType local_a8 [8];
  UObject *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (*(longlong *)(*(longlong *)this + 0x430) != 0) {
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_MountAbilityContext_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._8_8_ = pUVar1;
    pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar3 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    pUVar1[1].field_0x1 = 1;
    this_00 = *(FDS_EntityBase **)(*(longlong *)this + 0x430);
    local_a0 = pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    local_a8[0] = Mount;
    FDS_EntityBase::TryActivateAbility(this_00,local_a8,(TObjectPtr<UWN_AbilityContext>)&local_a0);
  }
  return;
}

// GetMountState @ 14b878280

EDS_MountAnimState __thiscall
UDS_MountAnimLayer::GetMountState
          (UDS_MountAnimLayer *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  EDS_MountAnimState EVar4;
  UDS_CharStateData *pUVar5;
  FDS_AnimSharedData *pFVar6;
  EDS_MountAnimState EVar7;
  FWeakObjectPtr local_res10 [2];
  EDS_CharState local_res20;
  
  local_res10[0] = param_1.WeakPtr;
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res20 = Mount;
  bVar1 = UDS_CharStateData::HasCharState(pUVar5,&local_res20);
  if (!bVar1) {
    return None;
  }
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res20._0_4_ = AniCut|ToggleSkill|AutoMove|Shield;
  bVar1 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res20._0_4_ = ToggleSkill|Shield;
  bVar2 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res20._0_4_ = AniCut|ToggleSkill|Avoid|AutoMove|Swim;
  bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
  if (bVar3) {
    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_res20._0_4_ = AniCut|ToggleSkill|Shield;
    bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
    if (!bVar3) {
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
      local_res20 = CONCAT44(local_res20._4_4_,0x65);
      bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
      if (!bVar3) {
        if (!bVar1) {
          EVar4 = AirDisMount;
          if (!bVar2) {
            EVar4 = DisMount;
          }
          return EVar4;
        }
        return AirDisMount;
      }
    }
    if (!bVar1) {
      EVar4 = MoveAirDisMount;
      if (!bVar2) {
        EVar4 = MoveDisMount;
      }
      return EVar4;
    }
    return MoveAirDisMount;
  }
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res20._0_4_ = AniCut|ToggleSkill|Swim;
  bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
  if (bVar3) {
    return Mount_Ready;
  }
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res20._0_4_ = AniCut|ToggleSkill|Avoid|Swim;
  bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
  if (bVar3) {
    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_res20 = CONCAT44(local_res20._4_4_,0x65);
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
    return bVar1 + MountLeap;
  }
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res20._0_4_ = AniCut|ToggleSkill|Avoid|AutoMove;
  bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
  if (bVar3) {
    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_res20 = CONCAT44(local_res20._4_4_,0x65);
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
    if (!bVar1) {
      pFVar6 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
      if (((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X ==
            (pFVar6->Acceleration).field0_0x0._s_0.X) &&
          (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y ==
           (pFVar6->Acceleration).field0_0x0._s_0.Y)) &&
         (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z ==
          (pFVar6->Acceleration).field0_0x0._s_0.Z)) {
        return MountLand;
      }
    }
    return MountSprintLand;
  }
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res20._0_4_ = AniCut|ToggleSkill|AutoMove;
  bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
  if (bVar3) {
    return MountOwnAction;
  }
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res20._0_4_ = AniCut|ToggleSkill|AutoMove|Shield|Swim;
  bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
  if (bVar3) {
    return MountDash;
  }
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res20._0_4_ = AniCut|ToggleSkill|Avoid;
  bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
  if (bVar3) {
    return MountDashSkill;
  }
  if (bVar1) {
    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_res20._0_4_ = AniCut|ToggleSkill|Avoid|Shield;
    bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
    if (bVar3) {
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
      local_res20 = CONCAT44(local_res20._4_4_,0x65);
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
      return bVar1 + MountAscent;
    }
    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_res20._0_4_ = AniCut|ToggleSkill|Avoid|Shield|Swim;
    bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
    if (bVar3) {
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
      local_res20 = CONCAT44(local_res20._4_4_,0x65);
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
      return bVar1 + MountDescent;
    }
  }
  pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res20._0_4_ = AniCut|ToggleSkill|AutoMove|Swim;
  bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
  if (bVar3) {
    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_res20 = CONCAT44(local_res20._4_4_,0x1c);
    bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
    if (bVar3) {
      return MountSprintJump;
    }
    if (bVar2) {
      EVar4 = MountSprintFall;
      EVar7 = MountAirSprintFall;
      bVar1 = bVar1 == bVar2;
    }
    else {
      EVar4 = MountSprint;
      EVar7 = MountAirSprint;
    }
  }
  else {
    pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_res20._0_4_ = AniCut|ToggleSkill|Shield;
    bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
    if (bVar3) {
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
      local_res20._0_4_ = Skill|Avoid|AutoMove;
      bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
      if (bVar3) {
        return MountJump;
      }
      if (!bVar2) {
        if (bVar1) {
          return MountAirMove;
        }
        pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
        local_res20 = CONCAT44(local_res20._4_4_,99);
        bVar1 = UDS_CharStateData::HasCharDetailState(pUVar5,(EDS_CharDetailState *)&local_res20);
        return bVar1 + MountMove;
      }
      return MountFall;
    }
    if (bVar2) {
      EVar4 = MountFall;
      EVar7 = MountAirFall;
      bVar1 = bVar1 == bVar2;
    }
    else {
      EVar4 = Mount;
      EVar7 = MountAir;
    }
  }
  if (bVar1) {
    EVar4 = EVar7;
  }
  return EVar4;
}

// GetRotationVelocity @ 14b879360

float __thiscall UDS_MountAnimLayer::GetRotationVelocity(UDS_MountAnimLayer *this)

{
  FDS_AnimSharedData *pFVar1;
  
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  return pFVar1->RotationVelocity;
}

// HasAccelation @ 14b8798f0

bool __thiscall UDS_MountAnimLayer::HasAccelation(UDS_MountAnimLayer *this)

{
  FDS_AnimSharedData *pFVar1;
  
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  return pFVar1->bHasAcceleration;
}

// IsInAir @ 14b87d9c0

bool __thiscall UDS_MountAnimLayer::IsInAir(UDS_MountAnimLayer *this)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharState local_res8 [4];
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x438);
  if (!bVar1) {
    return false;
  }
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
  local_res8[0] = AirWalk;
  bVar1 = UDS_CharStateData::HasCharState(this_00,local_res8);
  return bVar1;
}

// IsMaxWalkSpeed @ 14b87da90

bool __thiscall UDS_MountAnimLayer::IsMaxWalkSpeed(UDS_MountAnimLayer *this)

{
  undefined1 *this_00;
  bool bVar1;
  UDS_MovementCore *this_01;
  UDS_MovementCore *this_02;
  float fVar2;
  float fVar3;
  
  this_00 = &this->field_0x450;
  bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)this_00,(void *)0x0);
  if (!bVar1) {
    this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    fVar2 = UDS_MovementCore::GetMoveSpeed(this_01);
    fVar3 = UDS_MovementCore::GetMaxMoveSpeed(this_02);
    return fVar3 <= fVar2;
  }
  return false;
}

// IsMoving @ 14b87dd00

bool __thiscall UDS_MountAnimLayer::IsMoving(UDS_MountAnimLayer *this)

{
  FDS_AnimSharedData *pFVar1;
  
  pFVar1 = UDS_AnimLayerBase::GetAnimSharedData((UDS_AnimLayerBase *)this);
  return pFVar1->bHasAcceleration;
}

// OnBindAnimationEvents @ 14b881580

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

void __thiscall UDS_MountAnimLayer::OnBindAnimationEvents(UDS_MountAnimLayer *this)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 local_res8;
  FWeakObjectPtr local_res10;
  
  UDS_AnimInstanceBase::OnBindAnimationEvents((UDS_AnimInstanceBase *)this);
  lVar1 = *(longlong *)&this->field_0x430;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '\x05')) {
    local_res8 = 0x55;
    UDS_AbilityDataSet::GetAbilityData<UDS_NPCMountAbilityData>
              ((ulong64 *)&local_res10,(EDS_AbilityTagType *)(lVar1 + 8));
    bVar2 = TWeakObjectPtr<UDS_NPCMountAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NPCMountAbilityData,FWeakObjectPtr> *)&local_res10,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&local_res10);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[2].field_0x8,this);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_MountAnimState_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_MountAnimLayer>
                (&pUVar3[2].field_0x8,(UDS_MountAnimLayer *)&local_res8,(pmf_92d512df)this);
    }
  }
  return;
}

// OnChangedCharState @ 14b886470

void __thiscall
UDS_MountAnimLayer::OnChangedCharState
          (UDS_MountAnimLayer *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  EDS_MountAnimState EVar2;
  UDS_CharStateData *pUVar3;
  EDS_CharState local_res8;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x438);
  if (bVar1) {
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    local_res8 = Mount;
    bVar1 = UDS_CharStateData::HasCharState(pUVar3,&local_res8);
    this->bIsMount = bVar1;
    if (bVar1) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
      local_res8._0_4_ = Skill|Avoid|AutoMove;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_res8);
      this->bMountJump = bVar1;
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
      local_res8 = CONCAT44(local_res8._4_4_,0x66);
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_res8);
      this->bMountFly = bVar1;
      EVar2 = GetMountState(this,param_1,param_2);
      this->PreMountState = this->MountState;
      this->MountState = EVar2;
    }
    else {
      this->PreMountState = this->MountState;
      this->bMountJump = false;
      this->bMountFly = false;
      this->MountState = None;
    }
  }
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88b980

void __thiscall
UDS_MountAnimLayer::OnNativeThreadSafeUpdateAnimation(UDS_MountAnimLayer *this,float param_1)

{
  return;
}

// OnNpcMountAnimNotify @ 14b88c140

void __thiscall
UDS_MountAnimLayer::OnNpcMountAnimNotify(UDS_MountAnimLayer *this,EDS_MountAnimState *param_1)

{
  int *piVar1;
  EDS_MountAnimState EVar2;
  int iVar3;
  int iVar4;
  
  EVar2 = this->MountState;
  if (EVar2 == *param_1) {
    piVar1 = &this->MountAnimIndex;
    if (EVar2 != this->PreMountState) {
      *piVar1 = 0;
    }
    this->PreMountState = EVar2;
    iVar3 = FMath::RandRange(0,100);
    if (*piVar1 == 0) {
      if (iVar3 < 0x14) {
        *piVar1 = 1;
        return;
      }
    }
    else {
      iVar4 = 0;
      if ((iVar3 < 0x28) && (iVar3 = *piVar1 + 1, iVar4 = 0, iVar3 < 4)) {
        iVar4 = iVar3;
      }
      *piVar1 = iVar4;
    }
  }
  return;
}

// OnNpcMountAnimNotifyEvent @ 14b88c1d0

void __thiscall
UDS_MountAnimLayer::OnNpcMountAnimNotifyEvent(UDS_MountAnimLayer *this,EDS_MountAnimState *param_1)

{
  int *piVar1;
  EDS_MountAnimState EVar2;
  int iVar3;
  int iVar4;
  
  EVar2 = this->MountState;
  if (EVar2 == *param_1) {
    piVar1 = &this->MountAnimIndex;
    if (EVar2 != this->PreMountState) {
      *piVar1 = 0;
    }
    this->PreMountState = EVar2;
    iVar3 = FMath::RandRange(0,100);
    if (*piVar1 == 0) {
      if (iVar3 < 0x14) {
        *piVar1 = 1;
        return;
      }
    }
    else {
      iVar4 = 0;
      if ((iVar3 < 0x28) && (iVar3 = *piVar1 + 1, iVar4 = 0, iVar3 < 4)) {
        iVar4 = iVar3;
      }
      *piVar1 = iVar4;
    }
  }
  return;
}

// OnOutReadyState @ 14b88c260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_MountAnimLayer::OnOutReadyState
          (UDS_MountAnimLayer *this,FAnimUpdateContext *param_1,FAnimNodeReference *param_2)

{
  EDS_MountAnimState EVar1;
  undefined ***pppuVar2;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  UDS_MountAnimLayer *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  this->PreMountState = this->MountState;
  EVar1 = MountAir;
  if (this->bMountFly == false) {
    EVar1 = Mount;
  }
  this->MountState = EVar1;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UDS_MountAnimLayer::OnOutReadyState'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDS_MountAnimLayer::OnOutReadyState'::__l2::<lambda_1>,void>::
                Call;
  local_30 = this;
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar2 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar2 = local_20;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  return;
}

// OnUnBindAnimationEvents @ 14b894500

void __thiscall UDS_MountAnimLayer::OnUnBindAnimationEvents(UDS_MountAnimLayer *this)

{
  char cVar1;
  UObject *pUVar2;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar1 == '\x01') {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    return;
  }
  return;
}

// SetMountState @ 14b898fc0

void __thiscall
UDS_MountAnimLayer::SetMountState(UDS_MountAnimLayer *this,EDS_MountAnimState param_1)

{
  this->PreMountState = this->MountState;
  this->MountState = param_1;
  return;
}

