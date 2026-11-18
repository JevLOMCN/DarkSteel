// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// StaticClass @ 147aa5120

UClass * __cdecl ADefaultPawn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADefaultPawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DefaultPawn",
               &Z_Registration_Info_UClass_ADefaultPawn.InnerSingleton,
               StaticRegisterNativesADefaultPawn,0x368,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Game",InternalConstructor<ADefaultPawn>,
               InternalVTableHelperCtorCaller<ADefaultPawn>,local_res8,APawn::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADefaultPawn.InnerSingleton;
}

// ADefaultPawn @ 147aba710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ADefaultPawn * __thiscall ADefaultPawn::ADefaultPawn(ADefaultPawn *this,FVTableHelper *param_1)

{
  APawn::APawn((APawn *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->MovementComponent).field0_0x0.DebugPtr = (UPawnMovementComponent *)0x0;
  (this->CollisionComponent).field0_0x0.DebugPtr = (USphereComponent *)0x0;
  (this->MeshComponent).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  return this;
}

// ADefaultPawn @ 147aba760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ADefaultPawn * __thiscall ADefaultPawn::ADefaultPawn(ADefaultPawn *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  UClass *pUVar3;
  USphereComponent *pUVar4;
  UClass *pUVar5;
  UPawnMovementComponent *pUVar6;
  UStaticMeshComponent *pUVar7;
  TObjectPtr<UStaticMesh>_u_0 TVar8;
  ulonglong uVar9;
  TVector<double>_u_0 local_28;
  
  APawn::APawn((APawn *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  (this->MovementComponent).field0_0x0.DebugPtr = (UPawnMovementComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->CollisionComponent).field0_0x0.DebugPtr = (USphereComponent *)0x0;
  (this->MeshComponent).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  AActor::SetCanBeDamaged((AActor *)this,true);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xef;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined4 *)&this->_padding_ = 0x40400000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  FVar2 = CollisionComponentName;
  pUVar3 = Z_Construct_UClass_USphereComponent_NoRegister();
  pUVar4 = (USphereComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USphereComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->CollisionComponent).field0_0x0.DebugPtr = pUVar4;
  pUVar4->SphereRadius = 35.0;
  pUVar4 = (this->CollisionComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar4->_padding_ + 0x788))(pUVar4,UCollisionProfile::Pawn_ProfileName,1);
  *(undefined1 *)((longlong)&((this->CollisionComponent).field0_0x0.DebugPtr)->_padding_ + 7) = 0;
  USceneComponent::SetShouldUpdatePhysicsVolume
            ((USceneComponent *)(this->CollisionComponent).field0_0x0.DebugPtr,true);
  UActorComponent::SetCanEverAffectNavigation
            ((UActorComponent *)(this->CollisionComponent).field0_0x0.DebugPtr,false);
  pbVar1 = (byte *)((longlong)&((this->CollisionComponent).field0_0x0.DebugPtr)->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (this->CollisionComponent).field0_0x0.DebugPtr, pUVar4 != (USphereComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->CollisionComponent).field0_0x0;
  FVar2 = MovementComponentName;
  pUVar3 = Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
  pUVar5 = Z_Construct_UClass_UPawnMovementComponent_NoRegister();
  pUVar6 = (UPawnMovementComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar5,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UPawnMovementComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->MovementComponent).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (this->CollisionComponent).field0_0x0.DebugPtr, pUVar4 != (USphereComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  uVar9 = (ulonglong)_tls_index;
  pUVar6->_padding_ = (longlong)(this->CollisionComponent).field0_0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FGCObject::RegisterGCObject((FGCObject *)&::ConstructorStatics);
      ::ConstructorStatics.SphereMesh.Object.field0_0x0 =
           (TObjectPtr<UStaticMesh>_u_0)(FObjectPtr)0x0;
      ::ConstructorStatics.SphereMesh._padding_ =
           (longlong)&___7__FObjectFinder_VUStaticMesh___ConstructorHelpers__6B_;
      ConstructorHelpers::CheckIfIsInConstructor(L"/Engine/EngineMeshes/Sphere");
      ::FString::FString((FString *)&local_28._s_0,L"/Engine/EngineMeshes/Sphere");
      ConstructorHelpers::StripObjectClass((FString *)&local_28._s_0,true);
      TVar8.DebugPtr =
           ConstructorHelpersInternal::FindOrLoadObject<UStaticMesh>((FString *)&local_28._s_0,0);
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (TVar8.DebugPtr == (UStaticMesh *)0x0)) {
        ::ConstructorStatics.SphereMesh.Object.field0_0x0 =
             (TObjectPtr<UStaticMesh>_u_0)(TObjectPtr<UStaticMesh>_u_0)TVar8.DebugPtr;
        if (TVar8.DebugPtr == (UStaticMesh *)0x0) {
          ConstructorHelpers::FailedToFind(L"/Engine/EngineMeshes/Sphere");
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
        ::ConstructorStatics.SphereMesh.Object.field0_0x0 =
             (TObjectPtr<UStaticMesh>_u_0)(TObjectPtr<UStaticMesh>_u_0)TVar8.DebugPtr;
      }
      if ((void *)local_28._s_0.X != (void *)0x0) {
        FMemory::Free((void *)local_28._s_0.X);
      }
      atexit(`ADefaultPawn::ADefaultPawn'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = MeshComponentName;
  pUVar3 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  pUVar7 = (UStaticMeshComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar3,pUVar3,false,false);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar7 == (UStaticMeshComponent *)0x0)) {
    (this->MeshComponent).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 == (UStaticMeshComponent *)0x0) goto LAB_147abaaa5;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
    (this->MeshComponent).field0_0x0.DebugPtr = pUVar7;
  }
  UActorComponent::SetCanEverAffectNavigation((UActorComponent *)pUVar7,false);
  pUVar7 = (this->MeshComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar7->_padding_ + 0xb28))(pUVar7,::ConstructorStatics.SphereMesh.Object.field0_0x0)
  ;
  pbVar1 = (byte *)((longlong)&((this->MeshComponent).field0_0x0.DebugPtr)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  pbVar1 = (byte *)((longlong)&((this->MeshComponent).field0_0x0.DebugPtr)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 8;
  pbVar1 = (byte *)((longlong)&((this->MeshComponent).field0_0x0.DebugPtr)->_padding_ + 5);
  *pbVar1 = *pbVar1 | 1;
  pbVar1 = (byte *)((longlong)&((this->MeshComponent).field0_0x0.DebugPtr)->_padding_ + 6);
  *pbVar1 = *pbVar1 | 0x20;
  pbVar1 = (byte *)((longlong)&((this->MeshComponent).field0_0x0.DebugPtr)->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0xfb;
  pbVar1 = (byte *)((longlong)&((this->MeshComponent).field0_0x0.DebugPtr)->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0xef;
  pbVar1 = (byte *)((longlong)&((this->MeshComponent).field0_0x0.DebugPtr)->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xf7;
  *(undefined1 *)&((this->MeshComponent).field0_0x0.DebugPtr)->_padding_ = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)(this->MeshComponent).field0_0x0.DebugPtr,
             (USceneComponent *)this->_padding_,(FName)0x0);
  pUVar7 = (this->MeshComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar7->_padding_ + 0x788))(pUVar7,UCollisionProfile::Pawn_ProfileName,1);
  local_28._s_0.X =
       (double)(((this->CollisionComponent).field0_0x0.DebugPtr)->SphereRadius * ___real_3bcccccd);
  local_28._s_0.Y = local_28._s_0.X;
  local_28._s_0.Z = local_28._s_0.X;
  USceneComponent::SetRelativeScale3D
            ((USceneComponent *)(this->MeshComponent).field0_0x0.DebugPtr,
             (TVector<double> *)&local_28._s_0);
  UPrimitiveComponent::SetGenerateOverlapEvents
            ((UPrimitiveComponent *)(this->MeshComponent).field0_0x0.DebugPtr,false);
LAB_147abaaa5:
  this->bAddDefaultMovementBindings = 1;
  this->BaseTurnRate = 45.0;
  this->BaseLookUpRate = 45.0;
  return this;
}

// ~ADefaultPawn @ 147abec80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ADefaultPawn::~ADefaultPawn(ADefaultPawn *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  APawn::~APawn((APawn *)this);
  return;
}

// GetMovementComponent @ 147ae9c00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPawnMovementComponent * __thiscall ADefaultPawn::GetMovementComponent(ADefaultPawn *this)

{
  return (this->MovementComponent).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 147aeb080

UClass * __cdecl ADefaultPawn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADefaultPawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DefaultPawn",
               &Z_Registration_Info_UClass_ADefaultPawn.InnerSingleton,
               StaticRegisterNativesADefaultPawn,0x368,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Game",InternalConstructor<ADefaultPawn>,
               InternalVTableHelperCtorCaller<ADefaultPawn>,local_res8,APawn::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADefaultPawn.InnerSingleton;
}

// LookUpAtRate @ 147af9140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ADefaultPawn::LookUpAtRate(ADefaultPawn *this,float param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UWorld *pUVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x898);
  pUVar1 = AActor::GetWorld((AActor *)this);
                    /* WARNING: Could not recover jumptable at 0x000147af9192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (this,pUVar1->DeltaTimeSeconds * *(float *)&this->_padding_ *
                  param_1 * this->BaseLookUpRate);
  return;
}

// MoveForward @ 147af9e80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ADefaultPawn::MoveForward(ADefaultPawn *this,float param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TRotationMatrix<double> *pTVar3;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  TRotator<double> local_b8;
  TRotationMatrix<double> local_98;
  
  if ((param_1 != 0.0) && (plVar1 = (longlong *)this->_padding_, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x7a8))(plVar1,&local_b8);
    pcVar2 = *(code **)(this->_padding_ + 0x888);
    pTVar3 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>(&local_98,&local_b8);
    local_d8 = *(undefined8 *)pTVar3;
    uStack_d0 = *(undefined8 *)&pTVar3->field_0x8;
    local_c8 = *(undefined8 *)&pTVar3->field_0x10;
    (*pcVar2)(this,&local_d8,param_1,0);
  }
  return;
}

// MoveRight @ 147af9f20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ADefaultPawn::MoveRight(ADefaultPawn *this,float param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TRotationMatrix<double> *pTVar3;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  TRotator<double> local_b8;
  TRotationMatrix<double> local_98;
  
  if ((param_1 != 0.0) && (plVar1 = (longlong *)this->_padding_, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x7a8))(plVar1,&local_b8);
    pcVar2 = *(code **)(this->_padding_ + 0x888);
    pTVar3 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>(&local_98,&local_b8);
    local_d8 = *(undefined8 *)&pTVar3->field_0x20;
    uStack_d0 = *(undefined8 *)&pTVar3->field_0x28;
    local_c8 = *(undefined8 *)&pTVar3->field_0x30;
    (*pcVar2)(this,&local_d8,param_1,0);
  }
  return;
}

// MoveUp_World @ 147af9fc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ADefaultPawn::MoveUp_World(ADefaultPawn *this,float param_1)

{
  double local_28;
  double dStack_20;
  double local_18;
  
  if (param_1 != 0.0) {
    local_28 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    (**(code **)(this->_padding_ + 0x888))
              (SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0),&local_28,param_1,0);
  }
  return;
}

// SetupPlayerInputComponent @ 147b14d00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ADefaultPawn::SetupPlayerInputComponent(ADefaultPawn *this,UInputComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  code *local_b8;
  undefined8 uStack_b0;
  FName local_a8;
  FName local_a0;
  FName local_98 [2];
  code *local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  code *local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  code *local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  code *local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  code *local_48;
  undefined4 uStack_40;
  uint uStack_3c;
  code *local_38;
  longlong lStack_30;
  
  if (param_1 == (UInputComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlayerInputComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DefaultPawn.cpp"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bAddDefaultMovementBindings != 0) {
    InitializeDefaultPawnInputBindings();
    local_b8 = _vcall__2232__flat______;
    uStack_b0._0_4_ = 0;
    pFVar3 = ::FName::FName(&local_res8,"DefaultPawn_MoveForward");
    UInputComponent::BindAxis<ADefaultPawn>(param_1,*pFVar3,this,(pmf_099752ad *)&local_b8);
    uStack_b0._0_4_ = 0;
    local_b8 = _vcall__2240__flat______;
    pFVar3 = ::FName::FName(&local_res10,"DefaultPawn_MoveRight");
    local_88 = local_b8;
    uStack_80 = (undefined4)uStack_b0;
    uStack_7c = uStack_b0._4_4_;
    UInputComponent::BindAxis<ADefaultPawn>(param_1,*pFVar3,this,(pmf_099752ad *)&local_88);
    uStack_b0._0_4_ = 0;
    local_b8 = _vcall__2248__flat______;
    pFVar3 = ::FName::FName(&local_res18,"DefaultPawn_MoveUp");
    local_78 = local_b8;
    uStack_70 = (undefined4)uStack_b0;
    uStack_6c = uStack_b0._4_4_;
    UInputComponent::BindAxis<ADefaultPawn>(param_1,*pFVar3,this,(pmf_099752ad *)&local_78);
    uStack_b0._0_4_ = 0;
    local_b8 = APawn::_vcall__2208__flat______;
    pFVar3 = ::FName::FName(&local_res20,"DefaultPawn_Turn");
    local_68 = local_b8;
    uStack_60 = (undefined4)uStack_b0;
    uStack_5c = uStack_b0._4_4_;
    UInputComponent::BindAxis<ADefaultPawn>(param_1,*pFVar3,this,(pmf_099752ad *)&local_68);
    uStack_b0._0_4_ = 0;
    local_b8 = _vcall__2256__flat______;
    pFVar3 = ::FName::FName(&local_a8,"DefaultPawn_TurnRate");
    local_58 = local_b8;
    uStack_50 = (undefined4)uStack_b0;
    uStack_4c = uStack_b0._4_4_;
    UInputComponent::BindAxis<ADefaultPawn>(param_1,*pFVar3,this,(pmf_099752ad *)&local_58);
    uStack_b0._0_4_ = 0;
    local_b8 = APawn::_vcall__2200__flat______;
    pFVar3 = ::FName::FName(&local_a0,"DefaultPawn_LookUp");
    local_48 = local_b8;
    uStack_40 = (undefined4)uStack_b0;
    uStack_3c = uStack_b0._4_4_;
    UInputComponent::BindAxis<ADefaultPawn>(param_1,*pFVar3,this,(pmf_099752ad *)&local_48);
    uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
    local_b8 = _vcall__2264__flat______;
    pFVar3 = ::FName::FName(local_98,"DefaultPawn_LookUpRate");
    local_38 = local_b8;
    lStack_30 = uStack_b0;
    UInputComponent::BindAxis<ADefaultPawn>(param_1,*pFVar3,this,(pmf_099752ad *)&local_38);
  }
  return;
}

// StaticRegisterNativesADefaultPawn @ 147b171e0

void __cdecl ADefaultPawn::StaticRegisterNativesADefaultPawn(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_ADefaultPawn_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TurnAtRate @ 147b1d8e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ADefaultPawn::TurnAtRate(ADefaultPawn *this,float param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UWorld *pUVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x8a0);
  pUVar1 = AActor::GetWorld((AActor *)this);
                    /* WARNING: Could not recover jumptable at 0x000147b1d932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (this,pUVar1->DeltaTimeSeconds * *(float *)&this->_padding_ *
                  param_1 * this->BaseTurnRate);
  return;
}

// UpdateNavigationRelevance @ 147b22570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ADefaultPawn::UpdateNavigationRelevance(ADefaultPawn *this)

{
  USphereComponent *this_00;
  
  this_00 = (this->CollisionComponent).field0_0x0.DebugPtr;
  if (this_00 != (USphereComponent *)0x0) {
    UActorComponent::SetCanEverAffectNavigation
              ((UActorComponent *)this_00,(bool)((byte)((uint)this->_padding_ >> 3) & 1));
    return;
  }
  return;
}

// execLookUpAtRate @ 147b26440

void __cdecl ADefaultPawn::execLookUpAtRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x8d8))(param_1,local_res8[0]);
  return;
}

// execMoveForward @ 147b264d0

void __cdecl ADefaultPawn::execMoveForward(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x8b8))(param_1,local_res8[0]);
  return;
}

// execMoveRight @ 147b26560

void __cdecl ADefaultPawn::execMoveRight(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x8c0))(param_1,local_res8[0]);
  return;
}

// execMoveUp_World @ 147b265f0

void __cdecl ADefaultPawn::execMoveUp_World(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x8c8))(param_1,local_res8[0]);
  return;
}

// execTurnAtRate @ 147b26830

void __cdecl ADefaultPawn::execTurnAtRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x8d0))(param_1,local_res8[0]);
  return;
}

