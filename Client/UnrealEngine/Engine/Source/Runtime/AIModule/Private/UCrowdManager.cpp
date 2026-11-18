// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 58

// StaticClass @ 146f838e0

UClass * __cdecl UCrowdManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCrowdManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"CrowdManager",
               &Z_Registration_Info_UClass_UCrowdManager.InnerSingleton,
               StaticRegisterNativesUCrowdManager,0xf0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"Engine",InternalConstructor<UCrowdManager>,
               InternalVTableHelperCtorCaller<UCrowdManager>,local_res8,
               UCrowdManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCrowdManager.InnerSingleton;
}

// UCrowdManager @ 146f95310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UCrowdManager * __thiscall UCrowdManager::UCrowdManager(UCrowdManager *this,FVTableHelper *param_1)

{
  UCrowdManagerBase::UCrowdManagerBase((UCrowdManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UCrowdManager__6B_;
  (this->MyNavData).field0_0x0.DebugPtr = (ANavigationData *)0x0;
  (this->AvoidanceConfig).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvoidanceConfig).ArrayNum = 0;
  (this->AvoidanceConfig).ArrayMax = 0;
  (this->SamplingPatterns).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SamplingPatterns).ArrayNum = 0;
  (this->SamplingPatterns).ArrayMax = 0;
  *(undefined8 *)&this->ActiveAgents = 0;
  *(undefined8 *)&(this->ActiveAgents).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveAgents).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveAgents).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveAgents).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveAgents).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveAgents).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveAgents).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveAgents).field_0x48 = 0;
  (this->AgentFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AgentFlags).ArrayNum = 0;
  (this->AgentFlags).ArrayMax = 0;
  return this;
}

// UCrowdManager @ 146f953a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UCrowdManager * __thiscall
UCrowdManager::UCrowdManager(UCrowdManager *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  dtObstacleAvoidanceDebugData *this_00;
  dtCrowdAgentDebugInfo *pdVar7;
  dtCrowdAgentDebugInfo *pdVar8;
  UCrowdManager *pUVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  UCrowdManagerBase::UCrowdManagerBase((UCrowdManagerBase *)this,param_1);
  pdVar8 = (dtCrowdAgentDebugInfo *)0x0;
  this->_padding_ = (longlong)&___7UCrowdManager__6B_;
  (this->AvoidanceConfig).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvoidanceConfig).ArrayNum = 0;
  (this->AvoidanceConfig).ArrayMax = 0;
  (this->SamplingPatterns).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SamplingPatterns).ArrayNum = 0;
  (this->SamplingPatterns).ArrayMax = 0;
  *(undefined8 *)&this->ActiveAgents = 0;
  *(undefined8 *)&(this->ActiveAgents).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveAgents).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveAgents).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveAgents).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveAgents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveAgents).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveAgents).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveAgents).field_0x48 = 0;
  (this->AgentFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AgentFlags).ArrayNum = 0;
  (this->AgentFlags).ArrayMax = 0;
  (this->MyNavData).field0_0x0.DebugPtr = (ANavigationData *)0x0;
  this->DetourCrowd = (dtCrowd *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = dtAllocObstacleAvoidanceDebugData();
    this->DetourAvoidanceDebug = this_00;
    dtObstacleAvoidanceDebugData::init(this_00,0x800);
    pdVar7 = ::operator_new(0x90);
    if (pdVar7 != (dtCrowdAgentDebugInfo *)0x0) {
      *(undefined8 *)pdVar7 = 0;
      pdVar7->optStart[0] = 0.0;
      pdVar7->optStart[1] = 0.0;
      pdVar7->optStart[2] = 0.0;
      pdVar7->optEnd[0] = 0.0;
      pdVar7->optEnd[1] = 0.0;
      pdVar7->optEnd[2] = 0.0;
      pdVar7->vod = (dtObstacleAvoidanceDebugData *)0x0;
      *(undefined8 *)&pdVar7->agentLog = 0;
      *(undefined8 *)&(pdVar7->agentLog).field_0x8 = 0;
      *(undefined8 *)&(pdVar7->agentLog).field_0x10 = 0;
      *(undefined8 *)&(pdVar7->agentLog).field_0x18 = 0;
      *(undefined8 *)&(pdVar7->agentLog).field_0x20 = 0;
      *(undefined8 *)&(pdVar7->agentLog).field_0x28 = 0;
      *(undefined8 *)&(pdVar7->agentLog).field_0x30 = 0;
      *(undefined8 *)&(pdVar7->agentLog).field_0x38 = 0;
      *(undefined8 *)&(pdVar7->agentLog).field_0x40 = 0;
      *(undefined8 *)&(pdVar7->agentLog).field_0x48 = 0;
      *(undefined4 *)&(pdVar7->agentLog).field_0x2c = 0x80;
      *(undefined4 *)&(pdVar7->agentLog).field_0x30 = 0xffffffff;
      pdVar8 = pdVar7;
    }
    this->DetourAgentDebug = pdVar8;
    *(undefined8 *)pdVar8 = 0;
    pdVar8->optStart[0] = 0.0;
    pdVar8->optStart[1] = 0.0;
    pdVar8->optStart[2] = 0.0;
    pdVar8->optEnd[0] = 0.0;
    pdVar8->optEnd[1] = 0.0;
    pdVar8->optEnd[2] = 0.0;
    pdVar8->vod = (dtObstacleAvoidanceDebugData *)0x0;
    *(undefined8 *)&pdVar8->agentLog = 0;
    *(undefined8 *)&(pdVar8->agentLog).field_0x8 = 0;
    *(undefined8 *)&(pdVar8->agentLog).field_0x10 = 0;
    *(undefined8 *)&(pdVar8->agentLog).field_0x18 = 0;
    *(undefined8 *)&(pdVar8->agentLog).field_0x20 = 0;
    *(undefined8 *)&(pdVar8->agentLog).field_0x28 = 0;
    *(undefined8 *)&(pdVar8->agentLog).field_0x30 = 0;
    *(undefined8 *)&(pdVar8->agentLog).field_0x38 = 0;
    *(undefined8 *)&(pdVar8->agentLog).field_0x40 = 0;
    *(undefined8 *)&(pdVar8->agentLog).field_0x48 = 0;
    this->DetourAgentDebug->idx = -1;
    this->DetourAgentDebug->vod = this->DetourAvoidanceDebug;
  }
  else {
    this->DetourAgentDebug = (dtCrowdAgentDebugInfo *)0x0;
    this->DetourAvoidanceDebug = (dtObstacleAvoidanceDebugData *)0x0;
  }
  uVar12 = _UNK_151512f88;
  uVar11 = ___xmm_402000003f4000003f40000040000000;
  this->MaxAgents = 0x32;
  puVar2 = &this->field_0x70;
  this->bPruneStartedOffmeshConnections = 0;
  this->bResolveCollisions = 0;
  this->bAllowPathReplan = 1;
  this->bEarlyReachTestOptimization = 0;
  this->bSingleAreaVisibilityOptimization = 1;
  this->MaxAgentRadius = 100.0;
  this->MaxAvoidedAgents = 6;
  this->MaxAvoidedWalls = 8;
  this->NavmeshCheckInterval = 1.0;
  this->PathOptimizationInterval = 0.5;
  this->SeparationDirClamp = -1.0;
  this->PathOffsetRadiusMultiplier = 1.0;
  pFVar3 = (this->AvoidanceConfig).AllocatorInstance.Data;
  uStack_74 = 0x40200000;
  local_70 = 0x10205ff;
  local_88 = 0x3f000000;
  uStack_84 = (undefined4)uVar11;
  uStack_80 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uStack_7c = (undefined4)uVar12;
  uStack_78 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
      ((FScriptContainerElement *)&local_88 <
       pFVar3 + (longlong)(this->AvoidanceConfig).ArrayMax * 0x1c)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), uVar11 = ___xmm_402000003f4000003f40000040000000, uVar12 = _UNK_151512f88
     , bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar9 = (UCrowdManager *)(*pcVar4)();
    return pUVar9;
  }
  iVar6 = (this->AvoidanceConfig).ArrayNum;
  if (iVar6 == (this->AvoidanceConfig).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&(this->AvoidanceConfig).AllocatorInstance,
                       &(this->AvoidanceConfig).ArrayMax);
    uVar11 = ___xmm_402000003f4000003f40000040000000;
    uVar12 = _UNK_151512f88;
  }
  lVar10 = (longlong)iVar6 * 0x1c;
  (this->AvoidanceConfig).ArrayNum = iVar6 + 1;
  pFVar3 = (this->AvoidanceConfig).AllocatorInstance.Data;
  *(ulonglong *)(pFVar3 + lVar10) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(pFVar3 + lVar10 + 8) = CONCAT44(uStack_7c,uStack_80);
  *(ulonglong *)(pFVar3 + lVar10 + 0x10) = CONCAT44(uStack_74,uStack_78);
  *(undefined4 *)(pFVar3 + lVar10 + 0x18) = local_70;
  pFVar3 = (this->AvoidanceConfig).AllocatorInstance.Data;
  uStack_54 = 0x40200000;
  local_50 = 0x20205ff;
  local_68 = 0x3f000000;
  uStack_64 = (undefined4)uVar11;
  uStack_60 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uStack_5c = (undefined4)uVar12;
  uStack_58 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar3 + (longlong)(this->AvoidanceConfig).ArrayMax * 0x1c)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), uVar11 = ___xmm_402000003f4000003f40000040000000, uVar12 = _UNK_151512f88
     , bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar9 = (UCrowdManager *)(*pcVar4)();
    return pUVar9;
  }
  iVar6 = (this->AvoidanceConfig).ArrayNum;
  if (iVar6 == (this->AvoidanceConfig).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&(this->AvoidanceConfig).AllocatorInstance,
                       &(this->AvoidanceConfig).ArrayMax);
    uVar11 = ___xmm_402000003f4000003f40000040000000;
    uVar12 = _UNK_151512f88;
  }
  lVar10 = (longlong)iVar6 * 0x1c;
  (this->AvoidanceConfig).ArrayNum = iVar6 + 1;
  pFVar3 = (this->AvoidanceConfig).AllocatorInstance.Data;
  *(ulonglong *)(pFVar3 + lVar10) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(pFVar3 + lVar10 + 8) = CONCAT44(uStack_5c,uStack_60);
  *(ulonglong *)(pFVar3 + lVar10 + 0x10) = CONCAT44(uStack_54,uStack_58);
  *(undefined4 *)(pFVar3 + lVar10 + 0x18) = local_50;
  pFVar3 = (this->AvoidanceConfig).AllocatorInstance.Data;
  uStack_34 = 0x40200000;
  local_30 = 0x30207ff;
  local_48 = 0x3f000000;
  uStack_44 = (undefined4)uVar11;
  uStack_40 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uStack_3c = (undefined4)uVar12;
  uStack_38 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar3 + (longlong)(this->AvoidanceConfig).ArrayMax * 0x1c)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), uVar11 = ___xmm_402000003f4000003f40000040000000, uVar12 = _UNK_151512f88
     , bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar9 = (UCrowdManager *)(*pcVar4)();
    return pUVar9;
  }
  iVar6 = (this->AvoidanceConfig).ArrayNum;
  if (iVar6 == (this->AvoidanceConfig).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&(this->AvoidanceConfig).AllocatorInstance,
                       &(this->AvoidanceConfig).ArrayMax);
    uVar11 = ___xmm_402000003f4000003f40000040000000;
    uVar12 = _UNK_151512f88;
  }
  lVar10 = (longlong)iVar6 * 0x1c;
  (this->AvoidanceConfig).ArrayNum = iVar6 + 1;
  pFVar3 = (this->AvoidanceConfig).AllocatorInstance.Data;
  *(ulonglong *)(pFVar3 + lVar10) = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(pFVar3 + lVar10 + 8) = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(pFVar3 + lVar10 + 0x10) = CONCAT44(uStack_34,uStack_38);
  *(undefined4 *)(pFVar3 + lVar10 + 0x18) = local_30;
  pFVar3 = (this->AvoidanceConfig).AllocatorInstance.Data;
  uStack_14 = 0x40200000;
  local_10 = 0x30307ff;
  local_28 = 0x3f000000;
  uStack_24 = (undefined4)uVar11;
  uStack_20 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uStack_1c = (undefined4)uVar12;
  uStack_18 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (((pFVar3 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar3 + (longlong)(this->AvoidanceConfig).ArrayMax * 0x1c)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar9 = (UCrowdManager *)(*pcVar4)();
    return pUVar9;
  }
  iVar6 = (this->AvoidanceConfig).ArrayNum;
  if (iVar6 == (this->AvoidanceConfig).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&(this->AvoidanceConfig).AllocatorInstance,
                       &(this->AvoidanceConfig).ArrayMax);
  }
  lVar10 = (longlong)iVar6 * 0x1c;
  (this->AvoidanceConfig).ArrayNum = iVar6 + 1;
  pFVar3 = (this->AvoidanceConfig).AllocatorInstance.Data;
  *(ulonglong *)(pFVar3 + lVar10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar3 + lVar10 + 8) = CONCAT44(uStack_1c,uStack_20);
  *(ulonglong *)(pFVar3 + lVar10 + 0x10) = CONCAT44(uStack_14,uStack_18);
  *(undefined4 *)(pFVar3 + lVar10 + 0x18) = local_10;
  return this;
}

// ~UCrowdManager @ 146f96e50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::~UCrowdManager(UCrowdManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UCrowdManager__6B_;
  pFVar1 = (this->AgentFlags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ActiveAgents).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ActiveAgents).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveAgents);
  DestructItems<FCrowdAvoidanceSamplingPattern,int>
            ((FCrowdAvoidanceSamplingPattern *)(this->SamplingPatterns).AllocatorInstance.Data,
             (this->SamplingPatterns).ArrayNum);
  pFVar1 = (this->SamplingPatterns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AvoidanceConfig).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCrowdManagerBase::~UCrowdManagerBase((UCrowdManagerBase *)this);
  return;
}

// AddAgent @ 146f99b00

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
UCrowdManager::AddAgent(UCrowdManager *this,ICrowdAgentInterface *param_1,FCrowdAgentData *param_2)

{
  int *piVar1;
  FName FVar2;
  double dVar3;
  TObjectPtr<ANavigationData> TVar4;
  longlong lVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime> FVar15;
  dtQueryFilter *pdVar16;
  UClass *pUVar17;
  dtQueryFilter *pdVar18;
  TVector<double> *pTVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar20;
  dtQueryFilter *pdVar21;
  dtQueryFilter *pdVar22;
  dtQuerySpecialLinkFilter *pdVar23;
  FSharedReferencer<1> FVar24;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FName local_res20;
  FName local_158;
  TSharedPtr<dtQuerySpecialLinkFilter,1> local_148;
  TRawPtrProxy<FRecastSpeciaLinkFilter> local_138;
  FStatMessage local_130;
  FName local_120;
  dtCrowdAgentParams local_118;
  TVector<double> local_a8;
  dtQuerySpecialLinkFilter *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  undefined1 local_78 [56];
  
  pdVar21 = (dtQueryFilter *)0x0;
  uVar20 = 0;
  FVar15 = StatPtr_STAT_AI_Crowd_AgentUpdateTime;
  local_res8 = (LARGE_INTEGER)this;
  if (StatPtr_STAT_AI_Crowd_AgentUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)0x0) {
    pFVar14 = ::FName::FName(&local_120,"STAT_AI_Crowd_AgentUpdateTime");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_AgentUpdateTime,*pFVar14
                        ,L"Agent Update Time","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  FVar2 = *(FName *)FVar15;
  if ((FVar2.ComparisonIndex.Value.Value != 0) || (FVar2.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar2.ComparisonIndex.Value.Value;
        local_res18.Number = FVar2.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
                   ,0x2b5);
        bVar9 = true;
        bVar8 = true;
      }
    }
    bVar10 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar10 = true;
      local_158 = FVar2;
    }
  }
  local_118.linkFilter.Object = (dtQuerySpecialLinkFilter *)0x0;
  local_118.linkFilter.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  GetAgentParams(this,param_1,&local_118);
  pdVar23 = (dtQuerySpecialLinkFilter *)0x0;
  FVar24.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_148.Object = (dtQuerySpecialLinkFilter *)0x0;
  local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(uint *)&param_2->field_0x20 =
       *(uint *)&param_2->field_0x20 ^
       ((uint)local_118._100_4_ >> 2 ^ *(uint *)&param_2->field_0x20) & 2;
  pdVar22 = pdVar21;
  if ((param_1 == (ICrowdAgentInterface *)0x0) ||
     (pdVar16 = (dtQueryFilter *)(**(code **)((longlong)*param_1 + 8))(param_1),
     pdVar16 == (dtQueryFilter *)0x0)) goto LAB_146f99d93;
  pUVar17 = UCrowdFollowingComponent::StaticClass();
  dVar3 = (pdVar16->data).m_areaCost[1];
  iVar13 = (int)pUVar17->_padding_;
  if ((*(int *)((longlong)dVar3 + 0x38) < iVar13) ||
     ((longlong *)*(undefined1 **)(*(longlong *)((longlong)dVar3 + 0x30) + (longlong)iVar13 * 8) !=
      &pUVar17->_padding_)) goto LAB_146f99d93;
  pdVar22 = (dtQueryFilter *)this->_padding_;
  if (pdVar22 == (dtQueryFilter *)0x0) {
LAB_146f99cfa:
    pdVar22 = pdVar21;
  }
  else {
    pUVar17 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    dVar3 = (pdVar22->data).m_areaCost[1];
    iVar13 = (int)pUVar17->_padding_;
    if ((*(int *)((longlong)dVar3 + 0x38) < iVar13) ||
       ((longlong *)*(undefined1 **)(*(longlong *)((longlong)dVar3 + 0x30) + (longlong)iVar13 * 8)
        != &pUVar17->_padding_)) goto LAB_146f99cfa;
  }
  pdVar18 = ::operator_new(0x20);
  local_138.Object = (FRecastSpeciaLinkFilter *)pdVar21;
  if (pdVar18 != (dtQueryFilter *)0x0) {
    FVar2 = *(FName *)((pdVar16->data).m_areaCost + 3);
    pdVar18->_padding_ = (longlong)&___7FRecastSpeciaLinkFilter__6B_;
    (pdVar18->data).m_areaCost[0] = (double)pdVar22;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar2);
    }
    (pdVar18->data).m_areaCost[1] = 0.0;
    local_res20 = FVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar2);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)((pdVar18->data).m_areaCost + 1),(FObjectPtr)&local_res20);
    (pdVar18->data).m_areaCost[2] = 0.0;
    local_138.Object = (FRecastSpeciaLinkFilter *)pdVar18;
  }
  TSharedPtr<dtQuerySpecialLinkFilter,1>::operator=<FRecastSpeciaLinkFilter>(&local_148,&local_138);
  pdVar22 = pdVar16;
  this = (UCrowdManager *)local_res8;
  pdVar23 = local_148.Object;
  FVar24.ReferenceController = local_148.SharedReferenceCount.ReferenceController;
LAB_146f99d93:
  FVar11.ReferenceController = local_118.linkFilter.SharedReferenceCount.ReferenceController;
  if (FVar24.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar24.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar24.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = local_118.linkFilter.Object;
  pTStack_80 = local_118.linkFilter.SharedReferenceCount.ReferenceController;
  local_118.linkFilter.Object = pdVar23;
  local_118.linkFilter.SharedReferenceCount.ReferenceController = FVar24.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  pTVar19 = (TVector<double> *)(**(code **)((longlong)*param_1 + 0x10))(param_1,local_78);
  Unreal2RecastPoint(&local_a8,pTVar19);
  TVar4.field0_0x0 =
       (TObjectPtr<ANavigationData>_u_0)
       ((TObjectPtr<ANavigationData>_u_0 *)((longlong)this + 0x28))->DebugPtr;
  if ((*(longlong *)((longlong)TVar4.field0_0x0 + 0x418) == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar5 = *(longlong *)(*(longlong *)((longlong)TVar4.field0_0x0 + 0x418) + 0x10);
  pdVar16 = (dtQueryFilter *)(lVar5 + 8);
  if (lVar5 == 0) {
    pdVar16 = pdVar21;
  }
  iVar13 = dtCrowd::addAgent(*(dtCrowd **)((longlong)this + 0xd8),(double *)&local_a8,&local_118,
                             pdVar16);
  param_2->AgentIndex = iVar13;
  if ((0.0 < local_118.collisionQueryRange) &&
     ((pdVar22 == (dtQueryFilter *)0x0 ||
      (*(char *)((longlong)(pdVar22->data).m_areaFixedCost + 0x154) == '\0')))) {
    uVar20 = 1;
  }
  param_2->bIsSimulated = uVar20;
  if (FVar24.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar24.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar24.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (param_2->LinkFilter).SharedReferenceCount.ReferenceController;
  (param_2->LinkFilter).Object = pdVar23;
  (param_2->LinkFilter).SharedReferenceCount.ReferenceController = FVar24.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar24.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.linkFilter.SharedReferenceCount.ReferenceController);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (local_158 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
     && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_130.NameAndInfo.Index = local_158.ComparisonIndex.Value;
      local_130.NameAndInfo.Number = local_158.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_130.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_130);
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

// AdjustAgentPathStart @ 146f9b230

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
UCrowdManager::AdjustAgentPathStart
          (UCrowdManager *this,UCrowdFollowingComponent *param_1,FNavMeshPath *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  FCrowdAgentData *pFVar3;
  dtCrowdAgent *pdVar4;
  int iVar5;
  int iVar6;
  ICrowdAgentInterface *pIVar7;
  uint uVar8;
  ulonglong uVar9;
  ICrowdAgentInterface *pIVar10;
  longlong lVar11;
  ICrowdAgentInterface *pIVar12;
  uint uVar13;
  
  pIVar12 = (ICrowdAgentInterface *)0x0;
  pIVar7 = (ICrowdAgentInterface *)&param_1->_padding_;
  if (param_1 == (UCrowdFollowingComponent *)0x0) {
    pIVar7 = pIVar12;
  }
  pFVar3 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
           ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                   *)&this->ActiveAgents,pIVar7);
  if (((((pFVar3 != (FCrowdAgentData *)0x0) && (pFVar3->bIsSimulated != 0)) &&
       (-1 < pFVar3->AgentIndex)) &&
      ((this->DetourCrowd != (dtCrowd *)0x0 && (param_2 != (FNavMeshPath *)0x0)))) &&
     (*param_3 < (param_2->PathCorridor).ArrayNum)) {
    pdVar4 = dtCrowd::getAgent(this->DetourCrowd,pFVar3->AgentIndex);
    iVar6 = (pdVar4->corridor).m_npath;
    if (0 < iVar6) {
      iVar5 = (param_2->PathCorridor).ArrayNum;
      pIVar7 = pIVar12;
      do {
        pIVar10 = pIVar12;
        if (iVar6 != 0) {
          pIVar10 = (ICrowdAgentInterface *)*(pdVar4->corridor).m_path;
        }
        uVar9 = (ulonglong)*param_3;
        if (*param_3 < iVar5) {
          lVar11 = uVar9 * 8;
          do {
            uVar8 = (uint)uVar9;
            uVar13 = 0;
            if ((int)uVar8 < (param_2->PathCorridor).ArrayNum) {
              uVar13 = ~uVar8 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (*(ICrowdAgentInterface **)((param_2->PathCorridor).AllocatorInstance.Data + lVar11)
                == pIVar10) {
              *param_3 = uVar8;
              return;
            }
            iVar5 = (param_2->PathCorridor).ArrayNum;
            uVar9 = (ulonglong)(uVar8 + 1);
            lVar11 = lVar11 + 8;
          } while ((int)(uVar8 + 1) < iVar5);
        }
        iVar6 = (pdVar4->corridor).m_npath;
        uVar13 = (int)pIVar7 + 1;
        pIVar7 = (ICrowdAgentInterface *)(ulonglong)uVar13;
      } while ((int)uVar13 < iVar6);
    }
  }
  return;
}

// ApplyVelocity @ 146f9bb60

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
UCrowdManager::ApplyVelocity(UCrowdManager *this,UCrowdFollowingComponent *param_1,int param_2)

{
  dtCrowdAgentAnimation *pdVar1;
  dtCrowdAgent *pdVar2;
  longlong lVar3;
  double *pdVar4;
  undefined1 uVar5;
  TVector<double> local_58;
  TVector<double> local_40;
  TVector<double> local_28;
  
  pdVar2 = dtCrowd::getAgent(this->DetourCrowd,param_2);
  pdVar1 = this->DetourCrowd->m_agentAnims;
  Recast2UnrealPoint(&local_40,pdVar2->nvel);
  if (pdVar1[param_2].active == '\0') {
    lVar3 = 0x488;
    if (pdVar2->ncorners == 0) {
      lVar3 = 0x3a8;
    }
    pdVar4 = (double *)((longlong)(pdVar2->corridor).m_pos + lVar3);
  }
  else {
    pdVar4 = pdVar1[param_2].endPos;
  }
  if ((pdVar2->ncorners == 1) && ((pdVar2->cornerFlags[0] & 4) == 0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  Recast2UnrealPoint(&local_58,pdVar4);
  (**(code **)(param_1->_padding_ + 0x650))
            (param_1,&local_40,&local_58,pdVar1[param_2].active != '\0',uVar5);
  if (this->bResolveCollisions != 0) {
    Recast2UnrealPoint(&local_28,pdVar2->npos);
    (**(code **)(param_1->_padding_ + 0x658))(param_1,&local_28);
  }
  return;
}

// BeginDestroy @ 146f9bce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::BeginDestroy(UCrowdManager *this)

{
  undefined1 *puVar1;
  int iVar2;
  dtCrowdAgentDebugInfo *pdVar3;
  void *pvVar4;
  bool bVar5;
  
  bVar5 = 1 < *(int *)&(this->ActiveAgents).field_0x48;
  if (!bVar5) {
    TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
                      *)&this->ActiveAgents);
  }
  TSparseArray<TSparseSetElement<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->ActiveAgents,0,*(int *)&(this->ActiveAgents).field_0x8);
  puVar1 = &(this->ActiveAgents).field_0xc;
  *(undefined4 *)&(this->ActiveAgents).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)&this->ActiveAgents,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ActiveAgents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveAgents).field_0x34 = 0;
  iVar2 = *(int *)&(this->ActiveAgents).field_0x2c;
  *(undefined4 *)&(this->ActiveAgents).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ActiveAgents).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ActiveAgents).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->ActiveAgents).field_0x48 = 1;
    TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
              *)&this->ActiveAgents);
  }
  dtFreeObstacleAvoidanceDebugData(this->DetourAvoidanceDebug);
  pdVar3 = this->DetourAgentDebug;
  if (pdVar3 != (dtCrowdAgentDebugInfo *)0x0) {
    *(undefined4 *)&(pdVar3->agentLog).field_0x48 = 0;
    pvVar4 = *(void **)&(pdVar3->agentLog).field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pdVar3->agentLog);
    ::operator_delete(pdVar3,0x90);
  }
  dtFreeCrowd(this->DetourCrowd);
  this->DetourCrowd = (dtCrowd *)0x0;
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CleanUp @ 146f9c3a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::CleanUp(UCrowdManager *this,float param_1)

{
  return;
}

// ClearAgentMoveTarget @ 146f9c470

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
UCrowdManager::ClearAgentMoveTarget(UCrowdManager *this,UCrowdFollowingComponent *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime> FVar6;
  FCrowdAgentData *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  ICrowdAgentInterface *pIVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FVar12.Value = 0;
  FVar6 = StatPtr_STAT_AI_Crowd_AgentUpdateTime;
  if (StatPtr_STAT_AI_Crowd_AgentUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_AI_Crowd_AgentUpdateTime");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_AgentUpdateTime,*pFVar5,
                       L"Agent Update Time","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar8 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
                   ,0x20a);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_146f9c5dd;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_146f9c5dd:
  pIVar9 = (ICrowdAgentInterface *)&param_1->_padding_;
  if (param_1 == (UCrowdFollowingComponent *)0x0) {
    pIVar9 = (ICrowdAgentInterface *)0x0;
  }
  pFVar7 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
           ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                   *)&this->ActiveAgents,pIVar9);
  if ((((pFVar7 != (FCrowdAgentData *)0x0) && (pFVar7->bIsSimulated != 0)) &&
      (-1 < pFVar7->AgentIndex)) && (this->DetourCrowd != (dtCrowd *)0x0)) {
    dtCrowd::resetMoveTarget(this->DetourCrowd,pFVar7->AgentIndex);
    dtCrowd::resetAgentVelocity(this->DetourCrowd,pFVar7->AgentIndex);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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

// CreateCrowdManager @ 146fa12b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::CreateCrowdManager(UCrowdManager *this)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  dtNavMesh *pdVar8;
  dtCrowd *pdVar9;
  ARecastNavMesh *this_00;
  ulonglong uVar10;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_a0 [16];
  uint uStack_90;
  uint uStack_8c;
  longlong local_88;
  TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
  *pTStack_80;
  TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
  *local_78;
  undefined2 local_70;
  TArray<double,TSizedDefaultAllocator<32>_> local_68;
  TArray<double,TSizedDefaultAllocator<32>_> local_58;
  undefined1 local_48 [32];
  longlong local_28;
  TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
  *pTStack_20;
  
  if ((this->MyNavData).field0_0x0.DebugPtr == (ANavigationData *)0x0) {
    (**(code **)(this->_padding_ + 0x2d8))();
    if ((2 < (byte)LogCrowdFollowing._0_1_) &&
       ((this->MyNavData).field0_0x0.DebugPtr == (ANavigationData *)0x0)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCrowdFollowing);
      return;
    }
  }
  else {
    pUVar7 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->MyNavData,pUVar7);
    if (bVar4) {
      this_00 = (ARecastNavMesh *)(this->MyNavData).field0_0x0.DebugPtr;
    }
    else {
      this_00 = (ARecastNavMesh *)0x0;
    }
    pdVar8 = ARecastNavMesh::GetRecastMesh(this_00);
    if (pdVar8 != (dtNavMesh *)0x0) {
      pdVar9 = dtAllocCrowd();
      this->DetourCrowd = pdVar9;
    }
    if (this->DetourCrowd != (dtCrowd *)0x0) {
      dtCrowd::init(this->DetourCrowd,this->MaxAgents,(double)this->MaxAgentRadius,pdVar8);
      dtCrowd::setAgentCheckInterval(this->DetourCrowd,(double)this->NavmeshCheckInterval);
      dtCrowd::setSeparationFilter(this->DetourCrowd,(double)this->SeparationDirClamp);
      dtCrowd::setSingleAreaVisibilityOptimization
                (this->DetourCrowd,this->bSingleAreaVisibilityOptimization);
      dtCrowd::setPruneStartedOffmeshConnections
                (this->DetourCrowd,this->bPruneStartedOffmeshConnections);
      dtCrowd::setEarlyReachTestOptimization(this->DetourCrowd,this->bEarlyReachTestOptimization);
      dtCrowd::setPathOffsetRadiusMultiplier
                (this->DetourCrowd,(double)this->PathOffsetRadiusMultiplier);
      iVar15 = 1;
      iVar14 = 1;
      if (1 < (this->SamplingPatterns).ArrayNum) {
        iVar14 = (this->SamplingPatterns).ArrayNum;
      }
      dtCrowd::initAvoidance(this->DetourCrowd,this->MaxAvoidedAgents,this->MaxAvoidedWalls,iVar14);
      uVar12 = 0;
      if (0 < (this->SamplingPatterns).ArrayNum) {
        lVar13 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar12 < (this->SamplingPatterns).ArrayNum) {
            uVar5 = ~uVar12 >> 0x1f;
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
          pTVar11 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                    ((this->SamplingPatterns).AllocatorInstance.Data + lVar13);
          if ((0 < pTVar11->ArrayNum) && (pTVar11->ArrayNum == pTVar11[1].ArrayNum)) {
            UE::LWC::ConvertArrayType<double,float,TSizedDefaultAllocator<32>_>(&local_68,pTVar11);
            UE::LWC::ConvertArrayType<double,float,TSizedDefaultAllocator<32>_>
                      (&local_58,pTVar11 + 1);
            dtCrowd::setObstacleAvoidancePattern
                      (this->DetourCrowd,uVar12,(double *)local_68.AllocatorInstance.Data,
                       (double *)local_58.AllocatorInstance.Data,local_68.ArrayNum);
            if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.AllocatorInstance.Data);
            }
            if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.AllocatorInstance.Data);
            }
          }
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + 0x20;
        } while ((int)uVar12 < (this->SamplingPatterns).ArrayNum);
      }
      (**(code **)(this->_padding_ + 0x2e0))(this);
      piVar1 = &(this->AgentFlags).ArrayMax;
      piVar2 = &(this->AgentFlags).ArrayNum;
      *piVar2 = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->AgentFlags).AllocatorInstance,0,piVar1);
      }
      iVar14 = this->MaxAgents;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar14,&(this->AgentFlags).AllocatorInstance,piVar2,piVar1);
      memset((this->AgentFlags).AllocatorInstance.Data + iVar6,0,(longlong)iVar14);
      TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_48,
                 (TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
                  *)&this->ActiveAgents);
      auStack_a0._0_8_ = local_48._8_8_;
      stack0xffffffffffffff68 = local_48._16_16_;
      local_88 = local_28;
      pTStack_80 = pTStack_20;
      local_70 = 0;
      uVar10 = local_48._24_8_ >> 0x20;
      uVar12 = local_48._28_4_;
      local_78 = (TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
                  *)&this->ActiveAgents;
      if ((int)uVar12 < *(int *)(local_48._16_8_ + 0x18)) {
        do {
          AddAgent(this,*(ICrowdAgentInterface **)
                         ((longlong)(int)uVar12 * 0x38 + *(longlong *)local_48._0_8_),
                   (FCrowdAgentData *)
                   (*(longlong *)local_48._0_8_ + 8 + (longlong)(int)uVar10 * 0x38));
          uStack_90 = uStack_90 & ~auStack_a0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a0);
          uVar10 = (ulonglong)uStack_8c;
          uVar12 = uStack_8c;
        } while ((int)uStack_8c < *(int *)(auStack_a0._8_8_ + 0x18));
        if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
          uVar12 = *(int *)&(local_78->Elements).field_0x8 -
                   *(int *)&(local_78->Elements).field_0x34;
          if (3 < uVar12) {
            uVar10 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
            lVar13 = 0x3f;
            if (uVar10 != 0) {
              for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            iVar15 = 1 << ((byte)lVar13 & 0x1f);
          }
          if (((0 < (int)uVar12) && (local_78->HashSize < iVar15)) || (iVar15 < local_78->HashSize))
          {
            local_78->HashSize = iVar15;
            TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
            ::Rehash(local_78);
          }
        }
      }
    }
  }
  return;
}

// DestroyCrowdManager @ 146fa4ac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::DestroyCrowdManager(UCrowdManager *this)

{
  dtFreeCrowd(this->DetourCrowd);
  this->DetourCrowd = (dtCrowd *)0x0;
  return;
}

// DrawDebugCollisionSegments @ 146fa5740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::DrawDebugCollisionSegments(UCrowdManager *this,dtCrowdAgent *param_1)

{
  float fVar1;
  float fVar2;
  UWorld *pUVar3;
  TVector<double> *pTVar4;
  double *pdVar5;
  int iVar6;
  double *pdVar7;
  double dVar8;
  FColor_u_0 local_res8 [2];
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TVector<double>_u_0 local_68 [3];
  
  pUVar3 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  pTVar4 = Recast2UnrealPoint((TVector<double> *)&local_b0._s_0,(param_1->boundary).m_center);
  fVar1 = __real_bf800000;
  dVar8 = (param_1->params).collisionQueryRange;
  if (__real_47efffffe0000000 <= dVar8) {
    dVar8 = __real_47efffffe0000000;
  }
  local_98._s_0.Y = FCrowdDebug::Offset.field0_0x0._s_0.Y + (pTVar4->field0_0x0)._s_0.Y;
  local_98._s_0.Z = FCrowdDebug::Offset.field0_0x0._s_0.Z + (pTVar4->field0_0x0)._s_0.Z;
  local_98._s_0.X = FCrowdDebug::Offset.field0_0x0._s_0.X + (pTVar4->field0_0x0)._s_0.X;
  local_c8._s_0.Y = local_98._s_0.Y - FCrowdDebug::Offset.field0_0x0._s_0.Y;
  local_c8._s_0.Z = local_98._s_0.Z - FCrowdDebug::Offset.field0_0x0._s_0.Z;
  local_c8._s_0.X = local_98._s_0.X - FCrowdDebug::Offset.field0_0x0._s_0.X;
  DrawDebugCylinder(pUVar3,(TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_98._s_0,
                    (float)dVar8,0x20,&FCrowdDebug::CollisionRange,false,__real_bf800000,'\0',0.0);
  fVar2 = __real_40600000;
  iVar6 = 0;
  if (0 < (param_1->boundary).m_nsegs) {
    pdVar5 = (param_1->boundary).m_segs[0].s + 3;
    do {
      if ((*(int *)(pdVar5 + 4) & 1) == 0) {
        pdVar7 = pdVar5;
        local_res8[0] = FCrowdDebug::CollisionSeg0.field0_0x0;
        if ((pdVar5[-1] - param_1->npos[2]) * (*pdVar5 - param_1->npos[0]) -
            (pdVar5[2] - param_1->npos[2]) * (((Segment *)(pdVar5 + -3))->s[0] - param_1->npos[0]) <
            0.0) {
          local_res8[0] = FCrowdDebug::CollisionSeg1.field0_0x0;
        }
      }
      else {
        pdVar7 = (param_1->boundary).m_segs[iVar6].s + 3;
        local_res8[0] = FCrowdDebug::CollisionSegIgnored.field0_0x0;
      }
      Recast2UnrealPoint((TVector<double> *)&local_80._s_0,pdVar5 + -3);
      Recast2UnrealPoint((TVector<double> *)&local_c8._s_0,pdVar7);
      local_68[0]._0_8_ = local_c8._s_0.X + FCrowdDebug::Offset.field0_0x0._s_0.X;
      local_68[0]._8_8_ = local_c8._s_0.Y + FCrowdDebug::Offset.field0_0x0._s_0.Y;
      local_68[0]._16_8_ = local_c8._s_0.Z + FCrowdDebug::Offset.field0_0x0._s_0.Z;
      local_b0._s_0.Y = local_80._s_0.Y + FCrowdDebug::Offset.field0_0x0._s_0.Y;
      local_b0._s_0.X = local_80._s_0.X + FCrowdDebug::Offset.field0_0x0._s_0.X;
      local_b0._s_0.Z = local_80._s_0.Z + FCrowdDebug::Offset.field0_0x0._s_0.Z;
      DrawDebugLine(pUVar3,(TVector<double> *)&local_b0._s_0,(TVector<double> *)&local_68[0]._s_0,
                    (FColor *)&local_res8[0]._s_0,false,fVar1,'\0',fVar2);
      iVar6 = iVar6 + 1;
      pdVar5 = pdVar5 + 8;
    } while (iVar6 < (param_1->boundary).m_nsegs);
  }
  return;
}

// DrawDebugCorners @ 146fa5a00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::DrawDebugCorners(UCrowdManager *this,dtCrowdAgent *param_1)

{
  float fVar1;
  float fVar2;
  UWorld *pUVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40 [2];
  
  pUVar3 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  Recast2UnrealPoint((TVector<double> *)&local_70._s_0,param_1->npos);
  fVar2 = __real_40000000;
  fVar1 = __real_bf800000;
  iVar4 = param_1->ncorners;
  iVar6 = 0;
  if (0 < iVar4) {
    iVar5 = 0;
    do {
      Recast2UnrealPoint((TVector<double> *)&local_88._s_0,param_1->cornerVerts + iVar5);
      local_58._s_0.X = FCrowdDebug::Offset.field0_0x0._s_0.X + local_88._s_0.X;
      local_58._s_0.Y = FCrowdDebug::Offset.field0_0x0._s_0.Y + local_88._s_0.Y;
      local_58._s_0.Z = FCrowdDebug::Offset.field0_0x0._s_0.Z + local_88._s_0.Z;
      local_40[0]._0_8_ = local_70._s_0.X + FCrowdDebug::Offset.field0_0x0._s_0.X;
      local_40[0]._8_8_ = local_70._s_0.Y + FCrowdDebug::Offset.field0_0x0._s_0.Y;
      local_40[0]._16_8_ = local_70._s_0.Z + FCrowdDebug::Offset.field0_0x0._s_0.Z;
      DrawDebugLine(pUVar3,(TVector<double> *)&local_40[0]._s_0,(TVector<double> *)&local_58._s_0,
                    &FCrowdDebug::Corner,false,fVar1,'\0',fVar2);
      local_70._s_0.X = local_88._s_0.X;
      local_70._s_0.Y = local_88._s_0.Y;
      iVar6 = iVar6 + 1;
      iVar4 = param_1->ncorners;
      local_70._s_0.Z = local_88._s_0.Z;
      iVar5 = iVar5 + 3;
    } while (iVar6 < iVar4);
  }
  if ((0 < iVar4) && ((param_1->cornerFlags[(longlong)iVar4 + -1] & 4) != 0)) {
    Recast2UnrealPoint((TVector<double> *)&local_70._s_0,param_1->cornerVerts + (iVar4 + -1) * 3);
    local_40[0]._0_8_ =
         FCrowdDebug::Offset.field0_0x0._s_0.X * __real_4000000000000000 + local_70._s_0.X;
    local_40[0]._16_8_ =
         FCrowdDebug::Offset.field0_0x0._s_0.Z * __real_4000000000000000 + local_70._s_0.Z;
    local_40[0]._8_8_ =
         FCrowdDebug::Offset.field0_0x0._s_0.Y * __real_4000000000000000 + local_70._s_0.Y;
    DrawDebugLine(pUVar3,(TVector<double> *)&local_70._s_0,(TVector<double> *)&local_40[0]._s_0,
                  &FCrowdDebug::CornerLink,false,fVar1,'\0',fVar2);
  }
  return;
}

// DrawDebugNeighbors @ 146fa5c30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::DrawDebugNeighbors(UCrowdManager *this,dtCrowdAgent *param_1)

{
  float fVar1;
  UWorld *pUVar2;
  TVector<double> *pTVar3;
  dtCrowdAgent *pdVar4;
  dtCrowdNeighbour *pdVar5;
  int iVar6;
  double dVar7;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  TVector<double> local_48 [2];
  
  pUVar2 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  pTVar3 = Recast2UnrealPoint((TVector<double> *)&local_60._s_0,param_1->npos);
  fVar1 = __real_bf800000;
  dVar7 = (param_1->params).collisionQueryRange;
  local_78._s_0.Y = FCrowdDebug::Offset.field0_0x0._s_0.Y + (pTVar3->field0_0x0)._s_0.Y;
  local_78._s_0.Z = FCrowdDebug::Offset.field0_0x0._s_0.Z + (pTVar3->field0_0x0)._s_0.Z;
  local_78._s_0.X = FCrowdDebug::Offset.field0_0x0._s_0.X + (pTVar3->field0_0x0)._s_0.X;
  if (__real_47efffffe0000000 <= dVar7) {
    dVar7 = __real_47efffffe0000000;
  }
  local_60._s_0.Y = local_78._s_0.Y - FCrowdDebug::Offset.field0_0x0._s_0.Y;
  local_60._s_0.X = local_78._s_0.X - FCrowdDebug::Offset.field0_0x0._s_0.X;
  local_60._s_0.Z = local_78._s_0.Z - FCrowdDebug::Offset.field0_0x0._s_0.Z;
  DrawDebugCylinder(pUVar2,(TVector<double> *)&local_60._s_0,(TVector<double> *)&local_78._s_0,
                    (float)dVar7,0x20,&FCrowdDebug::CollisionRange,false,__real_bf800000,'\0',0.0);
  iVar6 = 0;
  if (0 < param_1->nneis) {
    pdVar5 = param_1->neis;
    do {
      pdVar4 = dtCrowd::getAgent(this->DetourCrowd,pdVar5->idx);
      if (pdVar4 != (dtCrowdAgent *)0x0) {
        pTVar3 = Recast2UnrealPoint(local_48,pdVar4->npos);
        local_60._s_0.Z = FCrowdDebug::Offset.field0_0x0._s_0.Z + (pTVar3->field0_0x0)._s_0.Z;
        local_60._s_0.Y = FCrowdDebug::Offset.field0_0x0._s_0.Y + (pTVar3->field0_0x0)._s_0.Y;
        local_60._s_0.X = FCrowdDebug::Offset.field0_0x0._s_0.X + (pTVar3->field0_0x0)._s_0.X;
        DrawDebugLine(pUVar2,(TVector<double> *)&local_78._s_0,(TVector<double> *)&local_60._s_0,
                      &FCrowdDebug::Neighbor,false,fVar1,'\0',0.0);
      }
      iVar6 = iVar6 + 1;
      pdVar5 = pdVar5 + 1;
    } while (iVar6 < param_1->nneis);
  }
  return;
}

// DrawDebugPath @ 146fa5e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::DrawDebugPath(UCrowdManager *this,dtCrowdAgent *param_1)

{
  code *pcVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  UWorld *pUVar5;
  ARecastNavMesh *pAVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  UClass *pUVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulong64 *puVar14;
  ARecastNavMesh *this_00;
  ushort local_res8 [4];
  dtCrowdAgent *local_res10;
  ushort local_res18 [4];
  FColor_u_0 local_res20 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_108;
  UWorld *local_f8;
  ARecastNavMesh *local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8 [5];
  
  local_res10 = param_1;
  local_f8 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if ((this->MyNavData).field0_0x0.DebugPtr != (ANavigationData *)0x0) {
    pUVar10 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&this->MyNavData,pUVar10);
    if ((bVar7) &&
       (this_00 = (ARecastNavMesh *)(this->MyNavData).field0_0x0.DebugPtr,
       this_00 != (ARecastNavMesh *)0x0)) {
      (**(code **)(this_00->_padding_ + 0x848))(this_00);
      fVar4 = __real_bf800000;
      fVar3 = __real_40400000;
      dVar2 = __real_3fe0000000000000;
      puVar14 = (param_1->corridor).m_path;
      iVar13 = 0;
      local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.ArrayMax = 0;
      local_108.ArrayNum = 0;
      pAVar6 = this_00;
      if (0 < (param_1->corridor).m_npath) {
        do {
          local_f0 = pAVar6;
          uVar9 = 0;
          local_108.ArrayNum = 0;
          if ((local_108.ArrayMax < 0) && (local_108.ArrayMax != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&local_108.AllocatorInstance,0,&local_108.ArrayMax);
          }
          ARecastNavMesh::GetPolyVerts(this_00,*puVar14,&local_108);
          local_res18[0] = 0;
          local_res8[0] = 0;
          ARecastNavMesh::GetPolyFlags(this_00,*puVar14,local_res18,local_res8);
          pUVar5 = local_f8;
          local_res20[0] = FCrowdDebug::PathSpecial.field0_0x0;
          if (local_res8[0] != 1) {
            local_res20[0] = FCrowdDebug::Path.field0_0x0;
          }
          if (0 < local_108.ArrayNum) {
            lVar12 = 0;
            do {
              uVar8 = 0;
              if ((int)uVar9 < local_108.ArrayNum) {
                uVar8 = ~uVar9 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              local_e8 = *(double *)(local_108.AllocatorInstance.Data + lVar12);
              dStack_e0 = *(double *)(local_108.AllocatorInstance.Data + lVar12 + 8);
              local_d8 = *(double *)(local_108.AllocatorInstance.Data + lVar12 + 0x10);
              uVar9 = uVar9 + 1;
              uVar11 = (int)uVar9 % local_108.ArrayNum;
              uVar8 = 0;
              if ((int)uVar11 < local_108.ArrayNum) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              local_b8[0]._0_8_ = FCrowdDebug::Offset.field0_0x0._s_0.X * dVar2 + local_e8;
              local_d0._s_0.X =
                   FCrowdDebug::Offset.field0_0x0._s_0.X * dVar2 +
                   *(double *)(local_108.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x18);
              local_b8[0]._8_8_ = FCrowdDebug::Offset.field0_0x0._s_0.Y * dVar2 + dStack_e0;
              local_d0._s_0.Y =
                   FCrowdDebug::Offset.field0_0x0._s_0.Y * dVar2 +
                   *(double *)(local_108.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x18 + 8);
              local_d0._s_0.Z =
                   FCrowdDebug::Offset.field0_0x0._s_0.Z * dVar2 +
                   *(double *)
                    (local_108.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x18 + 0x10);
              local_b8[0]._16_8_ = FCrowdDebug::Offset.field0_0x0._s_0.Z * dVar2 + local_d8;
              DrawDebugLine(pUVar5,(TVector<double> *)&local_b8[0]._s_0,
                            (TVector<double> *)&local_d0._s_0,(FColor *)&local_res20[0]._s_0,false,
                            fVar4,'\0',fVar3);
              lVar12 = lVar12 + 0x18;
              param_1 = local_res10;
              this_00 = local_f0;
            } while ((int)uVar9 < local_108.ArrayNum);
          }
          iVar13 = iVar13 + 1;
          puVar14 = puVar14 + 1;
          pAVar6 = local_f0;
        } while (iVar13 < (param_1->corridor).m_npath);
      }
      (**(code **)(this_00->_padding_ + 0x850))(this_00);
      if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// DrawDebugPathOptimization @ 146fa61d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::DrawDebugPathOptimization(UCrowdManager *this,dtCrowdAgent *param_1)

{
  double dVar1;
  UWorld *pUVar2;
  TVector<double> *pTVar3;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  TVector<double> local_38 [2];
  
  pUVar2 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  pTVar3 = Recast2UnrealPoint(local_38,this->DetourAgentDebug->optStart);
  dVar1 = __real_3ff4000000000000;
  local_50._s_0.Z =
       FCrowdDebug::Offset.field0_0x0._s_0.Z * __real_3ff4000000000000 + (pTVar3->field0_0x0)._s_0.Z
  ;
  local_50._s_0.Y =
       FCrowdDebug::Offset.field0_0x0._s_0.Y * __real_3ff4000000000000 + (pTVar3->field0_0x0)._s_0.Y
  ;
  local_50._s_0.X =
       FCrowdDebug::Offset.field0_0x0._s_0.X * __real_3ff4000000000000 + (pTVar3->field0_0x0)._s_0.X
  ;
  pTVar3 = Recast2UnrealPoint(local_38,this->DetourAgentDebug->optEnd);
  local_68._s_0.X = FCrowdDebug::Offset.field0_0x0._s_0.X * dVar1 + (pTVar3->field0_0x0)._s_0.X;
  local_68._s_0.Y = FCrowdDebug::Offset.field0_0x0._s_0.Y * dVar1 + (pTVar3->field0_0x0)._s_0.Y;
  local_68._s_0.Z = FCrowdDebug::Offset.field0_0x0._s_0.Z * dVar1 + (pTVar3->field0_0x0)._s_0.Z;
  DrawDebugLine(pUVar2,(TVector<double> *)&local_50._s_0,(TVector<double> *)&local_68._s_0,
                &FCrowdDebug::PathOpt,false,__real_bf800000,'\0',__real_40200000);
  return;
}

// DrawDebugSharedBoundary @ 146fa6310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::DrawDebugSharedBoundary(UCrowdManager *this)

{
  dtCrowd *pdVar1;
  code *pcVar2;
  float fVar3;
  double dVar4;
  UWorld *pUVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  double dVar12;
  FColor_u_0 local_res8 [2];
  uint local_res10;
  FColor_u_0 local_res18 [2];
  UWorld *local_res20;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double> local_a8;
  TVector<double> local_90 [3];
  
  local_res20 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  dVar4 = __real_47efffffe0000000;
  fVar3 = __real_bf800000;
  pdVar1 = this->DetourCrowd;
  local_res18[0] = FColorList::Red.field0_0x0;
  local_res18[1] = FColorList::Orange.field0_0x0;
  local_res10 = 0;
  if (0 < *(int *)&(pdVar1->m_sharedBoundary).Data.field_0x8 -
          *(int *)&(pdVar1->m_sharedBoundary).Data.field_0x34) {
    lVar9 = 0;
    do {
      pUVar5 = local_res20;
      local_res8[0] = local_res18[local_res10 & 1];
      Recast2UnrealPoint((TVector<double> *)&local_108._s_0,
                         (double *)(*(longlong *)&(pdVar1->m_sharedBoundary).Data + lVar9));
      local_f0._s_0.X = local_108._s_0.X - FCrowdDebug::Offset.field0_0x0._s_0.X;
      dVar12 = *(double *)(*(longlong *)&(pdVar1->m_sharedBoundary).Data + 0x18 + lVar9);
      local_f0._s_0.Y = local_108._s_0.Y - FCrowdDebug::Offset.field0_0x0._s_0.Y;
      if (dVar4 <= dVar12) {
        dVar12 = dVar4;
      }
      local_f0._s_0.Z = local_108._s_0.Z - FCrowdDebug::Offset.field0_0x0._s_0.Z;
      DrawDebugCylinder(pUVar5,(TVector<double> *)&local_f0._s_0,(TVector<double> *)&local_108._s_0,
                        (float)dVar12,0x20,(FColor *)&local_res8[0]._s_0,false,fVar3,'\0',0.0);
      lVar11 = *(longlong *)&(pdVar1->m_sharedBoundary).Data;
      uVar10 = 0;
      if (0 < *(int *)(lVar9 + 0x40 + lVar11)) {
        do {
          uVar7 = 0;
          if ((int)uVar10 < *(int *)(lVar9 + 0x40 + lVar11)) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar8 = Recast2UnrealPoint(&local_a8,
                                      (double *)
                                      (*(longlong *)(lVar9 + 0x38 + lVar11) +
                                      (longlong)(int)uVar10 * 0x40));
          local_c0._s_0.Z = FCrowdDebug::Offset.field0_0x0._s_0.Z + (pTVar8->field0_0x0)._s_0.Z;
          local_c0._s_0.Y = FCrowdDebug::Offset.field0_0x0._s_0.Y + (pTVar8->field0_0x0)._s_0.Y;
          local_c0._s_0.X = FCrowdDebug::Offset.field0_0x0._s_0.X + (pTVar8->field0_0x0)._s_0.X;
          lVar11 = *(longlong *)&(pdVar1->m_sharedBoundary).Data;
          uVar7 = 0;
          if ((int)uVar10 < *(int *)(lVar11 + 0x40 + lVar9)) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar8 = Recast2UnrealPoint(local_90,(double *)
                                               (*(longlong *)(lVar11 + 0x38 + lVar9) + 0x18 +
                                               (longlong)(int)uVar10 * 0x40));
          local_d8._s_0.Z = FCrowdDebug::Offset.field0_0x0._s_0.Z + (pTVar8->field0_0x0)._s_0.Z;
          local_d8._s_0.Y = FCrowdDebug::Offset.field0_0x0._s_0.Y + (pTVar8->field0_0x0)._s_0.Y;
          local_d8._s_0.X = FCrowdDebug::Offset.field0_0x0._s_0.X + (pTVar8->field0_0x0)._s_0.X;
          DrawDebugLine(local_res20,(TVector<double> *)&local_c0._s_0,
                        (TVector<double> *)&local_d8._s_0,(FColor *)&local_res8[0]._s_0,false,fVar3,
                        '\0',0.0);
          lVar11 = *(longlong *)&(pdVar1->m_sharedBoundary).Data;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < *(int *)(lVar9 + 0x40 + lVar11));
      }
      lVar9 = lVar9 + 0x98;
      local_res10 = local_res10 + 1;
    } while ((int)local_res10 <
             *(int *)&(pdVar1->m_sharedBoundary).Data.field_0x8 -
             *(int *)&(pdVar1->m_sharedBoundary).Data.field_0x34);
  }
  return;
}

// DrawDebugVelocityObstacles @ 146fa6670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::DrawDebugVelocityObstacles(UCrowdManager *this,dtCrowdAgent *param_1)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  UWorld *pUVar6;
  TVector<double> *pTVar7;
  dtObstacleAvoidanceDebugData *pdVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  FColor local_res8 [2];
  double local_res10;
  double local_158;
  double dStack_150;
  undefined8 local_148;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TPlane<double> local_108;
  TVector<double> local_e8 [8];
  
  pUVar6 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  pTVar7 = Recast2UnrealPoint((TVector<double> *)&local_140._s_0,param_1->npos);
  fVar5 = __real_bf800000;
  dVar1 = (param_1->params).maxSpeed;
  local_128._s_0.Y = FCrowdDebug::Offset.field0_0x0._s_0.Y + (pTVar7->field0_0x0)._s_0.Y;
  local_128._s_0.Z = FCrowdDebug::Offset.field0_0x0._s_0.Z + (pTVar7->field0_0x0)._s_0.Z;
  local_128._s_0.X = FCrowdDebug::Offset.field0_0x0._s_0.X + (pTVar7->field0_0x0)._s_0.X;
  uVar15 = SUB84(__real_47efffffe0000000,0);
  uVar17 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
  uVar12 = SUB84(dVar1,0);
  uVar13 = (int)((ulonglong)dVar1 >> 0x20);
  if (__real_47efffffe0000000 <= dVar1) {
    uVar12 = uVar15;
    uVar13 = uVar17;
  }
  local_148 = local_128._s_0.Z - FCrowdDebug::Offset.field0_0x0._s_0.Z;
  dStack_150 = local_128._s_0.Y - FCrowdDebug::Offset.field0_0x0._s_0.Y;
  local_158 = local_128._s_0.X - FCrowdDebug::Offset.field0_0x0._s_0.X;
  DrawDebugCylinder(pUVar6,(TVector<double> *)&local_158,(TVector<double> *)&local_128._s_0,
                    (float)(double)CONCAT44(uVar13,uVar12),0x20,&FCrowdDebug::AvoidanceRange,false,
                    __real_bf800000,'\0',0.0);
  lVar4 = __real_3ff0000000000000;
  iVar11 = 0;
  pdVar8 = this->DetourAvoidanceDebug;
  local_res10 = (double)(__real_3f800000 / (float)(param_1->params).avoidanceQueryMultiplier);
  local_140._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (0 < pdVar8->m_nsamples) {
    lVar9 = 0;
    iVar10 = 0;
    fVar18 = fVar5;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    do {
      dVar1 = local_res10 * *(double *)((longlong)pdVar8->m_ssize + lVar9);
      if ((double)CONCAT44(uVar17,uVar15) <= dVar1) {
        dVar1 = (double)CONCAT44(uVar17,uVar15);
      }
      fVar16 = (float)*(double *)((longlong)pdVar8->m_pen + lVar9);
      pTVar7 = Recast2UnrealPoint(local_e8,pdVar8->m_vel + iVar10);
      local_148 = local_128._s_0.Z + (pTVar7->field0_0x0)._s_0.Z;
      dVar14 = local_128._s_0.Y + (pTVar7->field0_0x0)._s_0.Y;
      local_158 = local_128._s_0.X + (pTVar7->field0_0x0)._s_0.X;
      dStack_150 = dVar14;
      if ((fVar18 <= fVar5) || (fVar16 < fVar18)) {
        unique0x100001ca = SUB84(dVar14,0);
        unique0x100001ce = (int)((ulonglong)dVar14 >> 0x20);
        fVar18 = fVar16;
        uVar2 = local_158;
        uVar3 = dVar14;
        local_140._s_0.Z = (double)local_148;
      }
      FColor::MakeRedToGreenColorFromScalar((float)local_148);
      local_108._padding_ = lVar4;
      local_108.W = (double)local_148;
      local_108._padding_ = 0;
      local_108._padding_ = 0;
      DrawDebugSolidPlane(pUVar6,&local_108,(TVector<double> *)&local_158,(float)dVar1,local_res8,
                          false,fVar5,'\0');
      pdVar8 = this->DetourAvoidanceDebug;
      iVar11 = iVar11 + 1;
      uVar15 = SUB84(__real_47efffffe0000000,0);
      uVar17 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
      iVar10 = iVar10 + 3;
      lVar9 = lVar9 + 8;
    } while (iVar11 < pdVar8->m_nsamples);
    if (0.0 <= fVar18) {
      local_148 = local_140._s_0.Z - __real_4059000000000000;
      local_140._s_0.Z = local_140._s_0.Z + __real_4059000000000000;
      dStack_150 = (double)uVar3;
      local_158 = (double)uVar2;
      local_140._s_0.X = (double)uVar2;
      local_140._s_0.Y = (double)uVar3;
      DrawDebugLine(pUVar6,(TVector<double> *)&local_140._s_0,(TVector<double> *)&local_158,
                    &FColor::Green,false,fVar5,'\0',0.0);
    }
  }
  return;
}

// GetAgentParams @ 146faba10

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
UCrowdManager::GetAgentParams
          (UCrowdManager *this,ICrowdAgentInterface *param_1,dtCrowdAgentParams *param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  UClass *pUVar6;
  ushort uVar7;
  byte bVar8;
  byte bVar9;
  float fVar10;
  float local_res10 [2];
  float local_res18 [2];
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_res10[0] = 0.0;
  local_res18[0] = 0.0;
  (**(code **)((longlong)*param_1 + 0x20))(param_1,local_res10,local_res18);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&param_2->linkFilter != (TSharedPtr<dtQuerySpecialLinkFilter,1> *)&local_18) {
    (param_2->linkFilter).Object = (dtQuerySpecialLinkFilter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_2->linkFilter).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  fVar10 = local_res18[0] * __real_40000000;
  param_2->userData = (void *)0x0;
  (param_2->linkFilter).Object = (dtQuerySpecialLinkFilter *)0x0;
  (param_2->linkFilter).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  param_2->radius = 0.0;
  param_2->height = 0.0;
  param_2->maxAcceleration = 0.0;
  param_2->maxSpeed = 0.0;
  param_2->collisionQueryRange = 0.0;
  param_2->pathOptimizationRange = 0.0;
  param_2->separationWeight = 0.0;
  param_2->avoidanceQueryMultiplier = 0.0;
  param_2->avoidanceGroup = 0;
  param_2->groupsToAvoid = 0;
  param_2->groupsToIgnore = 0;
  param_2->updateFlags = 0;
  param_2->obstacleAvoidanceType = '\0';
  param_2->filter = '\0';
  param_2->avoidanceQueryMultiplier = 1.0;
  param_2->radius = (double)local_res10[0];
  param_2->height = (double)fVar10;
  uVar4 = (**(code **)((longlong)*param_1 + 0x30))(param_1);
  param_2->avoidanceGroup = uVar4;
  uVar4 = (**(code **)((longlong)*param_1 + 0x38))(param_1);
  param_2->groupsToAvoid = uVar4;
  uVar4 = (**(code **)((longlong)*param_1 + 0x40))(param_1);
  param_2->groupsToIgnore = uVar4;
  lVar5 = (**(code **)((longlong)*param_1 + 8))(param_1);
  if (lVar5 != 0) {
    pUVar6 = UCrowdFollowingComponent::StaticClass();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar6->_padding_)) {
      param_2->collisionQueryRange = (double)*(float *)(lVar5 + 0x364);
      param_2->pathOptimizationRange = (double)*(float *)(lVar5 + 0x368);
      param_2->separationWeight = (double)*(float *)(lVar5 + 0x360);
      param_2->obstacleAvoidanceType = *(uchar *)(lVar5 + 0x35b);
      param_2->avoidanceQueryMultiplier = (double)*(float *)(lVar5 + 0x36c);
      if (*(char *)(lVar5 + 0x35c) == '\0') {
        bVar8 = *(byte *)(lVar5 + 0x358);
        if (((bVar8 & 0x20) == 0) || ((bVar8 >> 4 & 1) != 0)) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
        bVar3 = bVar8 >> 4 & 1;
        if (((bVar8 & 0x40) == 0) || (bVar3 != 0)) {
          bVar9 = 0;
        }
        else {
          bVar9 = 1;
        }
        if (((char)bVar8 < '\0') && (bVar3 == 0)) {
          bVar8 = 1;
        }
        else {
          bVar8 = 0;
        }
        bVar1 = *(byte *)(lVar5 + 0x359);
        if (((bVar1 & 2) == 0) || (bVar3 != 0)) {
          bVar3 = 0;
        }
        else {
          bVar3 = 1;
        }
        param_2->updateFlags =
             ((ushort)(bVar1 >> 3 & 1) * 2 | (ushort)(bVar1 >> 2 & 1)) << 6 | (ushort)bVar9 * 2 |
             (ushort)bVar3 << 4 | -(ushort)((bVar1 & 1) != 0) & 0x28 | (ushort)bVar8 << 2 | uVar7;
      }
    }
  }
  return;
}

// GetAvoidanceConfig @ 146fabf10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UCrowdManager::GetAvoidanceConfig(UCrowdManager *this,int param_1,FCrowdAvoidanceConfig *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((-1 < param_1) && (param_1 < (this->AvoidanceConfig).ArrayNum)) {
    uVar8 = 0;
    if (param_1 < (this->AvoidanceConfig).ArrayNum) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    pFVar3 = (this->AvoidanceConfig).AllocatorInstance.Data;
    lVar9 = (longlong)param_1 * 0x1c;
    uVar1 = *(undefined8 *)(pFVar3 + lVar9);
    uVar5 = *(undefined8 *)(pFVar3 + lVar9 + 8);
    param_2->VelocityBias = (float)(int)uVar1;
    param_2->DesiredVelocityWeight = (float)(int)((ulonglong)uVar1 >> 0x20);
    param_2->CurrentVelocityWeight = (float)(int)uVar5;
    param_2->SideBiasWeight = (float)(int)((ulonglong)uVar5 >> 0x20);
    uVar1 = *(undefined8 *)(pFVar3 + lVar9 + 0x10);
    param_2->ImpactTimeWeight = (float)(int)uVar1;
    param_2->ImpactTimeRange = (float)(int)((ulonglong)uVar1 >> 0x20);
    uVar2 = *(undefined4 *)(pFVar3 + lVar9 + 0x18);
    param_2->CustomPatternIdx = (char)uVar2;
    param_2->AdaptiveDivisions = (char)((uint)uVar2 >> 8);
    param_2->AdaptiveRings = (char)((uint)uVar2 >> 0x10);
    param_2->AdaptiveDepth = (char)((uint)uVar2 >> 0x18);
    return true;
  }
  return false;
}

// GetCurrent @ 146fad320

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UCrowdManager * __cdecl UCrowdManager::GetCurrent(UObject *param_1)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UCrowdManager *pUVar4;
  UNavigationSystemBase *pUVar5;
  
  pUVar2 = FNavigationSystem::GetWorldFromContextObject(param_1);
  if (pUVar2 == (UWorld *)0x0) {
    return (UCrowdManager *)0x0;
  }
  pUVar5 = (pUVar2->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar5 != (UNavigationSystemBase *)0x0) {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146fad361;
  }
  pUVar5 = (UNavigationSystemBase *)0x0;
LAB_146fad361:
  if (pUVar5 == (UNavigationSystemBase *)0x0) {
    return (UCrowdManager *)0x0;
  }
  pUVar4 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[8].field_0x20);
  if (pUVar4 != (UCrowdManager *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar4;
    }
  }
  return (UCrowdManager *)0x0;
}

// GetCurrent @ 146fad3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCrowdManager * __cdecl UCrowdManager::GetCurrent(UWorld *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UCrowdManager *pUVar3;
  UNavigationSystemBase *pUVar4;
  
  if (param_1 == (UWorld *)0x0) {
    return (UCrowdManager *)0x0;
  }
  pUVar4 = (param_1->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar4 != (UNavigationSystemBase *)0x0) {
    pUVar2 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_146fad3fc;
  }
  pUVar4 = (UNavigationSystemBase *)0x0;
LAB_146fad3fc:
  if (pUVar4 == (UNavigationSystemBase *)0x0) {
    return (UCrowdManager *)0x0;
  }
  pUVar3 = (UCrowdManager *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar4[8].field_0x20);
  if (pUVar3 != (UCrowdManager *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UCrowdManager *)0x0;
}

// GetDebugDrawingWorld @ 146fadef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UWorld * __thiscall UCrowdManager::GetDebugDrawingWorld(UCrowdManager *this)

{
  UWorld *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146fadef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  return pUVar1;
}

// GetNearbyAgentLocations @ 146fb2b10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
UCrowdManager::GetNearbyAgentLocations
          (UCrowdManager *this,ICrowdAgentInterface *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FCrowdAgentData *pFVar9;
  dtCrowdAgent *pdVar10;
  dtCrowdAgent *pdVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  uint uVar14;
  dtCrowdNeighbour *pdVar15;
  TVector<double> local_48;
  
  iVar7 = param_2->ArrayNum;
  pFVar9 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
           ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                   *)&this->ActiveAgents,param_1);
  if ((((pFVar9 != (FCrowdAgentData *)0x0) && (pFVar9->bIsSimulated != 0)) &&
      (-1 < pFVar9->AgentIndex)) &&
     ((this->DetourCrowd != (dtCrowd *)0x0 &&
      (pdVar10 = dtCrowd::getAgent(this->DetourCrowd,pFVar9->AgentIndex),
      pdVar10 != (dtCrowdAgent *)0x0)))) {
    uVar14 = pdVar10->nneis + iVar7;
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    piVar1 = &param_2->ArrayMax;
    if (*piVar1 < (int)uVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar14,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    }
    iVar13 = 0;
    if (0 < pdVar10->nneis) {
      pdVar15 = pdVar10->neis;
      do {
        pdVar11 = dtCrowd::getAgent(this->DetourCrowd,pdVar15->idx);
        if (pdVar11 != (dtCrowdAgent *)0x0) {
          pFVar12 = (FScriptContainerElement *)Recast2UnrealPoint(&local_48,pdVar11->npos);
          pFVar2 = (param_2->AllocatorInstance).Data;
          if (((pFVar2 <= pFVar12) && (pFVar12 < pFVar2 + (longlong)*piVar1 * 0x18)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          iVar8 = param_2->ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar8 + 1;
          dVar5 = *(double *)(pFVar12 + 8);
          pFVar3 = (param_2->AllocatorInstance).Data;
          pFVar2 = pFVar3 + (longlong)iVar8 * 0x18;
          *(double *)pFVar2 = (((TVector<double>_u_0 *)&pFVar12->field_0x0)->_s_0).X;
          *(double *)(pFVar2 + 8) = dVar5;
          *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x18 + 0x10) = *(undefined8 *)(pFVar12 + 0x10);
        }
        iVar13 = iVar13 + 1;
        pdVar15 = pdVar15 + 1;
      } while (iVar13 < pdVar10->nneis);
    }
  }
  return param_2->ArrayNum - iVar7;
}

// GetNumNearbyAgents @ 146fb2df0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall UCrowdManager::GetNumNearbyAgents(UCrowdManager *this,ICrowdAgentInterface *param_1)

{
  FCrowdAgentData *pFVar1;
  dtCrowdAgent *pdVar2;
  
  pFVar1 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
           ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                   *)&this->ActiveAgents,param_1);
  if ((((pFVar1 != (FCrowdAgentData *)0x0) && (pFVar1->bIsSimulated != 0)) &&
      (-1 < pFVar1->AgentIndex)) && (this->DetourCrowd != (dtCrowd *)0x0)) {
    pdVar2 = dtCrowd::getAgent(this->DetourCrowd,pFVar1->AgentIndex);
    if (pdVar2 != (dtCrowdAgent *)0x0) {
      return pdVar2->nneis;
    }
  }
  return 0;
}

// GetPrivateStaticClass @ 146fb3fb0

UClass * __cdecl UCrowdManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCrowdManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"CrowdManager",
               &Z_Registration_Info_UClass_UCrowdManager.InnerSingleton,
               StaticRegisterNativesUCrowdManager,0xf0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"Engine",InternalConstructor<UCrowdManager>,
               InternalVTableHelperCtorCaller<UCrowdManager>,local_res8,
               UCrowdManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCrowdManager.InnerSingleton;
}

// GetWorld @ 146fb5d60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UWorld * __thiscall UCrowdManager::GetWorld(UCrowdManager *this)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x000146fb5d9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar4 = (UWorld *)(**(code **)(*plVar2 + 0x180))(plVar2);
      return pUVar4;
    }
  }
  return (UWorld *)0x0;
}

// IsAgentValid @ 146fb9350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UCrowdManager::IsAgentValid(UCrowdManager *this,ICrowdAgentInterface *param_1)

{
  FCrowdAgentData *pFVar1;
  
  pFVar1 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
           ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                   *)&this->ActiveAgents,param_1);
  if ((pFVar1 != (FCrowdAgentData *)0x0) && (-1 < pFVar1->AgentIndex)) {
    return true;
  }
  return false;
}

// IsAgentValid @ 146fb9380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UCrowdManager::IsAgentValid(UCrowdManager *this,UCrowdFollowingComponent *param_1)

{
  FCrowdAgentData *pFVar1;
  ICrowdAgentInterface *pIVar2;
  
  pIVar2 = (ICrowdAgentInterface *)&param_1->_padding_;
  if (param_1 == (UCrowdFollowingComponent *)0x0) {
    pIVar2 = (ICrowdAgentInterface *)0x0;
  }
  pFVar1 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
           ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                   *)&this->ActiveAgents,pIVar2);
  if ((pFVar1 != (FCrowdAgentData *)0x0) && (-1 < pFVar1->AgentIndex)) {
    return true;
  }
  return false;
}

// IsSuitableNavData @ 146fba170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UCrowdManager::IsSuitableNavData(UCrowdManager *this,ANavigationData *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1->bSupportsDefaultAgent != 0) {
    pUVar2 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return true;
    }
  }
  return false;
}

// OnAgentFinishedCustomLink @ 146fbcbf0

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
UCrowdManager::OnAgentFinishedCustomLink(UCrowdManager *this,ICrowdAgentInterface *param_1)

{
  FCrowdAgentData *pFVar1;
  
  pFVar1 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
           ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                   *)&this->ActiveAgents,param_1);
  if (((this->DetourCrowd != (dtCrowd *)0x0) && (pFVar1 != (FCrowdAgentData *)0x0)) &&
     (-1 < pFVar1->AgentIndex)) {
    dtCrowd::setAgentBackOnLink(this->DetourCrowd,pFVar1->AgentIndex);
    return;
  }
  return;
}

// OnNavDataRegistered @ 146fbeb90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::OnNavDataRegistered(UCrowdManager *this,ANavigationData *param_1)

{
  char cVar1;
  
  if ((this->MyNavData).field0_0x0.DebugPtr == (ANavigationData *)0x0) {
    cVar1 = (**(code **)(this->_padding_ + 0x2d0))();
    if (cVar1 != '\0') {
      SetNavData(this,param_1,true);
    }
  }
  return;
}

// OnNavDataUnregistered @ 146fbed40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::OnNavDataUnregistered(UCrowdManager *this,ANavigationData *param_1)

{
  TMap<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
  *pTVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  ANavigationData *pAVar5;
  longlong lVar6;
  code *pcVar7;
  int iVar8;
  UClass *pUVar9;
  dtNavMesh *pdVar10;
  dtCrowd *pdVar11;
  int iVar12;
  ARecastNavMesh *pAVar13;
  uint uVar14;
  ARecastNavMesh *pAVar15;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  FName local_res8;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  int iStack_bc;
  longlong local_b8;
  TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
  *local_a8;
  undefined2 local_a0;
  FString local_98;
  TArray<double,TSizedDefaultAllocator<32>_> local_88;
  TArray<double,TSizedDefaultAllocator<32>_> local_78;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  pAVar15 = (ARecastNavMesh *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pAVar5 = (this->MyNavData).field0_0x0.DebugPtr;
  if (pAVar5 == (ANavigationData *)0x0) {
    bVar19 = param_1 == (ANavigationData *)0x0;
  }
  else {
    bVar19 = pAVar5 == param_1;
  }
  if (bVar19) {
    if (FVisualLogger::bIsRecording != 0) {
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,&local_98);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogCrowdFollowing.field_0x4,Warning,
                 L"%s is being unregistered. Will look for new nav data");
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    if ((this->MyNavData).field0_0x0.DebugPtr != (ANavigationData *)0x0) {
      pUVar9 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
      bVar19 = FObjectPtr::IsA((FObjectPtr *)&this->MyNavData,pUVar9);
      if ((bVar19) &&
         (pAVar5 = (this->MyNavData).field0_0x0.DebugPtr, pAVar5 != (ANavigationData *)0x0)) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pAVar5[1]._padding_,this);
      }
    }
    (this->MyNavData).field0_0x0.DebugPtr = (ANavigationData *)0x0;
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogCrowdFollowing.field_0x4,Log,
                 L"Setting cached nav data to %s");
    }
    dtFreeCrowd(this->DetourCrowd);
    this->DetourCrowd = (dtCrowd *)0x0;
    if ((this->MyNavData).field0_0x0.DebugPtr == (ANavigationData *)0x0) {
      (**(code **)(this->_padding_ + 0x2d8))(this);
      if (2 < (byte)LogCrowdFollowing._0_1_) {
        if ((this->MyNavData).field0_0x0.DebugPtr != (ANavigationData *)0x0) {
          return;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCrowdFollowing);
      }
    }
    else {
      pUVar9 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
      bVar19 = FObjectPtr::IsA((FObjectPtr *)&this->MyNavData,pUVar9);
      pAVar13 = pAVar15;
      if (bVar19) {
        pAVar13 = (ARecastNavMesh *)(this->MyNavData).field0_0x0.DebugPtr;
      }
      pdVar10 = ARecastNavMesh::GetRecastMesh(pAVar13);
      if (pdVar10 != (dtNavMesh *)0x0) {
        pdVar11 = dtAllocCrowd();
        this->DetourCrowd = pdVar11;
      }
      if (this->DetourCrowd != (dtCrowd *)0x0) {
        dtCrowd::init(this->DetourCrowd,this->MaxAgents,(double)this->MaxAgentRadius,pdVar10);
        dtCrowd::setAgentCheckInterval(this->DetourCrowd,(double)this->NavmeshCheckInterval);
        dtCrowd::setSeparationFilter(this->DetourCrowd,(double)this->SeparationDirClamp);
        dtCrowd::setSingleAreaVisibilityOptimization
                  (this->DetourCrowd,this->bSingleAreaVisibilityOptimization);
        dtCrowd::setPruneStartedOffmeshConnections
                  (this->DetourCrowd,this->bPruneStartedOffmeshConnections);
        dtCrowd::setEarlyReachTestOptimization(this->DetourCrowd,this->bEarlyReachTestOptimization);
        dtCrowd::setPathOffsetRadiusMultiplier
                  (this->DetourCrowd,(double)this->PathOffsetRadiusMultiplier);
        iVar18 = 1;
        iVar12 = 1;
        if (1 < (this->SamplingPatterns).ArrayNum) {
          iVar12 = (this->SamplingPatterns).ArrayNum;
        }
        dtCrowd::initAvoidance
                  (this->DetourCrowd,this->MaxAvoidedAgents,this->MaxAvoidedWalls,iVar12);
        pAVar13 = pAVar15;
        if (0 < (this->SamplingPatterns).ArrayNum) {
          do {
            uVar14 = (uint)pAVar15;
            uVar17 = 0;
            if ((int)uVar14 < (this->SamplingPatterns).ArrayNum) {
              uVar17 = ~uVar14 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pTVar16 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                      ((longlong)&pAVar13->_padding_ +
                      (longlong)(this->SamplingPatterns).AllocatorInstance.Data);
            if ((0 < pTVar16->ArrayNum) && (pTVar16->ArrayNum == pTVar16[1].ArrayNum)) {
              UE::LWC::ConvertArrayType<double,float,TSizedDefaultAllocator<32>_>(&local_88,pTVar16)
              ;
              UE::LWC::ConvertArrayType<double,float,TSizedDefaultAllocator<32>_>
                        (&local_78,pTVar16 + 1);
              dtCrowd::setObstacleAvoidancePattern
                        (this->DetourCrowd,uVar14,(double *)local_88.AllocatorInstance.Data,
                         (double *)local_78.AllocatorInstance.Data,local_88.ArrayNum);
              if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.AllocatorInstance.Data);
              }
              if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.AllocatorInstance.Data);
              }
            }
            pAVar15 = (ARecastNavMesh *)(ulonglong)(uVar14 + 1);
            pAVar13 = (ARecastNavMesh *)&pAVar13->_padding_;
          } while ((int)(uVar14 + 1) < (this->SamplingPatterns).ArrayNum);
        }
        (**(code **)(this->_padding_ + 0x2e0))(this);
        piVar2 = &(this->AgentFlags).ArrayMax;
        piVar3 = &(this->AgentFlags).ArrayNum;
        *piVar3 = 0;
        if (*piVar2 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,&(this->AgentFlags).AllocatorInstance,0,piVar2);
        }
        iVar12 = this->MaxAgents;
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar12,&(this->AgentFlags).AllocatorInstance,piVar3,piVar2);
        memset((this->AgentFlags).AllocatorInstance.Data + iVar8,0,(longlong)iVar12);
        pTVar1 = &this->ActiveAgents;
        TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_68,
                   (TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
                    *)pTVar1);
        auStack_d0._0_8_ = local_68._8_8_;
        stack0xffffffffffffff38 = local_68._16_16_;
        local_b8 = local_48;
        pTStack_b0 = pTStack_40;
        local_a0 = 0;
        iVar12 = local_68._28_4_;
        local_a8 = (TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
                    *)pTVar1;
        if (iVar12 < *(int *)(local_68._16_8_ + 0x18)) {
          do {
            AddAgent(this,*(ICrowdAgentInterface **)
                           ((longlong)iVar12 * 0x38 + *(longlong *)local_68._0_8_),
                     (FCrowdAgentData *)(*(longlong *)local_68._0_8_ + 8 + (longlong)iVar12 * 0x38))
            ;
            uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
            iVar12 = iStack_bc;
          } while (iStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
          if (((char)local_a0 != '\0') && (local_a0._1_1_ != '\0')) {
            uVar17 = *(int *)&(local_a8->Elements).field_0x8 -
                     *(int *)&(local_a8->Elements).field_0x34;
            if (3 < uVar17) {
              uVar4 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
              lVar6 = 0x3f;
              if (uVar4 != 0) {
                for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                }
              }
              iVar18 = 1 << ((byte)lVar6 & 0x1f);
            }
            if (((0 < (int)uVar17) && (local_a8->HashSize < iVar18)) ||
               (iVar18 < local_a8->HashSize)) {
              local_a8->HashSize = iVar18;
              TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
              ::Rehash(local_a8);
            }
          }
        }
      }
    }
    if (((this->MyNavData).field0_0x0.DebugPtr == (ANavigationData *)0x0) &&
       (FVisualLogger::bIsRecording != 0)) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogCrowdFollowing.field_0x4,Warning,
                 L"Failed to find suitable navigation data instance (no navmesh). Shutting down.");
    }
  }
  return;
}

// OnNavMeshUpdate @ 146fbf250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::OnNavMeshUpdate(UCrowdManager *this)

{
  dtFreeCrowd(this->DetourCrowd);
  this->DetourCrowd = (dtCrowd *)0x0;
  CreateCrowdManager(this);
  return;
}

// PauseAgent @ 146fc2080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::PauseAgent(UCrowdManager *this,UCrowdFollowingComponent *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime> FVar6;
  FCrowdAgentData *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  ICrowdAgentInterface *pIVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FVar12.Value = 0;
  FVar6 = StatPtr_STAT_AI_Crowd_AgentUpdateTime;
  if (StatPtr_STAT_AI_Crowd_AgentUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_AI_Crowd_AgentUpdateTime");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_AgentUpdateTime,*pFVar5,
                       L"Agent Update Time","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar8 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
                   ,0x218);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_146fc21ed;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_146fc21ed:
  pIVar9 = (ICrowdAgentInterface *)&param_1->_padding_;
  if (param_1 == (UCrowdFollowingComponent *)0x0) {
    pIVar9 = (ICrowdAgentInterface *)0x0;
  }
  pFVar7 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
           ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                   *)&this->ActiveAgents,pIVar9);
  if ((((pFVar7 != (FCrowdAgentData *)0x0) && (pFVar7->bIsSimulated != 0)) &&
      (-1 < pFVar7->AgentIndex)) && (this->DetourCrowd != (dtCrowd *)0x0)) {
    dtCrowd::setAgentWaiting(this->DetourCrowd,pFVar7->AgentIndex);
    dtCrowd::resetAgentVelocity(this->DetourCrowd,pFVar7->AgentIndex);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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

// PostMovePointUpdate @ 146fc2ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::PostMovePointUpdate(UCrowdManager *this)

{
  undefined1 *puVar1;
  TMap<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  TMap<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
  *pTVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  UClass *pUVar14;
  AActor *pAVar15;
  dtCrowdAgent *pdVar16;
  dtCrowd *pdVar17;
  byte bVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint uVar24;
  uint *puVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  dtCrowdAgent **ppdVar29;
  uint uVar30;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  uint local_178;
  undefined4 uStack_144;
  undefined4 uStack_fc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  TMap<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TVector<double>_u_0 local_98;
  TVector<double> local_80 [2];
  undefined4 local_4c;
  
  uVar27 = 0;
  uVar30 = *(uint *)&(this->ActiveAgents).field_0x28;
  puVar1 = &(this->ActiveAgents).field_0x10;
  local_178 = 1;
  uVar28 = 0;
  uVar22 = 0;
  uVar11 = 1;
  uVar24 = uVar22;
  uVar21 = uVar28;
  uVar12 = uVar28;
  if (uVar30 != 0) {
    puVar26 = *(uint **)&(this->ActiveAgents).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar1;
    }
    uVar11 = *puVar26;
    uVar21 = 0;
    uVar24 = 0;
    while (uVar11 == 0) {
      uVar21 = uVar21 + 1;
      uVar24 = uVar24 + 0x20;
      uVar11 = 1;
      uVar12 = uVar30;
      if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
      goto LAB_146fc2d92;
      uVar11 = puVar26[(int)uVar21];
    }
    uVar11 = ~(uVar11 - 1) & uVar11;
    uVar4 = (ulonglong)uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res20 = (int)lVar6;
    uVar12 = local_res20 + -1 + uVar24;
    if ((int)uVar30 < (int)uVar12) {
      uVar12 = uVar30;
    }
  }
LAB_146fc2d92:
  local_res18 = *(uint *)&(this->ActiveAgents).field_0x28;
  TStack_f0._padding_ = CONCAT44(uVar11,uVar21);
  uVar11 = local_res18 & 0xffffffe0;
  TStack_f0.CurrentBitIndex = uVar12;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)local_res18 >> 5;
  bVar18 = (byte)local_res18;
  TStack_f0._28_4_ = local_4c;
  TStack_f0.BaseBitIndex = uVar24;
  uStack_d0 = CONCAT44(uStack_144,
                       *(int *)&(this->ActiveAgents).field_0x8 -
                       *(int *)&(this->ActiveAgents).field_0x34);
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)local_res18 < 0) || ((int)uVar30 < (int)local_res18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar30 = *(uint *)&(this->ActiveAgents).field_0x28;
  if (local_res18 != uVar30) {
    puVar5 = *(undefined1 **)&(this->ActiveAgents).field_0x20;
    puVar23 = puVar1;
    if (puVar5 != (undefined1 *)0x0) {
      puVar23 = puVar5;
    }
    uVar21 = -1 << (bVar18 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar19 * 4);
    while (uVar21 == 0) {
      iVar19 = iVar19 + 1;
      uVar11 = uVar11 + 0x20;
      local_res18 = uVar30;
      if ((int)(((int)(uVar30 - 1) >> 0x1f & 0x1fU) + (uVar30 - 1)) >> 5 < iVar19)
      goto LAB_146fc2ec0;
      uVar21 = *(uint *)(puVar23 + (longlong)iVar19 * 4);
    }
    uVar4 = (ulonglong)(~(uVar21 - 1) & uVar21) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res18 = (uVar11 - 1) + (int)lVar6;
    if ((int)uVar30 < (int)local_res18) {
      local_res18 = uVar30;
    }
  }
LAB_146fc2ec0:
  while( true ) {
    if (*(int *)&(this->ActiveAgents).field_0x8 - *(int *)&(this->ActiveAgents).field_0x34 !=
        (int)uStack_d0) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_f0.CurrentBitIndex == local_res18) &&
       (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar6 = *(longlong *)&this->ActiveAgents;
    lVar20 = (longlong)TStack_f0.CurrentBitIndex * 0x38;
    if ((*(longlong **)(lVar20 + lVar6) != (longlong *)0x0) &&
       (plVar13 = (longlong *)(**(code **)(**(longlong **)(lVar20 + lVar6) + 8))(),
       plVar13 != (longlong *)0x0)) {
      pUVar14 = UCrowdFollowingComponent::StaticClass();
      iVar19 = (int)pUVar14->_padding_;
      if ((iVar19 <= *(int *)(plVar13[2] + 0x38)) &&
         (((((longlong *)*(undefined1 **)(*(longlong *)(plVar13[2] + 0x30) + (longlong)iVar19 * 8)
             == &pUVar14->_padding_ &&
            (cVar10 = (**(code **)(*plVar13 + 0x678))(plVar13,local_80), cVar10 != '\0')) &&
           (iVar19 = *(int *)(lVar20 + 0x20 + lVar6), -1 < iVar19)) &&
          (iVar19 < (this->AgentFlags).ArrayNum)))) {
        if ((plVar13[0x27] == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pAVar15 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)(plVar13[0x27] + 0x38));
        FBasedPosition::Set((FBasedPosition *)(plVar13 + 0x32),pAVar15,local_80);
        pdVar16 = dtCrowd::getAgent(this->DetourCrowd,*(int *)(lVar20 + 0x20 + lVar6));
        Unreal2RecastPoint((TVector<double> *)&local_98._s_0,local_80);
        pdVar16->targetPos[0] = local_98._s_0.X;
        pdVar16->targetPos[1] = local_98._s_0.Y;
        pdVar16->targetPos[2] = local_98._s_0.Z;
        uVar30 = *(uint *)(lVar20 + 0x20 + lVar6);
        uVar11 = uVar22;
        if ((int)uVar30 < (this->AgentFlags).ArrayNum) {
          uVar11 = ~uVar30 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar3 = (this->AgentFlags).AllocatorInstance.Data + (int)uVar30;
        *pFVar3 = (FScriptContainerElement)((byte)*pFVar3 | 1);
      }
    }
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  }
  pdVar17 = this->DetourCrowd;
  ppdVar29 = pdVar17->m_activeAgents;
  uVar30 = uVar27;
  if (0 < pdVar17->m_numActiveAgents) {
    do {
      pdVar16 = *ppdVar29;
      if (((pdVar16->state == '\x01') && (pdVar16->ncorners == 1)) &&
         (((pdVar16->corridor).m_npath < 5 &&
          ((((pdVar16->cornerFlags[0] & 4) == 0 &&
            (iVar19 = (int)(((longlong)pdVar16 - (longlong)pdVar17->m_agents) / 0x548), -1 < iVar19)
            ) && (iVar19 < (this->AgentFlags).ArrayNum)))))) {
        if (((this->AgentFlags).ArrayNum <= iVar19) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (((byte)(this->AgentFlags).AllocatorInstance.Data[iVar19] & 1) != 0) {
          pdVar16->cornerVerts[0] = pdVar16->targetPos[0];
          pdVar16->cornerVerts[1] = pdVar16->targetPos[1];
          pdVar16->cornerVerts[2] = pdVar16->targetPos[2];
        }
      }
      pdVar17 = this->DetourCrowd;
      uVar30 = uVar30 + 1;
      ppdVar29 = ppdVar29 + 1;
    } while ((int)uVar30 < pdVar17->m_numActiveAgents);
  }
  uVar30 = *(uint *)&(this->ActiveAgents).field_0x28;
  uVar11 = uVar22;
  if (uVar30 != 0) {
    puVar26 = *(uint **)&(this->ActiveAgents).field_0x20;
    puVar25 = (uint *)puVar1;
    if (puVar26 != (uint *)0x0) {
      puVar25 = puVar26;
    }
    uVar11 = *puVar25;
    uVar28 = uVar27;
    uVar22 = uVar27;
    while (uVar11 == 0) {
      uVar28 = uVar28 + 1;
      uVar22 = uVar22 + 0x20;
      uVar11 = uVar30;
      if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar28)
      goto LAB_146fc3222;
      uVar11 = puVar25[(int)uVar28];
    }
    local_178 = -uVar11 & uVar11;
    uVar4 = (ulonglong)local_178 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar11 = (int)lVar6 + -1 + uVar22;
    if ((int)uVar30 < (int)uVar11) {
      uVar11 = uVar30;
    }
  }
LAB_146fc3222:
  pTVar2 = &this->ActiveAgents;
  uVar21 = *(uint *)&(this->ActiveAgents).field_0x28;
  uVar24 = uVar21 & 0xffffffe0;
  local_res18 = -1 << ((byte)uVar21 & 0x1f);
  TStack_c0._padding_ = CONCAT44(local_178,uVar28);
  TStack_c0.CurrentBitIndex = uVar11;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar21 >> 5;
  TStack_c0._28_4_ = uVar12;
  TStack_c0.BaseBitIndex = uVar22;
  uStack_a0 = CONCAT44(uStack_fc,
                       *(int *)&(this->ActiveAgents).field_0x8 -
                       *(int *)&(this->ActiveAgents).field_0x34);
  local_c8 = pTVar2;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || ((int)uVar30 < (int)uVar21)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar30 = *(uint *)&(this->ActiveAgents).field_0x28;
  if (uVar21 != uVar30) {
    puVar5 = *(undefined1 **)&(this->ActiveAgents).field_0x20;
    puVar23 = puVar1;
    if (puVar5 != (undefined1 *)0x0) {
      puVar23 = puVar5;
    }
    uVar11 = local_res18 & *(uint *)(puVar23 + (longlong)iVar19 * 4);
    while (uVar11 == 0) {
      iVar19 = iVar19 + 1;
      uVar24 = uVar24 + 0x20;
      uVar21 = uVar30;
      if ((int)(((int)(uVar30 - 1) >> 0x1f & 0x1fU) + (uVar30 - 1)) >> 5 < iVar19)
      goto LAB_146fc3340;
      uVar11 = *(uint *)(puVar23 + (longlong)iVar19 * 4);
    }
    uVar4 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar21 = (int)lVar6 + -1 + uVar24;
    if ((int)uVar30 < (int)uVar21) {
      uVar21 = uVar30;
    }
  }
LAB_146fc3340:
  while( true ) {
    pTVar8 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_c0.CurrentBitIndex == uVar21) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    iVar19 = *(int *)((longlong)TStack_c0.CurrentBitIndex * 0x38 + 0x20 + *(longlong *)pTVar8);
    if ((-1 < iVar19) && (iVar19 < (this->AgentFlags).ArrayNum)) {
      if (((this->AgentFlags).ArrayNum <= iVar19) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar3 = (this->AgentFlags).AllocatorInstance.Data + iVar19;
      *pFVar3 = (FScriptContainerElement)((byte)*pFVar3 & 0xfe);
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  return;
}

// PostProximityUpdate @ 146fc3980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::PostProximityUpdate(UCrowdManager *this)

{
  return;
}

// PrepareAgentStep @ 146fc39d0

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
UCrowdManager::PrepareAgentStep
          (UCrowdManager *this,ICrowdAgentInterface *param_1,FCrowdAgentData *param_2,float param_3)

{
  ushort uVar1;
  dtCrowdAgent *pdVar2;
  TVector<double> *pTVar3;
  float fVar4;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  undefined1 local_38 [48];
  
  pdVar2 = dtCrowd::getAgent(this->DetourCrowd,param_2->AgentIndex);
  fVar4 = (float)(**(code **)((longlong)*param_1 + 0x28))(param_1);
  (pdVar2->params).maxSpeed = (double)fVar4;
  pTVar3 = (TVector<double> *)(**(code **)((longlong)*param_1 + 0x10))(param_1,local_38);
  Unreal2RecastPoint((TVector<double> *)&local_68._s_0,pTVar3);
  pTVar3 = (TVector<double> *)(**(code **)((longlong)*param_1 + 0x18))(param_1,local_38);
  Unreal2RecastPoint((TVector<double> *)&local_50._s_0,pTVar3);
  pdVar2->npos[0] = local_68._s_0.X;
  pdVar2->npos[1] = local_68._s_0.Y;
  pdVar2->npos[2] = local_68._s_0.Z;
  pdVar2->vel[0] = local_50._s_0.X;
  pdVar2->vel[1] = local_50._s_0.Y;
  pdVar2->vel[2] = local_50._s_0.Z;
  if (param_2->bWantsPathOptimization != 0) {
    fVar4 = param_2->PathOptRemainingTime - param_3;
    param_2->PathOptRemainingTime = fVar4;
    uVar1 = (pdVar2->params).updateFlags;
    if (fVar4 <= 0.0) {
      (pdVar2->params).updateFlags = uVar1 | 8;
      param_2->PathOptRemainingTime = this->PathOptimizationInterval;
    }
    else {
      (pdVar2->params).updateFlags = uVar1 & 0xfff7;
    }
  }
  return;
}

// RegisterAgent @ 146fc6bc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::RegisterAgent(UCrowdManager *this,ICrowdAgentInterface *param_1)

{
  ICrowdAgentInterface *local_res10;
  TPairInitializer<ICrowdAgentInterface_*_const_&,FCrowdAgentData_const_&> local_res18;
  ICrowdAgentInterface **local_48;
  FCrowdAgentData *local_40;
  FCrowdAgentData local_38;
  
  local_res10 = param_1;
  if (param_1 == (ICrowdAgentInterface *)0x0) {
    if (2 < (byte)LogCrowdFollowing._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCrowdFollowing);
      return;
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2d8))();
    local_38.bWantsPathOptimization = 0;
    local_38.bIsSimulated = 0;
    local_38.LinkFilter.Object = (dtQuerySpecialLinkFilter *)0x0;
    local_38.LinkFilter.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_38.PrevPoly = 0;
    local_38.AgentIndex = -1;
    local_38.PathOptRemainingTime = 0.0;
    if (this->DetourCrowd != (dtCrowd *)0x0) {
      AddAgent(this,local_res10,&local_38);
    }
    local_48 = &local_res10;
    local_40 = &local_38;
    TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<ICrowdAgentInterface_*_const_&,FCrowdAgentData_const_&>_>
              ((TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
                *)&this->ActiveAgents,&local_res18,(bool *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.LinkFilter.SharedReferenceCount.ReferenceController);
  }
  return;
}

// RemoveAgent @ 146fcaf50

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
UCrowdManager::RemoveAgent
          (UCrowdManager *this,ICrowdAgentInterface *param_1,FCrowdAgentData *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res18;
  dtQuerySpecialLinkFilter *local_48;
  FSharedReferencer<1> FStack_40;
  FStatMessage local_38;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_AI_Crowd_AgentUpdateTime;
  if (StatPtr_STAT_AI_Crowd_AgentUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)0x0) {
    pFVar5 = ::FName::FName(&local_res18,"STAT_AI_Crowd_AgentUpdateTime");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_AgentUpdateTime,*pFVar5,
                       L"Agent Update Time","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
                   ,0x2d3);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_146fcb0bb;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_146fcb0bb:
  dtCrowd::removeAgent(this->DetourCrowd,param_2->AgentIndex);
  local_48 = (dtQuerySpecialLinkFilter *)0x0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2 != (FCrowdAgentData *)&local_48) {
    (param_2->LinkFilter).Object = (dtQuerySpecialLinkFilter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_2->LinkFilter).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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

// ResumeAgent @ 146fcdb50

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
UCrowdManager::ResumeAgent(UCrowdManager *this,UCrowdFollowingComponent *param_1,bool param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime> FVar6;
  FCrowdAgentData *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  ICrowdAgentInterface *pIVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_48;
  
  FVar12.Value = 0;
  FVar6 = StatPtr_STAT_AI_Crowd_AgentUpdateTime;
  if (StatPtr_STAT_AI_Crowd_AgentUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_AI_Crowd_AgentUpdateTime");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_AgentUpdateTime,*pFVar5,
                       L"Agent Update Time","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar8 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
                   ,0x227);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_146fcdcbd;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_146fcdcbd:
  pIVar9 = (ICrowdAgentInterface *)&param_1->_padding_;
  if (param_1 == (UCrowdFollowingComponent *)0x0) {
    pIVar9 = (ICrowdAgentInterface *)0x0;
  }
  pFVar7 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
           ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                   *)&this->ActiveAgents,pIVar9);
  if ((((pFVar7 != (FCrowdAgentData *)0x0) && (pFVar7->bIsSimulated != 0)) &&
      (-1 < pFVar7->AgentIndex)) && (this->DetourCrowd != (dtCrowd *)0x0)) {
    dtCrowd::updateAgentState(this->DetourCrowd,pFVar7->AgentIndex,param_2);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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

// SetAgentMoveDirection @ 146fcea60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UCrowdManager::SetAgentMoveDirection
          (UCrowdManager *this,UCrowdFollowingComponent *param_1,TVector<double> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime> FVar10;
  FCrowdAgentData *pFVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  ICrowdAgentInterface *pIVar13;
  FNameEntryId FVar14;
  FName FVar15;
  bool bVar16;
  FNameEntryId FVar17;
  float fVar18;
  double dVar19;
  LARGE_INTEGER local_res8;
  FName local_res10;
  TVector<double>_u_0 local_68;
  TVector<double> local_50;
  
  FVar17.Value = 0;
  FVar10 = StatPtr_STAT_AI_Crowd_AgentUpdateTime;
  if (StatPtr_STAT_AI_Crowd_AgentUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)0x0) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_AI_Crowd_AgentUpdateTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_AgentUpdateTime,*pFVar9,
                        L"Agent Update Time","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar12 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar14.Value;
        local_res8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
                   ,0x1ca);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar14.Value;
      local_res8.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar5 = true;
      FVar17.Value = FVar14.Value;
      goto LAB_146fcebce;
    }
  }
  bVar5 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_146fcebce:
  plVar2 = &param_1->_padding_;
  bVar16 = false;
  pIVar13 = (ICrowdAgentInterface *)plVar2;
  if (param_1 == (UCrowdFollowingComponent *)0x0) {
    pIVar13 = (ICrowdAgentInterface *)0x0;
  }
  pFVar11 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
            ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                    *)&this->ActiveAgents,pIVar13);
  bVar8 = false;
  if ((((pFVar11 != (FCrowdAgentData *)0x0) && (bVar8 = bVar16, pFVar11->bIsSimulated != 0)) &&
      (-1 < pFVar11->AgentIndex)) && (this->DetourCrowd != (dtCrowd *)0x0)) {
    dtCrowd::updateAgentState(this->DetourCrowd,pFVar11->AgentIndex,false);
    fVar18 = (float)(**(code **)(*plVar2 + 0x28))(plVar2);
    dVar19 = (double)fVar18;
    dVar3 = (param_2->field0_0x0)._s_0.Y * dVar19;
    local_68._s_0.Z = dVar19 * (param_2->field0_0x0)._s_0.Z;
    local_68._8_4_ = SUB84(dVar3,0);
    local_68._s_0.X = (param_2->field0_0x0)._s_0.X * dVar19;
    local_68._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    Unreal2RecastPoint(&local_50,(TVector<double> *)&local_68._s_0);
    bVar8 = dtCrowd::requestMoveVelocity(this->DetourCrowd,pFVar11->AgentIndex,(double *)&local_50);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68._8_4_ = FVar17.Value;
      local_68._12_4_ = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      auVar7 = local_68._0_16_;
      local_68._4_4_ = 0;
      local_68._0_4_ = local_res8.s.LowPart;
      local_68._s_0.Y = auVar7._8_8_;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_68._s_0);
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
  return bVar8;
}

// SetAgentMovePath @ 146fced80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UCrowdManager::SetAgentMovePath
          (UCrowdManager *this,UCrowdFollowingComponent *param_1,FNavMeshPath *param_2,int param_3,
          int param_4,TVector<double> *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  dtCrowd *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime> FVar12;
  FCrowdAgentData *pFVar13;
  UClass *pUVar14;
  INavigationQueryFilterInterface *pIVar15;
  ARecastNavMesh *pAVar16;
  longlong lVar17;
  FName FVar18;
  ARecastNavMesh *pAVar19;
  FScriptContainerElement *pFVar20;
  UCrowdManager *pUVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  FColor_u_0 local_a8;
  undefined4 local_a4;
  FName local_a0;
  FName local_98;
  FName local_90;
  FCrowdAgentData *local_80;
  TVector<double>_u_0 local_78;
  FName local_60;
  TVector<double> local_58;
  
  pAVar19 = (ARecastNavMesh *)0x0;
  uVar24 = (ulonglong)param_3;
  local_a4 = 0;
  FVar12 = StatPtr_STAT_AI_Crowd_AgentUpdateTime;
  if (StatPtr_STAT_AI_Crowd_AgentUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)0x0) {
    pFVar11 = ::FName::FName(&local_60,"STAT_AI_Crowd_AgentUpdateTime");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_AgentUpdateTime,*pFVar11
                        ,L"Agent Update Time","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar4 = false;
  bVar3 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  bVar7 = false;
  bVar5 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar3 = true;
      bVar7 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_a0.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
                   ,0x1df);
        bVar4 = true;
        bVar3 = true;
        bVar7 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_98 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar5 = true;
      goto LAB_146fceedc;
    }
  }
  bVar4 = bVar7;
  bVar3 = bVar5;
  bVar5 = false;
  local_98 = local_90;
  FVar18 = local_90;
LAB_146fceedc:
  bVar7 = false;
  pAVar16 = (ARecastNavMesh *)&param_1->_padding_;
  if (param_1 == (UCrowdFollowingComponent *)0x0) {
    pAVar16 = pAVar19;
  }
  pFVar13 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
            ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                    *)&this->ActiveAgents,(ICrowdAgentInterface *)pAVar16);
  pAVar16 = pAVar19;
  local_80 = pFVar13;
  if ((this->MyNavData).field0_0x0.DebugPtr != (ANavigationData *)0x0) {
    pUVar14 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->MyNavData,pUVar14);
    if (bVar6) {
      pAVar16 = (ARecastNavMesh *)(this->MyNavData).field0_0x0.DebugPtr;
    }
  }
  bVar6 = false;
  if ((((((pFVar13 != (FCrowdAgentData *)0x0) && (bVar6 = bVar7, pFVar13->bIsSimulated != 0)) &&
        (-1 < pFVar13->AgentIndex)) &&
       (((this->DetourCrowd != (dtCrowd *)0x0 && (pAVar16 != (ARecastNavMesh *)0x0)) &&
        ((param_2 != (FNavMeshPath *)0x0 && ((1 < (int)param_2->_padding_ && (-1 < param_3))))))))
      && (iVar10 = (param_2->PathCorridor).ArrayNum, param_3 < iVar10)) &&
     ((-1 < param_4 && (param_4 < iVar10)))) {
    local_78._s_0.X = (param_5->field0_0x0)._s_0.X;
    local_78._s_0.Y = (param_5->field0_0x0)._s_0.Y;
    local_78._s_0.Z = (param_5->field0_0x0)._s_0.Z;
    if (param_4 < iVar10 + -1) {
      if ((param_4 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      ARecastNavMesh::GetPolyCenter
                (pAVar16,*(ulong64 *)
                          ((param_2->PathCorridor).AllocatorInstance.Data + (longlong)param_4 * 8),
                 (TVector<double> *)&local_78._s_0);
    }
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = 0;
    if (param_3 <= param_4) {
      lVar22 = uVar24 * 8;
      do {
        uVar23 = (uint)uVar24;
        uVar9 = 0;
        if ((int)uVar23 < (param_2->PathCorridor).ArrayNum) {
          uVar9 = ~uVar23 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
        pFVar20 = (param_2->PathCorridor).AllocatorInstance.Data + lVar22;
        if (((local_b8.Data <= pFVar20) && (pFVar20 < local_b8.Data + (longlong)local_b0._4_4_ * 8))
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
        if ((int)local_b0 == local_b0._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_b8,(int *)((longlong)&local_b0 + 4));
          local_b0 = CONCAT44(local_b0._4_4_,iVar10);
        }
        lVar17 = (longlong)(int)local_b0;
        uVar24 = (ulonglong)(uVar23 + 1);
        lVar22 = lVar22 + 8;
        local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
        *(undefined8 *)(local_b8.Data + lVar17 * 8) = *(undefined8 *)pFVar20;
        FVar18 = local_98;
      } while ((int)(uVar23 + 1) <= param_4);
    }
    pTVar1 = (TReferenceControllerBase<1> *)param_2->_padding_;
    lVar22 = param_2->_padding_;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar22 == 0) {
      pIVar15 = ANavigationData::GetDefaultQueryFilterImpl((this->MyNavData).field0_0x0.DebugPtr);
      pAVar16 = pAVar19;
      pUVar21 = this;
    }
    else {
      pUVar21 = (UCrowdManager *)param_2->_padding_;
      lVar22 = param_2->_padding_;
      if (pUVar21 != (UCrowdManager *)0x0) {
        LOCK();
        *(int *)&pUVar21->_padding_ = (int)pUVar21->_padding_ + 1;
        UNLOCK();
      }
      if ((lVar22 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      pIVar15 = *(INavigationQueryFilterInterface **)(lVar22 + 0x10);
      pAVar16 = (ARecastNavMesh *)0x1;
    }
    if (pAVar16 != (ARecastNavMesh *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar21);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    pFVar13 = local_80;
    pAVar16 = (ARecastNavMesh *)(pIVar15 + 1);
    if (pIVar15 == (INavigationQueryFilterInterface *)0x0) {
      pAVar16 = pAVar19;
    }
    dtCrowd::updateAgentFilter(this->DetourCrowd,local_80->AgentIndex,(dtQueryFilter *)pAVar16);
    dtCrowd::updateAgentState(this->DetourCrowd,pFVar13->AgentIndex,false);
    Unreal2RecastPoint(&local_58,(TVector<double> *)&local_78._s_0);
    this_00 = this->DetourCrowd;
    uVar9 = 0;
    if ((int)((int)local_b0 - 1U) < (int)local_b0) {
      uVar9 = ~((int)local_b0 - 1U) >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    bVar7 = dtCrowd::requestMoveTarget
                      (this_00,pFVar13->AgentIndex,
                       *(ulong64 *)(local_b8.Data + (longlong)((int)local_b0 + -1) * 8),
                       (double *)&local_58);
    bVar6 = false;
    if (bVar7) {
      bVar6 = dtCrowd::setAgentCorridor
                        (this->DetourCrowd,pFVar13->AgentIndex,(ulong64 *)local_b8.Data,
                         (int)local_b0);
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return bVar6;
}

// SetAgentMoveTarget @ 146fcf310

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UCrowdManager::SetAgentMoveTarget
          (UCrowdManager *this,UCrowdFollowingComponent *param_1,TVector<double> *param_2,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_3)

{
  int *piVar1;
  code *pcVar2;
  ANavigationData *pAVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime> FVar10;
  FCrowdAgentData *pFVar11;
  FNavigationQueryFilter *pFVar12;
  INavigationQueryFilterInterface *pIVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  longlong *plVar15;
  ICrowdAgentInterface *pIVar16;
  FNameEntryId FVar17;
  FNameEntryId FVar18;
  FName FVar19;
  dtQueryFilter *pdVar20;
  LARGE_INTEGER local_res8;
  FName local_res10;
  TVector<double> *local_res18;
  FStatMessage local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  TVector<double> local_70;
  double local_58;
  double dStack_50;
  double local_48;
  ulong64 local_40;
  
  FVar17.Value = 0;
  FVar10 = StatPtr_STAT_AI_Crowd_AgentUpdateTime;
  local_res18 = param_2;
  if (StatPtr_STAT_AI_Crowd_AgentUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)0x0) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_AI_Crowd_AgentUpdateTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_AgentUpdateTime,*pFVar9,
                        L"Agent Update Time","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar14 = FVar19.Number;
  if ((FVar18.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar18.Value;
        local_res8.s.HighPart = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
                   ,0x1b0);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar18.Value;
      local_res8.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar5 = true;
      FVar17.Value = FVar18.Value;
      goto LAB_146fcf45e;
    }
  }
  bVar5 = false;
  FVar19.ComparisonIndex.Value = 0;
  FVar19.Number = 0;
LAB_146fcf45e:
  pIVar16 = (ICrowdAgentInterface *)&param_1->_padding_;
  if (param_1 == (UCrowdFollowingComponent *)0x0) {
    pIVar16 = (ICrowdAgentInterface *)0x0;
  }
  pFVar11 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
            ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                    *)&this->ActiveAgents,pIVar16);
  pTVar7 = local_res18;
  if ((((pFVar11 == (FCrowdAgentData *)0x0) || (pFVar11->bIsSimulated == 0)) ||
      (pFVar11->AgentIndex < 0)) || (this->DetourCrowd == (dtCrowd *)0x0)) {
    bVar8 = false;
  }
  else {
    plVar15 = &((this->MyNavData).field0_0x0.DebugPtr)->_padding_;
    local_40 = 0;
    local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pcVar2 = *(code **)(*plVar15 + 0x18);
    local_98.StatData.Pad = (uchar  [8])param_3->Object;
    local_98.NameAndInfo = (FStatNameAndInfo)(param_3->SharedReferenceCount).ReferenceController;
    if (local_98.NameAndInfo != (FStatNameAndInfo)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_98.NameAndInfo + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)local_98.NameAndInfo + 8) + 1);
      UNLOCK();
    }
    pAVar3 = (this->MyNavData).field0_0x0.DebugPtr;
    local_88 = *(undefined4 *)&(pAVar3->NavDataConfig).DefaultQueryExtent.field0_0x0;
    uStack_84 = *(undefined4 *)
                 ((longlong)&(pAVar3->NavDataConfig).DefaultQueryExtent.field0_0x0 + 4);
    uStack_80 = *(undefined4 *)
                 ((longlong)&(pAVar3->NavDataConfig).DefaultQueryExtent.field0_0x0 + 8);
    uStack_7c = *(undefined4 *)
                 ((longlong)&(pAVar3->NavDataConfig).DefaultQueryExtent.field0_0x0 + 0xc);
    local_78 = (pAVar3->NavDataConfig).DefaultQueryExtent.field0_0x0._s_0.Z;
    (*pcVar2)(plVar15,local_res18,&local_58,&local_88,&local_98,0);
    if (param_3->Object == (FNavigationQueryFilter *)0x0) {
      pIVar13 = ANavigationData::GetDefaultQueryFilterImpl((this->MyNavData).field0_0x0.DebugPtr);
    }
    else {
      pFVar12 = TSharedPtr<FNavigationQueryFilter_const_,1>::operator->(param_3);
      pIVar13 = (pFVar12->QueryFilterImpl).Object;
    }
    pdVar20 = (dtQueryFilter *)(pIVar13 + 1);
    if (pIVar13 == (INavigationQueryFilterInterface *)0x0) {
      pdVar20 = (dtQueryFilter *)0x0;
    }
    dtCrowd::updateAgentFilter(this->DetourCrowd,pFVar11->AgentIndex,pdVar20);
    dtCrowd::updateAgentState(this->DetourCrowd,pFVar11->AgentIndex,false);
    Unreal2RecastPoint(&local_70,pTVar7);
    bVar8 = dtCrowd::requestMoveTarget
                      (this->DetourCrowd,pFVar11->AgentIndex,local_40,(double *)&local_70);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_98.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(FVar19.Number,FVar17.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_98);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return bVar8;
}

// SetAvoidanceConfig @ 146fcf6a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UCrowdManager::SetAvoidanceConfig(UCrowdManager *this,int param_1,FCrowdAvoidanceConfig *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  
  if ((param_1 < 0) || ((this->AvoidanceConfig).ArrayNum <= param_1)) {
    if (7 < param_1) {
      return false;
    }
    piVar1 = &(this->AvoidanceConfig).ArrayNum;
    iVar7 = (this->AvoidanceConfig).ArrayNum;
    uVar11 = param_1 + 1;
    if (iVar7 < (int)uVar11) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1c,4,uVar11 - iVar7,&(this->AvoidanceConfig).AllocatorInstance,piVar1,
                         &(this->AvoidanceConfig).ArrayMax);
      DefaultConstructItems<FCrowdAvoidanceConfig,int>
                ((this->AvoidanceConfig).AllocatorInstance.Data + (longlong)iVar6 * 0x1c,
                 uVar11 - iVar7);
    }
    else {
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      if ((int)uVar11 < iVar7) {
        uVar10 = iVar7 - uVar11;
        if (((int)(uVar10 | uVar11) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (uVar10 != 0) {
          pFVar8 = (this->AvoidanceConfig).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x1c;
          iVar7 = (*piVar1 - uVar10) - uVar11;
          if (iVar7 != 0) {
            memmove(pFVar8,pFVar8 + (longlong)(int)uVar10 * 0x1c,(longlong)iVar7 * 0x1c);
          }
          *piVar1 = *piVar1 - uVar10;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,&(this->AvoidanceConfig).AllocatorInstance,*piVar1,
                     &(this->AvoidanceConfig).ArrayMax);
        }
      }
    }
    fVar13 = param_2->VelocityBias;
    fVar14 = param_2->DesiredVelocityWeight;
    fVar15 = param_2->CurrentVelocityWeight;
    fVar16 = param_2->SideBiasWeight;
    uVar12._0_1_ = param_2->CustomPatternIdx;
    uVar12._1_1_ = param_2->AdaptiveDivisions;
    uVar12._2_1_ = param_2->AdaptiveRings;
    uVar12._3_1_ = param_2->AdaptiveDepth;
    uVar17._0_4_ = param_2->ImpactTimeWeight;
    uVar17._4_4_ = param_2->ImpactTimeRange;
    iVar7 = *piVar1;
  }
  else {
    fVar13 = param_2->VelocityBias;
    fVar14 = param_2->DesiredVelocityWeight;
    fVar15 = param_2->CurrentVelocityWeight;
    fVar16 = param_2->SideBiasWeight;
    uVar12._0_1_ = param_2->CustomPatternIdx;
    uVar12._1_1_ = param_2->AdaptiveDivisions;
    uVar12._2_1_ = param_2->AdaptiveRings;
    uVar12._3_1_ = param_2->AdaptiveDepth;
    uVar17._0_4_ = param_2->ImpactTimeWeight;
    uVar17._4_4_ = param_2->ImpactTimeRange;
    iVar7 = (this->AvoidanceConfig).ArrayNum;
  }
  uVar11 = 0;
  if (param_1 < iVar7) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar2 = (this->AvoidanceConfig).AllocatorInstance.Data;
  lVar9 = (longlong)param_1 * 0x1c;
  pFVar8 = pFVar2 + lVar9;
  *(float *)pFVar8 = fVar13;
  *(float *)(pFVar8 + 4) = fVar14;
  *(float *)(pFVar8 + 8) = fVar15;
  *(float *)(pFVar8 + 0xc) = fVar16;
  *(undefined8 *)(pFVar2 + lVar9 + 0x10) = uVar17;
  *(undefined4 *)(pFVar2 + lVar9 + 0x18) = uVar12;
  (**(code **)(this->_padding_ + 0x2e0))(this);
  return true;
}

// SetNavData @ 146fd17c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::SetNavData(UCrowdManager *this,ANavigationData *param_1,bool param_2)

{
  int iVar1;
  ANavigationData *pAVar2;
  UClass *pUVar3;
  bool bVar4;
  undefined4 local_res8;
  FString local_28;
  
  local_res8 = 0;
  pAVar2 = (this->MyNavData).field0_0x0.DebugPtr;
  if (pAVar2 == (ANavigationData *)0x0) {
    bVar4 = param_1 == (ANavigationData *)0x0;
  }
  else {
    bVar4 = pAVar2 == param_1;
  }
  if ((!bVar4) && (pAVar2 != (ANavigationData *)0x0)) {
    pUVar3 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->MyNavData,pUVar3);
    if ((bVar4) &&
       (pAVar2 = (this->MyNavData).field0_0x0.DebugPtr, pAVar2 != (ANavigationData *)0x0)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pAVar2[1]._padding_,this);
    }
  }
  if (param_1 != (ANavigationData *)0x0) {
    pUVar3 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UCrowdManager>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &param_1[1]._padding_,(UCrowdManager *)&local_res8,(pmf_e992dfa7)this);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->MyNavData).field0_0x0.DebugPtr = param_1;
  if (FVisualLogger::bIsRecording != 0) {
    if (param_1 != (ANavigationData *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0,None);
    }
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogCrowdFollowing.field_0x4,Log,
               L"Setting cached nav data to %s");
    if ((param_1 != (ANavigationData *)0x0) &&
       (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1 != (ANavigationData *)0x0) || (param_2)) {
    dtFreeCrowd(this->DetourCrowd);
    this->DetourCrowd = (dtCrowd *)0x0;
    CreateCrowdManager(this);
  }
  return;
}

// SetOffmeshConnectionPruning @ 146fd2110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::SetOffmeshConnectionPruning(UCrowdManager *this,bool param_1)

{
  this->bPruneStartedOffmeshConnections = 0;
  *(uint *)&this->field_0x70 = *(uint *)&this->field_0x70 | (uint)param_1;
  if (this->DetourCrowd == (dtCrowd *)0x0) {
    return;
  }
  this->DetourCrowd->m_keepOffmeshConnections = !param_1;
  return;
}

// SetSingleAreaVisibilityOptimization @ 146fd25d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::SetSingleAreaVisibilityOptimization(UCrowdManager *this,bool param_1)

{
  this->bSingleAreaVisibilityOptimization = 0;
  *(uint *)&this->field_0x70 = *(uint *)&this->field_0x70 | (uint)param_1 * 2;
  if (this->DetourCrowd == (dtCrowd *)0x0) {
    return;
  }
  this->DetourCrowd->m_raycastSingleArea = param_1;
  return;
}

// StaticRegisterNativesUCrowdManager @ 146fd36c0

void __cdecl UCrowdManager::StaticRegisterNativesUCrowdManager(void)

{
  return;
}

// Tick @ 146fd8480

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::Tick(UCrowdManager *this,float param_1)

{
  TMap<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
  *pTVar1;
  int *piVar2;
  ulonglong uVar3;
  ushort uVar4;
  FName FVar5;
  longlong lVar6;
  longlong *plVar7;
  TAtomic<FMinimalName> TVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  undefined4 uVar16;
  TStatId TVar17;
  dtCrowdAgent *pdVar18;
  TVector<double> *pTVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepCorridorTime> FVar21;
  FThreadStats *pFVar22;
  FThreadStatsPool *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepProximityTime> FVar24;
  FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepNextPointTime> FVar25;
  FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepMovementTime> FVar26;
  longlong lVar27;
  UClass *pUVar28;
  undefined8 uVar29;
  longlong lVar30;
  uint uVar31;
  int iVar32;
  FNameEntryId FVar33;
  float fVar34;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  TVector<double>_u_0 local_118;
  undefined1 local_f8 [16];
  char *local_e8;
  FName local_d8;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  int iStack_bc;
  longlong local_b8;
  TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
  *local_a8;
  undefined2 local_a0;
  TIterator local_98;
  FName local_68;
  byte local_60;
  
  local_f8._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
  ;
  local_e8 = "void __cdecl UCrowdManager::Tick(float)";
  local_f8._0_4_ = 0xe9;
  local_f8._4_4_ = 2;
  TVar17 = FThreadSafeStaticStatInner<FStat_STAT_AI_Crowd_Tick,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_AI_Crowd_Tick,1> *)
                      &StatPtr_STAT_AI_Crowd_Tick);
  local_118._s_0.X = (double)local_f8._0_8_;
  local_118._s_0.Y = (double)local_f8._8_8_;
  local_118._s_0.Z = (double)local_e8;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_68,*(TStatIdData **)&(TVar17.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_118._s_0);
  pTVar1 = &this->ActiveAgents;
  iVar15 = *(int *)&(this->ActiveAgents).field_0x8 - *(int *)&(this->ActiveAgents).field_0x34;
  if ((iVar15 != 0) && (FThreadStats::bPrimaryEnable != false)) {
    TVar17 = FThreadSafeStaticStatInner<FStat_STAT_AI_Crowd_NumAgents,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_AI_Crowd_NumAgents,1> *)
                        &StatPtr_STAT_AI_Crowd_NumAgents);
    FVar5 = *(FName *)(TVar17.StatIdPtr)->Name;
    local_res8.s.LowPart = (DWORD)FVar5.ComparisonIndex.Value;
    local_res8.s.HighPart = FVar5.Number;
    FThreadStats::AddMessage<__int64>(FVar5,Add,(longlong)iVar15,false);
  }
  if ((this->DetourCrowd == (dtCrowd *)0x0) ||
     (iVar15 = dtCrowd::cacheActiveAgents(this->DetourCrowd), iVar15 == 0)) goto LAB_146fd956e;
  (**(code **)(((this->MyNavData).field0_0x0.DebugPtr)->_padding_ + 0x848))();
  TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_98,
             (TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
              *)pTVar1);
  unique0x10000fb4 = local_98._padding_;
  auStack_d0._8_8_ = local_98._padding_;
  iVar32 = 1;
  local_a0 = 0;
  local_d8.ComparisonIndex.Value = (undefined4)local_98._padding_;
  local_d8.Number = local_98._padding_._4_4_;
  auStack_d0._0_8_ = local_98._padding_;
  local_b8 = local_98._padding_;
  pTStack_b0 = local_98.Set;
  iVar15 = (int)((ulonglong)local_98._padding_ >> 0x20);
  local_a8 = (TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (iVar15 < *(int *)(local_98._padding_ + 0x18)) {
    do {
      lVar30 = (longlong)iVar15 * 0x38;
      lVar6 = *(longlong *)local_d8;
      iVar15 = *(int *)(lVar30 + 0x20 + lVar6);
      if (-1 < iVar15) {
        plVar7 = *(longlong **)(lVar30 + lVar6);
        pdVar18 = dtCrowd::getAgent(this->DetourCrowd,iVar15);
        fVar34 = (float)(**(code **)(*plVar7 + 0x28))(plVar7);
        (pdVar18->params).maxSpeed = (double)fVar34;
        pTVar19 = (TVector<double> *)(**(code **)(*plVar7 + 0x10))(plVar7,&local_98);
        Unreal2RecastPoint((TVector<double> *)local_f8,pTVar19);
        pTVar19 = (TVector<double> *)(**(code **)(*plVar7 + 0x18))(plVar7,&local_98);
        Unreal2RecastPoint((TVector<double> *)&local_118._s_0,pTVar19);
        pdVar18->npos[0] = (double)local_f8._0_8_;
        pdVar18->npos[1] = (double)local_f8._8_8_;
        pdVar18->npos[2] = (double)local_e8;
        pdVar18->vel[0] = local_118._s_0.X;
        pdVar18->vel[1] = local_118._s_0.Y;
        pdVar18->vel[2] = local_118._s_0.Z;
        if ((*(byte *)(lVar30 + 0x28 + lVar6) & 2) != 0) {
          fVar34 = *(float *)(lVar30 + 0x24 + lVar6) - param_1;
          *(float *)(lVar30 + 0x24 + lVar6) = fVar34;
          uVar4 = (pdVar18->params).updateFlags;
          if (fVar34 <= 0.0) {
            (pdVar18->params).updateFlags = uVar4 | 8;
            *(float *)(lVar30 + 0x24 + lVar6) = this->PathOptimizationInterval;
          }
          else {
            (pdVar18->params).updateFlags = uVar4 & 0xfff7;
          }
        }
      }
      uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
      iVar15 = iStack_bc;
    } while (iStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
    if (((char)local_a0 != '\0') && (local_a0._1_1_ != '\0')) {
      uVar31 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34;
      if (uVar31 < 4) {
        iVar15 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar31 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar15 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar31) && (local_a8->HashSize < iVar15)) || (iVar15 < local_a8->HashSize)) {
        local_a8->HashSize = iVar15;
        TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
        ::Rehash(local_a8);
      }
    }
  }
  uVar16 = 0;
  FVar21 = StatPtr_STAT_AI_Crowd_StepCorridorTime;
  if (StatPtr_STAT_AI_Crowd_StepCorridorTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepCorridorTime>)0x0) {
    pFVar20 = ::FName::FName(local_res18,"STAT_AI_Crowd_StepCorridorTime");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepCorridorTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_StepCorridorTime,
                        *pFVar20,L"Step: corridor update","STATGROUP_AICrowd","STATCAT_Advanced",
                        L"Crowd",true,true,ST_int64,true,false,MCR_Invalid);
  }
  uVar29 = *(undefined8 *)FVar21;
  local_118._s_0.X = 0.0;
  bVar10 = false;
  bVar9 = false;
  FVar33.Value = (uint)uVar29;
  uVar31 = SUB84(uVar29,4);
  if ((FVar33.Value == 0) && (uVar31 == 0)) {
LAB_146fd88f3:
    bVar11 = false;
    uVar29 = local_118._s_0.X;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar33.Value;
        local_res8.s.HighPart = uVar31;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
                   ,0x100);
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146fd88f3;
    local_res8.s.LowPart = FVar33.Value;
    local_res8.s.HighPart = uVar31;
    local_118._0_8_ = uVar29;
    FThreadStats::AddMessage((FName)uVar29,CycleScopeStart);
    bVar10 = false;
    bVar11 = true;
    uVar16 = local_118._0_4_;
  }
  dtCrowd::updateStepCorridor(this->DetourCrowd,(double)param_1,this->DetourAgentDebug);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar11) && ((FName)uVar29 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar22 == (FThreadStats *)0x0) {
      pFVar23 = FThreadStatsPool::Get();
      pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
    }
    if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
      local_f8._8_8_ = CONCAT44(SUB84(uVar29,4),uVar16) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_res8);
      local_f8._4_4_ = 0;
      local_f8._0_4_ = local_res8.s.LowPart;
      FThreadStats::AddStatMessage(pFVar22,(FStatMessage *)local_f8);
      piVar2 = &pFVar22->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar22,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar22,false,false);
      }
    }
  }
  if (this->bAllowPathReplan != 0) {
    local_f8._8_8_ =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
    ;
    local_f8._0_4_ = 0x107;
    local_f8._4_4_ = 5;
    local_e8 = "void __cdecl UCrowdManager::Tick(float)";
    TVar17 = FThreadSafeStaticStatInner<FStat_STAT_AI_Crowd_StepPathsTime,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_AI_Crowd_StepPathsTime,1> *)
                        &StatPtr_STAT_AI_Crowd_StepPathsTime);
    local_98._padding_ = local_f8._0_8_;
    local_98._padding_ = local_f8._8_8_;
    local_98._padding_ = (longlong)local_e8;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_118._s_0,*(TStatIdData **)&(TVar17.StatIdPtr)->Name,
               CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_98);
    dtCrowd::updateStepPaths(this->DetourCrowd,(double)param_1,this->DetourAgentDebug);
    if (((ulonglong)local_118._s_0.Y & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    uVar14 = local_118._8_1_;
    if ((local_118._8_1_ & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
      uVar14 = local_118._8_1_;
    }
    if ((uVar14 & 4) != 0) {
      FThreadStats::AddMessage((FName)local_118._s_0.X,CycleScopeEnd);
    }
  }
  FVar24 = StatPtr_STAT_AI_Crowd_StepProximityTime;
  if (StatPtr_STAT_AI_Crowd_StepProximityTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepProximityTime>)0x0) {
    pFVar20 = ::FName::FName(local_res18,"STAT_AI_Crowd_StepProximityTime");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepProximityTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_StepProximityTime,
                        *pFVar20,L"Step: proximity","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  uVar29 = *(undefined8 *)FVar24;
  local_118._s_0.X = 0.0;
  bVar10 = false;
  bVar9 = false;
  uVar16 = 0;
  FVar33.Value = (uint)uVar29;
  uVar31 = SUB84(uVar29,4);
  if ((FVar33.Value == 0) && (uVar31 == 0)) {
LAB_146fd8bd2:
    bVar11 = false;
    uVar29 = local_118._s_0.X;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar33.Value;
        local_res8.s.HighPart = uVar31;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
                   ,0x10b);
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146fd8bd2;
    local_res8.s.LowPart = FVar33.Value;
    local_res8.s.HighPart = uVar31;
    local_118._0_8_ = uVar29;
    FThreadStats::AddMessage((FName)uVar29,CycleScopeStart);
    bVar10 = false;
    bVar11 = true;
    uVar16 = local_118._0_4_;
  }
  dtCrowd::updateStepProximityData(this->DetourCrowd,(double)param_1,this->DetourAgentDebug);
  (**(code **)(this->_padding_ + 0x2e8))(this);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && ((FName)uVar29 != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar22 == (FThreadStats *)0x0) {
      pFVar23 = FThreadStatsPool::Get();
      pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
    }
    if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
      local_f8._8_8_ = CONCAT44(SUB84(uVar29,4),uVar16) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_res8);
      local_f8._4_4_ = 0;
      local_f8._0_4_ = local_res8.s.LowPart;
      FThreadStats::AddStatMessage(pFVar22,(FStatMessage *)local_f8);
      piVar2 = &pFVar22->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar22,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar22,false,false);
      }
    }
  }
  FVar25 = StatPtr_STAT_AI_Crowd_StepNextPointTime;
  if (StatPtr_STAT_AI_Crowd_StepNextPointTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepNextPointTime>)0x0) {
    pFVar20 = ::FName::FName(local_res18,"STAT_AI_Crowd_StepNextPointTime");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepNextPointTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_StepNextPointTime,
                        *pFVar20,L"Step: next point","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  uVar29 = *(undefined8 *)FVar25;
  local_118._s_0.X = 0.0;
  bVar9 = false;
  bVar10 = false;
  uVar16 = 0;
  FVar33.Value = (uint)uVar29;
  uVar31 = SUB84(uVar29,4);
  if ((FVar33.Value == 0) && (uVar31 == 0)) {
LAB_146fd8dff:
    bVar11 = false;
    uVar29 = local_118._s_0.X;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar33.Value;
        local_res8.s.HighPart = uVar31;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
                   ,0x110);
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146fd8dff;
    local_res8.s.LowPart = FVar33.Value;
    local_res8.s.HighPart = uVar31;
    local_118._0_8_ = uVar29;
    FThreadStats::AddMessage((FName)uVar29,CycleScopeStart);
    bVar11 = true;
    uVar16 = local_118._0_4_;
  }
  dtCrowd::updateStepNextMovePoint(this->DetourCrowd,(double)param_1,this->DetourAgentDebug);
  (**(code **)(this->_padding_ + 0x2f0))(this);
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar11) && ((FName)uVar29 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar22 == (FThreadStats *)0x0) {
      pFVar23 = FThreadStatsPool::Get();
      pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
    }
    if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
      local_f8._8_8_ = CONCAT44(SUB84(uVar29,4),uVar16) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_res8);
      local_f8._0_8_ = ZEXT48(local_res8.s.LowPart);
      FThreadStats::AddStatMessage(pFVar22,(FStatMessage *)local_f8);
      piVar2 = &pFVar22->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar22,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar22,false,false);
      }
    }
  }
  local_f8._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
  ;
  local_e8 = "void __cdecl UCrowdManager::Tick(float)";
  local_f8._0_8_ = 1.06099790916825e-313;
  TVar17 = FThreadSafeStaticStatInner<FStat_STAT_AI_Crowd_StepSteeringTime,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_AI_Crowd_StepSteeringTime,1> *)
                      &StatPtr_STAT_AI_Crowd_StepSteeringTime);
  local_98._padding_ = local_f8._0_8_;
  local_98._padding_ = local_f8._8_8_;
  local_98._padding_ = (longlong)local_e8;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_118._s_0,*(TStatIdData **)&(TVar17.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_98);
  dtCrowd::updateStepSteering(this->DetourCrowd,(double)param_1,this->DetourAgentDebug);
  if (((ulonglong)local_118._s_0.Y & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  uVar14 = local_118._8_1_;
  if ((local_118._8_1_ & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
    uVar14 = local_118._8_1_;
  }
  if ((uVar14 & 4) != 0) {
    FThreadStats::AddMessage((FName)local_118._s_0.X,CycleScopeEnd);
  }
  local_f8._0_8_ = 1.06099790936588e-313;
  local_f8._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
  ;
  local_e8 = "void __cdecl UCrowdManager::Tick(float)";
  TVar17 = FThreadSafeStaticStatInner<FStat_STAT_AI_Crowd_StepAvoidanceTime,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_AI_Crowd_StepAvoidanceTime,1> *)
                      &StatPtr_STAT_AI_Crowd_StepAvoidanceTime);
  local_98._padding_ = local_f8._0_8_;
  local_98._padding_ = local_f8._8_8_;
  local_98._padding_ = (longlong)local_e8;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_118._s_0,*(TStatIdData **)&(TVar17.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_98);
  dtCrowd::updateStepAvoidance(this->DetourCrowd,(double)param_1,this->DetourAgentDebug);
  if (((ulonglong)local_118._s_0.Y & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  uVar14 = local_118._8_1_;
  if ((local_118._8_1_ & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
    uVar14 = local_118._8_1_;
  }
  if ((uVar14 & 4) != 0) {
    FThreadStats::AddMessage((FName)local_118._s_0.X,CycleScopeEnd);
  }
  if (this->bResolveCollisions != 0) {
    local_f8._0_8_ = 1.06099790961291e-313;
    local_f8._8_8_ =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
    ;
    local_e8 = "void __cdecl UCrowdManager::Tick(float)";
    TVar17 = FThreadSafeStaticStatInner<FStat_STAT_AI_Crowd_StepCollisionsTime,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_AI_Crowd_StepCollisionsTime,1> *)
                        &StatPtr_STAT_AI_Crowd_StepCollisionsTime);
    local_98._padding_ = local_f8._0_8_;
    local_98._padding_ = local_f8._8_8_;
    local_98._padding_ = (longlong)local_e8;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_118._s_0,*(TStatIdData **)&(TVar17.StatIdPtr)->Name,
               CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_98);
    dtCrowd::updateStepMove(this->DetourCrowd,(double)param_1,this->DetourAgentDebug);
    if (((ulonglong)local_118._s_0.Y & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    uVar14 = local_118._8_1_;
    if ((local_118._8_1_ & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
      uVar14 = local_118._8_1_;
    }
    if ((uVar14 & 4) != 0) {
      FThreadStats::AddMessage((FName)local_118._s_0.X,CycleScopeEnd);
    }
  }
  local_f8._0_4_ = 0x122;
  local_f8._4_4_ = 5;
  local_f8._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
  ;
  local_e8 = "void __cdecl UCrowdManager::Tick(float)";
  TVar17 = FThreadSafeStaticStatInner<FStat_STAT_AI_Crowd_StepComponentsTime,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_AI_Crowd_StepComponentsTime,1> *)
                      &StatPtr_STAT_AI_Crowd_StepComponentsTime);
  local_98._padding_ = local_f8._0_8_;
  local_98._padding_ = local_f8._8_8_;
  local_98._padding_ = (longlong)local_e8;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_118._s_0,*(TStatIdData **)&(TVar17.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_98);
  UpdateAgentPaths(this);
  if (((ulonglong)local_118._s_0.Y & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  uVar14 = local_118._8_1_;
  if ((local_118._8_1_ & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
    uVar14 = local_118._8_1_;
  }
  if ((uVar14 & 4) != 0) {
    FThreadStats::AddMessage((FName)local_118._s_0.X,CycleScopeEnd);
  }
  TVar17 = FThreadSafeStaticStatInner<FStat_STAT_AI_Crowd_StepNavLinkTime,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_AI_Crowd_StepNavLinkTime,1> *)
                      &StatPtr_STAT_AI_Crowd_StepNavLinkTime);
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar13 = false;
  local_118._s_0.X = 0.0;
  TVar8 = (TVar17.StatIdPtr)->Name;
  uVar29 = *(undefined8 *)TVar8;
  FVar33.Value = (uint)uVar29;
  uVar31 = SUB84(uVar29,4);
  if ((FVar33.Value == 0) && (uVar31 == 0)) {
LAB_146fd9266:
    bVar12 = false;
    uVar29 = local_118._s_0.X;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)TVar8 + 0x10));
      bVar9 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar33.Value;
        local_res8.s.HighPart = uVar31;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)TVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
                   ,0x126);
        bVar9 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146fd9266;
    local_res8.s.LowPart = FVar33.Value;
    local_res8.s.HighPart = uVar31;
    local_118._0_8_ = uVar29;
    FThreadStats::AddMessage((FName)uVar29,CycleScopeStart);
    bVar12 = true;
  }
  dtCrowd::updateStepOffMeshVelocity(this->DetourCrowd,(double)param_1,this->DetourAgentDebug);
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage((FName)uVar29,CycleScopeEnd);
  }
  FVar26 = StatPtr_STAT_AI_Crowd_StepMovementTime;
  if (StatPtr_STAT_AI_Crowd_StepMovementTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepMovementTime>)0x0) {
    pFVar20 = ::FName::FName(local_res18,"STAT_AI_Crowd_StepMovementTime");
    FVar26 = (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_StepMovementTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_StepMovementTime,
                        *pFVar20,L"Step: movement","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  uVar29 = *(undefined8 *)FVar26;
  local_118._s_0.X = 0.0;
  FVar33.Value = (uint)uVar29;
  uVar31 = SUB84(uVar29,4);
  if ((FVar33.Value == 0) && (uVar31 == 0)) {
LAB_146fd93d3:
    bVar9 = false;
    uVar29 = local_118._s_0.X;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar26 + 0x10));
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar33.Value;
        local_res8.s.HighPart = uVar31;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
                   ,300);
        bVar11 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146fd93d3;
    local_res8.s.LowPart = FVar33.Value;
    local_res8.s.HighPart = uVar31;
    FThreadStats::AddMessage((FName)uVar29,CycleScopeStart);
    bVar11 = false;
    bVar9 = true;
  }
  pTVar1 = &this->ActiveAgents;
  TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_98,
             (TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
              *)pTVar1);
  unique0x10000fc4 = local_98._padding_;
  auStack_d0._8_8_ = local_98._padding_;
  local_a0 = 0;
  local_d8.ComparisonIndex.Value = (undefined4)local_98._padding_;
  local_d8.Number = local_98._padding_._4_4_;
  auStack_d0._0_8_ = local_98._padding_;
  local_b8 = local_98._padding_;
  pTStack_b0 = local_98.Set;
  iVar15 = (int)((ulonglong)local_98._padding_ >> 0x20);
  local_a8 = (TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (iVar15 < *(int *)(local_98._padding_ + 0x18)) {
    do {
      lVar30 = (longlong)iVar15 * 0x38;
      lVar6 = *(longlong *)local_d8;
      if (((((*(byte *)(lVar30 + 0x28 + lVar6) & 1) != 0) && (-1 < *(int *)(lVar30 + 0x20 + lVar6)))
          && (*(longlong **)(lVar30 + lVar6) != (longlong *)0x0)) &&
         (lVar27 = (**(code **)(**(longlong **)(lVar30 + lVar6) + 8))(), lVar27 != 0)) {
        pUVar28 = UCrowdFollowingComponent::StaticClass();
        iVar15 = (int)pUVar28->_padding_;
        if (((iVar15 <= *(int *)(*(longlong *)(lVar27 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) + (longlong)iVar15 * 8) ==
             &pUVar28->_padding_)) && (*(char *)(lVar27 + 0x35c) == '\0')) {
          (**(code **)(this->_padding_ + 0x2f8))(this,lVar27,*(undefined4 *)(lVar30 + 0x20 + lVar6))
          ;
        }
      }
      uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
      iVar15 = iStack_bc;
    } while (iStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
    if (((char)local_a0 != '\0') && (local_a0._1_1_ != '\0')) {
      uVar31 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34;
      if (3 < uVar31) {
        uVar3 = (ulonglong)((uVar31 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar32 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar31) && (local_a8->HashSize < iVar32)) || (iVar32 < local_a8->HashSize)) {
        local_a8->HashSize = iVar32;
        TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
        ::Rehash(local_a8);
      }
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage((FName)uVar29,CycleScopeEnd);
  }
  (**(code **)(((this->MyNavData).field0_0x0.DebugPtr)->_padding_ + 0x850))();
LAB_146fd956e:
  if ((local_60 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_60 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_60 & 4) != 0) {
    FThreadStats::AddMessage(local_68,CycleScopeEnd);
  }
  return;
}

// UnregisterAgent @ 146fda7b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::UnregisterAgent(UCrowdManager *this,ICrowdAgentInterface *param_1)

{
  FCrowdAgentData *pFVar1;
  uint uVar2;
  ICrowdAgentInterface *local_res8;
  
  pFVar1 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
           ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                   *)&this->ActiveAgents,param_1);
  if ((this->DetourCrowd != (dtCrowd *)0x0) && (pFVar1 != (FCrowdAgentData *)0x0)) {
    RemoveAgent(this,param_1,pFVar1);
  }
  if (*(int *)&(this->ActiveAgents).field_0x8 != *(int *)&(this->ActiveAgents).field_0x34) {
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    local_res8 = param_1;
    TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
    ::RemoveImpl<ICrowdAgentInterface_const_*>
              ((TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
                *)&this->ActiveAgents,uVar2 >> 0x10 ^ uVar2,&local_res8);
  }
  return;
}

// UpdateAgentParams @ 146fdec90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::UpdateAgentParams(UCrowdManager *this,ICrowdAgentInterface *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FSharedReferencer<1> FVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime> FVar7;
  FCrowdAgentData *pFVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_a8;
  dtCrowdAgentParams local_98;
  
  FVar12.Value = 0;
  FVar7 = StatPtr_STAT_AI_Crowd_AgentUpdateTime;
  if (StatPtr_STAT_AI_Crowd_AgentUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)0x0) {
    pFVar6 = ::FName::FName(&local_res18,"STAT_AI_Crowd_AgentUpdateTime");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_AgentUpdateTime,*pFVar6,
                       L"Agent Update Time","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
                   ,0x184);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_146fdedfd;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_146fdedfd:
  pFVar8 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
           ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                   *)&this->ActiveAgents,param_1);
  if (((this->DetourCrowd != (dtCrowd *)0x0) && (pFVar8 != (FCrowdAgentData *)0x0)) &&
     (-1 < pFVar8->AgentIndex)) {
    local_98.linkFilter.Object = (dtQuerySpecialLinkFilter *)0x0;
    local_98.linkFilter.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    GetAgentParams(this,param_1,&local_98);
    FVar5.ReferenceController = local_98.linkFilter.SharedReferenceCount.ReferenceController;
    local_98.linkFilter.SharedReferenceCount.ReferenceController =
         (pFVar8->LinkFilter).SharedReferenceCount.ReferenceController;
    local_98.linkFilter.Object = (pFVar8->LinkFilter).Object;
    if (local_98.linkFilter.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.linkFilter.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.linkFilter.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    *(uint *)&pFVar8->field_0x20 =
         *(uint *)&pFVar8->field_0x20 ^
         ((uint)local_98._100_4_ >> 2 ^ *(uint *)&pFVar8->field_0x20) & 2;
    dtCrowd::updateAgentParameters(this->DetourCrowd,pFVar8->AgentIndex,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.linkFilter.SharedReferenceCount.ReferenceController);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a8.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_a8.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_a8);
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

// UpdateAgentPaths @ 146fdefc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::UpdateAgentPaths(UCrowdManager *this)

{
  ulonglong uVar1;
  ARecastNavMesh *this_00;
  dtCrowdAgentAnimation *pdVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  ulong64 uVar10;
  UNavigationSystemV1 *local_res10;
  FNavLinkId local_res20;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  int iStack_bc;
  longlong local_b8;
  TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
  *local_a8;
  undefined2 local_a0;
  INavLinkCustomInterface *local_98;
  dtCrowdAgent *local_90;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
  *pTStack_60;
  
  local_res10 = (UNavigationSystemV1 *)this->_padding_;
  if (local_res10 != (UNavigationSystemV1 *)0x0) {
    pUVar6 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(*(longlong *)&local_res10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res10->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
        &pUVar6->_padding_)) goto LAB_146fdf011;
  }
  local_res10 = (UNavigationSystemV1 *)0x0;
LAB_146fdf011:
  if ((this->MyNavData).field0_0x0.DebugPtr != (ANavigationData *)0x0) {
    pUVar6 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->MyNavData,pUVar6);
    if ((bVar4) &&
       (this_00 = (ARecastNavMesh *)(this->MyNavData).field0_0x0.DebugPtr,
       this_00 != (ARecastNavMesh *)0x0)) {
      pdVar2 = this->DetourCrowd->m_agentAnims;
      TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_88,
                 (TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
                  *)&this->ActiveAgents);
      local_a0 = 0;
      stack0xffffffffffffff38 = local_88._16_16_;
      auStack_d0._0_8_ = local_88._8_8_;
      local_b8 = local_68;
      pTStack_b0 = pTStack_60;
      iVar5 = local_88._28_4_;
      local_a8 = (TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
                  *)&this->ActiveAgents;
      if (iVar5 < *(int *)(local_88._16_8_ + 0x18)) {
        do {
          lVar8 = (longlong)iVar5 * 0x38;
          lVar3 = *(longlong *)local_88._0_8_;
          if (((*(byte *)(lVar8 + 0x28 + lVar3) & 1) != 0) &&
             (iVar5 = *(int *)(lVar8 + 0x20 + lVar3), -1 < iVar5)) {
            plVar7 = (longlong *)0x0;
            local_90 = dtCrowd::getAgent(this->DetourCrowd,iVar5);
            if ((local_90->corridor).m_npath == 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = *(local_90->corridor).m_path;
            }
            iVar5 = *(int *)(lVar8 + 0x20 + lVar3);
            if ((pdVar2[iVar5].active != '\0') &&
               (uVar10 = pdVar2[iVar5].polyRef, pdVar2[iVar5].t == 0.0)) {
              ARecastNavMesh::GetNavLinkUserId(this_00,(ulong64)&local_res20);
              local_98 = UNavigationSystemV1::GetCustomLink(local_res10,local_res20);
              if (local_98 != (INavLinkCustomInterface *)0x0) {
                Recast2UnrealPoint((TVector<double> *)local_88,pdVar2[iVar5].endPos);
                dtCrowd::setAgentWaiting(this->DetourCrowd,*(int *)(lVar8 + 0x20 + lVar3));
                dtCrowd::resetAgentVelocity(this->DetourCrowd,*(int *)(lVar8 + 0x20 + lVar3));
                if ((*(longlong **)(lVar8 + *(longlong *)local_88._0_8_) != (longlong *)0x0) &&
                   (plVar7 = (longlong *)
                             (**(code **)(**(longlong **)(lVar8 + *(longlong *)local_88._0_8_) + 8))
                                       (), plVar7 != (longlong *)0x0)) {
                  pUVar6 = UCrowdFollowingComponent::StaticClass();
                  iVar5 = (int)pUVar6->_padding_;
                  if ((iVar5 <= *(int *)(plVar7[2] + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)(plVar7[2] + 0x30) + (longlong)iVar5 * 8) ==
                      &pUVar6->_padding_)) {
                    (**(code **)(*plVar7 + 0x5d8))(plVar7,local_98,local_88);
                    goto LAB_146fdf207;
                  }
                }
                plVar7 = (longlong *)0x0;
              }
            }
LAB_146fdf207:
            if (uVar10 != *(ulong64 *)(lVar8 + 0x18 + lVar3)) {
              if (plVar7 == (longlong *)0x0) {
                if ((*(longlong **)(lVar8 + *(longlong *)local_88._0_8_) != (longlong *)0x0) &&
                   (plVar7 = (longlong *)
                             (**(code **)(**(longlong **)(lVar8 + *(longlong *)local_88._0_8_) + 8))
                                       (), plVar7 != (longlong *)0x0)) {
                  pUVar6 = UCrowdFollowingComponent::StaticClass();
                  iVar5 = (int)pUVar6->_padding_;
                  if ((iVar5 <= *(int *)(plVar7[2] + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)(plVar7[2] + 0x30) + (longlong)iVar5 * 8) ==
                      &pUVar6->_padding_)) goto LAB_146fdf251;
                }
              }
              else {
LAB_146fdf251:
                (**(code **)(*plVar7 + 0x670))
                          (plVar7,uVar10,*(undefined8 *)(lVar8 + 0x18 + lVar3),
                           (local_90->corridor).m_npath);
                *(ulong64 *)(lVar8 + 0x18 + lVar3) = uVar10;
              }
            }
          }
          uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
          iVar5 = iStack_bc;
        } while (iStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
        if (((char)local_a0 != '\0') && (local_a0._1_1_ != '\0')) {
          uVar9 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34
          ;
          if (uVar9 < 4) {
            iVar5 = 1;
          }
          else {
            uVar1 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
            lVar3 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            iVar5 = 1 << ((byte)lVar3 & 0x1f);
          }
          if (((0 < (int)uVar9) && (local_a8->HashSize < iVar5)) || (iVar5 < local_a8->HashSize)) {
            local_a8->HashSize = iVar5;
            TSet<TTuple<ICrowdAgentInterface_*,FCrowdAgentData>,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>,FDefaultSetAllocator>
            ::Rehash(local_a8);
          }
        }
      }
    }
  }
  return;
}

// UpdateAgentState @ 146fdf330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::UpdateAgentState(UCrowdManager *this,ICrowdAgentInterface *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime> FVar6;
  FCrowdAgentData *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_38;
  
  FVar11.Value = 0;
  FVar6 = StatPtr_STAT_AI_Crowd_AgentUpdateTime;
  if (StatPtr_STAT_AI_Crowd_AgentUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)0x0) {
    pFVar5 = ::FName::FName(local_res18,"STAT_AI_Crowd_AgentUpdateTime");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_AI_Crowd_AgentUpdateTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Crowd_AgentUpdateTime,*pFVar5,
                       L"Agent Update Time","STATGROUP_AICrowd","STATCAT_Advanced",L"Crowd",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\CrowdManager.cpp"
                   ,0x198);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_146fdf48f;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_146fdf48f:
  pFVar7 = TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
           ::Find((TMapBase<ICrowdAgentInterface_*,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface_*,FCrowdAgentData,0>_>
                   *)&this->ActiveAgents,param_1);
  if (((this->DetourCrowd != (dtCrowd *)0x0) && (pFVar7 != (FCrowdAgentData *)0x0)) &&
     (-1 < pFVar7->AgentIndex)) {
    dtCrowd::updateAgentState(this->DetourCrowd,pFVar7->AgentIndex,false);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar10 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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

// UpdateAvoidanceConfig @ 146fdf5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::UpdateAvoidanceConfig(UCrowdManager *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  dtObstacleAvoidanceParams local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((this->DetourCrowd != (dtCrowd *)0x0) && (uVar6 = 0, 0 < (this->AvoidanceConfig).ArrayNum)) {
    lVar7 = 0;
    do {
      iVar1 = (this->AvoidanceConfig).ArrayNum;
      uVar5 = 0;
      if ((int)uVar6 < iVar1) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_58 = (longlong)(int)uVar6;
        local_50 = (longlong)iVar1;
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
      pFVar2 = (this->AvoidanceConfig).AllocatorInstance.Data;
      local_48.velBias = (double)*(float *)(pFVar2 + lVar7);
      local_48.weightDesVel = (double)*(float *)(pFVar2 + lVar7 + 4);
      local_48.weightCurVel = (double)*(float *)(pFVar2 + lVar7 + 8);
      local_48.weightSide = (double)*(float *)(pFVar2 + lVar7 + 0xc);
      local_48.weightToi = (double)*(float *)(pFVar2 + lVar7 + 0x10);
      local_48.horizTime = (double)*(float *)(pFVar2 + lVar7 + 0x14);
      local_48.patternIdx = *(uchar *)(pFVar2 + lVar7 + 0x18);
      local_48.adaptiveDivs = *(uchar *)(pFVar2 + lVar7 + 0x19);
      local_48.adaptiveRings = *(uchar *)(pFVar2 + lVar7 + 0x1a);
      local_48.adaptiveDepth = *(uchar *)(pFVar2 + lVar7 + 0x1b);
      dtCrowd::setObstacleAvoidanceParams(this->DetourCrowd,uVar6,&local_48);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x1c;
    } while ((int)uVar6 < (this->AvoidanceConfig).ArrayNum);
  }
  return;
}

// UpdateNavData @ 146fe0aa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCrowdManager::UpdateNavData(UCrowdManager *this)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  ANavigationData *pAVar4;
  char cVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  if (((this->MyNavData).field0_0x0.DebugPtr == (ANavigationData *)0x0) &&
     (lVar3 = this->_padding_, lVar3 != 0)) {
    pUVar6 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar6->_padding_)) {
      puVar7 = *(undefined8 **)(lVar3 + 0xe0);
      iVar2 = *(int *)(lVar3 + 0xe8);
      puVar1 = puVar7 + iVar2;
      while( true ) {
        if (*(int *)(lVar3 + 0xe8) != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<ANavigationData>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (puVar7 == puVar1) {
          return;
        }
        pAVar4 = (ANavigationData *)*puVar7;
        if ((pAVar4 != (ANavigationData *)0x0) &&
           (cVar5 = (**(code **)(this->_padding_ + 0x2d0))(this,pAVar4), cVar5 != '\0')) break;
        puVar7 = puVar7 + 1;
      }
      SetNavData(this,pAVar4,true);
    }
  }
  return;
}

// UpdateSelectedDebug @ 146fe2ce0

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
UCrowdManager::UpdateSelectedDebug(UCrowdManager *this,ICrowdAgentInterface *param_1,int param_2)

{
  return;
}

