// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472f7720

UClass * __cdecl UParticleModuleEventReceiverSpawn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleEventReceiverSpawn.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleEventReceiverSpawn",
               &Z_Registration_Info_UClass_UParticleModuleEventReceiverSpawn.InnerSingleton,
               StaticRegisterNativesUParticleModuleEventReceiverSpawn,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleEventReceiverSpawn>,
               InternalVTableHelperCtorCaller<UParticleModuleEventReceiverSpawn>,local_res8,
               UParticleModuleEventReceiverBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleEventReceiverSpawn.InnerSingleton;
}

// UParticleModuleEventReceiverSpawn @ 1472fd1c0

UParticleModuleEventReceiverSpawn * __thiscall
UParticleModuleEventReceiverSpawn::UParticleModuleEventReceiverSpawn
          (UParticleModuleEventReceiverSpawn *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleEventReceiverSpawn__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  (this->SpawnCount)._padding_ = 0;
  (this->SpawnCount)._padding_ = 0;
  (this->SpawnCount)._padding_ = 0;
  *(undefined4 *)&(this->SpawnCount)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SpawnCount)._padding_ + 4) = 0;
  (this->SpawnCount).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->InheritVelocityScale)._padding_ = 0;
  (this->InheritVelocityScale)._padding_ = 0;
  (this->InheritVelocityScale)._padding_ = 0;
  *(undefined4 *)&(this->InheritVelocityScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->InheritVelocityScale)._padding_ + 4) = 0;
  (this->SpawnCount).MinValue = 0.0;
  (this->SpawnCount).MaxValue = 0.0;
  (this->InheritVelocityScale).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InheritVelocityScale).MaxValue = 0.0;
  (this->InheritVelocityScale).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InheritVelocityScale).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->InheritVelocityScale).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InheritVelocityScale).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InheritVelocityScale).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->InheritVelocityScale).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->InheritVelocityScale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->PhysicalMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicalMaterials).ArrayNum = 0;
  (this->PhysicalMaterials).ArrayMax = 0;
  return this;
}

// ~UParticleModuleEventReceiverSpawn @ 1472fde50

void __thiscall
UParticleModuleEventReceiverSpawn::~UParticleModuleEventReceiverSpawn
          (UParticleModuleEventReceiverSpawn *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UParticleModuleEventReceiverSpawn__6B_;
  pFVar1 = (this->PhysicalMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->InheritVelocityScale)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->SpawnCount)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147300fc0

UClass * __cdecl UParticleModuleEventReceiverSpawn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleEventReceiverSpawn.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleEventReceiverSpawn",
               &Z_Registration_Info_UClass_UParticleModuleEventReceiverSpawn.InnerSingleton,
               StaticRegisterNativesUParticleModuleEventReceiverSpawn,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleEventReceiverSpawn>,
               InternalVTableHelperCtorCaller<UParticleModuleEventReceiverSpawn>,local_res8,
               UParticleModuleEventReceiverBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleEventReceiverSpawn.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleEventReceiverSpawn @ 1473018f0

void __cdecl
UParticleModuleEventReceiverSpawn::StaticRegisterNativesUParticleModuleEventReceiverSpawn(void)

{
  return;
}

// UParticleModuleEventReceiverSpawn @ 14815c270

UParticleModuleEventReceiverSpawn * __thiscall
UParticleModuleEventReceiverSpawn::UParticleModuleEventReceiverSpawn
          (UParticleModuleEventReceiverSpawn *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleEventReceiverSpawn__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  (this->SpawnCount)._padding_ = 0;
  (this->SpawnCount)._padding_ = 0;
  (this->SpawnCount)._padding_ = 0;
  *(undefined4 *)&(this->SpawnCount)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SpawnCount)._padding_ + 4) = 0;
  (this->SpawnCount).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->InheritVelocityScale)._padding_ = 0;
  (this->InheritVelocityScale)._padding_ = 0;
  (this->InheritVelocityScale)._padding_ = 0;
  *(undefined4 *)&(this->InheritVelocityScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->InheritVelocityScale)._padding_ + 4) = 0;
  (this->SpawnCount).MinValue = 0.0;
  (this->SpawnCount).MaxValue = 0.0;
  (this->InheritVelocityScale).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InheritVelocityScale).MaxValue = 0.0;
  (this->InheritVelocityScale).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InheritVelocityScale).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->InheritVelocityScale).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InheritVelocityScale).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InheritVelocityScale).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->InheritVelocityScale).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->InheritVelocityScale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  (this->PhysicalMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicalMaterials).ArrayNum = 0;
  (this->PhysicalMaterials).ArrayMax = 0;
  return this;
}

// InitializeDefaults @ 1481837b0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UParticleModuleEventReceiverSpawn::InitializeDefaults(UParticleModuleEventReceiverSpawn *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  UDistributionVectorConstant *pUVar4;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->SpawnCount);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"RequiredDistributionSpawnCount");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 0.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->SpawnCount).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  bVar1 = FRawDistributionVector::IsCreated(&this->InheritVelocityScale);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"RequiredDistributionInheritVelocityScale");
    pUVar4 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar4->Constant).field0_0x0._s_0.X = 1.0;
    (pUVar4->Constant).field0_0x0._s_0.Y = 1.0;
    (pUVar4->Constant).field0_0x0._s_0.Z = 1.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->InheritVelocityScale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar4;
  }
  return;
}

// PostInitProperties @ 14818a0b0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UParticleModuleEventReceiverSpawn::PostInitProperties(UParticleModuleEventReceiverSpawn *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  UDistributionVectorConstant *pUVar4;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->SpawnCount);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"RequiredDistributionSpawnCount");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 0.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->SpawnCount).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
    bVar1 = FRawDistributionVector::IsCreated(&this->InheritVelocityScale);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"RequiredDistributionInheritVelocityScale");
      pUVar4 = NewObject<UDistributionVectorConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      (pUVar4->Constant).field0_0x0._s_0.X = 1.0;
      (pUVar4->Constant).field0_0x0._s_0.Y = 1.0;
      (pUVar4->Constant).field0_0x0._s_0.Z = 1.0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UDistributionVectorConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->InheritVelocityScale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar4;
    }
  }
  return;
}

// ProcessParticleEvent @ 14818dcb0

bool __thiscall
UParticleModuleEventReceiverSpawn::ProcessParticleEvent
          (UParticleModuleEventReceiverSpawn *this,FParticleEmitterInstance *param_1,
          FParticleEventData *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  TVector<double> *pTVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FParticleEventData *pFVar9;
  int iVar10;
  float fVar11;
  undefined4 in_XMM3_Db;
  undefined1 local_68 [16];
  double local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  TVector<double> local_38 [2];
  
  if ((param_2->EventName != *(FName *)((longlong)&this->_padding_ + 4)) ||
     ((bVar2 = (byte)this->_padding_, bVar2 != 0 && ((uint)bVar2 != param_2->Type)))) {
    return false;
  }
  iVar10 = param_2->Type;
  if (iVar10 != 1) {
    if (iVar10 == 2) {
      lVar7 = 0x50;
      if (this->bUseParticleTime == 0) {
        lVar7 = 0xc;
      }
      fVar11 = *(float *)((longlong)&param_2->Type + lVar7);
      goto LAB_14818dd2b;
    }
    if (iVar10 == 3) {
      lVar7._0_4_ = param_2[1].EventData.ArrayNum;
      lVar7._4_4_ = param_2[1].EventData.ArrayMax;
      if ((lVar7 != 0) && (iVar10 = (this->PhysicalMaterials).ArrayNum, iVar10 != 0)) {
        pFVar8 = (this->PhysicalMaterials).AllocatorInstance.Data;
        pFVar1 = pFVar8 + (longlong)iVar10 * 8;
        for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 8) {
          if ((*(longlong *)pFVar8 != 0) && (*(longlong *)pFVar8 == lVar7)) {
            uVar5 = 1;
            goto LAB_14818de1e;
          }
        }
        uVar5 = 0;
LAB_14818de1e:
        if (uVar5 != (this->bBanPhysicalMaterials ^ 1)) {
          return true;
        }
      }
      pFVar9 = param_2 + 1;
      if (this->bUseParticleTime == 0) {
        pFVar9 = (FParticleEventData *)&param_2->EmitterTime;
      }
      fVar11 = (float)pFVar9->Type;
      goto LAB_14818dd2b;
    }
    if ((iVar10 != 4) && (iVar10 != 5)) {
      return true;
    }
  }
  fVar11 = param_2->EmitterTime;
LAB_14818dd2b:
  fVar11 = FRawDistributionFloat::GetValue
                     (&this->SpawnCount,fVar11,(UObject *)0x0,(FRandomStream *)0x0);
  iVar10 = (int)ROUND(fVar11 + fVar11 + __real_3f000000) >> 1;
  if (0 < iVar10) {
    pTVar6 = &param_1->Location;
    if (this->bUsePSysLocation == 0) {
      pTVar6 = &param_2->Location;
    }
    local_40 = (pTVar6->field0_0x0)._s_0.Z;
    local_50 = *(undefined4 *)&pTVar6->field0_0x0;
    uStack_4c = *(undefined4 *)((longlong)&pTVar6->field0_0x0 + 4);
    uStack_48 = *(undefined4 *)((longlong)&pTVar6->field0_0x0 + 8);
    uStack_44 = *(undefined4 *)((longlong)&pTVar6->field0_0x0 + 0xc);
    local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (this->bInheritVelocity != 0) {
      pTVar6 = FRawDistributionVector::GetValue
                         (&this->InheritVelocityScale,local_38,param_2->EmitterTime,(UObject *)0x0,0
                          ,(FRandomStream *)0x0);
      local_58 = (param_2->Velocity).field0_0x0._s_0.Z * (pTVar6->field0_0x0)._s_0.Z;
      uVar3 = (pTVar6->field0_0x0)._s_0.X * (param_2->Velocity).field0_0x0._s_0.X;
      uVar4 = (param_2->Velocity).field0_0x0._s_0.Y * (pTVar6->field0_0x0)._s_0.Y;
    }
    local_68._8_4_ = (int)uVar4;
    local_68._0_8_ = uVar3;
    local_68._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
    (**(code **)(param_1->_padding_ + 0xc0))
              (param_1,CONCAT44(in_XMM3_Db,param_3),0,iVar10,&local_50,local_68);
  }
  return true;
}

