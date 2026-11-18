// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 35

// StaticClass @ 14731cf30

UClass * __cdecl UParticleEmitter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UParticleEmitter.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleEmitter",
               &Z_Registration_Info_UClass_UParticleEmitter.InnerSingleton,
               StaticRegisterNativesUParticleEmitter,0x1d0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleEmitter>,
               InternalVTableHelperCtorCaller<UParticleEmitter>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleEmitter.InnerSingleton;
}

// UParticleEmitter @ 1480f4fe0

UParticleEmitter * __thiscall
UParticleEmitter::UParticleEmitter(UParticleEmitter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleEmitter__6B_;
  (this->EmitterName).ComparisonIndex = 0;
  (this->EmitterName).Number = 0;
  (this->LODLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODLevels).ArrayNum = 0;
  (this->LODLevels).ArrayMax = 0;
  *(undefined8 *)&this->ModuleOffsetMap = 0;
  *(undefined8 *)&(this->ModuleOffsetMap).field_0x8 = 0;
  *(undefined8 *)&(this->ModuleOffsetMap).field_0x20 = 0;
  *(undefined4 *)&(this->ModuleOffsetMap).field_0x28 = 0;
  *(undefined4 *)&(this->ModuleOffsetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModuleOffsetMap).field_0x34 = 0;
  *(undefined4 *)&(this->ModuleOffsetMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModuleOffsetMap).field_0x40 = 0;
  *(undefined4 *)&(this->ModuleOffsetMap).field_0x48 = 0;
  *(undefined8 *)&this->ModuleInstanceOffsetMap = 0;
  *(undefined8 *)&(this->ModuleInstanceOffsetMap).field_0x8 = 0;
  *(undefined8 *)&(this->ModuleInstanceOffsetMap).field_0x20 = 0;
  *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x28 = 0;
  *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x34 = 0;
  *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModuleInstanceOffsetMap).field_0x40 = 0;
  *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x48 = 0;
  *(undefined8 *)&this->ModuleRandomSeedInstanceOffsetMap = 0;
  *(undefined8 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x8 = 0;
  *(undefined8 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x20 = 0;
  *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x28 = 0;
  *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x34 = 0;
  *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x40 = 0;
  *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x48 = 0;
  (this->MeshMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshMaterials).ArrayNum = 0;
  (this->MeshMaterials).ArrayMax = 0;
  (this->ModulesNeedingInstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModulesNeedingInstanceData).ArrayNum = 0;
  (this->ModulesNeedingInstanceData).ArrayMax = 0;
  (this->ModulesNeedingRandomSeedInstanceData).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ModulesNeedingRandomSeedInstanceData).ArrayNum = 0;
  (this->ModulesNeedingRandomSeedInstanceData).ArrayMax = 0;
  (this->StatID).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatIDRT).StatIdPtr = &TStatId::TStatId_NAME_None;
  return this;
}

// UParticleEmitter @ 1480f5120

UParticleEmitter * __thiscall
UParticleEmitter::UParticleEmitter(UParticleEmitter *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FConstructorStatics FVar3;
  void *pvVar4;
  ulonglong uVar5;
  
  UObject::UObject((UObject *)this,param_1);
  this->bDisableWhenInsignficant = '\0';
  this->_padding_ = (longlong)&___7UParticleEmitter__6B_;
  (this->EmitterName).ComparisonIndex = 0;
  (this->EmitterName).Number = 0;
  this->bUseLegacySpawningBehavior = '\0';
  this->bDisabledLODsKeepEmitterAlive = '\0';
  (this->LODLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODLevels).ArrayNum = 0;
  (this->LODLevels).ArrayMax = 0;
  *(undefined8 *)&this->ModuleOffsetMap = 0;
  *(undefined8 *)&(this->ModuleOffsetMap).field_0x8 = 0;
  *(undefined8 *)&(this->ModuleOffsetMap).field_0x20 = 0;
  this->SignificanceLevel = Critical;
  this->QualityLevelSpawnRateScale = 1.0;
  this->DetailModeBitmask = 0xffff;
  uVar5 = (ulonglong)_tls_index;
  *(undefined4 *)&(this->ModuleOffsetMap).field_0x28 = 0;
  *(undefined4 *)&(this->ModuleOffsetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModuleOffsetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModuleOffsetMap).field_0x34 = 0;
  *(undefined8 *)&(this->ModuleOffsetMap).field_0x40 = 0;
  *(undefined4 *)&(this->ModuleOffsetMap).field_0x48 = 0;
  *(undefined8 *)&this->ModuleInstanceOffsetMap = 0;
  *(undefined8 *)&(this->ModuleInstanceOffsetMap).field_0x8 = 0;
  *(undefined8 *)&(this->ModuleInstanceOffsetMap).field_0x20 = 0;
  *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x28 = 0;
  *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x34 = 0;
  *(undefined8 *)&(this->ModuleInstanceOffsetMap).field_0x40 = 0;
  *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x48 = 0;
  *(undefined8 *)&this->ModuleRandomSeedInstanceOffsetMap = 0;
  *(undefined8 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x8 = 0;
  *(undefined8 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x20 = 0;
  *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x28 = 0;
  *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x34 = 0;
  *(undefined8 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x40 = 0;
  *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x48 = 0;
  (this->StatID).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->StatIDRT).StatIdPtr = &TStatId::TStatId_NAME_None;
  pvVar4 = ThreadLocalStoragePointer;
  (this->MeshMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshMaterials).ArrayNum = 0;
  (this->MeshMaterials).ArrayMax = 0;
  (this->ModulesNeedingInstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar2 = *(longlong *)((longlong)pvVar4 + uVar5 * 8);
  (this->ModulesNeedingInstanceData).ArrayNum = 0;
  (this->ModulesNeedingInstanceData).ArrayMax = 0;
  (this->ModulesNeedingRandomSeedInstanceData).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ModulesNeedingRandomSeedInstanceData).ArrayNum = 0;
  (this->ModulesNeedingRandomSeedInstanceData).ArrayMax = 0;
  if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::ConstructorStatics.NAME_Particle_Emitter,L"Particle Emitter");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar3.NAME_Particle_Emitter = ::ConstructorStatics.NAME_Particle_Emitter;
  this->ConvertedModules = '\x01';
  this->EmitterName = FVar3.NAME_Particle_Emitter;
  this->PeakActiveParticles = 0;
  return this;
}

// ~UParticleEmitter @ 1480f7540

void __thiscall UParticleEmitter::~UParticleEmitter(UParticleEmitter *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UParticleEmitter__6B_;
  pFVar1 = (this->ModulesNeedingRandomSeedInstanceData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModulesNeedingInstanceData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UParticleModule_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UParticleModule_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UParticleModule_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModuleRandomSeedInstanceOffsetMap);
  *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ModuleInstanceOffsetMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UParticleModule_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UParticleModule_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UParticleModule_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModuleInstanceOffsetMap);
  *(undefined4 *)&(this->ModuleOffsetMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ModuleOffsetMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UParticleModule_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UParticleModule_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UParticleModule_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModuleOffsetMap);
  pFVar1 = (this->LODLevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddEmitterCurvesToEditor @ 1480fc5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleEmitter::AddEmitterCurvesToEditor(UParticleEmitter *this,UInterpCurveEdSetup *param_1)

{
  if (4 < (byte)LogParticles._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    return;
  }
  return;
}

// AutoPopulateInstanceProperties @ 1480fe100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleEmitter::AutoPopulateInstanceProperties
          (UParticleEmitter *this,UParticleSystemComponent *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar10 = 0;
  if (0 < (this->LODLevels).ArrayNum) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->LODLevels).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = 0;
      lVar1 = *(longlong *)((this->LODLevels).AllocatorInstance.Data + lVar8);
      if (0 < *(int *)(lVar1 + 0x40)) {
        lVar9 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar7 < *(int *)(lVar1 + 0x40)) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          plVar2 = *(longlong **)(lVar9 + *(longlong *)(lVar1 + 0x38));
          (**(code **)(**(longlong **)(lVar1 + 0x50) + 0x310))(*(longlong **)(lVar1 + 0x50),param_1)
          ;
          (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x310))(*(longlong **)(lVar1 + 0x30),param_1)
          ;
          plVar3 = *(longlong **)(lVar1 + 0x48);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x310))(plVar3,param_1);
          }
          (**(code **)(*plVar2 + 0x310))(plVar2,param_1);
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 8;
        } while ((int)uVar7 < *(int *)(lVar1 + 0x40));
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar10 < (this->LODLevels).ArrayNum);
  }
  return;
}

// AutogenerateLowestLODLevel @ 1480fe750

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleEmitter::AutogenerateLowestLODLevel(UParticleEmitter *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  UParticleLODLevel *pUVar7;
  UClass *pUVar8;
  undefined4 uVar9;
  
  if ((this->LODLevels).ArrayNum == 1) {
    TArray<TObjectPtr<UParticleLODLevel>,TSizedDefaultAllocator<32>_>::InsertZeroed
              (&this->LODLevels,1,1);
    pUVar7 = NewObject<UParticleLODLevel>((UObject *)this);
    if (pUVar7 == (UParticleLODLevel *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitter.cpp"
                         ,0x300,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if ((this->LODLevels).ArrayNum < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar1 = (this->LODLevels).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UParticleLODLevel *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    *(UParticleLODLevel **)(pFVar1 + 8) = pUVar7;
    pUVar7->ConvertedModules = 1;
    pUVar7->PeakActiveParticles = 0;
    pUVar7->Level = 1;
    if ((this->LODLevels).ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar9 = __real_41200000;
    lVar2 = *(longlong *)(this->LODLevels).AllocatorInstance.Data;
    *(uint *)&pUVar7->field_0x2c =
         *(uint *)&pUVar7->field_0x2c ^ (pUVar7->bEnabled ^ *(uint *)(lVar2 + 0x2c)) & 1;
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      pUVar8 = Z_Construct_UClass_UParticleModuleTypeDataBeam2_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x48),pUVar8);
      if ((bVar4) && (*(longlong *)(lVar2 + 0x48) != 0)) {
        uVar9 = __real_42c80000;
      }
    }
    if (param_1) {
      uVar9 = __real_42c80000;
    }
    cVar6 = (**(code **)(pUVar7->_padding_ + 0x2b8))(pUVar7,lVar2,uVar9,1);
    if (cVar6 == '\0') {
      if (2 < (byte)LogParticles._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      }
      return false;
    }
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  }
  return true;
}

// Build @ 1480fec00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UParticleEmitter::Build(UParticleEmitter *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined1 auStack_4b8 [32];
  FParticleEmitterBuildInfo local_498;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  if (0 < (this->LODLevels).ArrayNum) {
    lVar1 = *(longlong *)(this->LODLevels).AllocatorInstance.Data;
    if (lVar1 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("HighLODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitter.cpp"
                         ,0x3a7,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(longlong **)(lVar1 + 0x48) != (longlong *)0x0) {
      cVar4 = (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x3a0))();
      if (cVar4 != '\0') {
        FParticleEmitterBuildInfo::FParticleEmitterBuildInfo(&local_498);
        (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x398))
                  (*(longlong **)(lVar1 + 0x48),&local_498);
        FParticleEmitterBuildInfo::~FParticleEmitterBuildInfo(&local_498);
      }
      (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x3c0))(*(longlong **)(lVar1 + 0x48),this);
    }
    CacheEmitterModuleInfo(this);
  }
  return;
}

// CacheEmitterModuleInfo @ 1480ffcc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UParticleEmitter::CacheEmitterModuleInfo(UParticleEmitter *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
  *pTVar3;
  TArray<UParticleModule_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  void *_Src;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  UClass *pUVar17;
  USubUVAnimation *pUVar18;
  FString *pFVar19;
  byte bVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  uint uVar23;
  UParticleModule *pUVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  int local_res20;
  UParticleModule *local_d8;
  longlong local_d0;
  uint local_c8;
  uint local_c4;
  longlong local_c0;
  longlong *local_b8;
  UParticleModule *local_b0;
  UParticleModule *local_a8;
  double local_a0;
  double dStack_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  this->bRequiresLoopNotification = '\0';
  this->bMeshRotationActive = '\0';
  this->bAxisLockEnabled = '\0';
  (this->LockAxisFlags).Value = '\0';
  bVar12 = 1 < *(int *)&(this->ModuleOffsetMap).field_0x48;
  if (!bVar12) {
    TSet<TTuple<UParticleModule_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UParticleModule_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>,FDefaultSetAllocator>
                      *)&this->ModuleOffsetMap);
  }
  uVar25 = 0;
  puVar1 = &(this->ModuleOffsetMap).field_0xc;
  *(undefined4 *)&(this->ModuleOffsetMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->ModuleOffsetMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ModuleOffsetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModuleOffsetMap).field_0x34 = 0;
  iVar14 = *(int *)&(this->ModuleOffsetMap).field_0x2c;
  *(undefined4 *)&(this->ModuleOffsetMap).field_0x28 = 0;
  if ((iVar14 < 0) || (0x80 < iVar14)) {
    *(undefined4 *)&(this->ModuleOffsetMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ModuleOffsetMap).field_0x10,0);
  }
  if (bVar12) {
    *(undefined4 *)&(this->ModuleOffsetMap).field_0x48 = 1;
    TSet<TTuple<UParticleModule_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UParticleModule_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->ModuleOffsetMap);
  }
  pTVar3 = &this->ModuleInstanceOffsetMap;
  bVar12 = 1 < *(int *)&(this->ModuleInstanceOffsetMap).field_0x48;
  if (!bVar12) {
    TSet<TTuple<UParticleModule_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UParticleModule_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>,FDefaultSetAllocator>
                      *)pTVar3);
  }
  puVar1 = &(this->ModuleInstanceOffsetMap).field_0xc;
  *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)pTVar3,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x34 = 0;
  iVar14 = *(int *)&(this->ModuleInstanceOffsetMap).field_0x2c;
  *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x28 = 0;
  if ((iVar14 < 0) || (0x80 < iVar14)) {
    *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ModuleInstanceOffsetMap).field_0x10,0
              );
  }
  if (bVar12) {
    *(undefined4 *)&(this->ModuleInstanceOffsetMap).field_0x48 = 1;
    TSet<TTuple<UParticleModule_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UParticleModule_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>,FDefaultSetAllocator>
              *)pTVar3);
  }
  pTVar3 = &this->ModuleRandomSeedInstanceOffsetMap;
  bVar12 = 1 < *(int *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x48;
  if (!bVar12) {
    TSet<TTuple<UParticleModule_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UParticleModule_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>,FDefaultSetAllocator>
                      *)pTVar3);
  }
  puVar1 = &(this->ModuleRandomSeedInstanceOffsetMap).field_0xc;
  *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)pTVar3,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x34 = 0;
  iVar14 = *(int *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x2c;
  *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x28 = 0;
  if ((iVar14 < 0) || (0x80 < iVar14)) {
    *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ModuleRandomSeedInstanceOffsetMap).field_0x10,0);
  }
  if (bVar12) {
    *(undefined4 *)&(this->ModuleRandomSeedInstanceOffsetMap).field_0x48 = 1;
    TSet<TTuple<UParticleModule_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UParticleModule_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>,FDefaultSetAllocator>
              *)pTVar3);
  }
  piVar2 = &(this->ModulesNeedingInstanceData).ArrayMax;
  (this->ModulesNeedingInstanceData).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ModulesNeedingInstanceData).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->ModulesNeedingRandomSeedInstanceData).ArrayMax;
  (this->ModulesNeedingRandomSeedInstanceData).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ModulesNeedingRandomSeedInstanceData).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->MeshMaterials).ArrayMax;
  (this->MeshMaterials).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->MeshMaterials).AllocatorInstance,0,piVar2);
  }
  dVar11 = _UNK_150689738;
  dVar10 = ___xmm_bfe0000000000000bfe0000000000000;
  local_a0 = ___xmm_bfe0000000000000bfe0000000000000;
  dStack_98 = _UNK_150689738;
  this->DynamicParameterDataOffset = 0;
  this->LightDataOffset = 0;
  (this->PivotOffset).field0_0x0._s_0.X = dVar10;
  (this->PivotOffset).field0_0x0._s_0.Y = dVar11;
  this->LightVolumetricScatteringIntensity = 0.0;
  this->CameraPayloadOffset = 0;
  this->ParticleSize = 0xa0;
  this->ReqInstanceBytes = 0;
  this->TypeDataOffset = 0;
  this->TypeDataInstanceOffset = -1;
  this->SubUVAnimation = (USubUVAnimation *)0x0;
  if ((this->LODLevels).ArrayNum < 1) {
    local_c0 = 0;
  }
  else {
    if (((this->LODLevels).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar27 = *(longlong *)(this->LODLevels).AllocatorInstance.Data;
    local_c0 = lVar27;
    if (lVar27 != 0) goto LAB_1480fffe7;
  }
  lVar27 = local_c0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("HighLODLevel",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitter.cpp"
                      ,0x3dc,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1480fffe7:
  plVar6 = *(longlong **)(lVar27 + 0x48);
  local_b8 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    iVar14 = (**(code **)(*plVar6 + 0x2d0))(plVar6);
    if (iVar14 != 0) {
      iVar15 = this->ParticleSize;
      this->ParticleSize = iVar14 + iVar15;
      this->TypeDataOffset = iVar15;
    }
    iVar14 = (**(code **)(*plVar6 + 0x2d8))(plVar6);
    if (iVar14 != 0) {
      iVar15 = this->ReqInstanceBytes;
      this->ReqInstanceBytes = iVar14 + iVar15;
      this->TypeDataInstanceOffset = iVar15;
    }
  }
  lVar26 = *(longlong *)(lVar27 + 0x30);
  if ((lVar26 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("RequiredModule",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitter.cpp"
                          ,0x3f2,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  cVar13 = *(char *)(lVar26 + 0x70);
  if ((cVar13 == '\x03') || (cVar13 == '\x04')) {
    bVar20 = 8;
  }
  else {
    bVar20 = 0;
  }
  this->bMeshRotationActive = '\0';
  this->field_0x37 = this->field_0x37 | bVar20;
  if (0 < *(int *)(lVar27 + 0x40)) {
    local_d0 = 0;
    do {
      lVar26 = local_d0;
      uVar23 = 0;
      if ((int)uVar25 < *(int *)(lVar27 + 0x40)) {
        uVar23 = ~uVar25 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_d8 = *(UParticleModule **)(*(longlong *)(local_c0 + 0x38) + lVar26 * 8);
      if ((local_d8 == (UParticleModule *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParticleModule",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitter.cpp"
                              ,0x3fb,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (((bool)local_d8->bEnabled) && (local_d8->bRequiresLoopingNotification != '\0')) {
        bVar20 = 2;
      }
      else {
        bVar20 = 0;
      }
      this->field_0x37 = (this->field_0x37 & 2 | bVar20) ^ this->field_0x37 & 0xfd;
      pUVar17 = Z_Construct_UClass_UParticleModuleTypeDataBase_NoRegister();
      iVar14 = (int)pUVar17->_padding_;
      if ((*(int *)(local_d8->_padding_ + 0x38) < iVar14) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(local_d8->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
          &pUVar17->_padding_)) {
        iVar14 = (**(code **)(local_d8->_padding_ + 0x2d0))(local_d8,local_b8);
        if (iVar14 != 0) {
          local_res8[0] = this->ParticleSize;
          TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
          ::Emplace<UParticleModule_*_const_&,unsigned_int>
                    ((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                      *)&this->ModuleOffsetMap,&local_d8,local_res8);
          pUVar17 = Z_Construct_UClass_UParticleModuleParameterDynamic_NoRegister();
          iVar15 = (int)pUVar17->_padding_;
          if (((iVar15 <= *(int *)(local_d8->_padding_ + 0x38)) &&
              ((longlong *)
               *(undefined1 **)(*(longlong *)(local_d8->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
               &pUVar17->_padding_)) && (this->DynamicParameterDataOffset == 0)) {
            this->DynamicParameterDataOffset = this->ParticleSize;
          }
          pUVar17 = Z_Construct_UClass_UParticleModuleLight_NoRegister();
          pUVar24 = local_d8;
          iVar15 = (int)pUVar17->_padding_;
          if (((iVar15 <= *(int *)(local_d8->_padding_ + 0x38)) &&
              ((longlong *)
               *(undefined1 **)(*(longlong *)(local_d8->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
               &pUVar17->_padding_)) && (this->LightDataOffset == 0)) {
            pUVar17 = Z_Construct_UClass_UParticleModuleLight_NoRegister();
            iVar15 = (int)pUVar17->_padding_;
            if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar15) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
                &pUVar17->_padding_)) {
              pUVar24 = (UParticleModule *)0x0;
            }
            this->LightVolumetricScatteringIntensity = *(float *)&pUVar24[6]._padding_;
            this->LightDataOffset = this->ParticleSize;
          }
          pUVar17 = Z_Construct_UClass_UParticleModuleCameraOffset_NoRegister();
          iVar15 = (int)pUVar17->_padding_;
          if (((iVar15 <= *(int *)(local_d8->_padding_ + 0x38)) &&
              ((longlong *)
               *(undefined1 **)(*(longlong *)(local_d8->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
               &pUVar17->_padding_)) && (this->CameraPayloadOffset == 0)) {
            this->CameraPayloadOffset = this->ParticleSize;
          }
          this->ParticleSize = this->ParticleSize + iVar14;
        }
        iVar14 = (**(code **)(local_d8->_padding_ + 0x2d8))(local_d8);
        local_res20 = iVar14;
        if (0 < iVar14) {
          local_res10[0] = this->ReqInstanceBytes;
          TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
          ::Emplace<UParticleModule_*_const_&,unsigned_int>
                    ((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                      *)&this->ModuleInstanceOffsetMap,&local_d8,local_res10);
          pTVar4 = &this->ModulesNeedingInstanceData;
          pFVar7 = (pTVar4->AllocatorInstance).Data;
          if (((pFVar7 <= (FScriptContainerElement *)&local_d8) &&
              ((FScriptContainerElement *)&local_d8 <
               pFVar7 + (longlong)(this->ModulesNeedingInstanceData).ArrayMax * 8)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar15 = (this->ModulesNeedingInstanceData).ArrayNum;
          if (iVar15 == (this->ModulesNeedingInstanceData).ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar4->AllocatorInstance,
                                &(this->ModulesNeedingInstanceData).ArrayMax);
          }
          lVar27 = local_d0;
          (this->ModulesNeedingInstanceData).ArrayNum = iVar15 + 1;
          uVar23 = 1;
          *(UParticleModule **)((pTVar4->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_d8;
          if (1 < (this->LODLevels).ArrayNum) {
            lVar26 = 8;
            do {
              uVar16 = 0;
              if ((int)uVar23 < (this->LODLevels).ArrayNum) {
                uVar16 = ~uVar23 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_res18[0] = this->ReqInstanceBytes;
              lVar8 = *(longlong *)((this->LODLevels).AllocatorInstance.Data + lVar26);
              uVar16 = 0;
              if ((int)uVar25 < *(int *)(lVar8 + 0x40)) {
                uVar16 = ~uVar25 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_b0 = *(UParticleModule **)(*(longlong *)(lVar8 + 0x38) + lVar27 * 8);
              TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
              ::Emplace<UParticleModule_*,unsigned_int>
                        ((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                          *)&this->ModuleInstanceOffsetMap,&local_b0,local_res18);
              uVar23 = uVar23 + 1;
              lVar26 = lVar26 + 8;
              iVar14 = local_res20;
            } while ((int)uVar23 < (this->LODLevels).ArrayNum);
          }
          this->ReqInstanceBytes = this->ReqInstanceBytes + iVar14;
        }
        if ((FApp::bUseFixedSeed != false) ||
           (lVar26 = local_d0, local_d8->bSupportsRandomSeed != '\0')) {
          local_c8 = this->ReqInstanceBytes;
          TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
          ::Emplace<UParticleModule_*_const_&,unsigned_int>
                    ((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                      *)&this->ModuleRandomSeedInstanceOffsetMap,&local_d8,&local_c8);
          pTVar4 = &this->ModulesNeedingRandomSeedInstanceData;
          pFVar7 = (pTVar4->AllocatorInstance).Data;
          if ((pFVar7 <= (FScriptContainerElement *)&local_d8) &&
             (((FScriptContainerElement *)&local_d8 <
               pFVar7 + (longlong)(this->ModulesNeedingRandomSeedInstanceData).ArrayMax * 8 &&
              (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)))) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar14 = (this->ModulesNeedingRandomSeedInstanceData).ArrayNum;
          if (iVar14 == (this->ModulesNeedingRandomSeedInstanceData).ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar4->AllocatorInstance,
                                &(this->ModulesNeedingRandomSeedInstanceData).ArrayMax);
          }
          uVar23 = 1;
          (this->ModulesNeedingRandomSeedInstanceData).ArrayNum = iVar14 + 1;
          *(UParticleModule **)((pTVar4->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_d8;
          if (1 < (this->LODLevels).ArrayNum) {
            lVar27 = 8;
            do {
              uVar16 = 0;
              if ((int)uVar23 < (this->LODLevels).ArrayNum) {
                uVar16 = ~uVar23 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_c4 = this->ReqInstanceBytes;
              lVar26 = *(longlong *)((this->LODLevels).AllocatorInstance.Data + lVar27);
              uVar16 = 0;
              if ((int)uVar25 < *(int *)(lVar26 + 0x40)) {
                uVar16 = ~uVar25 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_a8 = *(UParticleModule **)(*(longlong *)(lVar26 + 0x38) + local_d0 * 8);
              TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
              ::Emplace<UParticleModule_*,unsigned_int>
                        ((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                          *)&this->ModuleRandomSeedInstanceOffsetMap,&local_a8,&local_c4);
              uVar23 = uVar23 + 1;
              lVar27 = lVar27 + 8;
            } while ((int)uVar23 < (this->LODLevels).ArrayNum);
          }
          this->ReqInstanceBytes = this->ReqInstanceBytes + 8;
          lVar26 = local_d0;
        }
      }
      pwVar22 = L"";
      pUVar17 = Z_Construct_UClass_UParticleModuleOrientationAxisLock_NoRegister();
      pUVar24 = local_d8;
      iVar14 = (int)pUVar17->_padding_;
      if ((*(int *)(local_d8->_padding_ + 0x38) < iVar14) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(local_d8->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
          &pUVar17->_padding_)) {
        pUVar17 = Z_Construct_UClass_UParticleModulePivotOffset_NoRegister();
        pUVar24 = local_d8;
        iVar14 = (int)pUVar17->_padding_;
        if ((*(int *)(local_d8->_padding_ + 0x38) < iVar14) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(local_d8->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
            &pUVar17->_padding_)) {
          pUVar17 = Z_Construct_UClass_UParticleModuleMeshMaterial_NoRegister();
          pUVar24 = local_d8;
          iVar14 = (int)pUVar17->_padding_;
          if ((*(int *)(local_d8->_padding_ + 0x38) < iVar14) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(local_d8->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
              &pUVar17->_padding_)) {
            pUVar17 = Z_Construct_UClass_UParticleModuleSubUV_NoRegister();
            pUVar24 = local_d8;
            iVar14 = (int)pUVar17->_padding_;
            if ((iVar14 <= *(int *)(local_d8->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(local_d8->_padding_ + 0x30) + (longlong)iVar14 * 8)
                == &pUVar17->_padding_)) {
              pUVar17 = Z_Construct_UClass_UParticleModuleSubUV_NoRegister();
              iVar14 = (int)pUVar17->_padding_;
              if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar14) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar14 * 8)
                  != &pUVar17->_padding_)) {
                pUVar24 = (UParticleModule *)0x0;
              }
              pUVar18 = (USubUVAnimation *)pUVar24[1]._padding_;
              if (((pUVar18 == (USubUVAnimation *)0x0) ||
                  ((pUVar18->SubUVTexture).field0_0x0.DebugPtr == (UTexture2D *)0x0)) ||
                 ((pUVar18->DerivedData).BoundingGeometry.ArrayNum == 0)) {
                pUVar18 = (USubUVAnimation *)0x0;
              }
              this->SubUVAnimation = pUVar18;
            }
          }
          else {
            pUVar17 = Z_Construct_UClass_UParticleModuleMeshMaterial_NoRegister();
            iVar14 = (int)pUVar17->_padding_;
            if (((*(int *)(pUVar24->_padding_ + 0x38) < iVar14) ||
                ((longlong *)
                 *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar14 * 8)
                 != &pUVar17->_padding_)) || (pUVar24 == (UParticleModule *)0x0)) {
              pFVar19 = GetTypeName<UParticleModuleMeshMaterial>(&local_70);
              if ((pFVar19->Data).ArrayNum == 0) {
                pwVar21 = L"";
              }
              else {
                pwVar21 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
              }
              pFVar19 = GetFullNameForCastLogError<UParticleModule>(local_60,pUVar24);
              if ((pFVar19->Data).ArrayNum != 0) {
                pwVar22 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(pwVar22,pwVar21);
            }
            if ((bool)pUVar24->bEnabled) {
              pTVar5 = &this->MeshMaterials;
              if ((UParticleModule *)pTVar5 != pUVar24 + 1) {
                iVar14 = (int)pUVar24[1]._padding_;
                _Src = (void *)pUVar24[1]._padding_;
                iVar15 = (this->MeshMaterials).ArrayMax;
                (this->MeshMaterials).ArrayNum = iVar14;
                if ((iVar14 == 0) && (iVar15 == 0)) {
                  (this->MeshMaterials).ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,iVar14,iVar15,&pTVar5->AllocatorInstance,iVar14,
                             &(this->MeshMaterials).ArrayMax);
                  if (iVar14 != 0) {
                    memcpy((pTVar5->AllocatorInstance).Data,_Src,(longlong)iVar14 << 3);
                  }
                }
              }
            }
          }
        }
        else {
          pUVar17 = Z_Construct_UClass_UParticleModulePivotOffset_NoRegister();
          iVar14 = (int)pUVar17->_padding_;
          if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar14) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
              &pUVar17->_padding_)) {
            pUVar24 = (UParticleModule *)0x0;
          }
          (this->PivotOffset).field0_0x0._s_0.X =
               (double)pUVar24[1]._padding_ + (this->PivotOffset).field0_0x0._s_0.X;
          (this->PivotOffset).field0_0x0._s_0.Y =
               (double)pUVar24[1]._padding_ + (this->PivotOffset).field0_0x0._s_0.Y;
        }
      }
      else {
        pUVar17 = Z_Construct_UClass_UParticleModuleOrientationAxisLock_NoRegister();
        iVar14 = (int)pUVar17->_padding_;
        if (((*(int *)(pUVar24->_padding_ + 0x38) < iVar14) ||
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
             &pUVar17->_padding_)) || (pUVar24 == (UParticleModule *)0x0)) {
          pFVar19 = GetTypeName<UParticleModuleOrientationAxisLock>(&local_90);
          if ((pFVar19->Data).ArrayNum == 0) {
            pwVar21 = L"";
          }
          else {
            pwVar21 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
          }
          pFVar19 = GetFullNameForCastLogError<UParticleModule>(&local_80,pUVar24);
          if ((pFVar19->Data).ArrayNum != 0) {
            pwVar22 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar22,pwVar21);
        }
        this->field_0x37 =
             this->field_0x37 ^ ((byte)pUVar24->field_0x28 >> 5 ^ this->field_0x37) & 4;
        (this->LockAxisFlags).Value = (uchar)pUVar24[1]._padding_;
      }
      if ((this->bMeshRotationActive == '\0') &&
         (cVar13 = (**(code **)(local_d8->_padding_ + 0x370))(local_d8), cVar13 != '\0')) {
        this->bMeshRotationActive = '\x01';
      }
      local_d0 = lVar26 + 1;
      uVar25 = uVar25 + 1;
      lVar27 = local_c0;
    } while ((int)uVar25 < *(int *)(local_c0 + 0x40));
  }
  return;
}

// CalculateMaxActiveParticleCount @ 1481013a0

bool __thiscall UParticleEmitter::CalculateMaxActiveParticleCount(UParticleEmitter *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UClass *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (this->LODLevels).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->LODLevels).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      plVar2 = *(longlong **)((this->LODLevels).AllocatorInstance.Data + lVar9);
      if ((plVar2 != (longlong *)0x0) && ((*(byte *)((longlong)plVar2 + 0x2c) & 1) != 0)) {
        if (((int)plVar2[5] == 0) && (plVar2[9] != 0)) {
          pUVar7 = Z_Construct_UClass_UParticleModuleTypeDataBeam2_NoRegister();
          bVar4 = FObjectPtr::IsA((FObjectPtr *)(plVar2 + 9),pUVar7);
          if ((bVar4) && (plVar2[9] != 0)) {
            iVar1 = *(int *)(plVar2[9] + 0x40);
            (**(code **)(*plVar2 + 0x2c0))(plVar2);
            *(int *)((longlong)plVar2 + 0xb4) = iVar1 + 2;
            goto LAB_14810147d;
          }
        }
        (**(code **)(*plVar2 + 0x2c0))(plVar2);
      }
LAB_14810147d:
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->LODLevels).ArrayNum);
  }
  return true;
}

// ChangeEditorColor @ 148101c60

void __thiscall
UParticleEmitter::ChangeEditorColor
          (UParticleEmitter *this,FColor *param_1,UInterpCurveEdSetup *param_2)

{
  return;
}

// CreateInstance @ 148104ea0

/* WARNING: Enum "Type": Some values do not have unique names */

FParticleEmitterInstance * __thiscall
UParticleEmitter::CreateInstance(UParticleEmitter *this,IParticleEmitterInstanceOwner *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  return (FParticleEmitterInstance *)0x0;
}

// CreateLODLevel @ 1481050e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

int __thiscall UParticleEmitter::CreateLODLevel(UParticleEmitter *this,int param_1,bool param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  UParticleLODLevel *pUVar9;
  UClass *pUVar10;
  UParticleModuleRequired *pUVar11;
  UParticleModuleSpawn *pUVar12;
  UDistributionFloat *pUVar13;
  UObject *this_00;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  UObject *pUVar19;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [128];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar8 = (this->LODLevels).ArrayNum;
  uVar16 = 0;
  if (iVar8 != 0) {
    uVar16 = param_1;
  }
  if (((int)uVar16 < 0) || (iVar8 < (int)uVar16)) {
    return -1;
  }
  uVar15 = 0xffffffff;
  this_00 = (UObject *)0x0;
  pUVar19 = this_00;
  if (uVar16 == 0) {
    if (0 < iVar8) {
      uVar15 = 0;
      this_00 = *(UObject **)(this->LODLevels).AllocatorInstance.Data;
      pUVar19 = this_00;
    }
  }
  else {
    if ((int)uVar16 < 1) goto LAB_14810529c;
    uVar15 = uVar16 - 1;
    uVar14 = 0;
    if ((int)uVar15 < iVar8) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    pUVar19 = *(UObject **)((this->LODLevels).AllocatorInstance.Data + (longlong)(int)uVar15 * 8);
    if ((this->LODLevels).ArrayNum <= (int)uVar16) goto LAB_14810529c;
    if (((int)uVar16 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    this_00 = *(UObject **)((this->LODLevels).AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
    uVar15 = uVar16;
  }
  if (this_00 != (UObject *)0x0) {
    UObject::ConditionalPostLoad(this_00);
    uVar14 = (this->LODLevels).ArrayNum - 1;
    for (lVar17 = (longlong)(int)uVar14; (int)uVar15 <= lVar17; lVar17 = lVar17 + -1) {
      uVar7 = 0;
      if ((int)uVar14 < (this->LODLevels).ArrayNum) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
      plVar18 = *(longlong **)((this->LODLevels).AllocatorInstance.Data + lVar17 * 8);
      if (plVar18 != (longlong *)0x0) {
        (**(code **)(*plVar18 + 0x2c8))();
      }
      uVar14 = uVar14 - 1;
    }
  }
LAB_14810529c:
  pUVar9 = NewObject<UParticleLODLevel>((UObject *)this);
  if ((pUVar9 == (UParticleLODLevel *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CreatedLODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitter.cpp"
                         ,0x255,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  pUVar9->bEnabled = 1;
  pUVar9->ConvertedModules = 1;
  pUVar9->Level = uVar16;
  pUVar9->PeakActiveParticles = 0;
  if ((this->LODLevels).ArrayNum == 0) {
    TArray<TObjectPtr<UParticleLODLevel>,TSizedDefaultAllocator<32>_>::InsertZeroed
              (&this->LODLevels,0,1);
    if (((this->LODLevels).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    pFVar3 = (this->LODLevels).AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    *(UParticleLODLevel **)pFVar3 = pUVar9;
    uVar15 = 0;
  }
  else {
    TArray<TObjectPtr<UParticleLODLevel>,TSizedDefaultAllocator<32>_>::InsertZeroed
              (&this->LODLevels,uVar16,1);
    uVar15 = 0;
    if ((int)uVar16 < (this->LODLevels).ArrayNum) {
      uVar15 = ~uVar16 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    pFVar3 = (this->LODLevels).AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    *(UParticleLODLevel **)(pFVar3 + (longlong)(int)uVar16 * 8) = pUVar9;
    uVar15 = uVar16;
  }
  pUVar13 = (UDistributionFloat *)0x0;
  pUVar9->Level = uVar15;
  if (pUVar19 == (UObject *)0x0) {
    pUVar19 = (UObject *)this->_padding_;
    FObjectInitializer::AssertIfInConstructor
              (pUVar19,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = Z_Construct_UClass_UParticleModuleRequired_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_148,pUVar10);
    local_148._8_8_ = pUVar19;
    pUVar11 = (UParticleModuleRequired *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_148);
    if (local_148._64_8_ != 0) {
      plVar18 = (longlong *)(local_148 + 0x50);
      if ((longlong *)local_148._104_8_ != (longlong *)0x0) {
        plVar18 = (longlong *)local_148._104_8_;
      }
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    if ((pUVar11 == (UParticleModuleRequired *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RequiredModule",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitter.cpp"
                           ,0x278,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    (**(code **)(pUVar11->_padding_ + 0x2e8))(pUVar11,this);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    (pUVar9->RequiredModule).field0_0x0.DebugPtr = pUVar11;
    pUVar11->bUseLocalSpace = '\0';
    pUVar11->bKillOnCompleted = '\0';
    pUVar11->bKillOnDeactivate = '\0';
    pUVar11->bScaleUV = '\0';
    *(byte *)&pUVar11->_padding_ = (byte)pUVar11->_padding_ | 0x80;
    pUVar11->SubImages_Horizontal = 1;
    cVar6 = '\x01' << ((byte)uVar16 & 0x1f);
    *(char *)((longlong)&pUVar11->_padding_ + 2) = cVar6;
    pUVar11->EmitterDuration = 1.0;
    pUVar11->EmitterLoops = 0;
    (pUVar11->ParticleBurstMethod).Value = '\0';
    (pUVar11->InterpolationMethod).Value = '\0';
    pUVar11->SubImages_Vertical = 1;
    pUVar11->RandomImageTime = 0.0;
    pUVar11->RandomImageChanges = 0;
    pUVar19 = (UObject *)this->_padding_;
    FObjectInitializer::AssertIfInConstructor
              (pUVar19,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = Z_Construct_UClass_UParticleModuleSpawn_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar10);
    local_c8._8_8_ = pUVar19;
    pUVar12 = (UParticleModuleSpawn *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar18 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar18 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    if ((pUVar12 == (UParticleModuleSpawn *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SpawnModule",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitter.cpp"
                           ,0x292,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 != (UParticleModuleSpawn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    (pUVar9->SpawnModule).field0_0x0.DebugPtr = pUVar12;
    *(char *)((longlong)&pUVar12->_padding_ + 2) = cVar6;
    if ((pUVar12->Rate).Distribution.field0_0x0.DebugPtr != (UDistributionFloat *)0x0) {
      pUVar10 = Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&(pUVar12->Rate).Distribution,pUVar10);
      if (bVar5) {
        pUVar13 = (pUVar12->Rate).Distribution.field0_0x0.DebugPtr;
      }
    }
    pUVar13->bIsDirty = '\x01';
    *(undefined4 *)&pUVar13[1]._padding_ = 0x41200000;
    piVar2 = &(pUVar12->BurstList).ArrayMax;
    (pUVar12->BurstList).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(pUVar12->BurstList).AllocatorInstance,0,piVar2);
    }
    (pUVar9->TypeDataModule).field0_0x0.DebugPtr = (UParticleModuleTypeDataBase *)0x0;
  }
  else {
    UObject::ConditionalPostLoad(pUVar19);
    cVar6 = (**(code **)(pUVar9->_padding_ + 0x2b8))(pUVar9,pUVar19,__real_42c80000,param_2);
    if ((cVar6 == '\0') && (2 < (byte)LogParticles._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    }
  }
  iVar8 = pUVar9->Level;
  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  return iVar8;
}

// CreateStatID @ 1481060c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleEmitter::CreateStatID(UParticleEmitter *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 _Src [8];
  int iVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_void___cdecl_UParticleEmitter::CreateStatID(void)const_::_2_::FStat_STAT_UParticleEmitterCreateStatID>
  FVar7;
  FString *pFVar8;
  FString *pFVar9;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar11;
  undefined1 auVar12 [8];
  FNameEntryId FVar13;
  FName FVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  LARGE_INTEGER local_res8;
  FName local_res10;
  undefined4 local_res18 [2];
  FName local_res20;
  undefined1 local_b8 [8];
  FStatNameAndInfo local_b0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FString local_88;
  undefined1 local_78 [16];
  LARGE_INTEGER *local_68;
  FName *local_60;
  FName local_58;
  
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UParticleEmitterCreateStatID ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UParticleEmitter::CreateStatID(void)const_::_2_::FStat_STAT_UParticleEmitterCreateStatID>
         )0x0) {
      pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_UParticleEmitterCreateStatID");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UParticleEmitterCreateStatID,*pFVar6,
                 L"STAT_UParticleEmitterCreateStatID","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar7 = StatPtr_STAT_UParticleEmitterCreateStatID;
  if (StatPtr_STAT_UParticleEmitterCreateStatID ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UParticleEmitter::CreateStatID(void)const_::_2_::FStat_STAT_UParticleEmitterCreateStatID>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_UParticleEmitterCreateStatID");
    FVar7 = (FThreadSafeStaticStat<_public:_void___cdecl_UParticleEmitter::CreateStatID(void)const_::_2_::FStat_STAT_UParticleEmitterCreateStatID>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UParticleEmitterCreateStatID,
                         *pFVar6,L"STAT_UParticleEmitterCreateStatID","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar17 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitter.cpp"
                   ,0x485);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar13.Value;
      local_res8.s.HighPart = uVar17;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar3 = true;
      goto LAB_14810621e;
    }
  }
  bVar3 = false;
  FVar14 = local_58;
LAB_14810621e:
  if (this->_padding_ != 0) {
    FVar11 = *(FName *)(this->_padding_ + 0x18);
  }
  local_res20 = FVar11;
  pFVar8 = ::FName::ToString(&this->EmitterName,(FString *)local_78);
  pFVar9 = ::FName::ToString(&local_res20,&local_98);
  pTVar10 = &::FString::FString(&local_88,L"Emitter")->Data;
  iVar18 = (pFVar9->Data).ArrayNum;
  iVar15 = iVar18 + -1;
  if (iVar18 == 0) {
    iVar15 = 0;
  }
  iVar18 = 1;
  if ((pTVar10->ArrayNum != 0) || (iVar5 = 2, iVar15 == -1)) {
    iVar5 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_a8,pTVar10,iVar5 + iVar15);
  ::FString::PathAppend
            ((FString *)&local_a8,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar15);
  iVar5 = (pFVar8->Data).ArrayNum;
  iVar15 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar15 = 0;
  }
  if ((local_a8.ArrayNum == 0) && (iVar15 != -1)) {
    iVar18 = 2;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_b8,&local_a8,iVar18 + iVar15);
  ::FString::PathAppend((FString *)local_b8,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar15)
  ;
  FVar13.Value = local_b0.Index.Value;
  _Src = local_b8;
  lVar16 = (longlong)(int)local_b0.Index.Value;
  local_b8 = (undefined1  [8])0x0;
  local_b0.Index.Value = 0;
  local_b0.Number = 0;
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if ((TStatIdData *)local_88.Data.AllocatorInstance.Data != (TStatIdData *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  local_res10.ComparisonIndex.Value._0_1_ = 1;
  local_res8.s.LowPart._0_1_ = 1;
  local_res18[0] = 2;
  auVar12 = (undefined1  [8])L"";
  if (FVar13.Value != 0) {
    auVar12 = _Src;
  }
  pFVar6 = ::FName::FName((FName *)&local_a8,(wchar_t *)auVar12);
  local_98.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
  local_78._0_8_ = &local_98;
  local_78._8_8_ = local_res18;
  local_68 = &local_res8;
  local_60 = &local_res10;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_Emitters>'::__l2::<lambda_1>::operator()
            (local_78);
  (this->StatID).StatIdPtr = (TStatIdData *)local_88.Data.AllocatorInstance.Data;
  local_b8 = (undefined1  [8])0x0;
  local_b0 = (FStatNameAndInfo)CONCAT44(local_b0.Number,FVar13.Value);
  if (FVar13.Value == 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,4,0,(ForAnyElementType *)local_b8,0,&local_b0.Number);
  }
  else {
    uVar17 = FVar13.Value + 3;
    if ((int)uVar17 < (int)FVar13.Value) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar17,0,(ForAnyElementType *)local_b8,FVar13.Value,&local_b0.Number);
    memcpy((void *)local_b8,(void *)_Src,lVar16 * 2);
  }
  ::FString::PathAppend((FString *)local_b8,L"RT",2);
  local_res10.ComparisonIndex.Value._0_1_ = 1;
  auVar12 = (undefined1  [8])L"";
  if (local_b0.Index.Value != 0) {
    auVar12 = local_b8;
  }
  local_res8.s.LowPart._0_1_ = 1;
  local_res18[0] = 2;
  pFVar6 = ::FName::FName((FName *)&local_a8,(wchar_t *)auVar12);
  local_88.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar6;
  local_78._0_8_ = &local_88;
  local_78._8_8_ = local_res18;
  local_68 = &local_res8;
  local_60 = &local_res10;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_EmittersRT>'::__l2::<lambda_1>::
  operator()(local_78);
  (this->StatIDRT).StatIdPtr = (TStatIdData *)local_98.Data.AllocatorInstance.Data;
  if (local_b8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_b8);
  }
  if (_Src != (undefined1  [8])0x0) {
    FMemory::Free((void *)_Src);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_b0 = (FStatNameAndInfo)((ulonglong)FVar14 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_b8 = (undefined1  [8])(ulonglong)local_res8.s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_b8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// EditorUpdateCurrentLOD @ 148107b30

void __thiscall
UParticleEmitter::EditorUpdateCurrentLOD(UParticleEmitter *this,FParticleEmitterInstance *param_1)

{
  return;
}

// GetCurrentLODLevel @ 148110a40

UParticleLODLevel * __thiscall
UParticleEmitter::GetCurrentLODLevel(UParticleEmitter *this,FParticleEmitterInstance *param_1)

{
  return param_1->CurrentLODLevel;
}

// GetEmitterName @ 148115f80

FName * __thiscall UParticleEmitter::GetEmitterName(UParticleEmitter *this)

{
  return &this->EmitterName;
}

// GetLODLevel @ 148116150

UParticleLODLevel * __thiscall UParticleEmitter::GetLODLevel(UParticleEmitter *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UParticleLODLevel *pUVar3;
  
  if ((this->LODLevels).ArrayNum <= param_1) {
    return (UParticleLODLevel *)0x0;
  }
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UParticleLODLevel *)(*pcVar1)();
      return pUVar3;
    }
  }
  return *(UParticleLODLevel **)((this->LODLevels).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetParametersUtilized @ 148117a50

void __thiscall
UParticleEmitter::GetParametersUtilized
          (UParticleEmitter *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  UParticleModule *local_res8;
  longlong local_res10;
  UParticleModule *local_res18;
  UParticleModule *local_res20;
  UParticleModule *local_68;
  TArray<UParticleModule_*,TSizedDefaultAllocator<32>_> local_60 [2];
  
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  uVar9 = 0;
  local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60[0].ArrayNum = 0;
  local_60[0].ArrayMax = 0;
  if (0 < (this->LODLevels).ArrayNum) {
    local_res10 = 0;
    do {
      lVar1 = local_res10;
      uVar7 = 0;
      if ((int)uVar9 < (this->LODLevels).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)((this->LODLevels).AllocatorInstance.Data + lVar1);
      if (lVar1 != 0) {
        if ((*(longlong *)(lVar1 + 0x30) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("LODLevel->RequiredModule",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitter.cpp"
                               ,0x375,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)(lVar1 + 0x30);
        for (FVar6.Data = local_60[0].AllocatorInstance.Data;
            FVar6.Data != local_60[0].AllocatorInstance.Data + (longlong)local_60[0].ArrayNum * 8;
            FVar6.Data = FVar6.Data + 8) {
          if (*(longlong **)FVar6.Data == plVar2) {
            if ((int)((longlong)FVar6.Data - (longlong)local_60[0].AllocatorInstance.Data >> 3) !=
                -1) goto LAB_148117c21;
            break;
          }
        }
        (**(code **)(*plVar2 + 0x358))(plVar2,param_1);
        (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x360))(*(longlong **)(lVar1 + 0x30),param_2);
        local_res18 = *(UParticleModule **)(lVar1 + 0x30);
        TArray<UParticleModule_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UParticleModule_*>
                  (local_60,&local_res18);
LAB_148117c21:
        if ((*(longlong *)(lVar1 + 0x50) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("LODLevel->SpawnModule",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitter.cpp"
                               ,0x37d,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)(lVar1 + 0x50);
        for (FVar6.Data = local_60[0].AllocatorInstance.Data;
            FVar6.Data != local_60[0].AllocatorInstance.Data + (longlong)local_60[0].ArrayNum * 8;
            FVar6.Data = FVar6.Data + 8) {
          if (*(longlong **)FVar6.Data == plVar2) {
            if ((int)((longlong)FVar6.Data - (longlong)local_60[0].AllocatorInstance.Data >> 3) !=
                -1) goto LAB_148117cb4;
            break;
          }
        }
        (**(code **)(*plVar2 + 0x358))(plVar2,param_1);
        (**(code **)(**(longlong **)(lVar1 + 0x50) + 0x360))(*(longlong **)(lVar1 + 0x50),param_2);
        local_res20 = *(UParticleModule **)(lVar1 + 0x50);
        TArray<UParticleModule_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UParticleModule_*>
                  (local_60,&local_res20);
LAB_148117cb4:
        plVar2 = *(longlong **)(lVar1 + 0x48);
        if (plVar2 != (longlong *)0x0) {
          for (FVar6.Data = local_60[0].AllocatorInstance.Data;
              FVar6.Data != local_60[0].AllocatorInstance.Data + (longlong)local_60[0].ArrayNum * 8;
              FVar6.Data = FVar6.Data + 8) {
            if (*(longlong **)FVar6.Data == plVar2) {
              if ((int)((longlong)FVar6.Data - (longlong)local_60[0].AllocatorInstance.Data >> 3) !=
                  -1) goto LAB_148117d21;
              break;
            }
          }
          (**(code **)(*plVar2 + 0x358))(plVar2,param_1);
          (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x360))(*(longlong **)(lVar1 + 0x48),param_2)
          ;
          local_68 = *(UParticleModule **)(lVar1 + 0x48);
          TArray<UParticleModule_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UParticleModule_*>
                    (local_60,&local_68);
        }
LAB_148117d21:
        uVar7 = 0;
        if (0 < *(int *)(lVar1 + 0x40)) {
          lVar8 = 0;
          do {
            uVar5 = 0;
            if ((int)uVar7 < *(int *)(lVar1 + 0x40)) {
              uVar5 = ~uVar7 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_res8 = *(UParticleModule **)(lVar8 + *(longlong *)(lVar1 + 0x38));
            if (local_res8 != (UParticleModule *)0x0) {
              for (FVar6.Data = local_60[0].AllocatorInstance.Data;
                  FVar6.Data !=
                  local_60[0].AllocatorInstance.Data + (longlong)local_60[0].ArrayNum * 8;
                  FVar6.Data = FVar6.Data + 8) {
                if (*(UParticleModule **)FVar6.Data == local_res8) {
                  if ((int)((longlong)FVar6.Data - (longlong)local_60[0].AllocatorInstance.Data >> 3
                           ) != -1) goto LAB_148117de9;
                  break;
                }
              }
              (**(code **)(local_res8->_padding_ + 0x358))(local_res8,param_1);
              (**(code **)(local_res8->_padding_ + 0x360))(local_res8,param_2);
              TArray<UParticleModule_*,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<UParticleModule_*_const_&>(local_60,&local_res8);
            }
LAB_148117de9:
            uVar7 = uVar7 + 1;
            lVar8 = lVar8 + 8;
          } while ((int)uVar7 < *(int *)(lVar1 + 0x40));
        }
      }
      uVar9 = uVar9 + 1;
      local_res10 = local_res10 + 8;
    } while ((int)uVar9 < (this->LODLevels).ArrayNum);
  }
  if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 148118ab0

UClass * __cdecl UParticleEmitter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleEmitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleEmitter",
               &Z_Registration_Info_UClass_UParticleEmitter.InnerSingleton,
               StaticRegisterNativesUParticleEmitter,0x1d0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleEmitter>,
               InternalVTableHelperCtorCaller<UParticleEmitter>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleEmitter.InnerSingleton;
}

// GetQualityLevelSpawnRateMult @ 148118b60

float __thiscall UParticleEmitter::GetQualityLevelSpawnRateMult(UParticleEmitter *this)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = IsInParallelGameThread();
    if (!bVar3) {
      bVar3 = false;
      goto LAB_148118b8a;
    }
  }
  bVar3 = true;
LAB_148118b8a:
  iVar4 = Scalability::GetEffectsQualityDirect(bVar3);
  pTVar2 = CVarQLSpawnRateReferenceLevel.Ref;
  bVar3 = IsInActualRenderingThread();
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007977>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6e9,"!IsInActualRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  fVar5 = powf(this->QualityLevelSpawnRateScale,(float)((int)pTVar2->ShadowedValue[0] - iVar4));
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  return fVar5;
}

// HasAnyEnabledLODs @ 14811d4b0

bool __thiscall UParticleEmitter::HasAnyEnabledLODs(UParticleEmitter *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->LODLevels).AllocatorInstance.Data;
  iVar2 = (this->LODLevels).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LODLevels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UParticleLODLevel>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((*(longlong *)pFVar3 != 0) && ((*(byte *)(*(longlong *)pFVar3 + 0x2c) & 1) != 0)) {
      return true;
    }
    pFVar3 = pFVar3 + 8;
  }
  return false;
}

// IsLODLevelValid @ 148123460

bool __thiscall UParticleEmitter::IsLODLevelValid(UParticleEmitter *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->LODLevels).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->LODLevels).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(int *)(*(longlong *)((this->LODLevels).AllocatorInstance.Data + lVar6) + 0x28) ==
          param_1) {
        return true;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->LODLevels).ArrayNum);
  }
  return false;
}

// IsPostLoadThreadSafe @ 1481235f0

bool __thiscall UParticleEmitter::IsPostLoadThreadSafe(UParticleEmitter *this)

{
  return false;
}

// IsSignificant @ 148123630

bool __thiscall
UParticleEmitter::IsSignificant(UParticleEmitter *this,EParticleSignificanceLevel param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  EParticleSignificanceLevel EVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  pUVar2 = (UObject *)this->_padding_;
  if (pUVar2 == (UObject *)0x0) {
    pFVar4 = GetTypeName<UParticleSystem>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar3 = Z_Construct_UClass_UParticleSystem_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    EVar5 = this->SignificanceLevel;
    if ((byte)pUVar2[6].field_0xb < this->SignificanceLevel) {
      EVar5 = pUVar2[6].field_0xb;
    }
    return param_1 <= EVar5;
  }
  pFVar4 = GetTypeName<UParticleSystem>(&local_28);
  pwVar6 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,pUVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

// PostLoad @ 1481263b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleEmitter::PostLoad(UParticleEmitter *this)

{
  void *_Dst;
  UParticleLODLevel *this_00;
  UObjectBaseUtility *this_01;
  UObject *this_02;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  FGuid local_38;
  FString local_28;
  
  UObject::PostLoad((UObject *)this);
  local_38 = FParticleSystemCustomVersion::GUID;
  iVar4 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_38);
  if (iVar4 < 2) {
    this->bUseLegacySpawningBehavior = '\x01';
  }
  else if (2 < iVar4) goto LAB_148126409;
  if ((this->DetailModeBitmask & 4) != 0) {
    this->DetailModeBitmask = this->DetailModeBitmask | 8;
  }
LAB_148126409:
  iVar4 = (this->LODLevels).ArrayNum;
  uVar9 = 0;
  if (0 < iVar4) {
    lVar11 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->LODLevels).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(UParticleLODLevel **)((this->LODLevels).AllocatorInstance.Data + lVar11);
      if (this_00 != (UParticleLODLevel *)0x0) {
        UObject::ConditionalPostLoad((UObject *)this_00);
        UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this_00);
        if ((this_00->SpawnModule).field0_0x0.DebugPtr == (UParticleModuleSpawn *)0x0) {
          this_01 = (UObjectBaseUtility *)this->_padding_;
          if (this_01 != (UObjectBaseUtility *)0x0) {
            pUVar7 = Z_Construct_UClass_UParticleSystem_NoRegister();
            iVar4 = (int)pUVar7->_padding_;
            if (((iVar4 <= *(int *)(*(longlong *)&this_01->field_0x10 + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)
                  (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
                 &pUVar7->_padding_)) && (2 < (byte)LogParticles._0_1_)) {
              UObjectBaseUtility::GetPathName(this_01,&local_28,(UObject *)0x0);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
              if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_28.Data.AllocatorInstance.Data);
              }
            }
          }
          UParticleLODLevel::ConvertToSpawnModule(this_00);
          if (((this_00->SpawnModule).field0_0x0.DebugPtr == (UParticleModuleSpawn *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("LODLevel->SpawnModule",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitter.cpp"
                                 ,0x107,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      iVar4 = (this->LODLevels).ArrayNum;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar9 < iVar4);
  }
  uVar9 = 0;
  if (0 < iVar4) {
    lVar11 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->LODLevels).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_02 = *(UObject **)((this->LODLevels).AllocatorInstance.Data + lVar11);
      if (this_02 != (UObject *)0x0) {
        UObject::ConditionalPostLoad(this_02);
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar9 < (this->LODLevels).ArrayNum);
  }
  this->ConvertedModules = '\x01';
  uVar9 = 0;
  if (0 < (this->LODLevels).ArrayNum) {
    lVar11 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->LODLevels).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->LODLevels).AllocatorInstance.Data + lVar11);
      if ((lVar1 != 0) && (iVar4 = *(int *)(lVar1 + 0x40) + -1, -1 < iVar4)) {
        lVar10 = (longlong)iVar4;
        lVar8 = lVar10 * 8;
        do {
          if ((*(int *)(lVar1 + 0x40) <= iVar4) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(longlong *)(*(longlong *)(lVar1 + 0x38) + lVar8) == 0) {
            if ((*(int *)(lVar1 + 0x40) <= iVar4) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            _Dst = (void *)(*(longlong *)(lVar1 + 0x38) + lVar10 * 8);
            iVar6 = (*(int *)(lVar1 + 0x40) - iVar4) + -1;
            if (iVar6 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
            }
            *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,(ForAnyElementType *)(lVar1 + 0x38),*(int *)(lVar1 + 0x40),
                       (int *)(lVar1 + 0x44));
            UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
          }
          lVar10 = lVar10 + -1;
          lVar8 = lVar8 + -8;
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar9 < (this->LODLevels).ArrayNum);
  }
  if (this->_padding_ != 0) {
    Z_Construct_UClass_UParticleSystem_NoRegister();
  }
  fVar12 = this->QualityLevelSpawnRateScale;
  if (__real_3f800000 <= this->QualityLevelSpawnRateScale) {
    fVar12 = __real_3f800000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  this->QualityLevelSpawnRateScale = fVar12;
                    /* WARNING: Could not recover jumptable at 0x0001481267a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))(this);
  return;
}

// RemoveEmitterCurvesFromEditor @ 1481299c0

void __thiscall
UParticleEmitter::RemoveEmitterCurvesFromEditor(UParticleEmitter *this,UInterpCurveEdSetup *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar8 = 0;
  if (0 < (this->LODLevels).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->LODLevels).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->LODLevels).AllocatorInstance.Data + lVar7);
      if ((*(UParticleModule **)(lVar1 + 0x48) != (UParticleModule *)0x0) &&
         (bVar3 = UParticleModule::IsDisplayedInCurveEd(*(UParticleModule **)(lVar1 + 0x48),param_1)
         , bVar3)) {
        UParticleModule::RemoveModuleCurvesFromEditor(*(UParticleModule **)(lVar1 + 0x48),param_1);
      }
      if ((*(UParticleModule **)(lVar1 + 0x50) != (UParticleModule *)0x0) &&
         (bVar3 = UParticleModule::IsDisplayedInCurveEd(*(UParticleModule **)(lVar1 + 0x50),param_1)
         , bVar3)) {
        UParticleModule::RemoveModuleCurvesFromEditor(*(UParticleModule **)(lVar1 + 0x50),param_1);
      }
      uVar5 = 0;
      if (0 < *(int *)(lVar1 + 0x40)) {
        lVar6 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar5 < *(int *)(lVar1 + 0x40)) {
            uVar4 = ~uVar5 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          bVar3 = UParticleModule::IsDisplayedInCurveEd
                            (*(UParticleModule **)(*(longlong *)(lVar1 + 0x38) + lVar6),param_1);
          if (bVar3) {
            uVar4 = 0;
            if ((int)uVar5 < *(int *)(lVar1 + 0x40)) {
              uVar4 = ~uVar5 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            UParticleModule::RemoveModuleCurvesFromEditor
                      (*(UParticleModule **)(*(longlong *)(lVar1 + 0x38) + lVar6),param_1);
          }
          uVar5 = uVar5 + 1;
          lVar6 = lVar6 + 8;
        } while ((int)uVar5 < *(int *)(lVar1 + 0x40));
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar8 < (this->LODLevels).ArrayNum);
  }
  return;
}

// Serialize @ 14812ed20

void __thiscall UParticleEmitter::Serialize(UParticleEmitter *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014812ed40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FParticleSystemCustomVersion::GUID);
  return;
}

// Serialize @ 14812ed50

void __thiscall UParticleEmitter::Serialize(UParticleEmitter *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FParticleSystemCustomVersion::GUID);
  return;
}

// SetEmitterName @ 14812fe10

void __thiscall UParticleEmitter::SetEmitterName(UParticleEmitter *this,FName param_1)

{
  this->EmitterName = param_1;
  return;
}

// SetLODCount @ 148130700

void __thiscall UParticleEmitter::SetLODCount(UParticleEmitter *this,int param_1)

{
  return;
}

// SetToSensibleDefaults @ 148131160

void __thiscall UParticleEmitter::SetToSensibleDefaults(UParticleEmitter *this)

{
  return;
}

// StaticRegisterNativesUParticleEmitter @ 148137d90

void __cdecl UParticleEmitter::StaticRegisterNativesUParticleEmitter(void)

{
  return;
}

// UpdateModuleLists @ 148140da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UParticleEmitter::UpdateModuleLists(UParticleEmitter *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_4c8 [32];
  longlong local_4a8;
  longlong local_4a0;
  FParticleEmitterBuildInfo local_498;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_4c8;
  uVar7 = 0;
  if (0 < (this->LODLevels).ArrayNum) {
    lVar8 = 0;
    do {
      iVar1 = (this->LODLevels).ArrayNum;
      uVar6 = 0;
      if ((int)uVar7 < iVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_4a8 = (longlong)(int)uVar7;
        local_4a0 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar2 = *(longlong **)((this->LODLevels).AllocatorInstance.Data + lVar8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2b0))();
      }
      iVar1 = (this->LODLevels).ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar1);
    if (0 < iVar1) {
      lVar8 = *(longlong *)(this->LODLevels).AllocatorInstance.Data;
      if (lVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("HighLODLevel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitter.cpp"
                           ,0x3a7,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(longlong **)(lVar8 + 0x48) != (longlong *)0x0) {
        cVar5 = (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x3a0))();
        if (cVar5 != '\0') {
          FParticleEmitterBuildInfo::FParticleEmitterBuildInfo(&local_498);
          (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x398))
                    (*(longlong **)(lVar8 + 0x48),&local_498);
          FParticleEmitterBuildInfo::~FParticleEmitterBuildInfo(&local_498);
        }
        (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x3c0))(*(longlong **)(lVar8 + 0x48),this);
      }
      CacheEmitterModuleInfo(this);
    }
  }
  return;
}

// GetStatIDRT @ 14817e5a0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UParticleEmitter::GetStatIDRT(UParticleEmitter *this,bool param_1)

{
  TAtomic<FMinimalName> TVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_EmittersRTStatGroupTester> FVar3;
  undefined7 in_register_00000011;
  TStatIdData *pTVar4;
  char in_R8B;
  FName local_res20;
  
  pTVar4 = (TStatIdData *)CONCAT71(in_register_00000011,param_1);
  if (in_R8B == '\0') {
    FVar3 = StatPtr_STAT_EmittersRTStatGroupTester;
    if (StatPtr_STAT_EmittersRTStatGroupTester ==
        (FThreadSafeStaticStat<FStat_STAT_EmittersRTStatGroupTester>)0x0) {
      pFVar2 = ::FName::FName(&local_res20,"STAT_EmittersRTStatGroupTester");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_EmittersRTStatGroupTester>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EmittersRTStatGroupTester,
                         *pFVar2,L"STAT_EmittersRTStatGroupTester","STATGROUP_EmittersRT",
                         "STATCAT_Advanced",L"Emitters",true,true,ST_int64,false,false,MCR_Invalid);
    }
    if ((((int)*(undefined8 *)FVar3 == 0) && ((int)((ulonglong)*(undefined8 *)FVar3 >> 0x20) == 0))
       || (FThreadStats::bPrimaryEnable == false)) {
      pTVar4->Name = (TAtomic<FMinimalName>)&TStatId::TStatId_NAME_None;
      return (TStatId)pTVar4;
    }
  }
  TVar1 = ((this->StatIDRT).StatIdPtr)->Name;
  if ((TVar1._0_4_ == 0) && (TVar1._4_4_ == 0)) {
    CreateStatID(this);
  }
  pTVar4->Name = (TAtomic<FMinimalName>)(this->StatIDRT).StatIdPtr;
  return (TStatId)pTVar4;
}

