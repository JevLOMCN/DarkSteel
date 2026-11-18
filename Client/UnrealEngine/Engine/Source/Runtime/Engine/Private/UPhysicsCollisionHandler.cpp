// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1482ca830

UClass * __cdecl UPhysicsCollisionHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsCollisionHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsCollisionHandler",
               &Z_Registration_Info_UClass_UPhysicsCollisionHandler.InnerSingleton,
               StaticRegisterNativesUPhysicsCollisionHandler,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPhysicsCollisionHandler>,
               InternalVTableHelperCtorCaller<UPhysicsCollisionHandler>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsCollisionHandler.InnerSingleton;
}

// UPhysicsCollisionHandler @ 1482dba50

UPhysicsCollisionHandler * __thiscall
UPhysicsCollisionHandler::UPhysicsCollisionHandler
          (UPhysicsCollisionHandler *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPhysicsCollisionHandler__6B_;
  (this->DefaultImpactSound).field0_0x0.DebugPtr = (USoundBase *)0x0;
  return this;
}

// UPhysicsCollisionHandler @ 1482dba80

UPhysicsCollisionHandler * __thiscall
UPhysicsCollisionHandler::UPhysicsCollisionHandler
          (UPhysicsCollisionHandler *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ImpactReFireDelay = 0.1;
  this->_padding_ = (longlong)&___7UPhysicsCollisionHandler__6B_;
  (this->DefaultImpactSound).field0_0x0.DebugPtr = (USoundBase *)0x0;
  return this;
}

// ~UPhysicsCollisionHandler @ 1482de130

void __thiscall UPhysicsCollisionHandler::~UPhysicsCollisionHandler(UPhysicsCollisionHandler *this)

{
  this->_padding_ = (longlong)&___7UPhysicsCollisionHandler__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DefaultHandleCollision_AssumesLocked @ 1482f1fc0

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
UPhysicsCollisionHandler::DefaultHandleCollision_AssumesLocked
          (UPhysicsCollisionHandler *this,FRigidBodyCollisionInfo *param_1,
          FRigidBodyCollisionInfo *param_2,FCollisionImpactData *param_3)

{
  FScriptContainerElement *pFVar1;
  USoundBase *pUVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  UObject *pUVar6;
  FBodyInstance *this_00;
  FBodyInstance *this_01;
  FName FVar7;
  FSingleParticlePhysicsProxy *pFVar8;
  TVector<double> *pTVar9;
  wchar_t *pwVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  undefined1 auStackY_278 [32];
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TRotator<double> local_158;
  TVector<double>_u_0 local_138;
  TVector<double> local_118;
  TVector<double> local_100;
  TVector<double>_u_0 local_e8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  undefined4 local_b8;
  FScriptContainerElement local_b4;
  UObject *local_b0;
  UObject *local_a8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_278;
  this_01 = (FBodyInstance *)0x0;
  if (((param_3->ContactInfos).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (param_3->ContactInfos).AllocatorInstance.Data;
  local_e8._s_0.X = (double)*(undefined8 *)pFVar1;
  local_e8._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
  local_e8._s_0.Z = (double)*(undefined8 *)(pFVar1 + 0x10);
  local_d0 = *(double *)(pFVar1 + 0x18);
  dStack_c8 = *(double *)(pFVar1 + 0x20);
  local_c0 = *(double *)(pFVar1 + 0x28);
  local_b8 = *(undefined4 *)(pFVar1 + 0x30);
  local_b4 = pFVar1[0x34];
  local_b0 = *(UObject **)(pFVar1 + 0x38);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_b0);
  }
  local_a8 = *(UObject **)(pFVar1 + 0x40);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_a8);
  }
  bVar5 = FWeakObjectPtr::IsValid(&(param_1->Component).WeakPtr);
  this_00 = this_01;
  if (bVar5) {
    pUVar6 = FWeakObjectPtr::Get(&(param_1->Component).WeakPtr);
    this_00 = (FBodyInstance *)
              (**(code **)(*(longlong *)pUVar6 + 0x818))
                        (pUVar6,param_1->BoneName,1,param_1->BodyIndex);
  }
  bVar5 = FWeakObjectPtr::IsValid(&(param_2->Component).WeakPtr);
  if (bVar5) {
    pUVar6 = FWeakObjectPtr::Get(&(param_2->Component).WeakPtr);
    this_01 = (FBodyInstance *)
              (**(code **)(*(longlong *)pUVar6 + 0x818))
                        (pUVar6,param_2->BoneName,1,param_2->BodyIndex);
  }
  if ((this_00 != (FBodyInstance *)0x0) && (this_01 != (FBodyInstance *)0x0)) {
    FVar7 = (FName)FBodyInstance::GetPhysicsActor(this_00);
    local_208 = FVar7;
    pFVar8 = FBodyInstance::GetPhysicsActor(this_01);
    if ((FVar7 == (FName)0x0) || (pFVar8 == (FSingleParticlePhysicsProxy *)0x0)) {
      FVar7 = (FName)FWeakObjectPtr::Get(&(this_00->OwnerComponent).WeakPtr);
      local_218 = FVar7;
      pUVar6 = FWeakObjectPtr::Get(&(this_01->OwnerComponent).WeakPtr);
      if ((FVar7 == (FName)0x0) || (pUVar6 == (UObject *)0x0)) {
        if (2 < (byte)LogChaos._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
        }
      }
      else if (2 < (byte)LogChaos._0_1_) {
        pwVar10 = L"Invalid";
        local_200 = *(FName *)(*(longlong *)&pUVar6->field_0x10 + 0x18);
        ::FName::ToString(&local_200,&local_198);
        local_1f8.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
        local_1f8.Number = *(uint *)&pUVar6->field_0x1c;
        ::FName::ToString(&local_1f8,&local_1a8);
        local_210 = *(FName *)(*(longlong *)&pUVar6[4].field_0x8 + 0x18);
        ::FName::ToString(&local_210,&local_1b8);
        FVar7 = local_218;
        if (local_208 != (FName)0x0) {
          pwVar10 = L"Valid";
        }
        local_208 = *(FName *)(*(longlong *)((longlong)local_218 + 0x10) + 0x18);
        local_210 = (FName)pwVar10;
        ::FName::ToString(&local_208,&local_1c8);
        local_1f0 = *(FName *)((longlong)FVar7 + 0x18);
        ::FName::ToString(&local_1f0,&local_1d8);
        local_218 = *(FName *)(*(longlong *)((longlong)local_218 + 0xa8) + 0x18);
        ::FName::ToString(&local_218,&local_1e8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      FBodyInstance::GetUnrealWorldVelocityAtPoint_AssumesLocked
                (this_00,(TVector<double> *)&local_170._s_0,(TVector<double> *)&local_e8._s_0);
      pTVar9 = FBodyInstance::GetUnrealWorldAngularVelocityInRadians_AssumesLocked
                         (this_00,&local_118);
      dVar4 = __real_404ca5dc00000000;
      dVar16 = (pTVar9->field0_0x0)._s_0.X * __real_404ca5dc00000000;
      dVar17 = (pTVar9->field0_0x0)._s_0.Y * __real_404ca5dc00000000;
      dVar15 = (pTVar9->field0_0x0)._s_0.Z * __real_404ca5dc00000000;
      FBodyInstance::GetUnrealWorldVelocityAtPoint_AssumesLocked
                (this_01,(TVector<double> *)&local_188._s_0,(TVector<double> *)&local_e8._s_0);
      pTVar9 = FBodyInstance::GetUnrealWorldAngularVelocityInRadians_AssumesLocked
                         (this_01,&local_100);
      auVar12._0_8_ = (local_188._s_0.Y - local_170._s_0.Y) * dStack_c8;
      auVar12._8_8_ = 0;
      dVar17 = (pTVar9->field0_0x0)._s_0.Y * dVar4 - dVar17;
      dVar16 = (pTVar9->field0_0x0)._s_0.X * dVar4 - dVar16;
      dVar14 = (local_188._s_0.X - local_170._s_0.X) * local_d0 + auVar12._0_8_ +
               (local_188._s_0.Z - local_170._s_0.Z) * local_c0;
      dVar15 = (pTVar9->field0_0x0)._s_0.Z * dVar4 - dVar15;
      fVar18 = (float)(double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar14,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = dVar17 * dVar17 + dVar16 * dVar16 + dVar15 * dVar15;
      auVar13 = sqrtpd(auVar12,auVar13);
      fVar11 = (float)(auVar13._0_8_ * __real_4051800000000000);
      if (fVar18 <= fVar11) {
        fVar18 = fVar11;
      }
      pUVar6 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
      if (((pUVar6 != (UObject *)0x0) &&
          (pUVar2 = (this->DefaultImpactSound).field0_0x0.DebugPtr, pUVar2 != (USoundBase *)0x0)) &&
         (this->ImpactThreshold <= fVar18 && fVar18 != this->ImpactThreshold)) {
        local_158.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        local_158.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_158.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
        local_138._s_0.Z = local_e8._s_0.Z;
        local_138._s_0.X = local_e8._s_0.X;
        local_138._s_0.Y = local_e8._s_0.Y;
        UGameplayStatics::PlaySoundAtLocation
                  (pUVar6,pUVar2,(TVector<double> *)&local_138._s_0,&local_158,__real_3f800000,
                   __real_3f800000,0.0,(USoundAttenuation *)0x0,(USoundConcurrency *)0x0,
                   (AActor *)0x0,(UInitialActiveSoundParams *)0x0);
        this->LastImpactSoundTime = (float)*(double *)&pUVar6[0x39].field_0x10;
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 14830c4e0

UClass * __cdecl UPhysicsCollisionHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsCollisionHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsCollisionHandler",
               &Z_Registration_Info_UClass_UPhysicsCollisionHandler.InnerSingleton,
               StaticRegisterNativesUPhysicsCollisionHandler,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPhysicsCollisionHandler>,
               InternalVTableHelperCtorCaller<UPhysicsCollisionHandler>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsCollisionHandler.InnerSingleton;
}

// GetWorld @ 14830dfd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UPhysicsCollisionHandler::GetWorld(UPhysicsCollisionHandler *this)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  UWorld *pUVar6;
  FString local_28;
  FString local_18;
  
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    pUVar6 = (UWorld *)this->_padding_;
    if (pUVar6 == (UWorld *)0x0) {
      pFVar3 = GetTypeName<UWorld>(&local_28);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar4);
    }
    pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar3 = GetTypeName<UWorld>(&local_28);
      pwVar4 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar6);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar4,pwVar5);
    }
  }
  else {
    pUVar6 = (UWorld *)0x0;
  }
  return pUVar6;
}

// HandlePhysicsCollisions_AssumesLocked @ 14830ea90

void __thiscall
UPhysicsCollisionHandler::HandlePhysicsCollisions_AssumesLocked
          (UPhysicsCollisionHandler *this,
          TArray<FCollisionNotifyInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < param_1->ArrayNum) {
    lVar7 = 0;
    do {
      lVar5 = (**(code **)(this->_padding_ + 0x180))(this);
      if ((float)(*(double *)(lVar5 + 0x8f8) - (double)this->LastImpactSoundTime) <
          this->ImpactReFireDelay) {
        return;
      }
      uVar4 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pFVar1 + lVar7 + 0x10));
      if (((bVar3) &&
          (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pFVar1 + lVar7 + 0x48)), bVar3)) &&
         (0 < (((FCollisionImpactData *)(pFVar1 + lVar7 + 0x78))->ContactInfos).ArrayNum)) {
        DefaultHandleCollision_AssumesLocked
                  (this,(FRigidBodyCollisionInfo *)(pFVar1 + lVar7 + 8),
                   (FRigidBodyCollisionInfo *)(pFVar1 + lVar7 + 0x40),
                   (FCollisionImpactData *)(pFVar1 + lVar7 + 0x78));
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 200;
    } while ((int)uVar6 < param_1->ArrayNum);
  }
  return;
}

// InitCollisionHandler @ 14830edf0

void __thiscall UPhysicsCollisionHandler::InitCollisionHandler(UPhysicsCollisionHandler *this)

{
  return;
}

// StaticRegisterNativesUPhysicsCollisionHandler @ 148323b40

void __cdecl UPhysicsCollisionHandler::StaticRegisterNativesUPhysicsCollisionHandler(void)

{
  return;
}

