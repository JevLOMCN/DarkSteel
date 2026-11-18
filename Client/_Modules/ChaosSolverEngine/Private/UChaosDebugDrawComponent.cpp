// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 13

// StaticClass @ 146301760

UClass * __cdecl UChaosDebugDrawComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosDebugDrawComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosDebugDrawComponent",
               &Z_Registration_Info_UClass_UChaosDebugDrawComponent.InnerSingleton,
               StaticRegisterNativesUChaosDebugDrawComponent,0xd8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UChaosDebugDrawComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosDebugDrawComponent.InnerSingleton;
}

// UChaosDebugDrawComponent @ 146309dc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChaosDebugDrawComponent * __thiscall
UChaosDebugDrawComponent::UChaosDebugDrawComponent
          (UChaosDebugDrawComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->DrawCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DrawCommands).ArrayNum = 0;
  (this->DrawCommands).ArrayMax = 0;
  return this;
}

// UChaosDebugDrawComponent @ 146309e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChaosDebugDrawComponent * __thiscall
UChaosDebugDrawComponent::UChaosDebugDrawComponent(UChaosDebugDrawComponent *this)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar2);
  this->bInPlay = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->DrawCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DrawCommands).ArrayNum = 0;
  (this->DrawCommands).ArrayMax = 0;
  *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) & 0xf7 | 2;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,true);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  *(undefined1 *)&this->_padding_ = 5;
  return this;
}

// ~UChaosDebugDrawComponent @ 14630b1f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChaosDebugDrawComponent::~UChaosDebugDrawComponent(UChaosDebugDrawComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<Chaos::FLatentDrawCommand,int>
            ((FLatentDrawCommand *)(this->DrawCommands).AllocatorInstance.Data,
             (this->DrawCommands).ArrayNum);
  pFVar1 = (this->DrawCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// BeginDestroy @ 14630d490

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChaosDebugDrawComponent::BeginDestroy(UChaosDebugDrawComponent *this)

{
  FDebugDrawQueue *this_00;
  
  UActorComponent::BeginDestroy((UActorComponent *)this);
  this_00 = Chaos::FDebugDrawQueue::GetInstance();
  Chaos::FDebugDrawQueue::SetConsumerActive(this_00,this,false);
  return;
}

// BeginPlay @ 14630d760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChaosDebugDrawComponent::BeginPlay(UChaosDebugDrawComponent *this)

{
  FDebugDrawQueue *this_00;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  UActorComponent::SetTickableWhenPaused((UActorComponent *)this,true);
  this->bInPlay = true;
  this_00 = Chaos::FDebugDrawQueue::GetInstance();
  Chaos::FDebugDrawQueue::SetConsumerActive(this_00,this,this->bInPlay);
  ChaosDebugDraw_Enabled_Changed((IConsoleVariable *)CVarChaos_DebugDraw_Enabled._8_8_);
  return;
}

// BindWorldDelegates @ 14630d7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UChaosDebugDrawComponent::BindWorldDelegates(void)

{
  undefined1 local_res8 [32];
  
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
  ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                 *)&FWorldDelegates::OnPostWorldInitialization,
                (_func___cdecl_void_UWorld_ptr_FWorldInitializationValues *)local_res8);
  return;
}

// CreateDebugDrawActor @ 14630ebd0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UChaosDebugDrawComponent::CreateDebugDrawActor(UWorld *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  ENetMode EVar5;
  UClass *pUVar6;
  AActor *this;
  UActorComponent *this_00;
  FDebugDrawQueue *pFVar7;
  longlong *plVar8;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [128];
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_148;
  EVar5 = UWorld::InternalGetNetMode(param_1);
  if ((EVar5 != NM_Client) && (EVar5 = UWorld::InternalGetNetMode(param_1), EVar5 != NM_Standalone))
  {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_ChaosDebugDrawActor,L"ChaosDebugDrawActor");
    _Init_thread_footer(&::_TSS0);
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98);
  local_98._52_4_ = local_98._52_4_ | RF_Transient;
  local_98._0_4_ = NAME_ChaosDebugDrawActor.ComparisonIndex.Value;
  local_98._4_4_ = NAME_ChaosDebugDrawActor.Number;
  pUVar6 = Z_Construct_UClass_AActor_NoRegister();
  this = UWorld::SpawnActor(param_1,pUVar6,&UE::Math::TVector<double>::ZeroVector,
                            &UE::Math::TRotator<double>::ZeroRotator,
                            (FActorSpawnParameters *)local_98);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_118,pUVar6);
  local_118._8_8_ = this;
  this_00 = (UActorComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
  if (local_118._64_8_ != 0) {
    plVar8 = (longlong *)(local_118 + 0x50);
    if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_118._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  AActor::AddInstanceComponent(this,this_00);
  UActorComponent::RegisterComponent(this_00);
  pFVar7 = Chaos::FDebugDrawQueue::GetInstance();
  iVar3 = ChaosDebugDraw_MaxElements;
  pFVar1 = &pFVar7->CommandQueueCS;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar7->MaxCommandCost = iVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar7 = Chaos::FDebugDrawQueue::GetInstance();
    fVar4 = ChaosDebugDraw_Radius;
    pFVar1 = &pFVar7->CommandQueueCS;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (pFVar7->CenterOfInterest).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (pFVar7->CenterOfInterest).field0_0x0._s_0.Y = (double)uVar2;
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pFVar7->RadiusOfInterest = (double)fVar4;
      (pFVar7->CenterOfInterest).field0_0x0._s_0.Z = (double)uVar2;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      if (local_98._64_8_ == 0) {
        return;
      }
      plVar8 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// EndPlay @ 1463113c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChaosDebugDrawComponent::EndPlay(UChaosDebugDrawComponent *this,Type param_1)

{
  FDebugDrawQueue *this_00;
  
  UActorComponent::EndPlay((UActorComponent *)this,param_1);
  UActorComponent::SetTickableWhenPaused((UActorComponent *)this,false);
  this->bInPlay = false;
  this_00 = Chaos::FDebugDrawQueue::GetInstance();
  Chaos::FDebugDrawQueue::SetConsumerActive(this_00,this,this->bInPlay);
  return;
}

// GetPrivateStaticClass @ 146313570

UClass * __cdecl UChaosDebugDrawComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosDebugDrawComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosDebugDrawComponent",
               &Z_Registration_Info_UClass_UChaosDebugDrawComponent.InnerSingleton,
               StaticRegisterNativesUChaosDebugDrawComponent,0xd8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosDebugDrawComponent>,
               InternalVTableHelperCtorCaller<UChaosDebugDrawComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosDebugDrawComponent.InnerSingleton;
}

// HandlePostWorldInitialization @ 146316b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UChaosDebugDrawComponent::HandlePostWorldInitialization
          (UWorld *param_1,FWorldInitializationValues *param_2)

{
  bool bVar1;
  
  if (((param_1 != (UWorld *)0x0) && (!PRIVATE_GIsRunningCommandlet)) &&
     (bVar1 = UWorld::IsPreviewWorld(param_1), !bVar1)) {
    CreateDebugDrawActor(param_1);
  }
  return;
}

// StaticRegisterNativesUChaosDebugDrawComponent @ 1463202d0

void __cdecl UChaosDebugDrawComponent::StaticRegisterNativesUChaosDebugDrawComponent(void)

{
  return;
}

// TickComponent @ 146320730

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
UChaosDebugDrawComponent::TickComponent
          (UChaosDebugDrawComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  FWindowsRecursiveMutex *pFVar1;
  int *piVar2;
  TArray<Chaos::FLatentDrawCommand,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  bool bVar8;
  ENetMode EVar9;
  UWorld *pUVar10;
  APlayerController *pAVar11;
  FName *pFVar12;
  AActor *pAVar13;
  FDebugDrawQueue *pFVar14;
  uint uVar15;
  AActor *pAVar16;
  FLatentDrawCommand *pFVar17;
  FLatentDrawCommand *pFVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined1 auStackY_348 [32];
  undefined1 local_2e8 [8];
  TVector<double>_u_0 local_2e0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined1 uStack_2ac;
  undefined2 uStack_2ab;
  undefined1 uStack_2a9;
  TStatId local_2a8;
  FName local_2a0;
  TVector<double>_u_0 local_298;
  double local_280;
  double local_278;
  double local_270;
  TRotator<double> local_268;
  double local_250;
  double dStack_248;
  double local_240;
  TVector<double>_u_0 local_238;
  FHitResult local_218;
  FCollisionQueryParams local_118;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_348;
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  pUVar10 = (UWorld *)this->_padding_;
  if ((pUVar10 == (UWorld *)0x0) &&
     (pUVar10 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     pUVar10 == (UWorld *)0x0)) {
    return;
  }
  fVar27 = ChaosDebugDraw_Radius;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  local_268.Roll = 0.0;
  if ((pUVar10->ViewLocationsRenderedLastFrame).ArrayNum < 1) {
    uVar21 = 0;
    uVar22 = 0;
  }
  else {
    pFVar6 = (pUVar10->ViewLocationsRenderedLastFrame).AllocatorInstance.Data;
    uVar23 = *(undefined4 *)pFVar6;
    uVar24 = *(undefined4 *)(pFVar6 + 4);
    uVar25 = *(undefined4 *)(pFVar6 + 8);
    uVar26 = *(undefined4 *)(pFVar6 + 0xc);
    uVar21 = (undefined4)*(undefined8 *)(pFVar6 + 0x10);
    uVar22 = (undefined4)((ulonglong)*(undefined8 *)(pFVar6 + 0x10) >> 0x20);
    if ((bChaosDebugDraw_SingleActor != false) &&
       (pAVar11 = UEngine::GetFirstLocalPlayerController(GEngine,pUVar10),
       pAVar11 != (APlayerController *)0x0)) {
      (**(code **)(pAVar11->_padding_ + 0x840))(pAVar11,&local_250,&local_268);
      UE::Math::TRotator<double>::Vector(&local_268,(TVector<double> *)&local_2e0._s_0);
      dVar19 = (double)ChaosDebugDraw_SingleActorTraceLength;
      local_238._s_0.X = local_250;
      local_238._s_0.Y = dStack_248;
      local_2e0._s_0.Y = local_2e0._s_0.Y * dVar19;
      local_2e0._s_0.Z = local_2e0._s_0.Z * dVar19;
      local_2e0._s_0.X = local_2e0._s_0.X * dVar19;
      local_238._s_0.Z = local_240;
      local_298._s_0.Y = dStack_248 + local_2e0._s_0.Y;
      local_298._s_0.Z = local_240 + local_2e0._s_0.Z;
      local_298._s_0.X = local_250 + local_2e0._s_0.X;
      memset(&local_218,0,0x100);
      pAVar13 = (AActor *)pAVar11->_padding_;
      local_218.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
      local_218.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
      local_218.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
      local_218.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
      uStack_2ab = 0;
      uStack_2a9 = 0;
      local_2b8 = 0;
      uStack_2b0 = 0xffffffff;
      uStack_2ac = 0;
      local_218.HitObjectHandle.InstanceIndex = -1;
      local_218.HitObjectHandle.ResolutionStatus = Invalid;
      local_218.HitObjectHandle._29_3_ = 0;
      local_218.Time = 1.0;
      local_218.MyItem = -1;
      local_218.HitObjectHandle.ManagerInterface.InterfaceInstance =
           (IActorInstanceManagerInterface *)0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar13 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar13);
      }
      lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        StatPtr_ChaosDebugVisibilityTrace =
             (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UChaosDebugDrawComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_14_::<lambda_2>::operator()(void)const_::_2_::FStat_ChaosDebugVisibilityTrace>
              )0x0;
        pFVar12 = ::FName::FName(&local_2a0,"ChaosDebugVisibilityTrace");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_ChaosDebugVisibilityTrace,*pFVar12,
                   L"ChaosDebugVisibilityTrace","STATGROUP_CollisionTags","STATCAT_Advanced",
                   L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS0);
      }
      local_2a8.StatIdPtr = (TStatIdData *)StatPtr_ChaosDebugVisibilityTrace;
      if (StatPtr_ChaosDebugVisibilityTrace ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UChaosDebugDrawComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_14_::<lambda_2>::operator()(void)const_::_2_::FStat_ChaosDebugVisibilityTrace>
           )0x0) {
        pFVar12 = ::FName::FName(&local_2a0,"ChaosDebugVisibilityTrace");
        local_2a8.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_ChaosDebugVisibilityTrace,*pFVar12,
                        L"ChaosDebugVisibilityTrace","STATGROUP_CollisionTags","STATCAT_Advanced",
                        L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
      }
      if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&::StaticName,"ChaosDebugVisibilityTrace");
        _Init_thread_footer(&::_TSS0);
      }
      FCollisionQueryParams::FCollisionQueryParams(&local_118,::StaticName,&local_2a8,true,pAVar13);
      bVar8 = UWorld::LineTraceSingleByChannel
                        (pUVar10,&local_218,(TVector<double> *)&local_238._s_0,
                         (TVector<double> *)&local_298._s_0,ECC_Visibility,&local_118,
                         &FCollisionResponseParams::DefaultResponseParam);
      if ((bVar8) &&
         (pAVar13 = FActorInstanceHandle::FetchActor(&local_218.HitObjectHandle),
         pAVar13 != (AActor *)0x0)) {
        pAVar13 = FActorInstanceHandle::FetchActor(&local_218.HitObjectHandle);
        (**(code **)(pAVar13->_padding_ + 0x358))(pAVar13,1,&local_2c8,&local_280);
        uVar21 = (undefined4)local_2b8;
        uVar22 = (undefined4)((ulonglong)local_2b8 >> 0x20);
        auVar20._0_8_ = local_280 * local_280 + local_278 * local_278 + local_270 * local_270;
        auVar20._8_8_ = 0;
        auVar20 = sqrtpd(auVar20,auVar20);
        dVar19 = auVar20._0_8_;
        if ((double)ChaosDebugDraw_SingleActorMaxRadius <= auVar20._0_8_) {
          dVar19 = (double)ChaosDebugDraw_SingleActorMaxRadius;
        }
        fVar27 = (float)dVar19;
        uVar23 = local_2c8;
        uVar24 = uStack_2c4;
        uVar25 = uStack_2c0;
        uVar26 = uStack_2bc;
      }
      if (local_118.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_118.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
      }
      if (local_118.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_118.IgnoreComponents.AllocatorInstance.SecondaryData);
      }
    }
  }
  pFVar14 = Chaos::FDebugDrawQueue::GetInstance();
  pFVar1 = &pFVar14->CommandQueueCS;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    *(undefined4 *)&(pFVar14->CenterOfInterest).field0_0x0 = uVar23;
    *(undefined4 *)((longlong)&(pFVar14->CenterOfInterest).field0_0x0 + 4) = uVar24;
    *(undefined4 *)((longlong)&(pFVar14->CenterOfInterest).field0_0x0 + 8) = uVar25;
    *(undefined4 *)((longlong)&(pFVar14->CenterOfInterest).field0_0x0 + 0xc) = uVar26;
    pFVar14->RadiusOfInterest = (double)fVar27;
    (pFVar14->CenterOfInterest).field0_0x0._s_0.Z = (double)CONCAT44(uVar22,uVar21);
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar14 = Chaos::FDebugDrawQueue::GetInstance();
    iVar5 = ChaosDebugDraw_MaxElements;
    pFVar1 = &pFVar14->CommandQueueCS;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      pFVar14->MaxCommandCost = iVar5;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      bVar8 = UWorld::IsPaused(pUVar10);
      if (!bVar8) {
        pFVar14 = Chaos::FDebugDrawQueue::GetInstance();
        pTVar3 = &this->DrawCommands;
        pFVar1 = &pFVar14->CommandQueueCS;
        if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_146320d85;
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        uVar4 = (pFVar14->CommandQueue).ArrayMax;
        piVar2 = &(pFVar14->CommandQueue).ArrayMax;
        uVar15 = uVar4;
        if ((FDebugDrawQueue *)pTVar3 != pFVar14) {
          DestructItems<Chaos::FLatentDrawCommand,int>
                    ((FLatentDrawCommand *)(pTVar3->AllocatorInstance).Data,
                     (this->DrawCommands).ArrayNum);
          pFVar6 = (pTVar3->AllocatorInstance).Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (pTVar3->AllocatorInstance).Data = (pFVar14->CommandQueue).AllocatorInstance.Data;
          (pFVar14->CommandQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this->DrawCommands).ArrayNum = (pFVar14->CommandQueue).ArrayNum;
          (this->DrawCommands).ArrayMax = *piVar2;
          uVar15 = 0;
          (pFVar14->CommandQueue).ArrayNum = 0;
          *piVar2 = 0;
        }
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
        }
        if ((int)uVar15 < (int)uVar4) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1b0,0x10,uVar4,(ForAnyElementType *)pFVar14,(pFVar14->CommandQueue).ArrayNum,
                     piVar2);
        }
        pFVar14->RequestedCommandCost = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        UWorld::IsPaused(pUVar10);
        pAVar13 = (AActor *)this->_padding_;
        if ((((pAVar13 != (AActor *)0x0) &&
             (pUVar10 = AActor::GetWorld(pAVar13), pUVar10 != (UWorld *)0x0)) &&
            (bVar8 = UWorld::IsPreviewWorld(pUVar10), !bVar8)) &&
           (((EVar9 = UWorld::InternalGetNetMode(pUVar10), EVar9 != NM_DedicatedServer ||
             (ChaosDebugDraw_ShowPIEServer != 0.0)) &&
            ((EVar9 = UWorld::InternalGetNetMode(pUVar10), EVar9 == NM_DedicatedServer ||
             (ChaosDebugDraw_ShowPIEClient != 0.0)))))) {
          if (bChaosDebugDraw_DrawMode != 1) {
            iVar5 = (this->DrawCommands).ArrayNum;
            pFVar17 = (FLatentDrawCommand *)(this->DrawCommands).AllocatorInstance.Data;
            pFVar18 = pFVar17 + iVar5;
            while( true ) {
              if ((this->DrawCommands).ArrayNum != iVar5) {
                `TCheckedPointerIterator<Chaos::FLatentDrawCommand_const_,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(local_2e8);
              }
              if (pFVar17 == pFVar18) break;
              DebugDrawChaosCommand(pUVar10,pFVar17);
              pFVar17 = pFVar17 + 1;
            }
          }
          if (bChaosDebugDraw_DrawMode != 0) {
            iVar5 = (this->DrawCommands).ArrayNum;
            pFVar17 = (FLatentDrawCommand *)(this->DrawCommands).AllocatorInstance.Data;
            pFVar18 = pFVar17 + iVar5;
            while( true ) {
              if ((this->DrawCommands).ArrayNum != iVar5) {
                `TCheckedPointerIterator<Chaos::FLatentDrawCommand_const_,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(local_2e8);
              }
              if (pFVar17 == pFVar18) break;
              pAVar16 = pAVar13;
              if (pFVar17->TestBaseActor != (AActor *)0x0) {
                pAVar16 = pFVar17->TestBaseActor;
              }
              VisLogChaosCommand(pAVar16,pFVar17);
              pFVar17 = pFVar17 + 1;
            }
          }
        }
      }
      return;
    }
  }
LAB_146320d85:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

