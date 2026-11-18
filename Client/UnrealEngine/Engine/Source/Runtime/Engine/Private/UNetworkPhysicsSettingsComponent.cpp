// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 1482cf4c0

UClass * __cdecl UNetworkPhysicsSettingsComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkPhysicsSettingsComponent",
               &Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.InnerSingleton,
               StaticRegisterNativesUNetworkPhysicsSettingsComponent,0xd0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkPhysicsSettingsComponent>,
               InternalVTableHelperCtorCaller<UNetworkPhysicsSettingsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.InnerSingleton;
}

// UNetworkPhysicsSettingsComponent @ 1482db400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNetworkPhysicsSettingsComponent * __thiscall
UNetworkPhysicsSettingsComponent::UNetworkPhysicsSettingsComponent
          (UNetworkPhysicsSettingsComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->SettingsDataAsset).field0_0x0.DebugPtr = (UNetworkPhysicsSettingsDataAsset *)0x0;
  return this;
}

// UNetworkPhysicsSettingsComponent @ 1482db450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNetworkPhysicsSettingsComponent * __thiscall
UNetworkPhysicsSettingsComponent::UNetworkPhysicsSettingsComponent
          (UNetworkPhysicsSettingsComponent *this)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar2);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->SettingsDataAsset).field0_0x0.DebugPtr = (UNetworkPhysicsSettingsDataAsset *)0x0;
  return this;
}

// BeginPlay @ 1482e9e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetworkPhysicsSettingsComponent::BeginPlay(UNetworkPhysicsSettingsComponent *this)

{
  FNetworkPhysicsSettingsData *pFVar1;
  AActor *pAVar2;
  UNetworkPhysicsSettingsDataAsset *pUVar3;
  FNetworkPhysicsSettingsData *pFVar4;
  uint uVar5;
  FNetworkPhysicsSettingsData *pFVar6;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  pAVar2 = (AActor *)this->_padding_;
  pFVar6 = &SettingsNetworkPhysicsData_Default;
  if (pAVar2 != (AActor *)0x0) {
    pUVar3 = (this->SettingsDataAsset).field0_0x0.DebugPtr;
    pFVar1 = &pUVar3->Settings;
    pFVar4 = &SettingsNetworkPhysicsData_Default;
    if (pUVar3 != (UNetworkPhysicsSettingsDataAsset *)0x0) {
      pFVar4 = pFVar1;
    }
    if ((((pFVar4->GeneralSettings).bOverrideSimProxyRepMode != false) ||
        (-1 < PhysicsReplicationCVars::ResimulationCVars::SimProxyRepMode)) &&
       ((pAVar2->Role).Value == '\x01')) {
      pFVar4 = &SettingsNetworkPhysicsData_Default;
      if (pUVar3 != (UNetworkPhysicsSettingsDataAsset *)0x0) {
        pFVar4 = pFVar1;
      }
      uVar5 = PhysicsReplicationCVars::ResimulationCVars::SimProxyRepMode;
      if ((pFVar4->GeneralSettings).bOverrideSimProxyRepMode != false) {
        pFVar4 = &SettingsNetworkPhysicsData_Default;
        if (pUVar3 != (UNetworkPhysicsSettingsDataAsset *)0x0) {
          pFVar4 = pFVar1;
        }
        uVar5 = (uint)(pFVar4->GeneralSettings).SimProxyRepMode;
      }
      AActor::SetPhysicsReplicationMode(pAVar2,(EPhysicsReplicationMode)uVar5);
    }
  }
  pUVar3 = (this->SettingsDataAsset).field0_0x0.DebugPtr;
  if (pUVar3 != (UNetworkPhysicsSettingsDataAsset *)0x0) {
    pFVar6 = &pUVar3->Settings;
  }
  if ((((pFVar6->GeneralSettings).bFocalParticleInPhysicsReplicationLOD != false) &&
      (pAVar2 = (AActor *)this->_padding_, pAVar2 != (AActor *)0x0)) &&
     ((pAVar2->Role).Value == '\x02')) {
    AActor::RegisterAsFocalPointInPhysicsReplicationLOD(pAVar2);
  }
  return;
}

// GetPrivateStaticClass @ 14830bfc0

UClass * __cdecl UNetworkPhysicsSettingsComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkPhysicsSettingsComponent",
               &Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.InnerSingleton,
               StaticRegisterNativesUNetworkPhysicsSettingsComponent,0xd0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkPhysicsSettingsComponent>,
               InternalVTableHelperCtorCaller<UNetworkPhysicsSettingsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.InnerSingleton;
}

// GetSettingsForActor @ 14830d100

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNetworkPhysicsSettingsComponent * __cdecl
UNetworkPhysicsSettingsComponent::GetSettingsForActor(AActor *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if (ObjectToSettings_External._8_4_ != ObjectToSettings_External._52_4_) {
    lVar4 = 0x154c62098;
    if (ObjectToSettings_External._64_8_ != 0) {
      lVar4 = ObjectToSettings_External._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)
                             (ObjectToSettings_External._72_4_ - 1 & (uVar3 >> 0x10 ^ uVar3)) * 4);
    while (iVar1 != -1) {
      lVar4 = ObjectToSettings_External._0_8_ + (longlong)iVar1 * 0x18;
      if (*(AActor **)(ObjectToSettings_External._0_8_ + (longlong)iVar1 * 0x18) == param_1) {
        puVar2 = (undefined8 *)(lVar4 + 8);
        if (lVar4 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        if (puVar2 == (undefined8 *)0x0) {
          return (UNetworkPhysicsSettingsComponent *)0x0;
        }
        return (UNetworkPhysicsSettingsComponent *)*puVar2;
      }
      iVar1 = *(int *)(lVar4 + 0x10);
    }
  }
  return (UNetworkPhysicsSettingsComponent *)0x0;
}

// InitializeComponent @ 14830fd80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UNetworkPhysicsSettingsComponent::InitializeComponent(UNetworkPhysicsSettingsComponent *this)

{
  FNetworkPhysicsSettingsDefaultReplication *pFVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  int iVar4;
  UNetworkPhysicsSettingsDataAsset *pUVar5;
  FPhysicsSolverBase *this_00;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  FString *pFVar9;
  FNetworkPhysicsSettingsComponentAsync *pFVar10;
  UWorld *pUVar11;
  undefined8 *puVar12;
  UClass *pUVar13;
  FPhysicsObject *pFVar14;
  FSimCallbackInput *pFVar15;
  FNetworkPhysicsSettingsData *pFVar16;
  FNetworkPhysicsSettingsComponentAsync *pFVar17;
  TPairInitializer<AActor_*_const_&,UNetworkPhysicsSettingsComponent_*_&&> local_res8;
  FName local_res18;
  longlong local_res20;
  UNetworkPhysicsSettingsComponent *local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  FSharedReferencer<1> FStack_90;
  FString local_88;
  TWeakPtr<FNetworkPhysicsSettingsData_const_,1> local_78;
  longlong *local_68;
  UNetworkPhysicsSettingsComponent **local_60;
  FString local_58;
  
  pFVar17 = (FNetworkPhysicsSettingsComponentAsync *)0x0;
  UActorComponent::InitializeComponent((UActorComponent *)this);
  pUVar5 = (this->SettingsDataAsset).field0_0x0.DebugPtr;
  if (pUVar5 == (UNetworkPhysicsSettingsDataAsset *)0x0) {
    if (2 < (byte)LogChaos._0_1_) {
      if (this->_padding_ == 0) {
        pFVar9 = ::FString::FString(&local_58,L"NULL");
        local_88.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_res18 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res18,&local_88);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    if (pUVar5->bInitialized == false) {
      pFVar10 = ::operator_new(0x158);
      if (pFVar10 == (FNetworkPhysicsSettingsComponentAsync *)0x0) {
        local_98 = ___xmm_00000000000000000000000000000010;
        pFVar16 = (FNetworkPhysicsSettingsData *)&DAT_00000010;
        FStack_90.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
        pFVar10 = pFVar17;
      }
      else {
        *(undefined4 *)&pFVar10->_padding_ = 1;
        *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) = 1;
        pFVar10->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFNetworkPhysicsSettingsData___00_SharedPointerInternals__6B_
        ;
        FNetworkPhysicsSettingsData::FNetworkPhysicsSettingsData
                  ((FNetworkPhysicsSettingsData *)&pFVar10->_padding_,&pUVar5->Settings);
        pFVar16 = (FNetworkPhysicsSettingsData *)&pFVar10->_padding_;
        if ((pFVar16 == (FNetworkPhysicsSettingsData *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        LOCK();
        *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
        UNLOCK();
        FStack_90.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
        local_98 = (longlong *)pFVar16;
      }
      if (&pUVar5->Settings_Internal != (TSharedPtr<FNetworkPhysicsSettingsData,1> *)&local_98) {
        (pUVar5->Settings_Internal).Object = pFVar16;
        local_98 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pUVar5->Settings_Internal).SharedReferenceCount,&FStack_90);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_90.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar10);
      pUVar5->bInitialized = true;
    }
    pUVar11 = (UWorld *)this->_padding_;
    this->NetworkPhysicsSettings_Internal = (FNetworkPhysicsSettingsComponentAsync *)0x0;
    if ((((pUVar11 != (UWorld *)0x0) ||
         (pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
         pUVar11 != (UWorld *)0x0)) && (pUVar11->PhysicsScene != (FPhysScene_Chaos *)0x0)) &&
       (this_00 = (FPhysicsSolverBase *)pUVar11->PhysicsScene->_padding_,
       this_00 != (FPhysicsSolverBase *)0x0)) {
      pFVar10 = ::operator_new(0x248);
      if (pFVar10 != (FNetworkPhysicsSettingsComponentAsync *)0x0) {
        *(undefined2 *)&pFVar10->_padding_ = 0;
        pFVar10->_padding_ = 0;
        pFVar10->_padding_ = 0;
        pFVar10->_padding_ = 0;
        pFVar10->_padding_ = 0;
        *(undefined2 *)&pFVar10->_padding_ = 1;
        pFVar10->_padding_ =
             (longlong)
             &
             ___7__TSimCallbackObject_UFNetworkPhysicsSettingsAsyncInput__UFSimCallbackNoOutput_Chaos___00_Chaos__6B_
        ;
        *(undefined1 *)&pFVar10->_padding_ = 0;
        puVar12 = FMemory::Malloc(0x10,8);
        *puVar12 = 0;
        pFVar10->_padding_ = (longlong)puVar12;
        pFVar10->_padding_ = (longlong)puVar12;
        pFVar10->_padding_ = (longlong)puVar12;
        pFVar10->_padding_ = (longlong)puVar12;
        pFVar10->_padding_ = 0;
        pFVar10->_padding_ = 0;
        *(undefined1 *)&pFVar10->_padding_ = 0;
        puVar12 = FMemory::Malloc(0x10,8);
        *puVar12 = 0;
        pFVar10->_padding_ = (longlong)puVar12;
        pFVar10->_padding_ = (longlong)puVar12;
        pFVar10->_padding_ = (longlong)puVar12;
        pFVar10->_padding_ = (longlong)puVar12;
        pFVar10->_padding_ = 0;
        pFVar10->_padding_ = 0;
        *(undefined1 *)&pFVar10->_padding_ = 0;
        puVar12 = FMemory::Malloc(0x10,8);
        *puVar12 = 0;
        pFVar10->_padding_ = (longlong)puVar12;
        pFVar10->_padding_ = (longlong)puVar12;
        pFVar10->_padding_ = (longlong)puVar12;
        pFVar10->_padding_ = (longlong)puVar12;
        pFVar10->_padding_ = (longlong)&___7FNetworkPhysicsSettingsComponentAsync__6B_;
        pFVar10->_padding_ = 0;
        (pFVar10->Settings_Internal).Object = (FNetworkPhysicsSettingsData *)0x0;
        (pFVar10->Settings_Internal).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        memset(&pFVar10->Settings,0,0x148);
        pFVar1->bOverrideMaxLinearHardSnapDistance = 0;
        pFVar1->bOverrideCorrectConnectedBodiesFriction = 0;
        pFVar1->bOverrideCorrectConnectedBodies = 0;
        pFVar1->bOverrideDefaultLegacyHardsnapInPT = 0;
        (pFVar10->Settings).GeneralSettings.SimProxyRepMode = PredictiveInterpolation;
        (pFVar10->Settings).GeneralSettings.EventSchedulingMinDelaySeconds = 0.3;
        (pFVar10->Settings).DefaultReplicationSettings.MaxLinearHardSnapDistance = 400.0;
        (pFVar10->Settings).DefaultReplicationSettings.bHardsnapInPhysicsThread =
             PhysicsReplicationCVars::DefaultReplicationCVars::bHardsnapLegacyInPT;
        (pFVar10->Settings).DefaultReplicationSettings.bCorrectConnectedBodies =
             PhysicsReplicationCVars::DefaultReplicationCVars::bCorrectConnectedBodies;
        (pFVar10->Settings).DefaultReplicationSettings.bCorrectConnectedBodiesFriction =
             PhysicsReplicationCVars::DefaultReplicationCVars::bCorrectConnectedBodiesFriction;
        FNetworkPhysicsSettingsPredictiveInterpolation::
        FNetworkPhysicsSettingsPredictiveInterpolation
                  (&(pFVar10->Settings).PredictiveInterpolationSettings);
        FNetworkPhysicsSettingsResimulation::FNetworkPhysicsSettingsResimulation
                  (&(pFVar10->Settings).ResimulationSettings);
        FNetworkPhysicsSettingsNetworkPhysicsComponent::
        FNetworkPhysicsSettingsNetworkPhysicsComponent
                  (&(pFVar10->Settings).NetworkPhysicsComponentSettings);
        pFVar10->PhysicsObject = (FPhysicsObject *)0x0;
        pFVar17 = pFVar10;
      }
      if ((pFVar17->_padding_ & 0x100) != 0) {
        this_00->bSolverHasFrozenGameThreadCallbacks = true;
      }
      Chaos::FPhysicsSolverBase::RegisterSimCallbackObject_External
                (this_00,(ISimCallbackObject *)pFVar17);
      this->NetworkPhysicsSettings_Internal = pFVar17;
      if ((this->_padding_ != 0) && (lVar6 = *(longlong *)(this->_padding_ + 0x1b8), lVar6 != 0)) {
        pUVar13 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar4 = (int)pUVar13->_padding_;
        if ((iVar4 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar13->_padding_)) {
          local_res8.Value = (UNetworkPhysicsSettingsComponent **)0x0;
          pFVar14 = (FPhysicsObject *)
                    (**(code **)(*(longlong *)(lVar6 + 0x260) + 0x18))
                              ((longlong *)(lVar6 + 0x260),&local_res8.Value);
          if (pFVar14 != (FPhysicsObject *)0x0) {
            pFVar15 = Chaos::ISimCallbackObject::GetProducerInputData_External
                                ((ISimCallbackObject *)this->NetworkPhysicsSettings_Internal);
            if (pFVar15 != (FSimCallbackInput *)0x0) {
              if ((FSimCallbackInput *)local_a0 != pFVar15 + 1) {
                pFVar15[1]._padding_ = (longlong)pFVar14;
                *(undefined1 *)&pFVar15[1].NumSteps = 1;
              }
              pUVar5 = (this->SettingsDataAsset).field0_0x0.DebugPtr;
              if (pUVar5 == (UNetworkPhysicsSettingsDataAsset *)0x0) {
                local_78.Object = (FNetworkPhysicsSettingsData *)0x0;
                local_78.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
                ;
              }
              else {
                local_78.Object = (pUVar5->Settings_Internal).Object;
                local_78.WeakReferenceCount.ReferenceController =
                     (pUVar5->Settings_Internal).SharedReferenceCount.ReferenceController;
                if (local_78.WeakReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
                       (atomic<int>)
                       ((int)(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount +
                       1);
                  UNLOCK();
                }
              }
              TOptional<TWeakPtr<FNetworkPhysicsSettingsData_const_,1>_>::operator=
                        ((TOptional<TWeakPtr<FNetworkPhysicsSettingsData_const_,1>_> *)(pFVar15 + 2)
                         ,&local_78);
              if (local_78.WeakReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar2 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
                aVar3 = *paVar2;
                *paVar2 = (atomic<int>)((int)*paVar2 + -1);
                UNLOCK();
                if (aVar3 == (atomic<int>)0x1) {
                  (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                            (local_78.WeakReferenceCount.ReferenceController,1);
                }
              }
            }
            pUVar5 = (this->SettingsDataAsset).field0_0x0.DebugPtr;
            pFVar16 = &pUVar5->Settings;
            if (pUVar5 == (UNetworkPhysicsSettingsDataAsset *)0x0) {
              pFVar16 = &SettingsNetworkPhysicsData_Default;
            }
            FNetworkPhysicsSettingsResimulationErrorCorrection::ApplySettings_External
                      (&(pFVar16->ResimulationSettings).ResimulationErrorCorrectionSettings,pFVar14)
            ;
          }
        }
      }
    }
    local_res20 = this->_padding_;
    if (local_res20 != 0) {
      local_68 = &local_res20;
      local_60 = &local_a8;
      local_a8 = this;
      TSet<TTuple<AActor_*,UNetworkPhysicsSettingsComponent_*>,TDefaultMapHashableKeyFuncs<AActor_*,UNetworkPhysicsSettingsComponent_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<AActor_*_const_&,UNetworkPhysicsSettingsComponent_*_&&>_>
                ((TSet<TTuple<AActor_*,UNetworkPhysicsSettingsComponent_*>,TDefaultMapHashableKeyFuncs<AActor_*,UNetworkPhysicsSettingsComponent_*,0>,FDefaultSetAllocator>
                  *)&ObjectToSettings_External,&local_res8,(bool *)&local_68);
    }
  }
  return;
}

// OnComponentPhysicsStateChanged @ 148312e70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UNetworkPhysicsSettingsComponent::OnComponentPhysicsStateChanged
          (UNetworkPhysicsSettingsComponent *this,UPrimitiveComponent *param_1,
          EComponentPhysicsStateChange param_2)

{
  UNetworkPhysicsSettingsDataAsset *pUVar1;
  AActor *this_00;
  FPhysicsObject *pFVar2;
  FSimCallbackInput *pFVar3;
  FNetworkPhysicsSettingsData *pFVar4;
  FNetworkPhysicsSettingsData *pFVar5;
  undefined8 local_res20;
  FSimCallbackInput local_18;
  
  if (param_2 == Created) {
    local_res20 = 0;
    pFVar2 = (FPhysicsObject *)
             (**(code **)(*(longlong *)&param_1->field_0x260 + 0x18))
                       (&param_1->field_0x260,&local_res20);
    pFVar5 = &SettingsNetworkPhysicsData_Default;
    if (pFVar2 != (FPhysicsObject *)0x0) {
      if (((this->NetworkPhysicsSettings_Internal != (FNetworkPhysicsSettingsComponentAsync *)0x0)
          && (pFVar3 = Chaos::ISimCallbackObject::GetProducerInputData_External
                                 ((ISimCallbackObject *)this->NetworkPhysicsSettings_Internal),
             pFVar3 != (FSimCallbackInput *)0x0)) && (&local_18 != pFVar3 + 1)) {
        pFVar3[1]._padding_ = (longlong)pFVar2;
        *(undefined1 *)&pFVar3[1].NumSteps = 1;
      }
      pUVar1 = (this->SettingsDataAsset).field0_0x0.DebugPtr;
      if (pUVar1 == (UNetworkPhysicsSettingsDataAsset *)0x0) {
        pFVar4 = &SettingsNetworkPhysicsData_Default;
      }
      else {
        pFVar4 = &pUVar1->Settings;
      }
      FNetworkPhysicsSettingsResimulationErrorCorrection::ApplySettings_External
                (&(pFVar4->ResimulationSettings).ResimulationErrorCorrectionSettings,pFVar2);
    }
    pUVar1 = (this->SettingsDataAsset).field0_0x0.DebugPtr;
    if (pUVar1 != (UNetworkPhysicsSettingsDataAsset *)0x0) {
      pFVar5 = &pUVar1->Settings;
    }
    if ((((pFVar5->GeneralSettings).bFocalParticleInPhysicsReplicationLOD != false) &&
        (this_00 = (AActor *)this->_padding_, this_00 != (AActor *)0x0)) &&
       ((this_00->Role).Value == '\x02')) {
      AActor::RegisterAsFocalPointInPhysicsReplicationLOD(this_00);
    }
  }
  return;
}

// OnRegister @ 148314d80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetworkPhysicsSettingsComponent::OnRegister(UNetworkPhysicsSettingsComponent *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  char *pcVar8;
  FName local_res8;
  code *local_28;
  undefined8 uStack_20;
  
  UActorComponent::OnRegister((UActorComponent *)this);
  if ((this->_padding_ != 0) && (lVar2 = *(longlong *)(this->_padding_ + 0x1b8), lVar2 != 0)) {
    pUVar7 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) {
      pcVar8 = strstr("&ThisClass::OnComponentPhysicsStateChanged","::");
      pcVar5 = (char *)0x0;
      while (pcVar4 = pcVar8, pcVar4 != (char *)0x0) {
        pcVar8 = strstr(pcVar4 + 1,"::");
        pcVar5 = pcVar4;
      }
      if (((pcVar5 == (char *)0x0) || (pcVar5[2] == '0')) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FName::FName(&local_res8,pcVar5 + 2);
      uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
      local_28 = OnComponentPhysicsStateChanged;
      TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
      ::__Internal_AddUniqueDynamic<UNetworkPhysicsSettingsComponent>
                ((TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
                  *)(lVar2 + 0x526),this,(pmf_22815a88 *)&local_28,local_res8);
    }
  }
  return;
}

// OnUnregister @ 148315f20

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
UNetworkPhysicsSettingsComponent::OnUnregister(UNetworkPhysicsSettingsComponent *this)

{
  int iVar1;
  UObjectBase *this_00;
  UClass *pUVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  FName FVar6;
  bool bVar7;
  UClass *pUVar8;
  char *pcVar9;
  FName local_res8;
  
  UActorComponent::OnUnregister((UActorComponent *)this);
  if ((this->_padding_ != 0) &&
     (this_00 = *(UObjectBase **)(this->_padding_ + 0x1b8), this_00 != (UObjectBase *)0x0)) {
    pUVar8 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    pUVar2 = (this_00->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar8->_padding_)
       ) {
      pcVar9 = strstr("&ThisClass::OnComponentPhysicsStateChanged","::");
      pcVar5 = (char *)0x0;
      while (pcVar4 = pcVar9, pcVar4 != (char *)0x0) {
        pcVar9 = strstr(pcVar4 + 1,"::");
        pcVar5 = pcVar4;
      }
      if (((pcVar5 == (char *)0x0) || (pcVar5[2] == '0')) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FName::FName(&local_res8,pcVar5 + 2);
      if (*(char *)((longlong)&this_00[0x20].OuterPrivate.ObjectPtr.field0_0x0 + 6) != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                          ::__l2::DelegateFName,"OnComponentPhysicsStateChanged");
          _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        FVar6 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                ::__l2::DelegateFName;
        bVar7 = UObjectBase::IsValidLowLevelFast(this_00,false);
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("DelegateOwner->IsValidLowLevelFast(false)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                               ,0xd7,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar7 = FSparseDelegateStorage::Remove((UObject *)this_00,FVar6,(UObject *)this,local_res8);
        *(bool *)((longlong)&this_00[0x20].OuterPrivate.ObjectPtr.field0_0x0 + 6) = bVar7;
      }
    }
  }
  return;
}

// RegisterInPhysicsReplicationLOD @ 14831afd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UNetworkPhysicsSettingsComponent::RegisterInPhysicsReplicationLOD
          (UNetworkPhysicsSettingsComponent *this)

{
  FObjectPtr_u_0 *this_00;
  UNetworkPhysicsSettingsDataAsset *pUVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  FNetworkPhysicsSettingsData *pFVar5;
  
  pUVar1 = (this->SettingsDataAsset).field0_0x0.DebugPtr;
  if (pUVar1 == (UNetworkPhysicsSettingsDataAsset *)0x0) {
    pFVar5 = &SettingsNetworkPhysicsData_Default;
  }
  else {
    pFVar5 = &pUVar1->Settings;
  }
  if ((((pFVar5->GeneralSettings).bFocalParticleInPhysicsReplicationLOD != false) &&
      (lVar2 = this->_padding_, lVar2 != 0)) && (*(char *)(lVar2 + 0x168) == '\x02')) {
    this_00 = (FObjectPtr_u_0 *)(lVar2 + 0x1b8);
    if (this_00->Handle != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
      if ((bVar3) && ((UPrimitiveComponent *)this_00->Handle != (UPrimitiveComponent *)0x0)) {
        UPrimitiveComponent::RegisterAsFocalPointInPhysicsReplicationLOD
                  ((UPrimitiveComponent *)this_00->Handle);
        return;
      }
    }
    return;
  }
  return;
}

// StaticRegisterNativesUNetworkPhysicsSettingsComponent @ 148323a40

void __cdecl
UNetworkPhysicsSettingsComponent::StaticRegisterNativesUNetworkPhysicsSettingsComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UninitializeComponent @ 148325e50

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
UNetworkPhysicsSettingsComponent::UninitializeComponent(UNetworkPhysicsSettingsComponent *this)

{
  UNetworkPhysicsSettingsDataAsset *pUVar1;
  FPhysicsSolverBase *this_00;
  UWorld *pUVar2;
  uint uVar3;
  AActor *local_res8 [4];
  
  UActorComponent::UninitializeComponent((UActorComponent *)this);
  pUVar1 = (this->SettingsDataAsset).field0_0x0.DebugPtr;
  if (pUVar1 != (UNetworkPhysicsSettingsDataAsset *)0x0) {
    pUVar1->bInitialized = false;
  }
  if (this->NetworkPhysicsSettings_Internal != (FNetworkPhysicsSettingsComponentAsync *)0x0) {
    pUVar2 = (UWorld *)this->_padding_;
    if (pUVar2 == (UWorld *)0x0) {
      pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      if (pUVar2 == (UWorld *)0x0) goto LAB_148325eb2;
    }
    if ((pUVar2->PhysicsScene != (FPhysScene_Chaos *)0x0) &&
       (this_00 = (FPhysicsSolverBase *)pUVar2->PhysicsScene->_padding_,
       this_00 != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::UnregisterAndFreeSimCallbackObject_External
                (this_00,(ISimCallbackObject *)this->NetworkPhysicsSettings_Internal);
    }
  }
LAB_148325eb2:
  local_res8[0] = (AActor *)this->_padding_;
  this->NetworkPhysicsSettings_Internal = (FNetworkPhysicsSettingsComponentAsync *)0x0;
  if ((local_res8[0] != (AActor *)0x0) &&
     (ObjectToSettings_External._8_4_ != ObjectToSettings_External._52_4_)) {
    uVar3 = ((uint)((ulonglong)local_res8[0] >> 0x14) & 0xffff ^
            (uint)((ulonglong)local_res8[0] >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    TSet<TTuple<AActor_*,UNetworkPhysicsSettingsComponent_*>,TDefaultMapHashableKeyFuncs<AActor_*,UNetworkPhysicsSettingsComponent_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<AActor_const_*>
              ((TSet<TTuple<AActor_*,UNetworkPhysicsSettingsComponent_*>,TDefaultMapHashableKeyFuncs<AActor_*,UNetworkPhysicsSettingsComponent_*,0>,FDefaultSetAllocator>
                *)&ObjectToSettings_External,uVar3 >> 0x10 ^ uVar3,local_res8);
  }
  return;
}

// execOnComponentPhysicsStateChanged @ 14832e400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UNetworkPhysicsSettingsComponent::execOnComponentPhysicsStateChanged
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EComponentPhysicsStateChange local_res10 [8];
  UPrimitiveComponent *local_res20;
  
  local_res20 = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = Created;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnComponentPhysicsStateChanged
            ((UNetworkPhysicsSettingsComponent *)param_1,local_res20,local_res10[0]);
  return;
}

