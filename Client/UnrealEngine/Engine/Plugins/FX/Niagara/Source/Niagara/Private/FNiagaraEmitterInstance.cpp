// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 32

// GetParticleData @ 1491c9810

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraDataSet * __thiscall FNiagaraEmitterInstance::GetParticleData(FNiagaraEmitterInstance *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataSet *pFVar3;
  
  if (this->ParticleDataSet != (FNiagaraDataSet *)0x0) {
    return this->ParticleDataSet;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ParticleDataSet",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                     ,0x39,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraDataSet *)(*pcVar1)();
    return pFVar3;
  }
  return this->ParticleDataSet;
}

// FNiagaraEmitterInstance @ 149275ca0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraEmitterInstance * __thiscall
FNiagaraEmitterInstance::FNiagaraEmitterInstance
          (FNiagaraEmitterInstance *this,FNiagaraSystemInstance *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  this->ParentSystemInstance = param_1;
  this->ParticleDataSet = (FNiagaraDataSet *)0x0;
  this->_padding_ = (longlong)&___7FNiagaraEmitterInstance__6B_;
  this->GPUExecContext = (FNiagaraComputeExecutionContext *)0x0;
  this->GPUDataBufferInterfaces = (INiagaraComputeDataBufferInterface *)0x0;
  (this->VersionedEmitter).Emitter.field0_0x0.DebugPtr = (UNiagaraEmitter *)0x0;
  (this->VersionedEmitter).Version.A = 0;
  (this->VersionedEmitter).Version.B = 0;
  (this->VersionedEmitter).Version.C = 0;
  (this->VersionedEmitter).Version.D = 0;
  FNiagaraParameterStore::FNiagaraParameterStore(&this->RendererBindings);
  this->EmitterIndex = -1;
  this->TotalSpawnedParticles = 0;
  puVar2 = &this->field_0xd0;
  this->bLocalSpace = '\x01';
  this->bNeedsEarlyViewUniformBuffer = '\0';
  this->bNeedsPartialDepthTexture = '\0';
  this->bDeterministic = '\x01';
  this->SimTarget = CPUSim;
  this->ExecutionState = Active;
  this->bCachedBoundsDynamic = false;
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).IsValid = '\0';
  (this->CachedBounds).Pad[0] = '\0';
  (this->CachedBounds).Pad[1] = '\0';
  (this->CachedBounds).Pad[2] = '\0';
  (this->CachedBounds).Pad[3] = '\0';
  (this->CachedBounds).Pad[4] = '\0';
  (this->CachedBounds).Pad[5] = '\0';
  (this->CachedBounds).Pad[6] = '\0';
  (this->CachedSystemFixedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedSystemFixedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedSystemFixedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedSystemFixedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedSystemFixedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedSystemFixedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->CachedSystemFixedBounds).IsValid = '\0';
  (this->CachedSystemFixedBounds).Pad[0] = '\0';
  (this->CachedSystemFixedBounds).Pad[1] = '\0';
  (this->CachedSystemFixedBounds).Pad[2] = '\0';
  (this->CachedSystemFixedBounds).Pad[3] = '\0';
  (this->CachedSystemFixedBounds).Pad[4] = '\0';
  (this->CachedSystemFixedBounds).Pad[5] = '\0';
  (this->CachedSystemFixedBounds).Pad[6] = '\0';
  (this->FixedBoundsGuard).Mutex.Mutex.Ptr = (void *)0x0;
  (this->FixedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->FixedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->FixedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->FixedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->FixedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->FixedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->FixedBounds).IsValid = '\0';
  (this->FixedBounds).Pad[0] = '\0';
  (this->FixedBounds).Pad[1] = '\0';
  (this->FixedBounds).Pad[2] = '\0';
  (this->FixedBounds).Pad[3] = '\0';
  (this->FixedBounds).Pad[4] = '\0';
  (this->FixedBounds).Pad[5] = '\0';
  (this->FixedBounds).Pad[6] = '\0';
  return this;
}

// ~FNiagaraEmitterInstance @ 14927a270

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraEmitterInstance::~FNiagaraEmitterInstance(FNiagaraEmitterInstance *this)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FNiagaraEmitterInstance__6B_;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->FixedBoundsGuard);
  if (BVar2 != '\0') {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->FixedBoundsGuard);
    FNiagaraParameterStore::~FNiagaraParameterStore(&this->RendererBindings);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FNiagaraParameterStore::~FNiagaraParameterStore(&this->RendererBindings);
  return;
}

// AsStateful @ 149284e50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraEmitterInstanceImpl * __thiscall
FNiagaraEmitterInstance::AsStateful(FNiagaraEmitterInstance *this)

{
  return (FNiagaraEmitterInstanceImpl *)0x0;
}

// AsStateless @ 149284e70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FNiagaraStatelessEmitterInstance * __thiscall
FNiagaraEmitterInstance::AsStateless(FNiagaraEmitterInstance *this)

{
  return (FNiagaraStatelessEmitterInstance *)0x0;
}

// FindBinding @ 14929bf10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TObjectPtr<UObject> __thiscall
FNiagaraEmitterInstance::FindBinding(FNiagaraEmitterInstance *this,FNiagaraVariable *param_1)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  FNiagaraTypeDefinition *pFVar1;
  longlong *in_R8;
  
  if (*in_R8 != 0) {
    pFVar1 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(in_R8 + 1));
    if ((((pFVar1->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) &&
        (this->ParentSystemInstance != (FNiagaraSystemInstance *)0x0)) &&
       (this_00 = this->ParentSystemInstance->OverrideParameters,
       this_00 != (FNiagaraUserRedirectionParameterStore *)0x0)) {
      FNiagaraParameterStore::GetUObject((FNiagaraParameterStore *)this_00,param_1);
      return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
    }
  }
  param_1->_padding_ = 0;
  return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
}

// FindDataInterface @ 14929bf90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UNiagaraDataInterface * __thiscall
FNiagaraEmitterInstance::FindDataInterface(FNiagaraEmitterInstance *this,FNiagaraVariable *param_1)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  FNiagaraTypeDefinition *pFVar1;
  UNiagaraDataInterface *pUVar2;
  
  if (param_1->_padding_ != 0) {
    pFVar1 = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
    if ((((pFVar1->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) &&
        (this->ParentSystemInstance != (FNiagaraSystemInstance *)0x0)) &&
       (this_00 = this->ParentSystemInstance->OverrideParameters,
       this_00 != (FNiagaraUserRedirectionParameterStore *)0x0)) {
      pUVar2 = FNiagaraParameterStore::GetDataInterface((FNiagaraParameterStore *)this_00,param_1);
      return pUVar2;
    }
  }
  return (UNiagaraDataInterface *)0x0;
}

// GetBoundRendererValue_GT @ 1492a08a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNiagaraEmitterInstance::GetBoundRendererValue_GT
          (FNiagaraEmitterInstance *this,FNiagaraVariableBase *param_1,FNiagaraVariableBase *param_2
          ,void *param_3)

{
  FNiagaraTypeDefinitionHandle *this_00;
  FWeakObjectPtr *pFVar1;
  uint uVar2;
  FNiagaraSystemInstance *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  FNiagaraTypeDefinition *pFVar9;
  UNiagaraDataInterface *pUVar10;
  UNiagaraDataInterface *pUVar11;
  int *piVar12;
  FWeakObjectPtr *this_01;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined8 local_res10;
  FNiagaraVariable local_68;
  FName local_48;
  int local_40;
  void *local_38;
  undefined8 local_30;
  
  this_00 = &param_1->TypeDefHandle;
  pFVar9 = FNiagaraTypeDefinitionHandle::Resolve(this_00);
  bVar5 = FNiagaraTypeDefinition::IsDataInterface(pFVar9);
  if (bVar5) {
    local_68._padding_ = *(longlong *)&param_1->Name;
    local_68._padding_._0_4_ = (param_1->TypeDefHandle).RegisteredTypeIndex;
    pFVar14 = (FScriptContainerElement *)0x0;
    local_68.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.VarData.ArrayNum = 0;
    local_68.VarData.ArrayMax = 0;
    pUVar10 = FNiagaraParameterStore::GetDataInterface(&this->RendererBindings,&local_68);
    if (local_68.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.VarData.AllocatorInstance.Data);
    }
    if (pUVar10 != (UNiagaraDataInterface *)0x0) {
      if (param_2->Name == (FName)0x0) {
        *(UNiagaraDataInterface **)param_3 = pUVar10;
        return true;
      }
      cVar6 = (**(code **)(pUVar10->_padding_ + 0x3f8))(pUVar10);
      if (cVar6 != '\0') {
        pFVar3 = this->ParentSystemInstance;
        this_01 = (FWeakObjectPtr *)
                  (pFVar3->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
        pFVar1 = (FWeakObjectPtr *)
                 ((longlong)this_01 +
                 (longlong)(pFVar3->DataInterfaceInstanceDataOffsets).ArrayNum * 0xc);
        do {
          if (this_01 == pFVar1) {
LAB_1492a09e4:
            uVar7 = (**(code **)(pUVar10->_padding_ + 0x408))
                              (pUVar10,param_2,pFVar14,this->ParentSystemInstance,param_3);
            return (bool)uVar7;
          }
          pUVar11 = (UNiagaraDataInterface *)FWeakObjectPtr::Get(this_01);
          if (pUVar11 == pUVar10) {
            if (this_01 != (FWeakObjectPtr *)0x0) {
              uVar2 = this_01[1].ObjectIndex;
              uVar13 = 0;
              if ((int)uVar2 < (pFVar3->DataInterfaceInstanceData).ArrayNum) {
                uVar13 = ~uVar2 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              pFVar14 = (pFVar3->DataInterfaceInstanceData).AllocatorInstance.Data + (int)uVar2;
            }
            goto LAB_1492a09e4;
          }
          this_01 = (FWeakObjectPtr *)&this_01[1].ObjectSerialNumber;
        } while( true );
      }
    }
  }
  else {
    bVar5 = FNiagaraVariableBase::IsUObject(param_1);
    if (bVar5) {
      local_40 = (param_1->TypeDefHandle).RegisteredTypeIndex;
      local_48 = param_1->Name;
      local_38 = (void *)0x0;
      local_30 = 0;
      (**(code **)((this->RendererBindings)._padding_ + 0x58))(&this->RendererBindings,&local_48);
      FNiagaraParameterStore::GetUObject(&this->RendererBindings,(int)&local_res10);
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      *(undefined8 *)param_3 = local_res10;
      return true;
    }
    piVar12 = (int *)(**(code **)((this->RendererBindings)._padding_ + 0x58))
                               (&this->RendererBindings,param_1,0);
    if (((piVar12 != (int *)0x0) && (*piVar12 != -1)) &&
       (pFVar14 = (this->RendererBindings).ParameterData.AllocatorInstance.Data + *piVar12,
       pFVar14 != (FScriptContainerElement *)0x0)) {
      pFVar9 = FNiagaraTypeDefinitionHandle::Resolve(this_00);
      iVar8 = FNiagaraTypeDefinition::GetSize(pFVar9);
      if (iVar8 != 0) {
        pFVar9 = FNiagaraTypeDefinitionHandle::Resolve(this_00);
        iVar8 = FNiagaraTypeDefinition::GetSize(pFVar9);
        memcpy(param_3,pFVar14,(longlong)iVar8);
        return true;
      }
    }
  }
  return false;
}

// GetCachedIDName @ 1492a0b10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall FNiagaraEmitterInstance::GetCachedIDName(FNiagaraEmitterInstance *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FName FVar4;
  FName in_RDX;
  
  lVar3 = (**(code **)(this->_padding_ + 0x68))();
  if (lVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StatefulEmitter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstance.cpp"
                       ,0x108,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
  }
  *(undefined8 *)in_RDX = *(undefined8 *)(lVar3 + 0x840);
  return in_RDX;
}

// GetEmitterHandle @ 1492a1ee0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FNiagaraEmitterHandle * __thiscall
FNiagaraEmitterInstance::GetEmitterHandle(FNiagaraEmitterInstance *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar4;
  FNiagaraEmitterHandle *pFVar5;
  uint uVar6;
  
  pTVar4 = UNiagaraSystem::GetEmitterHandles(this->ParentSystemInstance->System);
  uVar1 = this->EmitterIndex;
  uVar6 = 0;
  if ((int)uVar1 < pTVar4->ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNiagaraEmitterHandle *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FNiagaraEmitterHandle *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x48);
}

// GetEmitterStatID @ 1492a1f70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TStatId __thiscall
FNiagaraEmitterInstance::GetEmitterStatID(FNiagaraEmitterInstance *this,bool param_1,bool param_2)

{
  UNiagaraEmitter *this_00;
  TAtomic<FMinimalName> TVar1;
  TStatIdData *pTVar2;
  undefined7 in_register_00000011;
  char in_R9B;
  
  this_00 = (this->VersionedEmitter).Emitter.field0_0x0.DebugPtr;
  pTVar2 = (TStatIdData *)CONCAT71(in_register_00000011,param_1);
  if (this_00 == (UNiagaraEmitter *)0x0) {
    *(TStatIdData **)CONCAT71(in_register_00000011,param_1) = &TStatId::TStatId_NAME_None;
  }
  else {
    TVar1 = ((this_00->StatID_GT).StatIdPtr)->Name;
    if ((TVar1._0_4_ == 0) && (TVar1._4_4_ == 0)) {
      UNiagaraEmitter::GenerateStatID(this_00);
    }
    if (param_2) {
      if (in_R9B == '\0') {
        pTVar2->Name = (TAtomic<FMinimalName>)(this_00->StatID_GT).StatIdPtr;
      }
      else {
        pTVar2->Name = (TAtomic<FMinimalName>)(this_00->StatID_GT_CNC).StatIdPtr;
      }
    }
    else if (in_R9B == '\0') {
      pTVar2->Name = (TAtomic<FMinimalName>)(this_00->StatID_RT).StatIdPtr;
    }
    else {
      pTVar2->Name = (TAtomic<FMinimalName>)(this_00->StatID_RT_CNC).StatIdPtr;
    }
  }
  return (TStatId)pTVar2;
}

// GetEventExecutionContexts @ 1492a3f30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArrayView<FNiagaraScriptExecutionContext,int> * __thiscall
FNiagaraEmitterInstance::GetEventExecutionContexts
          (FNiagaraEmitterInstance *this,
          TArrayView<FNiagaraScriptExecutionContext,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraEmitterInstanceImpl *this_00;
  TArrayView<FNiagaraScriptExecutionContext,int> *pTVar3;
  
  this_00 = (FNiagaraEmitterInstanceImpl *)(**(code **)(this->_padding_ + 0x68))();
  if (this_00 == (FNiagaraEmitterInstanceImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StatefulEmitter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstance.cpp"
                       ,0xc5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FNiagaraScriptExecutionContext,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FNiagaraEmitterInstanceImpl::GetEventExecutionContexts(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFixedBounds @ 1492a40b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TBox<double> * __thiscall
FNiagaraEmitterInstance::GetFixedBounds
          (FNiagaraEmitterInstance *this,TBox<double> *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  
  AcquireSRWLockShared((PSRWLOCK)&this->FixedBoundsGuard);
  if ((this->FixedBounds).IsValid != '\0') {
    dVar4 = (this->FixedBounds).Min.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->FixedBounds).Min.field0_0x0._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar4;
    dVar4 = (this->FixedBounds).Max.field0_0x0._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (this->FixedBounds).Min.field0_0x0._s_0.Z;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar4;
    uVar1 = *(undefined4 *)((longlong)&(this->FixedBounds).Max.field0_0x0 + 0xc);
    uVar2 = *(undefined4 *)((longlong)&(this->FixedBounds).Max.field0_0x0 + 0x10);
    uVar3 = *(undefined4 *)((longlong)&(this->FixedBounds).Max.field0_0x0 + 0x14);
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) =
         *(undefined4 *)((longlong)&(this->FixedBounds).Max.field0_0x0 + 8);
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) = uVar1;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10) = uVar2;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x14) = uVar3;
    uVar5 = (this->FixedBounds).Pad[0];
    uVar6 = (this->FixedBounds).Pad[1];
    uVar7 = (this->FixedBounds).Pad[2];
    uVar8 = (this->FixedBounds).Pad[3];
    uVar9 = (this->FixedBounds).Pad[4];
    uVar10 = (this->FixedBounds).Pad[5];
    uVar11 = (this->FixedBounds).Pad[6];
    __return_storage_ptr__->IsValid = (this->FixedBounds).IsValid;
    __return_storage_ptr__->Pad[0] = uVar5;
    __return_storage_ptr__->Pad[1] = uVar6;
    __return_storage_ptr__->Pad[2] = uVar7;
    __return_storage_ptr__->Pad[3] = uVar8;
    __return_storage_ptr__->Pad[4] = uVar9;
    __return_storage_ptr__->Pad[5] = uVar10;
    __return_storage_ptr__->Pad[6] = uVar11;
    ReleaseSRWLockShared((PSRWLOCK)&this->FixedBoundsGuard);
    return __return_storage_ptr__;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->FixedBoundsGuard);
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// GetGpuCountBufferEstimate @ 1492a41a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall FNiagaraEmitterInstance::GetGpuCountBufferEstimate(FNiagaraEmitterInstance *this)

{
  return 0;
}

// GetNumParticles @ 1492a52f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FNiagaraEmitterInstance::GetNumParticles(FNiagaraEmitterInstance *this)

{
  FNiagaraComputeExecutionContext *pFVar1;
  FNiagaraDataBuffer *pFVar2;
  
  pFVar1 = this->GPUExecContext;
  if (pFVar1 == (FNiagaraComputeExecutionContext *)0x0) {
    pFVar2 = this->ParticleDataSet->CurrentData;
    if (pFVar2 != (FNiagaraDataBuffer *)0x0) {
      return pFVar2->NumInstances;
    }
    return 0;
  }
  if (pFVar1->ParticleCountReadFence <= pFVar1->ParticleCountWriteFence) {
    return pFVar1->CurrentNumInstances_RT;
  }
  return this->TotalSpawnedParticles;
}

// GetSpawnExecutionContext @ 1492a7b10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraScriptExecutionContext * __thiscall
FNiagaraEmitterInstance::GetSpawnExecutionContext(FNiagaraEmitterInstance *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FNiagaraScriptExecutionContext *pFVar4;
  
  lVar3 = (**(code **)(this->_padding_ + 0x68))();
  if (lVar3 != 0) {
    return (FNiagaraScriptExecutionContext *)(lVar3 + 0x1a0);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("StatefulEmitter",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstance.cpp"
                     ,0xb7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNiagaraScriptExecutionContext *)(*pcVar1)();
    return pFVar4;
  }
  return (FNiagaraScriptExecutionContext *)0x1a0;
}

// GetSpawnInfo @ 1492a7b70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FNiagaraSpawnInfo,TSizedDefaultAllocator<32>_> * __thiscall
FNiagaraEmitterInstance::GetSpawnInfo(FNiagaraEmitterInstance *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  TArray<FNiagaraSpawnInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  
  lVar3 = (**(code **)(this->_padding_ + 0x68))();
  if (lVar3 != 0) {
    return (TArray<FNiagaraSpawnInfo,TSizedDefaultAllocator<32>_> *)(lVar3 + 400);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("StatefulEmitter",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstance.cpp"
                     ,0xcc,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<FNiagaraSpawnInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  return (TArray<FNiagaraSpawnInfo,TSizedDefaultAllocator<32>_> *)0x190;
}

// GetSystemStatID @ 1492a80f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TStatId __thiscall
FNiagaraEmitterInstance::GetSystemStatID(FNiagaraEmitterInstance *this,bool param_1,bool param_2)

{
  undefined7 in_register_00000011;
  
  UNiagaraSystem::GetStatID(this->ParentSystemInstance->System,param_1,param_2);
  return (TStatId)(TStatIdData *)CONCAT71(in_register_00000011,param_1);
}

// GetTotalBytesUsed @ 1492a8300

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

long64 __thiscall FNiagaraEmitterInstance::GetTotalBytesUsed(FNiagaraEmitterInstance *this)

{
  if (this->ParticleDataSet == (FNiagaraDataSet *)0x0) {
    return 0;
  }
  return (long64)this->ParticleDataSet->BufferSizeBytes;
}

// GetTotalCPUTimeMS @ 1492a8320

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall FNiagaraEmitterInstance::GetTotalCPUTimeMS(FNiagaraEmitterInstance *this)

{
  return 0.0;
}

// GetUpdateExecutionContext @ 1492a8420

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraScriptExecutionContext * __thiscall
FNiagaraEmitterInstance::GetUpdateExecutionContext(FNiagaraEmitterInstance *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FNiagaraScriptExecutionContext *pFVar4;
  
  lVar3 = (**(code **)(this->_padding_ + 0x68))();
  if (lVar3 != 0) {
    return (FNiagaraScriptExecutionContext *)(lVar3 + 0x450);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("StatefulEmitter",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstance.cpp"
                     ,0xbe,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNiagaraScriptExecutionContext *)(*pcVar1)();
    return pFVar4;
  }
  return (FNiagaraScriptExecutionContext *)0x450;
}

// HasTicked @ 1492a9e20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FNiagaraEmitterInstance::HasTicked(FNiagaraEmitterInstance *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  lVar4 = (**(code **)(this->_padding_ + 0x68))();
  if (lVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StatefulEmitter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstance.cpp"
                       ,0xe8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return 0 < *(int *)(lVar4 + 0x854);
}

// Init @ 1492aa4f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraEmitterInstance::Init(FNiagaraEmitterInstance *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->ParentSystemInstance == (FNiagaraSystemInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentSystemInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstance.cpp"
                       ,0x10,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ParticleDataSet == (FNiagaraDataSet *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParticleDataSet",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstance.cpp"
                       ,0x11,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->EmitterIndex = param_1;
  return;
}

// IsParticleComponentActive @ 1492ad550

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNiagaraEmitterInstance::IsParticleComponentActive
          (FNiagaraEmitterInstance *this,FObjectKey param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  FObjectKey local_res8;
  
  lVar5 = (**(code **)(this->_padding_ + 0x68))();
  if (lVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StatefulEmitter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstance.cpp"
                       ,0xda,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar8 = param_1.ObjectSerialNumber;
  uVar10 = param_1.ObjectIndex - uVar8 ^ uVar8 >> 0xd;
  uVar7 = (-0x61c88647 - uVar10) - uVar8 ^ uVar10 << 8;
  uVar8 = (uVar8 - uVar10) - uVar7 ^ uVar7 >> 0xd;
  uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 0xc;
  uVar7 = (uVar7 - uVar10) - uVar8 ^ uVar10 << 0x10;
  uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 >> 5;
  uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 3;
  uVar7 = (uVar7 - uVar10) - uVar8 ^ uVar10 << 10;
  local_res8 = param_1;
  pTVar6 = TMapBase<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
           ::FindOrAddImpl<FObjectKey_const_&>
                     ((TMapBase<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                       *)(lVar5 + 0x870),(uVar8 - uVar7) - uVar10 ^ uVar7 >> 0xf,&local_res8);
  if (*(int *)&(pTVar6->Elements).field_0x8 != *(int *)&(pTVar6->Elements).field_0x34) {
    FVar9 = (pTVar6->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&pTVar6->Hash;
    }
    iVar4 = *(int *)((longlong)FVar9 + (ulonglong)(pTVar6->HashSize - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        if (*(int *)(*(longlong *)&pTVar6->Elements + (longlong)iVar4 * 0xc) == param_2)
        goto LAB_1492ad66c;
        iVar4 = *(int *)(*(longlong *)&pTVar6->Elements + 4 + (longlong)iVar4 * 0xc);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1492ad66c:
  return iVar4 != -1;
}

// IsReadyToRun @ 1492ad7b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FNiagaraEmitterInstance::IsReadyToRun(FNiagaraEmitterInstance *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  FVersionedNiagaraEmitterData *this_00;
  
  lVar4 = (**(code **)(this->_padding_ + 0x68))();
  if (lVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StatefulEmitter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstance.cpp"
                       ,0xe1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(int *)(lVar4 + 0xd4) != 4) {
    this_00 = FVersionedNiagaraEmitter::GetEmitterData((FVersionedNiagaraEmitter *)(lVar4 + 0x28));
    bVar2 = FVersionedNiagaraEmitterData::IsReadyToRun(this_00);
    if (!bVar2) {
      return false;
    }
  }
  return true;
}

// PreTick @ 1492b0440

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraEmitterInstance::PreTick(FNiagaraEmitterInstance *this)

{
  return;
}

// SetExecutionState @ 1492b54c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraEmitterInstance::SetExecutionState
          (FNiagaraEmitterInstance *this,ENiagaraExecutionState param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ENiagaraExecutionState local_res10 [6];
  ENiagaraExecutionState *local_18;
  longlong local_10;
  
  lVar3 = (**(code **)(this->_padding_ + 0x68))();
  if ((lVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StatefulEmitter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstance.cpp"
                         ,0xef,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (Disabled < param_1) {
    local_18 = local_res10;
    local_res10[0] = param_1;
    local_10 = lVar3;
    bVar2 = `FNiagaraEmitterInstanceImpl::SetExecutionState'::__l3::<lambda_1>::operator()
                      (&local_18);
    param_1 = local_res10[0];
    if (!bVar2) {
      *(undefined4 *)(lVar3 + 0xd4) = 1;
      return;
    }
  }
  if (*(int *)(lVar3 + 0xd4) != 4) {
    *(ENiagaraExecutionState *)(lVar3 + 0xd4) = param_1;
  }
  return;
}

// SetFixedBounds @ 1492b55c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraEmitterInstance::SetFixedBounds(FNiagaraEmitterInstance *this,TBox<double> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->FixedBoundsGuard);
  dVar4 = (param_1->Min).field0_0x0._s_0.Y;
  (this->FixedBounds).Min.field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  (this->FixedBounds).Min.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->Max).field0_0x0._s_0.X;
  (this->FixedBounds).Min.field0_0x0._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  (this->FixedBounds).Max.field0_0x0._s_0.X = dVar4;
  uVar1 = *(undefined4 *)((longlong)&(param_1->Max).field0_0x0 + 0xc);
  uVar2 = *(undefined4 *)((longlong)&(param_1->Max).field0_0x0 + 0x10);
  uVar3 = *(undefined4 *)((longlong)&(param_1->Max).field0_0x0 + 0x14);
  *(undefined4 *)((longlong)&(this->FixedBounds).Max.field0_0x0 + 8) =
       *(undefined4 *)((longlong)&(param_1->Max).field0_0x0 + 8);
  *(undefined4 *)((longlong)&(this->FixedBounds).Max.field0_0x0 + 0xc) = uVar1;
  *(undefined4 *)((longlong)&(this->FixedBounds).Max.field0_0x0 + 0x10) = uVar2;
  *(undefined4 *)((longlong)&(this->FixedBounds).Max.field0_0x0 + 0x14) = uVar3;
  uVar5 = param_1->Pad[0];
  uVar6 = param_1->Pad[1];
  uVar7 = param_1->Pad[2];
  uVar8 = param_1->Pad[3];
  uVar9 = param_1->Pad[4];
  uVar10 = param_1->Pad[5];
  uVar11 = param_1->Pad[6];
  (this->FixedBounds).IsValid = param_1->IsValid;
  (this->FixedBounds).Pad[0] = uVar5;
  (this->FixedBounds).Pad[1] = uVar6;
  (this->FixedBounds).Pad[2] = uVar7;
  (this->FixedBounds).Pad[3] = uVar8;
  (this->FixedBounds).Pad[4] = uVar9;
  (this->FixedBounds).Pad[5] = uVar10;
  (this->FixedBounds).Pad[6] = uVar11;
                    /* WARNING: Could not recover jumptable at 0x0001492b5625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->FixedBoundsGuard);
  return;
}

// SetParticleComponentActive @ 1492b5b90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraEmitterInstance::SetParticleComponentActive
          (FNiagaraEmitterInstance *this,FObjectKey param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_res8 [2];
  FObjectKey local_res10;
  int local_res18 [4];
  
  lVar3 = (**(code **)(this->_padding_ + 0x68))();
  if (lVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StatefulEmitter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstance.cpp"
                       ,0xd3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = param_1.ObjectSerialNumber;
  uVar6 = param_1.ObjectIndex - uVar5 ^ uVar5 >> 0xd;
  uVar4 = (-0x61c88647 - uVar6) - uVar5 ^ uVar6 << 8;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 0x10;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 5;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 10;
  local_res10 = param_1;
  local_res18[0] = param_2;
  this_00 = TMapBase<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
            ::FindOrAddImpl<FObjectKey_const_&>
                      ((TMapBase<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                        *)(lVar3 + 0x870),(uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xf,&local_res10);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (this_00,local_res8,(bool *)local_res18);
  return;
}

// SetSystemFixedBoundsOverride @ 1492b5e90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraEmitterInstance::SetSystemFixedBoundsOverride
          (FNiagaraEmitterInstance *this,TBox<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (param_1->Min).field0_0x0._s_0.Y;
  dVar2 = (param_1->Min).field0_0x0._s_0.Z;
  dVar3 = (param_1->Max).field0_0x0._s_0.X;
  (this->CachedSystemFixedBounds).Min.field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  (this->CachedSystemFixedBounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Max).field0_0x0._s_0.Y;
  dVar4 = (param_1->Max).field0_0x0._s_0.Z;
  (this->CachedSystemFixedBounds).Min.field0_0x0._s_0.Z = dVar2;
  (this->CachedSystemFixedBounds).Max.field0_0x0._s_0.X = dVar3;
  uVar5 = param_1->IsValid;
  uVar6 = param_1->Pad[0];
  uVar7 = param_1->Pad[1];
  uVar8 = param_1->Pad[2];
  uVar9 = param_1->Pad[3];
  uVar10 = param_1->Pad[4];
  uVar11 = param_1->Pad[5];
  uVar12 = param_1->Pad[6];
  (this->CachedSystemFixedBounds).Max.field0_0x0._s_0.Y = dVar1;
  (this->CachedSystemFixedBounds).Max.field0_0x0._s_0.Z = dVar4;
  (this->CachedSystemFixedBounds).IsValid = uVar5;
  (this->CachedSystemFixedBounds).Pad[0] = uVar6;
  (this->CachedSystemFixedBounds).Pad[1] = uVar7;
  (this->CachedSystemFixedBounds).Pad[2] = uVar8;
  (this->CachedSystemFixedBounds).Pad[3] = uVar9;
  (this->CachedSystemFixedBounds).Pad[4] = uVar10;
  (this->CachedSystemFixedBounds).Pad[5] = uVar11;
  (this->CachedSystemFixedBounds).Pad[6] = uVar12;
  return;
}

// GetParticleData @ 149355350

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraDataSet * __thiscall FNiagaraEmitterInstance::GetParticleData(FNiagaraEmitterInstance *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataSet *pFVar3;
  
  if (this->ParticleDataSet != (FNiagaraDataSet *)0x0) {
    return this->ParticleDataSet;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ParticleDataSet",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                     ,0x3a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraDataSet *)(*pcVar1)();
    return pFVar3;
  }
  return this->ParticleDataSet;
}

// GetRenderer @ 1493e92a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UNiagaraRendererProperties * __thiscall
FNiagaraEmitterInstance::GetRenderer(FNiagaraEmitterInstance *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UNiagaraRendererProperties *pUVar3;
  uint uVar4;
  longlong local_18;
  int local_10;
  
  (**(code **)(this->_padding_ + 0x78))(this,&local_18);
  if (-1 < param_1) {
    if (param_1 < local_10) {
      uVar4 = 0;
      if (param_1 < local_10) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar3 = (UNiagaraRendererProperties *)(*pcVar1)();
          return pUVar3;
        }
      }
      return *(UNiagaraRendererProperties **)(local_18 + (longlong)param_1 * 8);
    }
  }
  return (UNiagaraRendererProperties *)0x0;
}

