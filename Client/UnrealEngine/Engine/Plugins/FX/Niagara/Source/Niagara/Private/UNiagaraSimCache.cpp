// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 67

// StaticClass @ 149379040

UClass * __cdecl UNiagaraSimCache::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimCache",
               &Z_Registration_Info_UClass_UNiagaraSimCache.InnerSingleton,
               StaticRegisterNativesUNiagaraSimCache,0x218,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraSimCache>,
               InternalVTableHelperCtorCaller<UNiagaraSimCache>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimCache.InnerSingleton;
}

// UNiagaraSimCache @ 149389590

UNiagaraSimCache * __thiscall
UNiagaraSimCache::UNiagaraSimCache(UNiagaraSimCache *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  UObject::UObject((UObject *)this,param_1);
  puVar1 = &(this->SoftNiagaraSystem).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNiagaraSimCache__6B_;
  (this->CacheGuid).A = 0;
  (this->CacheGuid).B = 0;
  (this->CacheGuid).C = 0;
  (this->CacheGuid).D = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->CreateParameters).AttributeCaptureMode = All;
  (this->CreateParameters).RebaseIncludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  puVar2 = &(this->CreateParameters).field_0x4;
  (this->CreateParameters).bAllowRebasing = 1;
  (this->CreateParameters).bIncludeDebugData = 0;
  (this->CreateParameters).bAllowSerializeLargeCache = 1;
  (this->CreateParameters).bAllowVelocityExtrapolation = 0;
  (this->CreateParameters).bInterpolateAllTypes = 1;
  (this->CreateParameters).bAllowInterpolation = 0;
  (this->CreateParameters).bAllowDataInterfaceCaching = 1;
  (this->CacheLayout).SystemLayout.ComponentVelocity = 0xffff;
  (this->CacheLayout).SystemLayout.CacheBufferWriteInfo.ComponentUniqueID = 0xffff;
  (this->CreateParameters).RebaseIncludeAttributes.ArrayNum = 0;
  (this->CreateParameters).RebaseIncludeAttributes.ArrayMax = 0;
  (this->CreateParameters).RebaseExcludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CreateParameters).RebaseExcludeAttributes.ArrayNum = 0;
  (this->CreateParameters).RebaseExcludeAttributes.ArrayMax = 0;
  (this->CreateParameters).InterpolationIncludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CreateParameters).InterpolationIncludeAttributes.ArrayNum = 0;
  (this->CreateParameters).InterpolationIncludeAttributes.ArrayMax = 0;
  (this->CreateParameters).InterpolationExcludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CreateParameters).InterpolationExcludeAttributes.ArrayNum = 0;
  (this->CreateParameters).InterpolationExcludeAttributes.ArrayMax = 0;
  (this->CreateParameters).ExplicitCaptureAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CreateParameters).ExplicitCaptureAttributes.ArrayNum = 0;
  (this->CreateParameters).ExplicitCaptureAttributes.ArrayMax = 0;
  (this->CacheLayout).SystemLayout.LayoutName.ComparisonIndex = 0;
  (this->CacheLayout).SystemLayout.LayoutName.Number = 0;
  (this->CacheLayout).SystemLayout.SimTarget = CPUSim;
  (this->CacheLayout).SystemLayout.Variables.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->CacheLayout).SystemLayout.Variables.ArrayNum = 0;
  (this->CacheLayout).SystemLayout.Variables.ArrayMax = 0;
  (this->CacheLayout).SystemLayout.FloatCount = 0;
  (this->CacheLayout).SystemLayout.HalfCount = 0;
  (this->CacheLayout).SystemLayout.Int32Count = 0;
  (this->CacheLayout).SystemLayout.bLocalSpace = false;
  (this->CacheLayout).SystemLayout.bAllowInterpolation = false;
  (this->CacheLayout).SystemLayout.bAllowVelocityExtrapolation = false;
  (this->CacheLayout).SystemLayout.RebaseVariableNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CacheLayout).SystemLayout.RebaseVariableNames.ArrayNum = 0;
  (this->CacheLayout).SystemLayout.RebaseVariableNames.ArrayMax = 0;
  (this->CacheLayout).SystemLayout.InterpVariableNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CacheLayout).SystemLayout.InterpVariableNames.ArrayNum = 0;
  (this->CacheLayout).SystemLayout.InterpVariableNames.ArrayMax = 0;
  (this->CacheLayout).SystemLayout.CacheBufferWriteInfo.ComponentMappingsFromDataBuffer.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheLayout).SystemLayout.CacheBufferWriteInfo.ComponentMappingsFromDataBuffer.ArrayNum = 0
  ;
  (this->CacheLayout).SystemLayout.CacheBufferWriteInfo.ComponentMappingsFromDataBuffer.ArrayMax = 0
  ;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo.ComponentMappingsToDataBuffer.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo.ComponentMappingsToDataBuffer.ArrayNum = 0;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo.ComponentMappingsToDataBuffer.ArrayMax = 0;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo.VariableCopyMappingsToDataBuffer.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo.VariableCopyMappingsToDataBuffer.ArrayNum = 0
  ;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo.VariableCopyMappingsToDataBuffer.ArrayMax = 0
  ;
  (this->CacheLayout).SystemLayout.bNeedsCacheBufferReadInfoUpdateForRT = false;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo_RT.ComponentMappingsToDataBuffer.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo_RT.ComponentMappingsToDataBuffer.ArrayNum = 0
  ;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo_RT.ComponentMappingsToDataBuffer.ArrayMax = 0
  ;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo_RT.VariableCopyMappingsToDataBuffer.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo_RT.VariableCopyMappingsToDataBuffer.ArrayNum
       = 0;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo_RT.VariableCopyMappingsToDataBuffer.ArrayMax
       = 0;
  (this->CacheLayout).EmitterLayouts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheLayout).EmitterLayouts.ArrayNum = 0;
  (this->CacheLayout).EmitterLayouts.ArrayMax = 0;
  (this->CacheFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheFrames).ArrayNum = 0;
  (this->CacheFrames).ArrayMax = 0;
  *(undefined8 *)&this->DataInterfaceStorage = 0;
  *(undefined8 *)&(this->DataInterfaceStorage).field_0x8 = 0;
  *(undefined8 *)&(this->DataInterfaceStorage).field_0x20 = 0;
  this->StartSeconds = 0.0;
  this->DurationSeconds = 0.0;
  this->bNeedsReadComponentMappingRecache = true;
  this->bCanRunAsync = false;
  *(undefined4 *)&(this->DataInterfaceStorage).field_0x28 = 0;
  *(undefined4 *)&(this->DataInterfaceStorage).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataInterfaceStorage).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataInterfaceStorage).field_0x34 = 0;
  *(undefined8 *)&(this->DataInterfaceStorage).field_0x40 = 0;
  *(undefined4 *)&(this->DataInterfaceStorage).field_0x48 = 0;
  (this->DebugData).field0_0x0.DebugPtr = (UNiagaraSimCacheDebugData *)0x0;
  this->CaptureTickCount = -1;
  this->CaptureStartTime = 0.0;
  this->PendingCommandsInFlight = (atomic<int>)0x0;
  (this->RWLock).Mutex.Mutex.Ptr = (void *)0x0;
  return this;
}

// UNiagaraSimCache @ 149389770

UNiagaraSimCache * __thiscall
UNiagaraSimCache::UNiagaraSimCache(UNiagaraSimCache *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  UObject::UObject((UObject *)this);
  puVar1 = &(this->SoftNiagaraSystem).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNiagaraSimCache__6B_;
  (this->CacheGuid).A = 0;
  (this->CacheGuid).B = 0;
  (this->CacheGuid).C = 0;
  (this->CacheGuid).D = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->CreateParameters).AttributeCaptureMode = All;
  (this->CreateParameters).RebaseIncludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  puVar2 = &(this->CreateParameters).field_0x4;
  (this->CreateParameters).bAllowRebasing = 1;
  (this->CreateParameters).bIncludeDebugData = 0;
  (this->CreateParameters).bAllowSerializeLargeCache = 1;
  (this->CreateParameters).bAllowVelocityExtrapolation = 0;
  (this->CreateParameters).bInterpolateAllTypes = 1;
  (this->CreateParameters).bAllowInterpolation = 0;
  (this->CreateParameters).bAllowDataInterfaceCaching = 1;
  (this->CacheLayout).SystemLayout.ComponentVelocity = 0xffff;
  (this->CacheLayout).SystemLayout.CacheBufferWriteInfo.ComponentUniqueID = 0xffff;
  (this->CreateParameters).RebaseIncludeAttributes.ArrayNum = 0;
  (this->CreateParameters).RebaseIncludeAttributes.ArrayMax = 0;
  (this->CreateParameters).RebaseExcludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CreateParameters).RebaseExcludeAttributes.ArrayNum = 0;
  (this->CreateParameters).RebaseExcludeAttributes.ArrayMax = 0;
  (this->CreateParameters).InterpolationIncludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CreateParameters).InterpolationIncludeAttributes.ArrayNum = 0;
  (this->CreateParameters).InterpolationIncludeAttributes.ArrayMax = 0;
  (this->CreateParameters).InterpolationExcludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CreateParameters).InterpolationExcludeAttributes.ArrayNum = 0;
  (this->CreateParameters).InterpolationExcludeAttributes.ArrayMax = 0;
  (this->CreateParameters).ExplicitCaptureAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CreateParameters).ExplicitCaptureAttributes.ArrayNum = 0;
  (this->CreateParameters).ExplicitCaptureAttributes.ArrayMax = 0;
  (this->CacheLayout).SystemLayout.LayoutName.ComparisonIndex = 0;
  (this->CacheLayout).SystemLayout.LayoutName.Number = 0;
  (this->CacheLayout).SystemLayout.SimTarget = CPUSim;
  (this->CacheLayout).SystemLayout.Variables.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->CacheLayout).SystemLayout.Variables.ArrayNum = 0;
  (this->CacheLayout).SystemLayout.Variables.ArrayMax = 0;
  (this->CacheLayout).SystemLayout.FloatCount = 0;
  (this->CacheLayout).SystemLayout.HalfCount = 0;
  (this->CacheLayout).SystemLayout.Int32Count = 0;
  (this->CacheLayout).SystemLayout.bLocalSpace = false;
  (this->CacheLayout).SystemLayout.bAllowInterpolation = false;
  (this->CacheLayout).SystemLayout.bAllowVelocityExtrapolation = false;
  (this->CacheLayout).SystemLayout.RebaseVariableNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CacheLayout).SystemLayout.RebaseVariableNames.ArrayNum = 0;
  (this->CacheLayout).SystemLayout.RebaseVariableNames.ArrayMax = 0;
  (this->CacheLayout).SystemLayout.InterpVariableNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CacheLayout).SystemLayout.InterpVariableNames.ArrayNum = 0;
  (this->CacheLayout).SystemLayout.InterpVariableNames.ArrayMax = 0;
  (this->CacheLayout).SystemLayout.CacheBufferWriteInfo.ComponentMappingsFromDataBuffer.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheLayout).SystemLayout.CacheBufferWriteInfo.ComponentMappingsFromDataBuffer.ArrayNum = 0
  ;
  (this->CacheLayout).SystemLayout.CacheBufferWriteInfo.ComponentMappingsFromDataBuffer.ArrayMax = 0
  ;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo.ComponentMappingsToDataBuffer.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo.ComponentMappingsToDataBuffer.ArrayNum = 0;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo.ComponentMappingsToDataBuffer.ArrayMax = 0;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo.VariableCopyMappingsToDataBuffer.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo.VariableCopyMappingsToDataBuffer.ArrayNum = 0
  ;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo.VariableCopyMappingsToDataBuffer.ArrayMax = 0
  ;
  (this->CacheLayout).SystemLayout.bNeedsCacheBufferReadInfoUpdateForRT = false;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo_RT.ComponentMappingsToDataBuffer.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo_RT.ComponentMappingsToDataBuffer.ArrayNum = 0
  ;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo_RT.ComponentMappingsToDataBuffer.ArrayMax = 0
  ;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo_RT.VariableCopyMappingsToDataBuffer.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo_RT.VariableCopyMappingsToDataBuffer.ArrayNum
       = 0;
  (this->CacheLayout).SystemLayout.CacheBufferReadInfo_RT.VariableCopyMappingsToDataBuffer.ArrayMax
       = 0;
  (this->CacheLayout).EmitterLayouts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheLayout).EmitterLayouts.ArrayNum = 0;
  (this->CacheLayout).EmitterLayouts.ArrayMax = 0;
  (this->CacheFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheFrames).ArrayNum = 0;
  (this->CacheFrames).ArrayMax = 0;
  *(undefined8 *)&this->DataInterfaceStorage = 0;
  *(undefined8 *)&(this->DataInterfaceStorage).field_0x8 = 0;
  *(undefined8 *)&(this->DataInterfaceStorage).field_0x20 = 0;
  this->StartSeconds = 0.0;
  this->DurationSeconds = 0.0;
  this->bNeedsReadComponentMappingRecache = true;
  this->bCanRunAsync = false;
  *(undefined4 *)&(this->DataInterfaceStorage).field_0x28 = 0;
  *(undefined4 *)&(this->DataInterfaceStorage).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataInterfaceStorage).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataInterfaceStorage).field_0x34 = 0;
  *(undefined8 *)&(this->DataInterfaceStorage).field_0x40 = 0;
  *(undefined4 *)&(this->DataInterfaceStorage).field_0x48 = 0;
  (this->DebugData).field0_0x0.DebugPtr = (UNiagaraSimCacheDebugData *)0x0;
  this->CaptureTickCount = -1;
  this->CaptureStartTime = 0.0;
  this->PendingCommandsInFlight = (atomic<int>)0x0;
  (this->RWLock).Mutex.Mutex.Ptr = (void *)0x0;
  return this;
}

// ~UNiagaraSimCache @ 14938aae0

void __thiscall UNiagaraSimCache::~UNiagaraSimCache(UNiagaraSimCache *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7UNiagaraSimCache__6B_;
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->RWLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RWLock);
  }
  *(undefined4 *)&(this->DataInterfaceStorage).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DataInterfaceStorage).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DataInterfaceStorage);
  DestructItems<FNiagaraSimCacheFrame,int>
            ((FNiagaraSimCacheFrame *)(this->CacheFrames).AllocatorInstance.Data,
             (this->CacheFrames).ArrayNum);
  pFVar2 = (this->CacheFrames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FNiagaraSimCacheDataBuffersLayout,int>
            ((FNiagaraSimCacheDataBuffersLayout *)
             (this->CacheLayout).EmitterLayouts.AllocatorInstance.Data,
             (this->CacheLayout).EmitterLayouts.ArrayNum);
  pFVar2 = (this->CacheLayout).EmitterLayouts.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FNiagaraSimCacheDataBuffersLayout::~FNiagaraSimCacheDataBuffersLayout
            (&(this->CacheLayout).SystemLayout);
  pFVar2 = (this->CreateParameters).ExplicitCaptureAttributes.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CreateParameters).InterpolationExcludeAttributes.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CreateParameters).InterpolationIncludeAttributes.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CreateParameters).RebaseExcludeAttributes.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CreateParameters).RebaseIncludeAttributes.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14938cb40

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
`UNiagaraSimCache::ReadFrame'::__l21::<lambda_1>::operator()
          (void *this,FNiagaraVariableBase *param_1,UNiagaraDataInterface *param_2)

{
  FName *pFVar1;
  byte bVar2;
  UObject *pUVar3;
  longlong *plVar4;
  byte bVar5;
  uint uVar6;
  TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_> *pTVar7;
  UClass *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  void *pvVar11;
  undefined2 *puVar12;
  longlong lVar13;
  FName *pFVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 local_28 [2];
  undefined1 local_26 [2];
  undefined1 local_24 [12];
  
  pTVar7 = TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                   *)(*(longlong *)this + 0x1a0),param_1);
  if (pTVar7 == (TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_> *)0x0) {
    return true;
  }
  pUVar3 = *(UObject **)&pTVar7->field_0x10;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar3 == (UObject *)0x0) {
      return true;
    }
    UE::GC::MarkAsReachable(pUVar3);
  }
  if ((pUVar3 == (UObject *)0x0) || (param_2 == (UNiagaraDataInterface *)0x0)) {
    return true;
  }
  pUVar8 = Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
  plVar9 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_2,pUVar8);
  if (plVar9 == (longlong *)0x0) {
    return true;
  }
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar6 = ::GetTypeHash(param_1);
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    plVar15 = (longlong *)plVar4[8];
    if ((longlong *)plVar4[8] == (longlong *)0x0) {
      plVar15 = plVar4 + 7;
    }
    iVar16 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar4[9] - 1U & uVar6) * 4);
    if (iVar16 != -1) {
      lVar13 = *plVar4;
      do {
        lVar10 = (longlong)iVar16;
        if ((*(FName *)(lVar13 + lVar10 * 0x14) == param_1->Name) &&
           (*(int *)(lVar13 + 8 + lVar10 * 0x14) == (param_1->TypeDefHandle).RegisteredTypeIndex)) {
          if (iVar16 != -1) {
            return true;
          }
          break;
        }
        iVar16 = *(int *)(lVar13 + 0xc + lVar10 * 0x14);
      } while (iVar16 != -1);
    }
  }
  TSet<FNiagaraVariableBase,DefaultKeyFuncs<FNiagaraVariableBase,0>,FDefaultSetAllocator>::
  Emplace<FNiagaraVariableBase_const_&>
            (*(TSet<FNiagaraVariableBase,DefaultKeyFuncs<FNiagaraVariableBase,0>,FDefaultSetAllocator>
               **)((longlong)this + 8),(FNiagaraVariableBase *)&stack0x00000008,(bool *)param_1);
  **(undefined8 **)((longlong)this + 0x10) = pUVar3;
  pvVar11 = FNiagaraSystemInstance::FindDataInterfaceInstanceData
                      (*(FNiagaraSystemInstance **)(*(longlong *)((longlong)this + 0x18) + 8),
                       param_2);
  *(void **)(*(longlong *)((longlong)this + 0x10) + 0x10) = pvVar11;
  lVar13 = *(longlong *)this;
  if ((*(byte *)(lVar13 + 0x6c) & 4) == 0) {
    puVar12 = (undefined2 *)local_26;
LAB_14938cd0b:
    lVar13 = *(longlong *)((longlong)this + 0x10);
    if (puVar12 == (undefined2 *)(lVar13 + 0x18)) goto LAB_14938cd21;
    *(undefined2 *)(lVar13 + 0x18) = 0x100;
  }
  else {
    pFVar14 = *(FName **)(lVar13 + 0x90);
    pFVar1 = pFVar14 + *(int *)(lVar13 + 0x98);
    if (pFVar14 != pFVar1) {
      do {
        if (*pFVar14 == param_1->Name) {
          lVar13 = *(longlong *)((longlong)this + 0x10);
          if ((undefined2 *)local_28 == (undefined2 *)(lVar13 + 0x18)) goto LAB_14938cd21;
          *(undefined2 *)(lVar13 + 0x18) = 0x101;
          goto LAB_14938cd1d;
        }
        pFVar14 = pFVar14 + 1;
      } while (pFVar14 != pFVar1);
    }
    pFVar14 = *(FName **)(lVar13 + 0xa0);
    pFVar1 = pFVar14 + *(int *)(lVar13 + 0xa8);
    if (pFVar14 != pFVar1) {
      do {
        if (*pFVar14 == param_1->Name) {
          puVar12 = (undefined2 *)(local_28 + 1);
          goto LAB_14938cd0b;
        }
        pFVar14 = pFVar14 + 1;
      } while (pFVar14 != pFVar1);
    }
    lVar13 = *(longlong *)((longlong)this + 0x10);
    if (*(char *)(lVar13 + 0x19) == '\0') goto LAB_14938cd21;
    *(undefined1 *)(lVar13 + 0x19) = 0;
  }
LAB_14938cd1d:
  lVar13 = *(longlong *)((longlong)this + 0x10);
LAB_14938cd21:
  lVar10 = *(longlong *)this;
  if ((*(byte *)(lVar10 + 0x6c) & 1) == 0) {
    puVar12 = (undefined2 *)(local_24 + 1);
LAB_14938cdaf:
    if (puVar12 != (undefined2 *)(lVar13 + 0x28)) {
      *(undefined2 *)(lVar13 + 0x28) = 0x100;
    }
  }
  else {
    pFVar14 = *(FName **)(lVar10 + 0x70);
    pFVar1 = pFVar14 + *(int *)(lVar10 + 0x78);
    if (pFVar14 != pFVar1) {
      do {
        if (*pFVar14 == param_1->Name) {
          puVar12 = (undefined2 *)(*(longlong *)((longlong)this + 0x10) + 0x28);
          if ((undefined2 *)(local_26 + 1) != puVar12) {
            *puVar12 = 0x101;
          }
          goto LAB_14938cdbd;
        }
        pFVar14 = pFVar14 + 1;
      } while (pFVar14 != pFVar1);
    }
    pFVar14 = *(FName **)(lVar10 + 0x80);
    pFVar1 = pFVar14 + *(int *)(lVar10 + 0x88);
    if (pFVar14 != pFVar1) {
      do {
        if (*pFVar14 == param_1->Name) {
          lVar13 = *(longlong *)((longlong)this + 0x10);
          puVar12 = (undefined2 *)local_24;
          goto LAB_14938cdaf;
        }
        pFVar14 = pFVar14 + 1;
      } while (pFVar14 != pFVar1);
    }
    if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x29) != '\0') {
      *(undefined1 *)(*(longlong *)((longlong)this + 0x10) + 0x29) = 0;
    }
  }
LAB_14938cdbd:
  bVar2 = **(byte **)((longlong)this + 0x20);
  bVar5 = (**(code **)(*plVar9 + 0x30))(plVar9,*(undefined8 *)((longlong)this + 0x10));
  **(byte **)((longlong)this + 0x20) = bVar5 & bVar2;
  return true;
}

// operator() @ 14938ce20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UNiagaraSimCache::EndWrite'::__l30::<lambda_1>::operator()
          (void *this,FNiagaraSimCacheDataBuffersLayout *param_1,
          FNiagaraSimCacheDataBuffers *param_2,FNiagaraSimCacheDataBuffers *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  uint *puVar15;
  ForElementType<unsigned_int> FVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_128 [32];
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_e8;
  undefined4 local_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  int local_cc;
  TPairInitializer<int_&&,int_const_&> local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  uint *local_98;
  uint *local_90;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (param_1->bAllowInterpolation == false) {
    return;
  }
  uVar11 = (param_3->InterpMapping).ArrayNum;
  pFVar17 = (FScriptContainerElement *)0x0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (uVar11 == 0) goto LAB_14938d0a8;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar11);
  if (uVar11 < 4) {
    uVar11 = 1;
  }
  else {
    uVar13 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    local_d0 = (undefined4)lVar1;
    uVar11 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar11 <= (int)local_40)) goto LAB_14938d0a8;
  local_40 = uVar11;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar11 != 0) {
    uVar4 = uVar11;
    if (uVar11 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14938cf0d;
      }
    }
    else {
LAB_14938cf0d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar4,4);
    }
    if (0 < (int)uVar11) {
      uVar13 = (ulonglong)uVar11;
      pFVar10 = pFVar17;
      do {
        FVar9.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_48.Data;
        }
        uVar6 = (ulonglong)pFVar10 & (longlong)(int)uVar11 - 1U;
        pFVar10 = pFVar10 + 1;
        *(undefined4 *)(FVar9.Data + uVar6 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (local_40 != 0) {
    pTStack_e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_f0 = 0;
    uStack_ec = 1;
    uStack_dc = 0;
    uStack_d8 = 0;
    pFVar10 = pFVar17;
    if (local_60 != 0) {
      FVar16 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_68;
      }
      uVar11 = *(uint *)FVar16;
      pFVar14 = pFVar17;
      while (uVar11 == 0) {
        uStack_d8 = (int)pFVar14 + 0x20;
        pFVar14 = (FScriptContainerElement *)(ulonglong)uStack_d8;
        iVar8 = (int)pFVar10;
        local_f0 = iVar8 + 1;
        pFVar10 = (FScriptContainerElement *)(ulonglong)local_f0;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_f0)
        goto LAB_14938d013;
        uVar11 = ((uint *)((longlong)FVar16 + 4))[iVar8];
      }
      uStack_ec = -uVar11 & uVar11;
      uVar13 = (ulonglong)uStack_ec * 2 + 1;
      lVar1 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      local_cc = (int)lVar1;
      uStack_dc = local_cc + -1 + uStack_d8;
      pFVar10 = (FScriptContainerElement *)(ulonglong)uStack_dc;
      if ((int)local_60 < (int)uStack_dc) {
LAB_14938d013:
        pFVar10 = (FScriptContainerElement *)(ulonglong)local_60;
        uStack_dc = local_60;
      }
    }
    local_e0 = 0xffffffff;
    local_c8.Value = (int *)local_88;
    local_b8._padding_ = CONCAT44(uStack_ec,local_f0);
    local_b8.CurrentBitIndex = uStack_dc;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_d4;
    local_b8.BaseBitIndex = uStack_d8;
    local_b8.Array = pTStack_e8;
    if ((int)pFVar10 < (int)local_60) {
      do {
        puVar15 = (uint *)((longlong)(int)pFVar10 * 0x10 + *(longlong *)local_c8.Value);
        uVar11 = local_40 - 1 & *puVar15;
        puVar15[3] = uVar11;
        FVar9.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_48.Data;
        }
        uVar13 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar11;
        puVar15[2] = *(uint *)(FVar9.Data + uVar13 * 4);
        *(int *)(FVar9.Data + uVar13 * 4) = (int)pFVar10;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        pFVar10 = (FScriptContainerElement *)(ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_14938d0a8:
  local_f8 = 0;
  uVar11 = 0;
  pFVar10 = pFVar17;
  if (0 < (param_3->InterpMapping).ArrayNum) {
    do {
      uVar12 = (uint)pFVar10;
      uVar4 = uVar11;
      if ((int)uVar12 < (param_3->InterpMapping).ArrayNum) {
        uVar4 = ~uVar12 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_f4 = (param_3->InterpMapping).DataPtr[(int)uVar12];
      local_98 = &local_f4;
      local_90 = &local_f8;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_&&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)local_88,&local_c8,(bool *)&local_98);
      local_f8 = local_f8 + 1;
      pFVar10 = (FScriptContainerElement *)(ulonglong)local_f8;
    } while ((int)local_f8 < (param_3->InterpMapping).ArrayNum);
  }
  pFVar10 = pFVar17;
  pFVar14 = pFVar17;
  if (0 < (param_2->InterpMapping).ArrayNum) {
    do {
      uVar12 = (uint)pFVar10;
      uVar4 = uVar11;
      if ((int)uVar12 < (param_2->InterpMapping).ArrayNum) {
        uVar4 = ~uVar12 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_88._8_4_ != local_54) {
        FVar9.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_48.Data;
        }
        uVar4 = *(uint *)(FVar9.Data +
                         (ulonglong)
                         (local_40 - 1 &
                         *(uint *)(pFVar14 + (longlong)(param_2->InterpMapping).DataPtr)) * 4);
        while (uVar4 != 0xffffffff) {
          pFVar10 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)(int)uVar4 * 0x10);
          if (*(uint *)pFVar10 == *(uint *)(pFVar14 + (longlong)(param_2->InterpMapping).DataPtr)) {
            pFVar7 = pFVar10 + 4;
            if (pFVar10 == (FScriptContainerElement *)0x0) {
              pFVar7 = pFVar17;
            }
            if (pFVar7 != (FScriptContainerElement *)0x0) {
              uVar4 = *(uint *)pFVar7;
              goto LAB_14938d211;
            }
            break;
          }
          uVar4 = *(uint *)(pFVar10 + 8);
        }
      }
      uVar4 = 0xffffffff;
LAB_14938d211:
      uVar5 = uVar11;
      if ((int)uVar12 < (param_2->InterpMapping).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(uint *)(pFVar14 + (longlong)(param_2->InterpMapping).DataPtr) = uVar4;
      pFVar10 = (FScriptContainerElement *)(ulonglong)(uVar12 + 1);
      pFVar14 = pFVar14 + 4;
    } while ((int)(uVar12 + 1) < (param_2->InterpMapping).ArrayNum);
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  iVar8 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = -1;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// operator() @ 14938d360

bool __thiscall
`UNiagaraSimCache::BeginWrite'::__l31::<lambda_1>::operator()
          (void *this,FDataInterfaceUsageContext *param_1)

{
  FName *pFVar1;
  UNiagaraDataInterface *this_00;
  UClass *pUVar2;
  longlong *plVar3;
  int iVar4;
  FName *pFVar5;
  undefined1 local_res10 [8];
  FName *local_18 [2];
  
  this_00 = param_1->DataInterface;
  if (this_00 != (UNiagaraDataInterface *)0x0) {
    pUVar2 = Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x48))(plVar3,local_18,param_1->OwnerObject);
      iVar4 = (int)local_18[1];
      pFVar1 = (FName *)((longlong)local_18[0] + (longlong)iVar4 * 0xc);
      pFVar5 = local_18[0];
      while( true ) {
        if ((int)local_18[1] != iVar4) {
          `TCheckedPointerIterator<FNiagaraVariableBase,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar5 == pFVar1) break;
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                  ((TArray<FName,TSizedDefaultAllocator<32>_> *)(*(longlong *)this + 0xb0),pFVar5);
        pFVar5 = (FName *)&pFVar5[1].Number;
      }
      if (local_18[0] != (FName *)0x0) {
        FMemory::Free(local_18[0]);
      }
    }
  }
  return true;
}

// operator() @ 14938db80

void __thiscall
`UNiagaraSimCache::EndWrite'::__l30::<lambda_2>::operator()
          (void *this,FNiagaraSimCacheDataBuffersLayout *param_1,
          FNiagaraSimCacheDataBuffers *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((param_1->bAllowInterpolation != false) && (uVar4 = 0, 0 < (param_2->InterpMapping).ArrayNum))
  {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (param_2->InterpMapping).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar5 + (longlong)(param_2->InterpMapping).DataPtr) = 0xffffffff;
      lVar5 = lVar5 + 4;
    } while ((int)uVar4 < (param_2->InterpMapping).ArrayNum);
  }
  return;
}

// operator() @ 14938dc20

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
`UNiagaraSimCache::BeginWrite'::__l44::<lambda_2>::operator()
          (void *this,FNiagaraVariableBase *param_1,UNiagaraDataInterface *param_2)

{
  FName *pFVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  FName *pFVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  void *pvVar9;
  TObjectPtr<UObject> TVar10;
  TObjectPtr<UObject>_u_0 *pTVar11;
  longlong *plVar12;
  int iVar13;
  
  iVar13 = *(int *)(*(longlong *)this + 0xb8);
  if (iVar13 == 0) {
LAB_14938dc6c:
    if (param_2 != (UNiagaraDataInterface *)0x0) {
      pUVar6 = Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
      plVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_2,pUVar6);
      if (plVar7 == (longlong *)0x0) {
        return true;
      }
      plVar2 = *(longlong **)((longlong)this + 8);
      uVar4 = ::GetTypeHash(param_1);
      if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
        plVar12 = (longlong *)plVar2[8];
        if ((longlong *)plVar2[8] == (longlong *)0x0) {
          plVar12 = plVar2 + 7;
        }
        iVar13 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar2[9] - 1U & uVar4) * 4);
        if (iVar13 != -1) {
          lVar3 = *plVar2;
          do {
            lVar8 = (longlong)iVar13;
            if ((*(FName *)(lVar3 + lVar8 * 0x14) == param_1->Name) &&
               (*(int *)(lVar3 + 8 + lVar8 * 0x14) == (param_1->TypeDefHandle).RegisteredTypeIndex))
            {
              if (iVar13 != -1) {
                return true;
              }
              break;
            }
            iVar13 = *(int *)(lVar3 + 0xc + lVar8 * 0x14);
          } while (iVar13 != -1);
        }
      }
      TSet<FNiagaraVariableBase,DefaultKeyFuncs<FNiagaraVariableBase,0>,FDefaultSetAllocator>::
      Emplace<FNiagaraVariableBase_const_&>
                (*(TSet<FNiagaraVariableBase,DefaultKeyFuncs<FNiagaraVariableBase,0>,FDefaultSetAllocator>
                   **)((longlong)this + 8),(FNiagaraVariableBase *)&stack0x00000008,(bool *)param_1)
      ;
      pvVar9 = FNiagaraSystemInstance::FindDataInterfaceInstanceData
                         (*(FNiagaraSystemInstance **)(*(longlong *)((longlong)this + 0x10) + 8),
                          param_2);
      TVar10.field0_0x0 =
           (TObjectPtr<UObject>_u_0)
           (**(code **)(*plVar7 + 0x10))
                     (plVar7,*(undefined8 *)this,
                      *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 8),pvVar9,
                      *(undefined8 *)((longlong)this + 0x18));
      if (TVar10.field0_0x0 != (UObject *)0x0) {
        lVar3 = *(longlong *)this;
        uVar4 = ::GetTypeHash(param_1);
        pTVar11 = &TMapBase<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
                   ::FindOrAddImpl<FNiagaraVariableBase_const_&>
                             ((TMapBase<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
                               *)(lVar3 + 0x1a0),uVar4,param_1)->field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar10.field0_0x0);
        }
        *pTVar11 = TVar10.field0_0x0;
      }
      return true;
    }
  }
  else {
    pFVar5 = *(FName **)(*(longlong *)this + 0xb0);
    pFVar1 = pFVar5 + iVar13;
    if (pFVar5 != pFVar1) {
      do {
        if (*pFVar5 == param_1->Name) goto LAB_14938dc6c;
        pFVar5 = pFVar5 + 1;
      } while (pFVar5 != pFVar1);
    }
  }
  return true;
}

// operator() @ 14938ddc0

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
`UNiagaraSimCache::WriteFrame'::__l53::<lambda_2>::operator()
          (void *this,FNiagaraVariableBase *param_1,UNiagaraDataInterface *param_2)

{
  UObject *pUVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_> *pTVar5;
  longlong lVar6;
  UClass *pUVar7;
  longlong *plVar8;
  void *pvVar9;
  FString *pFVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int iVar14;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  pTVar5 = TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                   *)(*(longlong *)this + 0x1a0),param_1);
  if (pTVar5 != (TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_> *)0x0) {
    pUVar1 = *(UObject **)&pTVar5->field_0x10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 == (UObject *)0x0) {
        return true;
      }
      UE::GC::MarkAsReachable(pUVar1);
    }
    if (pUVar1 != (UObject *)0x0) {
      plVar8 = *(longlong **)((longlong)this + 8);
      uVar4 = ::GetTypeHash(param_1);
      if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
        plVar11 = (longlong *)plVar8[8];
        if ((longlong *)plVar8[8] == (longlong *)0x0) {
          plVar11 = plVar8 + 7;
        }
        iVar14 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar8[9] - 1U & uVar4) * 4);
        if (iVar14 != -1) {
          lVar2 = *plVar8;
          do {
            lVar6 = (longlong)iVar14;
            if ((*(FName *)(lVar2 + lVar6 * 0x14) == param_1->Name) &&
               (*(int *)(lVar2 + 8 + lVar6 * 0x14) == (param_1->TypeDefHandle).RegisteredTypeIndex))
            {
              if (iVar14 != -1) {
                return true;
              }
              break;
            }
            iVar14 = *(int *)(lVar2 + 0xc + lVar6 * 0x14);
          } while (iVar14 != -1);
        }
      }
      TSet<FNiagaraVariableBase,DefaultKeyFuncs<FNiagaraVariableBase,0>,FDefaultSetAllocator>::
      Emplace<FNiagaraVariableBase_const_&>
                (*(TSet<FNiagaraVariableBase,DefaultKeyFuncs<FNiagaraVariableBase,0>,FDefaultSetAllocator>
                   **)((longlong)this + 8),(FNiagaraVariableBase *)&local_res8,(bool *)param_1);
      if (param_2 == (UNiagaraDataInterface *)0x0) {
        pFVar10 = GetTypeName<INiagaraSimCacheCustomStorageInterface>(&local_28);
        if ((pFVar10->Data).ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar12);
      }
      pUVar7 = Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
      plVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_2,pUVar7);
      if (plVar8 == (longlong *)0x0) {
        pFVar10 = GetTypeName<INiagaraSimCacheCustomStorageInterface>(&local_28);
        pwVar12 = L"";
        if ((pFVar10->Data).ArrayNum == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
        pFVar10 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_38,param_2);
        if ((pFVar10->Data).ArrayNum != 0) {
          pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar12,pwVar13);
      }
      pvVar9 = FNiagaraSystemInstance::FindDataInterfaceInstanceData
                         (*(FNiagaraSystemInstance **)(*(longlong *)((longlong)this + 0x10) + 8),
                          param_2);
      cVar3 = (**(code **)(*plVar8 + 0x18))
                        (plVar8,pUVar1,**(undefined4 **)((longlong)this + 0x18),
                         *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 8),pvVar9,
                         *(undefined8 *)((longlong)this + 0x20));
      if (cVar3 == '\0') {
        **(undefined1 **)((longlong)this + 0x28) = 0;
        local_res8 = (FName)param_2->_padding_;
        ::FName::ToString(&local_res8,&local_28);
        ::FString::PrintfImpl(&local_38,L"%s ");
        iVar14 = local_38.Data.ArrayNum + -1;
        if (local_38.Data.ArrayNum == 0) {
          iVar14 = 0;
        }
        ::FString::AppendChars
                  (*(FString **)((longlong)this + 0x30),
                   (wchar_t *)local_38.Data.AllocatorInstance.Data,iVar14);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return true;
}

// BeginAppend @ 14938fc70

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraSimCache::BeginAppend
          (UNiagaraSimCache *this,FNiagaraSimCacheCreateParameters *param_1,
          UNiagaraComponent *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FNiagaraSimCacheCreateParameters *pFVar3;
  FNiagaraSimCacheFeedbackContext local_88;
  FNiagaraSimCacheCreateParameters local_60;
  
  local_88.bAutoLogIssues = true;
  local_88.Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Errors.ArrayNum = 0;
  local_88.Errors.ArrayMax = 0;
  local_88.Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Warnings.ArrayNum = 0;
  local_88.Warnings.ArrayMax = 0;
  pFVar3 = FNiagaraSimCacheCreateParameters::FNiagaraSimCacheCreateParameters(&local_60,param_1);
  bVar2 = BeginAppend(this,pFVar3,param_2,&local_88);
  FNiagaraSimCacheFeedbackContext::~FNiagaraSimCacheFeedbackContext(&local_88);
  pFVar1 = (param_1->ExplicitCaptureAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->InterpolationExcludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->InterpolationIncludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->RebaseExcludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->RebaseIncludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return bVar2;
}

// BeginAppend @ 14938fd30

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraSimCache::BeginAppend
          (UNiagaraSimCache *this,FNiagaraSimCacheCreateParameters *param_1,
          UNiagaraComponent *param_2,FNiagaraSimCacheFeedbackContext *param_3)

{
  int *piVar1;
  FPlatformRWLock *SRWLock;
  TArray<FNiagaraSimCacheFrame,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  UNiagaraSystem *pUVar10;
  UClass *pUVar11;
  FNiagaraSimCacheCreateParameters *pFVar12;
  FNiagaraSimCacheCreateParameters *pFVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar19;
  uint uVar20;
  LARGE_INTEGER local_res8;
  FNiagaraSimCacheFeedbackContext local_148;
  FNiagaraSimCacheHelper local_120;
  FNiagaraSimCacheCreateParameters local_f0;
  FNiagaraSimCacheCreateParameters local_98;
  ulonglong uVar18;
  
  SRWLock = &this->RWLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if ((this->PendingCommandsInFlight != (atomic<int>)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingCommandsInFlight == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCache.cpp"
                         ,0x212,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  TMulticastDelegate<void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>::Broadcast
            (&OnCacheBeginWrite,this);
  FNiagaraSimCacheHelper::FNiagaraSimCacheHelper(&local_120,param_2);
  if (local_120.SystemSimulation.Object == (FNiagaraSystemSimulation *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_120.SystemSimulation.SharedReferenceCount.ReferenceController);
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    FNiagaraSimCacheCreateParameters::~FNiagaraSimCacheCreateParameters(param_1);
    return false;
  }
  if ((((this->CacheGuid).D == 0 && (this->CacheGuid).C == 0) && (this->CacheGuid).B == 0) &&
      (this->CacheGuid).A == 0) goto LAB_149390233;
  pUVar10 = (UNiagaraSystem *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SoftNiagaraSystem);
  if (pUVar10 == (UNiagaraSystem *)0x0) {
LAB_14938fe61:
    pUVar10 = (UNiagaraSystem *)0x0;
  }
  else {
    pUVar11 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    iVar14 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar14) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
        &pUVar11->_padding_)) goto LAB_14938fe61;
  }
  if (pUVar10 != local_120.NiagaraSystem) {
LAB_149390233:
    pFVar12 = FNiagaraSimCacheCreateParameters::FNiagaraSimCacheCreateParameters(&local_f0,param_1);
    local_148.bAutoLogIssues = true;
    local_148.Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Errors.ArrayNum = 0;
    local_148.Errors.ArrayMax = 0;
    local_148.Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Warnings.ArrayNum = 0;
    local_148.Warnings.ArrayMax = 0;
    pFVar13 = FNiagaraSimCacheCreateParameters::FNiagaraSimCacheCreateParameters(&local_98,pFVar12);
    bVar6 = BeginWrite(this,pFVar13,param_2,&local_148);
    FNiagaraSimCacheFeedbackContext::~FNiagaraSimCacheFeedbackContext(&local_148);
    pFVar2 = (pFVar12->ExplicitCaptureAttributes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar12->InterpolationExcludeAttributes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar12->InterpolationIncludeAttributes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar12->RebaseExcludeAttributes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar12->RebaseIncludeAttributes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_120.SystemSimulation.SharedReferenceCount.ReferenceController);
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    FNiagaraSimCacheCreateParameters::~FNiagaraSimCacheCreateParameters(param_1);
    return bVar6;
  }
  fVar3 = (local_120.SystemInstance)->Age;
  iVar14 = (local_120.SystemInstance)->TickCount;
  if ((fVar3 <= this->StartSeconds) || (iVar14 == 0)) {
    DestructItems<FNiagaraSimCacheFrame,int>
              ((FNiagaraSimCacheFrame *)(this->CacheFrames).AllocatorInstance.Data,
               (this->CacheFrames).ArrayNum);
    piVar1 = &(this->CacheFrames).ArrayMax;
    (this->CacheFrames).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x160,0x10,0,&(this->CacheFrames).AllocatorInstance,0,piVar1);
    }
    goto LAB_14939017b;
  }
  if (this->StartSeconds + this->DurationSeconds < fVar3) goto LAB_14939017b;
  uVar16 = (this->CacheFrames).ArrayNum;
  uVar17 = (ulonglong)(int)uVar16;
  if (0 < (int)uVar16) {
    uVar18 = uVar17;
    lVar19 = uVar17 * 0x160;
    uVar20 = uVar16;
    do {
      uVar20 = uVar20 - 1;
      uVar16 = (uint)uVar18;
      uVar8 = 0;
      if ((int)uVar20 < (this->CacheFrames).ArrayNum) {
        uVar8 = ~uVar20 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar4 = (this->CacheFrames).AllocatorInstance.Data;
      pFVar2 = pFVar4 + lVar19 + -0xf4;
      if ((*(float *)pFVar2 <= fVar3 && fVar3 != *(float *)pFVar2) &&
         (*(int *)(pFVar4 + lVar19 + -0xf0) < iVar14)) break;
      uVar16 = uVar16 - 1;
      uVar18 = (ulonglong)uVar16;
      uVar17 = uVar17 - 1;
      lVar19 = lVar19 + -0x160;
    } while (0 < (longlong)uVar17);
  }
  if (uVar16 == (this->CacheFrames).ArrayNum) goto LAB_14939017b;
  this_00 = &this->CacheFrames;
  iVar15 = (this->CacheFrames).ArrayNum;
  piVar1 = &(this->CacheFrames).ArrayNum;
  if (iVar15 < (int)uVar16) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x160,0x10,uVar16 - iVar15,&this_00->AllocatorInstance,piVar1,
                       &(this->CacheFrames).ArrayMax);
    DefaultConstructItems<FNiagaraSimCacheFrame,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar9 * 0x160,uVar16 - iVar15);
  }
  else {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if ((int)uVar16 < iVar15) {
      iVar15 = iVar15 - uVar16;
      if (iVar15 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      else if (iVar15 == 0) goto LAB_149390040;
      TArray<FNiagaraSimCacheFrame,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar16,iVar15)
      ;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x160,0x10,&this_00->AllocatorInstance,*piVar1,&(this->CacheFrames).ArrayMax);
    }
  }
LAB_149390040:
  if (0 < (this->CacheFrames).ArrayNum) {
    uVar20 = *piVar1 - 1;
    uVar16 = 0;
    if ((int)uVar20 < *piVar1) {
      uVar16 = ~uVar20 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    this->DurationSeconds =
         *(float *)((this_00->AllocatorInstance).Data + (longlong)*piVar1 * 0x160 + -0xf4) -
         this->StartSeconds;
    iVar15 = (this->CacheFrames).ArrayNum;
    uVar20 = iVar15 - 1;
    uVar16 = 0;
    if ((int)uVar20 < iVar15) {
      uVar16 = ~uVar20 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    this->CaptureTickCount =
         *(int *)((this->CacheFrames).AllocatorInstance.Data +
                 (longlong)(this->CacheFrames).ArrayNum * 0x160 + -0xf0);
  }
LAB_14939017b:
  (this->DebugData).field0_0x0.DebugPtr = (UNiagaraSimCacheDebugData *)0x0;
  if ((this->CacheFrames).ArrayNum == 0) {
    this->StartSeconds = 0.0;
    this->DurationSeconds = 0.0;
    iVar14 = -1;
  }
  else {
    iVar14 = iVar14 + -1;
  }
  this->CaptureTickCount = iVar14;
  QueryPerformanceCounter(&local_res8);
  this->CaptureStartTime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.SystemSimulation.SharedReferenceCount.ReferenceController);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  FNiagaraSimCacheCreateParameters::~FNiagaraSimCacheCreateParameters(param_1);
  return true;
}

// BeginWrite @ 149390370

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraSimCache::BeginWrite
          (UNiagaraSimCache *this,FNiagaraSimCacheCreateParameters *param_1,
          UNiagaraComponent *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FNiagaraSimCacheCreateParameters *pFVar3;
  FNiagaraSimCacheFeedbackContext local_88;
  FNiagaraSimCacheCreateParameters local_60;
  
  local_88.bAutoLogIssues = true;
  local_88.Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Errors.ArrayNum = 0;
  local_88.Errors.ArrayMax = 0;
  local_88.Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Warnings.ArrayNum = 0;
  local_88.Warnings.ArrayMax = 0;
  pFVar3 = FNiagaraSimCacheCreateParameters::FNiagaraSimCacheCreateParameters(&local_60,param_1);
  bVar2 = BeginWrite(this,pFVar3,param_2,&local_88);
  FNiagaraSimCacheFeedbackContext::~FNiagaraSimCacheFeedbackContext(&local_88);
  pFVar1 = (param_1->ExplicitCaptureAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->InterpolationExcludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->InterpolationIncludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->RebaseExcludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->RebaseIncludeAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return bVar2;
}

// BeginWrite @ 149390430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000149390ba7) */
/* WARNING: Removing unreachable block (ram,0x0001493905ae) */
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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall
UNiagaraSimCache::BeginWrite
          (UNiagaraSimCache *this,FNiagaraSimCacheCreateParameters *param_1,
          UNiagaraComponent *param_2,FNiagaraSimCacheFeedbackContext *param_3)

{
  int *piVar1;
  FPlatformRWLock *SRWLock;
  TMap<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
  *this_00;
  FName *pFVar2;
  undefined1 *puVar3;
  UObjectBase *this_01;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FNiagaraSimCacheFeedbackContext *pFVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  FGuid *pFVar12;
  FUObjectItem *pFVar13;
  UClass *pUVar14;
  UNiagaraSimCacheDebugData *pUVar15;
  FScriptContainerElement *pFVar16;
  FNiagaraEmitterHandle *this_02;
  FString *pFVar17;
  void *pvVar18;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  ulong64 uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  TArray<FNiagaraSimCacheDataBuffersLayout,TSizedDefaultAllocator<32>_> *pTVar27;
  FName *pFVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  FNiagaraSimCacheCreateParameters *pFVar31;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_03;
  undefined1 auStackY_c28 [32];
  FString local_be0;
  FString local_bd0;
  FNiagaraSimCacheCreateParameters *local_bc0;
  FNiagaraSimCacheFeedbackContext *local_bb8;
  FNiagaraSimCacheCreateParameters *local_bb0;
  FNiagaraSimCacheHelper local_ba8;
  FString local_b80;
  FString local_b70;
  undefined4 local_b60;
  UNiagaraSystem *local_b58;
  LARGE_INTEGER local_b50;
  FName local_b48 [2];
  longlong *local_b38;
  undefined1 auStack_b30 [16];
  uint uStack_b20;
  uint uStack_b1c;
  longlong local_b18;
  TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  *pTStack_b10;
  TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  *local_b08;
  undefined2 local_b00;
  FName *local_af8;
  int local_af0;
  FNiagaraSimCacheDataBuffersLayout local_ae8;
  ForAnyElementType local_a30;
  undefined8 local_a28;
  FString local_a18;
  code *local_a08 [2];
  undefined **local_9f8;
  UNiagaraSimCache *local_9f0;
  undefined8 local_9e0;
  undefined1 local_9d8 [32];
  longlong local_9b8;
  TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  *pTStack_9b0;
  code *local_9a8 [5];
  undefined8 *local_980;
  FGuid local_978;
  undefined1 local_968 [128];
  TSparseArray<TSparseSetElement<FNiagaraVariableBase>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_8e8;
  void *local_8a8;
  undefined4 local_8a0;
  TStringBuilderBase<wchar_t> local_898;
  wchar_t local_878 [1035];
  wchar_t local_62 [5];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_c28;
  SRWLock = &this->RWLock;
  local_bb8 = param_3;
  local_bb0 = param_1;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if ((this->PendingCommandsInFlight != (atomic<int>)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingCommandsInFlight == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCache.cpp"
                         ,0x13f,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  TMulticastDelegate<void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>::Broadcast
            (&OnCacheBeginWrite,this);
  FNiagaraSimCacheHelper::FNiagaraSimCacheHelper(&local_ba8,param_2);
  if (local_ba8.SystemSimulation.Object == (FNiagaraSystemSimulation *)0x0) {
    if (local_ba8.NiagaraSystem == (UNiagaraSystem *)0x0) {
      ::FString::FString(&local_b80,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_ba8.NiagaraSystem,&local_b80,(UObject *)0x0);
    }
    ::FString::PrintfImpl(&local_be0,L"No valid simulation data for %s");
    iVar10 = (param_3->Errors).ArrayNum;
    piVar1 = &(param_3->Errors).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(param_3->Errors).AllocatorInstance,piVar1);
    }
    lVar22 = (longlong)iVar10;
    (param_3->Errors).ArrayNum = iVar10 + 1;
    pFVar30 = (param_3->Errors).AllocatorInstance.Data;
    *(undefined8 *)(pFVar30 + lVar22 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar30 + lVar22 * 0x10) = local_be0.Data.AllocatorInstance.Data;
    *(int *)(pFVar30 + lVar22 * 0x10 + 8) = local_be0.Data.ArrayNum;
    *(int *)(pFVar30 + lVar22 * 0x10 + 0xc) = local_be0.Data.ArrayMax;
    local_be0.Data.ArrayNum = 0;
    local_be0.Data.ArrayMax = 0;
    local_be0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_b80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b80.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ba8.SystemSimulation.SharedReferenceCount.ReferenceController);
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    FNiagaraSimCacheCreateParameters::~FNiagaraSimCacheCreateParameters(param_1);
    bVar8 = false;
  }
  else {
    if ((((this->CacheGuid).D == 0 && (this->CacheGuid).C == 0) && (this->CacheGuid).B == 0) &&
        (this->CacheGuid).A == 0) {
      pFVar12 = FGuid::NewGuid(&local_978);
      uVar24 = pFVar12->B;
      uVar29 = pFVar12->C;
      uVar26 = pFVar12->D;
      (this->CacheGuid).A = pFVar12->A;
      (this->CacheGuid).B = uVar24;
      (this->CacheGuid).C = uVar29;
      (this->CacheGuid).D = uVar26;
    }
    local_b58 = local_ba8.NiagaraSystem;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_ba8.NiagaraSystem != (UNiagaraSystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_ba8.NiagaraSystem);
    }
    FSoftObjectPtr::operator=(&(this->SoftNiagaraSystem).SoftObjectPtr,(FObjectPtr)&local_b58);
    local_bc0 = &this->CreateParameters;
    FNiagaraSimCacheCreateParameters::operator=(local_bc0,param_1);
    uVar25 = 0;
    this->StartSeconds = 0.0;
    this->DurationSeconds = 0.0;
    memset(&local_ae8,0,200);
    local_ae8.CacheBufferWriteInfo.ComponentMappingsFromDataBuffer.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_ae8.ComponentVelocity = 0xffff;
    local_ae8.CacheBufferWriteInfo.ComponentUniqueID = 0xffff;
    local_ae8.CacheBufferWriteInfo.ComponentMappingsFromDataBuffer.ArrayNum = 0;
    local_ae8.CacheBufferWriteInfo.ComponentMappingsFromDataBuffer.ArrayMax = 0;
    local_ae8.CacheBufferReadInfo.ComponentMappingsToDataBuffer.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_ae8.CacheBufferReadInfo.ComponentMappingsToDataBuffer.ArrayNum = 0;
    local_ae8.CacheBufferReadInfo.ComponentMappingsToDataBuffer.ArrayMax = 0;
    local_ae8.CacheBufferReadInfo.VariableCopyMappingsToDataBuffer.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_ae8.CacheBufferReadInfo.VariableCopyMappingsToDataBuffer.ArrayNum = 0;
    local_ae8.CacheBufferReadInfo.VariableCopyMappingsToDataBuffer.ArrayMax = 0;
    local_ae8.bNeedsCacheBufferReadInfoUpdateForRT = false;
    local_ae8.CacheBufferReadInfo_RT.ComponentMappingsToDataBuffer.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_ae8.CacheBufferReadInfo_RT.ComponentMappingsToDataBuffer.ArrayNum = 0;
    local_ae8.CacheBufferReadInfo_RT.ComponentMappingsToDataBuffer.ArrayMax = 0;
    local_ae8.CacheBufferReadInfo_RT.VariableCopyMappingsToDataBuffer.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_ae8.CacheBufferReadInfo_RT.VariableCopyMappingsToDataBuffer.ArrayNum = 0;
    local_ae8.CacheBufferReadInfo_RT.VariableCopyMappingsToDataBuffer.ArrayMax = 0;
    local_a30.Data = (FScriptContainerElement *)0x0;
    local_a28 = 0;
    FNiagaraSimCacheDataBuffersLayout::operator=(&(this->CacheLayout).SystemLayout,&local_ae8);
    pTVar27 = &(this->CacheLayout).EmitterLayouts;
    uVar24 = 0;
    if (pTVar27 ==
        (TArray<FNiagaraSimCacheDataBuffersLayout,TSizedDefaultAllocator<32>_> *)&local_a30) {
    }
    else {
      DestructItems<FNiagaraSimCacheDataBuffersLayout,int>
                ((FNiagaraSimCacheDataBuffersLayout *)(pTVar27->AllocatorInstance).Data,
                 (this->CacheLayout).EmitterLayouts.ArrayNum);
      pFVar30 = (pTVar27->AllocatorInstance).Data;
      if (pFVar30 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar30);
      }
      (pTVar27->AllocatorInstance).Data = local_a30.Data;
      (this->CacheLayout).EmitterLayouts.ArrayNum = (uint)local_a28;
      (this->CacheLayout).EmitterLayouts.ArrayMax = local_a28._4_4_;
      local_a30.Data = (FScriptContainerElement *)0x0;
      local_a28 = 0;
      local_a28._0_4_ = uVar24;
    }
    FVar7.Data = local_a30.Data;
    DestructItems<FNiagaraSimCacheDataBuffersLayout,int>
              ((FNiagaraSimCacheDataBuffersLayout *)local_a30.Data,(uint)local_a28);
    if ((FNiagaraSimCacheDataBuffersLayout *)FVar7.Data != (FNiagaraSimCacheDataBuffersLayout *)0x0)
    {
      FMemory::Free(FVar7.Data);
    }
    FNiagaraSimCacheDataBuffersLayout::~FNiagaraSimCacheDataBuffersLayout(&local_ae8);
    DestructItems<FNiagaraSimCacheFrame,int>
              ((FNiagaraSimCacheFrame *)(this->CacheFrames).AllocatorInstance.Data,
               (this->CacheFrames).ArrayNum);
    piVar1 = &(this->CacheFrames).ArrayMax;
    (this->CacheFrames).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x160,0x10,0,&(this->CacheFrames).AllocatorInstance,0,piVar1);
    }
    this->CaptureTickCount = -1;
    QueryPerformanceCounter(&local_b50);
    this_00 = &this->DataInterfaceStorage;
    this->CaptureStartTime =
         (double)local_b50.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_9d8,
               (TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                *)this_00);
    local_b00 = 0;
    stack0xfffffffffffff4d8 = local_9d8._16_16_;
    local_b38 = (longlong *)local_9d8._0_8_;
    auStack_b30._0_8_ = local_9d8._8_8_;
    local_b18 = local_9b8;
    pTStack_b10 = pTStack_9b0;
    uVar20 = local_9d8._24_8_ >> 0x20;
    local_b08 = (TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 *)this_00;
    if (local_9d8._28_4_ < *(int *)(local_9d8._16_8_ + 0x18)) {
      do {
        this_01 = *(UObjectBase **)((longlong)(int)uVar20 * 0x20 + 0x10 + *local_b38);
        if (this_01 != (UObjectBase *)0x0) {
          pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,this_01->InternalIndex);
          if ((((uint)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("!IsRooted()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                                 ,0xb8,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          UObjectBase::AtomicallySetFlags(this_01,RF_MirroredGarbage);
          pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,this_01->InternalIndex);
          do {
            lVar22 = (pFVar13->field0_0x0).FlagsAndRefCount;
            uVar29 = (uint)((ulonglong)lVar22 >> 0x20);
            if ((uVar29 >> 0x15 & 1) != 0) break;
            if (((ulonglong)pFVar13 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            bVar8 = lVar22 == (pFVar13->field0_0x0).FlagsAndRefCount;
            if (bVar8) {
              (pFVar13->field0_0x0).FlagsAndRefCount =
                   ((longlong)(int)uVar29 | 0x200000U) << 0x20 | (longlong)(int)lVar22;
            }
            UNLOCK();
          } while (!bVar8);
          pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,this_01->InternalIndex);
          FUObjectItem::ClearRootFlags(pFVar13,Async);
        }
        uStack_b20 = uStack_b20 & ~auStack_b30._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b30);
        uVar20 = (ulonglong)uStack_b1c;
      } while ((int)uStack_b1c < *(int *)(auStack_b30._8_8_ + 0x18));
      if (((char)local_b00 != '\0') && (local_b00._1_1_ != '\0')) {
        uVar29 = *(int *)&(local_b08->Elements).field_0x8 -
                 *(int *)&(local_b08->Elements).field_0x34;
        if (uVar29 < 4) {
          iVar10 = 1;
        }
        else {
          uVar20 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          local_b60 = (undefined4)lVar22;
          iVar10 = 1 << ((byte)lVar22 & 0x1f);
        }
        if (((0 < (int)uVar29) && (local_b08->HashSize < iVar10)) || (iVar10 < local_b08->HashSize))
        {
          local_b08->HashSize = iVar10;
          TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          ::Rehash(local_b08);
        }
      }
    }
    bVar8 = 1 < *(int *)&(this->DataInterfaceStorage).field_0x48;
    if (!bVar8) {
      TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    puVar3 = &(this->DataInterfaceStorage).field_0xc;
    *(undefined4 *)&(this->DataInterfaceStorage).field_0x8 = 0;
    if (*(int *)puVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar3);
    }
    *(undefined4 *)&(this->DataInterfaceStorage).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->DataInterfaceStorage).field_0x34 = 0;
    iVar10 = *(int *)&(this->DataInterfaceStorage).field_0x2c;
    *(undefined4 *)&(this->DataInterfaceStorage).field_0x28 = 0;
    if ((iVar10 < 0) || (0x80 < iVar10)) {
      *(undefined4 *)&(this->DataInterfaceStorage).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DataInterfaceStorage).field_0x10,0)
      ;
    }
    if (bVar8) {
      *(undefined4 *)&(this->DataInterfaceStorage).field_0x48 = 1;
      TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                *)this_00);
    }
    if ((this->CreateParameters).bIncludeDebugData == 0) {
      pUVar15 = (UNiagaraSimCacheDebugData *)0x0;
    }
    else {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar14 = UNiagaraSimCacheDebugData::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_968,pUVar14);
      local_968._8_8_ = this;
      pUVar15 = (UNiagaraSimCacheDebugData *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_968);
      if (local_968._64_8_ != 0) {
        plVar21 = (longlong *)(local_968 + 0x50);
        if ((longlong *)local_968._104_8_ != (longlong *)0x0) {
          plVar21 = (longlong *)local_968._104_8_;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar15 != (UNiagaraSimCacheDebugData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    pFVar6 = local_bb8;
    pFVar31 = local_bc0;
    (this->DebugData).field0_0x0.DebugPtr = pUVar15;
    this_03 = &(this->CreateParameters).ExplicitCaptureAttributes;
    if (local_bc0->AttributeCaptureMode == ExplicitAttributes) {
      if ((this->CreateParameters).ExplicitCaptureAttributes.ArrayNum == 0) {
        if (local_ba8.NiagaraSystem == (UNiagaraSystem *)0x0) {
          ::FString::FString(&local_b70,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)local_ba8.NiagaraSystem,&local_b70,(UObject *)0x0);
        }
        ::FString::PrintfImpl
                  (&local_bd0,L"Missing attributes to capture when in explicit capture mode %s");
        iVar10 = (pFVar6->Errors).ArrayNum;
        piVar1 = &(pFVar6->Errors).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(pFVar6->Errors).AllocatorInstance,piVar1);
        }
        lVar22 = (longlong)iVar10;
        (pFVar6->Errors).ArrayNum = iVar10 + 1;
        pFVar30 = (pFVar6->Errors).AllocatorInstance.Data;
        *(undefined8 *)(pFVar30 + lVar22 * 0x10) = 0;
        *(FScriptContainerElement **)(pFVar30 + lVar22 * 0x10) =
             local_bd0.Data.AllocatorInstance.Data;
        *(int *)(pFVar30 + lVar22 * 0x10 + 8) = local_bd0.Data.ArrayNum;
        *(int *)(pFVar30 + lVar22 * 0x10 + 0xc) = local_bd0.Data.ArrayMax;
        local_bd0.Data.ArrayNum = 0;
        local_bd0.Data.ArrayMax = 0;
        local_bd0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_b70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b70.Data.AllocatorInstance.Data);
        }
        *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr = 0;
        *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x10 = 0;
        *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x8 = 0;
        FUtf8String::Reset((FUtf8String *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x18,0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_ba8.SystemSimulation.SharedReferenceCount.ReferenceController);
        if (SRWLock != (FPlatformRWLock *)0x0) {
          ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
        }
        pFVar31 = local_bb0;
        pFVar30 = (local_bb0->ExplicitCaptureAttributes).AllocatorInstance.Data;
        if (pFVar30 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar30);
        }
        pFVar30 = (pFVar31->InterpolationExcludeAttributes).AllocatorInstance.Data;
        if (pFVar30 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar30);
        }
        pFVar30 = (pFVar31->InterpolationIncludeAttributes).AllocatorInstance.Data;
        if (pFVar30 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar30);
        }
        pFVar30 = (pFVar31->RebaseExcludeAttributes).AllocatorInstance.Data;
        if (pFVar30 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar30);
        }
        pFVar30 = (pFVar31->RebaseIncludeAttributes).AllocatorInstance.Data;
        if (pFVar30 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar30);
        }
        return false;
      }
    }
    else {
      piVar1 = &(this->CreateParameters).ExplicitCaptureAttributes.ArrayMax;
      (this->CreateParameters).ExplicitCaptureAttributes.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&this_03->AllocatorInstance,0,piVar1);
      }
    }
    if (pFVar31->AttributeCaptureMode == RenderingOnly) {
      local_898.Base = local_878;
      local_898.CurPos = local_878;
      local_898.End = local_62;
      local_898.bIsDynamic = false;
      local_898.bIsExternal = false;
      lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar22 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&NAME_ExecutionState,"ExecutionState");
        _Init_thread_footer(&::_TSS0);
      }
      if ((*(int *)(lVar22 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&NAME_SystemExecutionState,"System.ExecutionState");
        _Init_thread_footer(&::_TSS1);
      }
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                (this_03,&NAME_SystemExecutionState);
      iVar10 = ((local_ba8.SystemInstance)->Emitters).ArrayNum;
      pFVar30 = ((local_ba8.SystemInstance)->Emitters).AllocatorInstance.Data;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      pFVar16 = pFVar30 + (longlong)iVar10 * 0x10;
      for (; pFVar30 != pFVar16; pFVar30 = pFVar30 + 0x10) {
        (*(code *)**(undefined8 **)(*(longlong *)pFVar30 + 0x40))
                  ((undefined8 *)(*(longlong *)pFVar30 + 0x40),&local_af8);
        pFVar2 = local_af8 + (longlong)local_af0 * 5;
        for (pFVar28 = local_af8; pFVar28 != pFVar2; pFVar28 = pFVar28 + 5) {
          TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_03,pFVar28);
        }
        local_898.CurPos = local_898.Base;
        this_02 = FNiagaraEmitterInstance::GetEmitterHandle(*(FNiagaraEmitterInstance **)pFVar30);
        pFVar17 = FNiagaraEmitterHandle::GetUniqueInstanceName(this_02,&local_a18);
        iVar10 = (pFVar17->Data).ArrayNum;
        pFVar4 = (pFVar17->Data).AllocatorInstance.Data;
        uVar29 = iVar10 - 1;
        if (iVar10 == 0) {
          uVar29 = uVar24;
        }
        uVar23 = (ulong64)(int)uVar29;
        if (local_898.End < local_898.CurPos + uVar23) {
          TStringBuilderBase<wchar_t>::Extend(&local_898,uVar23);
        }
        if (uVar29 != 0) {
          pvVar18 = FGenericPlatformString::Memcpy(local_898.CurPos,pFVar4,uVar23 * 2);
          local_898.CurPos = (wchar_t *)(uVar23 * 2 + (longlong)pvVar18);
        }
        if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a18.Data.AllocatorInstance.Data);
        }
        if (local_898.End < local_898.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_898,1);
        }
        *local_898.CurPos = L'.';
        local_898.CurPos = local_898.CurPos + 1;
        ::FName::AppendString(&NAME_ExecutionState,&local_898);
        if (local_898.End < local_898.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_898,1);
        }
        *local_898.CurPos = L'\0';
        ::FName::FName(local_b48,local_898.Base);
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>(this_03,local_b48);
        pFVar31 = local_bc0;
      }
      local_9f8 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::`31'::<lambda_1>,0,0>::
                   _vftable_;
      local_a08[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UNiagaraSimCache::BeginWrite'::__l31::<lambda_1>,bool,FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&>
                     ::Call;
      local_9e0 = 0;
      local_9f0 = this;
      FNiagaraDataInterfaceUtilities::ForEachDataInterface
                (local_ba8.SystemInstance,
                 (TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
                  *)local_a08);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_898);
    }
    FNiagaraSimCacheHelper::BuildCacheLayoutForSystem
              (&local_ba8,pFVar31,&(this->CacheLayout).SystemLayout);
    pTVar19 = UNiagaraSystem::GetEmitterHandles(local_ba8.NiagaraSystem);
    iVar10 = pTVar19->ArrayNum;
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xb8,8,iVar10,&(this->CacheLayout).EmitterLayouts.AllocatorInstance,
                        &(this->CacheLayout).EmitterLayouts.ArrayNum,
                        &(this->CacheLayout).EmitterLayouts.ArrayMax);
    DefaultConstructItems<FNiagaraSimCacheDataBuffersLayout,int>
              ((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data + (longlong)iVar11 * 0xb8,
               iVar10);
    uVar20 = uVar25;
    if (0 < iVar10) {
      do {
        uVar26 = (uint)uVar25;
        uVar29 = uVar24;
        if ((int)uVar26 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
          uVar29 = ~uVar26 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        FNiagaraSimCacheHelper::BuildCacheLayoutForEmitter
                  (&local_ba8,&this->CreateParameters,
                   (FNiagaraSimCacheDataBuffersLayout *)
                   ((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data + uVar20),uVar26);
        uVar25 = (ulonglong)(uVar26 + 1);
        uVar20 = uVar20 + 0xb8;
      } while ((int)(uVar26 + 1) < iVar10);
    }
    if ((this->CreateParameters).bAllowDataInterfaceCaching != 0) {
      local_8e8._0_8_ = 0;
      local_8e8._8_8_ = 0;
      local_8e8._32_8_ = 0;
      local_8e8._40_4_ = 0;
      local_8e8._44_4_ = 0x80;
      local_8e8._48_4_ = 0xffffffff;
      local_8e8._52_4_ = 0;
      local_8a8 = (void *)0x0;
      local_8a0 = 0;
      local_9a8[0] = (code *)0x0;
      local_980 = FMemory::Malloc(0x28,8);
      *local_980 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UNiagaraSimCache::BeginWrite'::`44'::<lambda_2>,0,1>::
                    _vftable_;
      local_980[1] = this;
      local_980[2] = &local_8e8;
      local_980[3] = &local_ba8;
      local_980[4] = local_bb8;
      if (local_980 + 1 != (undefined8 *)0x0) {
        local_9a8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`UNiagaraSimCache::BeginWrite'::__l44::<lambda_2>,bool,FNiagaraVariableBase,UNiagaraDataInterface_*>
                       ::Call;
      }
      FNiagaraDataInterfaceUtilities::ForEachDataInterface
                (local_ba8.SystemInstance,
                 (TFunction<bool___cdecl(FNiagaraVariableBase,UNiagaraDataInterface_*)> *)local_9a8)
      ;
      local_8a0 = 0;
      if (local_8a8 != (void *)0x0) {
        FMemory::Free(local_8a8);
      }
      TSparseArray<TSparseSetElement<FNiagaraVariableBase>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FNiagaraVariableBase>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_8e8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ba8.SystemSimulation.SharedReferenceCount.ReferenceController);
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    pFVar31 = local_bb0;
    pFVar30 = (local_bb0->ExplicitCaptureAttributes).AllocatorInstance.Data;
    if (pFVar30 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar30);
    }
    pFVar30 = (pFVar31->InterpolationExcludeAttributes).AllocatorInstance.Data;
    if (pFVar30 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar30);
    }
    pFVar30 = (pFVar31->InterpolationIncludeAttributes).AllocatorInstance.Data;
    if (pFVar30 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar30);
    }
    pFVar30 = (pFVar31->RebaseExcludeAttributes).AllocatorInstance.Data;
    if (pFVar30 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar30);
    }
    pFVar30 = (pFVar31->RebaseIncludeAttributes).AllocatorInstance.Data;
    if (pFVar30 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar30);
    }
    bVar8 = true;
  }
  return bVar8;
}

// CanRead @ 149396720

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall UNiagaraSimCache::CanRead(UNiagaraSimCache *this,UNiagaraSystem *param_1)

{
  int iVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  UNiagaraSystem *pUVar9;
  UClass *pUVar10;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar11;
  FNiagaraEmitterHandle *this_00;
  longlong lVar12;
  uint uVar13;
  FNiagaraSimCacheDataBuffersLayout *pFVar14;
  longlong lVar15;
  byte bVar16;
  char local_res10 [8];
  byte local_res18;
  longlong local_res20;
  code *local_68 [2];
  undefined **local_58;
  char *local_50;
  undefined8 local_40;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCache.cpp"
                         ,0x37d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((param_1 != (UNiagaraSystem *)0x0) &&
     (pUVar9 = (UNiagaraSystem *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SoftNiagaraSystem),
     pUVar9 != (UNiagaraSystem *)0x0)) {
    pUVar10 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    iVar1 = (int)pUVar10->_padding_;
    if ((iVar1 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
       ((((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar10->_padding_ && (param_1 == pUVar9)) &&
        (bVar5 = UNiagaraSystem::IsReadyToRun(param_1), bVar5)))) {
      if (this->bNeedsReadComponentMappingRecache == false) {
        return true;
      }
      if ((&this->RWLock == (FPlatformRWLock *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                             ,0x43,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      AcquireSRWLockExclusive((PSRWLOCK)&this->RWLock);
      pTVar11 = UNiagaraSystem::GetEmitterHandles(param_1);
      iVar1 = pTVar11->ArrayNum;
      if (iVar1 == (this->CacheLayout).EmitterLayouts.ArrayNum) {
        bVar7 = FNiagaraSimCacheHelper::BuildCacheReadMappings
                          (&(this->CacheLayout).SystemLayout,
                           &(param_1->SystemCompiledData).DataSetCompiledData);
        uVar13 = 0;
        local_res20 = (longlong)iVar1;
        if (0 < iVar1) {
          lVar12 = 0;
          lVar15 = 0;
          do {
            uVar8 = 0;
            if ((int)uVar13 < (param_1->EmitterCompiledData).ArrayNum) {
              uVar8 = ~uVar13 >> 0x1f;
            }
            local_res18 = bVar7;
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            lVar2 = *(longlong *)((param_1->EmitterCompiledData).AllocatorInstance.Data + lVar15);
            uVar8 = 0;
            if ((int)uVar13 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
              uVar8 = ~uVar13 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            pFVar14 = (FNiagaraSimCacheDataBuffersLayout *)
                      ((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data + lVar12);
            FVar3 = pFVar14->LayoutName;
            this_00 = UNiagaraSystem::GetEmitterHandle(param_1,uVar13);
            bVar5 = FNiagaraEmitterHandle::GetIsEnabled(this_00);
            bVar16 = 0;
            if ((FVar3 != (FName)0x0) == bVar5) {
              bVar16 = local_res18;
            }
            bVar7 = bVar16;
            if (pFVar14->LayoutName != (FName)0x0) {
              bVar5 = FNiagaraSimCacheHelper::BuildCacheReadMappings
                                (pFVar14,(FNiagaraDataSetCompiledData *)(lVar2 + 0xf0));
              bVar7 = 0;
              if (pFVar14->SimTarget == *(ENiagaraSimTarget *)(lVar2 + 300)) {
                bVar7 = bVar5 & bVar16;
              }
            }
            uVar13 = uVar13 + 1;
            lVar15 = lVar15 + 0x10;
            lVar12 = lVar12 + 0xb8;
            local_res20 = local_res20 + -1;
          } while (local_res20 != 0);
          local_res20 = 0;
        }
        if (bVar7 != 0) {
          this->bNeedsReadComponentMappingRecache = false;
          bVar5 = *(int *)&(this->DataInterfaceStorage).field_0x8 ==
                  *(int *)&(this->DataInterfaceStorage).field_0x34;
          this->bCanRunAsync = bVar5;
          if (bVar5) {
            local_res10[0] = '\0';
            local_58 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<`UNiagaraSimCache::CanRead'::`35'::<lambda_1>,0,0>::
                        _vftable_;
            local_50 = local_res10;
            local_40 = 0;
            local_68[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`UNiagaraSimCache::CanRead'::__l35::<lambda_1>,bool,FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&>
                          ::Call;
            FNiagaraDataInterfaceUtilities::ForEachDataInterface
                      (param_1,(TFunction<bool___cdecl(FNiagaraDataInterfaceUtilities::FDataInterfaceUsageContext_const_&)>
                                *)local_68);
            if (local_res10[0] != '\0') {
              this->bCanRunAsync = false;
            }
          }
          if (&this->RWLock == (FPlatformRWLock *)0x0) {
            return true;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)&this->RWLock);
          return true;
        }
      }
      if (&this->RWLock != (FPlatformRWLock *)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)&this->RWLock);
      }
    }
  }
  return false;
}

// EndWrite @ 14939fab0

bool __thiscall UNiagaraSimCache::EndWrite(UNiagaraSimCache *this,bool param_1)

{
  TMap<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
  *pTVar1;
  UObjectBaseUtility *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  FNiagaraTypeDefinition *this_01;
  UClass *pUVar8;
  FString *pFVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  wchar_t *pwVar13;
  uint uVar14;
  longlong lVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  longlong lVar23;
  UNiagaraSimCache *local_res20;
  longlong local_138;
  undefined1 auStack_120 [16];
  uint uStack_110;
  uint uStack_10c;
  longlong local_108;
  TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  *pTStack_100;
  TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  *local_f8;
  undefined2 local_f0;
  longlong local_e8;
  FScriptContainerElement *local_e0;
  UNiagaraSimCache *local_d8;
  undefined1 local_d0 [32];
  longlong local_b0;
  TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  *pTStack_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  pwVar22 = L"";
  if ((&this->RWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->RWLock);
  if ((this->PendingCommandsInFlight != (atomic<int>)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingCommandsInFlight == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCache.cpp"
                         ,0x30d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((this->CacheFrames).ArrayNum == 0) {
    *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr = 0;
    *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x10 = 0;
    *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x18,0);
  }
  pTVar1 = &this->DataInterfaceStorage;
  if (*(int *)&(this->DataInterfaceStorage).field_0x8 !=
      *(int *)&(this->DataInterfaceStorage).field_0x34) {
    bVar16 = 1;
    TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_d0,
               (TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_f0 = 0;
    stack0xfffffffffffffee8 = local_d0._16_16_;
    auStack_120._0_8_ = local_d0._8_8_;
    local_108 = local_b0;
    pTStack_100 = pTStack_a8;
    uVar11 = local_d0._24_8_ >> 0x20;
    local_f8 = (TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                *)pTVar1;
    if (local_d0._28_4_ < *(int *)(local_d0._16_8_ + 0x18)) {
      do {
        this_01 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)
                             ((longlong)(int)uVar11 * 0x20 + *(longlong *)local_d0._0_8_ + 8));
        if (this_01->UnderlyingType == 1) {
          if ((this_01->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
            pFVar9 = GetTypeName<UClass>(&local_80);
            if ((pFVar9->Data).ArrayNum != 0) {
              pwVar22 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar22);
          }
          pUVar8 = Z_Construct_UClass_UClass_NoRegister();
          bVar4 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar8);
          if ((!bVar4) ||
             (pUVar8 = (UClass *)(this_01->ClassStructOrEnum).field0_0x0.DebugPtr,
             pUVar8 == (UClass *)0x0)) {
            pFVar9 = GetTypeName<UClass>(&local_a0);
            if ((pFVar9->Data).ArrayNum == 0) {
              pwVar13 = L"";
            }
            else {
              pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
            pFVar9 = GetFullNameForCastLogError<UObject>
                               (&local_90,(this_01->ClassStructOrEnum).field0_0x0.DebugPtr);
            if ((pFVar9->Data).ArrayNum != 0) {
              pwVar22 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar22,pwVar13);
          }
        }
        else {
          pUVar8 = (UClass *)0x0;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DataInterfaceClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCache.cpp"
                             ,0x319,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar8);
        }
        this_00 = (UObjectBaseUtility *)(pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
        if (this_00 == (UObjectBaseUtility *)0x0) {
          pFVar9 = GetTypeName<INiagaraSimCacheCustomStorageInterface>(&local_50);
          if ((pFVar9->Data).ArrayNum != 0) {
            pwVar22 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar22);
        }
        pUVar8 = Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
        plVar10 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar8);
        if (plVar10 == (longlong *)0x0) {
          pFVar9 = GetTypeName<INiagaraSimCacheCustomStorageInterface>(&local_70);
          if ((pFVar9->Data).ArrayNum == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
          }
          pFVar9 = GetFullNameForCastLogError<UObject>(&local_60,(UObject *)this_00);
          if ((pFVar9->Data).ArrayNum != 0) {
            pwVar22 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar22,pwVar13);
        }
        bVar6 = (**(code **)(*plVar10 + 0x20))(plVar10);
        bVar16 = bVar16 & bVar6;
        uStack_110 = uStack_110 & ~auStack_120._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_120);
        uVar11 = (ulonglong)uStack_10c;
      } while ((int)uStack_10c < *(int *)(auStack_120._8_8_ + 0x18));
      if (((char)local_f0 != '\0') && (local_f0._1_1_ != '\0')) {
        uVar18 = *(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34;
        if (uVar18 < 4) {
          iVar7 = 1;
        }
        else {
          uVar11 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
          lVar19 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar19 & 0x1f);
        }
        if (((0 < (int)uVar18) && (local_f8->HashSize < iVar7)) || (iVar7 < local_f8->HashSize)) {
          local_f8->HashSize = iVar7;
          TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          ::Rehash(local_f8);
        }
      }
      if (bVar16 == 0) {
        *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr = 0;
        *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x10 = 0;
        *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x8 = 0;
        FUtf8String::Reset((FUtf8String *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x18,0);
      }
    }
  }
  if (((this->CreateParameters).bAllowInterpolation != 0) &&
     (iVar7 = (this->CacheFrames).ArrayNum, 0 < iVar7)) {
    uVar18 = 0;
    local_res20 = this;
    local_d8 = this;
    if (0 < iVar7 + -1) {
      local_138 = 0;
      do {
        uVar14 = 0;
        if ((int)uVar18 < (this->CacheFrames).ArrayNum) {
          uVar14 = ~uVar18 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar20 = (this->CacheFrames).AllocatorInstance.Data + local_138;
        uVar14 = 0;
        if ((int)(uVar18 + 1) < (this->CacheFrames).ArrayNum) {
          uVar14 = ~(uVar18 + 1) >> 0x1f;
        }
        local_e0 = pFVar20;
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar2 = (this->CacheFrames).AllocatorInstance.Data;
        `UNiagaraSimCache::EndWrite'::__l30::<lambda_1>::operator()
                  (&local_res20,&(this->CacheLayout).SystemLayout,
                   (FNiagaraSimCacheDataBuffers *)(pFVar20 + 0xb0),
                   (FNiagaraSimCacheDataBuffers *)(pFVar2 + local_138 + 0x210));
        uVar14 = 0;
        if (0 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
          do {
            uVar17 = ~uVar14 >> 0x1f;
            uVar12 = 0;
            if ((int)uVar14 < *(int *)(pFVar2 + local_138 + 0x2b0)) {
              uVar12 = uVar17;
            }
            if ((uVar12 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            local_e8 = *(longlong *)(pFVar2 + local_138 + 0x2a8);
            lVar19 = (longlong)(int)uVar14 * 0xd8;
            uVar12 = 0;
            if ((int)uVar14 < *(int *)(pFVar20 + 0x150)) {
              uVar12 = uVar17;
            }
            if ((uVar12 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            lVar21 = *(longlong *)(pFVar20 + 0x148);
            uVar12 = 0;
            if ((int)uVar14 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
              uVar12 = uVar17;
            }
            if ((uVar12 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            `UNiagaraSimCache::EndWrite'::__l30::<lambda_1>::operator()
                      (&local_res20,
                       (FNiagaraSimCacheDataBuffersLayout *)
                       ((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data +
                       (longlong)(int)uVar14 * 0xb8),
                       (FNiagaraSimCacheDataBuffers *)(lVar21 + 0x40 + lVar19),
                       (FNiagaraSimCacheDataBuffers *)(local_e8 + 0x40 + lVar19));
            uVar14 = uVar14 + 1;
            pFVar20 = local_e0;
          } while ((int)uVar14 < (this->CacheLayout).EmitterLayouts.ArrayNum);
        }
        local_138 = local_138 + 0x160;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (this->CacheFrames).ArrayNum + -1);
    }
    iVar7 = (this->CacheFrames).ArrayNum;
    uVar14 = iVar7 - 1;
    uVar18 = 0;
    if ((int)uVar14 < iVar7) {
      uVar18 = ~uVar14 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    `UNiagaraSimCache::EndWrite'::__l30::<lambda_2>::operator()
              (&local_d8,&(this->CacheLayout).SystemLayout,
               (FNiagaraSimCacheDataBuffers *)
               ((this->CacheFrames).AllocatorInstance.Data +
               (longlong)((this->CacheFrames).ArrayNum + -1) * 0x160 + 0xb0));
    uVar18 = 0;
    if (0 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
      lVar21 = 0;
      lVar19 = 0;
      do {
        iVar7 = (this->CacheFrames).ArrayNum;
        uVar12 = iVar7 - 1;
        uVar14 = 0;
        if ((int)uVar12 < iVar7) {
          uVar14 = ~uVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar7 = (this->CacheFrames).ArrayNum;
        pFVar20 = (this->CacheFrames).AllocatorInstance.Data;
        uVar14 = 0;
        if ((int)uVar18 < *(int *)(pFVar20 + (longlong)iVar7 * 0x160 + -0x10)) {
          uVar14 = ~uVar18 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        lVar23 = *(longlong *)(pFVar20 + (longlong)iVar7 * 0x160 + -0x18) + lVar19;
        uVar14 = 0;
        if ((int)uVar18 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
          uVar14 = ~uVar18 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data[lVar21 + 0x27] !=
             (FScriptContainerElement)0x0) && (uVar14 = 0, 0 < *(int *)(lVar23 + 0x98))) {
          lVar15 = 0;
          do {
            uVar12 = 0;
            if ((int)uVar14 < *(int *)(lVar23 + 0x98)) {
              uVar12 = ~uVar14 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            uVar14 = uVar14 + 1;
            *(undefined4 *)(lVar15 + *(longlong *)(lVar23 + 0x90)) = 0xffffffff;
            lVar15 = lVar15 + 4;
          } while ((int)uVar14 < *(int *)(lVar23 + 0x98));
        }
        uVar18 = uVar18 + 1;
        lVar19 = lVar19 + 0xd8;
        lVar21 = lVar21 + 0xb8;
      } while ((int)uVar18 < (this->CacheLayout).EmitterLayouts.ArrayNum);
    }
  }
  TMulticastDelegate<void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>::Broadcast
            (&OnCacheEndWrite,this);
  lVar19 = *(longlong *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x8;
  if (&this->RWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RWLock);
  }
  return lVar19 != 0;
}

// ForEachEmitterAttribute @ 1493a18e0

void __thiscall
UNiagaraSimCache::ForEachEmitterAttribute
          (UNiagaraSimCache *this,int param_1,
          TFunction<bool___cdecl(FNiagaraSimCacheVariable_const_&)> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  undefined1 local_38;
  undefined1 local_37 [15];
  
  if (param_1 == -1) {
    pFVar10 = (this->CacheLayout).SystemLayout.Variables.AllocatorInstance.Data;
    iVar3 = (this->CacheLayout).SystemLayout.Variables.ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((this->CacheLayout).SystemLayout.Variables.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FNiagaraSimCacheVariable_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_38);
      }
      if (pFVar10 == pFVar1) break;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar4 = *(code **)param_2;
      plVar9 = *(longlong **)&param_2->field_0x28;
      if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
        plVar9 = (longlong *)&param_2->field_0x10;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      cVar5 = (*pcVar4)(uVar8,pFVar10);
      if (cVar5 == '\0') break;
      pFVar10 = pFVar10 + 0x18;
    }
  }
  else if ((-1 < param_1) && (param_1 < (this->CacheLayout).EmitterLayouts.ArrayNum)) {
    uVar7 = 0;
    if (param_1 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar1 = (this->CacheLayout).EmitterLayouts.AllocatorInstance.Data;
    iVar3 = *(int *)(pFVar1 + (longlong)param_1 * 0xb8 + 0x18);
    lVar11 = *(longlong *)(pFVar1 + (longlong)param_1 * 0xb8 + 0x10);
    lVar2 = lVar11 + (longlong)iVar3 * 0x18;
    while( true ) {
      if (*(int *)(pFVar1 + (longlong)param_1 * 0xb8 + 0x18) != iVar3) {
        `TCheckedPointerIterator<FNiagaraSimCacheVariable_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_37);
      }
      if (lVar11 == lVar2) break;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar4 = *(code **)param_2;
      plVar9 = *(longlong **)&param_2->field_0x28;
      if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
        plVar9 = (longlong *)&param_2->field_0x10;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      cVar5 = (*pcVar4)(uVar8,lVar11);
      if (cVar5 == '\0') break;
      lVar11 = lVar11 + 0x18;
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar9 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_2->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001493a1a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x10))();
    return;
  }
  return;
}

// GetDataInterfaceStorageObject @ 1493a39d0

UObject * __thiscall
UNiagaraSimCache::GetDataInterfaceStorageObject
          (UNiagaraSimCache *this,FNiagaraVariableBase *param_1)

{
  TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_> *pTVar1;
  undefined8 *puVar2;
  
  pTVar1 = TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                   *)&this->DataInterfaceStorage,param_1);
  puVar2 = (undefined8 *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_> *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  if (puVar2 != (undefined8 *)0x0) {
    return (UObject *)*puVar2;
  }
  return (UObject *)0x0;
}

// GetEmitterIndex @ 1493a5ff0

int __thiscall UNiagaraSimCache::GetEmitterIndex(UNiagaraSimCache *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(longlong *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x8 != 0) {
    iVar4 = (this->CacheLayout).EmitterLayouts.ArrayNum;
    uVar6 = 0;
    if (0 < iVar4) {
      lVar5 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar6 < iVar4) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        if (*(FName *)((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data + lVar5) == param_1
           ) {
          return uVar6;
        }
        iVar4 = (this->CacheLayout).EmitterLayouts.ArrayNum;
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0xb8;
      } while ((int)uVar6 < iVar4);
    }
  }
  return -1;
}

// GetEmitterName @ 1493a60b0

FName __thiscall UNiagaraSimCache::GetEmitterName(UNiagaraSimCache *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  uint uVar4;
  uint in_register_00000014;
  uint in_R8D;
  
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  if ((-1 < (int)in_R8D) && ((int)in_R8D < (this->CacheLayout).EmitterLayouts.ArrayNum)) {
    uVar4 = 0;
    if ((int)in_R8D < (this->CacheLayout).EmitterLayouts.ArrayNum) {
      uVar4 = ~in_R8D >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FName)(*pcVar1)();
        return FVar3;
      }
    }
    *(undefined8 *)FVar3 =
         *(undefined8 *)
          ((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data + (longlong)(int)in_R8D * 0xb8)
    ;
    return FVar3;
  }
  *(undefined8 *)FVar3 = 0;
  return FVar3;
}

// GetEmitterNames @ 1493a6170

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UNiagaraSimCache::GetEmitterNames
          (UNiagaraSimCache *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (*(longlong *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x8 != 0) {
    uVar2 = (this->CacheLayout).EmitterLayouts.ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (0 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    iVar3 = (this->CacheLayout).EmitterLayouts.ArrayNum;
    pFVar10 = (this->CacheLayout).EmitterLayouts.AllocatorInstance.Data;
    pFVar11 = pFVar10 + (longlong)iVar3 * 0xb8;
    while( true ) {
      if ((this->CacheLayout).EmitterLayouts.ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FNiagaraSimCacheDataBuffersLayout_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar11) break;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar10) && (pFVar10 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      uVar5 = *(undefined8 *)pFVar10;
      pFVar10 = pFVar10 + 0xb8;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           uVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetEmitterNumInstances @ 1493a62e0

int __thiscall
UNiagaraSimCache::GetEmitterNumInstances(UNiagaraSimCache *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((-1 < param_2) && (param_2 < (this->CacheFrames).ArrayNum)) {
    iVar4 = (this->CacheFrames).ArrayNum;
    uVar5 = (uint)~param_2 >> 0x1f;
    if (param_1 == -1) {
      uVar6 = 0;
      if (param_2 < iVar4) {
        uVar6 = uVar5;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      return *(int *)((this->CacheFrames).AllocatorInstance.Data + (longlong)param_2 * 0x160 + 0xb0)
      ;
    }
    uVar6 = 0;
    if (param_2 < iVar4) {
      uVar6 = uVar5;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if ((-1 < param_1) &&
       (lVar7 = (longlong)param_2 * 0x160,
       param_1 < *(int *)((this->CacheFrames).AllocatorInstance.Data + lVar7 + 0x150))) {
      uVar6 = 0;
      if (param_2 < (this->CacheFrames).ArrayNum) {
        uVar6 = uVar5;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      pFVar1 = (this->CacheFrames).AllocatorInstance.Data;
      uVar5 = 0;
      if (param_1 < *(int *)(pFVar1 + lVar7 + 0x150)) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      return *(int *)((longlong)param_1 * 0xd8 + 0x40 + *(longlong *)(pFVar1 + lVar7 + 0x148));
    }
  }
  return 0;
}

// GetPrivateStaticClass @ 1493a76a0

UClass * __cdecl UNiagaraSimCache::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimCache",
               &Z_Registration_Info_UClass_UNiagaraSimCache.InnerSingleton,
               StaticRegisterNativesUNiagaraSimCache,0x218,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraSimCache>,
               InternalVTableHelperCtorCaller<UNiagaraSimCache>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimCache.InnerSingleton;
}

// GetStoredDataInterfaces @ 1493a7e20

TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> * __thiscall
UNiagaraSimCache::GetStoredDataInterfaces
          (UNiagaraSimCache *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
              *)&this->DataInterfaceStorage,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSystem @ 1493a7e50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraSystem * __thiscall UNiagaraSimCache::GetSystem(UNiagaraSimCache *this,bool param_1)

{
  TSoftObjectPtr<UNiagaraSystem> *this_00;
  int iVar1;
  UNiagaraSystem *pUVar2;
  UClass *pUVar3;
  
  this_00 = &this->SoftNiagaraSystem;
  pUVar2 = (UNiagaraSystem *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar2 != (UNiagaraSystem *)0x0) {
    pUVar3 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  if (!param_1) {
    return (UNiagaraSystem *)0x0;
  }
  pUVar2 = (UNiagaraSystem *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar2 == (UNiagaraSystem *)0x0) {
    if (*(longlong *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x8 == 0) {
      return (UNiagaraSystem *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar2 = (UNiagaraSystem *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  }
  if (pUVar2 != (UNiagaraSystem *)0x0) {
    pUVar3 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UNiagaraSystem *)0x0;
}

// IsReadyForFinishDestroy @ 1493aa520

bool __thiscall UNiagaraSimCache::IsReadyForFinishDestroy(UNiagaraSimCache *this)

{
  return this->PendingCommandsInFlight == (atomic<int>)0x0;
}

// Read @ 1493ac8a0

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
UNiagaraSimCache::Read(UNiagaraSimCache *this,float param_1,FNiagaraSystemInstance *param_2)

{
  undefined1 *puVar1;
  FPlatformRWLock *SRWLock;
  float fVar2;
  int iVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  
  SRWLock = &this->RWLock;
  auVar17._4_4_ = in_XMM1_Db;
  auVar17._0_4_ = param_1;
  auVar17._8_4_ = in_XMM1_Dc;
  auVar17._12_4_ = in_XMM1_Dd;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  fVar5 = __real_3f000000;
  auVar16._4_12_ = auVar17._4_12_;
  fVar2 = this->DurationSeconds;
  auVar16._0_4_ = param_1 * __real_461c4000 + __real_3f000000;
  auVar17 = roundps(auVar16,ZEXT416((uint)auVar16._0_4_),1);
  fVar15 = auVar17._0_4_ * __real_38d1b717;
  fVar14 = fVar15 - this->StartSeconds;
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  if ((fVar2 < fVar14) || (iVar3 = (this->CacheFrames).ArrayNum, iVar3 == 0)) {
    bVar6 = false;
  }
  else {
    uVar11 = 0;
    uVar13 = iVar3 - 1;
    fVar18 = 0.0;
    if (0.0 < fVar2) {
      uVar11 = (int)ROUND((fVar14 / fVar2) * ((float)(int)uVar13 + (float)(int)uVar13) -
                          __real_3f000000) >> 1;
    }
    uVar9 = 0;
    if ((int)uVar11 < iVar3) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    lVar10 = (longlong)(int)uVar11;
    lVar12 = lVar10 * 0x160;
    if (*(float *)((this->CacheFrames).AllocatorInstance.Data + lVar12 + 0x6c) <= fVar15) {
      uVar9 = uVar11;
      for (; lVar10 < (int)uVar13; lVar10 = lVar10 + 1) {
        uVar9 = uVar9 + 1;
        uVar8 = 0;
        if ((int)uVar9 < (this->CacheFrames).ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        if (fVar15 < *(float *)((this->CacheFrames).AllocatorInstance.Data + lVar12 + 0x1cc)) break;
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x160;
      }
    }
    else {
      for (; 0 < (int)uVar11; uVar11 = uVar11 - 1) {
        uVar9 = 0;
        if ((int)uVar11 < (this->CacheFrames).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        if (*(float *)((this->CacheFrames).AllocatorInstance.Data + lVar12 + 0x6c) <= fVar15) break;
        lVar12 = lVar12 + -0x160;
      }
    }
    if ((int)uVar11 < (int)uVar13) {
      uVar9 = 0;
      if ((int)uVar11 < (this->CacheFrames).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      uVar9 = uVar11 + 1;
      if ((int)uVar9 < (int)uVar13) {
        uVar13 = uVar9;
      }
      fVar2 = *(float *)((this->CacheFrames).AllocatorInstance.Data +
                        (longlong)(int)uVar11 * 0x160 + 0x6c);
      uVar8 = 0;
      if ((int)uVar13 < (this->CacheFrames).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      fVar18 = (fVar15 - fVar2) /
               (*(float *)((this->CacheFrames).AllocatorInstance.Data +
                          (longlong)(int)uVar13 * 0x160 + 0x6c) - fVar2);
      if (((this->CreateParameters).bAllowInterpolation == 0 &&
           (this->CreateParameters).bAllowVelocityExtrapolation == 0) && (fVar5 < fVar18)) {
        fVar18 = 0.0;
        uVar11 = uVar9;
      }
    }
    bVar6 = ReadFrame(this,uVar11,fVar18,param_2);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return bVar6;
}

// ReadAttribute @ 1493acce0

void __thiscall
UNiagaraSimCache::ReadAttribute
          (UNiagaraSimCache *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FFloat16,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,FName param_4,FName param_5,int param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FNiagaraSimCacheDataBuffers *pFVar3;
  FNiagaraSimCacheVariable *pFVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uchar *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  FNiagaraSimCacheAttributeReaderHelper local_58;
  
  local_58.CacheFrame = (FNiagaraSimCacheFrame *)0x0;
  local_58.DataBuffers = (FNiagaraSimCacheDataBuffers *)0x0;
  local_58.DataBuffersLayout = (FNiagaraSimCacheDataBuffersLayout *)0x0;
  local_58.Variable = (FNiagaraSimCacheVariable *)0x0;
  FNiagaraSimCacheAttributeReaderHelper::Initialize(&local_58,this,param_5,param_4,param_6);
  pFVar4 = local_58.Variable;
  if (local_58.Variable != (FNiagaraSimCacheVariable *)0x0) {
    if ((local_58.Variable == (FNiagaraSimCacheVariable *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                           ,0x8b,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar3 = local_58.DataBuffers;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(uint)pFVar4->FloatCount * (local_58.DataBuffers)->NumInstances,
                       &param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
    iVar11 = 0;
    if (pFVar4->FloatCount != 0) {
      do {
        uVar9 = iVar11 * pFVar3->NumInstances + iVar6;
        uVar12 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar12 = ~uVar9 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        if (((int)(uint)pFVar4->FloatCount <= iVar11) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Component < Variable->FloatCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                               ,0x8f,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar12 = pFVar3->NumInstances;
        puVar8 = TArrayView<unsigned_char,int>::operator[]
                           (&pFVar3->FloatData,((uint)pFVar4->FloatOffset + iVar11) * uVar12 * 4);
        memcpy(pFVar1 + (longlong)(int)uVar9 * 4,puVar8,(ulonglong)uVar12 << 2);
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)(uint)pFVar4->FloatCount);
    }
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,(uint)pFVar4->HalfCount * pFVar3->NumInstances,
                       &param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
    uVar9 = 0;
    uVar12 = uVar9;
    if (pFVar4->HalfCount != 0) {
      do {
        uVar10 = uVar12 * pFVar3->NumInstances + iVar6;
        uVar7 = uVar9;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((int)(uint)pFVar4->HalfCount <= (int)uVar12) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Component < Variable->HalfCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                               ,0x95,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar7 = pFVar3->NumInstances;
        puVar8 = TArrayView<unsigned_char,int>::operator[]
                           (&pFVar3->HalfData,(pFVar4->HalfOffset + uVar12) * uVar7 * 2);
        memcpy(pFVar1 + (longlong)(int)uVar10 * 2,puVar8,(ulonglong)uVar7 * 2);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)(uint)pFVar4->HalfCount);
    }
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(uint)pFVar4->Int32Count * pFVar3->NumInstances,
                       &param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
    uVar12 = uVar9;
    if (pFVar4->Int32Count != 0) {
      do {
        uVar10 = uVar12 * pFVar3->NumInstances + iVar6;
        uVar7 = uVar9;
        if ((int)uVar10 < param_3->ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_3->AllocatorInstance).Data;
        if (((int)(uint)pFVar4->Int32Count <= (int)uVar12) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Component < Variable->Int32Count",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                               ,0x9b,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar7 = pFVar3->NumInstances;
        puVar8 = TArrayView<unsigned_char,int>::operator[]
                           (&pFVar3->Int32Data,(pFVar4->Int32Offset + uVar12) * uVar7 * 4);
        memcpy(pFVar1 + (longlong)(int)uVar10 * 4,puVar8,(ulonglong)uVar7 << 2);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)(uint)pFVar4->Int32Count);
    }
  }
  return;
}

// ReadColorAttribute @ 1493ad130

void __thiscall
UNiagaraSimCache::ReadColorAttribute
          (UNiagaraSimCache *this,TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,
          FName param_2,FName param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  FNiagaraSimCacheDataBuffers *pFVar7;
  int iVar8;
  uint uVar9;
  FNiagaraTypeDefinition *pFVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  FNiagaraSimCacheAttributeReaderHelper local_48;
  
  local_48.CacheFrame = (FNiagaraSimCacheFrame *)0x0;
  local_48.DataBuffers = (FNiagaraSimCacheDataBuffers *)0x0;
  local_48.DataBuffersLayout = (FNiagaraSimCacheDataBuffersLayout *)0x0;
  local_48.Variable = (FNiagaraSimCacheVariable *)0x0;
  FNiagaraSimCacheAttributeReaderHelper::Initialize(&local_48,this,param_3,param_2,param_4);
  bVar14 = local_48.Variable == (FNiagaraSimCacheVariable *)0x0;
  if ((((local_48.Variable != (FNiagaraSimCacheVariable *)0x0) &&
       (pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                            (&((local_48.Variable)->Variable).TypeDefHandle),
       (TObjectPtr<UObject>_u_0)(pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ==
       FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0)) &&
      (pFVar10->UnderlyingType == FNiagaraTypeDefinition::ColorDef.UnderlyingType)) &&
     (pFVar10->Flags == FNiagaraTypeDefinition::ColorDef.Flags)) {
    if ((bVar14) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                            ,0x8b,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,(local_48.DataBuffers)->NumInstances,&param_1->AllocatorInstance,
                       &param_1->ArrayNum,&param_1->ArrayMax);
    iVar12 = 0;
    lVar13 = (longlong)iVar8 << 4;
    while( true ) {
      if ((local_48.Variable == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0x8b,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((int)(local_48.DataBuffers)->NumInstances <= iVar12) break;
      if (((local_48.Variable)->FloatCount != 4) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Variable->FloatOffset != INDEX_NONE && Variable->FloatCount == 4",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xdb,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((local_48.Variable == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar7 = local_48.DataBuffers;
      uVar11 = (((local_48.Variable)->FloatOffset + 3) * (local_48.DataBuffers)->NumInstances +
               iVar12) * 4;
      uVar9 = 0;
      if ((int)uVar11 < ((local_48.DataBuffers)->FloatData).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = *(undefined4 *)((pFVar7->FloatData).DataPtr + (int)uVar11);
      if ((local_48.Variable == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar7 = local_48.DataBuffers;
      uVar11 = (((local_48.Variable)->FloatOffset + 2) * (local_48.DataBuffers)->NumInstances +
               iVar12) * 4;
      uVar9 = 0;
      if ((int)uVar11 < ((local_48.DataBuffers)->FloatData).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar4 = *(undefined4 *)((pFVar7->FloatData).DataPtr + (int)uVar11);
      if ((local_48.Variable == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar7 = local_48.DataBuffers;
      uVar11 = (((local_48.Variable)->FloatOffset + 1) * (local_48.DataBuffers)->NumInstances +
               iVar12) * 4;
      uVar9 = 0;
      if ((int)uVar11 < ((local_48.DataBuffers)->FloatData).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar5 = *(undefined4 *)((pFVar7->FloatData).DataPtr + (int)uVar11);
      if ((local_48.Variable == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar7 = local_48.DataBuffers;
      uVar11 = ((uint)(local_48.Variable)->FloatOffset * (local_48.DataBuffers)->NumInstances +
               iVar12) * 4;
      uVar9 = 0;
      if ((int)uVar11 < ((local_48.DataBuffers)->FloatData).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar2 = *(undefined4 *)((pFVar7->FloatData).DataPtr + (int)uVar11);
      uVar9 = 0;
      if (iVar8 + iVar12 < param_1->ArrayNum) {
        uVar9 = (uint)~(iVar8 + iVar12) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = iVar12 + 1;
      pFVar1 = (param_1->AllocatorInstance).Data + lVar13;
      *(ulonglong *)pFVar1 = CONCAT44(uVar5,uVar2);
      *(ulonglong *)(pFVar1 + 8) = CONCAT44(uVar3,uVar4);
      lVar13 = lVar13 + 0x10;
    }
  }
  return;
}

// ReadDataInterfaceAs @ 1493ae0f0

/* WARNING: Type propagation algorithm not settling */

UObject * __thiscall
UNiagaraSimCache::ReadDataInterfaceAs
          (UNiagaraSimCache *this,UClass *param_1,FName param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  UObject *pUVar4;
  longlong lVar5;
  uint *puVar6;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMap<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  
  iVar2 = *(int *)&(this->DataInterfaceStorage).field_0x28;
  local_30 = &(this->DataInterfaceStorage).field_0x10;
  iStack_38 = 0;
  uStack_34 = 1;
  local_20 = 0;
  iStack_24 = 0;
  if (iVar2 != 0) {
    puVar6 = *(uint **)&(this->DataInterfaceStorage).field_0x20;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)local_30;
    }
    uVar3 = *puVar6;
    while (uVar3 == 0) {
      iStack_38 = iStack_38 + 1;
      local_20 = local_20 + 0x20;
      iStack_24 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_1493ae18a;
      uVar3 = puVar6[iStack_38];
    }
    uStack_34 = ~(uVar3 - 1) & uVar3;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_24 = (int)lVar5 + -1 + local_20;
    if (iVar2 < iStack_24) {
      iStack_24 = iVar2;
    }
  }
LAB_1493ae18a:
  uStack_28 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  TStack_60.CurrentBitIndex = iStack_24;
  local_40 = &this->DataInterfaceStorage;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_30;
  if (iStack_24 < *(int *)&(this->DataInterfaceStorage).field_0x28) {
    do {
      lVar5 = *(longlong *)&this->DataInterfaceStorage;
      if (*(FName *)(lVar5 + (longlong)TStack_60.CurrentBitIndex * 0x20) == param_2) {
        pUVar4 = *(UObject **)(lVar5 + 0x10 + (longlong)TStack_60.CurrentBitIndex * 0x20);
        iVar2 = (int)param_1->_padding_;
        lVar5 = *(longlong *)&pUVar4->field_0x10;
        if (*(int *)(lVar5 + 0x38) < iVar2) {
          return (UObject *)0x0;
        }
        if ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
            &param_1->_padding_) {
          return (UObject *)0x0;
        }
        return pUVar4;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return (UObject *)0x0;
}

// ReadFloatAttribute @ 1493ae270

void __thiscall
UNiagaraSimCache::ReadFloatAttribute
          (UNiagaraSimCache *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          FName param_3,int param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  FNiagaraSimCacheDataBuffers *pFVar3;
  uint uVar4;
  uint uVar5;
  FNiagaraTypeDefinition *pFVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  FNiagaraSimCacheAttributeReaderHelper local_48;
  
  local_48.CacheFrame = (FNiagaraSimCacheFrame *)0x0;
  local_48.DataBuffers = (FNiagaraSimCacheDataBuffers *)0x0;
  local_48.DataBuffersLayout = (FNiagaraSimCacheDataBuffersLayout *)0x0;
  local_48.Variable = (FNiagaraSimCacheVariable *)0x0;
  FNiagaraSimCacheAttributeReaderHelper::Initialize(&local_48,this,param_3,param_2,param_4);
  bVar10 = local_48.Variable == (FNiagaraSimCacheVariable *)0x0;
  if ((((local_48.Variable != (FNiagaraSimCacheVariable *)0x0) &&
       (pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                           (&((local_48.Variable)->Variable).TypeDefHandle),
       (TObjectPtr<UObject>_u_0)(pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr ==
       FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0)) &&
      (pFVar6->UnderlyingType == FNiagaraTypeDefinition::FloatDef.UnderlyingType)) &&
     (pFVar6->Flags == FNiagaraTypeDefinition::FloatDef.Flags)) {
    if ((bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                            ,0x8b,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(local_48.DataBuffers)->NumInstances,&param_1->AllocatorInstance,
                       &param_1->ArrayNum,&param_1->ArrayMax);
    lVar9 = (longlong)(int)uVar4 * 4;
    uVar8 = uVar4;
    while( true ) {
      if ((local_48.Variable == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0x8b,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((int)(local_48.DataBuffers)->NumInstances <= (int)(uVar8 - uVar4)) break;
      if (((local_48.Variable)->FloatCount != 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Variable->FloatOffset != INDEX_NONE && Variable->FloatCount == 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xb7,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((local_48.Variable == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3 = local_48.DataBuffers;
      uVar7 = ((uint)(local_48.Variable)->FloatOffset * (local_48.DataBuffers)->NumInstances +
              (uVar8 - uVar4)) * 4;
      uVar5 = 0;
      if ((int)uVar7 < ((local_48.DataBuffers)->FloatData).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(undefined4 *)((pFVar3->FloatData).DataPtr + (int)uVar7);
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = uVar8 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + lVar9) = uVar1;
      lVar9 = lVar9 + 4;
    }
  }
  return;
}

// ReadFrame @ 1493ae730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UNiagaraSimCache::ReadFrame
          (UNiagaraSimCache *this,int param_1,float param_2,FNiagaraSystemInstance *param_3)

{
  FWeakObjectPtr *pFVar1;
  ulonglong uVar2;
  double *pdVar3;
  undefined8 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FNiagaraEmitterInstance *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  undefined1 uVar24;
  uint uVar25;
  int iVar26;
  undefined4 extraout_EAX;
  float fVar27;
  float fVar28;
  UObject *pUVar29;
  UClass *pUVar30;
  longlong *plVar31;
  uint uVar32;
  uint uVar33;
  longlong lVar34;
  TTransform<double> *pTVar35;
  FPlatformRWLock *SRWLock;
  FWeakObjectPtr *this_00;
  uint uVar36;
  uint uVar37;
  longlong lVar38;
  longlong lVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  longlong lVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  longlong lVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  double dVar70;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar60;
  double dVar71;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar79;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  uint uVar84;
  uint uVar85;
  undefined4 uVar86;
  uint uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  uint uVar90;
  undefined4 uVar91;
  undefined1 auVar92 [16];
  float fVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  uint uVar98;
  uint uVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined4 uVar103;
  undefined4 uVar104;
  undefined4 uVar105;
  undefined4 uVar106;
  undefined4 uVar107;
  undefined4 uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  uint uVar115;
  undefined1 auStackY_688 [32];
  char local_628 [4];
  float local_624;
  longlong local_620;
  uint local_618;
  longlong local_610;
  longlong local_608;
  FNiagaraSimCacheHelper local_600;
  FScriptContainerElement *local_5d8;
  double dStack_5d0;
  int local_5c8;
  uint local_5c4;
  longlong local_5c0;
  longlong local_5b8;
  undefined1 local_5a8 [12];
  uint uStack_59c;
  longlong local_598;
  FNiagaraDataSet *local_588;
  double dStack_580;
  TTransform<double> local_578;
  undefined4 local_518;
  FScriptContainerElement *local_510;
  FNiagaraSystemInstance *local_508;
  FPlatformRWLock *local_500;
  undefined8 local_4f8;
  FSharedReferencer<1> local_4f0;
  TTransform<double> local_4e8;
  double local_488;
  double dStack_480;
  double local_478;
  code *local_468 [5];
  undefined8 *local_440;
  undefined8 local_438;
  FNiagaraSystemInstance *local_430;
  undefined8 local_428;
  undefined1 local_41f;
  int local_41c;
  uint local_418;
  float local_414;
  undefined1 local_40f;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined8 local_348;
  float local_340;
  undefined8 local_33c;
  float local_334;
  undefined1 local_328 [32];
  ForElementType<unsigned_int> local_308;
  int local_300;
  uint local_2fc;
  int local_2f8;
  int local_2f4;
  ForElementType<FSetElementId> local_2e8;
  int local_2e0;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_688;
  SRWLock = &this->RWLock;
  local_624 = param_2;
  local_5c8 = param_1;
  local_508 = param_3;
  local_500 = SRWLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x1c,L""), bVar23)) {
    pcVar9 = (code *)swi(3);
    uVar24 = (*pcVar9)();
    return (bool)uVar24;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  local_600.NiagaraSystem = (UNiagaraSystem *)0x0;
  local_600.SystemSimulation.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_600.SystemSimulationDataBuffer = (FNiagaraDataBuffer *)0x0;
  local_4f0.ReferenceController =
       (param_3->SystemSimulation).SharedReferenceCount.ReferenceController;
  local_600.SystemSimulation.Object = (param_3->SystemSimulation).Object;
  if (local_4f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4f0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4f0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4f8 = 0;
  local_600.SystemInstance = param_3;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_600.SystemSimulation.SharedReferenceCount,&local_4f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4f0.ReferenceController);
  if (local_600.SystemSimulation.Object == (FNiagaraSystemSimulation *)0x0) {
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("SystemSimulation",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheHelper.h"
                        ,0x4e,L"");
    if (bVar23) {
      pcVar9 = (code *)swi(3);
      uVar24 = (*pcVar9)();
      return (bool)uVar24;
    }
    if ((local_600.SystemSimulation.Object == (FNiagaraSystemSimulation *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar23)) {
      pcVar9 = (code *)swi(3);
      uVar24 = (*pcVar9)();
      return (bool)uVar24;
    }
  }
  local_600.SystemSimulationDataBuffer =
       ((local_600.SystemSimulation.Object)->MainDataSet).CurrentData;
  if ((local_600.SystemSimulation.Object == (FNiagaraSystemSimulation *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar9 = (code *)swi(3);
    uVar24 = (*pcVar9)();
    return (bool)uVar24;
  }
  local_600.NiagaraSystem = (local_600.SystemSimulation.Object)->System;
  if (local_600.SystemSimulation.Object == (FNiagaraSystemSimulation *)0x0) {
    bVar23 = false;
  }
  else {
    local_5c4 = (uint)~param_1 >> 0x1f;
    uVar36 = 0;
    if (param_1 < (this->CacheFrames).ArrayNum) {
      uVar36 = local_5c4;
    }
    if ((uVar36 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar9 = (code *)swi(3);
      uVar24 = (*pcVar9)();
      return (bool)uVar24;
    }
    pFVar6 = (this->CacheFrames).AllocatorInstance.Data;
    uVar36 = (this->CacheFrames).ArrayNum - 1;
    lVar38 = (longlong)param_1 * 0x160;
    local_578.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_578.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_578.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_578.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    if ((int)(param_1 + 1U) < (int)uVar36) {
      uVar36 = param_1 + 1U;
    }
    local_578.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_578.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_4e8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_4e8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_4e8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_4e8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_4e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_4e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_618 = uVar36;
    local_598 = lVar38;
    local_510 = pFVar6;
    pUVar29 = FWeakObjectPtr::Get(&(param_3->AttachComponent).WeakPtr);
    if (pUVar29 != (UObject *)0x0) {
      dVar71 = *(double *)&pUVar29[0xc].field_0x10;
      dVar12 = *(double *)&pUVar29[0xc].field_0x18;
      dVar15 = *(double *)&pUVar29[0xc].field_0x20;
      dVar79 = *(double *)(pUVar29 + 0xd);
      dStack_480 = (double)(param_3->LWCTile).field0_0x0._s_0.Y * __real_c140000000000000;
      local_478 = (double)(param_3->LWCTile).field0_0x0._s_0.Z * __real_c140000000000000;
      uVar88 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._0_4_;
      uVar103 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._4_4_;
      uVar104 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._0_4_;
      uVar105 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._4_4_;
      uVar91 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._0_4_;
      uVar106 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._4_4_;
      uVar107 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._0_4_;
      uVar108 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._4_4_;
      auVar72._0_8_ = (double)(param_3->LWCTile).field0_0x0._s_0.X * __real_c140000000000000;
      auVar72._8_8_ = 0;
      uVar33 = GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      uVar109 = GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      uVar110 = GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      uVar111 = GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      local_1b8.Translation.ZW.m128d_f64[0] = *(double *)&pUVar29[0xd].field_0x18 + local_478;
      local_1b8.Translation.ZW.m128d_f64[1] = *(double *)&pUVar29[0xd].field_0x20 + 0.0;
      dVar60 = *(double *)&pUVar29[0xd].field_0x10 + dStack_480;
      local_1b8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar60,0);
      local_1b8.Translation.XY.m128d_f64[0] = *(double *)&pUVar29[0xd].field_0x8 + auVar72._0_8_;
      local_1b8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar60 >> 0x20);
      dVar60 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      uVar86 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      uVar89 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
      ;
      dVar59 = dVar71 * dVar71 + dVar15 * dVar15;
      dVar70 = dVar12 * dVar12 + dVar79 * dVar79;
      auVar46._8_4_ = SUB84(dVar70,0);
      auVar46._0_8_ = dVar59;
      auVar46._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
      auVar63._0_8_ = auVar46._8_8_ + dVar59;
      auVar63._8_8_ = dVar59 + dVar70;
      dVar70 = *(double *)(pFVar6 + lVar38);
      dVar17 = *(double *)(pFVar6 + lVar38 + 8);
      uVar40 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar63._0_8_)
      ;
      uVar43 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar63._8_8_)
      ;
      auVar73 = sqrtpd(auVar72,auVar63);
      uVar41 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar63._0_8_)
      ;
      uVar44 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar63._8_8_)
      ;
      local_5a8._8_4_ = uVar86;
      local_5a8._0_8_ = dVar60;
      uStack_59c = uVar89;
      auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar73);
      dVar59 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      uVar32 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      uVar115 = (uint)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      dVar18 = *(double *)(pFVar6 + lVar38 + 0x10);
      dVar19 = *(double *)(pFVar6 + lVar38 + 0x10 + 8);
      auVar47._0_8_ = (ulonglong)(auVar46._0_8_ * dVar71) & uVar40;
      uVar2 = uVar43 & (ulonglong)(auVar46._8_8_ * dVar12);
      auVar47._8_4_ = (undefined4)uVar2;
      auVar47._12_4_ = (undefined4)(uVar2 >> 0x20);
      local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar32;
      local_1b8.Scale3D.XY.m128d_f64[0] = dVar59;
      local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar115;
      auVar61._0_4_ = ~(uint)uVar40 & uVar33;
      auVar61._4_4_ = ~(uint)(uVar40 >> 0x20) & uVar109;
      auVar61._8_4_ = ~(uint)uVar43 & uVar110;
      auVar61._12_4_ = ~(uint)(uVar43 >> 0x20) & uVar111;
      local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar86;
      local_1b8.Scale3D.ZW.m128d_f64[0] = dVar60;
      local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar89;
      local_1b8.Rotation.XY.m128d_f64 = (double  [2])(auVar47 | auVar61);
      local_578.Scale3D.XY.m128d_f64[1]._0_4_ = uVar32;
      local_578.Scale3D.XY.m128d_f64[0] = dVar59;
      local_578.Scale3D.XY.m128d_f64[1]._4_4_ = uVar115;
      local_578.Translation.XY.m128d_f64 = *(double (*) [2])(pFVar6 + lVar38 + 0x20);
      auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar73);
      uVar37 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      uVar97 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      uVar98 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      uVar99 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      auVar62._0_8_ = (ulonglong)(auVar46._0_8_ * dVar15) & uVar41;
      uVar2 = uVar44 & (ulonglong)(auVar46._8_8_ * dVar79);
      auVar62._8_4_ = (undefined4)uVar2;
      auVar62._12_4_ = (undefined4)(uVar2 >> 0x20);
      local_578.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar86;
      local_578.Scale3D.ZW.m128d_f64[0] = dVar60;
      local_578.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar89;
      auVar80._0_4_ = ~(uint)uVar41 & uVar37;
      auVar80._4_4_ = ~(uint)(uVar41 >> 0x20) & uVar97;
      auVar80._8_4_ = ~(uint)uVar44 & uVar98;
      auVar80._12_4_ = ~(uint)(uVar44 >> 0x20) & uVar99;
      local_1b8.Rotation.ZW.m128d_f64 = (double  [2])(auVar62 | auVar80);
      local_578.Translation.ZW.m128d_f64 = *(double (*) [2])(pFVar6 + lVar38 + 0x30);
      uVar25 = 0;
      if ((int)uVar36 < (this->CacheFrames).ArrayNum) {
        uVar25 = ~uVar36 >> 0x1f;
      }
      dVar60 = dVar70 * dVar70 + dVar18 * dVar18;
      dVar71 = dVar17 * dVar17 + dVar19 * dVar19;
      auVar48._8_4_ = SUB84(dVar71,0);
      auVar48._0_8_ = dVar60;
      auVar48._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
      auVar49._0_8_ = auVar48._8_8_ + dVar60;
      auVar49._8_8_ = dVar60 + dVar71;
      auVar46 = sqrtpd(auVar73,auVar49);
      uVar40 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar49._0_8_)
      ;
      uVar43 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar49._8_8_)
      ;
      uVar41 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar49._0_8_)
      ;
      uVar44 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar49._8_8_)
      ;
      auVar63 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar46);
      auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar46);
      auVar64._0_8_ = (ulonglong)(auVar63._0_8_ * dVar70) & uVar40;
      uVar2 = uVar43 & (ulonglong)(auVar63._8_8_ * dVar17);
      auVar64._8_4_ = (undefined4)uVar2;
      auVar64._12_4_ = (undefined4)(uVar2 >> 0x20);
      auVar81._0_4_ = ~(uint)uVar40 & uVar33;
      auVar81._4_4_ = ~(uint)(uVar40 >> 0x20) & uVar109;
      auVar81._8_4_ = ~(uint)uVar43 & uVar110;
      auVar81._12_4_ = ~(uint)(uVar43 >> 0x20) & uVar111;
      auVar50._0_8_ = uVar41 & (ulonglong)(auVar46._0_8_ * dVar18);
      uVar2 = uVar44 & (ulonglong)(auVar46._8_8_ * dVar19);
      auVar50._8_4_ = (undefined4)uVar2;
      auVar50._12_4_ = (undefined4)(uVar2 >> 0x20);
      local_578.Rotation.XY.m128d_f64 = (double  [2])(auVar64 | auVar81);
      auVar73._4_4_ = ~(uint)(uVar41 >> 0x20) & uVar97;
      auVar73._0_4_ = ~(uint)uVar41 & uVar37;
      auVar73._8_4_ = ~(uint)uVar44 & uVar98;
      auVar73._12_4_ = ~(uint)(uVar44 >> 0x20) & uVar99;
      local_578.Rotation.ZW.m128d_f64 = (double  [2])(auVar50 | auVar73);
      local_488 = auVar72._0_8_;
      if (uVar25 == 0) {
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar23) {
          pcVar9 = (code *)swi(3);
          uVar24 = (*pcVar9)();
          return (bool)uVar24;
        }
        uVar37 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        uVar97 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        uVar98 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        uVar99 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        uVar33 = GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        uVar109 = GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        uVar110 = GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        uVar111 = GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        uVar91 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._0_4_;
        uVar106 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]._4_4_;
        uVar107 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._0_4_;
        uVar108 = GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]._4_4_;
        uVar88 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._0_4_;
        uVar103 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]._4_4_;
        uVar104 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._0_4_;
        uVar105 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]._4_4_;
      }
      uVar22 = _UNK_15061cc8c;
      uVar21 = _UNK_15061cc88;
      uVar20 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      lVar34 = (longlong)(int)uVar36 * 0x160;
      uVar84 = local_5a8._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar85 = local_5a8._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar87 = local_5a8._8_4_ & _UNK_15061cc88;
      uVar90 = uStack_59c & _UNK_15061cc8c;
      dVar60 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      uVar94 = (uint)((ulonglong)dVar60 >> 0x20);
      uVar95 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      uVar96 = (uint)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      pFVar7 = (this->CacheFrames).AllocatorInstance.Data;
      dVar71 = *(double *)(pFVar7 + lVar34);
      dVar12 = *(double *)(pFVar7 + lVar34 + 8);
      dVar15 = *(double *)(pFVar7 + lVar34 + 0x10);
      dVar79 = *(double *)(pFVar7 + lVar34 + 0x10 + 8);
      local_588 = *(FNiagaraDataSet **)(pFVar7 + lVar34 + 0x20);
      dStack_580 = *(double *)(pFVar7 + lVar34 + 0x20 + 8);
      local_4e8.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar7 + lVar34 + 0x50);
      local_4e8.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar7 + lVar34 + 0x50 + 8);
      local_5d8 = *(FScriptContainerElement **)(pFVar7 + lVar34 + 0x30);
      dStack_5d0 = *(double *)(pFVar7 + lVar34 + 0x30 + 8);
      stack0xfffffffffffffa60 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_5a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_4e8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar95;
      local_4e8.Scale3D.XY.m128d_f64[0] = dVar60;
      local_4e8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar96;
      auVar65._0_8_ = dVar71 * dVar71 + dVar15 * dVar15;
      auVar65._8_8_ = dVar12 * dVar12 + dVar79 * dVar79;
      auVar51._8_4_ = SUB84(auVar65._8_8_,0);
      auVar51._0_8_ = auVar65._0_8_;
      auVar51._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
      auVar52._0_8_ = auVar51._8_8_ + auVar65._0_8_;
      auVar52._8_8_ = auVar65._0_8_ + auVar65._8_8_;
      auVar46 = sqrtpd(auVar65,auVar52);
      uVar40 = -(ulonglong)((double)CONCAT44(uVar103,uVar88) <= auVar52._0_8_);
      uVar43 = -(ulonglong)((double)CONCAT44(uVar105,uVar104) <= auVar52._8_8_);
      auVar63 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar46);
      auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar46);
      uVar41 = -(ulonglong)((double)CONCAT44(uVar106,uVar91) <= auVar52._0_8_);
      uVar44 = -(ulonglong)((double)CONCAT44(uVar108,uVar107) <= auVar52._8_8_);
      auVar113._0_8_ = uVar40 & (ulonglong)(auVar63._0_8_ * dVar71);
      uVar2 = uVar43 & (ulonglong)(auVar63._8_8_ * dVar12);
      auVar113._8_4_ = (undefined4)uVar2;
      auVar113._12_4_ = (undefined4)(uVar2 >> 0x20);
      auVar112._0_8_ = uVar41 & (ulonglong)(auVar46._0_8_ * dVar15);
      uVar2 = uVar44 & (ulonglong)(auVar46._8_8_ * dVar79);
      auVar112._8_4_ = (undefined4)uVar2;
      auVar112._12_4_ = (undefined4)(uVar2 >> 0x20);
      auVar66._8_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
            (double)CONCAT44(uVar90,uVar87));
      auVar66._0_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
            (double)CONCAT44(uVar85,uVar84));
      auVar53._8_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
            (double)CONCAT44(uVar115 & _UNK_15061cc8c,uVar32 & _UNK_15061cc88));
      auVar53._0_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
            (double)CONCAT44((uint)((ulonglong)dVar59 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar59,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      uVar32 = movmskpd((int)lVar34,auVar66);
      iVar26 = movmskpd((int)pFVar7,auVar53);
      auVar13._4_4_ = ~(uint)(uVar40 >> 0x20) & uVar109;
      auVar13._0_4_ = ~(uint)uVar40 & uVar33;
      auVar13._8_4_ = ~(uint)uVar43 & uVar110;
      auVar13._12_4_ = ~(uint)(uVar43 >> 0x20) & uVar111;
      auVar16._4_4_ = ~(uint)(uVar41 >> 0x20) & uVar97;
      auVar16._0_4_ = ~(uint)uVar41 & uVar37;
      auVar16._8_4_ = ~(uint)uVar44 & uVar98;
      auVar16._12_4_ = ~(uint)(uVar44 >> 0x20) & uVar99;
      if ((uVar32 & 0x3fffffff) == 0 && iVar26 == 0) {
        local_158.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_158.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_158.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_158.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_158.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_158.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(&local_578,&local_158);
      }
      local_2d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_2d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      pTVar35 = &local_2d8;
      local_2d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_2d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_2d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_2d8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_2d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_2d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_2d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_2d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(pTVar35,&local_158,&local_1b8);
      local_578.Rotation.XY.m128d_f64[1] = local_2d8.Rotation.XY.m128d_f64[1];
      local_578.Rotation.XY.m128d_f64[0] = local_2d8.Rotation.XY.m128d_f64[0];
      auVar74._0_8_ = (double)CONCAT44(local_5a8._4_4_ & uVar20,local_5a8._0_4_ & uVar25);
      auVar74._8_4_ = local_5a8._8_4_ & uVar21;
      auVar74._12_4_ = local_5a8._12_4_ & uVar22;
      local_578.Translation.XY.m128d_f64[1] = local_2d8.Translation.XY.m128d_f64[1];
      local_578.Translation.XY.m128d_f64[0] = local_2d8.Translation.XY.m128d_f64[0];
      local_578.Rotation.ZW.m128d_f64[1] = local_2d8.Rotation.ZW.m128d_f64[1];
      local_578.Rotation.ZW.m128d_f64[0] = local_2d8.Rotation.ZW.m128d_f64[0];
      local_578.Scale3D.XY.m128d_f64[1] = local_2d8.Scale3D.XY.m128d_f64[1];
      local_578.Scale3D.XY.m128d_f64[0] = local_2d8.Scale3D.XY.m128d_f64[0];
      local_578.Translation.ZW.m128d_f64[1] = local_2d8.Translation.ZW.m128d_f64[1];
      local_578.Translation.ZW.m128d_f64[0] = local_2d8.Translation.ZW.m128d_f64[0];
      local_578.Scale3D.ZW.m128d_f64[1] = local_2d8.Scale3D.ZW.m128d_f64[1];
      local_578.Scale3D.ZW.m128d_f64[0] = local_2d8.Scale3D.ZW.m128d_f64[0];
      auVar67._8_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar74._8_8_);
      auVar67._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar74._0_8_);
      uVar33 = movmskpd((int)pTVar35,auVar67);
      auVar75._0_8_ = (double)CONCAT44(uVar94 & uVar20,SUB84(dVar60,0) & uVar25);
      auVar75._8_4_ = uVar95 & uVar21;
      auVar75._12_4_ = uVar96 & uVar22;
      auVar54._8_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar75._8_8_);
      auVar54._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar75._0_8_);
      iVar26 = movmskpd(extraout_EAX,auVar54);
      if ((uVar33 & 0x3fffffff) == 0 && iVar26 == 0) {
        local_278.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_278.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_278.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_278.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_278.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_278.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
      }
      else {
        local_278.Rotation.ZW.m128d_f64[0] =
             SUB168(auVar112 | auVar16,0) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        local_278.Rotation.ZW.m128d_f64[1] =
             SUB168(auVar112 | auVar16,8) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        local_278.Rotation.XY.m128d_f64[0] =
             SUB168(auVar113 | auVar13,0) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        local_278.Rotation.XY.m128d_f64[1] =
             SUB168(auVar113 | auVar13,8) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        auVar114._0_8_ = (double)CONCAT44(uVar20 & uVar94,uVar25 & SUB84(dVar60,0));
        auVar114._8_4_ = uVar21 & uVar95;
        auVar114._12_4_ = uVar22 & uVar96;
        lVar34 = -(ulonglong)
                  ((double)CONCAT44(uVar20 & local_5a8._4_4_,uVar25 & local_5a8._0_4_) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        auVar11._8_4_ = uVar95;
        auVar11._0_8_ = dVar60;
        auVar11._12_4_ = uVar96;
        auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar11);
        lVar42 = -(ulonglong)
                  (auVar114._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar45 = -(ulonglong)
                  (auVar114._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        local_278.Scale3D.XY.m128d_f64[0] =
             (double)CONCAT44(~(uint)((ulonglong)lVar42 >> 0x20) & auVar46._4_4_,
                              ~(uint)lVar42 & auVar46._0_4_);
        local_278.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar45 & auVar46._8_4_;
        local_278.Scale3D.XY.m128d_f64[1]._4_4_ =
             ~(uint)((ulonglong)lVar45 >> 0x20) & auVar46._12_4_;
        auVar10._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar10._0_8_ = local_5a8._0_8_;
        auVar10._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar10);
        auVar76._8_4_ = SUB84(local_278.Rotation.XY.m128d_f64[1],0);
        auVar76._0_8_ = local_278.Rotation.XY.m128d_f64[0];
        uVar91 = (undefined4)((ulonglong)local_278.Rotation.XY.m128d_f64[1] >> 0x20);
        auVar76._12_4_ = uVar91;
        dVar12 = local_278.Scale3D.XY.m128d_f64[0] * (double)local_588;
        dVar71 = (double)CONCAT44(local_278.Scale3D.XY.m128d_f64[1]._4_4_,
                                  local_278.Scale3D.XY.m128d_f64[1]._0_4_);
        dVar71 = dVar71 * dStack_580;
        uVar88 = (undefined4)((ulonglong)dVar71 >> 0x20);
        dVar79 = auVar76._8_8_;
        local_278.Scale3D.ZW.m128d_f64[0] =
             (double)CONCAT44(~(uint)((ulonglong)lVar34 >> 0x20) & auVar46._4_4_,
                              ~(uint)lVar34 & auVar46._0_4_);
        auVar100._8_4_ = SUB84(dVar71,0);
        auVar100._0_8_ = dVar12;
        auVar100._12_4_ = uVar88;
        auVar55._8_4_ = SUB84(local_278.Rotation.ZW.m128d_f64[0],0);
        auVar55._0_8_ = dVar79;
        auVar55._12_4_ = (int)((ulonglong)local_278.Rotation.ZW.m128d_f64[0] >> 0x20);
        auVar92._8_4_ = SUB84(local_278.Rotation.XY.m128d_f64[1],0);
        auVar92._0_8_ = local_278.Rotation.XY.m128d_f64[0];
        auVar92._12_4_ = uVar91;
        auVar63 = blendpd(auVar92,(undefined1  [16])local_278.Rotation.ZW.m128d_f64,2);
        auVar68._8_4_ = SUB84(dVar71,0);
        auVar68._0_8_ = dVar12;
        auVar68._12_4_ = uVar88;
        dVar15 = local_278.Scale3D.ZW.m128d_f64[0] * (double)local_5d8;
        dVar60 = dStack_5d0 * 0.0;
        auVar14._8_4_ = SUB84(dVar60,0);
        auVar14._0_8_ = dVar15;
        auVar14._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
        auVar46 = blendpd(auVar68,auVar14,2);
        auVar101._0_8_ = auVar100._8_8_ * local_278.Rotation.XY.m128d_f64[0] - dVar79 * dVar12;
        auVar101._8_8_ = dVar15 * local_278.Rotation.XY.m128d_f64[1] - auVar55._8_8_ * dVar71;
        auVar69._0_8_ = auVar46._0_8_ * local_278.Rotation.ZW.m128d_f64[0] - auVar63._0_8_ * dVar15;
        auVar69._8_8_ = auVar46._8_8_ * local_278.Rotation.ZW.m128d_f64[1] - auVar63._8_8_ * dVar60;
        dVar60 = auVar101._8_8_ + auVar101._8_8_;
        dVar59 = auVar69._0_8_ + auVar69._0_8_;
        uVar88 = SUB84(dVar59,0);
        uVar91 = (undefined4)((ulonglong)dVar59 >> 0x20);
        auVar46 = blendpd(auVar101,auVar69,2);
        auVar102._0_8_ = auVar46._0_8_ + auVar46._0_8_;
        auVar102._8_8_ = auVar46._8_8_ + auVar46._8_8_;
        auVar82._8_4_ = uVar88;
        auVar82._0_8_ = dVar60;
        auVar82._12_4_ = uVar91;
        auVar56._8_4_ = uVar88;
        auVar56._0_8_ = dVar60;
        auVar56._12_4_ = uVar91;
        auVar77._8_4_ = uVar88;
        auVar77._0_8_ = dVar60;
        auVar77._12_4_ = uVar91;
        auVar46 = blendpd(auVar77,auVar102,2);
        auVar83._0_8_ = auVar82._8_8_ * local_278.Rotation.XY.m128d_f64[0] - dVar60 * dVar79;
        auVar83._8_8_ =
             auVar102._0_8_ * local_278.Rotation.XY.m128d_f64[1] -
             auVar56._8_8_ * local_278.Rotation.ZW.m128d_f64[0];
        auVar57._8_4_ = SUB84(auVar102._8_8_,0);
        auVar57._0_8_ = auVar102._0_8_;
        auVar57._12_4_ = (int)((ulonglong)auVar102._8_8_ >> 0x20);
        auVar78._0_8_ =
             auVar46._0_8_ * local_278.Rotation.ZW.m128d_f64[0] - auVar102._0_8_ * auVar63._0_8_;
        auVar78._8_8_ =
             auVar46._8_8_ * local_278.Rotation.ZW.m128d_f64[1] - auVar57._8_8_ * auVar63._8_8_;
        auVar58._8_4_ = SUB84(auVar83._8_8_,0);
        auVar58._0_8_ = auVar83._0_8_;
        auVar58._12_4_ = (int)((ulonglong)auVar83._8_8_ >> 0x20);
        auVar46 = blendpd(auVar83,auVar78,2);
        local_278.Translation.XY.m128d_f64[1] =
             0.0 - (dVar59 * local_278.Rotation.ZW.m128d_f64[1] + dVar71 + auVar78._0_8_);
        local_278.Translation.XY.m128d_f64[0] =
             0.0 - (dVar60 * local_278.Rotation.ZW.m128d_f64[1] + dVar12 + auVar58._8_8_);
        local_278.Translation.ZW.m128d_f64[1] = 0.0;
        local_278.Translation.ZW.m128d_f64[0] =
             0.0 - (auVar102._0_8_ * local_278.Rotation.ZW.m128d_f64[1] + dVar15 + auVar46._0_8_);
        local_278.Scale3D.ZW.m128d_f64[1] = 0.0;
      }
      local_218.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_218.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_218.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_218.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_218.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_218.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_218.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_218.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_218.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_218.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_218,&local_278,&local_1b8);
      local_4e8.Rotation.XY.m128d_f64[1] = local_218.Rotation.XY.m128d_f64[1];
      local_4e8.Rotation.XY.m128d_f64[0] = local_218.Rotation.XY.m128d_f64[0];
      local_4e8.Rotation.ZW.m128d_f64[1] = local_218.Rotation.ZW.m128d_f64[1];
      local_4e8.Rotation.ZW.m128d_f64[0] = local_218.Rotation.ZW.m128d_f64[0];
      local_4e8.Translation.XY.m128d_f64[1] = local_218.Translation.XY.m128d_f64[1];
      local_4e8.Translation.XY.m128d_f64[0] = local_218.Translation.XY.m128d_f64[0];
      local_4e8.Translation.ZW.m128d_f64[1] = local_218.Translation.ZW.m128d_f64[1];
      local_4e8.Translation.ZW.m128d_f64[0] = local_218.Translation.ZW.m128d_f64[0];
      local_4e8.Scale3D.XY.m128d_f64[1] = local_218.Scale3D.XY.m128d_f64[1];
      local_4e8.Scale3D.XY.m128d_f64[0] = local_218.Scale3D.XY.m128d_f64[0];
      local_4e8.Scale3D.ZW.m128d_f64[1] = local_218.Scale3D.ZW.m128d_f64[1];
      local_4e8.Scale3D.ZW.m128d_f64[0] = local_218.Scale3D.ZW.m128d_f64[0];
      param_2 = local_624;
    }
    local_624 = (float)(~uVar36 >> 0x1f);
    lVar34 = (longlong)(int)uVar36;
    fVar27 = 0.0;
    if ((int)uVar36 < (this->CacheFrames).ArrayNum) {
      fVar27 = local_624;
    }
    local_608 = lVar34;
    if ((fVar27 == 0.0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar9 = (code *)swi(3);
      uVar24 = (*pcVar9)();
      return (bool)uVar24;
    }
    dVar60 = *(double *)(pFVar6 + lVar38 + 0x78 + 8);
    lVar34 = lVar34 * 0x160;
    fVar93 = *(float *)((this->CacheFrames).AllocatorInstance.Data + lVar34 + 0x6c) -
             *(float *)(pFVar6 + lVar38 + 0x6c);
    fVar27 = (local_600.SystemInstance)->CachedDeltaSeconds;
    ((local_600.SystemInstance)->LocalBounds).Min.field0_0x0._s_0.X =
         *(double *)(pFVar6 + lVar38 + 0x78);
    ((local_600.SystemInstance)->LocalBounds).Min.field0_0x0._s_0.Y = dVar60;
    dVar60 = *(double *)(pFVar6 + lVar38 + 0x88 + 8);
    ((local_600.SystemInstance)->LocalBounds).Min.field0_0x0._s_0.Z =
         *(double *)(pFVar6 + lVar38 + 0x88);
    ((local_600.SystemInstance)->LocalBounds).Max.field0_0x0._s_0.X = dVar60;
    dVar60 = *(double *)(pFVar6 + lVar38 + 0x98 + 8);
    ((local_600.SystemInstance)->LocalBounds).Max.field0_0x0._s_0.Y =
         *(double *)(pFVar6 + lVar38 + 0x98);
    ((local_600.SystemInstance)->LocalBounds).Max.field0_0x0._s_0.Z = dVar60;
    uVar4 = *(undefined8 *)(pFVar6 + lVar38 + 0xa8);
    ((local_600.SystemInstance)->LocalBounds).IsValid = (char)uVar4;
    ((local_600.SystemInstance)->LocalBounds).Pad[0] = (char)((ulonglong)uVar4 >> 8);
    ((local_600.SystemInstance)->LocalBounds).Pad[1] = (char)((ulonglong)uVar4 >> 0x10);
    ((local_600.SystemInstance)->LocalBounds).Pad[2] = (char)((ulonglong)uVar4 >> 0x18);
    ((local_600.SystemInstance)->LocalBounds).Pad[3] = (char)((ulonglong)uVar4 >> 0x20);
    ((local_600.SystemInstance)->LocalBounds).Pad[4] = (char)((ulonglong)uVar4 >> 0x28);
    ((local_600.SystemInstance)->LocalBounds).Pad[5] = (char)((ulonglong)uVar4 >> 0x30);
    ((local_600.SystemInstance)->LocalBounds).Pad[6] = (char)((ulonglong)uVar4 >> 0x38);
    local_5b8 = lVar34;
    if ((local_600.SystemSimulation.Object == (FNiagaraSystemSimulation *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar23)) {
      pcVar9 = (code *)swi(3);
      uVar24 = (*pcVar9)();
      return (bool)uVar24;
    }
    FNiagaraSimCacheHelper::ReadDataBuffer
              (&local_600,param_2,fVar93,fVar27,&local_578,&local_4e8,
               &(this->CacheLayout).SystemLayout,
               (FNiagaraSimCacheDataBuffers *)(pFVar6 + lVar38 + 0xb0),
               (FNiagaraSimCacheDataBuffers *)(pFVar6 + lVar38 + 0xb0),
               &(local_600.SystemSimulation.Object)->MainDataSet);
    lVar45 = (longlong)(this->CacheLayout).EmitterLayouts.ArrayNum;
    uVar33 = 0;
    local_5a8._0_8_ = lVar45;
    lVar42 = lVar38;
    if (0 < lVar45) {
      lVar45 = 0;
      local_610 = 0;
      local_620 = 0;
      lVar39 = 0;
      do {
        lVar34 = local_610;
        uVar37 = ~uVar33 >> 0x1f;
        uVar36 = 0;
        if ((int)uVar33 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
          uVar36 = uVar37;
        }
        if ((uVar36 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar9 = (code *)swi(3);
          uVar24 = (*pcVar9)();
          return (bool)uVar24;
        }
        pFVar6 = local_510;
        if (*(longlong *)((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data + lVar34) != 0)
        {
          uVar36 = 0;
          if ((int)uVar33 < *(int *)(local_510 + lVar38 + 0x150)) {
            uVar36 = uVar37;
          }
          if ((uVar36 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar9 = (code *)swi(3);
            uVar24 = (*pcVar9)();
            return (bool)uVar24;
          }
          local_5c0 = *(longlong *)(pFVar6 + lVar38 + 0x148);
          iVar26 = ((local_600.SystemInstance)->Emitters).ArrayNum;
          local_5d8 = ((local_600.SystemInstance)->Emitters).AllocatorInstance.Data;
          if ((iVar26 < 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar23)) {
            pcVar9 = (code *)swi(3);
            uVar24 = (*pcVar9)();
            return (bool)uVar24;
          }
          uVar36 = 0;
          if ((int)uVar33 < iVar26) {
            uVar36 = uVar37;
          }
          if ((uVar36 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar23)) {
            pcVar9 = (code *)swi(3);
            uVar24 = (*pcVar9)();
            return (bool)uVar24;
          }
          pFVar8 = *(FNiagaraEmitterInstance **)(local_5d8 + local_620);
          dVar60 = ((double *)(lVar39 + local_5c0))[1];
          (pFVar8->CachedBounds).Min.field0_0x0._s_0.X = *(double *)(lVar39 + local_5c0);
          (pFVar8->CachedBounds).Min.field0_0x0._s_0.Y = dVar60;
          pdVar3 = (double *)(lVar39 + 0x10 + local_5c0);
          dVar60 = pdVar3[1];
          (pFVar8->CachedBounds).Min.field0_0x0._s_0.Z = *pdVar3;
          (pFVar8->CachedBounds).Max.field0_0x0._s_0.X = dVar60;
          pdVar3 = (double *)(lVar39 + 0x20 + local_5c0);
          dVar60 = pdVar3[1];
          (pFVar8->CachedBounds).Max.field0_0x0._s_0.Y = *pdVar3;
          (pFVar8->CachedBounds).Max.field0_0x0._s_0.Z = dVar60;
          uVar4 = *(undefined8 *)(lVar39 + 0x30 + local_5c0);
          (pFVar8->CachedBounds).IsValid = (char)uVar4;
          (pFVar8->CachedBounds).Pad[0] = (char)((ulonglong)uVar4 >> 8);
          (pFVar8->CachedBounds).Pad[1] = (char)((ulonglong)uVar4 >> 0x10);
          (pFVar8->CachedBounds).Pad[2] = (char)((ulonglong)uVar4 >> 0x18);
          (pFVar8->CachedBounds).Pad[3] = (char)((ulonglong)uVar4 >> 0x20);
          (pFVar8->CachedBounds).Pad[4] = (char)((ulonglong)uVar4 >> 0x28);
          (pFVar8->CachedBounds).Pad[5] = (char)((ulonglong)uVar4 >> 0x30);
          (pFVar8->CachedBounds).Pad[6] = (char)((ulonglong)uVar4 >> 0x38);
          pFVar8->TotalSpawnedParticles = *(int *)(lVar39 + 0x38 + local_5c0);
          fVar28 = 0.0;
          if ((int)local_618 < (this->CacheFrames).ArrayNum) {
            fVar28 = local_624;
          }
          if ((fVar28 == 0.0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar9 = (code *)swi(3);
            uVar24 = (*pcVar9)();
            return (bool)uVar24;
          }
          local_5d8 = (this->CacheFrames).AllocatorInstance.Data;
          uVar36 = 0;
          if ((int)uVar33 < *(int *)(local_5d8 + local_5b8 + 0x150)) {
            uVar36 = uVar37;
          }
          if ((uVar36 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar9 = (code *)swi(3);
            uVar24 = (*pcVar9)();
            return (bool)uVar24;
          }
          local_5d8 = *(FScriptContainerElement **)(local_5d8 + local_5b8 + 0x148);
          uVar36 = 0;
          if ((int)uVar33 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
            uVar36 = uVar37;
          }
          if ((uVar36 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar9 = (code *)swi(3);
            uVar24 = (*pcVar9)();
            return (bool)uVar24;
          }
          if ((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data[local_610 + 8] ==
              (FScriptContainerElement)0x1) {
            if ((pFVar8->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ParticleDataSet",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                                    ,0x39,L""), bVar23)) {
              pcVar9 = (code *)swi(3);
              uVar24 = (*pcVar9)();
              return (bool)uVar24;
            }
            local_588 = pFVar8->ParticleDataSet;
            uVar36 = 0;
            if ((int)uVar33 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
              uVar36 = uVar37;
            }
            if ((uVar36 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar9 = (code *)swi(3);
              uVar24 = (*pcVar9)();
              return (bool)uVar24;
            }
            FNiagaraSimCacheHelper::ReadDataBufferGPU
                      (&local_600,param_2,fVar93,fVar27,&local_578,&local_4e8,pFVar8,
                       (FNiagaraSimCacheDataBuffersLayout *)
                       ((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data + local_610),
                       (FNiagaraSimCacheDataBuffers *)(local_5c0 + 0x40 + lVar39),
                       (FNiagaraSimCacheDataBuffers *)((longlong)local_5d8 + 0x40 + lVar39),
                       local_588,&this->PendingCommandsInFlight);
            lVar34 = local_610;
          }
          else {
            if ((pFVar8->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ParticleDataSet",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                                    ,0x39,L""), bVar23)) {
              pcVar9 = (code *)swi(3);
              uVar24 = (*pcVar9)();
              return (bool)uVar24;
            }
            local_588 = pFVar8->ParticleDataSet;
            uVar36 = 0;
            if ((int)uVar33 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
              uVar36 = uVar37;
            }
            if ((uVar36 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar9 = (code *)swi(3);
              uVar24 = (*pcVar9)();
              return (bool)uVar24;
            }
            lVar34 = local_610;
            FNiagaraSimCacheHelper::ReadDataBuffer
                      (&local_600,param_2,fVar93,fVar27,&local_578,&local_4e8,
                       (FNiagaraSimCacheDataBuffersLayout *)
                       ((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data + local_610),
                       (FNiagaraSimCacheDataBuffers *)(local_5c0 + 0x40 + lVar39),
                       (FNiagaraSimCacheDataBuffers *)((longlong)local_5d8 + 0x40 + lVar39),
                       local_588);
          }
        }
        local_620 = local_620 + 0x10;
        local_610 = lVar34 + 0xb8;
        uVar33 = uVar33 + 1;
        lVar45 = lVar45 + 1;
        lVar39 = lVar39 + 0xd8;
        lVar34 = local_5b8;
        lVar42 = local_598;
        param_3 = local_508;
        uVar36 = local_618;
      } while (lVar45 < (longlong)local_5a8._0_8_);
    }
    iVar26 = *(int *)&(this->DataInterfaceStorage).field_0x34;
    iVar5 = *(int *)&(this->DataInterfaceStorage).field_0x8;
    if (iVar5 != iVar26) {
      local_328._0_8_ = (FScriptContainerElement *)0x0;
      local_328._8_8_ = 0;
      local_308 = (ForElementType<unsigned_int>)0x0;
      local_300 = 0;
      local_2fc = 0x80;
      local_2f8 = -1;
      local_2f4 = 0;
      local_2e8 = (ForElementType<FSetElementId>)0x0;
      local_2e0 = 0;
      uVar33 = iVar5 - iVar26;
      if (uVar33 != 0) {
        if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar33);
        }
        TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_328,uVar33);
        if (uVar33 < 4) {
          iVar26 = 1;
        }
        else {
          uVar2 = (ulonglong)((uVar33 >> 1) + 7) * 2 + 1;
          lVar38 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar38 == 0; lVar38 = lVar38 + -1) {
            }
          }
          local_518 = (undefined4)lVar38;
          iVar26 = 1 << ((byte)lVar38 & 0x1f);
        }
        if ((local_2e0 == 0) || (local_2e0 < iVar26)) {
          local_2e0 = iVar26;
          TSet<FNiagaraVariableBase,DefaultKeyFuncs<FNiagaraVariableBase,0>,FDefaultSetAllocator>::
          Rehash((TSet<FNiagaraVariableBase,DefaultKeyFuncs<FNiagaraVariableBase,0>,FDefaultSetAllocator>
                  *)local_328);
        }
      }
      local_348 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_33c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_408 = local_578.Rotation.XY.m128d_f64[0];
      dStack_400 = local_578.Rotation.XY.m128d_f64[1];
      local_3f8 = local_578.Rotation.ZW.m128d_f64[0];
      dStack_3f0 = local_578.Rotation.ZW.m128d_f64[1];
      local_3e8 = local_578.Translation.XY.m128d_f64[0];
      dStack_3e0 = local_578.Translation.XY.m128d_f64[1];
      local_3d8 = local_578.Translation.ZW.m128d_f64[0];
      dStack_3d0 = local_578.Translation.ZW.m128d_f64[1];
      local_340 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_334 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_3c8 = local_578.Scale3D.XY.m128d_f64[0];
      dStack_3c0 = local_578.Scale3D.XY.m128d_f64[1];
      local_3b8 = local_578.Scale3D.ZW.m128d_f64[0];
      dStack_3b0 = local_578.Scale3D.ZW.m128d_f64[1];
      local_430 = local_600.SystemInstance;
      local_3a8 = local_4e8.Rotation.XY.m128d_f64[0];
      dStack_3a0 = local_4e8.Rotation.XY.m128d_f64[1];
      uVar33 = 0;
      if (local_5c8 < (this->CacheFrames).ArrayNum) {
        uVar33 = local_5c4;
      }
      local_398 = local_4e8.Rotation.ZW.m128d_f64[0];
      dStack_390 = local_4e8.Rotation.ZW.m128d_f64[1];
      local_388 = local_4e8.Translation.XY.m128d_f64[0];
      dStack_380 = local_4e8.Translation.XY.m128d_f64[1];
      local_378 = local_4e8.Translation.ZW.m128d_f64[0];
      dStack_370 = local_4e8.Translation.ZW.m128d_f64[1];
      local_368 = local_4e8.Scale3D.XY.m128d_f64[0];
      dStack_360 = local_4e8.Scale3D.XY.m128d_f64[1];
      local_438 = 0;
      local_428 = 0;
      local_41f = 0;
      local_40f = 0;
      local_41c = local_5c8;
      local_358 = local_4e8.Scale3D.ZW.m128d_f64[0];
      dStack_350 = local_4e8.Scale3D.ZW.m128d_f64[1];
      local_418 = uVar36;
      local_414 = param_2;
      if ((uVar33 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar9 = (code *)swi(3);
        uVar24 = (*pcVar9)();
        return (bool)uVar24;
      }
      pFVar6 = (this->CacheFrames).AllocatorInstance.Data;
      local_348 = *(undefined8 *)(pFVar6 + lVar42 + 0x60);
      local_340 = *(float *)(pFVar6 + lVar42 + 0x68);
      fVar27 = 0.0;
      if ((int)uVar36 < (this->CacheFrames).ArrayNum) {
        fVar27 = local_624;
      }
      if ((fVar27 == 0.0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar9 = (code *)swi(3);
        uVar24 = (*pcVar9)();
        return (bool)uVar24;
      }
      pFVar6 = (this->CacheFrames).AllocatorInstance.Data;
      local_468[0] = (code *)0x0;
      local_33c = *(undefined8 *)(pFVar6 + lVar34 + 0x60);
      local_334 = *(float *)(pFVar6 + lVar34 + 0x68);
      local_628[0] = '\x01';
      local_440 = FMemory::Malloc(0x30,8);
      *local_440 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UNiagaraSimCache::ReadFrame'::`21'::<lambda_1>,0,1>::
                    _vftable_;
      local_440[1] = this;
      local_440[2] = local_328;
      local_440[3] = &local_438;
      local_440[4] = &local_600;
      local_440[5] = local_628;
      if (local_440 + 1 != (undefined8 *)0x0) {
        local_468[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`UNiagaraSimCache::ReadFrame'::__l21::<lambda_1>,bool,FNiagaraVariableBase,UNiagaraDataInterface_*>
                       ::Call;
      }
      FNiagaraDataInterfaceUtilities::ForEachDataInterface
                (local_600.SystemInstance,
                 (TFunction<bool___cdecl(FNiagaraVariableBase,UNiagaraDataInterface_*)> *)local_468)
      ;
      bVar23 = false;
      local_2e0 = 0;
      if (local_628[0] == '\0') {
        if (local_2e8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_2e8);
        }
        iVar26 = SUB84(local_328._8_8_,4);
        local_328._8_8_ = local_328._8_8_ & 0xffffffff00000000;
        if (iVar26 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,0,(ForAnyElementType *)local_328,0,(int *)(local_328 + 0xc));
        }
        local_2f8 = -1;
        local_2f4 = 0;
        local_300 = 0;
        if (0x80 < local_2fc) {
          local_2fc = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_328 + 0x10),0);
        }
        if (local_308 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_308);
        }
        SRWLock = &this->RWLock;
        if ((FScriptContainerElement *)local_328._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_328._0_8_);
        }
        goto LAB_1493afdc5;
      }
      if (local_2e8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_2e8);
      }
      iVar26 = SUB84(local_328._8_8_,4);
      local_328._8_8_ = local_328._8_8_ & 0xffffffff00000000;
      if (iVar26 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,0,(ForAnyElementType *)local_328,0,(int *)(local_328 + 0xc));
      }
      local_2f8 = -1;
      local_2f4 = 0;
      local_300 = 0;
      if (0x80 < local_2fc) {
        local_2fc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_328 + 0x10),0);
      }
      if (local_308 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_308);
      }
      if ((FScriptContainerElement *)local_328._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_328._0_8_);
      }
    }
    iVar26 = (param_3->DataInterfaceInstanceDataOffsets).ArrayNum;
    this_00 = (FWeakObjectPtr *)(param_3->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
    pFVar1 = (FWeakObjectPtr *)((longlong)this_00 + (longlong)iVar26 * 0xc);
    while( true ) {
      if ((param_3->DataInterfaceInstanceDataOffsets).ArrayNum != iVar26) {
        local_628[1] = 0;
        `TCheckedPointerIterator<TTuple<TWeakObjectPtr<UNiagaraDataInterface,FWeakObjectPtr>,int>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_628 + 1);
      }
      if (this_00 == pFVar1) break;
      pUVar29 = FWeakObjectPtr::Get(this_00);
      if (pUVar29 != (UObject *)0x0) {
        pUVar30 = Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
        plVar31 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar29,pUVar30);
        if (plVar31 != (longlong *)0x0) {
          uVar36 = this_00[1].ObjectIndex;
          pcVar9 = *(code **)(*plVar31 + 0x38);
          uVar33 = 0;
          if ((int)uVar36 < (param_3->DataInterfaceInstanceData).ArrayNum) {
            uVar33 = ~uVar36 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar9 = (code *)swi(3);
            uVar24 = (*pcVar9)();
            return (bool)uVar24;
          }
          (*pcVar9)(plVar31,(param_3->DataInterfaceInstanceData).AllocatorInstance.Data +
                            (int)uVar36,param_3);
        }
      }
      this_00 = (FWeakObjectPtr *)&this_00[1].ObjectSerialNumber;
    }
    bVar23 = true;
    SRWLock = local_500;
  }
LAB_1493afdc5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_600.SystemSimulation.SharedReferenceCount.ReferenceController);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return bVar23;
}

// ReadIDAttribute @ 1493b0040

void __thiscall
UNiagaraSimCache::ReadIDAttribute
          (UNiagaraSimCache *this,TArray<FNiagaraID,TSizedDefaultAllocator<32>_> *param_1,
          FName param_2,FName param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  FNiagaraSimCacheDataBuffers *pFVar4;
  int iVar5;
  uint uVar6;
  FNiagaraTypeDefinition *pFVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  FNiagaraSimCacheAttributeReaderHelper local_48;
  
  local_48.CacheFrame = (FNiagaraSimCacheFrame *)0x0;
  local_48.DataBuffers = (FNiagaraSimCacheDataBuffers *)0x0;
  local_48.DataBuffersLayout = (FNiagaraSimCacheDataBuffersLayout *)0x0;
  local_48.Variable = (FNiagaraSimCacheVariable *)0x0;
  FNiagaraSimCacheAttributeReaderHelper::Initialize(&local_48,this,param_3,param_2,param_4);
  bVar11 = local_48.Variable == (FNiagaraSimCacheVariable *)0x0;
  if ((((local_48.Variable != (FNiagaraSimCacheVariable *)0x0) &&
       (pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                           (&((local_48.Variable)->Variable).TypeDefHandle),
       (TObjectPtr<UObject>_u_0)(pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr ==
       FNiagaraTypeDefinition::IDDef.ClassStructOrEnum.field0_0x0)) &&
      (pFVar7->UnderlyingType == FNiagaraTypeDefinition::IDDef.UnderlyingType)) &&
     (pFVar7->Flags == FNiagaraTypeDefinition::IDDef.Flags)) {
    if ((bVar11) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                            ,0x8b,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,(local_48.DataBuffers)->NumInstances,&param_1->AllocatorInstance,
                       &param_1->ArrayNum,&param_1->ArrayMax);
    iVar9 = 0;
    lVar10 = (longlong)iVar5 * 8;
    while( true ) {
      if ((local_48.Variable == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0x8b,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((int)(local_48.DataBuffers)->NumInstances <= iVar9) break;
      if (((local_48.Variable)->Int32Count != 2) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Variable->Int32Offset != INDEX_NONE && Variable->Int32Count == 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xbd,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((local_48.Variable == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xa1,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = local_48.DataBuffers;
      uVar8 = (((local_48.Variable)->Int32Offset + 1) * (local_48.DataBuffers)->NumInstances + iVar9
              ) * 4;
      uVar6 = 0;
      if ((int)uVar8 < ((local_48.DataBuffers)->Int32Data).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(undefined4 *)((pFVar4->Int32Data).DataPtr + (int)uVar8);
      if ((local_48.Variable == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xa1,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = local_48.DataBuffers;
      uVar8 = ((uint)(local_48.Variable)->Int32Offset * (local_48.DataBuffers)->NumInstances + iVar9
              ) * 4;
      uVar6 = 0;
      if ((int)uVar8 < ((local_48.DataBuffers)->Int32Data).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar2 = *(undefined4 *)((pFVar4->Int32Data).DataPtr + (int)uVar8);
      uVar6 = 0;
      if (iVar9 + iVar5 < param_1->ArrayNum) {
        uVar6 = (uint)~(iVar9 + iVar5) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = iVar9 + 1;
      *(ulonglong *)((param_1->AllocatorInstance).Data + lVar10) = CONCAT44(uVar1,uVar2);
      lVar10 = lVar10 + 8;
    }
  }
  return;
}

// ReadIntAttribute @ 1493b05b0

void __thiscall
UNiagaraSimCache::ReadIntAttribute
          (UNiagaraSimCache *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          FName param_3,int param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  FNiagaraSimCacheDataBuffers *pFVar3;
  uint uVar4;
  uint uVar5;
  FNiagaraTypeDefinition *pFVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  FNiagaraSimCacheAttributeReaderHelper local_48;
  
  local_48.CacheFrame = (FNiagaraSimCacheFrame *)0x0;
  local_48.DataBuffers = (FNiagaraSimCacheDataBuffers *)0x0;
  local_48.DataBuffersLayout = (FNiagaraSimCacheDataBuffersLayout *)0x0;
  local_48.Variable = (FNiagaraSimCacheVariable *)0x0;
  FNiagaraSimCacheAttributeReaderHelper::Initialize(&local_48,this,param_3,param_2,param_4);
  bVar10 = local_48.Variable == (FNiagaraSimCacheVariable *)0x0;
  if ((((local_48.Variable != (FNiagaraSimCacheVariable *)0x0) &&
       (pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                           (&((local_48.Variable)->Variable).TypeDefHandle),
       (TObjectPtr<UObject>_u_0)(pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr ==
       FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0)) &&
      (pFVar6->UnderlyingType == FNiagaraTypeDefinition::IntDef.UnderlyingType)) &&
     (pFVar6->Flags == FNiagaraTypeDefinition::IntDef.Flags)) {
    if ((bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                            ,0x8b,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(local_48.DataBuffers)->NumInstances,&param_1->AllocatorInstance,
                       &param_1->ArrayNum,&param_1->ArrayMax);
    lVar9 = (longlong)(int)uVar4 * 4;
    uVar8 = uVar4;
    while( true ) {
      if ((local_48.Variable == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0x8b,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((int)(local_48.DataBuffers)->NumInstances <= (int)(uVar8 - uVar4)) break;
      if ((local_48.Variable == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xa1,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3 = local_48.DataBuffers;
      uVar7 = ((uint)(local_48.Variable)->Int32Offset * (local_48.DataBuffers)->NumInstances +
              (uVar8 - uVar4)) * 4;
      uVar5 = 0;
      if ((int)uVar7 < ((local_48.DataBuffers)->Int32Data).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(undefined4 *)((pFVar3->Int32Data).DataPtr + (int)uVar7);
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = uVar8 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + lVar9) = uVar1;
      lVar9 = lVar9 + 4;
    }
  }
  return;
}

// ReadPositionAttribute @ 1493b0870

void __thiscall
UNiagaraSimCache::ReadPositionAttribute
          (UNiagaraSimCache *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          FName param_3,bool param_4,int param_5)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  FNiagaraSimCacheDataBuffers *pFVar10;
  FNiagaraSimCacheVariable *pFVar11;
  uint uVar12;
  FNiagaraTypeDefinition *pFVar13;
  float *pfVar14;
  longlong lVar15;
  int iVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  FNiagaraSimCacheAttributeReaderHelper local_168;
  int local_148;
  int *local_140;
  double local_138 [2];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8 [2];
  double local_e8 [2];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined1 local_a8 [16];
  double local_98;
  
  local_168.CacheFrame = (FNiagaraSimCacheFrame *)0x0;
  local_168.DataBuffers = (FNiagaraSimCacheDataBuffers *)0x0;
  local_168.DataBuffersLayout = (FNiagaraSimCacheDataBuffersLayout *)0x0;
  local_168.Variable = (FNiagaraSimCacheVariable *)0x0;
  FNiagaraSimCacheAttributeReaderHelper::Initialize(&local_168,this,param_3,param_2,param_5);
  pFVar11 = local_168.Variable;
  bVar17 = local_168.Variable == (FNiagaraSimCacheVariable *)0x0;
  if ((((local_168.Variable != (FNiagaraSimCacheVariable *)0x0) &&
       (pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                            (&((local_168.Variable)->Variable).TypeDefHandle),
       (TObjectPtr<UObject>_u_0)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr ==
       FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0)) &&
      (pFVar13->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
     (pFVar13->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
    if ((param_4) && ((local_168.DataBuffersLayout)->bLocalSpace != false)) {
      local_138 = *&((local_168.CacheFrame)->LocalToWorld).Rotation.XY.m128d_f64;
      local_108 = ((local_168.CacheFrame)->LocalToWorld).Translation.ZW.m128d_f64[0];
      dStack_100 = ((local_168.CacheFrame)->LocalToWorld).Translation.ZW.m128d_f64[1];
      uVar36 = *(undefined4 *)((local_168.CacheFrame)->LocalToWorld).Rotation.ZW.m128d_f64;
      uVar37 = *(undefined4 *)
                ((longlong)((local_168.CacheFrame)->LocalToWorld).Rotation.ZW.m128d_f64 + 4);
      uVar38 = *(undefined4 *)(((local_168.CacheFrame)->LocalToWorld).Rotation.ZW.m128d_f64 + 1);
      uVar39 = *(undefined4 *)
                ((longlong)((local_168.CacheFrame)->LocalToWorld).Rotation.ZW.m128d_f64 + 0xc);
      local_118 = ((local_168.CacheFrame)->LocalToWorld).Translation.XY.m128d_f64[0];
      dStack_110 = ((local_168.CacheFrame)->LocalToWorld).Translation.XY.m128d_f64[1];
      local_e8 = *&((local_168.CacheFrame)->LocalToWorld).Scale3D.ZW.m128d_f64;
      local_f8 = *&((local_168.CacheFrame)->LocalToWorld).Scale3D.XY.m128d_f64;
    }
    else {
      uVar36 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar37 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar38 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar39 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      local_138[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      local_138[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      local_e8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      local_e8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      local_f8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      local_f8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      local_118 = (double)((local_168.CacheFrame)->LWCTile).field0_0x0._s_0.X *
                  __real_4140000000000000;
      local_108 = (double)((local_168.CacheFrame)->LWCTile).field0_0x0._s_0.Z *
                  __real_4140000000000000;
      dStack_110 = (double)((local_168.CacheFrame)->LWCTile).field0_0x0._s_0.Y *
                   __real_4140000000000000;
      dStack_100 = 0.0;
      local_d8 = local_118;
      dStack_d0 = dStack_110;
      local_c8 = local_108;
    }
    local_128 = uVar36;
    uStack_124 = uVar37;
    uStack_120 = uVar38;
    uStack_11c = uVar39;
    if ((bVar17) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                            ,0x8b,L""), bVar17)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar10 = local_168.DataBuffers;
    local_140 = &param_1->ArrayNum;
    local_148 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,(local_168.DataBuffers)->NumInstances,&param_1->AllocatorInstance,
                           local_140,&param_1->ArrayMax);
    iVar16 = 0;
    lVar15 = (longlong)local_148 * 0x18;
    while( true ) {
      if ((pFVar11 == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0x8b,L""), bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((int)pFVar10->NumInstances <= iVar16) break;
      if ((pFVar11->FloatCount != 3) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Variable->FloatOffset != INDEX_NONE && Variable->FloatCount == 3",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xc9,L""), bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((pFVar11 == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pfVar14 = (float *)TArrayView<unsigned_char,int>::operator[]
                                   (&pFVar10->FloatData,
                                    ((pFVar11->FloatOffset + 2) * pFVar10->NumInstances + iVar16) *
                                    4);
      fVar1 = *pfVar14;
      pfVar14 = (float *)TArrayView<unsigned_char,int>::operator[]
                                   (&pFVar10->FloatData,
                                    ((pFVar11->FloatOffset + 1) * pFVar10->NumInstances + iVar16) *
                                    4);
      fVar2 = *pfVar14;
      pfVar14 = (float *)TArrayView<unsigned_char,int>::operator[]
                                   (&pFVar10->FloatData,
                                    ((uint)pFVar11->FloatOffset * pFVar10->NumInstances + iVar16) *
                                    4);
      dStack_b8 = (double)fVar2;
      local_c0 = (double)*pfVar14;
      local_b0 = (double)fVar1;
      dVar6 = local_b0 * local_e8[0];
      dVar7 = local_e8[1] * 0.0;
      dVar5 = local_f8[0] * local_c0;
      dVar31 = local_f8[1] * dStack_b8;
      uVar35 = (undefined4)((ulonglong)dVar31 >> 0x20);
      auVar32._8_4_ = SUB84(dVar31,0);
      auVar32._0_8_ = dVar5;
      auVar32._12_4_ = uVar35;
      dVar29 = local_138[1];
      auVar22._8_4_ = SUB84(dVar31,0);
      auVar22._0_8_ = dVar5;
      auVar22._12_4_ = uVar35;
      auVar23._8_4_ = SUB84(dVar7,0);
      auVar23._0_8_ = dVar6;
      auVar23._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar23 = blendpd(auVar22,auVar23,2);
      auVar30._4_4_ = uVar37;
      auVar30._0_4_ = uVar36;
      auVar30._8_4_ = uVar38;
      auVar30._12_4_ = uVar39;
      auVar30 = blendpd((undefined1  [16])local_138,auVar30,2);
      auVar18._8_4_ = uVar36;
      auVar18._0_8_ = dVar29;
      auVar18._12_4_ = uVar37;
      auVar33._0_8_ = auVar32._8_8_ * local_138[0] - dVar29 * dVar5;
      auVar33._8_8_ = dVar6 * dVar29 - auVar18._8_8_ * dVar31;
      auVar24._0_8_ = auVar23._0_8_ * (double)CONCAT44(uVar37,uVar36) - auVar30._0_8_ * dVar6;
      auVar24._8_8_ = auVar23._8_8_ * (double)CONCAT44(uVar39,uVar38) - auVar30._8_8_ * dVar7;
      dVar7 = auVar33._8_8_ + auVar33._8_8_;
      dVar9 = auVar24._0_8_ + auVar24._0_8_;
      uVar35 = SUB84(dVar9,0);
      uVar40 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar23 = blendpd(auVar33,auVar24,2);
      auVar34._0_8_ = auVar23._0_8_ + auVar23._0_8_;
      auVar34._8_8_ = auVar23._8_8_ + auVar23._8_8_;
      auVar27._8_4_ = uVar35;
      auVar27._0_8_ = dVar7;
      auVar27._12_4_ = uVar40;
      auVar19._8_4_ = uVar35;
      auVar19._0_8_ = dVar7;
      auVar19._12_4_ = uVar40;
      auVar25._8_4_ = uVar35;
      auVar25._0_8_ = dVar7;
      auVar25._12_4_ = uVar40;
      auVar23 = blendpd(auVar25,auVar34,2);
      auVar28._0_8_ = auVar27._8_8_ * local_138[0] - dVar7 * dVar29;
      auVar28._8_8_ = auVar34._0_8_ * dVar29 - auVar19._8_8_ * (double)CONCAT44(uVar37,uVar36);
      auVar20._8_4_ = SUB84(auVar34._8_8_,0);
      auVar20._0_8_ = auVar34._0_8_;
      auVar20._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
      auVar26._0_8_ =
           auVar23._0_8_ * (double)CONCAT44(uVar37,uVar36) - auVar34._0_8_ * auVar30._0_8_;
      auVar26._8_8_ =
           auVar23._8_8_ * (double)CONCAT44(uVar39,uVar38) - auVar20._8_8_ * auVar30._8_8_;
      auVar21._8_4_ = SUB84(auVar28._8_8_,0);
      auVar21._0_8_ = auVar28._0_8_;
      auVar21._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
      dVar5 = dVar7 * (double)CONCAT44(uVar39,uVar38) + dVar5 + auVar21._8_8_ + local_118;
      dVar31 = dVar9 * (double)CONCAT44(uVar39,uVar38) + dVar31 + auVar26._0_8_ + dStack_110;
      uVar35 = SUB84(dVar31,0);
      uVar40 = (undefined4)((ulonglong)dVar31 >> 0x20);
      local_a8._8_4_ = uVar35;
      local_a8._0_8_ = dVar5;
      local_a8._12_4_ = uVar40;
      auVar23 = blendpd(auVar28,auVar26,2);
      uVar12 = 0;
      if (local_148 + iVar16 < *local_140) {
        uVar12 = (uint)~(local_148 + iVar16) >> 0x1f;
      }
      dVar31 = auVar34._0_8_ * (double)CONCAT44(uVar39,uVar38) + dVar6 + auVar23._0_8_ + local_108;
      local_98 = dVar31;
      if ((uVar12 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar16 = iVar16 + 1;
      pFVar3 = (param_1->AllocatorInstance).Data;
      auVar8._8_4_ = uVar35;
      auVar8._0_8_ = dVar5;
      auVar8._12_4_ = uVar40;
      *(undefined1 (*) [16])(pFVar3 + lVar15) = auVar8;
      *(double *)(pFVar3 + lVar15 + 0x10) = dVar31;
      lVar15 = lVar15 + 0x18;
    }
  }
  return;
}

// ReadPositionAttributeWithRebase @ 1493b0dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraSimCache::ReadPositionAttributeWithRebase
          (UNiagaraSimCache *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TTransform<double> *param_2,FName param_3,FName param_4,int param_5)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  FNiagaraSimCacheDataBuffers *pFVar12;
  FNiagaraTypeDefinition *pFVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined1 auStackY_238 [32];
  FNiagaraSimCacheAttributeReaderHelper local_208;
  int local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_208.CacheFrame = (FNiagaraSimCacheFrame *)0x0;
  local_208.DataBuffers = (FNiagaraSimCacheDataBuffers *)0x0;
  local_208.DataBuffersLayout = (FNiagaraSimCacheDataBuffersLayout *)0x0;
  local_208.Variable = (FNiagaraSimCacheVariable *)0x0;
  FNiagaraSimCacheAttributeReaderHelper::Initialize(&local_208,this,param_4,param_3,param_5);
  uVar41 = SUB84(this,0);
  bVar18 = local_208.Variable == (FNiagaraSimCacheVariable *)0x0;
  if ((((local_208.Variable != (FNiagaraSimCacheVariable *)0x0) &&
       (pFVar13 = FNiagaraTypeDefinitionHandle::Resolve
                            (&((local_208.Variable)->Variable).TypeDefHandle),
       (TObjectPtr<UObject>_u_0)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr ==
       FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0)) &&
      (pFVar13->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
     (pFVar13->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
    if ((local_208.DataBuffersLayout)->bLocalSpace == false) {
      auVar28._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)((longlong)
                                      ((local_208.CacheFrame)->LocalToWorld).Scale3D.ZW.m128d_f64 +
                                     4),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)((local_208.CacheFrame)->LocalToWorld).Scale3D.ZW.m128d_f64);
      auVar28._8_4_ =
           _UNK_15061cc88 &
           *(uint *)(((local_208.CacheFrame)->LocalToWorld).Scale3D.ZW.m128d_f64 + 1);
      auVar28._12_4_ =
           _UNK_15061cc8c &
           *(uint *)((longlong)((local_208.CacheFrame)->LocalToWorld).Scale3D.ZW.m128d_f64 + 0xc);
      auVar32._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)((longlong)
                                      ((local_208.CacheFrame)->LocalToWorld).Scale3D.XY.m128d_f64 +
                                     4),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)((local_208.CacheFrame)->LocalToWorld).Scale3D.XY.m128d_f64);
      auVar32._8_4_ =
           _UNK_15061cc88 &
           *(uint *)(((local_208.CacheFrame)->LocalToWorld).Scale3D.XY.m128d_f64 + 1);
      auVar32._12_4_ =
           _UNK_15061cc8c &
           *(uint *)((longlong)((local_208.CacheFrame)->LocalToWorld).Scale3D.XY.m128d_f64 + 0xc);
      auVar34._8_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar28._8_8_);
      auVar34._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar28._0_8_);
      uVar14 = movmskpd(uVar41,auVar34);
      auVar24._8_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar32._8_8_);
      auVar24._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar32._0_8_);
      iVar16 = movmskpd((int)local_208.DataBuffersLayout,auVar24);
      if ((uVar14 & 0x3fffffff) == 0 && iVar16 == 0) {
        local_148.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_148.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_148.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_148.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_148.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_148.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(&(local_208.CacheFrame)->LocalToWorld,&local_148);
      }
      local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_1a8,param_2,&local_148);
      uVar41 = local_1a8.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar42 = local_1a8.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar43 = local_1a8.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar44 = local_1a8.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar45 = local_1a8.Rotation.XY.m128d_f64[0]._0_4_;
      uVar46 = local_1a8.Rotation.XY.m128d_f64[0]._4_4_;
      uVar47 = local_1a8.Rotation.XY.m128d_f64[1]._0_4_;
      uVar48 = local_1a8.Rotation.XY.m128d_f64[1]._4_4_;
      uVar49 = local_1a8.Translation.XY.m128d_f64[0]._0_4_;
      uVar50 = local_1a8.Translation.XY.m128d_f64[0]._4_4_;
      uVar51 = local_1a8.Translation.XY.m128d_f64[1]._0_4_;
      uVar52 = local_1a8.Translation.XY.m128d_f64[1]._4_4_;
      uVar53 = local_1a8.Translation.ZW.m128d_f64[0]._0_4_;
      uVar54 = local_1a8.Translation.ZW.m128d_f64[0]._4_4_;
      uVar55 = local_1a8.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar56 = local_1a8.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar57 = local_1a8.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar58 = local_1a8.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar59 = local_1a8.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar60 = local_1a8.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar61 = local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar62 = local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_;
    }
    else {
      uVar41 = *(undefined4 *)(param_2->Rotation).ZW.m128d_f64;
      uVar42 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 4);
      uVar43 = *(undefined4 *)((param_2->Rotation).ZW.m128d_f64 + 1);
      uVar44 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 0xc);
      uVar45 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
      uVar46 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
      uVar47 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
      uVar48 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
      uVar49 = *(undefined4 *)(param_2->Translation).XY.m128d_f64;
      uVar50 = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 4);
      uVar51 = *(undefined4 *)((param_2->Translation).XY.m128d_f64 + 1);
      uVar52 = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 0xc);
      uVar53 = *(undefined4 *)(param_2->Translation).ZW.m128d_f64;
      uVar54 = *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 4);
      uVar55 = *(undefined4 *)(param_2->Scale3D).XY.m128d_f64;
      uVar56 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4);
      uVar57 = *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1);
      uVar58 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
      uVar59 = *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64;
      uVar60 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4);
      uVar61 = *(undefined4 *)((param_2->Scale3D).ZW.m128d_f64 + 1);
      uVar62 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc);
    }
    if ((bVar18) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                            ,0x8b,L""), bVar18)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_1e8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,(local_208.DataBuffers)->NumInstances,&param_1->AllocatorInstance,
                           &param_1->ArrayNum,&param_1->ArrayMax);
    iVar16 = 0;
    lVar17 = (longlong)local_1e8 * 0x18;
    while( true ) {
      if ((local_208.Variable == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0x8b,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((int)(local_208.DataBuffers)->NumInstances <= iVar16) break;
      if (((local_208.Variable)->FloatCount != 3) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Variable->FloatOffset != INDEX_NONE && Variable->FloatCount == 3",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xc9,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((local_208.Variable == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = local_208.DataBuffers;
      uVar15 = (((local_208.Variable)->FloatOffset + 2) * (local_208.DataBuffers)->NumInstances +
               iVar16) * 4;
      uVar14 = 0;
      if ((int)uVar15 < ((local_208.DataBuffers)->FloatData).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar1 = *(float *)((pFVar12->FloatData).DataPtr + (int)uVar15);
      if ((local_208.Variable == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = local_208.DataBuffers;
      uVar15 = (((local_208.Variable)->FloatOffset + 1) * (local_208.DataBuffers)->NumInstances +
               iVar16) * 4;
      uVar14 = 0;
      if ((int)uVar15 < ((local_208.DataBuffers)->FloatData).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar2 = *(float *)((pFVar12->FloatData).DataPtr + (int)uVar15);
      if ((local_208.Variable == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = local_208.DataBuffers;
      uVar15 = ((uint)(local_208.Variable)->FloatOffset * (local_208.DataBuffers)->NumInstances +
               iVar16) * 4;
      uVar14 = 0;
      if ((int)uVar15 < ((local_208.DataBuffers)->FloatData).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dStack_1d8 = (double)fVar2;
      local_1e0 = (double)*(float *)((pFVar12->FloatData).DataPtr + (int)uVar15);
      uVar14 = 0;
      if (local_1e8 + iVar16 < param_1->ArrayNum) {
        uVar14 = (uint)~(local_1e8 + iVar16) >> 0x1f;
      }
      local_1d0 = (double)fVar1;
      dVar31 = (double)CONCAT44(uVar48,uVar47);
      auVar33._4_4_ = uVar46;
      auVar33._0_4_ = uVar45;
      auVar33._8_4_ = uVar47;
      auVar33._12_4_ = uVar48;
      dVar5 = (double)CONCAT44(uVar56,uVar55) * local_1e0;
      dVar35 = (double)CONCAT44(uVar58,uVar57) * dStack_1d8;
      uVar39 = (undefined4)((ulonglong)dVar35 >> 0x20);
      auVar36._8_4_ = SUB84(dVar35,0);
      auVar36._0_8_ = dVar5;
      auVar36._12_4_ = uVar39;
      auVar19._8_4_ = uVar41;
      auVar19._0_8_ = dVar31;
      auVar19._12_4_ = uVar42;
      auVar23._8_4_ = SUB84(dVar35,0);
      auVar23._0_8_ = dVar5;
      auVar23._12_4_ = uVar39;
      dVar7 = local_1d0 * (double)CONCAT44(uVar60,uVar59);
      dVar8 = (double)CONCAT44(uVar62,uVar61) * 0.0;
      auVar11._4_4_ = uVar42;
      auVar11._0_4_ = uVar41;
      auVar11._8_4_ = uVar43;
      auVar11._12_4_ = uVar44;
      auVar34 = blendpd(auVar33,auVar11,2);
      auVar6._8_4_ = SUB84(dVar8,0);
      auVar6._0_8_ = dVar7;
      auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar24 = blendpd(auVar23,auVar6,2);
      auVar37._0_8_ = auVar36._8_8_ * (double)CONCAT44(uVar46,uVar45) - dVar31 * dVar5;
      auVar37._8_8_ = dVar7 * (double)CONCAT44(uVar48,uVar47) - auVar19._8_8_ * dVar35;
      auVar25._0_8_ = auVar24._0_8_ * (double)CONCAT44(uVar42,uVar41) - auVar34._0_8_ * dVar7;
      auVar25._8_8_ = auVar24._8_8_ * (double)CONCAT44(uVar44,uVar43) - auVar34._8_8_ * dVar8;
      auVar24 = blendpd(auVar37,auVar25,2);
      dVar8 = auVar37._8_8_ + auVar37._8_8_;
      dVar10 = auVar25._0_8_ + auVar25._0_8_;
      uVar39 = SUB84(dVar10,0);
      uVar40 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar38._0_8_ = auVar24._0_8_ + auVar24._0_8_;
      auVar38._8_8_ = auVar24._8_8_ + auVar24._8_8_;
      auVar29._8_4_ = uVar39;
      auVar29._0_8_ = dVar8;
      auVar29._12_4_ = uVar40;
      auVar20._8_4_ = uVar39;
      auVar20._0_8_ = dVar8;
      auVar20._12_4_ = uVar40;
      auVar26._8_4_ = uVar39;
      auVar26._0_8_ = dVar8;
      auVar26._12_4_ = uVar40;
      auVar24 = blendpd(auVar26,auVar38,2);
      auVar30._0_8_ = auVar29._8_8_ * (double)CONCAT44(uVar46,uVar45) - dVar8 * dVar31;
      auVar30._8_8_ =
           auVar38._0_8_ * (double)CONCAT44(uVar48,uVar47) -
           auVar20._8_8_ * (double)CONCAT44(uVar42,uVar41);
      auVar21._8_4_ = SUB84(auVar38._8_8_,0);
      auVar21._0_8_ = auVar38._0_8_;
      auVar21._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
      auVar27._0_8_ =
           auVar24._0_8_ * (double)CONCAT44(uVar42,uVar41) - auVar38._0_8_ * auVar34._0_8_;
      auVar27._8_8_ =
           auVar24._8_8_ * (double)CONCAT44(uVar44,uVar43) - auVar21._8_8_ * auVar34._8_8_;
      auVar22._8_4_ = SUB84(auVar30._8_8_,0);
      auVar22._0_8_ = auVar30._0_8_;
      auVar22._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
      auVar24 = blendpd(auVar30,auVar27,2);
      dVar5 = dVar8 * (double)CONCAT44(uVar44,uVar43) + dVar5 + auVar22._8_8_ +
              (double)CONCAT44(uVar50,uVar49);
      dVar35 = dVar10 * (double)CONCAT44(uVar44,uVar43) + dVar35 + auVar27._0_8_ +
               (double)CONCAT44(uVar52,uVar51);
      uVar39 = SUB84(dVar35,0);
      uVar40 = (undefined4)((ulonglong)dVar35 >> 0x20);
      dVar35 = auVar38._0_8_ * (double)CONCAT44(uVar44,uVar43) + dVar7 + auVar24._0_8_ +
               (double)CONCAT44(uVar54,uVar53);
      local_1c8._8_4_ = uVar39;
      local_1c8._0_8_ = dVar5;
      local_1c8._12_4_ = uVar40;
      local_1b8 = dVar35;
      if ((uVar14 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      iVar16 = iVar16 + 1;
      auVar9._8_4_ = uVar39;
      auVar9._0_8_ = dVar5;
      auVar9._12_4_ = uVar40;
      *(undefined1 (*) [16])(pFVar3 + lVar17) = auVar9;
      *(double *)(pFVar3 + lVar17 + 0x10) = dVar35;
      lVar17 = lVar17 + 0x18;
    }
  }
  return;
}

// ReadQuatAttribute @ 1493b14e0

void __thiscall
UNiagaraSimCache::ReadQuatAttribute
          (UNiagaraSimCache *this,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          FName param_3,bool param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  FNiagaraSimCacheDataBuffers *pFVar16;
  int iVar17;
  uint uVar18;
  FNiagaraTypeDefinition *pFVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  FNiagaraSimCacheAttributeReaderHelper local_c8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  
  local_c8.CacheFrame = (FNiagaraSimCacheFrame *)0x0;
  local_c8.DataBuffers = (FNiagaraSimCacheDataBuffers *)0x0;
  local_c8.DataBuffersLayout = (FNiagaraSimCacheDataBuffersLayout *)0x0;
  local_c8.Variable = (FNiagaraSimCacheVariable *)0x0;
  FNiagaraSimCacheAttributeReaderHelper::Initialize(&local_c8,this,param_3,param_2,param_5);
  bVar23 = local_c8.Variable == (FNiagaraSimCacheVariable *)0x0;
  if ((((local_c8.Variable != (FNiagaraSimCacheVariable *)0x0) &&
       (pFVar19 = FNiagaraTypeDefinitionHandle::Resolve
                            (&((local_c8.Variable)->Variable).TypeDefHandle),
       (TObjectPtr<UObject>_u_0)(pFVar19->ClassStructOrEnum).field0_0x0.DebugPtr ==
       FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0)) &&
      (pFVar19->UnderlyingType == FNiagaraTypeDefinition::QuatDef.UnderlyingType)) &&
     (pFVar19->Flags == FNiagaraTypeDefinition::QuatDef.Flags)) {
    if ((bVar23) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                            ,0x8b,L""), bVar23)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,0x10,(local_c8.DataBuffers)->NumInstances,&param_1->AllocatorInstance,
                        &param_1->ArrayNum,&param_1->ArrayMax);
    if ((param_4) && ((local_c8.DataBuffersLayout)->bLocalSpace != false)) {
      iVar20 = 0;
      lVar22 = (longlong)iVar17 << 5;
      while( true ) {
        if ((local_c8.Variable == (FNiagaraSimCacheVariable *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                                ,0x8b,L""), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((int)(local_c8.DataBuffers)->NumInstances <= iVar20) break;
        if (((local_c8.Variable)->FloatCount != 4) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Variable->FloatOffset != INDEX_NONE && Variable->FloatCount == 4",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                                ,0xd5,L""), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((local_c8.Variable == (FNiagaraSimCacheVariable *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                                ,0xac,L""), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar16 = local_c8.DataBuffers;
        uVar21 = (((local_c8.Variable)->FloatOffset + 3) * (local_c8.DataBuffers)->NumInstances +
                 iVar20) * 4;
        uVar18 = 0;
        if ((int)uVar21 < ((local_c8.DataBuffers)->FloatData).ArrayNum) {
          uVar18 = ~uVar21 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar2 = *(float *)((pFVar16->FloatData).DataPtr + (int)uVar21);
        if ((local_c8.Variable == (FNiagaraSimCacheVariable *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                                ,0xac,L""), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar16 = local_c8.DataBuffers;
        uVar21 = (((local_c8.Variable)->FloatOffset + 2) * (local_c8.DataBuffers)->NumInstances +
                 iVar20) * 4;
        uVar18 = 0;
        if ((int)uVar21 < ((local_c8.DataBuffers)->FloatData).ArrayNum) {
          uVar18 = ~uVar21 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar3 = *(float *)((pFVar16->FloatData).DataPtr + (int)uVar21);
        if ((local_c8.Variable == (FNiagaraSimCacheVariable *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                                ,0xac,L""), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar16 = local_c8.DataBuffers;
        uVar21 = (((local_c8.Variable)->FloatOffset + 1) * (local_c8.DataBuffers)->NumInstances +
                 iVar20) * 4;
        uVar18 = 0;
        if ((int)uVar21 < ((local_c8.DataBuffers)->FloatData).ArrayNum) {
          uVar18 = ~uVar21 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar4 = *(float *)((pFVar16->FloatData).DataPtr + (int)uVar21);
        if ((local_c8.Variable == (FNiagaraSimCacheVariable *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                                ,0xac,L""), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar16 = local_c8.DataBuffers;
        uVar21 = ((uint)(local_c8.Variable)->FloatOffset * (local_c8.DataBuffers)->NumInstances +
                 iVar20) * 4;
        uVar18 = 0;
        if ((int)uVar21 < ((local_c8.DataBuffers)->FloatData).ArrayNum) {
          uVar18 = ~uVar21 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        dVar26 = (double)fVar4;
        dVar27 = (double)*(float *)((pFVar16->FloatData).DataPtr + (int)uVar21);
        dVar9 = ((local_c8.CacheFrame)->LocalToWorld).Rotation.ZW.m128d_f64[0];
        dVar13 = ((local_c8.CacheFrame)->LocalToWorld).Rotation.ZW.m128d_f64[1];
        dVar14 = ((local_c8.CacheFrame)->LocalToWorld).Rotation.XY.m128d_f64[0];
        dVar15 = ((local_c8.CacheFrame)->LocalToWorld).Rotation.XY.m128d_f64[1];
        dVar25 = (double)fVar2;
        uVar18 = 0;
        if (iVar17 + iVar20 < param_1->ArrayNum) {
          uVar18 = (uint)~(iVar17 + iVar20) >> 0x1f;
        }
        dVar7 = (double)fVar3;
        auVar24._8_4_ = SUB84(dVar7,0);
        auVar24._0_8_ = dVar7;
        auVar24._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        dVar11 = dVar27 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar14 * dVar25 +
                 dVar9 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar7 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar12 = dVar27 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar15 * dVar25 +
                 dVar13 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar24._8_8_ * dVar14 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar30 = SUB84(dVar12,0);
        uVar31 = (undefined4)((ulonglong)dVar12 >> 0x20);
        dVar12 = dVar27 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dVar9 * dVar25 +
                 dVar14 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar7 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar9 = dVar27 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                dVar13 * dVar25 +
                dVar15 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                dVar7 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar28 = SUB84(dVar9,0);
        uVar29 = (undefined4)((ulonglong)dVar9 >> 0x20);
        local_a8._8_4_ = uVar30;
        local_a8._0_8_ = dVar11;
        local_a8._12_4_ = uVar31;
        local_98._8_4_ = uVar28;
        local_98._0_8_ = dVar12;
        local_98._12_4_ = uVar29;
        if ((uVar18 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (param_1->AllocatorInstance).Data;
        iVar20 = iVar20 + 1;
        auVar10._8_4_ = uVar30;
        auVar10._0_8_ = dVar11;
        auVar10._12_4_ = uVar31;
        *(undefined1 (*) [16])(pFVar5 + lVar22) = auVar10;
        auVar8._8_4_ = uVar28;
        auVar8._0_8_ = dVar12;
        auVar8._12_4_ = uVar29;
        *(undefined1 (*) [16])(pFVar5 + lVar22 + 0x10) = auVar8;
        lVar22 = lVar22 + 0x20;
      }
    }
    else {
      iVar20 = 0;
      lVar22 = (longlong)iVar17 << 5;
      while( true ) {
        if ((local_c8.Variable == (FNiagaraSimCacheVariable *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                                ,0x8b,L""), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((int)(local_c8.DataBuffers)->NumInstances <= iVar20) break;
        if (((local_c8.Variable)->FloatCount != 4) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Variable->FloatOffset != INDEX_NONE && Variable->FloatCount == 4",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                                ,0xd5,L""), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((local_c8.Variable == (FNiagaraSimCacheVariable *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                                ,0xac,L""), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar16 = local_c8.DataBuffers;
        uVar21 = (((local_c8.Variable)->FloatOffset + 3) * (local_c8.DataBuffers)->NumInstances +
                 iVar20) * 4;
        uVar18 = 0;
        if ((int)uVar21 < ((local_c8.DataBuffers)->FloatData).ArrayNum) {
          uVar18 = ~uVar21 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar2 = *(float *)((pFVar16->FloatData).DataPtr + (int)uVar21);
        if ((local_c8.Variable == (FNiagaraSimCacheVariable *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                                ,0xac,L""), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar16 = local_c8.DataBuffers;
        uVar21 = (((local_c8.Variable)->FloatOffset + 2) * (local_c8.DataBuffers)->NumInstances +
                 iVar20) * 4;
        uVar18 = 0;
        if ((int)uVar21 < ((local_c8.DataBuffers)->FloatData).ArrayNum) {
          uVar18 = ~uVar21 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar3 = *(float *)((pFVar16->FloatData).DataPtr + (int)uVar21);
        if ((local_c8.Variable == (FNiagaraSimCacheVariable *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                                ,0xac,L""), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar16 = local_c8.DataBuffers;
        uVar21 = (((local_c8.Variable)->FloatOffset + 1) * (local_c8.DataBuffers)->NumInstances +
                 iVar20) * 4;
        uVar18 = 0;
        if ((int)uVar21 < ((local_c8.DataBuffers)->FloatData).ArrayNum) {
          uVar18 = ~uVar21 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar4 = *(float *)((pFVar16->FloatData).DataPtr + (int)uVar21);
        if ((local_c8.Variable == (FNiagaraSimCacheVariable *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                                ,0xac,L""), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar16 = local_c8.DataBuffers;
        uVar21 = ((uint)(local_c8.Variable)->FloatOffset * (local_c8.DataBuffers)->NumInstances +
                 iVar20) * 4;
        uVar18 = 0;
        if ((int)uVar21 < ((local_c8.DataBuffers)->FloatData).ArrayNum) {
          uVar18 = ~uVar21 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar1 = *(float *)((pFVar16->FloatData).DataPtr + (int)uVar21);
        uVar18 = 0;
        if (iVar17 + iVar20 < param_1->ArrayNum) {
          uVar18 = (uint)~(iVar17 + iVar20) >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar20 = iVar20 + 1;
        pFVar5 = (param_1->AllocatorInstance).Data;
        *(double *)(pFVar5 + lVar22) = (double)fVar1;
        *(double *)(pFVar5 + lVar22 + 8) = (double)fVar4;
        *(double *)(pFVar5 + lVar22 + 0x10) = (double)fVar3;
        *(double *)(pFVar5 + lVar22 + 0x18) = (double)fVar2;
        lVar22 = lVar22 + 0x20;
      }
    }
  }
  return;
}

// ReadQuatAttributeWithRebase @ 1493b1e70

void __thiscall
UNiagaraSimCache::ReadQuatAttributeWithRebase
          (UNiagaraSimCache *this,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_1,
          TQuat<double> *param_2,FName param_3,FName param_4,int param_5)

{
  FName *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  FNiagaraSimCacheDataBuffers *pFVar18;
  FNiagaraSimCacheVariable *pFVar19;
  int iVar20;
  uint uVar21;
  FNiagaraTypeDefinition *pFVar22;
  float *pfVar23;
  FName *pFVar24;
  longlong lVar25;
  int iVar26;
  bool bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  FNiagaraSimCacheAttributeReaderHelper local_110;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  
  local_110.CacheFrame = (FNiagaraSimCacheFrame *)0x0;
  local_110.DataBuffers = (FNiagaraSimCacheDataBuffers *)0x0;
  local_110.DataBuffersLayout = (FNiagaraSimCacheDataBuffersLayout *)0x0;
  local_110.Variable = (FNiagaraSimCacheVariable *)0x0;
  FNiagaraSimCacheAttributeReaderHelper::Initialize(&local_110,this,param_4,param_3,param_5);
  pFVar19 = local_110.Variable;
  bVar27 = local_110.Variable == (FNiagaraSimCacheVariable *)0x0;
  if ((((local_110.Variable != (FNiagaraSimCacheVariable *)0x0) &&
       (pFVar22 = FNiagaraTypeDefinitionHandle::Resolve
                            (&((local_110.Variable)->Variable).TypeDefHandle),
       (TObjectPtr<UObject>_u_0)(pFVar22->ClassStructOrEnum).field0_0x0.DebugPtr ==
       FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0)) &&
      (pFVar22->UnderlyingType == FNiagaraTypeDefinition::QuatDef.UnderlyingType)) &&
     (pFVar22->Flags == FNiagaraTypeDefinition::QuatDef.Flags)) {
    if ((local_110.DataBuffersLayout)->bLocalSpace == false) {
      pFVar24 = (FName *)((local_110.DataBuffersLayout)->RebaseVariableNames).AllocatorInstance.Data
      ;
      pFVar1 = pFVar24 + ((local_110.DataBuffersLayout)->RebaseVariableNames).ArrayNum;
      for (; pFVar24 != pFVar1; pFVar24 = pFVar24 + 1) {
        if (*pFVar24 == param_3) {
          uVar2 = param_2->X;
          uVar4 = param_2->Y;
          uVar3 = param_2->Z;
          uVar5 = param_2->W;
          auVar30._8_4_ = (int)uVar5;
          auVar30._0_8_ = uVar5;
          auVar30._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
          auVar33._8_4_ = (int)uVar4;
          auVar33._0_8_ = uVar4;
          auVar33._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
          dVar37 = ((local_110.CacheFrame)->LocalToWorld).Rotation.ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar38 = ((local_110.CacheFrame)->LocalToWorld).Rotation.ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          dVar11 = ((local_110.CacheFrame)->LocalToWorld).Rotation.XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar12 = ((local_110.CacheFrame)->LocalToWorld).Rotation.XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          auVar31._8_4_ = (int)uVar3;
          auVar31._0_8_ = uVar3;
          auVar31._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
          dVar16 = (double)uVar2 * dVar38 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                   (double)uVar5 * dVar11 +
                   (double)uVar4 * dVar37 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                   (double)uVar3 * dVar12 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar17 = (double)uVar2 * dVar37 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   auVar30._8_8_ * dVar12 +
                   auVar33._8_8_ * dVar38 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   auVar31._8_8_ * dVar11 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar15 = (double)uVar2 * dVar12 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                   (double)uVar5 * dVar37 +
                   (double)uVar4 * dVar11 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                   (double)uVar3 * dVar38 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar11 = (double)uVar2 * dVar11 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                   (double)uVar5 * dVar38 +
                   (double)uVar4 * dVar12 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   (double)uVar3 * dVar37 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_c8._8_4_ = SUB84(dVar17,0);
          local_c8._0_8_ = dVar16;
          local_c8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          local_b8._8_4_ = SUB84(dVar11,0);
          local_b8._0_8_ = dVar15;
          local_b8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
          goto LAB_1493b1f8b;
        }
      }
    }
    dVar16 = param_2->X;
    dVar17 = param_2->Y;
    dVar15 = param_2->Z;
    dVar11 = param_2->W;
LAB_1493b1f8b:
    if ((bVar27) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                            ,0x8b,L""), bVar27)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar18 = local_110.DataBuffers;
    iVar20 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,0x10,(local_110.DataBuffers)->NumInstances,&param_1->AllocatorInstance,
                        &param_1->ArrayNum,&param_1->ArrayMax);
    iVar26 = 0;
    lVar25 = (longlong)iVar20 << 5;
    while( true ) {
      if ((pFVar19 == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0x8b,L""), bVar27)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((int)pFVar18->NumInstances <= iVar26) break;
      if ((pFVar19->FloatCount != 4) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("Variable->FloatOffset != INDEX_NONE && Variable->FloatCount == 4",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xd5,L""), bVar27)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((pFVar19 == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar27)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pfVar23 = (float *)TArrayView<unsigned_char,int>::operator[]
                                   (&pFVar18->FloatData,
                                    ((pFVar19->FloatOffset + 3) * pFVar18->NumInstances + iVar26) *
                                    4);
      fVar6 = *pfVar23;
      pfVar23 = (float *)TArrayView<unsigned_char,int>::operator[]
                                   (&pFVar18->FloatData,
                                    ((pFVar19->FloatOffset + 2) * pFVar18->NumInstances + iVar26) *
                                    4);
      fVar7 = *pfVar23;
      pfVar23 = (float *)TArrayView<unsigned_char,int>::operator[]
                                   (&pFVar18->FloatData,
                                    ((pFVar19->FloatOffset + 1) * pFVar18->NumInstances + iVar26) *
                                    4);
      fVar8 = *pfVar23;
      pfVar23 = (float *)TArrayView<unsigned_char,int>::operator[]
                                   (&pFVar18->FloatData,
                                    ((uint)pFVar19->FloatOffset * pFVar18->NumInstances + iVar26) *
                                    4);
      dVar36 = (double)fVar8;
      dVar35 = (double)*pfVar23;
      dVar12 = (double)fVar7;
      dVar34 = (double)fVar6;
      auVar32._8_4_ = SUB84(dVar36,0);
      auVar32._0_8_ = dVar36;
      auVar32._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      auVar28._8_4_ = SUB84(dVar34,0);
      auVar28._0_8_ = dVar34;
      auVar28._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      auVar29._8_4_ = SUB84(dVar12,0);
      auVar29._0_8_ = dVar12;
      auVar29._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      dVar38 = dVar35 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar34 * dVar16 +
               dVar36 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar12 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar37 = dVar35 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar28._8_8_ * dVar17 +
               auVar32._8_8_ * dVar11 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar29._8_8_ * dVar16 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      uVar41 = SUB84(dVar37,0);
      uVar42 = (undefined4)((ulonglong)dVar37 >> 0x20);
      dVar37 = dVar35 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar34 * dVar15 +
               dVar36 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar12 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar12 = dVar35 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar34 * dVar11 +
               dVar36 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar12 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      uVar39 = SUB84(dVar12,0);
      uVar40 = (undefined4)((ulonglong)dVar12 >> 0x20);
      local_e8._8_4_ = uVar41;
      local_e8._0_8_ = dVar38;
      local_e8._12_4_ = uVar42;
      local_d8._8_4_ = uVar39;
      local_d8._0_8_ = dVar37;
      local_d8._12_4_ = uVar40;
      uVar21 = 0;
      if (iVar20 + iVar26 < param_1->ArrayNum) {
        uVar21 = (uint)~(iVar20 + iVar26) >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar26 = iVar26 + 1;
      pFVar9 = (param_1->AllocatorInstance).Data;
      auVar14._8_4_ = uVar41;
      auVar14._0_8_ = dVar38;
      auVar14._12_4_ = uVar42;
      *(undefined1 (*) [16])(pFVar9 + lVar25) = auVar14;
      auVar13._8_4_ = uVar39;
      auVar13._0_8_ = dVar37;
      auVar13._12_4_ = uVar40;
      *(undefined1 (*) [16])(pFVar9 + lVar25 + 0x10) = auVar13;
      lVar25 = lVar25 + 0x20;
    }
  }
  return;
}

// ReadVector2Attribute @ 1493b2400

void __thiscall
UNiagaraSimCache::ReadVector2Attribute
          (UNiagaraSimCache *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          FName param_3,int param_4)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FNiagaraSimCacheDataBuffers *pFVar5;
  int iVar6;
  uint uVar7;
  FNiagaraTypeDefinition *pFVar8;
  FNiagaraSimCacheVariable *pFVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  FNiagaraSimCacheAttributeReaderHelper local_68 [2];
  
  local_68[0].CacheFrame = (FNiagaraSimCacheFrame *)0x0;
  local_68[0].DataBuffers = (FNiagaraSimCacheDataBuffers *)0x0;
  local_68[0].DataBuffersLayout = (FNiagaraSimCacheDataBuffersLayout *)0x0;
  local_68[0].Variable = (FNiagaraSimCacheVariable *)0x0;
  FNiagaraSimCacheAttributeReaderHelper::Initialize(local_68,this,param_3,param_2,param_4);
  pFVar9 = local_68[0].Variable;
  bVar13 = local_68[0].Variable == (FNiagaraSimCacheVariable *)0x0;
  if ((((local_68[0].Variable != (FNiagaraSimCacheVariable *)0x0) &&
       (pFVar8 = FNiagaraTypeDefinitionHandle::Resolve
                           (&((local_68[0].Variable)->Variable).TypeDefHandle),
       (TObjectPtr<UObject>_u_0)(pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr ==
       FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0)) &&
      (pFVar8->UnderlyingType == FNiagaraTypeDefinition::Vec2Def.UnderlyingType)) &&
     (pFVar8->Flags == FNiagaraTypeDefinition::Vec2Def.Flags)) {
    if ((bVar13) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                            ,0x8b,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(local_68[0].DataBuffers)->NumInstances,&param_1->AllocatorInstance,
                       &param_1->ArrayNum,&param_1->ArrayMax);
    iVar12 = 0;
    lVar10 = (longlong)iVar6 << 4;
    while( true ) {
      if ((pFVar9 == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0x8b,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((int)(local_68[0].DataBuffers)->NumInstances <= iVar12) break;
      if ((pFVar9->FloatCount != 2) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Variable->FloatOffset != INDEX_NONE && Variable->FloatCount == 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xc3,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((pFVar9 == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar5 = local_68[0].DataBuffers;
      uVar11 = ((pFVar9->FloatOffset + 1) * (local_68[0].DataBuffers)->NumInstances + iVar12) * 4;
      uVar7 = 0;
      if ((int)uVar11 < ((local_68[0].DataBuffers)->FloatData).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar2 = *(float *)((pFVar5->FloatData).DataPtr + (int)uVar11);
      if ((pFVar9 == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar5 = local_68[0].DataBuffers;
      uVar11 = ((uint)pFVar9->FloatOffset * (local_68[0].DataBuffers)->NumInstances + iVar12) * 4;
      uVar7 = 0;
      if ((int)uVar11 < ((local_68[0].DataBuffers)->FloatData).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar1 = *(float *)((pFVar5->FloatData).DataPtr + (int)uVar11);
      uVar7 = 0;
      if (iVar12 + iVar6 < param_1->ArrayNum) {
        uVar7 = (uint)~(iVar12 + iVar6) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      iVar12 = iVar12 + 1;
      *(double *)(pFVar3 + lVar10) = (double)fVar1;
      *(double *)(pFVar3 + lVar10 + 8) = (double)fVar2;
      lVar10 = lVar10 + 0x10;
      pFVar9 = local_68[0].Variable;
    }
  }
  return;
}

// ReadVector4Attribute @ 1493b2780

void __thiscall
UNiagaraSimCache::ReadVector4Attribute
          (UNiagaraSimCache *this,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          FName param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FNiagaraSimCacheDataBuffers *pFVar7;
  int iVar8;
  uint uVar9;
  FNiagaraTypeDefinition *pFVar10;
  FNiagaraSimCacheVariable *pFVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  FNiagaraSimCacheAttributeReaderHelper local_90 [3];
  
  local_90[0].CacheFrame = (FNiagaraSimCacheFrame *)0x0;
  local_90[0].DataBuffers = (FNiagaraSimCacheDataBuffers *)0x0;
  local_90[0].DataBuffersLayout = (FNiagaraSimCacheDataBuffersLayout *)0x0;
  local_90[0].Variable = (FNiagaraSimCacheVariable *)0x0;
  FNiagaraSimCacheAttributeReaderHelper::Initialize(local_90,this,param_3,param_2,param_4);
  pFVar11 = local_90[0].Variable;
  bVar15 = local_90[0].Variable == (FNiagaraSimCacheVariable *)0x0;
  if ((((local_90[0].Variable != (FNiagaraSimCacheVariable *)0x0) &&
       (pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                            (&((local_90[0].Variable)->Variable).TypeDefHandle),
       (TObjectPtr<UObject>_u_0)(pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ==
       FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0)) &&
      (pFVar10->UnderlyingType == FNiagaraTypeDefinition::Vec4Def.UnderlyingType)) &&
     (pFVar10->Flags == FNiagaraTypeDefinition::Vec4Def.Flags)) {
    if ((bVar15) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                            ,0x8b,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,0x10,(local_90[0].DataBuffers)->NumInstances,&param_1->AllocatorInstance
                       ,&param_1->ArrayNum,&param_1->ArrayMax);
    iVar14 = 0;
    lVar12 = (longlong)iVar8 << 5;
    while( true ) {
      if ((pFVar11 == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0x8b,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((int)(local_90[0].DataBuffers)->NumInstances <= iVar14) break;
      if ((pFVar11->FloatCount != 4) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Variable->FloatOffset != INDEX_NONE && Variable->FloatCount == 4",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xcf,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pFVar11 == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar7 = local_90[0].DataBuffers;
      uVar13 = ((pFVar11->FloatOffset + 3) * (local_90[0].DataBuffers)->NumInstances + iVar14) * 4;
      uVar9 = 0;
      if ((int)uVar13 < ((local_90[0].DataBuffers)->FloatData).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar2 = *(float *)((pFVar7->FloatData).DataPtr + (int)uVar13);
      if ((pFVar11 == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar7 = local_90[0].DataBuffers;
      uVar13 = ((pFVar11->FloatOffset + 2) * (local_90[0].DataBuffers)->NumInstances + iVar14) * 4;
      uVar9 = 0;
      if ((int)uVar13 < ((local_90[0].DataBuffers)->FloatData).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar3 = *(float *)((pFVar7->FloatData).DataPtr + (int)uVar13);
      if ((pFVar11 == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar7 = local_90[0].DataBuffers;
      uVar13 = ((pFVar11->FloatOffset + 1) * (local_90[0].DataBuffers)->NumInstances + iVar14) * 4;
      uVar9 = 0;
      if ((int)uVar13 < ((local_90[0].DataBuffers)->FloatData).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar4 = *(float *)((pFVar7->FloatData).DataPtr + (int)uVar13);
      if ((pFVar11 == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar7 = local_90[0].DataBuffers;
      uVar13 = ((uint)pFVar11->FloatOffset * (local_90[0].DataBuffers)->NumInstances + iVar14) * 4;
      uVar9 = 0;
      if ((int)uVar13 < ((local_90[0].DataBuffers)->FloatData).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar1 = *(float *)((pFVar7->FloatData).DataPtr + (int)uVar13);
      uVar9 = 0;
      if (iVar8 + iVar14 < param_1->ArrayNum) {
        uVar9 = (uint)~(iVar8 + iVar14) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      iVar14 = iVar14 + 1;
      *(double *)(pFVar5 + lVar12) = (double)fVar1;
      *(double *)(pFVar5 + lVar12 + 8) = (double)fVar4;
      *(double *)(pFVar5 + lVar12 + 0x10) = (double)fVar3;
      *(double *)(pFVar5 + lVar12 + 0x18) = (double)fVar2;
      lVar12 = lVar12 + 0x20;
      pFVar11 = local_90[0].Variable;
    }
  }
  return;
}

// ReadVectorAttribute @ 1493b2ca0

void __thiscall
UNiagaraSimCache::ReadVectorAttribute
          (UNiagaraSimCache *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,FName param_2,
          FName param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FNiagaraSimCacheDataBuffers *pFVar6;
  int iVar7;
  uint uVar8;
  FNiagaraTypeDefinition *pFVar9;
  FNiagaraSimCacheVariable *pFVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  FNiagaraSimCacheAttributeReaderHelper local_80 [2];
  
  local_80[0].CacheFrame = (FNiagaraSimCacheFrame *)0x0;
  local_80[0].DataBuffers = (FNiagaraSimCacheDataBuffers *)0x0;
  local_80[0].DataBuffersLayout = (FNiagaraSimCacheDataBuffersLayout *)0x0;
  local_80[0].Variable = (FNiagaraSimCacheVariable *)0x0;
  FNiagaraSimCacheAttributeReaderHelper::Initialize(local_80,this,param_3,param_2,param_4);
  pFVar10 = local_80[0].Variable;
  bVar14 = local_80[0].Variable == (FNiagaraSimCacheVariable *)0x0;
  if ((((local_80[0].Variable != (FNiagaraSimCacheVariable *)0x0) &&
       (pFVar9 = FNiagaraTypeDefinitionHandle::Resolve
                           (&((local_80[0].Variable)->Variable).TypeDefHandle),
       (TObjectPtr<UObject>_u_0)(pFVar9->ClassStructOrEnum).field0_0x0.DebugPtr ==
       FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0)) &&
      (pFVar9->UnderlyingType == FNiagaraTypeDefinition::Vec3Def.UnderlyingType)) &&
     (pFVar9->Flags == FNiagaraTypeDefinition::Vec3Def.Flags)) {
    if ((bVar14) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                            ,0x8b,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,(local_80[0].DataBuffers)->NumInstances,&param_1->AllocatorInstance,
                       &param_1->ArrayNum,&param_1->ArrayMax);
    iVar13 = 0;
    lVar11 = (longlong)iVar7 * 0x18;
    while( true ) {
      if ((pFVar10 == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0x8b,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((int)(local_80[0].DataBuffers)->NumInstances <= iVar13) break;
      if ((pFVar10->FloatCount != 3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Variable->FloatOffset != INDEX_NONE && Variable->FloatCount == 3",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xc9,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pFVar10 == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar6 = local_80[0].DataBuffers;
      uVar12 = ((pFVar10->FloatOffset + 2) * (local_80[0].DataBuffers)->NumInstances + iVar13) * 4;
      uVar8 = 0;
      if ((int)uVar12 < ((local_80[0].DataBuffers)->FloatData).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar2 = *(float *)((pFVar6->FloatData).DataPtr + (int)uVar12);
      if ((pFVar10 == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar6 = local_80[0].DataBuffers;
      uVar12 = ((pFVar10->FloatOffset + 1) * (local_80[0].DataBuffers)->NumInstances + iVar13) * 4;
      uVar8 = 0;
      if ((int)uVar12 < ((local_80[0].DataBuffers)->FloatData).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar3 = *(float *)((pFVar6->FloatData).DataPtr + (int)uVar12);
      if ((pFVar10 == (FNiagaraSimCacheVariable *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                              ,0xac,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar6 = local_80[0].DataBuffers;
      uVar12 = ((uint)pFVar10->FloatOffset * (local_80[0].DataBuffers)->NumInstances + iVar13) * 4;
      uVar8 = 0;
      if ((int)uVar12 < ((local_80[0].DataBuffers)->FloatData).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar1 = *(float *)((pFVar6->FloatData).DataPtr + (int)uVar12);
      uVar8 = 0;
      if (iVar7 + iVar13 < param_1->ArrayNum) {
        uVar8 = (uint)~(iVar7 + iVar13) >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      iVar13 = iVar13 + 1;
      *(double *)(pFVar4 + lVar11) = (double)fVar1;
      *(double *)(pFVar4 + lVar11 + 8) = (double)fVar3;
      *(double *)(pFVar4 + lVar11 + 0x10) = (double)fVar2;
      lVar11 = lVar11 + 0x18;
      pFVar10 = local_80[0].Variable;
    }
  }
  return;
}

// Serialize @ 1493b5ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNiagaraSimCache::Serialize(UNiagaraSimCache *this,FArchive *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  UObject *this_00;
  UClass *pUVar7;
  ulonglong uVar8;
  FNiagaraSimCacheDataBuffers *this_01;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  byte bVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FNiagaraCustomVersion::GUID);
  if (0x53 < iVar5) {
    uVar1 = (this->CacheFrames).ArrayNum;
    uVar8 = (ulonglong)(int)uVar1;
    pFVar10 = (this->CacheFrames).AllocatorInstance.Data;
    bVar11 = 1;
    this_01 = (FNiagaraSimCacheDataBuffers *)(pFVar10 + 0xb0);
    pFVar10 = pFVar10 + uVar8 * 0x160;
    if ((this->CreateParameters).bAllowSerializeLargeCache == 0) {
      while( true ) {
        if ((this->CacheFrames).ArrayNum != (int)uVar8) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FNiagaraSimCacheFrame,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if ((FScriptContainerElement *)&this_01[-2].BulkData.field_0x10 == pFVar10) break;
        bVar4 = FNiagaraSimCacheDataBuffers::SerializeAsArray
                          (this_01,param_1,(UObject *)this,&(this->CacheLayout).SystemLayout);
        bVar11 = bVar11 & bVar4;
        uVar9 = 0;
        if (0 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
          do {
            uVar6 = 0;
            if ((int)uVar9 < (int)this_01[1].IDToIndexTableElements) {
              uVar6 = ~uVar9 >> 0x1f;
            }
            if ((uVar6 == 0) &&
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
            lVar2 = *(longlong *)(this_01 + 1);
            uVar6 = 0;
            if ((int)uVar9 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
              uVar6 = ~uVar9 >> 0x1f;
            }
            if ((uVar6 == 0) &&
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
            bVar4 = FNiagaraSimCacheDataBuffers::SerializeAsArray
                              ((FNiagaraSimCacheDataBuffers *)
                               ((longlong)(int)uVar9 * 0xd8 + lVar2 + 0x40),param_1,(UObject *)this,
                               (FNiagaraSimCacheDataBuffersLayout *)
                               ((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data +
                               (longlong)(int)uVar9 * 0xb8));
            bVar11 = bVar11 & bVar4;
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (this->CacheLayout).EmitterLayouts.ArrayNum);
        }
        this_01 = (FNiagaraSimCacheDataBuffers *)&this_01[2].Int32Data;
        uVar8 = (ulonglong)uVar1;
      }
    }
    else {
      while( true ) {
        if ((this->CacheFrames).ArrayNum != (int)uVar8) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FNiagaraSimCacheFrame,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if ((FScriptContainerElement *)&this_01[-2].BulkData.field_0x10 == pFVar10) break;
        bVar4 = FNiagaraSimCacheDataBuffers::SerializeAsBulkData
                          (this_01,param_1,(UObject *)this,&(this->CacheLayout).SystemLayout);
        bVar11 = bVar11 & bVar4;
        uVar9 = 0;
        if (0 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
          do {
            uVar6 = 0;
            if ((int)uVar9 < (int)this_01[1].IDToIndexTableElements) {
              uVar6 = ~uVar9 >> 0x1f;
            }
            if ((uVar6 == 0) &&
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
            lVar2 = *(longlong *)(this_01 + 1);
            uVar6 = 0;
            if ((int)uVar9 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
              uVar6 = ~uVar9 >> 0x1f;
            }
            if ((uVar6 == 0) &&
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
            bVar4 = FNiagaraSimCacheDataBuffers::SerializeAsBulkData
                              ((FNiagaraSimCacheDataBuffers *)
                               ((longlong)(int)uVar9 * 0xd8 + lVar2 + 0x40),param_1,(UObject *)this,
                               (FNiagaraSimCacheDataBuffersLayout *)
                               ((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data +
                               (longlong)(int)uVar9 * 0xb8));
            bVar11 = bVar11 & bVar4;
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (this->CacheLayout).EmitterLayouts.ArrayNum);
        }
        this_01 = (FNiagaraSimCacheDataBuffers *)&this_01[2].Int32Data;
        uVar8 = (ulonglong)uVar1;
      }
    }
    if (bVar11 != 0) {
      return;
    }
    if (2 < (byte)LogNiagara._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr = 0;
    goto LAB_1493b5f5a;
  }
  if (2 < (byte)LogNiagara._0_1_) {
    this_00 = TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SoftNiagaraSystem);
    if (this_00 == (UObject *)0x0) {
LAB_1493b5b50:
      ::FString::FString(&local_68,L"None");
    }
    else {
      pUVar7 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      iVar5 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar7->_padding_)) goto LAB_1493b5b50;
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_68,(UObject *)0x0);
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr = 0;
LAB_1493b5f5a:
  *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x18,0);
  return;
}

// Serialize @ 1493b5f80

void __thiscall UNiagaraSimCache::Serialize(UNiagaraSimCache *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUNiagaraSimCache @ 1493b7630

void __cdecl UNiagaraSimCache::StaticRegisterNativesUNiagaraSimCache(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraSimCache_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// WriteFrame @ 1493bd120

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall UNiagaraSimCache::WriteFrame(UNiagaraSimCache *this,UNiagaraComponent *param_1)

{
  bool bVar1;
  FNiagaraSimCacheFeedbackContext local_38;
  
  local_38.bAutoLogIssues = true;
  local_38.Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Errors.ArrayNum = 0;
  local_38.Errors.ArrayMax = 0;
  local_38.Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Warnings.ArrayNum = 0;
  local_38.Warnings.ArrayMax = 0;
  bVar1 = WriteFrame(this,param_1,&local_38);
  FNiagaraSimCacheFeedbackContext::~FNiagaraSimCacheFeedbackContext(&local_38);
  return bVar1;
}

// WriteFrame @ 1493bd170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001493bd443) */
/* WARNING: Removing unreachable block (ram,0x0001493bddfc) */
/* WARNING: Removing unreachable block (ram,0x0001493bd2eb) */
/* WARNING: Removing unreachable block (ram,0x0001493bd966) */
/* WARNING: Type propagation algorithm not settling */
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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall
UNiagaraSimCache::WriteFrame
          (UNiagaraSimCache *this,UNiagaraComponent *param_1,
          FNiagaraSimCacheFeedbackContext *param_2)

{
  TSoftObjectPtr<UNiagaraSystem> *this_00;
  int *piVar1;
  undefined8 uVar2;
  FNiagaraEmitterInstance *pFVar3;
  UNiagaraSimCacheDebugData *this_01;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  UNiagaraSystem *pUVar18;
  UClass *pUVar19;
  UObject *this_02;
  TSharedRef<FNiagaraEmitterInstance,1> *pTVar20;
  FNiagaraDataBuffer *this_03;
  FNiagaraDataBuffer *pFVar21;
  UWorld *this_04;
  FNiagaraGpuComputeDispatchInterface *pFVar22;
  FScriptContainerElement *pFVar23;
  UNiagaraSystem *pUVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  undefined1 auStackY_278 [32];
  char local_247 [7];
  FScriptContainerElement *local_240;
  FNiagaraSimCacheHelper local_238;
  int local_210 [2];
  longlong local_208;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FScriptContainerElement *local_1c0;
  undefined8 local_1b8;
  FString local_1b0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  FString local_178;
  FString local_168;
  FString local_158;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  FNiagaraStatelessEmitterInstance *local_138;
  UNiagaraComponent *local_130;
  FNiagaraDataBuffer *local_128;
  FNiagaraSimCacheFeedbackContext *local_120;
  UNiagaraSimCache *local_118;
  ForAnyElementType *pFStack_110;
  FNiagaraSimCacheHelper *local_108;
  int *piStack_100;
  FNiagaraSimCacheFeedbackContext *local_f8;
  char *pcStack_f0;
  FScriptContainerElement **local_e8;
  TArrayView<TSharedRef<FNiagaraEmitterInstance,1>,int> local_e0;
  code *local_c8 [5];
  undefined8 *local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_130 = param_1;
  local_120 = param_2;
  if ((&this->RWLock == (FPlatformRWLock *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->RWLock);
  FNiagaraSimCacheHelper::FNiagaraSimCacheHelper(&local_238,param_1);
  this_00 = &this->SoftNiagaraSystem;
  if (local_238.SystemSimulationDataBuffer == (FNiagaraDataBuffer *)0x0) {
    *(undefined8 *)&this_00->SoftObjectPtr = 0;
    *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x10 = 0;
    *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x8 = 0;
    local_1a0 = 0;
    FUtf8String::Reset((FUtf8String *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x18,0);
    if (local_238.NiagaraSystem == (UNiagaraSystem *)0x0) {
      ::FString::FString(&local_178,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_238.NiagaraSystem,&local_178,(UObject *)0x0);
    }
    ::FString::PrintfImpl(&local_200,L"No valid simulation data for %s");
    iVar14 = (param_2->Errors).ArrayNum;
    piVar1 = &(param_2->Errors).ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(param_2->Errors).AllocatorInstance,piVar1);
      (param_2->Errors).ArrayNum = iVar14 + 1;
    }
    else {
      (param_2->Errors).ArrayNum = iVar14 + 1;
    }
    pFVar23 = (param_2->Errors).AllocatorInstance.Data + (longlong)iVar14 * 0x10;
    *(undefined8 *)pFVar23 = 0;
    *(FScriptContainerElement **)pFVar23 = local_200.Data.AllocatorInstance.Data;
    *(int *)(pFVar23 + 8) = local_200.Data.ArrayNum;
    *(int *)(pFVar23 + 0xc) = local_200.Data.ArrayMax;
    local_200.Data.ArrayNum = 0;
    local_200.Data.ArrayMax = 0;
    local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_1493be020:
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  else {
    pUVar18 = (UNiagaraSystem *)
              TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
    pUVar24 = (UNiagaraSystem *)0x0;
    if (pUVar18 == (UNiagaraSystem *)0x0) {
LAB_1493bd32f:
      pUVar18 = pUVar24;
    }
    else {
      pUVar19 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      iVar14 = (int)pUVar19->_padding_;
      if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar14) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
          &pUVar19->_padding_)) goto LAB_1493bd32f;
    }
    if (pUVar18 == local_238.NiagaraSystem) {
      if (((local_238.SystemInstance)->ActualExecutionState == Complete) ||
         ((local_238.SystemInstance)->ActualExecutionState == Disabled)) {
        FNiagaraSystemInstance::GetCrashReporterTag(local_238.SystemInstance);
        ::FString::PrintfImpl(&local_1b0,L"System already completed its simulation. %s");
        iVar14 = (param_2->Errors).ArrayNum;
        piVar1 = &(param_2->Errors).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(param_2->Errors).AllocatorInstance,piVar1);
          (param_2->Errors).ArrayNum = iVar14 + 1;
        }
        else {
          (param_2->Errors).ArrayNum = iVar14 + 1;
        }
        pFVar23 = (param_2->Errors).AllocatorInstance.Data + (longlong)iVar14 * 0x10;
        *(undefined8 *)pFVar23 = 0;
        *(FScriptContainerElement **)pFVar23 = local_1b0.Data.AllocatorInstance.Data;
        local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar23 + 8) = local_1b0.Data.ArrayNum;
        *(int *)(pFVar23 + 0xc) = local_1b0.Data.ArrayMax;
        local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b0.Data.ArrayNum = 0;
        local_1b0.Data.ArrayMax = 0;
        goto LAB_1493be020;
      }
      if ((local_238.SystemInstance)->SystemInstanceState != Running) goto LAB_1493be02a;
      iVar14 = this->CaptureTickCount;
      if (iVar14 == -1) {
        this->StartSeconds = (local_238.SystemInstance)->Age;
LAB_1493bd4c7:
        piVar1 = &(this->CacheFrames).ArrayMax;
        this->CaptureTickCount = (local_238.SystemInstance)->TickCount;
        this->DurationSeconds = (local_238.SystemInstance)->Age - this->StartSeconds;
        iVar14 = (this->CacheFrames).ArrayNum;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x160,0x10,&(this->CacheFrames).AllocatorInstance,piVar1);
        }
        (this->CacheFrames).ArrayNum = iVar14 + 1;
        pFVar23 = (this->CacheFrames).AllocatorInstance.Data + (longlong)iVar14 * 0x160;
        DefaultConstructItems<FNiagaraSimCacheFrame,int>(pFVar23,1);
        local_140 = pFVar23 + 0x148;
        local_148 = pFVar23 + 0x150;
        dVar5 = ((local_238.SystemInstance)->GatheredInstanceParameters).ComponentTrans.Rotation.XY.
                m128d_f64[1];
        *(double *)pFVar23 =
             ((local_238.SystemInstance)->GatheredInstanceParameters).ComponentTrans.Rotation.XY.
             m128d_f64[0];
        *(double *)(pFVar23 + 8) = dVar5;
        dVar5 = ((local_238.SystemInstance)->GatheredInstanceParameters).ComponentTrans.Rotation.ZW.
                m128d_f64[1];
        *(double *)(pFVar23 + 0x10) =
             ((local_238.SystemInstance)->GatheredInstanceParameters).ComponentTrans.Rotation.ZW.
             m128d_f64[0];
        *(double *)(pFVar23 + 0x18) = dVar5;
        dVar5 = ((local_238.SystemInstance)->GatheredInstanceParameters).ComponentTrans.Translation.
                XY.m128d_f64[1];
        *(double *)(pFVar23 + 0x20) =
             ((local_238.SystemInstance)->GatheredInstanceParameters).ComponentTrans.Translation.XY.
             m128d_f64[0];
        *(double *)(pFVar23 + 0x28) = dVar5;
        dVar5 = ((local_238.SystemInstance)->GatheredInstanceParameters).ComponentTrans.Translation.
                ZW.m128d_f64[1];
        *(double *)(pFVar23 + 0x30) =
             ((local_238.SystemInstance)->GatheredInstanceParameters).ComponentTrans.Translation.ZW.
             m128d_f64[0];
        *(double *)(pFVar23 + 0x38) = dVar5;
        dVar5 = ((local_238.SystemInstance)->GatheredInstanceParameters).ComponentTrans.Scale3D.XY.
                m128d_f64[1];
        *(double *)(pFVar23 + 0x40) =
             ((local_238.SystemInstance)->GatheredInstanceParameters).ComponentTrans.Scale3D.XY.
             m128d_f64[0];
        *(double *)(pFVar23 + 0x48) = dVar5;
        dVar5 = ((local_238.SystemInstance)->GatheredInstanceParameters).ComponentTrans.Scale3D.ZW.
                m128d_f64[1];
        *(double *)(pFVar23 + 0x50) =
             ((local_238.SystemInstance)->GatheredInstanceParameters).ComponentTrans.Scale3D.ZW.
             m128d_f64[0];
        *(double *)(pFVar23 + 0x58) = dVar5;
        *(undefined8 *)(pFVar23 + 0x60) =
             *(undefined8 *)&((local_238.SystemInstance)->LWCTile).field0_0x0;
        *(float *)(pFVar23 + 0x68) = ((local_238.SystemInstance)->LWCTile).field0_0x0._s_0.Z;
        auVar26 = ZEXT416((uint)((local_238.SystemInstance)->Age * __real_461c4000 + __real_3f000000
                                ));
        auVar26 = roundps(auVar26,auVar26,1);
        *(float *)(pFVar23 + 0x6c) = auVar26._0_4_ * __real_38d1b717;
        dVar5 = ((local_238.SystemInstance)->LocalBounds).Min.field0_0x0._s_0.Y;
        *(double *)(pFVar23 + 0x78) =
             ((local_238.SystemInstance)->LocalBounds).Min.field0_0x0._s_0.X;
        *(double *)(pFVar23 + 0x80) = dVar5;
        dVar5 = ((local_238.SystemInstance)->LocalBounds).Max.field0_0x0._s_0.X;
        *(double *)(pFVar23 + 0x88) =
             ((local_238.SystemInstance)->LocalBounds).Min.field0_0x0._s_0.Z;
        *(double *)(pFVar23 + 0x90) = dVar5;
        dVar5 = ((local_238.SystemInstance)->LocalBounds).Max.field0_0x0._s_0.Z;
        *(double *)(pFVar23 + 0x98) =
             ((local_238.SystemInstance)->LocalBounds).Max.field0_0x0._s_0.Y;
        *(double *)(pFVar23 + 0xa0) = dVar5;
        *(undefined8 *)(pFVar23 + 0xa8) =
             *(undefined8 *)&((local_238.SystemInstance)->LocalBounds).IsValid;
        iVar14 = (this->CacheLayout).EmitterLayouts.ArrayNum;
        iVar15 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xd8,8,iVar14,(ForAnyElementType *)local_140,(int *)local_148,
                            (int *)(pFVar23 + 0x154));
        DefaultConstructItems<FNiagaraSimCacheEmitterFrame,int>
                  ((void *)((longlong)iVar15 * 0xd8 + *(longlong *)(pFVar23 + 0x148)),iVar14);
        FNiagaraSimCacheHelper::WriteDataBuffer
                  (&local_238,local_238.SystemSimulationDataBuffer,&(this->CacheLayout).SystemLayout
                   ,(FNiagaraSimCacheDataBuffers *)(pFVar23 + 0xb0),
                   (local_238.SystemInstance)->SystemInstanceIndex,1);
        bVar11 = true;
        local_188 = (longlong)iVar14;
        if (0 < iVar14) {
          local_208 = 0;
          pUVar18 = pUVar24;
          do {
            uVar25 = (uint)pUVar18;
            uVar16 = 0;
            if ((int)uVar25 < *(int *)local_148) {
              uVar16 = ~uVar25 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar4 = (code *)swi(3);
              uVar12 = (*pcVar4)();
              return (bool)uVar12;
            }
            iVar14 = ((local_238.SystemInstance)->Emitters).ArrayNum;
            local_240 = *(FScriptContainerElement **)&local_140->field_0x0;
            local_e0.DataPtr =
                 (TSharedRef<FNiagaraEmitterInstance,1> *)
                 ((local_238.SystemInstance)->Emitters).AllocatorInstance.Data;
            if ((iVar14 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar13)) {
              pcVar4 = (code *)swi(3);
              uVar12 = (*pcVar4)();
              return (bool)uVar12;
            }
            local_e0.ArrayNum = iVar14;
            pTVar20 = TArrayView<TSharedRef<FNiagaraEmitterInstance,1>,int>::operator[]
                                (&local_e0,uVar25);
            pFVar3 = pTVar20->Object;
            if ((pFVar3->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ParticleDataSet",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                                    ,0x39,L""), bVar13)) {
              pcVar4 = (code *)swi(3);
              uVar12 = (*pcVar4)();
              return (bool)uVar12;
            }
            pFVar21 = pFVar3->ParticleDataSet->CurrentData;
            local_128 = pFVar21;
            if (((pFVar3->ExecutionState != Complete) && (pFVar3->ExecutionState != Disabled)) &&
               (pFVar21 != (FNiagaraDataBuffer *)0x0)) {
              dVar5 = (pFVar3->CachedBounds).Min.field0_0x0._s_0.Y;
              dVar6 = (pFVar3->CachedBounds).Min.field0_0x0._s_0.Z;
              dVar7 = (pFVar3->CachedBounds).Max.field0_0x0._s_0.X;
              dVar8 = (pFVar3->CachedBounds).Max.field0_0x0._s_0.Y;
              dVar9 = (pFVar3->CachedBounds).Max.field0_0x0._s_0.Z;
              uVar2 = *(undefined8 *)&(pFVar3->CachedBounds).IsValid;
              *(double *)(local_240 + (longlong)&pUVar24->_padding_) =
                   (pFVar3->CachedBounds).Min.field0_0x0._s_0.X;
              *(double *)(local_240 + (longlong)&pUVar24->_padding_ + 8) = dVar5;
              pFVar23 = (FScriptContainerElement *)
                        ((longlong)&pUVar24->_padding_ + (longlong)local_240);
              *(double *)pFVar23 = dVar6;
              *(double *)(pFVar23 + 8) = dVar7;
              pFVar23 = (FScriptContainerElement *)
                        ((longlong)&pUVar24->_padding_ + (longlong)local_240);
              *(double *)pFVar23 = dVar8;
              *(double *)(pFVar23 + 8) = dVar9;
              *(undefined8 *)((longlong)&pUVar24->_padding_ + (longlong)local_240) = uVar2;
              *(int *)((longlong)&pUVar24->_padding_ + (longlong)local_240) =
                   pFVar3->TotalSpawnedParticles;
              uVar17 = 0;
              uVar16 = uVar17;
              if ((int)uVar25 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
                uVar16 = ~uVar25 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar4 = (code *)swi(3);
                uVar12 = (*pcVar4)();
                return (bool)uVar12;
              }
              if ((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data[local_208 + 8] ==
                  (FScriptContainerElement)0x1) {
                local_138 = (FNiagaraStatelessEmitterInstance *)
                            (**(code **)(pFVar3->_padding_ + 0x70))(pFVar3);
                if (local_138 == (FNiagaraStatelessEmitterInstance *)0x0) {
                  if (bVar11) {
                    this_04 = (UWorld *)local_130->_padding_;
                    if ((this_04 == (UWorld *)0x0) &&
                       (this_04 = UActorComponent::GetWorld_Uncached((UActorComponent *)local_130),
                       this_04 == (UWorld *)0x0)) {
                      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<_8525031180821593407>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCache.cpp"
                                          ,0x2c1,"World");
                      if (bVar11) {
                        pcVar4 = (code *)swi(3);
                        uVar12 = (*pcVar4)();
                        return (bool)uVar12;
                      }
                    }
                    else {
                      UWorld::SendAllEndOfFrameUpdates(this_04);
                      pFVar22 = FNiagaraGpuComputeDispatchInterface::Get(this_04);
                      if (pFVar22 == (FNiagaraGpuComputeDispatchInterface *)0x0) {
                        local_247[1] = 0;
                        bVar11 = `UNiagaraSimCache::WriteFrame'::__l43::<lambda_1>::operator()
                                           (local_247 + 1);
                        if (!bVar11) goto LAB_1493bdad5;
                      }
                      (**(code **)(pFVar22->_padding_ + 0xf8))(pFVar22);
                    }
LAB_1493bdad5:
                    bVar11 = false;
                    pFVar21 = local_128;
                  }
                  if ((int)uVar25 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
                    uVar17 = ~uVar25 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar4 = (code *)swi(3);
                    uVar12 = (*pcVar4)();
                    return (bool)uVar12;
                  }
                  FNiagaraSimCacheHelper::WriteDataBufferGPU
                            (&local_238,pFVar3,pFVar21,
                             (FNiagaraSimCacheDataBuffersLayout *)
                             ((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data +
                             (longlong)(int)uVar25 * 0xb8),
                             (FNiagaraSimCacheDataBuffers *)(local_240 + 0x40 + (longlong)pUVar24));
                }
                else {
                  this_03 = ::operator_new(0x160);
                  if (this_03 == (FNiagaraDataBuffer *)0x0) {
                    pFVar21 = (FNiagaraDataBuffer *)0x0;
                  }
                  else {
                    pFVar21 = FNiagaraDataBuffer::FNiagaraDataBuffer(this_03,pFVar21->Owner);
                    if (pFVar21 != (FNiagaraDataBuffer *)0x0) {
                      if (((int)pFVar21->_padding_ == -1) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("!IsBeingWritten()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                              ,0x26,L""), bVar13)) {
                        pcVar4 = (code *)swi(3);
                        uVar12 = (*pcVar4)();
                        return (bool)uVar12;
                      }
                      LOCK();
                      *(int *)&pFVar21->_padding_ = (int)pFVar21->_padding_ + 1;
                      UNLOCK();
                    }
                  }
                  FNiagaraStatelessEmitterInstance::CaptureForDebugging(local_138,pFVar21);
                  uVar16 = pFVar21->NumInstances;
                  if ((int)uVar25 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
                    uVar17 = ~uVar25 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar4 = (code *)swi(3);
                    uVar12 = (*pcVar4)();
                    return (bool)uVar12;
                  }
                  FNiagaraSimCacheHelper::WriteDataBuffer
                            (&local_238,pFVar21,
                             (FNiagaraSimCacheDataBuffersLayout *)
                             ((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data +
                             (longlong)(int)uVar25 * 0xb8),
                             (FNiagaraSimCacheDataBuffers *)(local_240 + 0x40 + (longlong)pUVar24),0
                             ,uVar16);
                  if (((int)pFVar21->_padding_ < 1) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsBeingRead()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                          ,0x2c,L""), bVar13)) {
                    pcVar4 = (code *)swi(3);
                    uVar12 = (*pcVar4)();
                    return (bool)uVar12;
                  }
                  LOCK();
                  *(int *)&pFVar21->_padding_ = (int)pFVar21->_padding_ + -1;
                  UNLOCK();
                }
              }
              else {
                uVar16 = pFVar21->NumInstances;
                if ((int)uVar25 < (this->CacheLayout).EmitterLayouts.ArrayNum) {
                  uVar17 = ~uVar25 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar4 = (code *)swi(3);
                  uVar12 = (*pcVar4)();
                  return (bool)uVar12;
                }
                FNiagaraSimCacheHelper::WriteDataBuffer
                          (&local_238,pFVar21,
                           (FNiagaraSimCacheDataBuffersLayout *)
                           ((this->CacheLayout).EmitterLayouts.AllocatorInstance.Data +
                           (longlong)(int)uVar25 * 0xb8),
                           (FNiagaraSimCacheDataBuffers *)(local_240 + 0x40 + (longlong)pUVar24),0,
                           uVar16);
              }
            }
            local_208 = local_208 + 0xb8;
            pUVar18 = (UNiagaraSystem *)(ulonglong)(uVar25 + 1);
            pUVar24 = (UNiagaraSystem *)&pUVar24->ParameterCollectionOverrides;
            local_188 = local_188 + -1;
          } while (local_188 != 0);
          local_188 = 0;
          param_2 = local_120;
        }
        this_01 = (this->DebugData).field0_0x0.DebugPtr;
        if (this_01 != (UNiagaraSimCacheDebugData *)0x0) {
          UNiagaraSimCacheDebugData::CaptureFrame
                    (this_01,&local_238,(this->CacheFrames).ArrayNum + -1);
        }
        if (*(int *)&(this->DataInterfaceStorage).field_0x8 !=
            *(int *)&(this->DataInterfaceStorage).field_0x34) {
          local_210[0] = (this->CacheFrames).ArrayNum + -1;
          local_247[0] = '\x01';
          pFStack_110 = &local_98;
          local_1c0 = (FScriptContainerElement *)0x0;
          local_108 = &local_238;
          piStack_100 = local_210;
          pcStack_f0 = local_247;
          local_e8 = &local_1c0;
          local_1b8 = 0;
          local_98.Data = (FScriptContainerElement *)0x0;
          local_90 = 0;
          local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_88.NumBits = 0;
          local_88.MaxBits = 0x80;
          local_68 = 0xffffffff;
          local_64 = 0;
          local_58 = (void *)0x0;
          local_50 = 0;
          local_c8[0] = (code *)0x0;
          local_118 = this;
          local_f8 = param_2;
          local_a0 = FMemory::Malloc(0x40,8);
          *local_a0 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraSimCache::WriteFrame'::`53'::<lambda_2>,0,1>::
                       _vftable_;
          local_a0[1] = local_118;
          local_a0[2] = pFStack_110;
          local_a0[3] = local_108;
          local_a0[4] = piStack_100;
          local_a0[5] = local_f8;
          local_a0[6] = pcStack_f0;
          local_a0[7] = local_e8;
          if (local_a0 + 1 != (undefined8 *)0x0) {
            local_c8[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`UNiagaraSimCache::WriteFrame'::__l53::<lambda_2>,bool,FNiagaraVariableBase,UNiagaraDataInterface_*>
                          ::Call;
          }
          FNiagaraDataInterfaceUtilities::ForEachDataInterface
                    (local_238.SystemInstance,
                     (TFunction<bool___cdecl(FNiagaraVariableBase,UNiagaraDataInterface_*)> *)
                     local_c8);
          if (local_247[0] == '\0') {
            FNiagaraSystemInstance::GetCrashReporterTag(local_238.SystemInstance);
            ::FString::PrintfImpl
                      (&local_1d0,L"Data interface(s) %s failed to write information for system %s")
            ;
            iVar14 = (param_2->Errors).ArrayNum;
            piVar1 = &(param_2->Errors).ArrayMax;
            if (iVar14 == *piVar1) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(param_2->Errors).AllocatorInstance,piVar1);
              (param_2->Errors).ArrayNum = iVar14 + 1;
            }
            else {
              (param_2->Errors).ArrayNum = iVar14 + 1;
            }
            pFVar23 = (param_2->Errors).AllocatorInstance.Data + (longlong)iVar14 * 0x10;
            *(undefined8 *)pFVar23 = 0;
            *(FScriptContainerElement **)pFVar23 = local_1d0.Data.AllocatorInstance.Data;
            *(int *)(pFVar23 + 8) = local_1d0.Data.ArrayNum;
            *(int *)(pFVar23 + 0xc) = local_1d0.Data.ArrayMax;
            local_1d0.Data.ArrayNum = 0;
            local_1d0.Data.ArrayMax = 0;
            local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr = 0;
            *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x10 = 0;
            *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x8 = 0;
            local_180 = 0;
            FUtf8String::Reset((FUtf8String *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x18,0)
            ;
            local_50 = 0;
            if (local_58 != (void *)0x0) {
              FMemory::Free(local_58);
            }
            uVar10 = local_90 >> 0x20;
            local_90 = local_90 & 0xffffffff00000000;
            if ((int)uVar10 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x14,4,0,&local_98,0,(int *)((longlong)&local_90 + 4));
            }
            local_68 = 0xffffffff;
            local_64 = 0;
            local_88.NumBits = 0;
            if (0x80 < (uint)local_88.MaxBits) {
              local_88.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
            }
            if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
            }
            local_178.Data.AllocatorInstance.Data = local_1c0;
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data);
              local_178.Data.AllocatorInstance.Data = local_1c0;
            }
            goto LAB_1493be020;
          }
          local_50 = 0;
          if (local_58 != (void *)0x0) {
            FMemory::Free(local_58);
          }
          uVar10 = local_90 >> 0x20;
          local_90 = local_90 & 0xffffffff00000000;
          if ((int)uVar10 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,0,&local_98,0,(int *)((longlong)&local_90 + 4));
          }
          local_68 = 0xffffffff;
          local_64 = 0;
          local_88.NumBits = 0;
          if (0x80 < (uint)local_88.MaxBits) {
            local_88.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
          }
          if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
          }
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data);
          }
          if (local_1c0 != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0);
          }
        }
        bVar11 = true;
        goto LAB_1493be02d;
      }
      if (iVar14 == (local_238.SystemInstance)->TickCount) goto LAB_1493be02a;
      if (iVar14 <= (local_238.SystemInstance)->TickCount) goto LAB_1493bd4c7;
      FNiagaraSystemInstance::GetCrashReporterTag(local_238.SystemInstance);
      ::FString::PrintfImpl
                (&local_1e0,
                 L"System was was reset since the last capture, skipping further cache writes. %s");
      iVar14 = (param_2->Errors).ArrayNum;
      piVar1 = &(param_2->Errors).ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(param_2->Errors).AllocatorInstance,piVar1);
        (param_2->Errors).ArrayNum = iVar14 + 1;
      }
      else {
        (param_2->Errors).ArrayNum = iVar14 + 1;
      }
      pFVar23 = (param_2->Errors).AllocatorInstance.Data + (longlong)iVar14 * 0x10;
      *(undefined8 *)pFVar23 = 0;
      *(FScriptContainerElement **)pFVar23 = local_1e0.Data.AllocatorInstance.Data;
      local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar23 + 8) = local_1e0.Data.ArrayNum;
      *(int *)(pFVar23 + 0xc) = local_1e0.Data.ArrayMax;
      local_1e0.Data.ArrayNum = 0;
      local_1e0.Data.ArrayMax = 0;
      local_190 = 0;
    }
    else {
      if (local_238.NiagaraSystem == (UNiagaraSystem *)0x0) {
        ::FString::FString(&local_158,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)local_238.NiagaraSystem,&local_158,(UObject *)0x0);
      }
      this_02 = TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
      if (this_02 == (UObject *)0x0) {
LAB_1493bd3b8:
        ::FString::FString(&local_168,L"None");
      }
      else {
        pUVar19 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
        iVar14 = (int)pUVar19->_padding_;
        if ((*(int *)(*(longlong *)&this_02->field_0x10 + 0x38) < iVar14) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&this_02->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
            &pUVar19->_padding_)) goto LAB_1493bd3b8;
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_02,&local_168,(UObject *)0x0);
      }
      ::FString::PrintfImpl(&local_1f0,L"System %s != System %s");
      iVar14 = (param_2->Errors).ArrayNum;
      piVar1 = &(param_2->Errors).ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(param_2->Errors).AllocatorInstance,piVar1);
        (param_2->Errors).ArrayNum = iVar14 + 1;
      }
      else {
        (param_2->Errors).ArrayNum = iVar14 + 1;
      }
      pFVar23 = (param_2->Errors).AllocatorInstance.Data + (longlong)iVar14 * 0x10;
      *(undefined8 *)pFVar23 = 0;
      *(FScriptContainerElement **)pFVar23 = local_1f0.Data.AllocatorInstance.Data;
      *(int *)(pFVar23 + 8) = local_1f0.Data.ArrayNum;
      *(int *)(pFVar23 + 0xc) = local_1f0.Data.ArrayMax;
      local_1f0.Data.ArrayNum = 0;
      local_1f0.Data.ArrayMax = 0;
      local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      local_198 = 0;
    }
    *(undefined8 *)&this_00->SoftObjectPtr = 0;
    *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x10 = 0;
    *(undefined8 *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&(this->SoftNiagaraSystem).SoftObjectPtr.field_0x18,0);
  }
LAB_1493be02a:
  bVar11 = false;
LAB_1493be02d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.SystemSimulation.SharedReferenceCount.ReferenceController);
  if (&this->RWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RWLock);
  }
  return bVar11;
}

// execGetAttributeCaptureMode @ 1493c04d0

void __cdecl
UNiagaraSimCache::execGetAttributeCaptureMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[2].field_0x18;
  return;
}

// execGetEmitterName @ 1493c0500

void __cdecl UNiagaraSimCache::execGetEmitterName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_res8[0];
  if (((int)local_res8[0] < 0) || (*(int *)&param_1[9].field_0x20 <= (int)local_res8[0])) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)local_res8[0] < *(int *)&param_1[9].field_0x20) {
      uVar5 = ~local_res8[0] >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined8 *)param_3 = *(undefined8 *)(lVar4 * 0xb8 + *(longlong *)&param_1[9].field_0x18);
  }
  return;
}

// execGetEmitterNames @ 1493c0600

void __cdecl UNiagaraSimCache::execGetEmitterNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  iStack_2c = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[1].field_0x18 != 0) {
    uVar1 = *(uint *)&param_1[9].field_0x20;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar1,&local_38,0,&iStack_2c);
    }
    iVar2 = *(int *)&param_1[9].field_0x20;
    pFVar7 = *(FScriptContainerElement **)&param_1[9].field_0x18;
    pFVar8 = pFVar7 + (longlong)iVar2 * 0xb8;
    while( true ) {
      if (*(int *)&param_1[9].field_0x20 != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FNiagaraSimCacheDataBuffersLayout_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar8) break;
      if (((local_38.Data <= pFVar7) && (pFVar7 < local_38.Data + (longlong)iStack_2c * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_30 == iStack_2c) {
        local_30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_38,&iStack_2c);
      }
      lVar6 = (longlong)local_30;
      local_30 = local_30 + 1;
      uVar3 = *(undefined8 *)pFVar7;
      pFVar7 = pFVar7 + 0xb8;
      *(undefined8 *)(local_38.Data + lVar6 * 8) = uVar3;
    }
  }
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data;
    *(int *)((longlong)param_3 + 8) = local_30;
    *(int *)((longlong)param_3 + 0xc) = iStack_2c;
    local_30 = 0;
    iStack_2c = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetNumEmitters @ 1493c07c0

void __cdecl UNiagaraSimCache::execGetNumEmitters(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[9].field_0x20;
  return;
}

// execGetNumFrames @ 1493c07f0

void __cdecl UNiagaraSimCache::execGetNumFrames(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[10].field_0x8;
  return;
}

// execGetStartSeconds @ 1493c0820

void __cdecl UNiagaraSimCache::execGetStartSeconds(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[2].field_0x10;
  return;
}

// execIsCacheValid @ 1493c0850

void __cdecl UNiagaraSimCache::execIsCacheValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *(longlong *)&param_1[1].field_0x18 != 0;
  return;
}

// execIsEmpty @ 1493c0880

void __cdecl UNiagaraSimCache::execIsEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *(longlong *)&param_1[1].field_0x18 == 0;
  return;
}

// execReadColorAttribute @ 1493c08d0

void __cdecl
UNiagaraSimCache::execReadColorAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [4];
  FName local_res20;
  FName local_38;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_30;
  
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  pTVar2 = &local_30;
  if ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReadColorAttribute((UNiagaraSimCache *)param_1,pTVar2,local_38,local_res20,local_res10[0]);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// execReadDataInterfaceAs @ 1493c0a60

void __cdecl
UNiagaraSimCache::execReadDataInterfaceAs(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FProperty *pFVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  undefined4 local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined1 *local_70;
  int iStack_68;
  uint uStack_64;
  undefined1 *local_60;
  undefined4 uStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  iVar9 = 0;
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  lVar8 = local_res18;
  lVar6 = local_res10;
  uStack_64 = 1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60 = &param_1[10].field_0x20;
  iVar3 = *(int *)&param_1[0xb].field_0x10;
  local_50 = 0;
  iStack_54 = iVar9;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&param_1[0xb].field_0x8;
    if (*(uint **)&param_1[0xb].field_0x8 == (uint *)0x0) {
      puVar10 = (uint *)local_60;
    }
    uVar4 = *puVar10;
    iVar9 = 0;
    local_50 = 0;
    while (uVar4 == 0) {
      iVar9 = iVar9 + 1;
      local_50 = local_50 + 0x20;
      iStack_54 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1493c0bc8;
      uVar4 = puVar10[iVar9];
    }
    uStack_64 = ~(uVar4 - 1) & uVar4;
    uVar2 = (ulonglong)uStack_64 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_54 = (int)lVar7 + -1 + local_50;
    if (iVar3 < iStack_54) {
      iStack_54 = iVar3;
    }
  }
LAB_1493c0bc8:
  iStack_4c = TStack_90.CurrentBitIndex;
  uStack_58 = 0xffffffff;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  TStack_90._28_4_ = TStack_90.CurrentBitIndex;
  TStack_90.BaseBitIndex = local_50;
  TStack_90.CurrentBitIndex = iStack_54;
  local_70 = &param_1[10].field_0x10;
  iStack_68 = iVar9;
  TStack_90._padding_._0_4_ = iVar9;
  TStack_90._padding_._4_4_ = uStack_64;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_60;
  if (iStack_54 < *(int *)&param_1[0xb].field_0x10) {
    do {
      lVar7 = *(longlong *)&param_1[10].field_0x10;
      if (*(longlong *)(lVar7 + (longlong)TStack_90.CurrentBitIndex * 0x20) == lVar6) {
        lVar6 = *(longlong *)(lVar7 + 0x10 + (longlong)TStack_90.CurrentBitIndex * 0x20);
        iVar9 = *(int *)(lVar8 + 0x38);
        lVar7 = *(longlong *)(lVar6 + 0x10);
        if ((iVar9 <= *(int *)(lVar7 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar9 * 8) == lVar8 + 0x30)) {
          *(longlong *)param_3 = lVar6;
          return;
        }
        break;
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    } while (TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits);
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execReadFloatAttribute @ 1493c0ca0

void __cdecl
UNiagaraSimCache::execReadFloatAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [4];
  FName local_res20;
  FName local_38;
  TArray<float,TSizedDefaultAllocator<32>_> local_30;
  
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  pTVar2 = &local_30;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReadFloatAttribute((UNiagaraSimCache *)param_1,pTVar2,local_38,local_res20,local_res10[0]);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// execReadIDAttribute @ 1493c0e30

void __cdecl UNiagaraSimCache::execReadIDAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FNiagaraID,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [4];
  FName local_res20;
  FName local_38;
  TArray<FNiagaraID,TSizedDefaultAllocator<32>_> local_30;
  
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  pTVar2 = &local_30;
  if ((TArray<FNiagaraID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FNiagaraID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FNiagaraID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReadIDAttribute((UNiagaraSimCache *)param_1,pTVar2,local_38,local_res20,local_res10[0]);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// execReadIntAttribute @ 1493c0fc0

void __cdecl UNiagaraSimCache::execReadIntAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [4];
  FName local_res20;
  FName local_38;
  TArray<int,TSizedDefaultAllocator<32>_> local_30;
  
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  pTVar2 = &local_30;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReadIntAttribute((UNiagaraSimCache *)param_1,pTVar2,local_38,local_res20,local_res10[0]);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// execReadPositionAttribute @ 1493c1150

void __cdecl
UNiagaraSimCache::execReadPositionAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  int local_res10 [4];
  int local_res20 [2];
  FName local_48;
  FName local_40;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  pTVar2 = &local_38;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReadPositionAttribute((UNiagaraSimCache *)param_1,pTVar2,local_40,local_48,bVar3,local_res20[0]);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execReadPositionAttributeWithRebase @ 1493c1310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UNiagaraSimCache::execReadPositionAttributeWithRebase
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 auStackY_148 [32];
  int local_118 [2];
  FName local_110;
  FName local_108;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_100;
  TTransform<double> local_e8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  pTVar2 = &local_100;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_118[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  local_e8.Rotation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_e8.Rotation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_e8.Rotation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_e8.Rotation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  local_e8.Translation.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_e8.Translation.XY.m128d_f64[1] = (double)local_68._8_8_;
  local_e8.Translation.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_e8.Translation.ZW.m128d_f64[1] = (double)local_58._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e8.Scale3D.XY.m128d_f64[0] = (double)local_48._0_8_;
  local_e8.Scale3D.XY.m128d_f64[1] = (double)local_48._8_8_;
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)local_38._0_8_;
  local_e8.Scale3D.ZW.m128d_f64[1] = (double)local_38._8_8_;
  ReadPositionAttributeWithRebase
            ((UNiagaraSimCache *)param_1,pTVar2,&local_e8,local_108,local_110,local_118[0]);
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  return;
}

// execReadQuatAttribute @ 1493c1580

void __cdecl UNiagaraSimCache::execReadQuatAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  int local_res10 [4];
  int local_res20 [2];
  FName local_48;
  FName local_40;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  pTVar2 = &local_38;
  if ((TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReadQuatAttribute((UNiagaraSimCache *)param_1,pTVar2,local_40,local_48,bVar3,local_res20[0]);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execReadQuatAttributeWithRebase @ 1493c1740

void __cdecl
UNiagaraSimCache::execReadQuatAttributeWithRebase(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  FName local_res20;
  FName local_78;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_70;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  TQuat<double> local_38;
  
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pTVar2 = &local_70;
  if ((TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38.X = local_58;
  local_38.Y = dStack_50;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.Z = local_48;
  local_38.W = dStack_40;
  ReadQuatAttributeWithRebase
            ((UNiagaraSimCache *)param_1,pTVar2,&local_38,local_78,local_res20,local_res10[0]);
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return;
}

// execReadVector2Attribute @ 1493c1910

void __cdecl
UNiagaraSimCache::execReadVector2Attribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [4];
  FName local_res20;
  FName local_38;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_30;
  
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  pTVar2 = &local_30;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReadVector2Attribute((UNiagaraSimCache *)param_1,pTVar2,local_38,local_res20,local_res10[0]);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// execReadVector4Attribute @ 1493c1aa0

void __cdecl
UNiagaraSimCache::execReadVector4Attribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [4];
  FName local_res20;
  FName local_38;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_30;
  
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  pTVar2 = &local_30;
  if ((TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReadVector4Attribute((UNiagaraSimCache *)param_1,pTVar2,local_38,local_res20,local_res10[0]);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// execReadVectorAttribute @ 1493c1c30

void __cdecl
UNiagaraSimCache::execReadVectorAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [4];
  FName local_res20;
  FName local_38;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_30;
  
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  pTVar2 = &local_30;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReadVectorAttribute((UNiagaraSimCache *)param_1,pTVar2,local_38,local_res20,local_res10[0]);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 150541940

bool __thiscall `UNiagaraSimCache::WriteFrame'::__l43::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8525031180821593402>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8525031180821593402>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

