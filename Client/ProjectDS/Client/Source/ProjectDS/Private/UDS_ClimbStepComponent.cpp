// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b459980

UClass * __cdecl UDS_ClimbStepComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ClimbStepComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ClimbStepComponent",
               &Z_Registration_Info_UClass_UDS_ClimbStepComponent.InnerSingleton,
               StaticRegisterNativesUDS_ClimbStepComponent,0x100,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ClimbStepComponent>,
               InternalVTableHelperCtorCaller<UDS_ClimbStepComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ClimbStepComponent.InnerSingleton;
}

// UDS_ClimbStepComponent @ 14b45ba40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_ClimbStepComponent * __thiscall
UDS_ClimbStepComponent::UDS_ClimbStepComponent(UDS_ClimbStepComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->TraceDistance = 20.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->DefaultParticle).SurfaceType.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultParticle).SurfaceType.Data.ArrayNum = 0;
  (this->DefaultParticle).SurfaceType.Data.ArrayMax = 0;
  (this->DefaultParticle).NameVariation.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultParticle).NameVariation.ArrayNum = 0;
  (this->DefaultParticle).NameVariation.ArrayMax = 0;
  (this->DefaultParticle).NiagaraSystem.field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  (this->Particles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Particles).ArrayNum = 0;
  (this->Particles).ArrayMax = 0;
  return this;
}

// UDS_ClimbStepComponent @ 14b45bac0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_ClimbStepComponent * __thiscall
UDS_ClimbStepComponent::UDS_ClimbStepComponent
          (UDS_ClimbStepComponent *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->TraceDistance = 20.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->DefaultParticle).SurfaceType.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultParticle).SurfaceType.Data.ArrayNum = 0;
  (this->DefaultParticle).SurfaceType.Data.ArrayMax = 0;
  (this->DefaultParticle).NameVariation.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultParticle).NameVariation.ArrayNum = 0;
  (this->DefaultParticle).NameVariation.ArrayMax = 0;
  (this->DefaultParticle).NiagaraSystem.field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  (this->Particles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Particles).ArrayNum = 0;
  (this->Particles).ArrayMax = 0;
  return this;
}

// ~UDS_ClimbStepComponent @ 14b45cd50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_ClimbStepComponent::~UDS_ClimbStepComponent(UDS_ClimbStepComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<FDS_ClimbStep_Particle,int>
            ((FDS_ClimbStep_Particle *)(this->Particles).AllocatorInstance.Data,
             (this->Particles).ArrayNum);
  pFVar1 = (this->Particles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->DefaultParticle).NameVariation.AllocatorInstance.Data,
             (this->DefaultParticle).NameVariation.ArrayNum);
  pFVar1 = (this->DefaultParticle).NameVariation.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultParticle).SurfaceType.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b45e2e0

UClass * __cdecl UDS_ClimbStepComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ClimbStepComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ClimbStepComponent",
               &Z_Registration_Info_UClass_UDS_ClimbStepComponent.InnerSingleton,
               StaticRegisterNativesUDS_ClimbStepComponent,0x100,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ClimbStepComponent>,
               InternalVTableHelperCtorCaller<UDS_ClimbStepComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ClimbStepComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_ClimbStepComponent @ 14b45f150

void __cdecl UDS_ClimbStepComponent::StaticRegisterNativesUDS_ClimbStepComponent(void)

{
  return;
}

// ShowClimbStep @ 14bc658d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UDS_ClimbStepComponent::ShowClimbStep
          (UDS_ClimbStepComponent *this,USkeletalMeshComponent *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  USceneComponent *this_00;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  uint uVar10;
  UWorld *this_01;
  UDS_EffectManager *pUVar11;
  TVector<double>_u_0 *pTVar12;
  TStatId TVar13;
  UObject *pUVar14;
  int iVar15;
  ulonglong uVar16;
  FString *pFVar17;
  UNiagaraSystem *pUVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint uVar21;
  FString *pFVar22;
  FScriptContainerElement *pFVar23;
  double dVar24;
  undefined1 auStackY_428 [32];
  undefined1 local_3d8;
  undefined1 local_3d7 [3];
  uint local_3d4;
  uint local_3d0;
  UWorld *local_3c8;
  longlong local_3c0;
  undefined8 local_3b8;
  USkeletalMeshComponent *local_3b0;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_3a8;
  undefined1 local_3a0 [16];
  double local_390;
  FName local_388;
  FScriptContainerElement *local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined4 uStack_360;
  undefined1 uStack_35c;
  undefined2 uStack_35b;
  undefined1 uStack_359;
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_338;
  TVector<double>_u_0 local_320;
  TVector<double>_u_0 local_308;
  TRotator<double> local_2e8;
  TVector<double>_u_0 local_2c8;
  TVector<double> local_2a8;
  undefined1 local_288 [24];
  double dStack_270;
  double local_268;
  int local_1e4;
  FWeakObjectPtr local_1d8;
  FWeakObjectPtr local_1d0;
  FWeakObjectPtr FStack_1c8;
  IActorInstanceManagerInterface *local_1c0;
  undefined8 uStack_1b8;
  FCollisionQueryParams local_188;
  undefined1 local_f8 [32];
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_428;
  this_01 = (UWorld *)this->_padding_;
  local_3b0 = param_1;
  local_3a8 = param_2;
  if ((((this_01 != (UWorld *)0x0) ||
       (local_3c8 = this_01, this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       this_01 != (UWorld *)0x0)) &&
      (local_3c8 = this_01, pUVar11 = UDS_EffectManager::GetInst(),
      pUVar11 != (UDS_EffectManager *)0x0)) && (param_1 != (USkeletalMeshComponent *)0x0)) {
    this_00 = *(USceneComponent **)(param_1->_padding_ + 0x1b8);
    if (this_00 == (USceneComponent *)0x0) {
      pTVar12 = &local_338;
      local_338._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
      local_338._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
      local_338._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
    }
    else {
      pTVar12 = &USceneComponent::GetForwardVector(this_00,&local_2a8)->field0_0x0;
    }
    dVar7 = _UNK_150689688;
    dVar6 = ___xmm_3ff00000000000003ff0000000000000;
    dVar5 = __real_3ff0000000000000;
    pFVar3 = (FScriptContainerElement *)(((TVector<double>_u_0 *)&(pTVar12->_s_0).X)->_s_0).X;
    dVar4 = (pTVar12->_s_0).Y;
    iVar15 = param_2->ArrayNum;
    dVar1 = (pTVar12->_s_0).Z;
    local_3d4 = 0;
    if (0 < iVar15) {
      local_3c0 = 0;
      local_3a0._0_8_ = pFVar3;
      local_3a0._8_8_ = dVar4;
      local_390 = dVar1;
      do {
        lVar20 = local_3c0;
        uVar21 = local_3d4;
        pcVar2 = *(code **)(param_1->_padding_ + 0x520);
        uVar10 = 0;
        if ((int)local_3d4 < iVar15) {
          uVar10 = ~local_3d4 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (*pcVar2)(param_1,local_f8,*(undefined8 *)((param_2->AllocatorInstance).Data + lVar20),0);
        dVar24 = (double)this->TraceDistance;
        local_320._s_0.X = local_d8;
        local_320._s_0.Y = dStack_d0;
        local_320._s_0.Z = local_c8;
        local_358._s_0.X = (double)pFVar3 * dVar24 + local_d8;
        local_358._s_0.Y = dVar4 * dVar24 + dStack_d0;
        local_358._s_0.Z = dVar1 * dVar24 + local_c8;
        memset(local_288,0,0x100);
        uStack_360 = 0xffffffff;
        uStack_35b = 0;
        uStack_359 = 0;
        local_378 = 0;
        uStack_370 = 0;
        local_368 = 0;
        uStack_35c = 0;
        local_1d0.ObjectIndex = 0;
        local_1d0.ObjectSerialNumber = 0;
        FStack_1c8.ObjectIndex = 0;
        FStack_1c8.ObjectSerialNumber = 0;
        local_288._4_4_ = 1.0;
        uStack_1b8._0_4_ = -1;
        uStack_1b8._4_1_ = Invalid;
        uStack_1b8._5_3_ = 0;
        local_1e4 = -1;
        local_188.OwnerTag.ComparisonIndex.Value = 0;
        local_188.OwnerTag.Number = 0;
        local_1c0 = (IActorInstanceManagerInterface *)0x0;
        local_188.IgnoreComponents.AllocatorInstance.SecondaryData =
             (ForElementType<unsigned_int>)0x0;
        local_188.IgnoreComponents.ArrayNum = 0;
        local_188.IgnoreComponents.ArrayMax = 8;
        local_188.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
             (ForElementType<unsigned_int>)0x0;
        local_188.IgnoreSourceObjects.ArrayNum = 0;
        local_188.IgnoreSourceObjects.ArrayMax = 4;
        local_188.bTraceComplex = false;
        local_188.bFindInitialOverlaps = true;
        local_188.bReturnFaceIndex = false;
        local_188.bReturnPhysicalMaterial = false;
        local_188.MobilityType = Any;
        local_3b8 = 0;
        local_188.TraceTag.ComparisonIndex.Value = 0;
        local_188.TraceTag.Number = 0;
        local_188.bComponentListUnique = true;
        local_188.IgnoreMask = '\0';
        local_188.bIgnoreBlocks = false;
        local_188.bIgnoreTouches = false;
        local_188.bSkipNarrowPhase = false;
        TVar13 = FCollisionQueryParams::GetUnknownStatId();
        local_188.StatId.StatIdPtr = *(TStatIdData **)&(TVar13.StatIdPtr)->Name;
        local_188.bDebugQuery = false;
        local_188.bTraceIntoSubComponents = true;
        local_188.bReplaceHitWithSubComponents = true;
        FCollisionQueryParams::AddIgnoredActor(&local_188,(AActor *)this->_padding_);
        bVar9 = UWorld::LineTraceSingleByChannel
                          (this_01,(FHitResult *)local_288,(TVector<double> *)&local_320._s_0,
                           (TVector<double> *)&local_358._s_0,ECC_Visibility,&local_188,
                           &FCollisionResponseParams::DefaultResponseParam);
        if (bVar9) {
          bVar9 = FWeakObjectPtr::IsValid(&local_1d8);
          if (bVar9) {
            pUVar14 = FWeakObjectPtr::Get(&local_1d8);
            local_388.ComparisonIndex.Value = *(uint *)&pUVar14->field_0x18;
            local_388.Number = *(uint *)&pUVar14->field_0x1c;
            ::FName::ToString(&local_388,(FString *)local_3a0);
            local_3d0 = (this->Particles).ArrayNum;
            uVar16 = (ulonglong)(int)local_3d0;
            bVar9 = false;
            pFVar23 = (this->Particles).AllocatorInstance.Data;
            local_380 = pFVar23 + uVar16 * 0x28;
            pFVar19 = pFVar23 + 0x18;
            while( true ) {
              pFVar8 = local_380;
              if ((this->Particles).ArrayNum != (int)uVar16) {
                local_3d8 = 0;
                `TCheckedPointerIterator<FDS_ClimbStep_Particle,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_3d8);
              }
              if (pFVar23 == pFVar8) {
                pUVar18 = (this->DefaultParticle).NiagaraSystem.field0_0x0.DebugPtr;
                goto LAB_14bc65d0e;
              }
              iVar15 = *(int *)pFVar19;
              pFVar17 = *(FString **)(pFVar19 + -8);
              pFVar22 = pFVar17 + iVar15;
              while( true ) {
                if (*(int *)pFVar19 != iVar15) {
                  local_3d7[0] = 0;
                  `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_3d7);
                }
                if ((pFVar17 == pFVar22) ||
                   (bVar9 = UKismetStringLibrary::Contains((FString *)local_3a0,pFVar17,false,false)
                   , bVar9)) break;
                pFVar17 = pFVar17 + 1;
              }
              if (bVar9 != false) break;
              uVar16 = (ulonglong)local_3d0;
              pFVar23 = pFVar23 + 0x28;
              pFVar19 = pFVar19 + 0x28;
            }
            pUVar18 = *(UNiagaraSystem **)(pFVar23 + 0x20);
LAB_14bc65d0e:
            lVar20 = local_3c0;
            param_2 = local_3a8;
            this_01 = local_3c8;
            param_1 = local_3b0;
            uVar21 = local_3d4;
            if ((FScriptContainerElement *)local_3a0._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_3a0._0_8_);
              lVar20 = local_3c0;
              param_2 = local_3a8;
              this_01 = local_3c8;
              param_1 = local_3b0;
              uVar21 = local_3d4;
            }
          }
          else {
            pUVar18 = (this->DefaultParticle).NiagaraSystem.field0_0x0.DebugPtr;
          }
          if (pUVar18 != (UNiagaraSystem *)0x0) {
            local_2e8.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
            local_2e8.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
            local_2e8.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
            local_2c8._s_0.Z = local_268;
            local_308._s_0.Z = dVar5;
            local_308._s_0.X = dVar6;
            local_308._s_0.Y = dVar7;
            local_2c8._s_0.X = (double)local_288._16_8_;
            local_2c8._s_0.Y = dStack_270;
            UNiagaraFunctionLibrary::SpawnSystemAtLocation
                      ((UObject *)this_01,pUVar18,(TVector<double> *)&local_2c8._s_0,&local_2e8,
                       (TVector<double> *)&local_308._s_0,true,true,None,true);
          }
        }
        if (local_188.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_188.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
        }
        if (local_188.IgnoreComponents.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_188.IgnoreComponents.AllocatorInstance.SecondaryData);
        }
        iVar15 = param_2->ArrayNum;
        local_3d4 = uVar21 + 1;
        local_3c0 = lVar20 + 8;
      } while ((int)local_3d4 < iVar15);
    }
  }
  return;
}

