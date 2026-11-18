// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// StaticClass @ 14814f7f0

UClass * __cdecl UParticleLODLevel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleLODLevel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleLODLevel",
               &Z_Registration_Info_UClass_UParticleLODLevel.InnerSingleton,
               StaticRegisterNativesUParticleLODLevel,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleLODLevel>,
               InternalVTableHelperCtorCaller<UParticleLODLevel>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleLODLevel.InnerSingleton;
}

// UParticleLODLevel @ 14815b240

UParticleLODLevel * __thiscall
UParticleLODLevel::UParticleLODLevel(UParticleLODLevel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleLODLevel__6B_;
  (this->RequiredModule).field0_0x0.DebugPtr = (UParticleModuleRequired *)0x0;
  (this->Modules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modules).ArrayNum = 0;
  (this->Modules).ArrayMax = 0;
  (this->TypeDataModule).field0_0x0.DebugPtr = (UParticleModuleTypeDataBase *)0x0;
  (this->SpawnModule).field0_0x0.DebugPtr = (UParticleModuleSpawn *)0x0;
  (this->EventGenerator).field0_0x0.DebugPtr = (UParticleModuleEventGenerator *)0x0;
  (this->SpawningModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawningModules).ArrayNum = 0;
  (this->SpawningModules).ArrayMax = 0;
  (this->SpawnModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnModules).ArrayNum = 0;
  (this->SpawnModules).ArrayMax = 0;
  (this->UpdateModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdateModules).ArrayNum = 0;
  (this->UpdateModules).ArrayMax = 0;
  (this->OrbitModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OrbitModules).ArrayNum = 0;
  (this->OrbitModules).ArrayMax = 0;
  (this->EventReceiverModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventReceiverModules).ArrayNum = 0;
  (this->EventReceiverModules).ArrayMax = 0;
  return this;
}

// UParticleLODLevel @ 14815b2c0

UParticleLODLevel * __thiscall
UParticleLODLevel::UParticleLODLevel(UParticleLODLevel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bEnabled = 1;
  this->_padding_ = (longlong)&___7UParticleLODLevel__6B_;
  this->ConvertedModules = 1;
  (this->RequiredModule).field0_0x0.DebugPtr = (UParticleModuleRequired *)0x0;
  (this->Modules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modules).ArrayNum = 0;
  (this->Modules).ArrayMax = 0;
  (this->TypeDataModule).field0_0x0.DebugPtr = (UParticleModuleTypeDataBase *)0x0;
  (this->SpawnModule).field0_0x0.DebugPtr = (UParticleModuleSpawn *)0x0;
  (this->EventGenerator).field0_0x0.DebugPtr = (UParticleModuleEventGenerator *)0x0;
  (this->SpawningModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawningModules).ArrayNum = 0;
  (this->SpawningModules).ArrayMax = 0;
  (this->SpawnModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnModules).ArrayNum = 0;
  (this->SpawnModules).ArrayMax = 0;
  (this->UpdateModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdateModules).ArrayNum = 0;
  (this->UpdateModules).ArrayMax = 0;
  (this->OrbitModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OrbitModules).ArrayNum = 0;
  (this->OrbitModules).ArrayMax = 0;
  (this->EventReceiverModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventReceiverModules).ArrayNum = 0;
  (this->EventReceiverModules).ArrayMax = 0;
  this->PeakActiveParticles = 0;
  return this;
}

// ~UParticleLODLevel @ 148160400

void __thiscall UParticleLODLevel::~UParticleLODLevel(UParticleLODLevel *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleLODLevel__6B_;
  pFVar1 = (this->EventReceiverModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OrbitModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UpdateModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawningModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Modules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CalculateMaxActiveParticleCount @ 148168180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall UParticleLODLevel::CalculateMaxActiveParticleCount(UParticleLODLevel *this)

{
  FObjectPtr_u_0 *pFVar1;
  FScriptContainerElement *pFVar2;
  FObjectPtr FVar3;
  UParticleModuleRequired *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (((this->RequiredModule).field0_0x0.DebugPtr == (UParticleModuleRequired *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredModule != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleLODLevel.cpp"
                         ,0xff,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  fVar18 = 0.0;
  fVar15 = (float)(**(code **)(((this->SpawnModule).field0_0x0.DebugPtr)->_padding_ + 0x3b0))();
  iVar7 = (**(code **)(((this->SpawnModule).field0_0x0.DebugPtr)->_padding_ + 0x3b8))();
  uVar13 = 0;
  if (0 < (this->Modules).ArrayNum) {
    lVar14 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar13 < (this->Modules).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      pFVar2 = (this->Modules).AllocatorInstance.Data;
      pFVar1 = (FObjectPtr_u_0 *)(pFVar2 + lVar14 * 8);
      if (*(longlong *)(pFVar2 + lVar14 * 8) != 0) {
        pUVar10 = Z_Construct_UClass_UParticleModuleLifetimeBase_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)pFVar1,pUVar10);
        if ((bVar6) &&
           (FVar3.field0_0x0 = (FObjectPtr_u_0)pFVar1->Handle, FVar3.field0_0x0 != (UObject *)0x0))
        {
          fVar16 = (float)(**(code **)(*(longlong *)FVar3.field0_0x0 + 0x398))();
          fVar18 = fVar18 + fVar16;
        }
      }
      uVar8 = 0;
      if ((int)uVar13 < (this->Modules).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      pFVar2 = (this->Modules).AllocatorInstance.Data;
      pFVar1 = (FObjectPtr_u_0 *)(pFVar2 + lVar14 * 8);
      if (*(longlong *)(pFVar2 + lVar14 * 8) != 0) {
        pUVar10 = Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)pFVar1,pUVar10);
        if ((bVar6) &&
           (FVar3.field0_0x0 = (FObjectPtr_u_0)pFVar1->Handle, FVar3.field0_0x0 != (UObject *)0x0))
        {
          fVar16 = (float)(**(code **)(*(longlong *)FVar3.field0_0x0 + 0x3b0))(FVar3.field0_0x0);
          fVar15 = fVar15 + fVar16;
          iVar9 = (**(code **)(*(longlong *)FVar3.field0_0x0 + 0x3b8))(FVar3.field0_0x0);
          iVar7 = iVar7 + iVar9;
        }
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 1;
    } while ((int)uVar13 < (this->Modules).ArrayNum);
  }
  pUVar4 = (this->RequiredModule).field0_0x0.DebugPtr;
  fVar16 = 0.0;
  if (pUVar4 != (UParticleModuleRequired *)0x0) {
    fVar16 = pUVar4->EmitterDurationLow;
    if (pUVar4->EmitterDurationLow <= pUVar4->EmitterDuration) {
      fVar16 = pUVar4->EmitterDuration;
    }
    if ((float)pUVar4->EmitterLoops * fVar16 != 0.0) {
      if (pUVar4->EmitterLoops == 1) {
        if (fVar16 <= fVar18) {
          iVar9 = (iVar7 - ((int)ROUND(__real_bf000000 - (fVar15 + fVar15) * fVar16) >> 1)) + 1;
        }
        else {
          iVar9 = (iVar7 - ((int)ROUND(__real_bf000000 - (fVar18 + fVar18) * fVar15) >> 1)) + 1;
        }
      }
      else if (fVar16 <= fVar18) {
        iVar9 = (iVar7 - ((int)ROUND(__real_bf000000 -
                                     (float)-((int)ROUND(__real_bf000000 -
                                                         (fVar15 + fVar15) * fVar16) >> 1) *
                                     (fVar18 + fVar18)) >> 1)) + 1;
        if (fVar16 < fVar18) {
          iVar9 = iVar9 - ((int)ROUND(__real_bf000000 - (fVar18 - fVar16) * __real_40000000) >> 1) *
                          iVar7;
        }
      }
      else {
        iVar9 = (iVar7 - ((int)ROUND(__real_bf000000 - (fVar18 + fVar18) * fVar15) >> 1)) + 1;
      }
      goto LAB_1481684ca;
    }
  }
  fVar17 = fVar15 + fVar15;
  if (fVar16 <= fVar18) {
    if (fVar18 == 0.0) goto LAB_148168494;
    fVar17 = __real_bf000000 - fVar17 * fVar16;
    if (fVar18 <= fVar16) goto LAB_14816849b;
    iVar9 = (int)((float)-((int)ROUND(fVar17) >> 1) * fVar18);
  }
  else {
    fVar17 = (float)-((int)ROUND(__real_bf000000 - fVar17) >> 1) * (fVar18 + fVar18);
LAB_148168494:
    fVar17 = __real_bf000000 - fVar17;
LAB_14816849b:
    iVar9 = -((int)ROUND(fVar17) >> 1);
  }
  iVar12 = -((int)ROUND(__real_bf000000 - fVar15 * ___real_3d83126f) >> 1);
  iVar11 = 2;
  if (2 < iVar12) {
    iVar11 = iVar12;
  }
  iVar9 = iVar9 + iVar11 + iVar7;
LAB_1481684ca:
  this->PeakActiveParticles = iVar9;
  return iVar9;
}

// CompileModules @ 14816a250

void __thiscall
UParticleLODLevel::CompileModules(UParticleLODLevel *this,FParticleEmitterBuildInfo *param_1)

{
  UParticleModuleRequired *pUVar1;
  UParticleModuleSpawn *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  if (((this->RequiredModule).field0_0x0.DebugPtr == (UParticleModuleRequired *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredModule",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleLODLevel.cpp"
                         ,0x20,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->SpawnModule).field0_0x0.DebugPtr == (UParticleModuleSpawn *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SpawnModule",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleLODLevel.cpp"
                         ,0x21,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  param_1->RequiredModule = (UParticleModuleRequired *)(this->RequiredModule).field0_0x0;
  param_1->SpawnModule = (UParticleModuleSpawn *)(this->SpawnModule).field0_0x0;
  pUVar1 = (this->RequiredModule).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,param_1);
  pUVar2 = (this->SpawnModule).field0_0x0.DebugPtr;
  if ((char)pUVar2->_padding_ < '\0') {
    (**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,param_1);
  }
  lVar8 = (longlong)(this->Modules).ArrayNum;
  uVar9 = 0;
  if (0 < lVar8) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->Modules).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)((this->Modules).AllocatorInstance.Data + lVar10 * 8);
      if ((plVar3 != (longlong *)0x0) && ((char)plVar3[5] < '\0')) {
        (**(code **)(*plVar3 + 0x2b0))(plVar3,param_1);
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar8);
  }
  iVar7 = (**(code **)(this->_padding_ + 0x2c0))(this);
  param_1->EstimatedMaxActiveParticleCount = iVar7;
  return;
}

// ConvertToSpawnModule @ 14816bc20

void __thiscall UParticleLODLevel::ConvertToSpawnModule(UParticleLODLevel *this)

{
  return;
}

// GenerateFromLODLevel @ 148175290

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleLODLevel::GenerateFromLODLevel
          (UParticleLODLevel *this,UParticleLODLevel *param_1,float param_2,bool param_3)

{
  int *piVar1;
  size_t _Size;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  UParticleModuleRequired *pUVar10;
  UClass *pUVar11;
  UParticleModuleSpawn *pUVar12;
  UParticleModule *pUVar13;
  UParticleModuleTypeDataBase *pUVar14;
  UObject *pUVar15;
  FString *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  uint uVar21;
  longlong lVar22;
  int *piVar23;
  ulonglong uVar24;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  if ((this->Modules).ArrayNum < 1) {
    piVar23 = &(this->Modules).ArrayMax;
    iVar2 = (param_1->Modules).ArrayNum;
    piVar1 = &(this->Modules).ArrayNum;
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar2,&(this->Modules).AllocatorInstance,piVar1,piVar23);
    pFVar3 = (this->Modules).AllocatorInstance.Data;
    _Size = (longlong)iVar2 * 8;
    memmove(pFVar3 + _Size,pFVar3,(longlong)iVar8 << 3);
    memset((this->Modules).AllocatorInstance.Data,0,_Size);
    *(uint *)&this->field_0x2c =
         *(uint *)&this->field_0x2c ^ (this->bEnabled ^ param_1->bEnabled) & 1;
    UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
    pUVar10 = (param_1->RequiredModule).field0_0x0.DebugPtr;
    uVar24 = (ulonglong)piVar23 & 0xffffffffffffff00;
    pUVar10 = (UParticleModuleRequired *)
              (**(code **)(pUVar10->_padding_ + 0x340))(pUVar10,param_1,this,param_2,param_3,uVar24)
    ;
    if (pUVar10 == (UParticleModuleRequired *)0x0) {
      pFVar16 = GetTypeName<UParticleModuleRequired>(&local_98);
      if ((pFVar16->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar19);
    }
    pUVar11 = Z_Construct_UClass_UParticleModuleRequired_NoRegister();
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar11->_padding_)) {
      pFVar16 = GetTypeName<UParticleModuleRequired>(&local_58);
      pwVar19 = L"";
      if ((pFVar16->Data).ArrayNum == 0) {
        pwVar20 = L"";
      }
      else {
        pwVar20 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      pFVar16 = GetFullNameForCastLogError<UParticleModule>(local_48,(UParticleModule *)pUVar10);
      if ((pFVar16->Data).ArrayNum != 0) {
        pwVar19 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar19,pwVar20);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->RequiredModule).field0_0x0.DebugPtr = pUVar10;
    pUVar12 = (param_1->SpawnModule).field0_0x0.DebugPtr;
    uVar24 = uVar24 & 0xffffffffffffff00;
    pUVar12 = (UParticleModuleSpawn *)
              (**(code **)(pUVar12->_padding_ + 0x340))(pUVar12,param_1,this,param_2,param_3,uVar24)
    ;
    if (pUVar12 == (UParticleModuleSpawn *)0x0) {
      pFVar16 = GetTypeName<UParticleModuleSpawn>(&local_88);
      if ((pFVar16->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar19);
    }
    pUVar11 = Z_Construct_UClass_UParticleModuleSpawn_NoRegister();
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar11->_padding_)) {
      pFVar16 = GetTypeName<UParticleModuleSpawn>(&local_78);
      pwVar19 = L"";
      if ((pFVar16->Data).ArrayNum == 0) {
        pwVar20 = L"";
      }
      else {
        pwVar20 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      pFVar16 = GetFullNameForCastLogError<UParticleModule>(&local_68,(UParticleModule *)pUVar12);
      if ((pFVar16->Data).ArrayNum != 0) {
        pwVar19 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar19,pwVar20);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    (this->SpawnModule).field0_0x0.DebugPtr = pUVar12;
    pUVar14 = (param_1->TypeDataModule).field0_0x0.DebugPtr;
    if (pUVar14 != (UParticleModuleTypeDataBase *)0x0) {
      uVar24 = uVar24 & 0xffffffffffffff00;
      pUVar13 = (UParticleModule *)
                (**(code **)(*(longlong *)pUVar14 + 0x340))
                          (pUVar14,param_1,this,param_2,param_3,uVar24);
      pUVar14 = CastChecked<UParticleModuleTypeDataBase,UParticleModule>(pUVar13);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar14 != (UParticleModuleTypeDataBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      (this->TypeDataModule).field0_0x0.DebugPtr = pUVar14;
      if ((pUVar14 != (param_1->TypeDataModule).field0_0x0.DebugPtr) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeDataModule == SourceLODLevel->TypeDataModule",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleLODLevel.cpp"
                             ,0xe9,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    uVar18 = 0;
    if (0 < (param_1->Modules).ArrayNum) {
      lVar22 = 0;
      do {
        iVar2 = (param_1->Modules).ArrayNum;
        uVar17 = (ulonglong)iVar2;
        uVar21 = ~uVar18 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar18 < iVar2) {
          uVar9 = uVar21;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar24 = uVar17, bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (*(longlong *)((param_1->Modules).AllocatorInstance.Data + lVar22) == 0) {
          uVar17 = (ulonglong)*piVar1;
          uVar9 = 0;
          if ((int)uVar18 < *piVar1) {
            uVar9 = uVar21;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             uVar24 = uVar17, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          *(undefined8 *)((this->Modules).AllocatorInstance.Data + lVar22) = 0;
        }
        else {
          iVar2 = (param_1->Modules).ArrayNum;
          uVar17 = (ulonglong)iVar2;
          uVar9 = 0;
          if ((int)uVar18 < iVar2) {
            uVar9 = uVar21;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             uVar24 = uVar17, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          uVar24 = uVar24 & 0xffffffffffffff00;
          plVar4 = *(longlong **)((param_1->Modules).AllocatorInstance.Data + lVar22);
          pUVar15 = (UObject *)
                    (**(code **)(*plVar4 + 0x340))(plVar4,param_1,this,param_2,param_3,uVar24);
          uVar17 = (ulonglong)*piVar1;
          uVar9 = 0;
          if ((int)uVar18 < *piVar1) {
            uVar9 = uVar21;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             uVar24 = uVar17, bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pFVar3 = (this->Modules).AllocatorInstance.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar15);
          }
          *(UObject **)(pFVar3 + lVar22) = pUVar15;
        }
        uVar18 = uVar18 + 1;
        lVar22 = lVar22 + 8;
      } while ((int)uVar18 < (param_1->Modules).ArrayNum);
    }
    bVar6 = true;
  }
  else {
    if (4 < (byte)LogParticles._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    }
    bVar6 = false;
  }
  return bVar6;
}

// GetModuleAtIndex @ 14817a900

UParticleModule * __thiscall
UParticleLODLevel::GetModuleAtIndex(UParticleLODLevel *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UParticleModule *pUVar3;
  
  if (param_1 < 0) {
    if (param_1 == -4) {
      return (UParticleModule *)(this->SpawnModule).field0_0x0.DebugPtr;
    }
    if (param_1 == -3) {
      return (UParticleModule *)(this->RequiredModule).field0_0x0.DebugPtr;
    }
    if (param_1 == -2) {
      return (UParticleModule *)(this->TypeDataModule).field0_0x0.DebugPtr;
    }
  }
  else if (param_1 < (this->Modules).ArrayNum) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UParticleModule *)(*pcVar1)();
        return pUVar3;
      }
    }
    return *(UParticleModule **)((this->Modules).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (UParticleModule *)0x0;
}

// GetModuleIndex @ 14817a9c0

int __thiscall UParticleLODLevel::GetModuleIndex(UParticleLODLevel *this,UParticleModule *param_1)

{
  UParticleModuleRequired *pUVar1;
  UParticleModuleSpawn *pUVar2;
  UParticleModule *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  if (param_1 != (UParticleModule *)0x0) {
    pUVar1 = (this->RequiredModule).field0_0x0.DebugPtr;
    if ((pUVar1 != (UParticleModuleRequired *)0x0) && (pUVar1 == (UParticleModuleRequired *)param_1)
       ) {
      return -3;
    }
    pUVar2 = (this->SpawnModule).field0_0x0.DebugPtr;
    if ((pUVar2 != (UParticleModuleSpawn *)0x0) && (pUVar2 == (UParticleModuleSpawn *)param_1)) {
      return -4;
    }
    pUVar3 = (UParticleModule *)(this->TypeDataModule).field0_0x0.DebugPtr;
    if ((pUVar3 != (UParticleModule *)0x0) && (pUVar3 == param_1)) {
      return -2;
    }
    uVar8 = 0;
    if (0 < (this->Modules).ArrayNum) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (this->Modules).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        pUVar3 = *(UParticleModule **)((this->Modules).AllocatorInstance.Data + lVar9);
        if ((pUVar3 != (UParticleModule *)0x0) && (pUVar3 == param_1)) {
          return uVar8;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      } while ((int)uVar8 < (this->Modules).ArrayNum);
    }
  }
  return -1;
}

// GetPrivateStaticClass @ 14817d0f0

UClass * __cdecl UParticleLODLevel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleLODLevel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleLODLevel",
               &Z_Registration_Info_UClass_UParticleLODLevel.InnerSingleton,
               StaticRegisterNativesUParticleLODLevel,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleLODLevel>,
               InternalVTableHelperCtorCaller<UParticleLODLevel>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleLODLevel.InnerSingleton;
}

// GetStreamingMeshInfo @ 14817edd0

void __thiscall
UParticleLODLevel::GetStreamingMeshInfo
          (UParticleLODLevel *this,TBoxSphereBounds<double,double> *param_1,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  UParticleModuleTypeDataBase *pUVar3;
  UStaticMesh *this_00;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  EStreamableRenderAssetType EVar10;
  uint uVar11;
  UClass *pUVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  double dVar15;
  double dVar16;
  TVector<double>_u_0 local_e8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_80;
  
  if ((this->bEnabled != 0) &&
     ((this->TypeDataModule).field0_0x0.DebugPtr != (UParticleModuleTypeDataBase *)0x0)) {
    pUVar12 = Z_Construct_UClass_UParticleModuleTypeDataMesh_NoRegister();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&this->TypeDataModule,pUVar12);
    if ((bVar9) &&
       ((((pUVar3 = (this->TypeDataModule).field0_0x0.DebugPtr,
          pUVar3 != (UParticleModuleTypeDataBase *)0x0 &&
          (this_00 = *(UStaticMesh **)(pUVar3 + 1), this_00 != (UStaticMesh *)0x0)) &&
         ((this_00->_padding_ & 1) != 0)) &&
        ((*(byte *)((longlong)&this_00->_padding_ + 1) <
          *(byte *)((longlong)&this_00->_padding_ + 3) &&
         (EVar10 = UStaticMesh::GetRenderAssetType(this_00), EVar10 == StaticMesh)))))) {
      UStaticMesh::GetBounds(this_00,(TBoxSphereBounds<double,double> *)&local_e8._s_0);
      uVar11 = param_2->ArrayNum;
      dVar1 = (param_1->Origin).field0_0x0._s_0.X;
      dVar6 = local_e8._s_0.Y + (param_1->Origin).field0_0x0._s_0.Y;
      dVar2 = (param_1->Origin).field0_0x0._s_0.Z;
      dVar16 = (double)*(float *)&pUVar3[1].field_0x10;
      local_80 = dVar16 * local_b8;
      dVar15 = local_b8 * __real_4000000000000000;
      if (uVar11 == param_2->ArrayMax) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = uVar11 + 1;
      uVar13 = 0;
      if ((int)uVar11 < (int)(uVar11 + 1)) {
        uVar13 = ~uVar11 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar14 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x50;
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        *(UStaticMesh **)pFVar14 = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        *(uint *)(pFVar14 + 0x48) = *(uint *)(pFVar14 + 0x48) & 0xfffffffe;
        *(uint *)(pFVar14 + 0x48) = *(uint *)(pFVar14 + 0x48) | 2;
        auVar5._8_4_ = SUB84(dVar6,0);
        auVar5._0_8_ = local_e8._s_0.X + dVar1;
        auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        *(undefined1 (*) [16])(pFVar14 + 8) = auVar5;
        *(undefined4 *)(pFVar14 + 0x44) = 0;
        auVar7._8_4_ = SUB84(dVar16 * local_d0,0);
        auVar7._0_8_ = local_e8._s_0.Z + dVar2;
        auVar7._12_4_ = (int)((ulonglong)(dVar16 * local_d0) >> 0x20);
        *(undefined1 (*) [16])(pFVar14 + 0x18) = auVar7;
        auVar8._8_4_ = SUB84(dVar16 * local_c0,0);
        auVar8._0_8_ = dVar16 * local_c8;
        auVar8._12_4_ = (int)((ulonglong)(dVar16 * local_c0) >> 0x20);
        *(undefined1 (*) [16])(pFVar14 + 0x28) = auVar8;
        *(double *)(pFVar14 + 0x38) = local_80;
        *(float *)(pFVar14 + 0x40) = (float)dVar15;
      }
    }
  }
  return;
}

// GetUsedMaterials @ 14817f8c0

void __thiscall
UParticleLODLevel::GetUsedMaterials
          (UParticleLODLevel *this,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FNamedEmitterMaterial,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_3)

{
  UParticleModuleTypeDataBase *pUVar1;
  UParticleModuleRequired *pUVar2;
  longlong lVar3;
  UStaticMesh *this_00;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  FStaticMeshRenderData *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  TObjectPtr<UMaterialInterface>_u_0 local_78;
  TObjectPtr<UMaterialInterface>_u_0 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  UParticleModuleTypeDataBase *local_50;
  
  if (this->bEnabled == 0) {
    return;
  }
  if ((this->TypeDataModule).field0_0x0.DebugPtr != (UParticleModuleTypeDataBase *)0x0) {
    pUVar8 = Z_Construct_UClass_UParticleModuleTypeDataMesh_NoRegister();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->TypeDataModule,pUVar8);
    if ((((bVar6) &&
         (pUVar1 = (this->TypeDataModule).field0_0x0.DebugPtr, local_50 = pUVar1,
         pUVar1 != (UParticleModuleTypeDataBase *)0x0)) &&
        (*(UStaticMesh **)(pUVar1 + 1) != (UStaticMesh *)0x0)) &&
       (pFVar9 = UStaticMesh::GetRenderData(*(UStaticMesh **)(pUVar1 + 1)),
       pFVar9 != (FStaticMeshRenderData *)0x0)) {
      pFVar9 = UStaticMesh::GetRenderData(*(UStaticMesh **)(pUVar1 + 1));
      uVar15 = 0;
      if (((pFVar9->LODResources).Array.ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar22 = 0;
      local_58 = *(longlong *)(pFVar9->LODResources).Array.AllocatorInstance.Data;
      if (*(int *)(local_58 + 0x38) < 1) {
        return;
      }
      local_60 = 0;
      local_68 = 0;
      uVar13 = uVar15;
      do {
        pUVar2 = (this->RequiredModule).field0_0x0.DebugPtr;
        local_78.DebugPtr = (UMaterialInterface *)0x0;
        uVar20 = (uint)uVar13;
        uVar12 = 0;
        if ((((int)uVar20 < 0) || ((pUVar2->NamedMaterialOverrides).ArrayNum <= (int)uVar20)) ||
           (iVar7 = param_2->ArrayNum, iVar7 < 1)) {
LAB_14817fc21:
          lVar17 = local_68;
          uVar11 = (this->Modules).ArrayNum - 1;
          if (-1 < (int)uVar11) {
            lVar18 = (longlong)(int)uVar11 * 8;
            do {
              uVar10 = uVar12;
              if ((int)uVar11 < (this->Modules).ArrayNum) {
                uVar10 = ~uVar11 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar19 = (this->Modules).AllocatorInstance.Data + lVar18;
              if (*(longlong *)pFVar19 != 0) {
                pUVar8 = Z_Construct_UClass_UParticleModuleMeshMaterial_NoRegister();
                bVar6 = FObjectPtr::IsA((FObjectPtr *)pFVar19,pUVar8);
                if ((((bVar6) && (lVar3 = *(longlong *)pFVar19, lVar3 != 0)) &&
                    (*(char *)(lVar3 + 0x28) < '\0')) && ((int)uVar20 < *(int *)(lVar3 + 0x38))) {
                  uVar11 = uVar12;
                  if ((int)uVar20 < *(int *)(lVar3 + 0x38)) {
                    uVar11 = ~uVar20 >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  local_78 = (TObjectPtr<UMaterialInterface>_u_0)
                             ((TObjectPtr<UMaterialInterface>_u_0 *)
                             (*(longlong *)(lVar3 + 0x30) + lVar17))->DebugPtr;
                  break;
                }
              }
              lVar18 = lVar18 + -8;
              uVar11 = uVar11 - 1;
            } while (-1 < (int)uVar11);
            lVar18 = local_60;
            if (local_78.DebugPtr != (UMaterialInterface *)0x0) goto LAB_14817fdde;
          }
          lVar3 = local_58;
          if (((local_50[1].field_0x16 & 1) != 0) &&
             (local_78 = (TObjectPtr<UMaterialInterface>_u_0)
                         (((this->RequiredModule).field0_0x0.DebugPtr)->Material).field0_0x0.
                         DebugPtr, lVar18 = local_60, local_78.DebugPtr != (UMaterialInterface *)0x0
             )) goto LAB_14817fdde;
          this_00 = *(UStaticMesh **)(local_50 + 1);
          lVar14 = local_58 + 0x10;
          if ((int)uVar20 < *(int *)(local_58 + 0x38)) {
            uVar12 = ~uVar20 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar18 = local_60;
          if (*(longlong *)(lVar3 + 0x30) != 0) {
            lVar14 = *(longlong *)(lVar3 + 0x30);
          }
          local_78.DebugPtr = UStaticMesh::GetMaterial(this_00,*(int *)(local_60 + lVar14));
          if (local_78.DebugPtr != (UMaterialInterface *)0x0) goto LAB_14817fdde;
        }
        else {
          uVar13 = uVar15;
          uVar16 = uVar15;
          uVar21 = uVar15;
          do {
            uVar10 = (uint)uVar13;
            uVar11 = uVar22;
            if ((int)uVar10 < iVar7) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar19 = (param_2->AllocatorInstance).Data;
            uVar11 = uVar22;
            if ((int)uVar20 < (pUVar2->NamedMaterialOverrides).ArrayNum) {
              uVar11 = ~uVar20 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar7 = param_2->ArrayNum;
            if (*(longlong *)((pUVar2->NamedMaterialOverrides).AllocatorInstance.Data + local_68) ==
                *(longlong *)(pFVar19 + uVar21)) {
              uVar11 = uVar22;
              if ((int)uVar10 < iVar7) {
                uVar11 = ~uVar10 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_78 = (TObjectPtr<UMaterialInterface>_u_0)
                         ((TObjectPtr<UMaterialInterface>_u_0 *)
                         ((param_2->AllocatorInstance).Data + uVar16 * 0x10 + 8))->DebugPtr;
              if ((-1 < (int)uVar10) && ((int)uVar10 < param_3->ArrayNum)) {
                if (((int)uVar10 < 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (*(longlong *)((param_3->AllocatorInstance).Data + uVar16 * 8) != 0) {
                  uVar11 = uVar12;
                  if ((int)uVar10 < param_3->ArrayNum) {
                    uVar11 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  local_78 = (TObjectPtr<UMaterialInterface>_u_0)
                             ((TObjectPtr<UMaterialInterface>_u_0 *)
                             ((param_3->AllocatorInstance).Data + uVar16 * 8))->DebugPtr;
                }
              }
              break;
            }
            uVar13 = (ulonglong)(uVar10 + 1);
            uVar16 = uVar16 + 1;
            uVar21 = uVar21 + 0x10;
          } while ((int)(uVar10 + 1) < iVar7);
          lVar18 = local_60;
          if (local_78.DebugPtr == (UMaterialInterface *)0x0) goto LAB_14817fc21;
LAB_14817fdde:
          pTVar4 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_1->AllocatorInstance).Data;
          if (((pTVar4 <= &local_78) && (&local_78 < pTVar4 + param_1->ArrayMax)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar7 = param_1->ArrayNum;
          if (iVar7 == param_1->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar7 + 1;
          ((TObjectPtr<UMaterialInterface>_u_0 *)
          ((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8))->DebugPtr =
               (UMaterialInterface *)local_78;
          lVar17 = local_68;
        }
        local_68 = lVar17 + 8;
        local_60 = lVar18 + 0x1c;
        uVar13 = (ulonglong)(uVar20 + 1);
        if (*(int *)(local_58 + 0x38) <= (int)(uVar20 + 1)) {
          return;
        }
      } while( true );
    }
  }
  pUVar2 = (this->RequiredModule).field0_0x0.DebugPtr;
  uVar15 = 0;
  local_70.DebugPtr = (UMaterialInterface *)0x0;
  if ((0 < (pUVar2->NamedMaterialOverrides).ArrayNum) &&
     (iVar7 = param_2->ArrayNum, uVar13 = uVar15, 0 < iVar7)) {
    do {
      uVar12 = (uint)uVar15;
      uVar22 = 0;
      if ((int)uVar12 < iVar7) {
        uVar22 = ~uVar12 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar19 = (param_2->AllocatorInstance).Data;
      if (((pUVar2->NamedMaterialOverrides).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = param_2->ArrayNum;
      if (*(longlong *)(pUVar2->NamedMaterialOverrides).AllocatorInstance.Data ==
          *(longlong *)(pFVar19 + uVar13)) {
        uVar22 = 0;
        if ((int)uVar12 < iVar7) {
          uVar22 = ~uVar12 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar18 = (longlong)(int)uVar12;
        local_70 = (TObjectPtr<UMaterialInterface>_u_0)
                   ((TObjectPtr<UMaterialInterface>_u_0 *)
                   ((param_2->AllocatorInstance).Data + lVar18 * 0x10 + 8))->DebugPtr;
        if ((-1 < (int)uVar12) && ((int)uVar12 < param_3->ArrayNum)) {
          if (((int)uVar12 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(longlong *)((param_3->AllocatorInstance).Data + lVar18 * 8) != 0) {
            uVar22 = 0;
            if ((int)uVar12 < param_3->ArrayNum) {
              uVar22 = ~uVar12 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_70 = (TObjectPtr<UMaterialInterface>_u_0)
                       ((TObjectPtr<UMaterialInterface>_u_0 *)
                       ((param_3->AllocatorInstance).Data + lVar18 * 8))->DebugPtr;
          }
        }
        break;
      }
      uVar15 = (ulonglong)(uVar12 + 1);
      uVar13 = uVar13 + 0x10;
    } while ((int)(uVar12 + 1) < iVar7);
    if (local_70.DebugPtr != (UMaterialInterface *)0x0) goto LAB_1481800b3;
  }
  local_70 = (((this->RequiredModule).field0_0x0.DebugPtr)->Material).field0_0x0;
LAB_1481800b3:
  pTVar4 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_1->AllocatorInstance).Data;
  if (((pTVar4 <= &local_70) && (&local_70 < pTVar4 + param_1->ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  ((TObjectPtr<UMaterialInterface>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8))
  ->DebugPtr = (UMaterialInterface *)local_70;
  return;
}

// IsModuleEditable @ 148185bb0

bool __thiscall
UParticleLODLevel::IsModuleEditable(UParticleLODLevel *this,UParticleModule *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = this->Level;
  if ((param_1->LODValidity >> (uVar1 & 0x1f) & 1) == 0) {
    return false;
  }
  uVar2 = 0;
  if (0 < (int)uVar1) {
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      uVar2 = uVar2 | 1 << (uVar1 & 0x1f);
    }
    return (uVar2 & param_1->LODValidity) == 0;
  }
  return true;
}

// IsPostLoadThreadSafe @ 148185bf0

bool __thiscall UParticleLODLevel::IsPostLoadThreadSafe(UParticleLODLevel *this)

{
  return false;
}

// PostLoad @ 14818c2a0

void __thiscall UParticleLODLevel::PostLoad(UParticleLODLevel *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UParticleModuleSpawn *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UObject::PostLoad((UObject *)this);
  UObject::ConditionalPostLoad((UObject *)(this->RequiredModule).field0_0x0.DebugPtr);
  this_00 = (this->SpawnModule).field0_0x0.DebugPtr;
  if (this_00 != (UParticleModuleSpawn *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
  }
  pFVar3 = (this->Modules).AllocatorInstance.Data;
  iVar2 = (this->Modules).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Modules).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UParticleModule>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UObject::ConditionalPostLoad(*(UObject **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// SetLevelIndex @ 148196580

void __thiscall UParticleLODLevel::SetLevelIndex(UParticleLODLevel *this,int param_1)

{
  UParticleModuleRequired *pUVar1;
  UParticleModuleSpawn *pUVar2;
  UParticleModuleTypeDataBase *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  pUVar1 = (this->RequiredModule).field0_0x0.DebugPtr;
  *(byte *)((longlong)&pUVar1->_padding_ + 2) =
       *(byte *)((longlong)&pUVar1->_padding_ + 2) & ~(byte)(1 << (this->Level & 0x1fU));
  pUVar1 = (this->RequiredModule).field0_0x0.DebugPtr;
  *(byte *)((longlong)&pUVar1->_padding_ + 2) =
       *(byte *)((longlong)&pUVar1->_padding_ + 2) | (byte)(1 << (param_1 & 0x1fU));
  pUVar2 = (this->SpawnModule).field0_0x0.DebugPtr;
  *(byte *)((longlong)&pUVar2->_padding_ + 2) =
       *(byte *)((longlong)&pUVar2->_padding_ + 2) & ~(byte)(1 << (this->Level & 0x1fU));
  pUVar2 = (this->SpawnModule).field0_0x0.DebugPtr;
  *(byte *)((longlong)&pUVar2->_padding_ + 2) =
       *(byte *)((longlong)&pUVar2->_padding_ + 2) | (byte)(1 << (param_1 & 0x1fU));
  pUVar3 = (this->TypeDataModule).field0_0x0.DebugPtr;
  if (pUVar3 != (UParticleModuleTypeDataBase *)0x0) {
    pUVar3->field_0x2a = pUVar3->field_0x2a & ~(byte)(1 << (this->Level & 0x1fU));
    pUVar3 = (this->TypeDataModule).field0_0x0.DebugPtr;
    pUVar3->field_0x2a = pUVar3->field_0x2a | (byte)(1 << (param_1 & 0x1fU));
  }
  uVar9 = 0;
  if (0 < (this->Modules).ArrayNum) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->Modules).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)((this->Modules).AllocatorInstance.Data + lVar8);
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x2a) =
             *(byte *)(lVar4 + 0x2a) & ~(byte)(1 << (this->Level & 0x1fU)) |
             (byte)(1 << (param_1 & 0x1fU));
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar9 < (this->Modules).ArrayNum);
  }
  this->Level = param_1;
  return;
}

// StaticRegisterNativesUParticleLODLevel @ 1481a1ba0

void __cdecl UParticleLODLevel::StaticRegisterNativesUParticleLODLevel(void)

{
  return;
}

// UpdateModuleLists @ 1481b2c90

void __thiscall UParticleLODLevel::UpdateModuleLists(UParticleLODLevel *this)

{
  TArray<TObjectPtr<UParticleModuleOrbit>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<UParticleModuleEventReceiverBase>,TSizedDefaultAllocator<32>_> *pTVar2;
  TObjectPtr<UParticleModuleTypeDataBase>_u_0 TVar3;
  TObjectPtr<UParticleModuleTypeDataBase>_u_0 *pTVar4;
  UParticleModuleEventGenerator *pUVar5;
  FScriptContainerElement *pFVar6;
  TObjectPtr<UParticleModuleEventGenerator>_u_0 *pTVar7;
  UParticleModuleTypeDataBase *pUVar8;
  UParticleModuleRequired *pUVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  UClass *pUVar14;
  FStaticMeshRenderData *pFVar15;
  UMaterialInterface *pUVar16;
  FString *pFVar17;
  FScriptContainerElement *pFVar18;
  TArray<TObjectPtr<UParticleModule>,TSizedDefaultAllocator<32>_> *pTVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  longlong lVar22;
  int *piVar23;
  uint uVar24;
  FLLMScope local_res8 [2];
  uint local_res10;
  longlong local_res18;
  FMemScope local_res20;
  TObjectPtr<UParticleModuleTypeDataBase>_u_0 local_118;
  TObjectPtr<UParticleModuleTypeDataBase>_u_0 local_110;
  TObjectPtr<UParticleModuleTypeDataBase>_u_0 local_108;
  TObjectPtr<UParticleModuleTypeDataBase>_u_0 local_100;
  TObjectPtr<UParticleModuleTypeDataBase>_u_0 local_f8;
  TObjectPtr<UParticleModuleEventGenerator>_u_0 local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  FLLMScope::FLLMScope(local_res8,Particles,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Particles,true);
  piVar23 = &(this->SpawningModules).ArrayMax;
  (this->SpawningModules).ArrayNum = 0;
  if (*piVar23 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SpawningModules).AllocatorInstance,0,piVar23);
  }
  (this->SpawnModules).ArrayNum = 0;
  if ((this->SpawnModules).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SpawnModules).AllocatorInstance,0,&(this->SpawnModules).ArrayMax);
  }
  (this->UpdateModules).ArrayNum = 0;
  if ((this->UpdateModules).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->UpdateModules).AllocatorInstance,0,&(this->UpdateModules).ArrayMax);
  }
  pTVar1 = &this->OrbitModules;
  (this->OrbitModules).ArrayNum = 0;
  if ((this->OrbitModules).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->OrbitModules).ArrayMax);
  }
  pTVar2 = &this->EventReceiverModules;
  (this->EventReceiverModules).ArrayNum = 0;
  if ((this->EventReceiverModules).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,&(this->EventReceiverModules).ArrayMax);
  }
  uVar24 = 0;
  (this->EventGenerator).field0_0x0.DebugPtr = (UParticleModuleEventGenerator *)0x0;
  local_res10 = 0xffffffff;
  if (0 < (this->Modules).ArrayNum) {
    local_res18 = 0;
    do {
      lVar22 = local_res18;
      uVar12 = 0;
      if ((int)uVar24 < (this->Modules).ArrayNum) {
        uVar12 = ~uVar24 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      TVar3 = (TObjectPtr<UParticleModuleTypeDataBase>_u_0)
              ((TObjectPtr<UParticleModuleTypeDataBase>_u_0 *)
              ((this->Modules).AllocatorInstance.Data + lVar22 * 8))->DebugPtr;
      if ((UParticleModuleEventGenerator *)TVar3.DebugPtr != (UParticleModuleEventGenerator *)0x0) {
        if ((*(longlong *)&(TVar3.DebugPtr)->field_0x28 & 1) != 0) {
          local_118 = TVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
          }
          pTVar4 = (TObjectPtr<UParticleModuleTypeDataBase>_u_0 *)
                   (this->SpawnModules).AllocatorInstance.Data;
          if (((pTVar4 <= &local_118) && (&local_118 < pTVar4 + (this->SpawnModules).ArrayMax)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar13 = (this->SpawnModules).ArrayNum;
          if (iVar13 == (this->SpawnModules).ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(this->SpawnModules).AllocatorInstance,
                                &(this->SpawnModules).ArrayMax);
          }
          (this->SpawnModules).ArrayNum = iVar13 + 1;
          ((TObjectPtr<UParticleModuleTypeDataBase>_u_0 *)
          ((this->SpawnModules).AllocatorInstance.Data + (longlong)iVar13 * 8))->DebugPtr =
               (UParticleModuleTypeDataBase *)local_118;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UParticleModuleEventGenerator *)local_118.DebugPtr !=
              (UParticleModuleEventGenerator *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_118.DebugPtr);
          }
        }
        if ((*(longlong *)&(TVar3.DebugPtr)->field_0x28 & 6) != 0) {
          local_110 = TVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
          }
          pTVar4 = (TObjectPtr<UParticleModuleTypeDataBase>_u_0 *)
                   (this->UpdateModules).AllocatorInstance.Data;
          if (((pTVar4 <= &local_110) && (&local_110 < pTVar4 + (this->UpdateModules).ArrayMax)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar13 = (this->UpdateModules).ArrayNum;
          if (iVar13 == (this->UpdateModules).ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(this->UpdateModules).AllocatorInstance,
                                &(this->UpdateModules).ArrayMax);
          }
          (this->UpdateModules).ArrayNum = iVar13 + 1;
          ((TObjectPtr<UParticleModuleTypeDataBase>_u_0 *)
          ((this->UpdateModules).AllocatorInstance.Data + (longlong)iVar13 * 8))->DebugPtr =
               (UParticleModuleTypeDataBase *)local_110;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UParticleModuleEventGenerator *)local_110.DebugPtr !=
              (UParticleModuleEventGenerator *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_110.DebugPtr);
          }
        }
        pUVar14 = Z_Construct_UClass_UParticleModuleTypeDataBase_NoRegister();
        iVar13 = (int)pUVar14->_padding_;
        if ((*(int *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x38) < iVar13) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x30) +
             (longlong)iVar13 * 8) != &pUVar14->_padding_)) {
          pUVar14 = Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister();
          iVar13 = (int)pUVar14->_padding_;
          if ((*(int *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x38) < iVar13) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x30) +
               (longlong)iVar13 * 8) != &pUVar14->_padding_)) {
            pUVar14 = Z_Construct_UClass_UParticleModuleOrbit_NoRegister();
            iVar13 = (int)pUVar14->_padding_;
            if ((*(int *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x38) < iVar13) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x30) +
                 (longlong)iVar13 * 8) != &pUVar14->_padding_)) {
              pUVar14 = Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister();
              iVar13 = (int)pUVar14->_padding_;
              if ((*(int *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x38) < iVar13) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x30) +
                   (longlong)iVar13 * 8) != &pUVar14->_padding_)) {
                pUVar14 = Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister();
                iVar13 = (int)pUVar14->_padding_;
                if ((iVar13 <= *(int *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x30) +
                     (longlong)iVar13 * 8) == &pUVar14->_padding_)) {
                  pUVar14 = Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister();
                  iVar13 = (int)pUVar14->_padding_;
                  if ((*(int *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x38) < iVar13) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x30) +
                       (longlong)iVar13 * 8) != &pUVar14->_padding_)) {
                    pFVar17 = GetTypeName<UParticleModuleEventReceiverBase>(&local_68);
                    pwVar20 = L"";
                    if ((pFVar17->Data).ArrayNum == 0) {
                      pwVar21 = L"";
                    }
                    else {
                      pwVar21 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
                    }
                    pFVar17 = GetFullNameForCastLogError<UParticleModule>
                                        (&local_58,(UParticleModule *)TVar3.DebugPtr);
                    if ((pFVar17->Data).ArrayNum != 0) {
                      pwVar20 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
                    }
                    /* WARNING: Subroutine does not return */
                    CastLogError(pwVar20,pwVar21);
                  }
                  local_f8 = TVar3;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
                  }
                  pTVar4 = (TObjectPtr<UParticleModuleTypeDataBase>_u_0 *)
                           (pTVar2->AllocatorInstance).Data;
                  piVar23 = &(this->EventReceiverModules).ArrayMax;
                  if (((pTVar4 <= &local_f8) && (&local_f8 < pTVar4 + *piVar23)) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  iVar13 = (this->EventReceiverModules).ArrayNum;
                  if (iVar13 == *piVar23) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&pTVar2->AllocatorInstance,piVar23);
                  }
                  (this->EventReceiverModules).ArrayNum = iVar13 + 1;
                  ((TObjectPtr<UParticleModuleTypeDataBase>_u_0 *)
                  ((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8))->DebugPtr =
                       (UParticleModuleTypeDataBase *)local_f8;
                  TVar3 = local_f8;
                  goto joined_r0x0001481b3433;
                }
              }
              else {
                pUVar14 = Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister();
                iVar13 = (int)pUVar14->_padding_;
                if ((*(int *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x38) < iVar13) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x30) +
                     (longlong)iVar13 * 8) != &pUVar14->_padding_)) {
                  pFVar17 = GetTypeName<UParticleModuleEventGenerator>(&local_88);
                  pwVar20 = L"";
                  if ((pFVar17->Data).ArrayNum == 0) {
                    pwVar21 = L"";
                  }
                  else {
                    pwVar21 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
                  }
                  pFVar17 = GetFullNameForCastLogError<UParticleModule>
                                      (&local_78,(UParticleModule *)TVar3.DebugPtr);
                  if ((pFVar17->Data).ArrayNum != 0) {
                    pwVar20 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
                  }
                    /* WARNING: Subroutine does not return */
                  CastLogError(pwVar20,pwVar21);
                }
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
                }
                (this->EventGenerator).field0_0x0.DebugPtr = (UParticleModuleEventGenerator *)TVar3;
              }
              goto LAB_1481b3444;
            }
            pUVar14 = Z_Construct_UClass_UParticleModuleOrbit_NoRegister();
            iVar13 = (int)pUVar14->_padding_;
            if ((*(int *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x38) < iVar13) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x30) +
                 (longlong)iVar13 * 8) != &pUVar14->_padding_)) {
              pFVar17 = GetTypeName<UParticleModuleOrbit>(&local_a8);
              pwVar20 = L"";
              if ((pFVar17->Data).ArrayNum == 0) {
                pwVar21 = L"";
              }
              else {
                pwVar21 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
              }
              pFVar17 = GetFullNameForCastLogError<UParticleModule>
                                  (&local_98,(UParticleModule *)TVar3.DebugPtr);
              if ((pFVar17->Data).ArrayNum != 0) {
                pwVar20 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(pwVar20,pwVar21);
            }
            local_100 = TVar3;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
            }
            pTVar4 = (TObjectPtr<UParticleModuleTypeDataBase>_u_0 *)(pTVar1->AllocatorInstance).Data
            ;
            piVar23 = &(this->OrbitModules).ArrayMax;
            if (((pTVar4 <= &local_100) && (&local_100 < pTVar4 + *piVar23)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar13 = (this->OrbitModules).ArrayNum;
            if (iVar13 == *piVar23) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar1->AllocatorInstance,piVar23);
            }
            (this->OrbitModules).ArrayNum = iVar13 + 1;
            ((TObjectPtr<UParticleModuleTypeDataBase>_u_0 *)
            ((pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 8))->DebugPtr =
                 (UParticleModuleTypeDataBase *)local_100;
            TVar3 = local_100;
          }
          else {
            pUVar14 = Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister();
            iVar13 = (int)pUVar14->_padding_;
            if ((*(int *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x38) < iVar13) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x30) +
                 (longlong)iVar13 * 8) != &pUVar14->_padding_)) {
              pFVar17 = GetTypeName<UParticleModuleSpawnBase>(&local_c8);
              pwVar20 = L"";
              if ((pFVar17->Data).ArrayNum == 0) {
                pwVar21 = L"";
              }
              else {
                pwVar21 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
              }
              pFVar17 = GetFullNameForCastLogError<UParticleModule>
                                  (&local_b8,(UParticleModule *)TVar3.DebugPtr);
              if ((pFVar17->Data).ArrayNum != 0) {
                pwVar20 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(pwVar20,pwVar21);
            }
            local_108 = TVar3;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
            }
            pTVar4 = (TObjectPtr<UParticleModuleTypeDataBase>_u_0 *)
                     (this->SpawningModules).AllocatorInstance.Data;
            if (((pTVar4 <= &local_108) && (&local_108 < pTVar4 + (this->SpawningModules).ArrayMax))
               && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar11)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar13 = (this->SpawningModules).ArrayNum;
            if (iVar13 == (this->SpawningModules).ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&(this->SpawningModules).AllocatorInstance,
                                  &(this->SpawningModules).ArrayMax);
            }
            (this->SpawningModules).ArrayNum = iVar13 + 1;
            ((TObjectPtr<UParticleModuleTypeDataBase>_u_0 *)
            ((this->SpawningModules).AllocatorInstance.Data + (longlong)iVar13 * 8))->DebugPtr =
                 (UParticleModuleTypeDataBase *)local_108;
            TVar3 = local_108;
          }
joined_r0x0001481b3433:
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UParticleModuleEventGenerator *)TVar3.DebugPtr !=
              (UParticleModuleEventGenerator *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
          }
        }
        else {
          pUVar14 = Z_Construct_UClass_UParticleModuleTypeDataBase_NoRegister();
          iVar13 = (int)pUVar14->_padding_;
          if ((*(int *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x38) < iVar13) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&(TVar3.DebugPtr)->field_0x10 + 0x30) +
               (longlong)iVar13 * 8) != &pUVar14->_padding_)) {
            pFVar17 = GetTypeName<UParticleModuleTypeDataBase>(&local_e8);
            pwVar20 = L"";
            if ((pFVar17->Data).ArrayNum == 0) {
              pwVar21 = L"";
            }
            else {
              pwVar21 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
            }
            pFVar17 = GetFullNameForCastLogError<UParticleModule>
                                (&local_d8,(UParticleModule *)TVar3.DebugPtr);
            if ((pFVar17->Data).ArrayNum != 0) {
              pwVar20 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar20,pwVar21);
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
          }
          (this->TypeDataModule).field0_0x0.DebugPtr = (UParticleModuleTypeDataBase *)TVar3;
          if ((*(longlong *)&(TVar3.DebugPtr)->field_0x28 & 3) == 0) {
            local_res10 = uVar24;
          }
        }
      }
LAB_1481b3444:
      uVar24 = uVar24 + 1;
      local_res18 = local_res18 + 1;
    } while ((int)uVar24 < (this->Modules).ArrayNum);
  }
  pUVar5 = (this->EventGenerator).field0_0x0.DebugPtr;
  if (pUVar5 != (UParticleModuleEventGenerator *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    pFVar6 = (this->Modules).AllocatorInstance.Data;
    for (pFVar18 = pFVar6; pFVar18 != pFVar6 + (longlong)(this->Modules).ArrayNum * 8;
        pFVar18 = pFVar18 + 8) {
      if (*(UParticleModuleEventGenerator **)pFVar18 == pUVar5) {
        iVar13 = (int)((longlong)pFVar18 - (longlong)pFVar6 >> 3);
        if (iVar13 != -1) {
          pFVar6 = (this->Modules).AllocatorInstance.Data + (longlong)iVar13 * 8;
          memmove(pFVar6,pFVar6 + 8,(longlong)(((this->Modules).ArrayNum - iVar13) + -1) << 3);
          piVar23 = &(this->Modules).ArrayNum;
          *piVar23 = *piVar23 + -1;
        }
        break;
      }
    }
    pTVar19 = &this->Modules;
    local_f0 = (TObjectPtr<UParticleModuleEventGenerator>_u_0)
               (this->EventGenerator).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_f0.DebugPtr != (UParticleModuleEventGenerator *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_f0.DebugPtr);
    }
    pTVar7 = (TObjectPtr<UParticleModuleEventGenerator>_u_0 *)(pTVar19->AllocatorInstance).Data;
    if (((pTVar7 <= &local_f0) && (&local_f0 < pTVar7 + (this->Modules).ArrayMax)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar13 = (this->Modules).ArrayNum;
    piVar23 = &(this->Modules).ArrayMax;
    if (iVar13 == *piVar23) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar19->AllocatorInstance,piVar23);
      (this->Modules).ArrayNum = iVar13;
    }
    pFVar6 = (pTVar19->AllocatorInstance).Data;
    (this->Modules).ArrayNum = iVar13 + 1;
    memmove(pFVar6 + 8,pFVar6,(longlong)iVar13 << 3);
    ((TObjectPtr<UParticleModuleEventGenerator>_u_0 *)(pTVar19->AllocatorInstance).Data)->DebugPtr =
         (UParticleModuleEventGenerator *)local_f0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_f0.DebugPtr != (UParticleModuleEventGenerator *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_f0.DebugPtr);
    }
  }
  uVar24 = local_res10;
  lVar22 = (longlong)(int)local_res10;
  if (local_res10 != 0xffffffff) {
    uVar12 = 0;
    if ((int)local_res10 < (this->Modules).ArrayNum) {
      uVar12 = ~local_res10 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar6 = (this->Modules).AllocatorInstance.Data + lVar22 * 8;
    iVar13 = ((this->Modules).ArrayNum - uVar24) + -1;
    if (iVar13 != 0) {
      memmove(pFVar6,pFVar6 + 8,(longlong)iVar13 << 3);
    }
    piVar23 = &(this->Modules).ArrayNum;
    *piVar23 = *piVar23 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->Modules).AllocatorInstance,(this->Modules).ArrayNum,
               &(this->Modules).ArrayMax);
  }
  if ((this->TypeDataModule).field0_0x0.DebugPtr != (UParticleModuleTypeDataBase *)0x0) {
    pUVar14 = Z_Construct_UClass_UParticleModuleTypeDataMesh_NoRegister();
    bVar11 = FObjectPtr::IsA((FObjectPtr *)&this->TypeDataModule,pUVar14);
    if ((((bVar11) &&
         (pUVar8 = (this->TypeDataModule).field0_0x0.DebugPtr,
         pUVar8 != (UParticleModuleTypeDataBase *)0x0)) &&
        (*(UStaticMesh **)(pUVar8 + 1) != (UStaticMesh *)0x0)) &&
       ((bVar11 = UStaticMesh::HasValidRenderData(*(UStaticMesh **)(pUVar8 + 1),false,-1), bVar11 &&
        (lVar22 = this->_padding_, lVar22 != 0)))) {
      pUVar14 = Z_Construct_UClass_UParticleSpriteEmitter_NoRegister();
      lVar22 = *(longlong *)(lVar22 + 0x10);
      iVar13 = (int)pUVar14->_padding_;
      if ((iVar13 <= *(int *)(lVar22 + 0x38)) &&
         (((longlong *)*(undefined1 **)(*(longlong *)(lVar22 + 0x30) + (longlong)iVar13 * 8) ==
           &pUVar14->_padding_ && ((pUVar8[1].field_0x16 & 1) == 0)))) {
        pFVar15 = UStaticMesh::GetRenderData(*(UStaticMesh **)(pUVar8 + 1));
        if (((pFVar15->LODResources).Array.ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar22 = *(longlong *)(pFVar15->LODResources).Array.AllocatorInstance.Data;
        if ((*(int *)(lVar22 + 0x38) < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        piVar23 = (int *)(lVar22 + 0x10);
        if (*(int **)(lVar22 + 0x30) != (int *)0x0) {
          piVar23 = *(int **)(lVar22 + 0x30);
        }
        pUVar16 = UStaticMesh::GetMaterial(*(UStaticMesh **)(pUVar8 + 1),*piVar23);
        if (pUVar16 != (UMaterialInterface *)0x0) {
          pUVar9 = (this->RequiredModule).field0_0x0.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar16);
          }
          (pUVar9->Material).field0_0x0.DebugPtr = pUVar16;
        }
      }
    }
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

