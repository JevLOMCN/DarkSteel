// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 1472f6c60

UClass * __cdecl UParticleModuleEventGenerator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleEventGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleEventGenerator",
               &Z_Registration_Info_UClass_UParticleModuleEventGenerator.InnerSingleton,
               StaticRegisterNativesUParticleModuleEventGenerator,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleEventGenerator>,
               InternalVTableHelperCtorCaller<UParticleModuleEventGenerator>,local_res8,
               UParticleModuleEventBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleEventGenerator.InnerSingleton;
}

// UParticleModuleEventGenerator @ 1472fd120

UParticleModuleEventGenerator * __thiscall
UParticleModuleEventGenerator::UParticleModuleEventGenerator
          (UParticleModuleEventGenerator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleEventGenerator__6B_;
  (this->Events).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Events).ArrayNum = 0;
  (this->Events).ArrayMax = 0;
  return this;
}

// ~UParticleModuleEventGenerator @ 1472fddc0

void __thiscall
UParticleModuleEventGenerator::~UParticleModuleEventGenerator(UParticleModuleEventGenerator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleEventGenerator__6B_;
  DestructItems<FParticleEvent_GenerateInfo,int>
            ((FParticleEvent_GenerateInfo *)(this->Events).AllocatorInstance.Data,
             (this->Events).ArrayNum);
  pFVar1 = (this->Events).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147300d80

UClass * __cdecl UParticleModuleEventGenerator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleEventGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleEventGenerator",
               &Z_Registration_Info_UClass_UParticleModuleEventGenerator.InnerSingleton,
               StaticRegisterNativesUParticleModuleEventGenerator,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleEventGenerator>,
               InternalVTableHelperCtorCaller<UParticleModuleEventGenerator>,local_res8,
               UParticleModuleEventBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleEventGenerator.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleEventGenerator @ 1473018c0

void __cdecl UParticleModuleEventGenerator::StaticRegisterNativesUParticleModuleEventGenerator(void)

{
  return;
}

// UParticleModuleEventGenerator @ 14815c190

UParticleModuleEventGenerator * __thiscall
UParticleModuleEventGenerator::UParticleModuleEventGenerator
          (UParticleModuleEventGenerator *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x14;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleEventGenerator__6B_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x83;
  (this->Events).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Events).ArrayNum = 0;
  (this->Events).ArrayMax = 0;
  return this;
}

// HandleParticleBurst @ 148180ae0

bool __thiscall
UParticleModuleEventGenerator::HandleParticleBurst
          (UParticleModuleEventGenerator *this,FParticleEmitterInstance *param_1,
          FParticleEventInstancePayload *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  if (((param_1 == (FParticleEmitterInstance *)0x0) ||
      (param_2 == (FParticleEventInstancePayload *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner && EventPayload",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Event.cpp"
                         ,0xec,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  param_2->BurstTrackingCount = param_2->BurstTrackingCount + 1;
  bVar3 = false;
  uVar7 = 0;
  if (0 < (this->Events).ArrayNum) {
    lVar8 = 0;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Events).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (this->Events).AllocatorInstance.Data;
      if ((pFVar1[lVar8] == (FScriptContainerElement)0x4) &&
         ((*(int *)(pFVar1 + lVar8 + 4) == 0 ||
          (param_2->BurstTrackingCount % *(int *)(pFVar1 + lVar8 + 4) == 0)))) {
        local_38 = *(undefined4 *)&(param_1->Location).field0_0x0;
        uStack_34 = *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 4);
        uStack_30 = *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 8);
        uStack_2c = *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 0xc);
        local_28 = (param_1->Location).field0_0x0._s_0.Z;
        (**(code **)((longlong)*param_1->Component + 0x158))
                  (param_1->Component,*(undefined8 *)(pFVar1 + lVar8 + 0x10),param_1->EmitterTime,
                   param_3,&local_38,pFVar1 + lVar8 + 0x18);
        param_1->EventCount = param_1->EventCount + 1;
        bVar3 = true;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x28;
    } while ((int)uVar7 < (this->Events).ArrayNum);
  }
  return bVar3;
}

// HandleParticleCollision @ 148180c50

bool __thiscall
UParticleModuleEventGenerator::HandleParticleCollision
          (UParticleModuleEventGenerator *this,FParticleEmitterInstance *param_1,
          FParticleEventInstancePayload *param_2,FParticleCollisionPayload *param_3,
          FHitResult *param_4,FBaseParticle *param_5,TVector<double> *param_6)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  IParticleEmitterInstanceOwner *pIVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  UObject *pUVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_98 [16];
  double local_88;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((((param_1 == (FParticleEmitterInstance *)0x0) ||
       (param_2 == (FParticleEventInstancePayload *)0x0)) || (param_5 == (FBaseParticle *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner && EventPayload && CollideParticle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Event.cpp"
                         ,0xb5,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  param_2->CollisionTrackingCount = param_2->CollisionTrackingCount + 1;
  bVar6 = false;
  uVar12 = 0;
  if (0 < (this->Events).ArrayNum) {
    lVar11 = 0;
    bVar6 = false;
    do {
      uVar9 = 0;
      if ((int)uVar12 < (this->Events).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar2 = (this->Events).AllocatorInstance.Data;
      if (pFVar2[lVar11] == (FScriptContainerElement)0x3) {
        if ((*(uint *)(pFVar2 + lVar11 + 0xc) & 1) == 0) {
          if (((*(uint *)(pFVar2 + lVar11 + 0xc) & 2) == 0) || (param_3->UsedCollisions == 0))
          goto LAB_148180d5d;
        }
        else if (-1 < param_5->Flags) {
LAB_148180d5d:
          if ((*(int *)(pFVar2 + lVar11 + 4) == 0) ||
             (param_2->CollisionTrackingCount % *(int *)(pFVar2 + lVar11 + 4) == 0)) {
            pIVar3 = param_1->Component;
            pcVar4 = *(code **)((longlong)*pIVar3 + 0x150);
            pUVar10 = FWeakObjectPtr::Get(&(param_4->PhysMaterial).WeakPtr);
            local_b8 = *(undefined8 *)&param_4->Normal;
            uStack_b0 = *(undefined8 *)&(param_4->Normal).field_0x8;
            local_a8 = *(undefined8 *)&(param_4->Normal).field_0x10;
            uVar1 = *(undefined8 *)&(param_5->Velocity).field0_0x0;
            dVar5 = (double)(float)((ulonglong)uVar1 >> 0x20);
            local_98._8_4_ = SUB84(dVar5,0);
            local_98._0_8_ = (double)(float)uVar1;
            local_98._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
            local_78 = (param_6->field0_0x0)._s_0.X;
            dStack_70 = (param_6->field0_0x0)._s_0.Y;
            local_88 = (double)(param_5->Velocity).field0_0x0._s_0.Z;
            local_58 = *(undefined8 *)&param_4->Location;
            uStack_50 = *(undefined8 *)&(param_4->Location).field_0x8;
            local_68 = (param_6->field0_0x0)._s_0.Z;
            local_48 = *(undefined8 *)&(param_4->Location).field_0x10;
            (*pcVar4)(pIVar3,*(undefined8 *)(pFVar2 + lVar11 + 0x10),param_1->EmitterTime,&local_58,
                      &local_78,local_98,pFVar2 + lVar11 + 0x18,param_5->RelativeTime,&local_b8,
                      param_4->Time,param_4->Item,param_4->BoneName,pUVar10);
            bVar6 = true;
            param_1->EventCount = param_1->EventCount + 1;
          }
        }
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x28;
    } while ((int)uVar12 < (this->Events).ArrayNum);
  }
  return bVar6;
}

// HandleParticleKilled @ 148180f00

bool __thiscall
UParticleModuleEventGenerator::HandleParticleKilled
          (UParticleModuleEventGenerator *this,FParticleEmitterInstance *param_1,
          FParticleEventInstancePayload *param_2,FBaseParticle *param_3)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  TVector<double>_u_0 *pTVar9;
  longlong lVar10;
  uint uVar11;
  TVector<double>_u_0 local_a8;
  undefined1 local_88 [16];
  double local_78;
  double local_68;
  double dStack_60;
  double local_58;
  TVector<double> local_48;
  
  if ((((param_1 == (FParticleEmitterInstance *)0x0) ||
       (param_2 == (FParticleEventInstancePayload *)0x0)) || (param_3 == (FBaseParticle *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner && EventPayload && DeadParticle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Event.cpp"
                         ,0x95,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  param_2->DeathTrackingCount = param_2->DeathTrackingCount + 1;
  bVar5 = false;
  uVar11 = 0;
  if (0 < (this->Events).ArrayNum) {
    lVar10 = 0;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar11 < (this->Events).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar2 = (this->Events).AllocatorInstance.Data;
      if ((pFVar2[lVar10] == (FScriptContainerElement)0x2) &&
         ((*(int *)(pFVar2 + lVar10 + 4) == 0 ||
          (param_2->DeathTrackingCount % *(int *)(pFVar2 + lVar10 + 4) == 0)))) {
        if (((byte)pFVar2[lVar10 + 0xc] & 8) == 0) {
          pTVar9 = &local_a8;
          local_a8._s_0.X = (param_3->Location).field0_0x0._s_0.X;
          local_a8._s_0.Y = (param_3->Location).field0_0x0._s_0.Y;
          local_a8._s_0.Z = (param_3->Location).field0_0x0._s_0.Z;
        }
        else {
          pTVar9 = &FParticleEmitterInstance::GetParticleLocationWithOrbitOffset
                              (param_1,&local_48,param_3)->field0_0x0;
        }
        uVar1 = *(undefined8 *)&(param_3->Velocity).field0_0x0;
        dVar4 = (double)(float)((ulonglong)uVar1 >> 0x20);
        local_88._8_4_ = SUB84(dVar4,0);
        local_88._0_8_ = (double)(float)uVar1;
        local_88._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        local_68 = (((TVector<double>_u_0 *)&(pTVar9->_s_0).X)->_s_0).X;
        dStack_60 = (pTVar9->_s_0).Y;
        local_78 = (double)(param_3->Velocity).field0_0x0._s_0.Z;
        local_58 = (pTVar9->_s_0).Z;
        (**(code **)((longlong)*param_1->Component + 0x148))
                  (param_1->Component,*(undefined8 *)(pFVar2 + lVar10 + 0x10),param_1->EmitterTime,
                   &local_68,local_88,pFVar2 + lVar10 + 0x18,param_3->RelativeTime);
        param_1->EventCount = param_1->EventCount + 1;
        bVar5 = true;
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x28;
    } while ((int)uVar11 < (this->Events).ArrayNum);
  }
  return bVar5;
}

// HandleParticleSpawned @ 1481810f0

bool __thiscall
UParticleModuleEventGenerator::HandleParticleSpawned
          (UParticleModuleEventGenerator *this,FParticleEmitterInstance *param_1,
          FParticleEventInstancePayload *param_2,FBaseParticle *param_3)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  TVector<double>_u_0 *pTVar9;
  longlong lVar10;
  uint uVar11;
  TVector<double>_u_0 local_a8;
  undefined1 local_88 [16];
  double local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  TVector<double> local_48;
  
  if ((((param_1 == (FParticleEmitterInstance *)0x0) ||
       (param_2 == (FParticleEventInstancePayload *)0x0)) || (param_3 == (FBaseParticle *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner && EventPayload && NewParticle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Event.cpp"
                         ,0x77,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  param_2->SpawnTrackingCount = param_2->SpawnTrackingCount + 1;
  bVar5 = false;
  uVar11 = 0;
  if (0 < (this->Events).ArrayNum) {
    lVar10 = 0;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar11 < (this->Events).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar2 = (this->Events).AllocatorInstance.Data;
      if ((pFVar2[lVar10] == (FScriptContainerElement)0x1) &&
         ((*(int *)(pFVar2 + lVar10 + 4) == 0 ||
          (param_2->SpawnTrackingCount % *(int *)(pFVar2 + lVar10 + 4) == 0)))) {
        if (((byte)pFVar2[lVar10 + 0xc] & 8) == 0) {
          pTVar9 = &local_a8;
          local_a8._s_0.X = (param_3->Location).field0_0x0._s_0.X;
          local_a8._s_0.Y = (param_3->Location).field0_0x0._s_0.Y;
          local_a8._s_0.Z = (param_3->Location).field0_0x0._s_0.Z;
        }
        else {
          pTVar9 = &FParticleEmitterInstance::GetParticleLocationWithOrbitOffset
                              (param_1,&local_48,param_3)->field0_0x0;
        }
        uVar1 = *(undefined8 *)&(param_3->Velocity).field0_0x0;
        dVar4 = (double)(float)((ulonglong)uVar1 >> 0x20);
        local_88._8_4_ = SUB84(dVar4,0);
        local_88._0_8_ = (double)(float)uVar1;
        local_88._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        local_68 = *(undefined4 *)&(pTVar9->_s_0).X;
        uStack_64 = *(undefined4 *)((longlong)&(pTVar9->_s_0).X + 4);
        uStack_60 = *(undefined4 *)&(pTVar9->_s_0).Y;
        uStack_5c = *(undefined4 *)((longlong)&(pTVar9->_s_0).Y + 4);
        local_78 = (double)(param_3->Velocity).field0_0x0._s_0.Z;
        local_58 = (pTVar9->_s_0).Z;
        (**(code **)((longlong)*param_1->Component + 0x140))
                  (param_1->Component,*(undefined8 *)(pFVar2 + lVar10 + 0x10),param_1->EmitterTime,
                   &local_68,local_88,pFVar2 + lVar10 + 0x18);
        param_1->EventCount = param_1->EventCount + 1;
        bVar5 = true;
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x28;
    } while ((int)uVar11 < (this->Events).ArrayNum);
  }
  return bVar5;
}

// PrepPerInstanceBlock @ 14818d800

uint __thiscall
UParticleModuleEventGenerator::PrepPerInstanceBlock
          (UParticleModuleEventGenerator *this,FParticleEmitterInstance *param_1,void *param_2)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_2 == (void *)0x0) {
    return 0xffffffff;
  }
  uVar5 = 0;
  if (0 < (this->Events).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Events).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      FVar1 = (this->Events).AllocatorInstance.Data[lVar6];
      if (FVar1 == (FScriptContainerElement)0x1) {
        *(uint *)param_2 = *(uint *)param_2 | 1;
      }
      else if (FVar1 == (FScriptContainerElement)0x2) {
        *(uint *)param_2 = *(uint *)param_2 | 2;
      }
      else if (FVar1 == (FScriptContainerElement)0x3) {
        *(uint *)param_2 = *(uint *)param_2 | 4;
      }
      else if (FVar1 == (FScriptContainerElement)0x4) {
        *(uint *)param_2 = *(uint *)param_2 | 8;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x28;
    } while ((int)uVar5 < (this->Events).ArrayNum);
  }
  return 0;
}

// RequiredBytes @ 148191830

uint __thiscall
UParticleModuleEventGenerator::RequiredBytes
          (UParticleModuleEventGenerator *this,UParticleModuleTypeDataBase *param_1)

{
  return 0;
}

// RequiredBytesPerInstance @ 1481918d0

uint __thiscall
UParticleModuleEventGenerator::RequiredBytesPerInstance(UParticleModuleEventGenerator *this)

{
  return 0x14;
}

// Spawn @ 14819aa10

void __thiscall
UParticleModuleEventGenerator::Spawn(UParticleModuleEventGenerator *this,FSpawnContext *param_1)

{
  return;
}

// Update @ 1481ace30

void __thiscall
UParticleModuleEventGenerator::Update(UParticleModuleEventGenerator *this,FUpdateContext *param_1)

{
  return;
}

