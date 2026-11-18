// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 43

// StaticClass @ 1493797f0

UClass * __cdecl UNiagaraScript::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraScript.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraScript",
               &Z_Registration_Info_UClass_UNiagaraScript.InnerSingleton,
               StaticRegisterNativesUNiagaraScript,0x350,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraScript>,InternalVTableHelperCtorCaller<UNiagaraScript>,
               local_res8,UNiagaraScriptBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraScript.InnerSingleton;
}

// UNiagaraScript @ 149388df0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraScript * __thiscall
UNiagaraScript::UNiagaraScript(UNiagaraScript *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UNiagaraScriptBase::UNiagaraScriptBase((UNiagaraScriptBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UNiagaraScriptBase__;
  (this->UsageId).A = 0;
  (this->UsageId).B = 0;
  this->_padding_ = (longlong)&_vftable__for__FNiagaraVersionedObject__;
  (this->UsageId).C = 0;
  (this->UsageId).D = 0;
  FNiagaraParameterStore::FNiagaraParameterStore(&this->RapidIterationParameters);
  FNiagaraParameterStore::FNiagaraParameterStore
            ((FNiagaraParameterStore *)&this->ScriptExecutionParamStore);
  (this->ScriptExecutionParamStore).bInitialized = '\0';
  (this->ScriptExecutionParamStore)._padding_ =
       (longlong)&___7FNiagaraScriptExecutionParameterStore__6B_;
  (this->ScriptExecutionParamStore).ParameterSize = 0;
  (this->ScriptExecutionBoundParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScriptExecutionBoundParameters).ArrayNum = 0;
  (this->ScriptExecutionBoundParameters).ArrayMax = 0;
  (this->CachedScriptVMId).CompilerVersionID.A = 0;
  (this->CachedScriptVMId).CompilerVersionID.B = 0;
  (this->CachedScriptVMId).CompilerVersionID.C = 0;
  (this->CachedScriptVMId).CompilerVersionID.D = 0;
  (this->CachedScriptVMId).InterpolatedSpawnMode = NoInterpolation;
  (this->CachedScriptVMId).BaseScriptCompileHash.DataHash.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedScriptVMId).BaseScriptCompileHash.DataHash.ArrayNum = 0;
  (this->CachedScriptVMId).BaseScriptCompileHash.DataHash.ArrayMax = 0;
  (this->ScriptResource).Object = (FNiagaraShaderScript *)0x0;
  (this->ScriptResource).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->StatScopesIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatScopesIDs).ArrayNum = 0;
  (this->StatScopesIDs).ArrayMax = 0;
  FNiagaraVMExecutableData::FNiagaraVMExecutableData(&this->CachedScriptVM);
  (this->CachedParameterCollectionReferences).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedParameterCollectionReferences).ArrayNum = 0;
  (this->CachedParameterCollectionReferences).ArrayMax = 0;
  (this->ResolvedDataInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolvedDataInterfaces).ArrayNum = 0;
  (this->ResolvedDataInterfaces).ArrayMax = 0;
  (this->ResolvedUserDataInterfaceBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolvedUserDataInterfaceBindings).ArrayNum = 0;
  (this->ResolvedUserDataInterfaceBindings).ArrayMax = 0;
  (this->ResolvedUObjectInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolvedUObjectInfos).ArrayNum = 0;
  (this->ResolvedUObjectInfos).ArrayMax = 0;
  this->ReleasedByRT = (FThreadSafeBool)0x0;
  return this;
}

// UNiagaraScript @ 149388f10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraScript * __thiscall
UNiagaraScript::UNiagaraScript(UNiagaraScript *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UNiagaraScriptBase::UNiagaraScriptBase((UNiagaraScriptBase *)this,param_1);
  this->Usage = Function;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraScriptBase__;
  this->_padding_ = (longlong)&_vftable__for__FNiagaraVersionedObject__;
  (this->UsageId).A = 0;
  (this->UsageId).B = 0;
  (this->UsageId).C = 0;
  (this->UsageId).D = 0;
  FNiagaraParameterStore::FNiagaraParameterStore(&this->RapidIterationParameters);
  FNiagaraParameterStore::FNiagaraParameterStore
            ((FNiagaraParameterStore *)&this->ScriptExecutionParamStore);
  (this->ScriptExecutionParamStore).bInitialized = '\0';
  (this->ScriptExecutionParamStore)._padding_ =
       (longlong)&___7FNiagaraScriptExecutionParameterStore__6B_;
  (this->ScriptExecutionParamStore).ParameterSize = 0;
  (this->ScriptExecutionBoundParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScriptExecutionBoundParameters).ArrayNum = 0;
  (this->ScriptExecutionBoundParameters).ArrayMax = 0;
  (this->CachedScriptVMId).CompilerVersionID.A = 0;
  (this->CachedScriptVMId).CompilerVersionID.B = 0;
  (this->CachedScriptVMId).CompilerVersionID.C = 0;
  (this->CachedScriptVMId).CompilerVersionID.D = 0;
  (this->CachedScriptVMId).InterpolatedSpawnMode = NoInterpolation;
  (this->CachedScriptVMId).BaseScriptCompileHash.DataHash.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedScriptVMId).BaseScriptCompileHash.DataHash.ArrayNum = 0;
  (this->CachedScriptVMId).BaseScriptCompileHash.DataHash.ArrayMax = 0;
  (this->ScriptResource).Object = (FNiagaraShaderScript *)0x0;
  (this->ScriptResource).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->StatScopesIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatScopesIDs).ArrayNum = 0;
  (this->StatScopesIDs).ArrayMax = 0;
  FNiagaraVMExecutableData::FNiagaraVMExecutableData(&this->CachedScriptVM);
  (this->CachedParameterCollectionReferences).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedParameterCollectionReferences).ArrayNum = 0;
  (this->CachedParameterCollectionReferences).ArrayMax = 0;
  (this->ResolvedDataInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolvedDataInterfaces).ArrayNum = 0;
  (this->ResolvedDataInterfaces).ArrayMax = 0;
  (this->ResolvedUserDataInterfaceBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolvedUserDataInterfaceBindings).ArrayNum = 0;
  (this->ResolvedUserDataInterfaceBindings).ArrayMax = 0;
  (this->ResolvedUObjectInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolvedUObjectInfos).ArrayNum = 0;
  (this->ResolvedUObjectInfos).ArrayMax = 0;
  this->ReleasedByRT = (FThreadSafeBool)0x0;
  return this;
}

// UNiagaraScript @ 149389030

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraScript * __thiscall UNiagaraScript::UNiagaraScript(UNiagaraScript *this)

{
  undefined1 *puVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UNiagaraScriptBase::UNiagaraScriptBase((UNiagaraScriptBase *)this,pFVar2);
  this->_padding_ = (longlong)&_vftable__for__UNiagaraScriptBase__;
  (this->UsageId).A = 0;
  (this->UsageId).B = 0;
  this->_padding_ = (longlong)&_vftable__for__FNiagaraVersionedObject__;
  (this->UsageId).C = 0;
  (this->UsageId).D = 0;
  FNiagaraParameterStore::FNiagaraParameterStore(&this->RapidIterationParameters);
  FNiagaraParameterStore::FNiagaraParameterStore
            ((FNiagaraParameterStore *)&this->ScriptExecutionParamStore);
  (this->ScriptExecutionParamStore).bInitialized = '\0';
  (this->ScriptExecutionParamStore)._padding_ =
       (longlong)&___7FNiagaraScriptExecutionParameterStore__6B_;
  (this->ScriptExecutionParamStore).ParameterSize = 0;
  (this->ScriptExecutionBoundParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScriptExecutionBoundParameters).ArrayNum = 0;
  (this->ScriptExecutionBoundParameters).ArrayMax = 0;
  (this->CachedScriptVMId).CompilerVersionID.A = 0;
  (this->CachedScriptVMId).CompilerVersionID.B = 0;
  (this->CachedScriptVMId).CompilerVersionID.C = 0;
  (this->CachedScriptVMId).CompilerVersionID.D = 0;
  (this->CachedScriptVMId).InterpolatedSpawnMode = NoInterpolation;
  (this->CachedScriptVMId).BaseScriptCompileHash.DataHash.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedScriptVMId).BaseScriptCompileHash.DataHash.ArrayNum = 0;
  (this->CachedScriptVMId).BaseScriptCompileHash.DataHash.ArrayMax = 0;
  (this->ScriptResource).Object = (FNiagaraShaderScript *)0x0;
  (this->ScriptResource).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->StatScopesIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatScopesIDs).ArrayNum = 0;
  (this->StatScopesIDs).ArrayMax = 0;
  FNiagaraVMExecutableData::FNiagaraVMExecutableData(&this->CachedScriptVM);
  (this->CachedParameterCollectionReferences).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedParameterCollectionReferences).ArrayNum = 0;
  (this->CachedParameterCollectionReferences).ArrayMax = 0;
  (this->ResolvedDataInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolvedDataInterfaces).ArrayNum = 0;
  (this->ResolvedDataInterfaces).ArrayMax = 0;
  (this->ResolvedUserDataInterfaceBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolvedUserDataInterfaceBindings).ArrayNum = 0;
  (this->ResolvedUserDataInterfaceBindings).ArrayMax = 0;
  (this->ResolvedUObjectInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolvedUObjectInfos).ArrayNum = 0;
  (this->ResolvedUObjectInfos).ArrayMax = 0;
  this->ReleasedByRT = (FThreadSafeBool)0x0;
  return this;
}

// ~UNiagaraScript @ 14938a920

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraScript::~UNiagaraScript(UNiagaraScript *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraScriptBase__;
  this->_padding_ = (longlong)&_vftable__for__FNiagaraVersionedObject__;
  pFVar1 = (this->ResolvedUObjectInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ResolvedUserDataInterfaceBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraScriptResolvedDataInterfaceInfo,int>
            ((FNiagaraScriptResolvedDataInterfaceInfo *)
             (this->ResolvedDataInterfaces).AllocatorInstance.Data,
             (this->ResolvedDataInterfaces).ArrayNum);
  pFVar1 = (this->ResolvedDataInterfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedParameterCollectionReferences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNiagaraVMExecutableData::~FNiagaraVMExecutableData(&this->CachedScriptVM);
  pFVar1 = (this->StatScopesIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScriptResource).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->CachedScriptVMId).BaseScriptCompileHash.DataHash.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScriptExecutionBoundParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNiagaraParameterStore::~FNiagaraParameterStore
            ((FNiagaraParameterStore *)&this->ScriptExecutionParamStore);
  FNiagaraParameterStore::~FNiagaraParameterStore(&this->RapidIterationParameters);
  UNiagaraScriptBase::~UNiagaraScriptBase((UNiagaraScriptBase *)this);
  return;
}

// BeginDestroy @ 149390310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraScript::BeginDestroy(UNiagaraScript *this)

{
  FNiagaraShaderScript *this_00;
  bool bVar1;
  
  UObject::BeginDestroy((UObject *)this);
  if ((((this->_padding_ & 0x10) == 0) &&
      (this_00 = (this->ScriptResource).Object, this_00 != (FNiagaraShaderScript *)0x0)) &&
     (bVar1 = FNiagaraShaderScript::QueueForRelease(this_00,&this->ReleasedByRT), bVar1)) {
    return;
  }
  LOCK();
  this->ReleasedByRT = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// CanBeRunOnGpu @ 149396680

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraScript::CanBeRunOnGpu(UNiagaraScript *this)

{
  int iVar1;
  bool bVar2;
  FNiagaraScriptDataInterfaceCompileInfo *this_00;
  FNiagaraScriptDataInterfaceCompileInfo *pFVar3;
  undefined1 local_res8 [8];
  
  if ((this->Usage == ParticleGPUComputeScript) &&
     ((this->CachedScriptVM).LastCompileStatus != NCS_Unknown)) {
    iVar1 = (this->CachedScriptVM).DataInterfaceInfo.ArrayNum;
    this_00 = (FNiagaraScriptDataInterfaceCompileInfo *)
              (this->CachedScriptVM).DataInterfaceInfo.AllocatorInstance.Data;
    pFVar3 = this_00 + iVar1;
    while( true ) {
      if ((this->CachedScriptVM).DataInterfaceInfo.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNiagaraScriptDataInterfaceCompileInfo_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar3) {
        return true;
      }
      if (((this_00->Type).ClassStructOrEnum.field0_0x0.DebugPtr != (UObject *)0x0) &&
         (bVar2 = FNiagaraScriptDataInterfaceCompileInfo::CanExecuteOnTarget(this_00,GPUComputeSim),
         !bVar2)) break;
      this_00 = this_00 + 1;
    }
  }
  return false;
}

// ContainsUsage @ 149399960

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraScript::ContainsUsage(UNiagaraScript *this,ENiagaraScriptUsage param_1)

{
  ENiagaraScriptUsage EVar1;
  bool bVar2;
  
  EVar1 = this->Usage;
  if (param_1 == EVar1) {
    return true;
  }
  if (EVar1 == ParticleSpawnScript) {
    bVar2 = param_1 == ParticleSpawnScriptInterpolated;
  }
  else if (EVar1 == ParticleSpawnScriptInterpolated) {
    bVar2 = param_1 == ParticleSpawnScript;
  }
  else {
    if (EVar1 != ParticleGPUComputeScript) goto LAB_149399992;
    if ((byte)(param_1 - ParticleSpawnScript) < 6) {
      return true;
    }
    bVar2 = param_1 == ParticleSimulationStageScript;
  }
  if (bVar2) {
    return true;
  }
LAB_149399992:
  if (param_1 == ParticleUpdateScript) {
    bVar2 = EVar1 == ParticleSpawnScriptInterpolated;
  }
  else {
    if (param_1 != EmitterSpawnScript) {
      if (param_1 != EmitterUpdateScript) {
        return false;
      }
      return EVar1 == SystemUpdateScript;
    }
    bVar2 = EVar1 == SystemSpawnScript;
  }
  if (!bVar2) {
    return false;
  }
  return true;
}

// ConvertUsageToGroup @ 1493999d0

bool __cdecl
UNiagaraScript::ConvertUsageToGroup(ENiagaraScriptUsage param_1,ENiagaraScriptGroup *param_2)

{
  if (((byte)(param_1 - ParticleSpawnScript) < 6) || (param_1 < ParticleSpawnScript)) {
    *param_2 = Particle;
    return true;
  }
  if ((byte)(param_1 - EmitterSpawnScript) < 2) {
    *param_2 = Emitter;
    return true;
  }
  if (1 < (byte)(param_1 - SystemSpawnScript)) {
    return false;
  }
  *param_2 = System;
  return true;
}

// DidScriptCompilationSucceed @ 14939cc00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraScript::DidScriptCompilationSucceed(UNiagaraScript *this,bool param_1)

{
  FNiagaraShaderScript *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (!param_1) {
    if ((this->CachedScriptVM).LastCompileStatus == NCS_Unknown) {
      return false;
    }
    return (this->CachedScriptVM).ExperimentalContextData.ArrayNum != 0;
  }
  this_00 = (this->ScriptResource).Object;
  if (this_00 != (FNiagaraShaderScript *)0x0) {
    bVar2 = FNiagaraShaderScript::IsShaderMapComplete(this_00);
    if (bVar2) {
      return true;
    }
    if (((this->ScriptResource).Object == (FNiagaraShaderScript *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
    bVar2 = FNiagaraShaderScript::IsCompilationFinished((this->ScriptResource).Object);
    if (bVar2) {
      return false;
    }
  }
  bVar2 = FNiagaraUtilities::AllowComputeShaders();
  return !bVar2;
}

// GenerateDefaultFunctionBindings @ 1493a1b50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraScript::GenerateDefaultFunctionBindings(UNiagaraScript *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FNiagaraScriptExecutionParameterStore *pFVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  ENiagaraSimTarget local_res20;
  char local_res21;
  uint local_68;
  uint local_64;
  UNiagaraScript *local_60;
  uint *local_58;
  
  GetSimTarget(this);
  if ((local_res21 != '\0') &&
     (iVar6 = (this->CachedScriptVM).CalledVMExternalFunctions.ArrayNum, iVar6 != 0)) {
    TArray<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
    ::Empty(&(this->CachedScriptVM).CalledVMExternalFunctionBindings,iVar6);
    pFVar9 = GetExecutionReadyParameterStore(this,local_res20);
    iVar6 = (this->CachedScriptVM).DataInterfaceInfo.ArrayNum;
    iVar15 = (int)pFVar9->_padding_;
    if (iVar6 < iVar15) {
      iVar15 = iVar6;
    }
    if (iVar15 != iVar6) {
      local_res8[0] = 0;
      `UNiagaraScript::GenerateDefaultFunctionBindings'::__l6::<lambda_1>::operator()(local_res8);
    }
    if (iVar15 != (int)pFVar9->_padding_) {
      local_res10[0] = 0;
      `UNiagaraScript::GenerateDefaultFunctionBindings'::__l6::<lambda_2>::operator()(local_res10);
    }
    local_64 = (this->CachedScriptVM).CalledVMExternalFunctions.ArrayNum;
    uVar10 = (ulonglong)(int)local_64;
    pFVar13 = (this->CachedScriptVM).CalledVMExternalFunctions.AllocatorInstance.Data;
    pFVar14 = pFVar13 + uVar10 * 0x58;
    while( true ) {
      if ((this->CachedScriptVM).CalledVMExternalFunctions.ArrayNum != (int)uVar10) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FVMExternalFunctionBindingInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar13 == pFVar14) break;
      iVar6 = (this->CachedScriptVM).CalledVMExternalFunctionBindings.ArrayNum;
      piVar1 = &(this->CachedScriptVM).CalledVMExternalFunctionBindings.ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(this->CachedScriptVM).CalledVMExternalFunctionBindings.
                                  AllocatorInstance,piVar1);
        (this->CachedScriptVM).CalledVMExternalFunctionBindings.ArrayNum = iVar6;
      }
      (this->CachedScriptVM).CalledVMExternalFunctionBindings.ArrayNum = iVar6 + 1;
      pFVar2 = (this->CachedScriptVM).CalledVMExternalFunctionBindings.AllocatorInstance.Data +
               (longlong)iVar6 * 0x18;
      DefaultConstructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int>
                (pFVar2,1);
      local_68 = 0;
      if (0 < iVar15) {
        do {
          uVar8 = local_68;
          uVar7 = 0;
          if ((int)local_68 < (this->CachedScriptVM).DataInterfaceInfo.ArrayNum) {
            uVar7 = ~local_68 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          pFVar11 = (this->CachedScriptVM).DataInterfaceInfo.AllocatorInstance.Data +
                    (longlong)(int)uVar8 * 0x50;
          if ((*(int *)(pFVar11 + 8) == -1) && (*(longlong *)pFVar11 == *(longlong *)(pFVar13 + 8)))
          {
            lVar12 = (longlong)(int)local_68;
            uVar8 = 0;
            if ((int)local_68 < (int)pFVar9->_padding_) {
              uVar8 = ~local_68 >> 0x1f;
            }
            if ((uVar8 == 0) &&
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
            if (*(longlong *)(pFVar9->_padding_ + lVar12 * 8) == 0) {
              local_58 = &local_68;
              local_60 = this;
              bVar5 = `UNiagaraScript::GenerateDefaultFunctionBindings'::__l16::<lambda_3>::
                      operator()(&local_60);
              if (!bVar5) goto LAB_1493a1e0d;
            }
            lVar12 = (longlong)(int)local_68;
            uVar8 = 0;
            if ((int)local_68 < (int)pFVar9->_padding_) {
              uVar8 = ~local_68 >> 0x1f;
            }
            if ((uVar8 == 0) &&
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
            plVar3 = *(longlong **)(pFVar9->_padding_ + lVar12 * 8);
            (**(code **)(*plVar3 + 0x330))(plVar3,pFVar13,0,pFVar2);
          }
LAB_1493a1e0d:
          local_68 = local_68 + 1;
        } while ((int)local_68 < iVar15);
      }
      uVar10 = (ulonglong)local_64;
      pFVar13 = pFVar13 + 0x58;
    }
  }
  return;
}

// GenerateStatIDs @ 1493a2ee0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraScript::GenerateStatIDs(UNiagaraScript *this)

{
  int *piVar1;
  TArray<TStatId,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FString *pFVar9;
  FName *pFVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined8 local_88;
  FName local_80;
  FName local_78;
  FString local_70;
  FName *local_60;
  undefined4 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  pTVar2 = &this->StatScopesIDs;
  piVar1 = &(this->StatScopesIDs).ArrayMax;
  (this->StatScopesIDs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if ((this->CachedScriptVM).LastCompileStatus != NCS_Unknown) {
    uVar3 = (this->CachedScriptVM).StatScopes.ArrayNum;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,&pTVar2->AllocatorInstance,(this->StatScopesIDs).ArrayNum,piVar1);
    }
    iVar4 = (this->CachedScriptVM).StatScopes.ArrayNum;
    pFVar12 = (this->CachedScriptVM).StatScopes.AllocatorInstance.Data;
    pFVar13 = pFVar12 + (longlong)iVar4 * 0x10;
    while( true ) {
      if ((this->CachedScriptVM).StatScopes.ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FNiagaraStatScope,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar12 == pFVar13) break;
      pFVar9 = ::FName::ToString((FName *)(pFVar12 + 8),&local_70);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      local_res18[0] = 1;
      local_res10[0] = 1;
      local_res20[0] = 2;
      pFVar10 = ::FName::FName(&local_78,pwVar11);
      local_80 = *pFVar10;
      local_60 = &local_80;
      local_58 = local_res20;
      local_50 = local_res10;
      local_48 = local_res18;
      `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_NiagaraDetailed>'::__l2::<lambda_1>
      ::operator()(&local_60);
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (this->StatScopesIDs).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->StatScopesIDs).ArrayNum = iVar8 + 1;
      *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_88;
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      pFVar12 = pFVar12 + 0x10;
    }
  }
  return;
}

// GetAssetRegistryTags @ 1493a3920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraScript::GetAssetRegistryTags
          (UNiagaraScript *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UNiagaraScript *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UNiagaraScript **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UNiagaraScript **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UNiagaraScript **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 1493a3930

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraScript::GetAssetRegistryTags(UNiagaraScript *this,FAssetRegistryTagsContext param_1)

{
  FAssetRegistryTagsContext FVar1;
  FAssetRegistryTagsContext local_res18 [2];
  
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(local_res18,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar1);
  return;
}

// GetCachedParameterCollectionReferences @ 1493a3990

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<TObjectPtr<UNiagaraParameterCollection>,TSizedDefaultAllocator<32>_> * __thiscall
UNiagaraScript::GetCachedParameterCollectionReferences(UNiagaraScript *this)

{
  return &this->CachedParameterCollectionReferences;
}

// GetExecutionReadyParameterStore @ 1493a64b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraScriptExecutionParameterStore * __thiscall
UNiagaraScript::GetExecutionReadyParameterStore(UNiagaraScript *this,ENiagaraSimTarget param_1)

{
  ENiagaraSimTarget local_res18;
  char local_res19;
  FString local_18;
  
  GetSimTarget(this);
  if (local_res19 != '\0') {
    if ((local_res19 == '\x01') && (local_res18 == param_1)) {
      return &this->ScriptExecutionParamStore;
    }
    if (2 < (byte)LogNiagara._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return (FNiagaraScriptExecutionParameterStore *)0x0;
}

// GetOuterEmitter @ 1493a7050

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVersionedNiagaraEmitter * __thiscall
UNiagaraScript::GetOuterEmitter
          (UNiagaraScript *this,FVersionedNiagaraEmitter *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UClass *pUVar3;
  UNiagaraEmitter *this_00;
  FVersionedNiagaraEmitterData *this_01;
  ForAnyElementType FVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  undefined1 local_res18 [8];
  TArray<UNiagaraScript_*,TSizedDefaultAllocator<32>_> local_48;
  void *local_38 [2];
  
  pUVar3 = Z_Construct_UClass_UNiagaraEmitter_NoRegister();
  this_00 = (UNiagaraEmitter *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if (this_00 == (UNiagaraEmitter *)0x0) {
    (__return_storage_ptr__->Emitter).field0_0x0.DebugPtr = (UNiagaraEmitter *)0x0;
    (__return_storage_ptr__->Version).A = 0;
    (__return_storage_ptr__->Version).B = 0;
    (__return_storage_ptr__->Version).C = 0;
    (__return_storage_ptr__->Version).D = 0;
    return __return_storage_ptr__;
  }
  (**(code **)(this_00->_padding_ + 8))(&this_00->_padding_,local_38);
  iVar5 = (int)local_38[1];
  pvVar7 = (void *)((longlong)iVar5 * 0x1c + (longlong)local_38[0]);
  pvVar6 = local_38[0];
  do {
    if ((int)local_38[1] != iVar5) {
      `TCheckedPointerIterator<FNiagaraAssetVersion,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pvVar6 == pvVar7) {
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
      (__return_storage_ptr__->Emitter).field0_0x0.DebugPtr = (UNiagaraEmitter *)0x0;
      (__return_storage_ptr__->Version).A = 0;
      (__return_storage_ptr__->Version).B = 0;
      (__return_storage_ptr__->Version).C = 0;
      (__return_storage_ptr__->Version).D = 0;
      return __return_storage_ptr__;
    }
    this_01 = UNiagaraEmitter::GetEmitterData(this_00,(FGuid *)((longlong)pvVar6 + 8));
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    FVersionedNiagaraEmitterData::GetScripts(this_01,&local_48,false,false);
    for (FVar4.Data = local_48.AllocatorInstance.Data;
        FVar4.Data != local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
        FVar4.Data = FVar4.Data + 8) {
      if (*(UNiagaraScript **)FVar4.Data == this) {
        (__return_storage_ptr__->Emitter).field0_0x0.DebugPtr = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        uVar1 = *(undefined8 *)((longlong)pvVar6 + 8);
        uVar2 = *(undefined8 *)((longlong)pvVar6 + 0x10);
        (__return_storage_ptr__->Version).A = (int)uVar1;
        (__return_storage_ptr__->Version).B = (int)((ulonglong)uVar1 >> 0x20);
        (__return_storage_ptr__->Version).C = (int)uVar2;
        (__return_storage_ptr__->Version).D = (int)((ulonglong)uVar2 >> 0x20);
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        if (local_38[0] == (void *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_38[0]);
        return __return_storage_ptr__;
      }
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    pvVar6 = (void *)((longlong)pvVar6 + 0x1c);
  } while( true );
}

// GetPrivateStaticClass @ 1493a7520

UClass * __cdecl UNiagaraScript::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraScript.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraScript",
               &Z_Registration_Info_UClass_UNiagaraScript.InnerSingleton,
               StaticRegisterNativesUNiagaraScript,0x350,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraScript>,InternalVTableHelperCtorCaller<UNiagaraScript>,
               local_res8,UNiagaraScriptBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraScript.InnerSingleton;
}

// GetSimTarget @ 1493a7980

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TOptional<ENiagaraSimTarget> __thiscall UNiagaraScript::GetSimTarget(UNiagaraScript *this)

{
  TOptional<ENiagaraSimTarget> TVar1;
  FVersionedNiagaraEmitter *this_00;
  FVersionedNiagaraEmitterData *pFVar2;
  ENiagaraSimTarget *in_RDX;
  FVersionedNiagaraEmitter local_28;
  
  TVar1 = SUB82(in_RDX,0);
  switch(this->Usage) {
  case ParticleSpawnScript:
  case ParticleSpawnScriptInterpolated:
  case ParticleUpdateScript:
  case ParticleEventScript:
  case ParticleSimulationStageScript:
  case ParticleGPUComputeScript:
    this_00 = GetOuterEmitter(this,&local_28);
    pFVar2 = FVersionedNiagaraEmitter::GetEmitterData(this_00);
    if ((pFVar2 != (FVersionedNiagaraEmitterData *)0x0) &&
       ((pFVar2->SimTarget != CPUSim || ((this->CachedScriptVM).LastCompileStatus != NCS_Unknown))))
    {
      *in_RDX = pFVar2->SimTarget;
      in_RDX[1] = GPUComputeSim;
      return TVar1;
    }
    break;
  case EmitterSpawnScript:
  case EmitterUpdateScript:
  case SystemSpawnScript:
  case SystemUpdateScript:
    if ((this->CachedScriptVM).LastCompileStatus != NCS_Unknown) {
      in_RDX[0] = CPUSim;
      in_RDX[1] = GPUComputeSim;
      return TVar1;
    }
  }
  in_RDX[1] = CPUSim;
  return TVar1;
}

// GetSimulationStageMetaData @ 1493a7a50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArrayView<FSimulationStageMetaData_const_,int> * __thiscall
UNiagaraScript::GetSimulationStageMetaData
          (UNiagaraScript *this,
          TArrayView<FSimulationStageMetaData_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FSimulationStageMetaData_const_,int> *pTVar4;
  
  iVar1 = (this->CachedScriptVM).SimulationStageMetaData.ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FSimulationStageMetaData *)
       (this->CachedScriptVM).SimulationStageMetaData.AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FSimulationStageMetaData_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// HasValidParameterBindings @ 1493a8440

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraScript::HasValidParameterBindings(UNiagaraScript *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  FNiagaraTypeDefinition *this_00;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ScriptExecutionBoundParameters).ArrayNum;
  pFVar6 = (this->ScriptExecutionBoundParameters).AllocatorInstance.Data;
  iVar3 = (this->RapidIterationParameters).ParameterData.ArrayNum;
  lVar4 = (this->ScriptExecutionParamStore)._padding_;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x14;
  while( true ) {
    if ((this->ScriptExecutionBoundParameters).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraBoundParameter_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    this_00 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(pFVar6 + 8));
    iVar5 = FNiagaraTypeDefinition::GetSize(this_00);
    if ((iVar3 < *(int *)(pFVar6 + 0xc) + iVar5) || ((int)lVar4 < iVar5 + *(int *)(pFVar6 + 0x10)))
    {
      return false;
    }
    pFVar6 = pFVar6 + 0x14;
  }
  return true;
}

// IsEditorOnly @ 1493aa450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraScript::IsEditorOnly(UNiagaraScript *this)

{
  return false;
}

// IsReadyForFinishDestroy @ 1493aa500

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraScript::IsReadyForFinishDestroy(UNiagaraScript *this)

{
  return this->ReleasedByRT != (FThreadSafeBool)0x0;
}

// IsReadyToRun @ 1493aa540

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraScript::IsReadyToRun(UNiagaraScript *this,ENiagaraSimTarget param_1)

{
  int iVar1;
  bool bVar2;
  FNiagaraScriptDataInterfaceCompileInfo *this_00;
  FNiagaraScriptDataInterfaceCompileInfo *pFVar3;
  undefined1 auStackX_8 [8];
  
  if (param_1 == CPUSim) {
    return (this->CachedScriptVM).LastCompileStatus != NCS_Unknown;
  }
  if (param_1 == GPUComputeSim) {
    if ((this->Usage == ParticleGPUComputeScript) &&
       ((this->CachedScriptVM).LastCompileStatus != NCS_Unknown)) {
      iVar1 = (this->CachedScriptVM).DataInterfaceInfo.ArrayNum;
      this_00 = (FNiagaraScriptDataInterfaceCompileInfo *)
                (this->CachedScriptVM).DataInterfaceInfo.AllocatorInstance.Data;
      pFVar3 = this_00 + iVar1;
      while( true ) {
        if ((this->CachedScriptVM).DataInterfaceInfo.ArrayNum != iVar1) {
          `TCheckedPointerIterator<FNiagaraScriptDataInterfaceCompileInfo_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(auStackX_8);
        }
        if (this_00 == pFVar3) {
          return true;
        }
        if (((this_00->Type).ClassStructOrEnum.field0_0x0.DebugPtr != (UObject *)0x0) &&
           (bVar2 = FNiagaraScriptDataInterfaceCompileInfo::CanExecuteOnTarget
                              (this_00,GPUComputeSim), !bVar2)) break;
        this_00 = this_00 + 1;
      }
    }
    return false;
  }
  return false;
}

// IsScriptCompilationPending @ 1493aa5a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraScript::IsScriptCompilationPending(UNiagaraScript *this,bool param_1)

{
  ENiagaraScriptCompileStatus EVar1;
  FNiagaraShaderScript *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (param_1) {
    this_00 = (this->ScriptResource).Object;
    if (this_00 != (FNiagaraShaderScript *)0x0) {
      bVar3 = FNiagaraShaderScript::IsShaderMapComplete(this_00);
      if (!bVar3) {
        if ((this->ScriptResource).Object == (FNiagaraShaderScript *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        bVar3 = FNiagaraShaderScript::IsCompilationFinished((this->ScriptResource).Object);
        return !bVar3;
      }
    }
  }
  else {
    EVar1 = (this->CachedScriptVM).LastCompileStatus;
    if ((EVar1 != NCS_Unknown) && (EVar1 == NCS_BeingCreated)) {
      return (this->CachedScriptVM).ExperimentalContextData.ArrayNum == 0;
    }
  }
  return false;
}

// IsUsageDependentOn @ 1493aa650

bool __cdecl
UNiagaraScript::IsUsageDependentOn(ENiagaraScriptUsage param_1,ENiagaraScriptUsage param_2)

{
  if (param_1 == param_2) {
    return false;
  }
  if (((byte)(param_1 - ParticleSpawnScript) < 4) && ((byte)(param_2 - ParticleSpawnScript) < 4)) {
    return true;
  }
  if (param_1 == ParticleGPUComputeScript) {
    if ((byte)(param_2 - ParticleSpawnScript) < 5) {
      return true;
    }
  }
  else {
    if (((byte)(param_1 - EmitterSpawnScript) < 2) && ((byte)(param_2 - EmitterSpawnScript) < 2)) {
      return true;
    }
    if (((byte)(param_1 - SystemSpawnScript) < 2) && ((byte)(param_2 - SystemSpawnScript) < 2)) {
      return true;
    }
  }
  return false;
}

// LegacyCanBeRunOnGpu @ 1493aaf10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraScript::LegacyCanBeRunOnGpu(UNiagaraScript *this)

{
  FVersionedNiagaraEmitter *this_00;
  FVersionedNiagaraEmitterData *pFVar1;
  FVersionedNiagaraEmitter local_28;
  
  this_00 = GetOuterEmitter(this,&local_28);
  pFVar1 = FVersionedNiagaraEmitter::GetEmitterData(this_00);
  if (((pFVar1 != (FVersionedNiagaraEmitterData *)0x0) && (pFVar1->SimTarget != CPUSim)) &&
     ((this->Usage == ParticleSpawnScript || (this->Usage == ParticleSpawnScriptInterpolated)))) {
    return true;
  }
  return false;
}

// ModifyCompilationEnvironment @ 1493ab020

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraScript::ModifyCompilationEnvironment
          (UNiagaraScript *this,EShaderPlatform param_1,FShaderCompilerEnvironment *param_2)

{
  return;
}

// OwnerCanBeRunOnGpu @ 1493ab0d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraScript::OwnerCanBeRunOnGpu(UNiagaraScript *this)

{
  FVersionedNiagaraEmitter *this_00;
  FVersionedNiagaraEmitterData *pFVar1;
  FVersionedNiagaraEmitter local_28;
  
  this_00 = GetOuterEmitter(this,&local_28);
  pFVar1 = FVersionedNiagaraEmitter::GetEmitterData(this_00);
  if (pFVar1 != (FVersionedNiagaraEmitterData *)0x0) {
    return pFVar1->SimTarget == GPUComputeSim;
  }
  return false;
}

// PostLoad @ 1493ab790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNiagaraScript::PostLoad(UNiagaraScript *this)

{
  int *piVar1;
  TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  FNiagaraShaderScript *this_00;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  FNiagaraTypeDefinition *this_01;
  FNiagaraVMExecutableData *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  FGuid local_198;
  FString local_188;
  FNiagaraVMExecutableData local_178;
  
  UObject::PostLoad((UObject *)this);
  local_198 = FNiagaraCustomVersion::GUID;
  UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_198);
  FNiagaraParameterStore::PostLoad(&this->RapidIterationParameters,(UObject *)this);
  FNiagaraParameterStore::PostLoad
            ((FNiagaraParameterStore *)&this->ScriptExecutionParamStore,(UObject *)this);
  iVar5 = (this->RapidIterationParameters).ParameterData.ArrayNum;
  pTVar2 = &this->ScriptExecutionBoundParameters;
  iVar6 = (this->ScriptExecutionBoundParameters).ArrayNum;
  pFVar12 = (pTVar2->AllocatorInstance).Data;
  lVar8 = (this->ScriptExecutionParamStore)._padding_;
  pFVar4 = pFVar12 + (longlong)iVar6 * 0x14;
  while( true ) {
    if ((this->ScriptExecutionBoundParameters).ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNiagaraBoundParameter_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar4) break;
    this_01 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(pFVar12 + 8));
    iVar10 = FNiagaraTypeDefinition::GetSize(this_01);
    if ((iVar5 < *(int *)(pFVar12 + 0xc) + iVar10) ||
       ((int)lVar8 < iVar10 + *(int *)(pFVar12 + 0x10))) {
      if (1 < (byte)LogNiagara._0_1_) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_188,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
      }
      pFVar11 = FNiagaraVMExecutableData::FNiagaraVMExecutableData(&local_178);
      FNiagaraVMExecutableData::operator=(&this->CachedScriptVM,pFVar11);
      FNiagaraVMExecutableData::~FNiagaraVMExecutableData(&local_178);
      return;
    }
    pFVar12 = pFVar12 + 0x14;
  }
  FNiagaraParameterStore::Bind
            (&this->RapidIterationParameters,
             (FNiagaraParameterStore *)&this->ScriptExecutionParamStore,pTVar2);
  (this->ScriptExecutionParamStore).bInitialized = '\x01';
  piVar1 = &(this->ScriptExecutionBoundParameters).ArrayMax;
  (this->ScriptExecutionBoundParameters).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  GenerateDefaultFunctionBindings(this);
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScript.cpp"
                         ,0x110a,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = (this->ScriptResource).Object;
  if (this_00 != (FNiagaraShaderScript *)0x0) {
    FNiagaraShaderScript::BuildScriptParametersMetadata
              (this_00,&(this->CachedScriptVM).ShaderScriptParametersMetadata);
  }
  GenerateStatIDs(this);
  return;
}

// PreSave @ 1493abad0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraScript::PreSave(UNiagaraScript *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// ProcessSerializedShaderMaps @ 1493ac2c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraScript::ProcessSerializedShaderMaps(UNiagaraScript *this)

{
  FNiagaraShaderScript *this_00;
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScript.cpp"
                       ,0x110a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->ScriptResource).Object;
  if (this_00 != (FNiagaraShaderScript *)0x0) {
    FNiagaraShaderScript::BuildScriptParametersMetadata
              (this_00,&(this->CachedScriptVM).ShaderScriptParametersMetadata);
    return;
  }
  return;
}

// RaiseOnGPUCompilationComplete @ 1493ac890

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraScript::RaiseOnGPUCompilationComplete(UNiagaraScript *this)

{
  return;
}

// Serialize @ 1493b5840

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraScript::Serialize(UNiagaraScript *this,FArchive *param_1)

{
  ENiagaraScriptUsage EVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FVersionedNiagaraEmitter *this_00;
  FVersionedNiagaraEmitterData *pFVar6;
  UClass *pUVar7;
  FString *pFVar8;
  UClass *pUVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  FNiagaraTypeDefinition *this_01;
  FScriptContainerElement *pFVar13;
  undefined1 local_res18 [16];
  FString local_68;
  FVersionedNiagaraEmitter local_58;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FNiagaraCustomVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  if (iVar5 < 0x16) {
    EVar1 = this->Usage;
    if ((((EVar1 == Module) || ((EVar1 & ~DynamicInput) == Function)) ||
        ((0xe < iVar5 && ((byte)(EVar1 - SystemSpawnScript) < 2)))) ||
       ((0x14 < iVar5 &&
        (((EVar1 - ParticleUpdateScript & 0xfa) == 0 && (EVar1 != ParticleEventScript)))))) {
      bVar3 = false;
      goto LAB_1493b59f9;
    }
    bVar3 = true;
  }
  else {
    if (iVar5 < 0x1d) {
      this_00 = GetOuterEmitter(this,&local_58);
      pFVar6 = FVersionedNiagaraEmitter::GetEmitterData(this_00);
      if ((pFVar6 == (FVersionedNiagaraEmitterData *)0x0) || (pFVar6->SimTarget == CPUSim)) {
        bVar3 = false;
      }
      else if ((this->Usage == ParticleSpawnScript) ||
              (this->Usage == ParticleSpawnScriptInterpolated)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
    }
    else {
      bVar3 = CanBeRunOnGpu(this);
    }
    if ((bVar3 == false) || (0x2b < iVar5)) goto LAB_1493b59f9;
  }
  iVar2 = (this->CachedScriptVM).DataInterfaceInfo.ArrayNum;
  pFVar11 = (this->CachedScriptVM).DataInterfaceInfo.AllocatorInstance.Data;
  this_01 = (FNiagaraTypeDefinition *)(pFVar11 + 0x10);
  pFVar13 = pFVar11 + (longlong)iVar2 * 0x50;
  while( true ) {
    if ((this->CachedScriptVM).DataInterfaceInfo.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraScriptDataInterfaceCompileInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar11 == pFVar13) break;
    if (this_01->UnderlyingType == 1) {
      if ((this_01->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
        pFVar8 = GetTypeName<UClass>((FString *)&local_58);
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar10);
      }
      pUVar7 = Z_Construct_UClass_UClass_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar7);
      if ((!bVar4) ||
         (pUVar7 = (UClass *)(this_01->ClassStructOrEnum).field0_0x0.DebugPtr,
         pUVar7 == (UClass *)0x0)) {
        pFVar8 = GetTypeName<UClass>(&local_68);
        pwVar10 = L"";
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        pFVar8 = GetFullNameForCastLogError<UObject>
                           ((FString *)&local_58,(this_01->ClassStructOrEnum).field0_0x0.DebugPtr);
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar10,pwVar12);
      }
    }
    else {
      pUVar7 = (UClass *)0x0;
    }
    pUVar9 = Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister();
    if (pUVar7 == pUVar9) {
LAB_1493b59e1:
      bVar3 = false;
    }
    else {
      pUVar7 = Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister();
      pUVar9 = FNiagaraTypeDefinition::GetClass(this_01);
      if (pUVar9 == pUVar7) goto LAB_1493b59e1;
    }
    pFVar11 = pFVar11 + 0x50;
    this_01 = (FNiagaraTypeDefinition *)&this_01[3].UnderlyingType;
  }
LAB_1493b59f9:
  SerializeNiagaraShaderMaps(this,param_1,iVar5,bVar3);
  return;
}

// Serialize @ 1493b5a80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraScript::Serialize(UNiagaraScript *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SerializeNiagaraShaderMaps @ 1493b6300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraScript::SerializeNiagaraShaderMaps
          (UNiagaraScript *this,FArchive *param_1,int param_2,bool param_3)

{
  longlong *plVar1;
  code *pcVar2;
  FNiagaraShaderScript *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  EShaderPlatform EVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint uVar8;
  FNiagaraShaderScript *pFVar10;
  TSharedPtr<FNiagaraShaderScript,1> *pTVar11;
  undefined1 auStack_1e8 [32];
  uint local_1c8 [2];
  FNiagaraShaderScript *local_1c0;
  FSharedReferencer<1> FStack_1b8;
  FNiagaraShaderScript local_1b0;
  ulonglong local_58;
  TReferenceControllerBase<1> *pTVar9;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if ((((param_1->field_0x28 & 1) != 0) && (4 < param_2)) && ((param_2 < 0xe || (param_3)))) {
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_1c8[0] = 0;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_1c8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_1c8);
      }
    }
    else {
      local_1c8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    pTVar4 = _UNK_150651568;
    pFVar3 = ___xmm_00000000000000000000000000000010;
    if (0 < (int)local_1c8[0]) {
      pTVar11 = &this->ScriptResource;
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      do {
        FNiagaraShaderScript::FNiagaraShaderScript(&local_1b0);
        FNiagaraShaderScript::SerializeShaderMap(&local_1b0,param_1);
        if (((pTVar11->Object == (FNiagaraShaderScript *)0x0) &&
            (local_1b0.GameThreadShaderMap.Reference != (FNiagaraShaderMap *)0x0)) &&
           (EVar6 = FShaderMapContent::GetShaderPlatform
                              ((FShaderMapContent *)
                               (local_1b0.GameThreadShaderMap.Reference)->_padding_),
           GMaxRHIShaderPlatform == EVar6)) {
          pTVar7 = ::operator_new(0x168);
          if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
            pFVar10 = (FNiagaraShaderScript *)&DAT_00000010;
            local_1c0 = pFVar3;
            FStack_1b8.ReferenceController = pTVar4;
            pTVar7 = (TReferenceControllerBase<1> *)0x0;
          }
          else {
            pTVar7->SharedReferenceCount = (atomic<int>)0x1;
            pTVar7->WeakReferenceCount = (atomic<int>)0x1;
            pTVar7->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFNiagaraShaderScript___00_SharedPointerInternals__6B_
            ;
            FNiagaraShaderScript::FNiagaraShaderScript
                      ((FNiagaraShaderScript *)(pTVar7 + 1),&local_1b0);
            pFVar10 = (FNiagaraShaderScript *)(pTVar7 + 1);
            if ((pFVar10 == (FNiagaraShaderScript *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
            FStack_1b8.ReferenceController = pTVar7;
            local_1c0 = pFVar10;
          }
          if (pTVar11 != (TSharedPtr<FNiagaraShaderScript,1> *)&local_1c0) {
            pTVar11->Object = pFVar10;
            local_1c0 = (FNiagaraShaderScript *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->ScriptResource).SharedReferenceCount,&FStack_1b8);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_1b8.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
        }
        FNiagaraShaderScript::~FNiagaraShaderScript(&local_1b0);
        uVar8 = (int)pTVar9 + 1;
        pTVar9 = (TReferenceControllerBase<1> *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_1c8[0]);
    }
  }
  return;
}

// ShouldCompile @ 1493b74d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UNiagaraScript::ShouldCompile(UNiagaraScript *this,EShaderPlatform param_1)

{
  return false;
}

// StaticRegisterNativesUNiagaraScript @ 1493b75e0

void __cdecl UNiagaraScript::StaticRegisterNativesUNiagaraScript(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraScript_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UsesCollection @ 1493bc730

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraScript::UsesCollection(UNiagaraScript *this,UNiagaraParameterCollection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  if ((this->CachedScriptVM).LastCompileStatus != NCS_Unknown) {
    pFVar2 = (this->CachedParameterCollectionReferences).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)(this->CachedParameterCollectionReferences).ArrayNum * 8;
    for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 8) {
      if (*(UNiagaraParameterCollection **)pFVar2 == (UNiagaraParameterCollection *)0x0) {
        bVar3 = param_1 == (UNiagaraParameterCollection *)0x0;
      }
      else {
        bVar3 = *(UNiagaraParameterCollection **)pFVar2 == param_1;
      }
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

// execRaiseOnGPUCompilationComplete @ 1493c08b0

void __cdecl
UNiagaraScript::execRaiseOnGPUCompilationComplete(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// operator() @ 150541850

bool __thiscall
`UNiagaraScript::GenerateDefaultFunctionBindings'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4163501134503213432>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4163501134503213432>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150541980

bool __thiscall
`UNiagaraScript::GenerateDefaultFunctionBindings'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4163501134503213431>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4163501134503213431>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505419c0

bool __thiscall
`UNiagaraScript::GenerateDefaultFunctionBindings'::__l16::<lambda_3>::operator()(void *this)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4163501134503213418>);
  if (bVar2) {
    this_00 = *(UObjectBaseUtility **)this;
    if ((this_00 == (UObjectBaseUtility *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(this_00,&local_18,(UObject *)0x0,None);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4163501134503213418>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150541a62;
    }
  }
  bVar2 = false;
LAB_150541a62:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

