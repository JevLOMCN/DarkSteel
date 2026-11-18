// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b440f60

UClass * __cdecl UDS_CharacterTrajectoryComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharacterTrajectoryComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharacterTrajectoryComponent",
               &Z_Registration_Info_UClass_UDS_CharacterTrajectoryComponent.InnerSingleton,
               StaticRegisterNativesUDS_CharacterTrajectoryComponent,0x300,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_CharacterTrajectoryComponent>,
               InternalVTableHelperCtorCaller<UDS_CharacterTrajectoryComponent>,local_res8,
               UCharacterTrajectoryComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharacterTrajectoryComponent.InnerSingleton;
}

// UDS_CharacterTrajectoryComponent @ 14b443a70

UDS_CharacterTrajectoryComponent * __thiscall
UDS_CharacterTrajectoryComponent::UDS_CharacterTrajectoryComponent
          (UDS_CharacterTrajectoryComponent *this,FVTableHelper *param_1)

{
  UCharacterTrajectoryComponent::UCharacterTrajectoryComponent
            ((UCharacterTrajectoryComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SkeletalMeshComp).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_CharacterTrajectoryComponent @ 14b444300

void __thiscall
UDS_CharacterTrajectoryComponent::~UDS_CharacterTrajectoryComponent
          (UDS_CharacterTrajectoryComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UCharacterTrajectoryComponent::~UCharacterTrajectoryComponent
            ((UCharacterTrajectoryComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b445070

UClass * __cdecl UDS_CharacterTrajectoryComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharacterTrajectoryComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharacterTrajectoryComponent",
               &Z_Registration_Info_UClass_UDS_CharacterTrajectoryComponent.InnerSingleton,
               StaticRegisterNativesUDS_CharacterTrajectoryComponent,0x300,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_CharacterTrajectoryComponent>,
               InternalVTableHelperCtorCaller<UDS_CharacterTrajectoryComponent>,local_res8,
               UCharacterTrajectoryComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharacterTrajectoryComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_CharacterTrajectoryComponent @ 14b445640

void __cdecl
UDS_CharacterTrajectoryComponent::StaticRegisterNativesUDS_CharacterTrajectoryComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_CharacterTrajectoryComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnMovementUpdate @ 14b4470a0

void __cdecl
UDS_CharacterTrajectoryComponent::execOnMovementUpdate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_48._s_0.Z = local_68;
  local_48._s_0.X = local_78;
  local_48._s_0.Y = dStack_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28._s_0.Z = local_50;
  local_28._s_0.X = local_60;
  local_28._s_0.Y = dStack_58;
  OnMovementUpdate((UDS_CharacterTrajectoryComponent *)param_1,local_res10[0],
                   (TVector<double> *)&local_28._s_0,(TVector<double> *)&local_48._s_0);
  return;
}

// UDS_CharacterTrajectoryComponent @ 14bc2aa30

UDS_CharacterTrajectoryComponent * __thiscall
UDS_CharacterTrajectoryComponent::UDS_CharacterTrajectoryComponent
          (UDS_CharacterTrajectoryComponent *this,FObjectInitializer *param_1)

{
  UCharacterTrajectoryComponent::UCharacterTrajectoryComponent
            ((UCharacterTrajectoryComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SkeletalMeshComp).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// BeginPlay @ 14bc2e2f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_CharacterTrajectoryComponent::BeginPlay(UDS_CharacterTrajectoryComponent *this)

{
  byte *pbVar1;
  uint uVar2;
  AActor *this_00;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  UFunction *pUVar6;
  
  bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar4) {
    if (this == (UDS_CharacterTrajectoryComponent *)0x0) goto LAB_14780c6b0;
    this_00 = (AActor *)this->_padding_;
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
    if ((!bVar4) || (this_00 == (AActor *)0x0)) goto LAB_14780c6b0;
    pUVar5 = AActor::GetWorld(this_00);
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar5);
    if (!bVar4) goto LAB_14780c6b0;
  }
  FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
LAB_14780c6b0:
  if ((this->_padding_ & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x64d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->_padding_ & 0x20000000) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasBegunPlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x64e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar2 = *(uint *)(this->_padding_ + 0xd4);
  if (((uVar2 >> 0x12 & 1) != 0) || (-1 < (char)uVar2)) {
    pUVar6 = UObject::FindFunctionChecked((UObject *)this,NAME_UActorComponent_ReceiveBeginPlay);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar6,0);
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 0x20;
  return;
}

// GetCurrentAcceleration @ 14bc402e0

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

TVector<double> * __thiscall
UDS_CharacterTrajectoryComponent::GetCurrentAcceleration
          (UDS_CharacterTrajectoryComponent *this,TVector<double> *__return_storage_ptr__)

{
  TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *this_00;
  FWeakObjectPtr FVar1;
  undefined8 uVar2;
  bool bVar3;
  EDS_EntityType EVar4;
  FDS_EntityBase *pFVar5;
  UObject *pUVar6;
  UDS_DataBase *this_01;
  UDS_CharStateData *this_02;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *this_03;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18 [2];
  double local_58;
  double local_50;
  double local_48;
  
  FVar1 = (FWeakObjectPtr)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (FVar1 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = FVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar1 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  pFVar5 = FDS_EntityBase::GetEntityBaseFromActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8)
  ;
  if (pFVar5 != (FDS_EntityBase *)0x0) {
    this_00 = &this->MovementCore;
    bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar3) {
      this_03 = &this->CharStateData;
      bVar3 = FWeakObjectPtr::IsValid(&this_03->WeakPtr);
      if ((bVar3) &&
         (pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr),
         *(double *)&pUVar6[0xc].field_0x8 * *(double *)&pUVar6[0xc].field_0x8 +
         *(double *)(pUVar6 + 0xc) * *(double *)(pUVar6 + 0xc) +
         *(double *)&pUVar6[0xc].field_0x10 * *(double *)&pUVar6[0xc].field_0x10 != 0.0)) {
        pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        fVar7 = (float)(**(code **)(*(longlong *)pUVar6 + 0x3b0))(pUVar6);
        pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        (**(code **)(*(longlong *)pUVar6 + 0x460))(pUVar6,&local_58);
        this_01 = (UDS_DataBase *)FWeakObjectPtr::Get(&this_03->WeakPtr);
        EVar4 = UDS_DataBase::GetEntityType(this_01);
        if (EVar4 == MainCharacter) {
          (**(code **)(pFVar5->_padding_ + 0x1b8))(pFVar5);
          bVar3 = TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_InputData,FWeakObjectPtr> *)local_res18,(void *)0x0
                            );
          if ((bVar3) || (pUVar6 = FWeakObjectPtr::Get(local_res18), pUVar6[6].field_0x11 == '\0'))
          {
            this_02 = (UDS_CharStateData *)FWeakObjectPtr::Get(&this_03->WeakPtr);
            local_res8.ObjectIndex = 4;
            local_res8.ObjectSerialNumber = 0;
            bVar3 = UDS_CharStateData::HasCharState(this_02,(EDS_CharState *)&local_res8);
            if (!bVar3) goto LAB_14bc40469;
          }
        }
        else if (((EVar4 == NetCharacter) || (EVar4 == DummyCharacter)) &&
                (auVar8._0_8_ = local_50 * local_50, auVar8._8_8_ = 0, auVar9._8_8_ = 0,
                auVar9._0_8_ = local_58 * local_58 + auVar8._0_8_, auVar9 = sqrtpd(auVar8,auVar9),
                auVar9._0_8_ <= __real_3e45798ee2308c3a)) goto LAB_14bc40469;
        dVar10 = (double)fVar7;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10 * local_48;
        (__return_storage_ptr__->field0_0x0)._s_0.X = dVar10 * local_58;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar10 * local_50;
        return __return_storage_ptr__;
      }
    }
  }
LAB_14bc40469:
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetPoseSearchQueryTrajectory @ 14bc43160

FTransformTrajectory * __thiscall
UDS_CharacterTrajectoryComponent::GetPoseSearchQueryTrajectory
          (UDS_CharacterTrajectoryComponent *this)

{
  return (FTransformTrajectory *)&this->_padding_;
}

// Init @ 14bc470e0

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

bool __thiscall UDS_CharacterTrajectoryComponent::Init(UDS_CharacterTrajectoryComponent *this)

{
  uint *puVar1;
  longlong *plVar2;
  double *pdVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FDS_EntityBase *pFVar10;
  char *pcVar11;
  FWeakObjectPtr *pFVar12;
  UObject *pUVar13;
  USceneComponent *this_00;
  TRotator<double> *this_01;
  atomic<unsigned_char> *paVar14;
  ulonglong uVar15;
  int iVar16;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  FWeakObjectPtr local_res18;
  undefined1 local_res20 [8];
  uint uStack_cc;
  undefined1 local_c8 [40];
  longlong lStack_a0;
  longlong local_98;
  TQuat<double> local_88;
  TRotator<double> local_68;
  
  pUVar13 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar13 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar13);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar13;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar13);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pFVar10 = FDS_EntityBase::GetEntityBaseFromActor
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8);
  if (pFVar10 == (FDS_EntityBase *)0x0) {
    pcVar11 = "entityBase";
    iVar16 = 0x33;
    paVar14 = &bGEnsureHasExecuted<8242814622172708915>;
  }
  else {
    UDS_CharStateData::GetData((ulong64)&local_res18);
    (this->CharStateData).WeakPtr = local_res18;
    bVar7 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
    if (bVar7) {
      pFVar12 = (FWeakObjectPtr *)(**(code **)(pFVar10->_padding_ + 0x78))(pFVar10,local_res20);
      (this->MovementCore).WeakPtr = *pFVar12;
      bVar7 = FWeakObjectPtr::IsValid(&(this->MovementCore).WeakPtr);
      if (bVar7) {
        pFVar12 = (FWeakObjectPtr *)(**(code **)(pFVar10->_padding_ + 0x80))(pFVar10);
        (this->SkeletalMeshComp).WeakPtr = *pFVar12;
        bVar7 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                          (&this->SkeletalMeshComp,(void *)0x0);
        if (!bVar7) {
          *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x14;
          *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x14;
          FTrajectorySamplingData::Init((FTrajectorySamplingData *)&this->_padding_);
          uVar9 = (uint)this->_padding_;
          uVar15 = (ulonglong)uVar9;
          plVar2 = &this->_padding_;
          if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar15);
          }
          puVar1 = (uint *)((longlong)&this->_padding_ + 4);
          *(undefined4 *)&this->_padding_ = 0;
          if (*puVar1 != uVar9) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,uVar9,(ForAnyElementType *)plVar2,0,(int *)puVar1);
          }
          if (0 < (int)uVar9) {
            do {
              if ((((undefined1 *)*plVar2 <
                    (undefined1 *)((longlong)&UE::Math::TVector<double>::ZeroVector.field0_0x0 + 1))
                  && (&UE::Math::TVector<double>::ZeroVector <
                      (TVector<double> *)((undefined1 *)*plVar2 + (longlong)(int)*puVar1 * 0x18)))
                 && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar7)) {
                pcVar5 = (code *)swi(3);
                uVar8 = (*pcVar5)();
                return (bool)uVar8;
              }
              uVar9 = (uint)this->_padding_;
              if (uVar9 == *puVar1) {
                uVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,(ForAnyElementType *)plVar2,(int *)puVar1);
              }
              *(uint *)&this->_padding_ = uVar9 + 1;
              uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              lVar4 = *plVar2;
              pdVar3 = (double *)(lVar4 + (longlong)(int)uVar9 * 0x18);
              *pdVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              pdVar3[1] = (double)uVar6;
              *(double *)(lVar4 + (longlong)(int)uVar9 * 0x18 + 0x10) =
                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          pUVar13 = FWeakObjectPtr::Get(&(this->MovementCore).WeakPtr);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar13 + 1),this);
          local_c8._24_8_ = (ulonglong)uStack_cc << 0x20;
          local_c8._16_8_ = OnMovementUpdate;
          pUVar13 = FWeakObjectPtr::Get(&(this->MovementCore).WeakPtr);
          TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
          ::AddUObject<UDS_CharacterTrajectoryComponent>
                    ((TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector<double>,UE::Math::TVector<double>),FDefaultDelegateUserPolicy>
                      *)(pUVar13 + 1),(UDS_CharacterTrajectoryComponent *)local_c8,
                     (pmf_2a69784f *)this);
          pUVar13 = FWeakObjectPtr::Get(&(this->SkeletalMeshComp).WeakPtr);
          local_c8._32_8_ = *(undefined8 *)&pUVar13[0xd].field_0x8;
          lStack_a0 = *(longlong *)&pUVar13[0xd].field_0x10;
          local_98 = *(longlong *)&pUVar13[0xd].field_0x18;
          this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(this->SkeletalMeshComp).WeakPtr);
          this_01 = USceneComponent::GetComponentRotation(this_00,&local_68);
          UE::Math::TRotator<double>::Quaternion(this_01,&local_88);
          FMotionTrajectoryLibrary::InitTrajectorySamples
                    ((FTransformTrajectory *)&this->_padding_,
                     (FTrajectorySamplingData *)&this->_padding_,
                     (TVector<double> *)(local_c8 + 0x20),&local_88);
          return true;
        }
        pcVar11 = "SkeletalMeshComp != nullptr";
        iVar16 = 0x45;
        paVar14 = &bGEnsureHasExecuted<8242814622172708933>;
      }
      else {
        pcVar11 = "MovementCore.IsValid()";
        iVar16 = 0x3f;
        paVar14 = &bGEnsureHasExecuted<8242814622172708927>;
      }
    }
    else {
      pcVar11 = "CharStateData.IsValid()";
      iVar16 = 0x39;
      paVar14 = &bGEnsureHasExecuted<8242814622172708921>;
    }
  }
  bVar7 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar14,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Movement\\DS_CharacterTrajectoryComponent.cpp"
                     ,iVar16,pcVar11);
  if (!bVar7) {
    return false;
  }
  pcVar5 = (code *)swi(3);
  uVar8 = (*pcVar5)();
  return (bool)uVar8;
}

// InitializeComponent @ 14bc498c0

void __thiscall
UDS_CharacterTrajectoryComponent::InitializeComponent(UDS_CharacterTrajectoryComponent *this)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->_padding_ & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x637,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->_padding_ & 0x8000000) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasBeenInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x638,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  return;
}

// OnMovementUpdate @ 14bc50bd0

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
UDS_CharacterTrajectoryComponent::OnMovementUpdate
          (UDS_CharacterTrajectoryComponent *this,float param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  undefined4 uStack_3c;
  TArrayView<UE::Math::TVector<double>,int> local_38 [3];
  
  uVar1 = (uint)this->_padding_;
  if (((uVar1 == 0) || (uVar1 != GFrameNumber)) && (0.0 < param_1)) {
    UpdateTrajectoryData(this,param_1);
    local_38[0].DataPtr = (TVector<double> *)this->_padding_;
    iVar2 = (int)this->_padding_;
    if ((iVar2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_38[0]._12_4_ = uStack_3c;
    local_38[0].ArrayNum = iVar2;
    FMotionTrajectoryLibrary::UpdateHistory_TransformHistory
              ((FTransformTrajectory *)&this->_padding_,local_38,
               (FCharacterTrajectoryData *)&this->_padding_,
               (FTrajectorySamplingData *)&this->_padding_,param_1);
    FMotionTrajectoryLibrary::UpdatePrediction_SimulateCharacterMovement
              ((FTransformTrajectory *)&this->_padding_,(FCharacterTrajectoryData *)&this->_padding_
               ,(FTrajectorySamplingData *)&this->_padding_);
    *(uint *)&this->_padding_ = GFrameNumber;
    if (UDS_GameInstance::bIsCharacterTrajectoryDebug == true) {
      pUVar5 = (UWorld *)this->_padding_;
      if (pUVar5 == (UWorld *)0x0) {
        pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      UTransformTrajectoryBlueprintLibrary::DebugDrawTrajectory
                ((FTransformTrajectory *)&this->_padding_,pUVar5,0.0,0.0);
    }
  }
  return;
}

// UninitializeComponent @ 14bc69ec0

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
UDS_CharacterTrajectoryComponent::UninitializeComponent(UDS_CharacterTrajectoryComponent *this)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  UActorComponent::UninitializeComponent((UActorComponent *)this);
  local_res10 = (FWeakObjectPtr)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (FWeakObjectPtr)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (FWeakObjectPtr)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8)
  ;
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x78))(pFVar2,&local_res10);
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_res10);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar3 + 1),this);
    }
  }
  return;
}

// UpdateTrajectoryData @ 14bc6e660

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
UDS_CharacterTrajectoryComponent::UpdateTrajectoryData
          (UDS_CharacterTrajectoryComponent *this,float param_1)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  longlong lVar5;
  bool bVar6;
  UObject *pUVar7;
  TVector<double> *pTVar8;
  USceneComponent *this_00;
  TRotator<double> *this_01;
  TQuat<double> *pTVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  TRotator<double> local_c8;
  TVector<double> local_b0;
  TRotator<double> local_98;
  TQuat<double> local_78;
  TQuat<double> local_58 [2];
  
  if (0.0 < param_1) {
    bVar6 = FWeakObjectPtr::IsValid(&(this->MovementCore).WeakPtr);
    if (bVar6) {
      pUVar7 = FWeakObjectPtr::Get(&(this->MovementCore).WeakPtr);
      bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pUVar7 + 2));
      if (bVar6) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 2));
        uVar10 = (undefined4)*(undefined8 *)&pUVar7[4].field_0x10;
        uVar13 = (undefined4)((ulonglong)*(undefined8 *)&pUVar7[4].field_0x10 >> 0x20);
      }
      else {
        uVar10 = 0;
        uVar13 = 0;
      }
      pUVar7 = (UObject *)this->_padding_;
      *(undefined4 *)&this->_padding_ = 0x45000000;
      *(undefined1 *)&this->_padding_ = 0;
      *(float *)((longlong)&this->_padding_ + 4) = (float)(double)CONCAT44(uVar13,uVar10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_res20 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
      FDS_EntityBase::GetEntityBaseFromActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res18);
      pUVar7 = FWeakObjectPtr::Get(&(this->MovementCore).WeakPtr);
      lVar2 = *(longlong *)&pUVar7[0xc].field_0x8;
      this->_padding_ = *(longlong *)(pUVar7 + 0xc);
      this->_padding_ = lVar2;
      this->_padding_ = *(longlong *)&pUVar7[0xc].field_0x10;
      pTVar8 = GetCurrentAcceleration(this,&local_b0);
      dVar4 = (pTVar8->field0_0x0)._s_0.Y;
      this->_padding_ = (longlong)(pTVar8->field0_0x0)._s_0.X;
      this->_padding_ = (longlong)dVar4;
      this->_padding_ = (longlong)(pTVar8->field0_0x0)._s_0.Z;
      uVar10 = __real_42800000;
      uVar13 = __real_41000000;
      if ((((double)this->_padding_ == 0.0) && ((double)this->_padding_ == 0.0)) &&
         ((double)this->_padding_ == 0.0)) {
        *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x41000000;
        uVar13 = uVar10;
      }
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar13;
      pUVar7 = FWeakObjectPtr::Get(&(this->MovementCore).WeakPtr);
      fVar11 = (float)(**(code **)(*(longlong *)pUVar7 + 0x388))(pUVar7);
      fVar1 = *(float *)&this->_padding_;
      *(float *)&this->_padding_ = fVar11;
      dVar4 = FGenericPlatformMath::Fmod((double)(fVar11 - fVar1),__real_4076800000000000);
      if (dVar4 < 0.0) {
        dVar4 = dVar4 + __real_4076800000000000;
      }
      if (__real_4066800000000000 < dVar4) {
        dVar4 = dVar4 - __real_4076800000000000;
      }
      fVar1 = *(float *)((longlong)&this->_padding_ + 4);
      fVar11 = (float)((double)(__real_3f800000 / param_1) * dVar4);
      *(float *)&this->_padding_ = fVar11;
      *(float *)((longlong)&this->_padding_ + 4) = fVar11;
      if (0.0 <= fVar1) {
        fVar12 = (float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        if (fVar1 <= (float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          fVar12 = fVar1;
        }
        if (fVar11 <= 0.0) {
          if (0.0 <= fVar11) {
            fVar12 = 0.0;
          }
          else {
            fVar12 = (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000);
          }
        }
        *(float *)((longlong)&this->_padding_ + 4) = fVar12;
      }
      bVar6 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                        (&this->SkeletalMeshComp,(void *)0x0);
      if (bVar6) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8242814622172709069>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Movement\\DS_CharacterTrajectoryComponent.cpp"
                           ,0xcd,"false");
        if (bVar6) goto code_r0x00014bc6e9ec;
      }
      else {
        pUVar7 = FWeakObjectPtr::Get(&(this->SkeletalMeshComp).WeakPtr);
        lVar5 = *(longlong *)&pUVar7[0xd].field_0x10;
        lVar2 = *(longlong *)&pUVar7[0xd].field_0x18;
        this->_padding_ = *(longlong *)&pUVar7[0xd].field_0x8;
        this->_padding_ = lVar5;
        this->_padding_ = lVar2;
        this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(this->SkeletalMeshComp).WeakPtr);
        this_01 = USceneComponent::GetComponentRotation(this_00,&local_98);
        pTVar9 = UE::Math::TRotator<double>::Quaternion(this_01,&local_78);
        dVar4 = pTVar9->Y;
        this->_padding_ = (longlong)pTVar9->X;
        this->_padding_ = (longlong)dVar4;
        dVar4 = pTVar9->W;
        this->_padding_ = (longlong)pTVar9->Z;
        this->_padding_ = (longlong)dVar4;
        pUVar7 = FWeakObjectPtr::Get(&(this->SkeletalMeshComp).WeakPtr);
        local_c8.Pitch = *(double *)&pUVar7[8].field_0x20;
        local_c8.Yaw = *(double *)(pUVar7 + 9);
        local_c8.Roll = *(double *)&pUVar7[9].field_0x8;
        pTVar9 = UE::Math::TRotator<double>::Quaternion(&local_c8,local_58);
        dVar4 = pTVar9->Y;
        this->_padding_ = (longlong)pTVar9->X;
        this->_padding_ = (longlong)dVar4;
        dVar4 = pTVar9->W;
        this->_padding_ = (longlong)pTVar9->Z;
        this->_padding_ = (longlong)dVar4;
      }
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8242814622172708995>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Movement\\DS_CharacterTrajectoryComponent.cpp"
                         ,0x83,"MovementCore.IsValid()");
      if (bVar6) {
code_r0x00014bc6e9ec:
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

