// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 1473127a0

UClass * __cdecl UParticleModuleSpawn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSpawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSpawn",
               &Z_Registration_Info_UClass_UParticleModuleSpawn.InnerSingleton,
               StaticRegisterNativesUParticleModuleSpawn,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleSpawn>,
               InternalVTableHelperCtorCaller<UParticleModuleSpawn>,local_res8,
               UParticleModuleSpawnBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSpawn.InnerSingleton;
}

// UParticleModuleSpawn @ 147318a50

UParticleModuleSpawn * __thiscall
UParticleModuleSpawn::UParticleModuleSpawn(UParticleModuleSpawn *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleSpawn__6B_;
  (this->Rate)._padding_ = 0;
  (this->Rate)._padding_ = 0;
  (this->Rate)._padding_ = 0;
  *(undefined4 *)&(this->Rate)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Rate)._padding_ + 4) = 0;
  (this->Rate).MinValue = 0.0;
  (this->Rate).MaxValue = 0.0;
  (this->Rate).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->RateScale)._padding_ = 0;
  (this->RateScale)._padding_ = 0;
  (this->RateScale)._padding_ = 0;
  *(undefined4 *)&(this->RateScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->RateScale)._padding_ + 4) = 0;
  (this->RateScale).MinValue = 0.0;
  (this->RateScale).MaxValue = 0.0;
  (this->RateScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->BurstList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BurstList).ArrayNum = 0;
  (this->BurstList).ArrayMax = 0;
  (this->BurstScale)._padding_ = 0;
  (this->BurstScale)._padding_ = 0;
  (this->BurstScale)._padding_ = 0;
  *(undefined4 *)&(this->BurstScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->BurstScale)._padding_ + 4) = 0;
  (this->BurstScale).MinValue = 0.0;
  (this->BurstScale).MaxValue = 0.0;
  (this->BurstScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleSpawn @ 147319600

void __thiscall UParticleModuleSpawn::~UParticleModuleSpawn(UParticleModuleSpawn *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UParticleModuleSpawn__6B_;
  pvVar1 = (void *)(this->BurstScale)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->BurstList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = (void *)(this->RateScale)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->Rate)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleSpawnBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731b830

UClass * __cdecl UParticleModuleSpawn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSpawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSpawn",
               &Z_Registration_Info_UClass_UParticleModuleSpawn.InnerSingleton,
               StaticRegisterNativesUParticleModuleSpawn,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleSpawn>,
               InternalVTableHelperCtorCaller<UParticleModuleSpawn>,local_res8,
               UParticleModuleSpawnBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSpawn.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleSpawn @ 14731cfa0

void __cdecl UParticleModuleSpawn::StaticRegisterNativesUParticleModuleSpawn(void)

{
  return;
}

// UParticleModuleSpawn @ 14815e500

UParticleModuleSpawn * __thiscall
UParticleModuleSpawn::UParticleModuleSpawn(UParticleModuleSpawn *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleSpawn__6B_;
  (this->Rate)._padding_ = 0;
  (this->Rate)._padding_ = 0;
  (this->Rate)._padding_ = 0;
  *(undefined4 *)&(this->Rate)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Rate)._padding_ + 4) = 0;
  (this->Rate).MinValue = 0.0;
  (this->Rate).MaxValue = 0.0;
  (this->Rate).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->RateScale)._padding_ = 0;
  (this->RateScale)._padding_ = 0;
  (this->RateScale)._padding_ = 0;
  *(undefined4 *)&(this->RateScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->RateScale)._padding_ + 4) = 0;
  (this->RateScale).MinValue = 0.0;
  (this->RateScale).MaxValue = 0.0;
  (this->RateScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->BurstList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BurstList).ArrayNum = 0;
  (this->BurstList).ArrayMax = 0;
  (this->BurstScale)._padding_ = 0;
  (this->BurstScale)._padding_ = 0;
  (this->BurstScale)._padding_ = 0;
  *(undefined4 *)&(this->BurstScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->BurstScale)._padding_ + 4) = 0;
  (this->BurstScale).MinValue = 0.0;
  (this->BurstScale).MaxValue = 0.0;
  (this->BurstScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  this->bApplyGlobalSpawnRateScale = 1;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf1 | 1;
  return this;
}

// GenerateLODModuleValues @ 148175a10

bool __thiscall
UParticleModuleSpawn::GenerateLODModuleValues
          (UParticleModuleSpawn *this,UParticleModule *param_1,float param_2,
          UParticleLODLevel *param_3)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UParticleModule *)0x0) {
    pUVar2 = Z_Construct_UClass_UParticleModuleSpawn_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return true;
    }
  }
  return false;
}

// GetEstimatedSpawnRate @ 148179ab0

float __thiscall UParticleModuleSpawn::GetEstimatedSpawnRate(UParticleModuleSpawn *this)

{
  UDistributionFloat *pUVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  
  FRawDistributionFloat::GetOutRange(&this->Rate,local_res18,local_res10);
  FRawDistributionFloat::GetOutRange(&this->RateScale,local_res20,local_res8);
  fVar3 = __real_3f000000;
  fVar2 = __real_3f800000;
  iVar9 = 1;
  fVar15 = 0.0;
  if ((this->RateScale).Distribution.field0_0x0.DebugPtr != (UDistributionFloat *)0x0) {
    pUVar6 = Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&(this->RateScale).Distribution,pUVar6);
    if ((bVar4) &&
       (pUVar1 = (this->RateScale).Distribution.field0_0x0.DebugPtr,
       pUVar1 != (UDistributionFloat *)0x0)) {
      plVar7 = &pUVar1->_padding_;
      iVar5 = (**(code **)pUVar1->_padding_)(plVar7);
      iVar8 = 1;
      if (1 < iVar5) {
        fVar16 = 0.0;
        fVar10 = (float)(**(code **)(*plVar7 + 0x18))(plVar7,iVar5 + -1);
        fVar11 = (float)(**(code **)(*plVar7 + 0x18))(plVar7,0);
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        fVar12 = (float)(**(code **)(*plVar7 + 0x20))(plVar7,0,0);
        fVar14 = fVar10 - fVar11;
        if (fVar10 - fVar11 <= fVar2) {
          fVar14 = fVar2;
        }
        do {
          fVar10 = (float)(**(code **)(*plVar7 + 0x18))(plVar7,iVar8);
          fVar13 = (float)(**(code **)(*plVar7 + 0x20))(plVar7,0,iVar8);
          iVar8 = iVar8 + 1;
          fVar16 = fVar16 + (fVar13 * fVar3 + fVar12 * fVar3) * (fVar10 - fVar11) * (fVar2 / fVar14)
          ;
          fVar12 = fVar13;
          fVar11 = fVar10;
          local_res8[0] = fVar16;
        } while (iVar8 < iVar5);
      }
    }
  }
  if ((this->Rate).Distribution.field0_0x0.DebugPtr != (UDistributionFloat *)0x0) {
    pUVar6 = Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&(this->Rate).Distribution,pUVar6);
    if ((bVar4) &&
       (pUVar1 = (this->Rate).Distribution.field0_0x0.DebugPtr, pUVar1 != (UDistributionFloat *)0x0)
       ) {
      plVar7 = &pUVar1->_padding_;
      iVar5 = (**(code **)pUVar1->_padding_)(plVar7);
      if (1 < iVar5) {
        fVar10 = (float)(**(code **)(*plVar7 + 0x18))(plVar7,iVar5 + -1);
        fVar11 = (float)(**(code **)(*plVar7 + 0x18))(plVar7,0);
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        fVar16 = (float)(**(code **)(*plVar7 + 0x20))(plVar7,0,0);
        fVar12 = fVar10 - fVar11;
        if (fVar10 - fVar11 <= fVar2) {
          fVar12 = fVar2;
        }
        do {
          fVar10 = (float)(**(code **)(*plVar7 + 0x18))(plVar7,iVar9);
          fVar14 = (float)(**(code **)(*plVar7 + 0x20))(plVar7,0,iVar9);
          iVar9 = iVar9 + 1;
          fVar15 = fVar15 + (fVar14 + fVar16) * local_res8[0] * fVar3 *
                            (fVar10 - fVar11) * (fVar2 / fVar12);
          fVar16 = fVar14;
          fVar11 = fVar10;
        } while (iVar9 < iVar5);
        return fVar15;
      }
    }
  }
  return local_res8[0] * local_res10[0];
}

// GetGlobalRateScale @ 148179f70

float __thiscall UParticleModuleSpawn::GetGlobalRateScale(UParticleModuleSpawn *this)

{
  bool bVar1;
  IConsoleManager *pIVar2;
  longlong *plVar3;
  TConsoleVariableData<float> *pTVar4;
  TConsoleVariableData<float> *pTVar5;
  
  pTVar5 = (TConsoleVariableData<float> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar2 = IConsoleManager::Get();
    plVar3 = (longlong *)
             (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.EmitterSpawnRateScale",1);
    pTVar4 = pTVar5;
    if (plVar3 != (longlong *)0x0) {
      pTVar4 = (TConsoleVariableData<float> *)(**(code **)(*plVar3 + 0x70))(plVar3);
    }
    EmitterRateScaleCVar = pTVar4;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar4 = EmitterRateScaleCVar;
  if ((this->bApplyGlobalSpawnRateScale != 0) &&
     (EmitterRateScaleCVar != (TConsoleVariableData<float> *)0x0)) {
    bVar1 = IsInParallelGameThread();
    if ((!bVar1) && (bVar1 = IsInGameThread(), !bVar1)) {
      pTVar5 = (TConsoleVariableData<float> *)&DAT_00000004;
    }
    return *(float *)((longlong)pTVar4->ShadowedValue + (longlong)pTVar5->ShadowedValue);
  }
  return __real_3f800000;
}

// GetMaximumBurstCount @ 14817a7b0

int __thiscall UParticleModuleSpawn::GetMaximumBurstCount(UParticleModuleSpawn *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = 0;
  uVar5 = 0;
  if (0 < (this->BurstList).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->BurstList).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + *(int *)((this->BurstList).AllocatorInstance.Data + lVar6);
      lVar6 = lVar6 + 0xc;
    } while ((int)uVar5 < (this->BurstList).ArrayNum);
  }
  return iVar4;
}

// GetMaximumSpawnRate @ 14817a870

float __thiscall UParticleModuleSpawn::GetMaximumSpawnRate(UParticleModuleSpawn *this)

{
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  
  FRawDistributionFloat::GetOutRange(&this->Rate,local_res18,local_res10);
  FRawDistributionFloat::GetOutRange(&this->RateScale,local_res20,local_res8);
  return local_res8[0] * local_res10[0];
}

// GetSpawnAmount @ 14817e2a0

bool __thiscall
UParticleModuleSpawn::GetSpawnAmount
          (UParticleModuleSpawn *this,FContext *param_1,int param_2,float param_3,float param_4,
          int *param_5,float *param_6)

{
  return false;
}

// InitializeDefaults @ 148184d50

void __thiscall UParticleModuleSpawn::InitializeDefaults(UParticleModuleSpawn *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->Rate);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"RequiredDistributionSpawnRate");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 20.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Rate).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->RateScale);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"RequiredDistributionSpawnRateScale");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->RateScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->BurstScale);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"BurstScaleDistribution");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->BurstScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818b9a0

void __thiscall UParticleModuleSpawn::PostInitProperties(UParticleModuleSpawn *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->Rate);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"RequiredDistributionSpawnRate");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 20.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->Rate).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
    bVar1 = FRawDistributionFloat::IsCreated(&this->RateScale);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"RequiredDistributionSpawnRateScale");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 1.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->RateScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
    bVar1 = FRawDistributionFloat::IsCreated(&this->BurstScale);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"BurstScaleDistribution");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 1.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->BurstScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// PostLoad @ 14818c590

void __thiscall UParticleModuleSpawn::PostLoad(UParticleModuleSpawn *this)

{
  int iVar1;
  UDistributionFloat *pUVar2;
  longlong lVar3;
  FPackageFileVersion FVar4;
  UClass *pUVar5;
  float fVar6;
  
  UObject::PostLoad((UObject *)this);
  FVar4 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if ((*(int *)FVar4 < 0x193) &&
     (pUVar2 = (this->Rate).Distribution.field0_0x0.DebugPtr, pUVar2 != (UDistributionFloat *)0x0))
  {
    UObject::ConditionalPostLoad((UObject *)pUVar2);
    pUVar2 = (this->Rate).Distribution.field0_0x0.DebugPtr;
    pUVar5 = Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
    lVar3 = pUVar2->_padding_;
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      fVar6 = FRawDistributionFloat::GetValue(&this->Rate,0.0,(UObject *)0x0,(FRandomStream *)0x0);
      if (fVar6 <= __real_3f800000) {
        this->bApplyGlobalSpawnRateScale = 0;
      }
    }
  }
  return;
}

