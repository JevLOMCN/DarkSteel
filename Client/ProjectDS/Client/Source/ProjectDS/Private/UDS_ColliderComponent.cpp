// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b459730

UClass * __cdecl UDS_ColliderComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ColliderComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ColliderComponent",
               &Z_Registration_Info_UClass_UDS_ColliderComponent.InnerSingleton,
               StaticRegisterNativesUDS_ColliderComponent,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ColliderComponent>,
               InternalVTableHelperCtorCaller<UDS_ColliderComponent>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ColliderComponent.InnerSingleton;
}

// UDS_ColliderComponent @ 14b45c4b0

UDS_ColliderComponent * __thiscall
UDS_ColliderComponent::UDS_ColliderComponent(UDS_ColliderComponent *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ColliderComponent__6B_;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->OwnerActor).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MainPlayerData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MainPlayerData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MainCharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MainCharStateData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MainCharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MainCharInfoData).WeakPtr,(FObjectPtr)&local_res8);
  (this->ShapeComponent).field0_0x0.DebugPtr = (UShapeComponent *)0x0;
  (this->AssignedStateTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssignedStateTags).ArrayNum = 0;
  (this->AssignedStateTags).ArrayMax = 0;
  this->CollideID = 0;
  this->bIsMoveBlock = false;
  this->bIsSkillMoveBlock = false;
  this->bIsAbnormalMoveBlock = false;
  this->bIsCheckEnemy = false;
  return this;
}

// ~UDS_ColliderComponent @ 14b45cf50

void __thiscall UDS_ColliderComponent::~UDS_ColliderComponent(UDS_ColliderComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_ColliderComponent__6B_;
  pFVar1 = (this->AssignedStateTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b45e5e0

UClass * __cdecl UDS_ColliderComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ColliderComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ColliderComponent",
               &Z_Registration_Info_UClass_UDS_ColliderComponent.InnerSingleton,
               StaticRegisterNativesUDS_ColliderComponent,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ColliderComponent>,
               InternalVTableHelperCtorCaller<UDS_ColliderComponent>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ColliderComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_ColliderComponent @ 14b45f1c0

void __cdecl UDS_ColliderComponent::StaticRegisterNativesUDS_ColliderComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_ColliderComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedTeamInfoCallback @ 14b460680

void __cdecl
UDS_ColliderComponent::execOnChangedTeamInfoCallback(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FWeakObjectPtr local_res10;
  
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  FWeakObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedTeamInfoCallback
            ((UDS_ColliderComponent *)param_1,
             (TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_res10);
  return;
}

// UDS_ColliderComponent @ 14bc2aa90

UDS_ColliderComponent * __thiscall
UDS_ColliderComponent::UDS_ColliderComponent
          (UDS_ColliderComponent *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ColliderComponent__6B_;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->OwnerActor).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MainPlayerData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MainPlayerData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MainCharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MainCharStateData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MainCharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MainCharInfoData).WeakPtr,(FObjectPtr)&local_res8);
  (this->ShapeComponent).field0_0x0.DebugPtr = (UShapeComponent *)0x0;
  (this->AssignedStateTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssignedStateTags).ArrayNum = 0;
  (this->AssignedStateTags).ArrayMax = 0;
  this->CollideID = 0;
  this->bIsMoveBlock = false;
  this->bIsSkillMoveBlock = false;
  this->bIsAbnormalMoveBlock = false;
  this->bIsCheckEnemy = false;
  return this;
}

// CreateBoxComponent @ 14bc33420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
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
UDS_ColliderComponent::CreateBoxComponent(UDS_ColliderComponent *this,FDS_CollideTableRow *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UBoxComponent *this_00;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  TVector<double>_u_0 local_c8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  pUVar3 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UBoxComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = pUVar3;
  this_00 = (UBoxComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar5 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UBoxComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (**(code **)(this_00->_padding_ + 0x788))(this_00,::COLLISION_PROFILE_PLAYER_ONLY,1);
  pUVar3 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,*(USceneComponent **)(pUVar3 + 0xb),(FName)0x0);
  UActorComponent::RegisterComponent((UActorComponent *)this_00);
  uVar1 = param_1->CollideDistance;
  uVar2 = param_1->CollideWidth;
  local_c8._s_0.X = (double)(int)uVar1;
  local_c8._s_0.Y = (double)(int)uVar2;
  local_c8._s_0.Z = (double)param_1->CollideHeight;
  UBoxComponent::SetBoxExtent(this_00,(TVector<double> *)&local_c8._s_0,true);
  local_c8._s_0.X = (param_1->CollideOffset).field0_0x0._s_0.X;
  local_c8._s_0.Y = (param_1->CollideOffset).field0_0x0._s_0.Y;
  local_c8._s_0.Z = (param_1->CollideOffset).field0_0x0._s_0.Z;
  USceneComponent::SetRelativeLocation
            ((USceneComponent *)this_00,(TVector<double> *)&local_c8._s_0,false,(FHitResult *)0x0,
             None);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UBoxComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->ShapeComponent).field0_0x0.DebugPtr = (UShapeComponent *)this_00;
  return;
}

// CreateCapsuleComponent @ 14bc338e0

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
UDS_ColliderComponent::CreateCapsuleComponent
          (UDS_ColliderComponent *this,FDS_CollideTableRow *param_1)

{
  UObject *pUVar1;
  UCapsuleComponent *this_00;
  TVector<double>_u_0 local_28;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  this_00 = NewObject<UCapsuleComponent>(pUVar1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UCapsuleComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (**(code **)(this_00->_padding_ + 0x788))(this_00,::COLLISION_PROFILE_PLAYER_ONLY,1);
  pUVar1 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,*(USceneComponent **)(pUVar1 + 0xb),(FName)0x0);
  UActorComponent::RegisterComponent((UActorComponent *)this_00);
  UCapsuleComponent::SetCapsuleSize
            (this_00,(float)param_1->CollideDistance,(float)param_1->CollideHeight,true);
  local_28._s_0.X = (param_1->CollideOffset).field0_0x0._s_0.X;
  local_28._s_0.Y = (param_1->CollideOffset).field0_0x0._s_0.Y;
  local_28._s_0.Z = (param_1->CollideOffset).field0_0x0._s_0.Z;
  USceneComponent::SetRelativeLocation
            ((USceneComponent *)this_00,(TVector<double> *)&local_28._s_0,false,(FHitResult *)0x0,
             None);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UCapsuleComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->ShapeComponent).field0_0x0.DebugPtr = (UShapeComponent *)this_00;
  return;
}

// CreateNoneComponent @ 14bc37520

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

void __thiscall UDS_ColliderComponent::CreateNoneComponent(UDS_ColliderComponent *this)

{
  FDS_EntityBase *pFVar1;
  UObject *pUVar2;
  UCapsuleComponent *this_00;
  
  pFVar1 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr);
  if (pFVar1 != (FDS_EntityBase *)0x0) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    this_00 = NewObject<UCapsuleComponent>(pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UCapsuleComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (**(code **)(this_00->_padding_ + 0x788))(this_00,::COLLISION_PROFILE_PLAYER_ONLY,1);
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    USceneComponent::SetupAttachment
              ((USceneComponent *)this_00,*(USceneComponent **)(pUVar2 + 0xb),(FName)0x0);
    UActorComponent::RegisterComponent((UActorComponent *)this_00);
    UCapsuleComponent::SetCapsuleSize
              (this_00,pFVar1->ScaledCapsuleRadius,pFVar1->ScaledCapsuleHalfHeight,true);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UCapsuleComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->ShapeComponent).field0_0x0.DebugPtr = (UShapeComponent *)this_00;
  }
  return;
}

// Deinitialize @ 14bc38680

void __thiscall UDS_ColliderComponent::Deinitialize(UDS_ColliderComponent *this)

{
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  RemoveAllCharacterDelegate(this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  return;
}

// InitCollider @ 14bc478b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_ColliderComponent::InitCollider
          (UDS_ColliderComponent *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  EDS_CollideType EVar3;
  code *pcVar4;
  bool bVar5;
  FDS_CollideTableRow *this_00;
  UObject *pUVar6;
  UClass *pUVar7;
  UBoxComponent *this_01;
  FDS_EntityBase *pFVar8;
  UDS_EntityManager *this_02;
  FDS_EntityBase *pFVar9;
  longlong *plVar10;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_130;
  undefined1 local_128 [24];
  double dStack_110;
  double local_108;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_res10[0] = param_1.WeakPtr;
  if ((this->ShapeComponent).field0_0x0.DebugPtr == (UShapeComponent *)0x0) {
    bVar5 = FWeakObjectPtr::IsValid(local_res10);
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2082732270073937956>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Collider\\DS_ColliderComponent.cpp"
                         ,0x24,"InActor.IsValid()");
      if (!bVar5) {
        return;
      }
      goto code_r0x00014bc47d5c;
    }
    this_00 = FDS_CollideTableRow::GetRef((longlong)param_2,true);
    bVar5 = FDS_CollideTableRow::IsValid(this_00);
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2082732270073937962>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Collider\\DS_ColliderComponent.cpp"
                         ,0x2a,"collideTableRow.IsValid()");
      if (!bVar5) {
        return;
      }
      goto code_r0x00014bc47d5c;
    }
    (this->OwnerActor).WeakPtr = local_res10[0];
    this->CollideID = param_2;
    this->bIsMoveBlock = this_00->IsMoveBlock;
    this->bIsSkillMoveBlock = this_00->IsSkillMoveBlock;
    this->bIsAbnormalMoveBlock = this_00->IsAbnormalBlock;
    pFVar9 = (FDS_EntityBase *)0x0;
    this->bIsCheckEnemy = this_00->IsEnemy;
    EVar3 = this_00->CollideType;
    if (EVar3 == None) {
      pFVar8 = FDS_EntityBase::GetEntityBaseFromActor
                         ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10[0]);
      if (pFVar8 != (FDS_EntityBase *)0x0) {
        pUVar6 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        this_01 = (UBoxComponent *)NewObject<UCapsuleComponent>(pUVar6);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_01 != (UBoxComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        (**(code **)(this_01->_padding_ + 0x788))(this_01,::COLLISION_PROFILE_PLAYER_ONLY,1);
        pUVar6 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        USceneComponent::SetupAttachment
                  ((USceneComponent *)this_01,*(USceneComponent **)(pUVar6 + 0xb),(FName)0x0);
        UActorComponent::RegisterComponent((UActorComponent *)this_01);
        UCapsuleComponent::SetCapsuleSize
                  ((UCapsuleComponent *)this_01,pFVar8->ScaledCapsuleRadius,
                   pFVar8->ScaledCapsuleHalfHeight,true);
        goto LAB_14bc47c70;
      }
    }
    else {
      if (EVar3 == Capsule) {
        pUVar6 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        this_01 = (UBoxComponent *)NewObject<UCapsuleComponent>(pUVar6);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_01 != (UBoxComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        (**(code **)(this_01->_padding_ + 0x788))(this_01,::COLLISION_PROFILE_PLAYER_ONLY,1);
        pUVar6 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        USceneComponent::SetupAttachment
                  ((USceneComponent *)this_01,*(USceneComponent **)(pUVar6 + 0xb),(FName)0x0);
        UActorComponent::RegisterComponent((UActorComponent *)this_01);
        UCapsuleComponent::SetCapsuleSize
                  ((UCapsuleComponent *)this_01,(float)this_00->CollideDistance,
                   (float)this_00->CollideHeight,true);
        local_d8._s_0.X = (this_00->CollideOffset).field0_0x0._s_0.X;
        local_d8._s_0.Y = (this_00->CollideOffset).field0_0x0._s_0.Y;
        local_d8._s_0.Z = (this_00->CollideOffset).field0_0x0._s_0.Z;
        USceneComponent::SetRelativeLocation
                  ((USceneComponent *)this_01,(TVector<double> *)&local_d8._s_0,false,
                   (FHitResult *)0x0,None);
      }
      else {
        if (EVar3 != Cuboid) goto LAB_14bc47c8a;
        pUVar6 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        FObjectInitializer::AssertIfInConstructor
                  (pUVar6,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar7 = Z_Construct_UClass_UBoxComponent_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_b8,pUVar7);
        local_b8._8_8_ = pUVar6;
        this_01 = (UBoxComponent *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
        if (local_b8._64_8_ != 0) {
          plVar10 = (longlong *)(local_b8 + 0x50);
          if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_b8._104_8_;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_01 != (UBoxComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        (**(code **)(this_01->_padding_ + 0x788))(this_01,::COLLISION_PROFILE_PLAYER_ONLY,1);
        pUVar6 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        USceneComponent::SetupAttachment
                  ((USceneComponent *)this_01,*(USceneComponent **)(pUVar6 + 0xb),(FName)0x0);
        UActorComponent::RegisterComponent((UActorComponent *)this_01);
        uVar1 = this_00->CollideDistance;
        uVar2 = this_00->CollideWidth;
        local_128._16_8_ = (undefined8)(int)uVar1;
        dStack_110 = (double)(int)uVar2;
        local_108 = (double)this_00->CollideHeight;
        UBoxComponent::SetBoxExtent(this_01,(TVector<double> *)(local_128 + 0x10),true);
        local_f8._s_0.X = (this_00->CollideOffset).field0_0x0._s_0.X;
        local_f8._s_0.Y = (this_00->CollideOffset).field0_0x0._s_0.Y;
        local_f8._s_0.Z = (this_00->CollideOffset).field0_0x0._s_0.Z;
        USceneComponent::SetRelativeLocation
                  ((USceneComponent *)this_01,(TVector<double> *)&local_f8._s_0,false,
                   (FHitResult *)0x0,None);
      }
LAB_14bc47c70:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UBoxComponent *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      (this->ShapeComponent).field0_0x0.DebugPtr = (UShapeComponent *)this_01;
    }
LAB_14bc47c8a:
    UDS_PlayerData::GetMainPlayerData();
    bVar5 = FWeakObjectPtr::IsValid(&local_130);
    if (bVar5) {
      (this->MainPlayerData).WeakPtr = local_130;
      TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_ColliderComponent>
                ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
                  *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
                 (UDS_ColliderComponent *)local_128,(pmf_9c6cccee)this);
      this_02 = UDS_EntityManager::GetInst();
      if (this_02 != (UDS_EntityManager *)0x0) {
        pFVar9 = UDS_EntityManager::GetCurrentMainCharEntityBase(this_02,true);
      }
      OnChangedCharacterCallback(this,(FDS_EntityBase *)0x0,pFVar9);
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2082732270073938000>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Collider\\DS_ColliderComponent.cpp"
                         ,0x50,"playerData.IsValid()");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((this->ShapeComponent).field0_0x0.DebugPtr != (UShapeComponent *)0x0) {
      return;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2082732270073938007>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Collider\\DS_ColliderComponent.cpp"
                       ,0x57,"ShapeComponent != nullptr");
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2082732270073937952>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Collider\\DS_ColliderComponent.cpp"
                       ,0x20,"false");
  }
  if (!bVar5) {
    return;
  }
code_r0x00014bc47d5c:
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// IsEnemy @ 14bc4a6f0

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

bool __thiscall UDS_ColliderComponent::IsEnemy(UDS_ColliderComponent *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FDS_EntityBase *pFVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  
  pFVar4 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr);
  if (pFVar4 == (FDS_EntityBase *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2082732270073938181>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Collider\\DS_ColliderComponent.cpp"
                       ,0x105,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    UDS_CharInfoData::GetData((ulong64)&local_res8);
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar2) {
      bVar2 = FWeakObjectPtr::IsValid(&(this->MainCharInfoData).WeakPtr);
      if (bVar2) {
        pUVar5 = FWeakObjectPtr::Get(&local_res8);
        pUVar6 = FWeakObjectPtr::Get(&(this->MainCharInfoData).WeakPtr);
        bVar2 = FDS_TeamInfo::IsEnemyTeam
                          ((FDS_TeamInfo *)&pUVar5[0xf].field_0x18,
                           (FDS_TeamInfo *)&pUVar6[0xf].field_0x18);
        return bVar2;
      }
    }
  }
  return false;
}

// OnChangedCharState @ 14bc4d4c0

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
UDS_ColliderComponent::OnChangedCharState
          (UDS_ColliderComponent *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  UShapeComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  FDS_EntityBase *pFVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  UDS_CharStateData *pUVar7;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res20;
  EDS_CharState local_18 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2082732270073938054>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Collider\\DS_ColliderComponent.cpp"
                       ,0x86,"InCharStateData.IsValid()");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->bIsCheckEnemy == true) {
    pFVar4 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr);
    if (pFVar4 == (FDS_EntityBase *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2082732270073938181>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Collider\\DS_ColliderComponent.cpp"
                         ,0x105,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      UDS_CharInfoData::GetData((ulong64)&local_res20);
      bVar3 = FWeakObjectPtr::IsValid(&local_res20);
      if ((bVar3) && (bVar3 = FWeakObjectPtr::IsValid(&(this->MainCharInfoData).WeakPtr), bVar3)) {
        pUVar5 = FWeakObjectPtr::Get(&local_res20);
        pUVar6 = FWeakObjectPtr::Get(&(this->MainCharInfoData).WeakPtr);
        bVar3 = FDS_TeamInfo::IsEnemyTeam
                          ((FDS_TeamInfo *)&pUVar5[0xf].field_0x18,
                           (FDS_TeamInfo *)&pUVar6[0xf].field_0x18);
        if (bVar3) goto LAB_14bc4d5c7;
      }
    }
    bVar3 = false;
  }
  else {
LAB_14bc4d5c7:
    pUVar7 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_18[0] = Abnormal;
    bVar3 = UDS_CharStateData::HasCharState(pUVar7,local_18);
    if (bVar3) {
      bVar3 = this->bIsAbnormalMoveBlock != false;
    }
    else {
      pUVar7 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_18[1] = 0x10;
      bVar3 = UDS_CharStateData::HasCharState(pUVar7,local_18 + 1);
      if (bVar3) {
        bVar3 = this->bIsSkillMoveBlock != false;
      }
      else {
        bVar3 = this->bIsMoveBlock != false;
      }
    }
  }
  pUVar1 = (this->ShapeComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UShapeComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x780))(pUVar1,-bVar3 & 3);
  }
  return;
}

// OnChangedCharacterCallback @ 14bc4d870

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
UDS_ColliderComponent::OnChangedCharacterCallback
          (UDS_ColliderComponent *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined1 local_78 [16];
  FName local_68;
  undefined1 uStack_60;
  uint7 uStack_5f;
  longlong local_58;
  FWeakObjectPtr FStack_50;
  FWeakObjectPtr local_48;
  undefined1 local_38 [16];
  ForAnyElementType local_28;
  EDS_CharState EStack_20;
  undefined8 local_18;
  
  RemoveAllCharacterDelegate(this);
  if (param_2 == (FDS_EntityBase *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2082732270073938027>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Collider\\DS_ColliderComponent.cpp"
                       ,0x6b,"mainPlayerEntity != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if (this->bIsCheckEnemy == true) {
      UDS_CharInfoData::GetData((ulong64)&local_res18);
      (this->MainCharInfoData).WeakPtr = local_res18;
      bVar2 = FWeakObjectPtr::IsValid(&(this->MainCharInfoData).WeakPtr);
      if (bVar2) {
        pUVar3 = FWeakObjectPtr::Get(&(this->MainCharInfoData).WeakPtr);
        TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_ColliderComponent>
                  ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    *)&pUVar3[5].field_0x20,(UDS_ColliderComponent *)local_78,(pmf_cab7362f)this);
      }
    }
    UDS_CharStateData::GetData((ulong64)&local_res20);
    (this->MainCharStateData).WeakPtr = local_res20;
    bVar2 = FWeakObjectPtr::IsValid(&(this->MainCharStateData).WeakPtr);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&(this->MainCharStateData).WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_ColliderComponent>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                  *)&pUVar3[7].field_0x20,(UDS_ColliderComponent *)(local_78 + 8),(pmf_143ba4ab)this
                );
      local_68 = FGameplayTag::EmptyTag.TagName;
      local_58 = 0;
      FStack_50.ObjectIndex = 0;
      FStack_50.ObjectSerialNumber = 0;
      local_48.ObjectIndex = 0;
      local_48.ObjectSerialNumber = 0;
      uStack_60 = 0;
      local_38._8_8_ = (ulonglong)uStack_5f << 8;
      local_28.Data = (FScriptContainerElement *)0x0;
      EStack_20 = None;
      local_38._0_4_ = FGameplayTag::EmptyTag.TagName.ComparisonIndex.Value;
      local_38._4_4_ = FGameplayTag::EmptyTag.TagName.Number;
      local_18._0_4_ = None;
      local_18._4_4_ = None;
      OnChangedCharState(this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)
                              (this->MainCharStateData).WeakPtr,(FDS_ChangedCharStateInfo *)local_38
                        );
    }
  }
  return;
}

// OnChangedTeamInfoCallback @ 14bc4e0b0

void __thiscall
UDS_ColliderComponent::OnChangedTeamInfoCallback
          (UDS_ColliderComponent *this,TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  uint7 uStack_5f;
  FDS_ChangedCharStateInfo local_38;
  
  local_38._8_8_ = (ulonglong)uStack_5f << 8;
  local_38.AddedCharState = None;
  local_38.RemovedCharState = None;
  local_38.StateTag.TagName = FGameplayTag::EmptyTag.TagName;
  local_38.AddedCharDetailState = None;
  local_38.RemovedCharDetailState = None;
  OnChangedCharState(this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)
                          (this->MainCharStateData).WeakPtr,&local_38);
  return;
}

// RemoveAllCharacterDelegate @ 14bc59ff0

void __thiscall UDS_ColliderComponent::RemoveAllCharacterDelegate(UDS_ColliderComponent *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->MainCharInfoData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MainCharInfoData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[5].field_0x20,this);
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->MainCharStateData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MainCharStateData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
  }
  return;
}

// SetCollisionEnabled @ 14bc5d810

void __thiscall UDS_ColliderComponent::SetCollisionEnabled(UDS_ColliderComponent *this,Type param_1)

{
  UShapeComponent *pUVar1;
  
  pUVar1 = (this->ShapeComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UShapeComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bc5d81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x780))();
    return;
  }
  return;
}

